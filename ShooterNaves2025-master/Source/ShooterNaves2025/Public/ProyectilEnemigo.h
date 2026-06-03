#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"
#include "ProyectilEnemigo.generated.h"

UCLASS()
class SHOOTERNAVES2025_API AProyectilEnemigo : public AActor
{
	GENERATED_BODY()

public:
	AProyectilEnemigo();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Componentes")
	class UStaticMeshComponent* MeshProyectil;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movimiento")
	class UProjectileMovementComponent* MovimientoProyectil;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float Danio = 20.0f;

	UFUNCTION()
	void OnOverlap(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

	UFUNCTION(BlueprintCallable)
	void ActivarProyectil(FVector NuevaUbicacion, FRotator NuevaRotacion);

	UFUNCTION(BlueprintCallable)
	void DesactivarProyectil();

	bool EstaActivo() const { return bActivo; }

private:
	UPROPERTY(VisibleAnywhere, Category = "Pool")
	bool bActivo = false;

	FTimerHandle TimerDesactivar;
};