#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Nave_Padre.generated.h"

UCLASS()
class SHOOTERNAVES2025_API ANave_Padre : public AActor
{
	GENERATED_BODY()

public:
	ANave_Padre();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float Vida = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float Velocidad = 300.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float DanioContacto = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	bool bEstaMuerta = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
	bool bPerseguirJugador = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
	float DistanciaMinima = 100.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Componentes")
	class UStaticMeshComponent* MeshNave;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tipo")
	bool bEsMiniBoss = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Defensa")
	float MultiplicadorDanioRecibido = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEsBossFinal = false;

	UPROPERTY()
	class APawn* Jugador;

	UFUNCTION(BlueprintCallable)
	virtual void RecibirDanio(float CantidadDanio);

	UFUNCTION(BlueprintCallable)
	virtual void Morir();

	void MoverHaciaJugador(float DeltaTime);

	void HacerDanioAlJugador(); UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Buff")
	bool bBuffActivo = false;

	UFUNCTION(BlueprintCallable)
	void AplicarBuffBoss(float MultiplicadorVida, float MultiplicadorResistencia);


};