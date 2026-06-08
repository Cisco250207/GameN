#pragma once

#include "CoreMinimal.h"
#include "PowerUpEffectDecorator.h"
#include "PowerUpVelocidadDecorator.generated.h"

UCLASS()
class SHOOTERNAVES2025_API UPowerUpVelocidadDecorator : public UPowerUpEffectDecorator
{
	GENERATED_BODY()

public:
	void Configurar(float NuevaCantidad, float NuevaDuracion);

	virtual void Aplicar(AShooterNaves2025Pawn* Jugador, UWorld* World) override;

private:
	float Cantidad = 1.5f;
	float Duracion = 8.0f;
};