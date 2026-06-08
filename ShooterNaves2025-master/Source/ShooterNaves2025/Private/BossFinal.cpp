#include "BossFinal.h"
#include "Nave_Padre.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

ABossFinal::ABossFinal()
{
	Vida = 1500.0f;
	Velocidad = 80.0f;
	DanioContacto = 80.0f;
	DistanciaMinima = 200.0f;

	bEsBossFinal = true;
	MultiplicadorDanioRecibido = 0.5f;
}

void ABossFinal::BeginPlay()
{
	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(
		TimerBuff,
		this,
		&ABossFinal::BuffearEnemigosCercanos,
		3.0f,
		true
	);
}

void ABossFinal::BuffearEnemigosCercanos()
{
	TArray<AActor*> ActoresEncontrados;

	UGameplayStatics::GetAllActorsOfClass(
		GetWorld(),
		ANave_Padre::StaticClass(),
		ActoresEncontrados
	);

	OnBuffBossActivado.Clear();

	for (AActor* Actor : ActoresEncontrados)
	{
		ANave_Padre* Nave = Cast<ANave_Padre>(Actor);

		if (!Nave || Nave == this || Nave->bEstaMuerta)
		{
			continue;
		}

		float Distancia = FVector::Dist(GetActorLocation(), Nave->GetActorLocation());

		if (Distancia <= 800.0f)
		{
			Nave->SuscribirseABuffBoss(this);
		}
	}

	NotificarBuffBoss(1.25f, 0.7f);
}