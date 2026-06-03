#pragma once
#include "CoreMinimal.h"
#include "Nave_Padre.h"
#include "Nave_Normal.generated.h" // N mayuscula igual que el archivo

// Nave Normal: estadisticas equilibradas
// Hereda movimiento y comportamiento de ANave_Padre
UCLASS()
class SHOOTERNAVES2025_API ANave_Normal : public ANave_Padre
{
    GENERATED_BODY()

public:
    ANave_Normal();
};