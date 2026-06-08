#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ShooterNaves2025GameMode.generated.h"
class AMiniBoss;
class UEnemySpawnFacade;
// GameMode principal del juego
// Maneja los 6 niveles, las oleadas de enemigos,
// el sistema de vidas y la logica de victoria/derrota
UENUM(BlueprintType)
enum class EEstadoJuego : uint8
{
    Jugando UMETA(DisplayName = "Jugando"),
    GameOver UMETA(DisplayName = "Game Over"),
    GoodEnding UMETA(DisplayName = "Good Ending"),
    FaseCompletada UMETA(DisplayName = "Fase Completada")
};

UCLASS(MinimalAPI)

class AShooterNaves2025GameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    AShooterNaves2025GameMode();

    virtual void BeginPlay() override;

    // ── SISTEMA DE NIVELES ────────────────────────────────────────
    // Nivel actual del juego (1 al 6)
    UPROPERTY(BlueprintReadOnly, Category = "Nivel")
    int32 NivelActual;

    // Enemigos que quedan por destruir en el nivel actual
    UPROPERTY(BlueprintReadOnly, Category = "Nivel")
    int32 EnemigosRestantes;

    // Enemigos que hay que destruir para pasar el nivel
    UPROPERTY(BlueprintReadOnly, Category = "Nivel")
    int32 MetaEnemigos;

    // ── SISTEMA DE VIDAS ──────────────────────────────────────────
    // Vidas del jugador
    UPROPERTY(BlueprintReadOnly, Category = "Jugador")
    int32 VidasJugador;

    // ── SISTEMA DE PUNTUACION ─────────────────────────────────────
    UPROPERTY(BlueprintReadOnly, Category = "Jugador")
    int32 Puntuacion;

    UPROPERTY(BlueprintReadOnly, Category = "Estado")
    bool bGameOver = false;

    UPROPERTY(BlueprintReadOnly, Category = "Estado")
    bool bGoodEnding = false;

    UPROPERTY(BlueprintReadOnly, Category = "Estado")
    bool bFase1Completada = false;

    UPROPERTY(BlueprintReadOnly, Category = "Lore")
    FString TextoLoreActual;

    FString ObtenerTextoLorePorNivel(int32 Nivel) const;

    // ── METODOS PUBLICOS ──────────────────────────────────────────

    // Se llama cuando el jugador destruye un enemigo
    void EnemigoDestruido();

    // Se llama cuando el jugador recibe daño
    void JugadorRecibioDanio();

    void MiniBossDestruido();

    // Retorna true si el juego sigue activo
    bool EstaJugando() const { return bJugando; }

    UPROPERTY(BlueprintReadOnly, Category = "HUD")
    FString MensajeTemporal;

    UPROPERTY(BlueprintReadOnly, Category = "HUD")
    float TiempoMensajeTemporal = 0.0f;

    void MostrarMensajeTemporal(FString Mensaje, float Duracion = 3.0f);

    void BossFinalDestruido();

    UPROPERTY(BlueprintReadOnly, Category = "Estado")
    FString TextoBadEnding;

    FString ObtenerBadEndingPorNivel(int32 Nivel) const;

    void JugadorMurio();

    UPROPERTY(BlueprintReadOnly, Category = "Estado")
    EEstadoJuego EstadoActual = EEstadoJuego::Jugando;

    UFUNCTION(BlueprintCallable)
    void CambiarEstado(EEstadoJuego NuevoEstado);

private:
    // Timer para spawnear enemigos gradualmente
    FTimerHandle TimerSpawn;

    // Si el juego esta activo
    bool bJugando = false;

    // ── METODOS INTERNOS ──────────────────────────────────────────

    // Inicia el nivel actual con sus enemigos
    void IniciarNivel();

    // Spawna una oleada de enemigos segun el nivel
    void SpawnOleada();

    // Verifica si se cumplio la meta del nivel
    void VerificarMeta();

    // Pasa al siguiente nivel
    void SiguienteNivel();

    void DestruirTodosLosEnemigos();

    // Activa el good ending
    void GoodEnding();

    // Activa el bad ending segun el nivel en que perdio
    void BadEnding();

    // Calcula cuantos enemigos hay que destruir segun el nivel
    int32 CalcularMetaEnemigos(int32 Nivel);

    // Calcula cada cuanto spawnea un enemigo segun el nivel
    float CalcularIntervaloSpawn(int32 Nivel);

    int32 EnemigosGenerados = 0;

    bool bMiniBossSpawned = false;
    bool bMiniBossDebilitado = false;
    bool bMiniBossDerrotado = false;

    class AMiniBoss* MiniBossActual = nullptr;

    int32 EnemigosParaAparecerMiniBoss = 10;
    int32 EnemigosParaDebilitarMiniBoss = 5;
    int32 EnemigosMuertosNivelActual = 0;
    int32 EnemigosMuertosDesdeMiniBoss = 0;
    int32 EnemigosGeneradosNivel6 = 0;
    int32 MaxEnemigosNivel6 = 20;

    FTimerHandle TimerMensajeTemporal;

    void LimpiarMensajeTemporal();

    bool bBossFinalSpawned = false;
    bool bBossFinalDerrotado = false;
    class ABossFinal* BossFinalActual = nullptr;

    UPROPERTY(VisibleAnywhere, Category = "Spawn")
    UEnemySpawnFacade* EnemySpawnFacade;
};