#include "EnemySpawnFacade.h"
#include "../ShooterNaves2025GameMode.h"
#include "EnemyFactory.h"
#include "MiniBoss.h"
#include "BossFinal.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "GameFramework/Pawn.h"

UEnemySpawnFacade::UEnemySpawnFacade()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UEnemySpawnFacade::Inicializar(AShooterNaves2025GameMode* NuevoGameMode)
{
	GameModeOwner = NuevoGameMode;
}

AActor* UEnemySpawnFacade::SpawnEnemigoPorNivel(int32 NivelActual)
{
	if (!GameModeOwner || !GameModeOwner->GetWorld())
	{
		return nullptr;
	}

	AActor* NuevoEnemigo = FEnemyFactory::CrearEnemigoPorNivel(
		GameModeOwner->GetWorld(),
		NivelActual,
		CalcularPosicionSpawn()
	);

	RegistrarEnemigo(NuevoEnemigo);

	return NuevoEnemigo;
}

AMiniBoss* UEnemySpawnFacade::SpawnMiniBoss()
{
	if (!GameModeOwner || !GameModeOwner->GetWorld())
	{
		return nullptr;
	}

	AMiniBoss* MiniBoss = GameModeOwner->GetWorld()->SpawnActor<AMiniBoss>(
		AMiniBoss::StaticClass(),
		CalcularPosicionSpawn(),
		FRotator::ZeroRotator
	);

	RegistrarEnemigo(MiniBoss);

	return MiniBoss;
}

ABossFinal* UEnemySpawnFacade::SpawnBossFinal()
{
	if (!GameModeOwner || !GameModeOwner->GetWorld())
	{
		return nullptr;
	}

	ABossFinal* BossFinal = GameModeOwner->GetWorld()->SpawnActor<ABossFinal>(
		ABossFinal::StaticClass(),
		CalcularPosicionSpawn(),
		FRotator::ZeroRotator
	);

	RegistrarEnemigo(BossFinal);

	return BossFinal;
}

void UEnemySpawnFacade::RegistrarEnemigo(AActor* Enemigo)
{
	if (Enemigo)
	{
		EnemigosActivos.Add(Enemigo);
	}
}

void UEnemySpawnFacade::DestruirTodosLosEnemigos(AActor* ActorIgnorado)
{
	for (int32 i = EnemigosActivos.Num() - 1; i >= 0; i--)
	{
		AActor* Enemigo = EnemigosActivos[i];

		if (!IsValid(Enemigo))
		{
			EnemigosActivos.RemoveAt(i);
			continue;
		}

		if (ActorIgnorado && Enemigo == ActorIgnorado)
		{
			EnemigosActivos.RemoveAt(i);
			continue;
		}

		Enemigo->Destroy();
		EnemigosActivos.RemoveAt(i);
	}
}

void UEnemySpawnFacade::VaciarEnemigos()
{
	EnemigosActivos.Empty();
}

FVector UEnemySpawnFacade::CalcularPosicionSpawn() const
{
	float AlturaJugador = 200.0f;

	if (GameModeOwner && GameModeOwner->GetWorld())
	{
		APawn* Jugador = UGameplayStatics::GetPlayerPawn(GameModeOwner->GetWorld(), 0);

		if (Jugador)
		{
			AlturaJugador = Jugador->GetActorLocation().Z;
		}
	}

	return FVector(
		FMath::FRandRange(-800.0f, 800.0f),
		FMath::FRandRange(-800.0f, 800.0f),
		AlturaJugador
	);
}