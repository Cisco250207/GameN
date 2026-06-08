#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Nave_Padre.generated.h"

class UEnemyAttackFacade;

UENUM()
enum class EPatronAtaqueEnemigo : uint8
{
	Embestida,
	EmbestidaZigZag,
	OndaChoque,
	DisparoRecto,
	DisparoTriple,
	Rafaga,
	DisparoFrancotirador,
	DisparoCargado,
	KamikazeExplosivo
};

DECLARE_MULTICAST_DELEGATE_TwoParams(FOnBuffBossActivado, float, float);

UCLASS()
class SHOOTERNAVES2025_API ANave_Padre : public AActor
{
	GENERATED_BODY()

public:
	ANave_Padre();

	virtual void Tick(float DeltaTime) override;

	FOnBuffBossActivado OnBuffBossActivado;

	void NotificarBuffBoss(float MultiplicadorVida, float MultiplicadorResistencia);
	void SuscribirseABuffBoss(ANave_Padre* Boss);

	UFUNCTION(BlueprintCallable)
	virtual void RecibirDanio(float CantidadDanio);

	UFUNCTION(BlueprintCallable)
	virtual void Morir();

	void MoverHaciaJugador(float DeltaTime);
	void HacerDanioAlJugador();

	UFUNCTION(BlueprintCallable)
	void AplicarBuffBoss(float MultiplicadorVida, float MultiplicadorResistencia);

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Buff")
	bool bBuffActivo = false;

	UPROPERTY()
	class APawn* Jugador;

protected:
	virtual void BeginPlay() override;

	FTimerHandle TimerAtaque;

	UPROPERTY(EditAnywhere, Category = "Ataque")
	TArray<EPatronAtaqueEnemigo> PatronesAtaque;

	UPROPERTY(EditAnywhere, Category = "Ataque")
	float TiempoEntreAtaques = 2.0f;

	UPROPERTY(EditAnywhere, Category = "Ataque")
	float DistanciaMaximaAtaque = 1200.0f;

	UPROPERTY(VisibleAnywhere, Category = "Ataque")
	UEnemyAttackFacade* AttackFacade;

	UPROPERTY(EditAnywhere, Category = "Ataque")
	int32 CantidadProyectilesPoolAtaque = 10;

	UPROPERTY(EditAnywhere, Category = "Ataque")
	float TiempoUltimoAtaqueContacto = -100.0f;

	UPROPERTY(EditAnywhere, Category = "Ataque")
	float CooldownContacto = 1.0f;

	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float TiempoVida = 0.0f;

	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float AmplitudZigZag = 120.0f;

	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float FrecuenciaZigZag = 5.0f;

	virtual void ConfigurarPatronesAtaque();
	virtual void EjecutarAtaque();
	virtual EPatronAtaqueEnemigo ElegirPatronAtaque() const;
	virtual void EjecutarPatronAtaque(EPatronAtaqueEnemigo Patron);

	virtual FVector CalcularDireccionMovimiento(float DeltaTime);

	virtual void AtacarPorContacto();

	bool PuedeAtacarPorContacto() const;
};