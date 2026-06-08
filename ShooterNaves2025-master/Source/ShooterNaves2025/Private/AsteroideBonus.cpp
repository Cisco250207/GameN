#include "AsteroideBonus.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "PowerUpCuracion.h"
#include "PowerUpDanioExtra.h"
#include "PowerUpVelocidadExtra.h"

AAsteroideBonus::AAsteroideBonus()
{
	PrimaryActorTick.bCanEverTick = false;

	MeshAsteroide = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshAsteroide"));
	RootComponent = MeshAsteroide;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshRoca(TEXT("/Game/NAVE/hangar_largeB/0_Mesh_hangar_largeB.0_Mesh_hangar_largeB"));

	if (MeshRoca.Succeeded())
	{
		MeshAsteroide->SetStaticMesh(MeshRoca.Object);
	}

	MeshAsteroide->SetWorldScale3D(FVector(1.2f, 1.2f, 1.2f));
	MeshAsteroide->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	MeshAsteroide->SetCollisionResponseToAllChannels(ECR_Block);
}

void AAsteroideBonus::RecibirDanio(float CantidadDanio)
{
	Vida -= CantidadDanio;

	if (Vida <= 0.0f)
	{
		Morir();
	}
}

void AAsteroideBonus::Morir()
{
	SoltarPowerUp();
	Destroy();
}

void AAsteroideBonus::SoltarPowerUp()
{
	UWorld* World = GetWorld();

	if (!World)
	{
		return;
	}

	if (FMath::FRand() > ProbabilidadSoltarPowerUp)
	{
		return;
	}

	FVector SpawnPos = GetActorLocation();
	SpawnPos.Z += 50.0f;

	int32 Tipo = FMath::RandRange(0, 2);

	if (Tipo == 0)
	{
		World->SpawnActor<APowerUpCuracion>(
			APowerUpCuracion::StaticClass(),
			SpawnPos,
			FRotator::ZeroRotator
		);
	}
	else if (Tipo == 1)
	{
		World->SpawnActor<APowerUpDanioExtra>(
			APowerUpDanioExtra::StaticClass(),
			SpawnPos,
			FRotator::ZeroRotator
		);
	}
	else
	{
		World->SpawnActor<APowerUpVelocidadExtra>(
			APowerUpVelocidadExtra::StaticClass(),
			SpawnPos,
			FRotator::ZeroRotator
		);
	}
}