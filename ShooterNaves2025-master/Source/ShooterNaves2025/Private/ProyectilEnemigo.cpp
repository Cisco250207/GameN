#include "ProyectilEnemigo.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "../ShooterNaves2025Pawn.h"

AProyectilEnemigo::AProyectilEnemigo()
{
	PrimaryActorTick.bCanEverTick = false;

	MeshProyectil = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshProyectil"));
	RootComponent = MeshProyectil;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshEsfera(TEXT("/Engine/BasicShapes/Sphere.Sphere"));

	if (MeshEsfera.Succeeded())
	{
		MeshProyectil->SetStaticMesh(MeshEsfera.Object);
	}

	MeshProyectil->SetWorldScale3D(FVector(0.25f, 0.25f, 0.25f));
	MeshProyectil->SetGenerateOverlapEvents(true);
	MeshProyectil->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	MeshProyectil->SetCollisionResponseToAllChannels(ECR_Ignore);
	MeshProyectil->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	MeshProyectil->OnComponentBeginOverlap.AddDynamic(this, &AProyectilEnemigo::OnOverlap);

	MovimientoProyectil = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("MovimientoProyectil"));
	MovimientoProyectil->UpdatedComponent = MeshProyectil;
	MovimientoProyectil->InitialSpeed = 1200.0f;
	MovimientoProyectil->MaxSpeed = 1200.0f;
	MovimientoProyectil->ProjectileGravityScale = 0.0f;
	MovimientoProyectil->bRotationFollowsVelocity = true;

	bActivo = false;
	MeshProyectil->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	MeshProyectil->SetVisibility(false);
	MeshProyectil->SetHiddenInGame(true);
}


void AProyectilEnemigo::OnOverlap(
	UPrimitiveComponent* OverlappedComp,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult
)
{
	AShooterNaves2025Pawn* Jugador = Cast<AShooterNaves2025Pawn>(OtherActor);

	if (Jugador)
	{
		UE_LOG(LogTemp, Warning, TEXT("Proyectil enemigo hizo danio por overlap: %f"), Danio);
		Jugador->RecibirDanio(Danio);
		DesactivarProyectil();
	}
}

void AProyectilEnemigo::ActivarProyectil(FVector NuevaUbicacion, FRotator NuevaRotacion)
{
	bActivo = true;

	SetActorHiddenInGame(false);
	SetActorTickEnabled(true);

	SetActorLocationAndRotation(
		NuevaUbicacion,
		NuevaRotacion,
		false,
		nullptr,
		ETeleportType::TeleportPhysics
	);

	if (MeshProyectil)
	{
		MeshProyectil->SetHiddenInGame(false);
		MeshProyectil->SetVisibility(true);
		MeshProyectil->SetGenerateOverlapEvents(true);
		MeshProyectil->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
		MeshProyectil->SetCollisionResponseToAllChannels(ECR_Ignore);
		MeshProyectil->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	}

	if (MovimientoProyectil)
	{
		MovimientoProyectil->StopMovementImmediately();
		MovimientoProyectil->SetComponentTickEnabled(true);
		MovimientoProyectil->Activate(true);
		MovimientoProyectil->Velocity = NuevaRotacion.Vector() * MovimientoProyectil->InitialSpeed;
	}

	SetActorLocationAndRotation(
		NuevaUbicacion,
		NuevaRotacion,
		false,
		nullptr,
		ETeleportType::TeleportPhysics
	);

	SetActorEnableCollision(true);

	if (GetWorld())
	{
		GetWorldTimerManager().ClearTimer(TimerDesactivar);
		GetWorldTimerManager().SetTimer(
			TimerDesactivar,
			this,
			&AProyectilEnemigo::DesactivarProyectil,
			4.0f,
			false
		);
	}
}

void AProyectilEnemigo::DesactivarProyectil()
{
	bActivo = false;

	if (GetWorld())
	{
		GetWorldTimerManager().ClearTimer(TimerDesactivar);
	}

	if (MovimientoProyectil)
	{
		MovimientoProyectil->StopMovementImmediately();
		MovimientoProyectil->Deactivate();
	}

	if (MeshProyectil)
	{
		MeshProyectil->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		MeshProyectil->SetVisibility(false);
		MeshProyectil->SetHiddenInGame(true);
	}

	SetActorEnableCollision(false);
	SetActorHiddenInGame(true);

	// No uses SetActorTickEnabled ni SetActorLocation aqui por ahora.
}