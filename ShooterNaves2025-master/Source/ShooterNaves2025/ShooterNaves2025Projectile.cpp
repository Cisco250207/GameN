// Copyright Epic Games, Inc. All Rights Reserve

#include "ShooterNaves2025Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"
#include "Nave_Padre.h"
#include "AsteroideBonus.h"

AShooterNaves2025Projectile::AShooterNaves2025Projectile() 
{
	// Static reference to the mesh to use for the projectile
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));

	// Create mesh component for the projectile sphere
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
	ProjectileMesh->SetupAttachment(RootComponent);
	ProjectileMesh->BodyInstance.SetCollisionProfileName("Projectile");
	ProjectileMesh->OnComponentHit.AddDynamic(this, &AShooterNaves2025Projectile::OnHit);		// set up a notification for when this component hits something
	RootComponent = ProjectileMesh;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
	ProjectileMovement->UpdatedComponent = ProjectileMesh;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.f; // No gravity

	// Die after 3 seconds by default
	InitialLifeSpan = 0.0f; // Evitar que el motor destruya fisicamente el actor del pool
}

void AShooterNaves2025Projectile::OnHit(
	UPrimitiveComponent* HitComp,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	FVector NormalImpulse,
	const FHitResult& Hit
)
{
	if (OtherActor == nullptr || OtherActor == this || OtherActor == GetOwner())
	{
		return;
	}

	bool bDebeDesactivarse = false;

	ANave_Padre* NaveEnemiga = Cast<ANave_Padre>(OtherActor);

	if (NaveEnemiga != nullptr)
	{
		NaveEnemiga->RecibirDanio(Danio);
		bDebeDesactivarse = true;
	}

	AAsteroideBonus* Asteroide = Cast<AAsteroideBonus>(OtherActor);

	if (Asteroide != nullptr)
	{
		Asteroide->RecibirDanio(Danio);
		bDebeDesactivarse = true;
	}

	if ((OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
		bDebeDesactivarse = true;
	}

	// Si golpea cualquier objeto bloqueante del mundo, tambien se desactiva
	if (OtherActor != nullptr && NaveEnemiga == nullptr && Asteroide == nullptr)
	{
		bDebeDesactivarse = true;
	}

	if (bDebeDesactivarse)
	{
		DesactivarProyectil();
	}
}

void AShooterNaves2025Projectile::ActivarProyectil(FVector NuevaUbicacion, FRotator NuevaRotacion)
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

	if (ProjectileMovement)
	{
		ProjectileMovement->StopMovementImmediately();
		ProjectileMovement->SetComponentTickEnabled(true);
		ProjectileMovement->Activate(true);
		ProjectileMovement->Velocity = NuevaRotacion.Vector() * ProjectileMovement->InitialSpeed;
	}

	if (ProjectileMesh)
	{
		AActor* OwnerActor = GetOwner();

		if (OwnerActor)
		{
			ProjectileMesh->IgnoreActorWhenMoving(OwnerActor, true);
		}

		ProjectileMesh->SetHiddenInGame(false);
		ProjectileMesh->SetVisibility(true);
		ProjectileMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}

	SetActorEnableCollision(true);

	if (GetWorld())
	{
		GetWorldTimerManager().ClearTimer(TimerDesactivar);
		GetWorldTimerManager().SetTimer(
			TimerDesactivar,
			this,
			&AShooterNaves2025Projectile::DesactivarProyectil,
			3.0f,
			false
		);
	}

	UE_LOG(LogTemp, Warning, TEXT("Proyectil activado en: %s"), *NuevaUbicacion.ToString());
}

void AShooterNaves2025Projectile::DesactivarProyectil()
{
	bActivo = false;

	if (GetWorld())
	{
		GetWorldTimerManager().ClearTimer(TimerDesactivar);
	}

	if (ProjectileMovement)
	{
		ProjectileMovement->StopMovementImmediately();
		ProjectileMovement->Deactivate();
		ProjectileMovement->SetComponentTickEnabled(false);
	}

	if (ProjectileMesh)
	{
		ProjectileMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		ProjectileMesh->SetHiddenInGame(true);
	}

	SetActorEnableCollision(false);
	SetActorHiddenInGame(true);
	SetActorTickEnabled(false);
	SetActorLocation(FVector(0.f, 0.f, -5000.f));

	AActor* OwnerActor = GetOwner();

	if (OwnerActor && ProjectileMesh)
	{
		ProjectileMesh->IgnoreActorWhenMoving(OwnerActor, true);
	}
}