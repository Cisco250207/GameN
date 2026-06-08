#include "Nave_Tanque.h"
#include "EnemyAttackFacade.h"

ANave_Tanque::ANave_Tanque()
{
	Vida = 500.0f;
	Velocidad = 120.0f;
	DanioContacto = 45.0f;
	DistanciaMinima = 130.0f;
	MultiplicadorDanioRecibido = 0.75f;
}

void ANave_Tanque::ConfigurarPatronesAtaque()
{
	PatronesAtaque.Empty();
	PatronesAtaque.Add(EPatronAtaqueEnemigo::DisparoRecto);
	PatronesAtaque.Add(EPatronAtaqueEnemigo::DisparoTriple);
	PatronesAtaque.Add(EPatronAtaqueEnemigo::Rafaga);

	TiempoEntreAtaques = 3.0f;
	DistanciaMaximaAtaque = 1300.0f;
	CantidadProyectilesPoolAtaque = 12;
}

void ANave_Tanque::EjecutarPatronAtaque(EPatronAtaqueEnemigo Patron)
{
	if (!AttackFacade)
	{
		return;
	}

	switch (Patron)
	{
	case EPatronAtaqueEnemigo::DisparoRecto:
		AttackFacade->DispararRecto(35.0f, 1400.0f, 0.35f, 140.0f);
		break;

	case EPatronAtaqueEnemigo::DisparoTriple:
		AttackFacade->DispararTriple(30.0f, 1300.0f, 0.3f, 140.0f);
		break;

	case EPatronAtaqueEnemigo::Rafaga:
		AttackFacade->DispararRafaga(25.0f, 1600.0f, 0.25f, 140.0f);
		break;

	default:
		break;
	}
}