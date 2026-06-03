#pragma once

#include "CoreMinimal.h"
#include "Nave_Padre.h"
#include "MiniBoss.generated.h"

UCLASS()
class SHOOTERNAVES2025_API AMiniBoss : public ANave_Padre
{
	GENERATED_BODY()

public:
	AMiniBoss();

	UFUNCTION(BlueprintCallable)
	void Debilitar();
};