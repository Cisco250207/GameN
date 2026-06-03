#include "EnemyFactory.h"
#include "Nave_Padre.h"
#include "Nave_Liviana.h"
#include "Nave_Normal.h"
#include "Nave_Pesada.h"
#include "Nave_Kamikaze.h"
#include "Nave_Francotirador.h"
#include "Nave_Tanque.h"

ANave_Padre* FEnemyFactory::CrearEnemigoPorNivel(UWorld* World, int32 NivelActual, const FVector& SpawnPos)
{
	if (!World)
	{
		return nullptr;
	}

	switch (NivelActual)
	{
	case 1:
		return World->SpawnActor<ANave_Normal>(
			ANave_Normal::StaticClass(),
			SpawnPos,
			FRotator::ZeroRotator
		);

	case 2:
		if (FMath::RandBool())
		{
			return World->SpawnActor<ANave_Liviana>(
				ANave_Liviana::StaticClass(),
				SpawnPos,
				FRotator::ZeroRotator
			);
		}

		return World->SpawnActor<ANave_Normal>(
			ANave_Normal::StaticClass(),
			SpawnPos,
			FRotator::ZeroRotator
		);

	case 3:
	{
		int32 Tipo = FMath::RandRange(0, 2);

		if (Tipo == 0)
		{
			return World->SpawnActor<ANave_Liviana>(
				ANave_Liviana::StaticClass(),
				SpawnPos,
				FRotator::ZeroRotator
			);
		}
		else if (Tipo == 1)
		{
			return World->SpawnActor<ANave_Normal>(
				ANave_Normal::StaticClass(),
				SpawnPos,
				FRotator::ZeroRotator
			);
		}

		return World->SpawnActor<ANave_Pesada>(
			ANave_Pesada::StaticClass(),
			SpawnPos,
			FRotator::ZeroRotator
		);
	}

	case 4:
	{
		int32 Tipo = FMath::RandRange(0, 2);

		if (Tipo == 0)
		{
			return World->SpawnActor<ANave_Kamikaze>(
				ANave_Kamikaze::StaticClass(),
				SpawnPos,
				FRotator::ZeroRotator
			);
		}
		else if (Tipo == 1)
		{
			return World->SpawnActor<ANave_Francotirador>(
				ANave_Francotirador::StaticClass(),
				SpawnPos,
				FRotator::ZeroRotator
			);
		}

		return World->SpawnActor<ANave_Normal>(
			ANave_Normal::StaticClass(),
			SpawnPos,
			FRotator::ZeroRotator
		);
	}

	case 5:
	{
		int32 Tipo = FMath::RandRange(0, 3);

		if (Tipo == 0)
		{
			return World->SpawnActor<ANave_Kamikaze>(
				ANave_Kamikaze::StaticClass(),
				SpawnPos,
				FRotator::ZeroRotator
			);
		}
		else if (Tipo == 1)
		{
			return World->SpawnActor<ANave_Francotirador>(
				ANave_Francotirador::StaticClass(),
				SpawnPos,
				FRotator::ZeroRotator
			);
		}
		else if (Tipo == 2)
		{
			return World->SpawnActor<ANave_Tanque>(
				ANave_Tanque::StaticClass(),
				SpawnPos,
				FRotator::ZeroRotator
			);
		}

		return World->SpawnActor<ANave_Pesada>(
			ANave_Pesada::StaticClass(),
			SpawnPos,
			FRotator::ZeroRotator
		);
	}

	case 6:
	{
		int32 Tipo = FMath::RandRange(0, 2);

		if (Tipo == 0)
		{
			return World->SpawnActor<ANave_Kamikaze>(
				ANave_Kamikaze::StaticClass(),
				SpawnPos,
				FRotator::ZeroRotator
			);
		}
		else if (Tipo == 1)
		{
			return World->SpawnActor<ANave_Francotirador>(
				ANave_Francotirador::StaticClass(),
				SpawnPos,
				FRotator::ZeroRotator
			);
		}

		return World->SpawnActor<ANave_Tanque>(
			ANave_Tanque::StaticClass(),
			SpawnPos,
			FRotator::ZeroRotator
		);
	}

	default:
		return World->SpawnActor<ANave_Normal>(
			ANave_Normal::StaticClass(),
			SpawnPos,
			FRotator::ZeroRotator
		);
	}
}