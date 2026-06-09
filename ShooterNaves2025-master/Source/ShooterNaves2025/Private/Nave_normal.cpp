#include "Nave_Normal.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

// Nave normal: equilibrada
ANave_Normal::ANave_Normal()
{
    // Stats
    Vida = 100.0f;
    Velocidad = 300.0f;
    DanioContacto = 15.0f;

    // Cambiar mesh del padre
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CuboMesh(
        TEXT("/Engine/BasicShapes/Cube.Cube"));

    if (CuboMesh.Succeeded())
    {
        MeshNave->SetStaticMesh(CuboMesh.Object);
    }

    MeshNave->SetWorldScale3D(FVector(1.5f, 1.5f, 1.5f));
	TiempoCambioEmbestida = 2.0f;
}

void ANave_Normal::ConfigurarPatronesAtaque()
{
	PatronesAtaque.Empty();
	PatronesAtaque.Add(EPatronAtaqueEnemigo::Embestida);

	TiempoEntreAtaques = 0.0f;
	DistanciaMaximaAtaque = 0.0f;
}

FVector ANave_Normal::CalcularDireccionMovimiento(float DeltaTime)
{
	ActualizarEstadoEmbestida(DeltaTime);

	if (!Jugador)
	{
		return FVector::ZeroVector;
	}

	if (bPreparandoEmbestida)
	{
		return FVector::ZeroVector;
	}

	if (bEmbestidaActiva)
	{
		return DireccionEmbestida;
	}

	FVector Direccion = Jugador->GetActorLocation() - GetActorLocation();
	Direccion.Z = 0.0f;

	if (Direccion.SizeSquared() <= 0.0f)
	{
		return FVector::ZeroVector;
	}

	return Direccion.GetSafeNormal();
}

void ANave_Normal::ActualizarEstadoEmbestida(float DeltaTime)
{
	if (!Jugador || bEstaMuerta)
	{
		return;
	}

	float TiempoActual = GetWorld()->GetTimeSeconds();

	if (!bPreparandoEmbestida && !bEmbestidaActiva &&
		TiempoActual >= TiempoCambioEmbestida)
	{
		FVector Direccion = Jugador->GetActorLocation() - GetActorLocation();
		Direccion.Z = 0.0f;

		if (Direccion.SizeSquared() > 0.0f)
		{
			DireccionEmbestida = Direccion.GetSafeNormal();
		}

		bPreparandoEmbestida = true;
		TiempoCambioEmbestida = TiempoActual + DuracionPreparacion;
		return;
	}

	if (bPreparandoEmbestida && TiempoActual >= TiempoCambioEmbestida)
	{
		bPreparandoEmbestida = false;
		bEmbestidaActiva = true;

		Velocidad *= MultiplicadorVelocidadEmbestida;
		TiempoCambioEmbestida = TiempoActual + DuracionEmbestida;
		return;
	}

	if (bEmbestidaActiva && TiempoActual >= TiempoCambioEmbestida)
	{
		bEmbestidaActiva = false;

		Velocidad /= MultiplicadorVelocidadEmbestida;
		TiempoCambioEmbestida = TiempoActual + IntervaloEmbestida;
	}
}