#pragma once

#include "CoreMinimal.h"
#include "Nave_Padre.h"
#include "Nave_Normal.generated.h"

UCLASS()
class SHOOTERNAVES2025_API ANave_Normal : public ANave_Padre
{
	GENERATED_BODY()

public:
	ANave_Normal();

protected:
	virtual void ConfigurarPatronesAtaque() override;
	virtual FVector CalcularDireccionMovimiento(float DeltaTime) override;

private:
	bool bPreparandoEmbestida = false;
	bool bEmbestidaActiva = false;

	float TiempoCambioEmbestida = 0.0f;

	UPROPERTY(EditAnywhere, Category = "Ataque")
	float IntervaloEmbestida = 4.0f;

	UPROPERTY(EditAnywhere, Category = "Ataque")
	float DuracionPreparacion = 0.5f;

	UPROPERTY(EditAnywhere, Category = "Ataque")
	float DuracionEmbestida = 0.8f;

	UPROPERTY(EditAnywhere, Category = "Ataque")
	float MultiplicadorVelocidadEmbestida = 2.2f;

	FVector DireccionEmbestida = FVector::ZeroVector;

	void ActualizarEstadoEmbestida(float DeltaTime);
};