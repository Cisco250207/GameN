#include "PowerUpDanioExtra.h"
#include "../ShooterNaves2025Pawn.h"
#include "../ShooterNaves2025GameMode.h"
#include "Kismet/GameplayStatics.h"

APowerUpDanioExtra::APowerUpDanioExtra()
{
	Cantidad = 2.0f;
	Duracion = 8.0f;

	if (MeshPowerUp)
	{
		MeshPowerUp->SetWorldScale3D(FVector(0.7f, 0.4f, 0.4f));
	}
}

void APowerUpDanioExtra::AplicarEfecto(AShooterNaves2025Pawn* Jugador)
{
	if (Jugador)
	{
		UE_LOG(LogTemp, Warning, TEXT("POWER UP RECOGIDO: DANIO x%f por %f segundos"), Cantidad, Duracion);
		Jugador->ActivarDanioExtra(Cantidad, Duracion);
	}

	AShooterNaves2025GameMode* GameMode = Cast<AShooterNaves2025GameMode>(
		UGameplayStatics::GetGameMode(GetWorld())
	);

	if (GameMode)
	{
		GameMode->MostrarMensajeTemporal(TEXT("POWER UP: DANIO EXTRA"), 3.0f);
	}
}