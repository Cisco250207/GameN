// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShooterNaves2025Pawn.h"
#include "ShooterNaves2025Projectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "InputCoreTypes.h"
#include "ShooterNaves2025GameMode.h"

const FName AShooterNaves2025Pawn::MoveForwardBinding("MoveForward");
const FName AShooterNaves2025Pawn::MoveRightBinding("MoveRight");


AShooterNaves2025Pawn::AShooterNaves2025Pawn()
{	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/NAVES/spaceship_fighter__-_version_2_meshy_6/0_Mesh1_0_Material_001_0.0_Mesh1_0_Material_001_0"));
	// Create the mesh component
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);
	ShipMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	ShipMeshComponent->SetGenerateOverlapEvents(true);
	ShipMeshComponent->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Block);
	ShipMeshComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	
	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/TwinStick/Audio/TwinStickFire.TwinStickFire"));
	FireSound = FireAudio.Object;

	// Create a camera boom...
CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
CameraBoom->SetupAttachment(RootComponent);

// Distancia de la cámara detrás de la nave
CameraBoom->TargetArmLength = 600.f;

// Cámara ligeramente arriba y atrás
CameraBoom->SetRelativeLocation(FVector(0.f, 0.f, 80.f));


// Hace que el brazo siga la rotación del Pawn
CameraBoom->bUsePawnControlRotation = false;

// Suavizado de cámara
CameraBoom->bEnableCameraLag = true;
CameraBoom->CameraLagSpeed = 8.f;

CameraBoom->bEnableCameraRotationLag = true;
CameraBoom->CameraRotationLagSpeed = 10.f;

// Evita que choque con paredes
CameraBoom->bDoCollisionTest = false;

	// Create a camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;	// Camera does not rotate relative to arm

	// Movement
	MoveSpeed = 1000.0f;

	VelocidadBase = MoveSpeed;


	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;
}

void AShooterNaves2025Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    check(PlayerInputComponent);

    PlayerInputComponent->BindAxis(MoveForwardBinding);
    PlayerInputComponent->BindAxis(MoveRightBinding);

    PlayerInputComponent->BindAxis("Turn", this, &AShooterNaves2025Pawn::Turn);
    PlayerInputComponent->BindAxis("LookUp", this, &AShooterNaves2025Pawn::LookUp);

	PlayerInputComponent->BindAxis("Fire", this, &AShooterNaves2025Pawn::Fire);

    PlayerInputComponent->BindAction("RestartLevel", IE_Pressed, this, &AShooterNaves2025Pawn::ReiniciarNivel);

    PlayerInputComponent->BindKey(EKeys::R, IE_Pressed, this, &AShooterNaves2025Pawn::ReiniciarNivel);
}

void AShooterNaves2025Pawn::Turn(float Value)
{
	if (FMath::Abs(Value) > KINDA_SMALL_NUMBER)
	{
		AddActorLocalRotation(
			FRotator(0.f, Value * 100.f * GetWorld()->GetDeltaSeconds(), 0.f)
		);
	}
}

void AShooterNaves2025Pawn::LookUp(float Value)
{
	if (FMath::Abs(Value) > KINDA_SMALL_NUMBER)
	{
		AddActorLocalRotation(
			FRotator(Value * 100.f * GetWorld()->GetDeltaSeconds(), 0.f, 0.f)
		);
	}
}
void AShooterNaves2025Pawn::Fire(float Value)
{
    if (Value > 0.0f)
    {
        FVector FireDirection =
            GetActorForwardVector();

        FireShot(FireDirection);
    }
}

void AShooterNaves2025Pawn::Tick(float DeltaSeconds)
{

	if (bEstaMuerto)
	{
		return;
	}

	// Find movement direction
const float ForwardValue =
    GetInputAxisValue(MoveForwardBinding);

const float RightValue =
    GetInputAxisValue(MoveRightBinding);

FVector Forward =
    GetActorForwardVector();

FVector Right =
    GetActorRightVector();

const FVector MoveDirection =
(
    Forward * ForwardValue +
    Right * RightValue
).GetClampedToMaxSize(1.0f);


	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = GetActorRotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
		
		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}
	

	if (CameraBoom)
{
    // Rotación de la nave
    FRotator ShipRotation = GetActorRotation();

    // Mantener inclinación de cámara
    ShipRotation.Pitch -= 10.f;

    // La cámara rota detrás de la nave
    CameraBoom->SetWorldRotation(ShipRotation);
}
}

void AShooterNaves2025Pawn::FireShot(FVector FireDirection)
{
	if (bEstaMuerto)
	{
		return;
	}

	if (!bCanFire)
	{
		return;
	}

	if (FireDirection.SizeSquared() <= 0.0f)
	{
		return;
	}

	UWorld* const World = GetWorld();

	if (!World)
	{
		return;
	}

	const FRotator FireRotation = FireDirection.Rotation();
	const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

	AShooterNaves2025Projectile* Proyectil = ObtenerProyectilDisponible();

	if (Proyectil)
	{
		Proyectil->SetOwner(this);
		Proyectil->Danio = 25.0f * MultiplicadorDanio;
		Proyectil->ActivarProyectil(SpawnLocation, FireRotation);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("No se pudo obtener ni crear proyectil"));
		return;
	}

	bCanFire = false;

	const float FireRateSeguro = FMath::Max(FireRate, 0.05f);

	World->GetTimerManager().SetTimer(
		TimerHandle_ShotTimerExpired,
		this,
		&AShooterNaves2025Pawn::ShotTimerExpired,
		FireRateSeguro,
		false
	);

	if (FireSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

}

void AShooterNaves2025Pawn::ShotTimerExpired()
{
	bCanFire = true;
}

void AShooterNaves2025Pawn::RecibirDanio(float CantidadDanio)
{
	if (bEstaMuerto)
	{
		return;
	}

	Vida -= CantidadDanio;

	if (Vida <= 0.0f)
	{
		Morir();
	}
}

void AShooterNaves2025Pawn::Morir()
{
	if (bEstaMuerto)
	{
		return;
	}

	bEstaMuerto = true;

	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);

	AShooterNaves2025GameMode* GameMode = Cast<AShooterNaves2025GameMode>(
		UGameplayStatics::GetGameMode(GetWorld())
	);

	if (GameMode)
	{
		GameMode->JugadorMurio();
	}
}

void AShooterNaves2025Pawn::Curar(float Cantidad)
{
	Vida += Cantidad;

	if (Vida > VidaMaxima)
	{
		Vida = VidaMaxima;
	}

	UE_LOG(LogTemp, Warning, TEXT("Jugador curado. Vida actual: %f"), Vida);
}

void AShooterNaves2025Pawn::ActivarDanioExtra(float Multiplicador, float Duracion)
{
	MultiplicadorDanio = Multiplicador;

	GetWorldTimerManager().ClearTimer(TimerDanioExtra);
	GetWorldTimerManager().SetTimer(
		TimerDanioExtra,
		this,
		&AShooterNaves2025Pawn::QuitarDanioExtra,
		Duracion,
		false
	);

	UE_LOG(LogTemp, Warning, TEXT("PowerUp de danio activado"));
}

void AShooterNaves2025Pawn::QuitarDanioExtra()
{
	MultiplicadorDanio = 1.0f;

	UE_LOG(LogTemp, Warning, TEXT("PowerUp de danio terminado"));
}

void AShooterNaves2025Pawn::ActivarVelocidadExtra(float Multiplicador, float Duracion)
{
	MoveSpeed = VelocidadBase * Multiplicador;

	GetWorldTimerManager().ClearTimer(TimerVelocidadExtra);
	GetWorldTimerManager().SetTimer(
		TimerVelocidadExtra,
		this,
		&AShooterNaves2025Pawn::QuitarVelocidadExtra,
		Duracion,
		false
	);

	UE_LOG(LogTemp, Warning, TEXT("PowerUp de velocidad activado"));
}

void AShooterNaves2025Pawn::QuitarVelocidadExtra()
{
	MoveSpeed = VelocidadBase;

	UE_LOG(LogTemp, Warning, TEXT("PowerUp de velocidad terminado"));
}

void AShooterNaves2025Pawn::ReiniciarNivel()
{
	UE_LOG(LogTemp, Warning, TEXT("TECLA R PRESIONADA - Reiniciando nivel"));

	UWorld* World = GetWorld();

	if (!World)
	{
		UE_LOG(LogTemp, Error, TEXT("No se pudo reiniciar: World es nullptr"));
		return;
	}

	FString NombreNivel = UGameplayStatics::GetCurrentLevelName(World, true);

	UE_LOG(LogTemp, Warning, TEXT("Nombre del nivel detectado: %s"), *NombreNivel);

	if (NombreNivel.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("No se pudo reiniciar: nombre de nivel vacio"));
		return;
	}

	UGameplayStatics::OpenLevel(World, FName(*NombreNivel));
}

void AShooterNaves2025Pawn::BeginPlay()
{
	Super::BeginPlay();

	CrearPoolProyectiles();

	// FORZAR configuración de cámara
	if (CameraBoom)
	{
		CameraBoom->bUsePawnControlRotation = false;

		CameraBoom->bInheritPitch = true;
		CameraBoom->bInheritYaw = true;
		CameraBoom->bInheritRoll = true;

		CameraBoom->TargetArmLength = 600.f;

		CameraBoom->SetRelativeLocation(
			FVector(0.f, 0.f, 80.f)
		);

	}
}

void AShooterNaves2025Pawn::CrearPoolProyectiles()
{
	PoolProyectiles.Inicializar(
		GetWorld(),
		CantidadProyectilesPool,
		FVector(0.f, 0.f, -5000.f)
	);

	UE_LOG(LogTemp, Warning,
		TEXT("Template Object Pool creado con %d proyectiles"),
		PoolProyectiles.ObtenerCantidad());
}

AShooterNaves2025Projectile* AShooterNaves2025Pawn::ObtenerProyectilDisponible()
{
	return PoolProyectiles.ObtenerDisponible(GetWorld());
}