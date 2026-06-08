#include "Nave_Francotirador.h"
#include "EnemyAttackFacade.h"
#include "GameFramework/Pawn.h"

ANave_Francotirador::ANave_Francotirador()
{
	Vida = 80.0f;
	Velocidad = 250.0f;
	DanioContacto = 10.0f;
	DistanciaMinima = 80.0f;
	bPerseguirJugador = false;
}

void ANave_Francotirador::BeginPlay()
{
	Super::BeginPlay();
}

void ANave_Francotirador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MantenerDistancia(DeltaTime);
}

void ANave_Francotirador::ConfigurarPatronesAtaque()
{
	PatronesAtaque.Empty();
	PatronesAtaque.Add(EPatronAtaqueEnemigo::DisparoFrancotirador);
	PatronesAtaque.Add(EPatronAtaqueEnemigo::DisparoCargado);

	TiempoEntreAtaques = 2.4f;
	DistanciaMaximaAtaque = 1600.0f;
	CantidadProyectilesPoolAtaque = 8;
}

void ANave_Francotirador::EjecutarPatronAtaque(EPatronAtaqueEnemigo Patron)
{
	if (!AttackFacade)
	{
		return;
	}

	switch (Patron)
	{
	case EPatronAtaqueEnemigo::DisparoFrancotirador:
		AttackFacade->DispararFrancotirador(35.0f, 1900.0f, 0.22f, 120.0f);
		break;

	case EPatronAtaqueEnemigo::DisparoCargado:
		AttackFacade->DispararCargado(55.0f, 1300.0f, 0.45f, 120.0f);
		break;

	default:
		break;
	}
}

void ANave_Francotirador::MantenerDistancia(float DeltaTime)
{
	if (!Jugador || bEstaMuerta)
	{
		return;
	}

	FVector DireccionAJugador = Jugador->GetActorLocation() - GetActorLocation();
	DireccionAJugador.Z = 0.0f;

	float Distancia = DireccionAJugador.Size();

	if (Distancia <= 1.0f)
	{
		return;
	}

	FVector Direccion = DireccionAJugador.GetSafeNormal();
	FVector Movimiento = FVector::ZeroVector;

	if (Distancia < DistanciaEscape)
	{
		Movimiento = -Direccion * Velocidad * DeltaTime;
	}
	else if (Distancia > DistanciaIdeal)
	{
		Movimiento = Direccion * Velocidad * DeltaTime;
	}

	FVector NuevaUbicacion = GetActorLocation() + Movimiento;
	NuevaUbicacion.Z = Jugador->GetActorLocation().Z;
	SetActorLocation(NuevaUbicacion);

	SetActorRotation(Direccion.Rotation());
}