#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemySpawnFacade.generated.h"

class AShooterNaves2025GameMode;
class AMiniBoss;
class ABossFinal;

UCLASS(ClassGroup = (Custom))
class SHOOTERNAVES2025_API UEnemySpawnFacade : public UActorComponent
{
	GENERATED_BODY()

public:
	UEnemySpawnFacade();

	void Inicializar(AShooterNaves2025GameMode* NuevoGameMode);

	AActor* SpawnEnemigoPorNivel(int32 NivelActual);
	AMiniBoss* SpawnMiniBoss();
	ABossFinal* SpawnBossFinal();

	void RegistrarEnemigo(AActor* Enemigo);
	void DestruirTodosLosEnemigos(AActor* ActorIgnorado = nullptr);
	void VaciarEnemigos();

private:
	UPROPERTY()
	AShooterNaves2025GameMode* GameModeOwner = nullptr;

	UPROPERTY()
	TArray<AActor*> EnemigosActivos;

	FVector CalcularPosicionSpawn() const;
};