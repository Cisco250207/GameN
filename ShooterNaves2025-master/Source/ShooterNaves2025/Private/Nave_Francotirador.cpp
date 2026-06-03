#include "Nave_Francotirador.h"
#include "ProyectilEnemigo.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "GameFramework/ProjectileMovementComponent.h"
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

	PoolProyectiles.Inicializar(
		GetWorld(),
		CantidadProyectilesPool,
		FVector(0.f, 0.f, -5000.f)
	);

	UE_LOG(LogTemp, Warning, TEXT("Francotirador BeginPlay - Pool inicializado"));

	GetWorldTimerManager().SetTimer(
		TimerDisparo,
		this,
		&ANave_Francotirador::Disparar,
		TiempoEntreDisparos,
		true
	);
}

void ANave_Francotirador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MantenerDistancia(DeltaTime);
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

void ANave_Francotirador::Disparar()
{
	UE_LOG(LogTemp, Warning, TEXT("Francotirador intento disparar"));

	if (!Jugador)
	{
		UE_LOG(LogTemp, Error, TEXT("Francotirador no dispara: Jugador es nullptr"));
		return;
	}

	if (bEstaMuerta)
	{
		UE_LOG(LogTemp, Error, TEXT("Francotirador no dispara: esta muerto"));
		return;
	}

	FVector Direccion = Jugador->GetActorLocation() - GetActorLocation();
	Direccion.Z = 0.0f;

	if (Direccion.SizeSquared() <= 0.0f)
	{
		UE_LOG(LogTemp, Error, TEXT("Francotirador no dispara: direccion invalida"));
		return;
	}

	FRotator RotacionDisparo = Direccion.Rotation();
	FVector SpawnLocation = GetActorLocation() + RotacionDisparo.RotateVector(FVector(120.0f, 0.0f, 0.0f));

	AProyectilEnemigo* Bala = PoolProyectiles.ObtenerDisponible(GetWorld());

	if (!Bala)
	{
		UE_LOG(LogTemp, Error, TEXT("Francotirador no pudo obtener bala del pool"));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("Francotirador disparo usando Object Pool"));

	Bala->SetOwner(this);
	Bala->Danio = 35.0f;
	Bala->MovimientoProyectil->InitialSpeed = 1800.0f;
	Bala->MovimientoProyectil->MaxSpeed = 1800.0f;

	if (Bala->MeshProyectil)
	{
		Bala->MeshProyectil->SetWorldScale3D(FVector(0.25f, 0.25f, 0.25f));
	}

	Bala->ActivarProyectil(SpawnLocation, RotacionDisparo);
}