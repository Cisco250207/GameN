#include "PowerUpCuracion.h"
#include "../ShooterNaves2025Pawn.h"
#include "../ShooterNaves2025GameMode.h"
#include "PowerUpEffect.h"
#include "PowerUpCuracionDecorator.h"
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
	UE_LOG(LogTemp, Warning, TEXT("POWER UP RECOGIDO: CURACION +%f vida"), Cantidad);

	UPowerUpEffect* EfectoBase = NewObject<UPowerUpEffect>(this);
	UPowerUpCuracionDecorator* DecoradorCuracion = NewObject<UPowerUpCuracionDecorator>(this);

	DecoradorCuracion->Inicializar(EfectoBase);
	DecoradorCuracion->Configurar(Cantidad);
	DecoradorCuracion->Aplicar(Jugador, GetWorld());
}