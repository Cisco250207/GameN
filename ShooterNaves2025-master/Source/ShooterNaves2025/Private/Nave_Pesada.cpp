#include "Nave_Pesada.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

ANave_Pesada::ANave_Pesada()
{
	// Stats
	Vida = 250.0f;
	Velocidad = 160.0f;
	DanioContacto = 30.0f;
	DistanciaMinima = 120.0f;


	// Cilindro
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CilindroMesh(
		TEXT("/Game/Geometry/craft_miner/0_Mesh_craft_miner.0_Mesh_craft_miner"));

	if (CilindroMesh.Succeeded())
	{
		MeshNave->SetStaticMesh(CilindroMesh.Object);
	}

	// Escala grande
	MeshNave->SetWorldScale3D(FVector(2.0f, 2.0f, 2.0f));
}