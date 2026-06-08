#include "PowerUpBase.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "../ShooterNaves2025Pawn.h"
#include "Materials/MaterialInstanceDynamic.h"

APowerUpBase::APowerUpBase()
{
	PrimaryActorTick.bCanEverTick = false;

	MeshPowerUp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshPowerUp"));
	RootComponent = MeshPowerUp;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshEsfera(TEXT("/Game/NAVE/turret_double/1_Mesh_turret.1_Mesh_turret"));

	if (MeshEsfera.Succeeded())
	{
		MeshPowerUp->SetStaticMesh(MeshEsfera.Object);
	}

	MeshPowerUp->SetWorldScale3D(FVector(0.4f, 0.4f, 0.4f));
	MeshPowerUp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	MeshPowerUp->SetCollisionResponseToAllChannels(ECR_Ignore);
	MeshPowerUp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	MeshPowerUp->OnComponentBeginOverlap.AddDynamic(this, &APowerUpBase::OnOverlap);
}

void APowerUpBase::BeginPlay()
{
	Super::BeginPlay();
}

void APowerUpBase::OnOverlap(
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
		AplicarEfecto(Jugador);
		Destroy();
	}
}

void APowerUpBase::AplicarEfecto(AShooterNaves2025Pawn* Jugador)
{
	// Clase base no hace nada.
}

void APowerUpBase::CrearMaterialColor(FLinearColor Color)
{
	if (!MeshPowerUp)
	{
		return;
	}

	UMaterialInstanceDynamic* MaterialDinamico = MeshPowerUp->CreateAndSetMaterialInstanceDynamic(0);

	if (MaterialDinamico)
	{
		MaterialDinamico->SetVectorParameterValue("Color", Color);
	}
}