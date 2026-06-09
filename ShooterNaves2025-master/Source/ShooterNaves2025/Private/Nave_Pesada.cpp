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
		TEXT("/Game/NAVES/space_ship_(10)/0_Object_0.0_Object_0"));

	if (CilindroMesh.Succeeded())
	{
		MeshNave->SetStaticMesh(CilindroMesh.Object);
	}

	// Escala grande
	MeshNave->SetWorldScale3D(FVector(2.0f, 2.0f, 2.0f));
}

void ANave_Pesada::ConfigurarPatronesAtaque()
{
	PatronesAtaque.Empty();
	PatronesAtaque.Add(EPatronAtaqueEnemigo::Embestida);
	PatronesAtaque.Add(EPatronAtaqueEnemigo::OndaChoque);

	TiempoEntreAtaques = 0.0f;
	DistanciaMaximaAtaque = 0.0f;
	CooldownContacto = 1.5f;
}

void ANave_Pesada::AtacarPorContacto()
{
	if (!Jugador || bEstaMuerta || !PuedeAtacarPorContacto())
	{
		return;
	}

	TiempoUltimoAtaqueContacto = GetWorld()->GetTimeSeconds();

	HacerDanioAlJugador();

	UE_LOG(LogTemp, Warning, TEXT("Nave pesada hizo onda de choque"));

	FVector DireccionEscape = GetActorLocation() - Jugador->GetActorLocation();
	DireccionEscape.Z = 0.0f;

	if (!DireccionEscape.IsNearlyZero())
	{
		DireccionEscape.Normalize();
		SetActorLocation(GetActorLocation() + DireccionEscape * 180.0f);
	}
}