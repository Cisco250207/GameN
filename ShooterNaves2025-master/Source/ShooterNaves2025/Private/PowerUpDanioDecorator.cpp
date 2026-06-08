#include "PowerUpDanioDecorator.h"
#include "../ShooterNaves2025Pawn.h"
#include "../ShooterNaves2025GameMode.h"
#include "Kismet/GameplayStatics.h"

void UPowerUpDanioDecorator::Configurar(float NuevaCantidad, float NuevaDuracion)
{
	Cantidad = NuevaCantidad;
	Duracion = NuevaDuracion;
}

void UPowerUpDanioDecorator::Aplicar(AShooterNaves2025Pawn* Jugador, UWorld* World)
{
	Super::Aplicar(Jugador, World);

	if (Jugador)
	{
		Jugador->ActivarDanioExtra(Cantidad, Duracion);
	}

	if (World)
	{
		AShooterNaves2025GameMode* GameMode = Cast<AShooterNaves2025GameMode>(
			UGameplayStatics::GetGameMode(World)
		);

		if (GameMode)
		{
			GameMode->MostrarMensajeTemporal(TEXT("POWER UP: DANIO EXTRA"), 3.0f);
		}
	}
}