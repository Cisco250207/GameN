#include "PowerUpCuracion.h"
#include "../ShooterNaves2025Pawn.h"
#include "../ShooterNaves2025GameMode.h"
#include "Kismet/GameplayStatics.h"

APowerUpCuracion::APowerUpCuracion()
{
	Cantidad = 30.0f;
	Duracion = 0.0f;

	if (MeshPowerUp)
	{
		MeshPowerUp->SetWorldScale3D(FVector(0.5f, 0.5f, 0.5f));
	}
}

void APowerUpCuracion::AplicarEfecto(AShooterNaves2025Pawn* Jugador)
{
	if (Jugador)
	{
		UE_LOG(LogTemp, Warning, TEXT("POWER UP RECOGIDO: CURACION +%f vida"), Cantidad);
		Jugador->Curar(Cantidad);
	}

	AShooterNaves2025GameMode* GameMode = Cast<AShooterNaves2025GameMode>(
		UGameplayStatics::GetGameMode(GetWorld())
	);

	if (GameMode)
	{
		GameMode->MostrarMensajeTemporal(TEXT("POWER UP: CURACION"), 3.0f);
	}
}