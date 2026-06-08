#pragma once

#include "CoreMinimal.h"
#include "PowerUpEffectDecorator.h"
#include "PowerUpCuracionDecorator.generated.h"

UCLASS()
class SHOOTERNAVES2025_API UPowerUpCuracionDecorator : public UPowerUpEffectDecorator
{
	GENERATED_BODY()

public:
	void Configurar(float NuevaCantidad);

	virtual void Aplicar(AShooterNaves2025Pawn* Jugador, UWorld* World) override;

private:
	float Cantidad = 30.0f;
};