// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TObjectPool.h"
#include "ShooterNaves2025Pawn.generated.h"

UCLASS(Blueprintable)
class AShooterNaves2025Pawn : public APawn
{
	GENERATED_BODY()

	/* The mesh component */
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* ShipMeshComponent;

	/** The camera */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

public:
	AShooterNaves2025Pawn();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float Vida = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float VidaMaxima = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	bool bEstaMuerto = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PowerUps")
	float MultiplicadorDanio = 1.0f;

	UFUNCTION(BlueprintCallable)
	void Curar(float Cantidad);

	UFUNCTION(BlueprintCallable)
	void ActivarDanioExtra(float Multiplicador, float Duracion);

	UFUNCTION(BlueprintCallable)
	void ActivarVelocidadExtra(float Multiplicador, float Duracion);

	void QuitarDanioExtra();

	void QuitarVelocidadExtra();

	FTimerHandle TimerDanioExtra;
	FTimerHandle TimerVelocidadExtra;

	float VelocidadBase;

	UFUNCTION(BlueprintCallable)
	void RecibirDanio(float CantidadDanio);

	UFUNCTION(BlueprintCallable)
	void Morir();

	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite )
	FVector GunOffset;
	
	/* How fast the weapon will fire */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float FireRate;

	/* The speed our ship moves around the level */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float MoveSpeed;

	/** Sound to play each time we fire */
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
	class USoundBase* FireSound;

	// Begin Actor Interface
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End Actor Interface

	/* Fire a shot in the specified direction */
	void FireShot(FVector FireDirection);

	/* Handler for the fire timer expiry */
	void ShotTimerExpired();

	void ReiniciarNivel();

	// Static names for axis bindings
	static const FName MoveForwardBinding;
	static const FName MoveRightBinding;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pool")
	int32 CantidadProyectilesPool = 30;

	TObjectPool<class AShooterNaves2025Projectile> PoolProyectiles;

	void CrearPoolProyectiles();

	AShooterNaves2025Projectile* ObtenerProyectilDisponible();

	float MouseYawInput = 0.f;
    float MousePitchInput = 0.f;

    void Turn(float Value);
    void LookUp(float Value);
    void Fire(float Value);
     FRotator CameraRotation;

private:

	/* Flag to control firing  */
	uint32 bCanFire : 1;

	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;

public:
	/** Returns ShipMeshComponent subobject **/
	FORCEINLINE class UStaticMeshComponent* GetShipMeshComponent() const { return ShipMeshComponent; }
	/** Returns CameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return CameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
};

