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
const FName AShooterNaves2025Pawn::FireForwardBinding("FireForward");
const FName AShooterNaves2025Pawn::FireRightBinding("FireRight");

AShooterNaves2025Pawn::AShooterNaves2025Pawn()
{	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
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
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when ship does
	CameraBoom->TargetArmLength = 1200.f;
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

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

void AShooterNaves2025Pawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	PlayerInputComponent->BindAxis(FireForwardBinding);
	PlayerInputComponent->BindAxis(FireRightBinding);

	PlayerInputComponent->BindAction("RestartLevel", IE_Pressed, this, &AShooterNaves2025Pawn::ReiniciarNivel);

	// Prueba directa: no depende del Action Mapping de Unreal
	PlayerInputComponent->BindKey(EKeys::R, IE_Pressed, this, &AShooterNaves2025Pawn::ReiniciarNivel);
}

void AShooterNaves2025Pawn::Tick(float DeltaSeconds)
{

	if (bEstaMuerto)
	{
		return;
	}

	// Find movement direction
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
		
		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}
	
	// Create fire direction vector
	const float FireForwardValue = GetInputAxisValue(FireForwardBinding);
	const float FireRightValue = GetInputAxisValue(FireRightBinding);
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f);

	// Try and fire a shot
	FireShot(FireDirection);
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