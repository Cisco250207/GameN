#include "ShooterHUD.h"
#include "../ShooterNaves2025Pawn.h"
#include "../ShooterNaves2025GameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Canvas.h"

void AShooterHUD::BeginPlay()
{
	Super::BeginPlay();

	JugadorCache = Cast<AShooterNaves2025Pawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	GameModeCache = Cast<AShooterNaves2025GameMode>(UGameplayStatics::GetGameMode(GetWorld()));
}

void AShooterHUD::DrawHUD()
{
	Super::DrawHUD();

	if (!Canvas)
	{
		return;
	}

	if (!JugadorCache)
	{
		JugadorCache = Cast<AShooterNaves2025Pawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	}

	if (!GameModeCache)
	{
		GameModeCache = Cast<AShooterNaves2025GameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	}

	AShooterNaves2025Pawn* Jugador = JugadorCache;
	AShooterNaves2025GameMode* GameMode = GameModeCache;

	float X = 50.0f;
	float Y = 50.0f;
	float Separacion = 30.0f;

	if (Jugador)
	{
		DrawText(
			FString::Printf(TEXT("Vida: %.0f / %.0f"), Jugador->Vida, Jugador->VidaMaxima),
			FColor::Green,
			X,
			Y
		);

		Y += Separacion;

		DrawText(
			FString::Printf(TEXT("Velocidad: %.0f"), Jugador->MoveSpeed),
			FColor::Cyan,
			X,
			Y
		);

		Y += Separacion;

		DrawText(
			FString::Printf(TEXT("Danio: x%.1f"), Jugador->MultiplicadorDanio),
			FColor::Red,
			X,
			Y
		);

		Y += Separacion;
	}

    if (GameMode)
    {
        if (!GameMode->TextoLoreActual.IsEmpty())
        {
            DrawText(
                GameMode->TextoLoreActual,
                FColor::Cyan,
                300.0f,
                50.0f
            );
        }

		if (GameMode->bGameOver)
		{
			DrawText(
				TEXT("BAD ENDING"),
				FColor::Red,
				Canvas->SizeX * 0.40f,
				Canvas->SizeY * 0.40f
			);

			DrawText(
				TEXT("Presiona R para reiniciar"),
				FColor::White,
				Canvas->SizeX * 0.38f,
				Canvas->SizeY * 0.47f
			);
		}

		if (GameMode->bGoodEnding)
		{
			DrawText(
				TEXT("GOOD ENDING"),
				FColor::Green,
				Canvas->SizeX * 0.40f,
				Canvas->SizeY * 0.40f
			);

			DrawText(
				TEXT("La humanidad resistio la invasion"),
				FColor::White,
				Canvas->SizeX * 0.34f,
				Canvas->SizeY * 0.47f
			);
		}

        //if (GameMode->bFase1Completada)
        //{
            //DrawText(
               // TEXT("FASE 1 COMPLETADA"),
              //  FColor::Green,
               // Canvas->SizeX * 0.40f,
               // Canvas->SizeY * 0.40f
            //);

            //DrawText(
               // TEXT("La primera linea de defensa resistio."),
               // FColor::White,
                //Canvas->SizeX * 0.35f,
                //Canvas->SizeY * 0.47f
           //;
        //}
    }

    if (GameMode && !GameMode->MensajeTemporal.IsEmpty())
    {
        DrawText(
            GameMode->MensajeTemporal,
            FColor::Cyan,
            Canvas->SizeX * 0.35f,
            Canvas->SizeY * 0.15f
        );
    }
}