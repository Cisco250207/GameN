#include "Nave_Kamikaze.h"

ANave_Kamikaze::ANave_Kamikaze()
{
	Vida = 60.0f;
	Velocidad = 650.0f;
	DanioContacto = 40.0f;
	DistanciaMinima = 80.0f;
}

void ANave_Kamikaze::ConfigurarPatronesAtaque()
{
	PatronesAtaque.Empty();
	PatronesAtaque.Add(EPatronAtaqueEnemigo::KamikazeExplosivo);

	TiempoEntreAtaques = 0.0f;
	DistanciaMaximaAtaque = 0.0f;
}

void ANave_Kamikaze::AtacarPorContacto()
{
	if (!Jugador || bEstaMuerta)
	{
		return;
	}

	HacerDanioAlJugador();

	UE_LOG(LogTemp, Warning, TEXT("Kamikaze exploto contra el jugador"));

	Morir();
}