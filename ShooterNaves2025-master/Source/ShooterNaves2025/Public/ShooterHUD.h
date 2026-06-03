#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ShooterHUD.generated.h"

UCLASS()
class SHOOTERNAVES2025_API AShooterHUD : public AHUD
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	virtual void DrawHUD() override;

private:
	UPROPERTY()
	class AShooterNaves2025Pawn* JugadorCache;

	UPROPERTY()
	class AShooterNaves2025GameMode* GameModeCache;
};