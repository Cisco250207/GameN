#pragma once

#include "CoreMinimal.h"
#include "PowerUpBase.h"
#include "PowerUpCuracion.generated.h"

UCLASS()
class SHOOTERNAVES2025_API APowerUpCuracion : public APowerUpBase
{
	GENERATED_BODY()

public:
	APowerUpCuracion();

protected:
	virtual void AplicarEfecto(AShooterNaves2025Pawn* Jugador) override;
};