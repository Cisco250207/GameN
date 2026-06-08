#pragma once

#include "CoreMinimal.h"
#include "Nave_Padre.h"
#include "Nave_Liviana.generated.h"

UCLASS()
class SHOOTERNAVES2025_API ANave_Liviana : public ANave_Padre
{
	GENERATED_BODY()

public:
	ANave_Liviana();

protected:
	virtual void ConfigurarPatronesAtaque() override;
	virtual FVector CalcularDireccionMovimiento(float DeltaTime) override;
};