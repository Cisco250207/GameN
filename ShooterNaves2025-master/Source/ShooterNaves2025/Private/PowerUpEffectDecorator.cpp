#include "PowerUpEffectDecorator.h"

void UPowerUpEffectDecorator::Inicializar(UPowerUpEffect* NuevoEfectoDecorado)
{
	EfectoDecorado = NuevoEfectoDecorado;
}

void UPowerUpEffectDecorator::Aplicar(AShooterNaves2025Pawn* Jugador, UWorld* World)
{
	if (EfectoDecorado)
	{
		EfectoDecorado->Aplicar(Jugador, World);
	}
}