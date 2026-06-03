#pragma once

#include "CoreMinimal.h"
#include "Nave_Padre.h"
#include "BossFinal.generated.h"

UCLASS()
class SHOOTERNAVES2025_API ABossFinal : public ANave_Padre
{
	GENERATED_BODY()

public:
	ABossFinal();

protected:
	virtual void BeginPlay() override;

private:
	FTimerHandle TimerBuff;

	void BuffearEnemigosCercanos();
};