#pragma once

#include "CoreMinimal.h"
#include "PowerUpBase.h"
#include "PowerUpVelocidadExtra.generated.h"

UCLASS()
class SHOOTERNAVES2025_API APowerUpVelocidadExtra : public APowerUpBase
{
	GENERATED_BODY()

public:
	APowerUpVelocidadExtra();

protected:
	virtual void AplicarEfecto(AShooterNaves2025Pawn* Jugador) override;
};