#pragma once

#include "CoreMinimal.h"
#include "Nave_Padre.h"
#include "TObjectPool.h"
#include "Nave_Tanque.generated.h"

class AProyectilEnemigo;

UCLASS()
class SHOOTERNAVES2025_API ANave_Tanque : public ANave_Padre
{
	GENERATED_BODY()

public:
	ANave_Tanque();

protected:
	virtual void BeginPlay() override;

private:
	FTimerHandle TimerDisparo;

	UPROPERTY(EditAnywhere, Category = "Ataque")
	float TiempoEntreDisparos = 3.0f;

	void Disparar();

	TObjectPool<AProyectilEnemigo> PoolProyectiles;

	UPROPERTY(EditAnywhere, Category = "Pool")
	int32 CantidadProyectilesPool = 8;
};