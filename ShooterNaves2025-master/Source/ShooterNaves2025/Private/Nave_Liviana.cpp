#include "Nave_Liviana.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

ANave_Liviana::ANave_Liviana()
{
	// Stats
	Vida = 40.0f;
	Velocidad = 450.0f;
	DanioContacto = 10.0f;
	DistanciaMinima = 80.0f;

	// Esfera
	static ConstructorHelpers::FObjectFinder<UStaticMesh> EsferaMesh(
		TEXT("/Game/NAVE/craft_speederB/0_Mesh_craft_speederB.0_Mesh_craft_speederB"));

	if (EsferaMesh.Succeeded())
	{
		MeshNave->SetStaticMesh(EsferaMesh.Object);
	}

	// Escala peque�a
	MeshNave->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
	MeshNave->SetRelativeRotation(FRotator(0.f, 90.f, 0.f));
}

void ANave_Liviana::ConfigurarPatronesAtaque()
{
	PatronesAtaque.Empty();
	PatronesAtaque.Add(EPatronAtaqueEnemigo::EmbestidaZigZag);

	TiempoEntreAtaques = 0.0f;
	DistanciaMaximaAtaque = 0.0f;

	AmplitudZigZag = 180.0f;
	FrecuenciaZigZag = 7.0f;
}

FVector ANave_Liviana::CalcularDireccionMovimiento(float DeltaTime)
{
	if (!Jugador)
	{
		return FVector::ZeroVector;
	}

	FVector DireccionAJugador = Jugador->GetActorLocation() - GetActorLocation();
	DireccionAJugador.Z = 0.0f;

	if (DireccionAJugador.SizeSquared() <= 0.0f)
	{
		return FVector::ZeroVector;
	}

	FVector DireccionBase = DireccionAJugador.GetSafeNormal();
	FVector DireccionLateral = FVector::CrossProduct(FVector::UpVector, DireccionBase).GetSafeNormal();

	float ZigZag = FMath::Sin(TiempoVida * FrecuenciaZigZag);

	FVector DireccionFinal = DireccionBase + DireccionLateral * ZigZag * 0.7f;
	DireccionFinal.Z = 0.0f;

	return DireccionFinal.GetSafeNormal();
}