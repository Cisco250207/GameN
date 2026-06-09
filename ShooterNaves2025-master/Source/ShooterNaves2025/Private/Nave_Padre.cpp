#include "Nave_Padre.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"
#include "../ShooterNaves2025Pawn.h"
#include "../ShooterNaves2025GameMode.h"
#include "EnemyAttackFacade.h"
#include "TimerManager.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

ANave_Padre::ANave_Padre()
{
	PrimaryActorTick.bCanEverTick = true;

	AttackFacade = CreateDefaultSubobject<UEnemyAttackFacade>(TEXT("AttackFacade"));

	MeshNave = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshNave"));
	RootComponent = MeshNave;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshCubo(TEXT("/Game/NAVES/space_ship_(1)/0_Plane_005_0.0_Plane_005_0"));

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

	// Inicializar Facade
	if (AttackFacade)
	{
		AttackFacade->Inicializar(this, CantidadProyectilesPoolAtaque);
	}

	// Poner la nave a la misma altura que el jugador
	FVector Pos = GetActorLocation();
	Pos.Z = 200.0f;
	SetActorLocation(Pos);

	ConfigurarPatronesAtaque();

	if (PatronesAtaque.Num() > 0 && TiempoEntreAtaques > 0.0f)
	{
		GetWorldTimerManager().SetTimer(
			TimerAtaque,
			this,
			&ANave_Padre::EjecutarAtaque,
			TiempoEntreAtaques,
			true
		);
	}
}

void ANave_Padre::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoVida += DeltaTime;

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

	if (Direccion.Size() <= DistanciaMinima)
	{
		AtacarPorContacto();
		return;
	}

	FVector DireccionMovimiento = CalcularDireccionMovimiento(DeltaTime);

	FVector NuevaUbicacion =
		GetActorLocation() +
		DireccionMovimiento * Velocidad * DeltaTime;


	SetActorLocation(NuevaUbicacion);

	FRotator NuevaRotacion = Direccion.Rotation();
	SetActorRotation(NuevaRotacion);
}

FVector ANave_Padre::CalcularDireccionMovimiento(float DeltaTime)
{
	if (!Jugador)
	{
		return FVector::ZeroVector;
	}

	FVector Direccion =
		Jugador->GetActorLocation() - GetActorLocation();



	if (Direccion.SizeSquared() <= 0.0f)
	{
		return FVector::ZeroVector;
	}

	return Direccion.GetSafeNormal();
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

void ANave_Padre::ConfigurarPatronesAtaque()
{
	PatronesAtaque.Empty();
	PatronesAtaque.Add(EPatronAtaqueEnemigo::Embestida);
}

void ANave_Padre::EjecutarAtaque()
{
	if (!Jugador || bEstaMuerta || PatronesAtaque.Num() == 0)
	{
		return;
	}

	const float Distancia = FVector::Dist2D(GetActorLocation(), Jugador->GetActorLocation());

	if (Distancia > DistanciaMaximaAtaque)
	{
		return;
	}

	EPatronAtaqueEnemigo PatronElegido = ElegirPatronAtaque();
	EjecutarPatronAtaque(PatronElegido);
}

EPatronAtaqueEnemigo ANave_Padre::ElegirPatronAtaque() const
{
	const int32 Indice = FMath::RandRange(0, PatronesAtaque.Num() - 1);
	return PatronesAtaque[Indice];
}

void ANave_Padre::EjecutarPatronAtaque(EPatronAtaqueEnemigo Patron)
{
	switch (Patron)
	{
	case EPatronAtaqueEnemigo::Embestida:
		break;

	default:
		break;
	}
}

void ANave_Padre::AtacarPorContacto()
{
	if (!PuedeAtacarPorContacto())
	{
		return;
	}

	TiempoUltimoAtaqueContacto = GetWorld()->GetTimeSeconds();

	HacerDanioAlJugador();
	Morir();
}

bool ANave_Padre::PuedeAtacarPorContacto() const
{
	if (!GetWorld())
	{
		return false;
	}

	return GetWorld()->GetTimeSeconds() - TiempoUltimoAtaqueContacto >= CooldownContacto;
}

void ANave_Padre::NotificarBuffBoss(float MultiplicadorVida, float MultiplicadorResistencia)
{
	OnBuffBossActivado.Broadcast(MultiplicadorVida, MultiplicadorResistencia);
}

void ANave_Padre::SuscribirseABuffBoss(ANave_Padre* Boss)
{
	if (!Boss || Boss == this)
	{
		return;
	}

	Boss->OnBuffBossActivado.RemoveAll(this);

	Boss->OnBuffBossActivado.AddUObject(
		this,
		&ANave_Padre::AplicarBuffBoss
	);
}
