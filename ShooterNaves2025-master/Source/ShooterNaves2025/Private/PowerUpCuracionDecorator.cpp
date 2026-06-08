#include "PowerUpCuracionDecorator.h"
#include "../ShooterNaves2025Pawn.h"
#include "../ShooterNaves2025GameMode.h"
#include "Kismet/GameplayStatics.h"

void UPowerUpCuracionDecorator::Configurar(float NuevaCantidad)
{
	Cantidad = NuevaCantidad;
}

void UPowerUpCuracionDecorator::Aplicar(AShooterNaves2025Pawn* Jugador, UWorld* World)
{
	Super::Aplicar(Jugador, World);

	if (Jugador)
	{
		Jugador->Curar(Cantidad);
	}

	if (World)
	{
		AShooterNaves2025GameMode* GameMode = Cast<AShooterNaves2025GameMode>(
			UGameplayStatics::GetGameMode(World)
		);

		if (GameMode)
		{
			GameMode->MostrarMensajeTemporal(TEXT("POWER UP: CURACION"), 3.0f);
		}
	}
}