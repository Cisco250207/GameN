#include "Nave_Tanque.h"
#include "ProyectilEnemigo.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "TimerManager.h"
#include "Engine/World.h"

ANave_Tanque::ANave_Tanque()
{
	Vida = 500.0f;
	Velocidad = 120.0f;
	DanioContacto = 45.0f;
	DistanciaMinima = 130.0f;
	MultiplicadorDanioRecibido = 0.75f;
}

void ANave_Tanque::BeginPlay()
{
	Super::BeginPlay();

	PoolProyectiles.Inicializar(
		GetWorld(),
		CantidadProyectilesPool,
		FVector(0.f, 0.f, -5000.f)
	);

	GetWorldTimerManager().SetTimer(
		TimerDisparo,
		this,
		&ANave_Tanque::Disparar,
		TiempoEntreDisparos,
		true
	);
}

void ANave_Tanque::Disparar()
{
	if (!Jugador || bEstaMuerta)
	{
		return;
	}

	FVector Direccion = Jugador->GetActorLocation() - GetActorLocation();
	Direccion.Z = 0.0f;

	if (Direccion.SizeSquared() <= 0.0f)
	{
		return;
	}

	FRotator RotacionDisparo = Direccion.Rotation();
	FVector SpawnLocation = GetActorLocation() + RotacionDisparo.RotateVector(FVector(140.0f, 0.0f, 0.0f));

	AProyectilEnemigo* Bala = PoolProyectiles.ObtenerDisponible(GetWorld());

	if (Bala)
	{
		Bala->SetOwner(this);
		Bala->Danio = 35.0f;
		Bala->MovimientoProyectil->InitialSpeed = 1800.0f;
		Bala->MovimientoProyectil->MaxSpeed = 1800.0f;
		Bala->ActivarProyectil(SpawnLocation, RotacionDisparo);
	}
}