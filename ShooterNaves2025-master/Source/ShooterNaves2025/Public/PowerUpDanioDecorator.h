#pragma once

#include "CoreMinimal.h"
#include "PowerUpEffectDecorator.h"
#include "PowerUpDanioDecorator.generated.h"

UCLASS()
class SHOOTERNAVES2025_API UPowerUpDanioDecorator : public UPowerUpEffectDecorator
{
	GENERATED_BODY()

public:
	void Configurar(float NuevaCantidad, float NuevaDuracion);

	virtual void Aplicar(AShooterNaves2025Pawn* Jugador, UWorld* World) override;

private:
	float Cantidad = 2.0f;
	float Duracion = 8.0f;
};