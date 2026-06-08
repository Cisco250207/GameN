// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SHOOTERNAVES2025_ShooterNaves2025Projectile_generated_h
#error "ShooterNaves2025Projectile.generated.h already included, missing '#pragma once' in ShooterNaves2025Projectile.h"
#endif
#define SHOOTERNAVES2025_ShooterNaves2025Projectile_generated_h

#define ShooterNaves2025_master_Source_ShooterNaves2025_ShooterNaves2025Projectile_h_14_SPARSE_DATA
#define ShooterNaves2025_master_Source_ShooterNaves2025_ShooterNaves2025Projectile_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDesactivarProyectil); \
	DECLARE_FUNCTION(execActivarProyectil); \
	DECLARE_FUNCTION(execOnHit);


#define ShooterNaves2025_master_Source_ShooterNaves2025_ShooterNaves2025Projectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDesactivarProyectil); \
	DECLARE_FUNCTION(execActivarProyectil); \
	DECLARE_FUNCTION(execOnHit);


#define ShooterNaves2025_master_Source_ShooterNaves2025_ShooterNaves2025Projectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterNaves2025Projectile(); \
	friend struct Z_Construct_UClass_AShooterNaves2025Projectile_Statics; \
public: \
	DECLARE_CLASS(AShooterNaves2025Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterNaves2025"), NO_API) \
	DECLARE_SERIALIZER(AShooterNaves2025Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ShooterNaves2025_master_Source_ShooterNaves2025_ShooterNaves2025Projectile_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAShooterNaves2025Projectile(); \
	friend struct Z_Construct_UClass_AShooterNaves2025Projectile_Statics; \
public: \
	DECLARE_CLASS(AShooterNaves2025Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterNaves2025"), NO_API) \
	DECLARE_SERIALIZER(AShooterNaves2025Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ShooterNaves2025_master_Source_ShooterNaves2025_ShooterNaves2025Projectile_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterNaves2025Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterNaves2025Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterNaves2025Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterNaves2025Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterNaves2025Projectile(AShooterNaves2025Projectile&&); \
	NO_API AShooterNaves2025Projectile(const AShooterNaves2025Projectile&); \
public:


#define ShooterNaves2025_master_Source_ShooterNaves2025_ShooterNaves2025Projectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterNaves2025Projectile(AShooterNaves2025Projectile&&); \
	NO_API AShooterNaves2025Projectile(const AShooterNaves2025Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterNaves2025Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterNaves2025Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooterNaves2025Projectile)


#define ShooterNaves2025_master_Source_ShooterNaves2025_ShooterNaves2025Projectile_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AShooterNaves2025Projectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AShooterNaves2025Projectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__bActivo() { return STRUCT_OFFSET(AShooterNaves2025Projectile, bActivo); }


#define ShooterNaves2025_master_Source_ShooterNaves2025_ShooterNaves2025Projectile_h_11_PROLOG
#define ShooterNaves2025_master_Source_ShooterNaves2025_ShooterNaves2025Projectile_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterNaves2025_master_Source_ShooterNaves2025_ShooterNaves2025Projectile_h_14_PRIVATE_PROPERTY_OFFSET \
	ShooterNaves2025_master_Source_ShooterNaves2025_ShooterNaves2025Projectile_h_14_SPARSE_DATA \
	ShooterNaves2025_master_Source_ShooterNaves2025_ShooterNaves2025Projectile_h_14_RPC_WRAPPERS \
	ShooterNaves2025_master_Source_ShooterNaves2025_ShooterNaves2025Projectile_h_14_INCLASS \
	ShooterNaves2025_master_Source_ShooterNaves2025_ShooterNaves2025Projectile_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterNaves2025_master_Source_ShooterNaves2025_ShooterNaves2025Projectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterNaves2025_master_Source_ShooterNaves2025_ShooterNaves2025Projectile_h_14_PRIVATE_PROPERTY_OFFSET \
	ShooterNaves2025_master_Source_ShooterNaves2025_ShooterNaves2025Projectile_h_14_SPARSE_DATA \
	ShooterNaves2025_master_Source_ShooterNaves2025_ShooterNaves2025Projectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterNaves2025_master_Source_ShooterNaves2025_ShooterNaves2025Projectile_h_14_INCLASS_NO_PURE_DECLS \
	ShooterNaves2025_master_Source_ShooterNaves2025_ShooterNaves2025Projectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERNAVES2025_API UClass* StaticClass<class AShooterNaves2025Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterNaves2025_master_Source_ShooterNaves2025_ShooterNaves2025Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
