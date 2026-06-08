#include "PowerUpVelocidadExtra.h"
#include "../ShooterNaves2025Pawn.h"
#include "../ShooterNaves2025GameMode.h"
#include "PowerUpEffect.h"
#include "PowerUpVelocidadDecorator.h"
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
	UE_LOG(LogTemp, Warning, TEXT("POWER UP RECOGIDO: VELOCIDAD x%f por %f segundos"), Cantidad, Duracion);

	UPowerUpEffect* EfectoBase = NewObject<UPowerUpEffect>(this);
	UPowerUpVelocidadDecorator* DecoradorVelocidad = NewObject<UPowerUpVelocidadDecorator>(this);

	DecoradorVelocidad->Inicializar(EfectoBase);
	DecoradorVelocidad->Configurar(Cantidad, Duracion);
	DecoradorVelocidad->Aplicar(Jugador, GetWorld());
}