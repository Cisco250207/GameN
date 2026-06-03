#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AsteroideBonus.generated.h"

UCLASS()
class SHOOTERNAVES2025_API AAsteroideBonus : public AActor
{
	GENERATED_BODY()

public:
	AAsteroideBonus();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Componentes")
	class UStaticMeshComponent* MeshAsteroide;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float Vida = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PowerUps")
	float ProbabilidadSoltarPowerUp = 1.0f;

	UFUNCTION(BlueprintCallable)
	void RecibirDanio(float CantidadDanio);

	void Morir();

private:
	void SoltarPowerUp();
};