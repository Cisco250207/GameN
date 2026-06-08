#include "PowerUpVelocidadDecorator.h"
#include "../ShooterNaves2025Pawn.h"
#include "../ShooterNaves2025GameMode.h"
#include "Kismet/GameplayStatics.h"

void UPowerUpVelocidadDecorator::Configurar(float NuevaCantidad, float NuevaDuracion)
{
	Cantidad = NuevaCantidad;
	Duracion = NuevaDuracion;
}

void UPowerUpVelocidadDecorator::Aplicar(AShooterNaves2025Pawn* Jugador, UWorld* World)
{
	Super::Aplicar(Jugador, World);

	if (Jugador)
	{
		Jugador->ActivarVelocidadExtra(Cantidad, Duracion);
	}

	if (World)
	{
		AShooterNaves2025GameMode* GameMode = Cast<AShooterNaves2025GameMode>(
			UGameplayStatics::GetGameMode(World)
		);

		if (GameMode)
		{
			GameMode->MostrarMensajeTemporal(TEXT("POWER UP: VELOCIDAD EXTRA"), 3.0f);
		}
	}
}