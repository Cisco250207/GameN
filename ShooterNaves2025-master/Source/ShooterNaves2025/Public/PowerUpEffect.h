#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PowerUpEffect.generated.h"

class AShooterNaves2025Pawn;

UCLASS()
class SHOOTERNAVES2025_API UPowerUpEffect : public UObject
{
	GENERATED_BODY()

public:
	virtual void Aplicar(AShooterNaves2025Pawn* Jugador, UWorld* World);
};