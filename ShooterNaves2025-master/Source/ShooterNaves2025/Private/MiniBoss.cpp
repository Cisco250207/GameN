#include "MiniBoss.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"

AMiniBoss::AMiniBoss()
{
	// Stats del miniboss
	Vida = 600.0f;
	Velocidad = 120.0f;
	DanioContacto = 50.0f;
	DistanciaMinima = 150.0f;
	bEsMiniBoss = true;
	MultiplicadorDanioRecibido = 0.35f;

	// Mesh distintiva del miniboss
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BossMesh(
		TEXT("/Engine/BasicShapes/Cone.Cone"));

	if (BossMesh.Succeeded())
	{
		MeshNave->SetStaticMesh(BossMesh.Object);
	}

	// Mucho mas grande que enemigos normales
	MeshNave->SetRelativeLocation(FVector(0.0f, 0.0f, 200.0f));
	MeshNave->SetWorldScale3D(FVector(2.0f, 2.0f, 1.0f));
}

void AMiniBoss::Debilitar()
{
	MultiplicadorDanioRecibido = 1.0f;
	Velocidad = 90.0f;

	UE_LOG(LogTemp, Warning, TEXT("MiniBoss debilitado. Ahora recibe daño completo."));
}