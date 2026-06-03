#pragma once

#include "CoreMinimal.h"

class ANave_Padre;

class SHOOTERNAVES2025_API FEnemyFactory
{
public:
	static ANave_Padre* CrearEnemigoPorNivel(UWorld* World, int32 NivelActual, const FVector& SpawnPos);
};