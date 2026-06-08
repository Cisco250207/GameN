#include "PowerUpDanioExtra.h"
#include "../ShooterNaves2025Pawn.h"
#include "../ShooterNaves2025GameMode.h"
#include "PowerUpEffect.h"
#include "PowerUpDanioDecorator.h"
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
	UE_LOG(LogTemp, Warning, TEXT("POWER UP RECOGIDO: DANIO x%f por %f segundos"), Cantidad, Duracion);

	UPowerUpEffect* EfectoBase = NewObject<UPowerUpEffect>(this);
	UPowerUpDanioDecorator* DecoradorDanio = NewObject<UPowerUpDanioDecorator>(this);

	DecoradorDanio->Inicializar(EfectoBase);
	DecoradorDanio->Configurar(Cantidad, Duracion);
	DecoradorDanio->Aplicar(Jugador, GetWorld());
}