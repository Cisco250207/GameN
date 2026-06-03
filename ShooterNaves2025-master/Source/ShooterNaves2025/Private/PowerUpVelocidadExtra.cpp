#include "PowerUpVelocidadExtra.h"
#include "../ShooterNaves2025Pawn.h"
#include "../ShooterNaves2025GameMode.h"
#include "Kismet/GameplayStatics.h"

APowerUpVelocidadExtra::APowerUpVelocidadExtra()
{
	Cantidad = 1.5f;
	Duracion = 8.0f;

	if (MeshPowerUp)
	{
		MeshPowerUp->SetWorldScale3D(FVector(0.4f, 0.7f, 0.4f));
	}
}

void APowerUpVelocidadExtra::AplicarEfecto(AShooterNaves2025Pawn* Jugador)
{
	if (Jugador)
	{
		UE_LOG(LogTemp, Warning, TEXT("POWER UP RECOGIDO: VELOCIDAD x%f por %f segundos"), Cantidad, Duracion);
		Jugador->ActivarVelocidadExtra(Cantidad, Duracion);
	}

	AShooterNaves2025GameMode* GameMode = Cast<AShooterNaves2025GameMode>(
		UGameplayStatics::GetGameMode(GetWorld())
	);

	if (GameMode)
	{
		GameMode->MostrarMensajeTemporal(TEXT("POWER UP: VELOCIDAD EXTRA"), 3.0f);
	}
}