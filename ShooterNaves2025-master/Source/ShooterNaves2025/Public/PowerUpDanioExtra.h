#pragma once

#include "CoreMinimal.h"
#include "PowerUpBase.h"
#include "PowerUpDanioExtra.generated.h"

UCLASS()
class SHOOTERNAVES2025_API APowerUpDanioExtra : public APowerUpBase
{
	GENERATED_BODY()

public:
	APowerUpDanioExtra();

protected:
	virtual void AplicarEfecto(AShooterNaves2025Pawn* Jugador) override;
};