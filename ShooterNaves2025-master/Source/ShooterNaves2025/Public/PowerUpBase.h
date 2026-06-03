#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PowerUpBase.generated.h"

class AShooterNaves2025Pawn;

UCLASS()
class SHOOTERNAVES2025_API APowerUpBase : public AActor
{
	GENERATED_BODY()

public:
	APowerUpBase();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Componentes")
	class UStaticMeshComponent* MeshPowerUp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PowerUp")
	float Duracion = 8.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PowerUp")
	float Cantidad = 1.0f;

protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnOverlap(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

	virtual void AplicarEfecto(AShooterNaves2025Pawn* Jugador);

	void CrearMaterialColor(FLinearColor Color);
};