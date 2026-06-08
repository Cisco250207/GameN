#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TObjectPool.h"
#include "EnemyAttackFacade.generated.h"

class ANave_Padre;
class AProyectilEnemigo;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class SHOOTERNAVES2025_API UEnemyAttackFacade : public UActorComponent
{
	GENERATED_BODY()

public:
	UEnemyAttackFacade();

	void Inicializar(ANave_Padre* EnemigoOwner, int32 CantidadInicialPool);

	void DispararRecto(float Danio, float Velocidad, float Escala, float DistanciaSpawn);
	void DispararTriple(float Danio, float Velocidad, float Escala, float DistanciaSpawn);
	void DispararRafaga(float Danio, float Velocidad, float Escala, float DistanciaSpawn);
	void DispararFrancotirador(float Danio, float Velocidad, float Escala, float DistanciaSpawn);
	void DispararCargado(float Danio, float Velocidad, float Escala, float DistanciaSpawn);

private:
	ANave_Padre* OwnerNave = nullptr;

	TObjectPool<AProyectilEnemigo> PoolProyectiles;

	void DispararConAngulo(float AnguloGrados, float Danio, float Velocidad, float Escala, float DistanciaSpawn);
};