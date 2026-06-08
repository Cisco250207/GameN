#pragma once

#include "CoreMinimal.h"
#include "PowerUpEffect.h"
#include "PowerUpEffectDecorator.generated.h"

UCLASS()
class SHOOTERNAVES2025_API UPowerUpEffectDecorator : public UPowerUpEffect
{
	GENERATED_BODY()

public:
	void Inicializar(UPowerUpEffect* NuevoEfectoDecorado);

	virtual void Aplicar(AShooterNaves2025Pawn* Jugador, UWorld* World) override;

protected:
	UPROPERTY()
	UPowerUpEffect* EfectoDecorado = nullptr;
};