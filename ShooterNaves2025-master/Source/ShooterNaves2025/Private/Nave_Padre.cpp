#include "Nave_Padre.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"
#include "../ShooterNaves2025Pawn.h"
#include "../ShooterNaves2025GameMode.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

ANave_Padre::ANave_Padre()
{
	PrimaryActorTick.bCanEverTick = true;

	MeshNave = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshNave"));
	RootComponent = MeshNave;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshCubo(TEXT("/Game/Geometry/craft_miner/craft_speederD/craft_cargoB/0_Mesh_craft_cargoB.0_Mesh_craft_cargoB"));

	if (MeshCubo.Succeeded())
	{
		MeshNave->SetStaticMesh(MeshCubo.Object);
	}

	MeshNave->SetSimulatePhysics(false);
	MeshNave->SetEnableGravity(false);
	MeshNave->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	MeshNave->SetCollisionObjectType(ECC_Pawn);
	MeshNave->SetCollisionResponseToAllChannels(ECR_Block);
	MeshNave->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f)); // tama�o normal
}

void ANave_Padre::BeginPlay()
{
	Super::BeginPlay();
	Jugador = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	// Poner la nave a la misma altura que el jugador
	FVector Pos = GetActorLocation();
	Pos.Z = 200.0f; // mismo valor que el jugador
	SetActorLocation(Pos);
}

void ANave_Padre::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bPerseguirJugador && Jugador != nullptr && !bEstaMuerta)
	{
		MoverHaciaJugador(DeltaTime);
	}
}

void ANave_Padre::RecibirDanio(float CantidadDanio)
{
	if (bEstaMuerta)
	{
		return;
	}

	Vida -= CantidadDanio * MultiplicadorDanioRecibido;

	if (Vida <= 0.0f)
	{
		Morir();
	}
}

void ANave_Padre::Morir()
{
	if (bEstaMuerta)
	{
		return;
	}

	bEstaMuerta = true;

	AShooterNaves2025GameMode* GameMode = Cast<AShooterNaves2025GameMode>(
		UGameplayStatics::GetGameMode(GetWorld())
	);

	if (GameMode)
	{
		if (bEsBossFinal)
		{
			GameMode->BossFinalDestruido();
		}
		else if (bEsMiniBoss)
		{
			GameMode->MiniBossDestruido();
		}
		else
		{
			GameMode->EnemigoDestruido();
		}
	}

	Destroy();
}

void ANave_Padre::MoverHaciaJugador(float DeltaTime)
{
	FVector Direccion = Jugador->GetActorLocation() - GetActorLocation();
	Direccion.Z = 0.0f;

	if (Direccion.Size() <= DistanciaMinima)
	{
		HacerDanioAlJugador();
		Morir();
		return;
	}

	Direccion.Normalize();
	FVector NuevaUbicacion = GetActorLocation() +
		Direccion * Velocidad * DeltaTime;

	// Mantener misma Z que el jugador para que las balas lo alcancen
	NuevaUbicacion.Z = Jugador->GetActorLocation().Z;
	SetActorLocation(NuevaUbicacion);

	FRotator NuevaRotacion = Direccion.Rotation();
	NuevaRotacion.Yaw += 90.0f;
	SetActorRotation(NuevaRotacion);
}

void ANave_Padre::HacerDanioAlJugador()
{
	AShooterNaves2025Pawn* NaveJugador = Cast<AShooterNaves2025Pawn>(Jugador);

	if (NaveJugador != nullptr)
	{
		NaveJugador->RecibirDanio(DanioContacto);
	}
}

void ANave_Padre::AplicarBuffBoss(float MultiplicadorVida, float MultiplicadorResistencia)
{
	if (bBuffActivo || bEsBossFinal)
	{
		return;
	}

	bBuffActivo = true;

	Vida *= MultiplicadorVida;
	MultiplicadorDanioRecibido *= MultiplicadorResistencia;

	UE_LOG(LogTemp, Warning, TEXT("Enemigo buffeado por el boss final"));
}