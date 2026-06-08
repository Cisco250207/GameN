#include "EnemyAttackFacade.h"
#include "Nave_Padre.h"
#include "ProyectilEnemigo.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"

UEnemyAttackFacade::UEnemyAttackFacade()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UEnemyAttackFacade::Inicializar(ANave_Padre* EnemigoOwner, int32 CantidadInicialPool)
{
	OwnerNave = EnemigoOwner;

	if (OwnerNave && OwnerNave->GetWorld())
	{
		PoolProyectiles.Inicializar(
			OwnerNave->GetWorld(),
			CantidadInicialPool,
			FVector(0.0f, 0.0f, -5000.0f)
		);
	}
}

void UEnemyAttackFacade::DispararRecto(float Danio, float Velocidad, float Escala, float DistanciaSpawn)
{
	DispararConAngulo(0.0f, Danio, Velocidad, Escala, DistanciaSpawn);
}

void UEnemyAttackFacade::DispararTriple(float Danio, float Velocidad, float Escala, float DistanciaSpawn)
{
	DispararConAngulo(-15.0f, Danio, Velocidad, Escala, DistanciaSpawn);
	DispararConAngulo(0.0f, Danio, Velocidad, Escala, DistanciaSpawn);
	DispararConAngulo(15.0f, Danio, Velocidad, Escala, DistanciaSpawn);
}

void UEnemyAttackFacade::DispararRafaga(float Danio, float Velocidad, float Escala, float DistanciaSpawn)
{
	DispararConAngulo(-6.0f, Danio, Velocidad, Escala, DistanciaSpawn);
	DispararConAngulo(0.0f, Danio, Velocidad, Escala, DistanciaSpawn);
	DispararConAngulo(6.0f, Danio, Velocidad, Escala, DistanciaSpawn);
}

void UEnemyAttackFacade::DispararFrancotirador(float Danio, float Velocidad, float Escala, float DistanciaSpawn)
{
	DispararConAngulo(0.0f, Danio, Velocidad, Escala, DistanciaSpawn);
}

void UEnemyAttackFacade::DispararCargado(float Danio, float Velocidad, float Escala, float DistanciaSpawn)
{
	DispararConAngulo(0.0f, Danio, Velocidad, Escala, DistanciaSpawn);
}

void UEnemyAttackFacade::DispararConAngulo(float AnguloGrados, float Danio, float Velocidad, float Escala, float DistanciaSpawn)
{
	if (!OwnerNave || !OwnerNave->Jugador || OwnerNave->bEstaMuerta)
	{
		return;
	}

	FVector Direccion = OwnerNave->Jugador->GetActorLocation() - OwnerNave->GetActorLocation();
	Direccion.Z = 0.0f;

	if (Direccion.SizeSquared() <= 0.0f)
	{
		return;
	}

	FRotator RotacionDisparo = Direccion.Rotation();
	RotacionDisparo.Yaw += AnguloGrados;

	FVector SpawnLocation = OwnerNave->GetActorLocation() +
		RotacionDisparo.RotateVector(FVector(DistanciaSpawn, 0.0f, 0.0f));

	AProyectilEnemigo* Bala = PoolProyectiles.ObtenerDisponible(OwnerNave->GetWorld());

	if (!Bala)
	{
		return;
	}

	Bala->SetOwner(OwnerNave);
	Bala->Danio = Danio;

	if (Bala->MovimientoProyectil)
	{
		Bala->MovimientoProyectil->InitialSpeed = Velocidad;
		Bala->MovimientoProyectil->MaxSpeed = Velocidad;
	}

	if (Bala->MeshProyectil)
	{
		Bala->MeshProyectil->SetWorldScale3D(FVector(Escala, Escala, Escala));
	}

	Bala->ActivarProyectil(SpawnLocation, RotacionDisparo);
}