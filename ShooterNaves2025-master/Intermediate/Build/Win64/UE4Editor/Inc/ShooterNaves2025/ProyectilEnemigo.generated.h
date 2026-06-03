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
#ifdef SHOOTERNAVES2025_ProyectilEnemigo_generated_h
#error "ProyectilEnemigo.generated.h already included, missing '#pragma once' in ProyectilEnemigo.h"
#endif
#define SHOOTERNAVES2025_ProyectilEnemigo_generated_h

#define ShooterNaves2025_master_Source_ShooterNaves2025_Public_ProyectilEnemigo_h_11_SPARSE_DATA
#define ShooterNaves2025_master_Source_ShooterNaves2025_Public_ProyectilEnemigo_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDesactivarProyectil); \
	DECLARE_FUNCTION(execActivarProyectil); \
	DECLARE_FUNCTION(execOnOverlap);


#define ShooterNaves2025_master_Source_ShooterNaves2025_Public_ProyectilEnemigo_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDesactivarProyectil); \
	DECLARE_FUNCTION(execActivarProyectil); \
	DECLARE_FUNCTION(execOnOverlap);


#define ShooterNaves2025_master_Source_ShooterNaves2025_Public_ProyectilEnemigo_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProyectilEnemigo(); \
	friend struct Z_Construct_UClass_AProyectilEnemigo_Statics; \
public: \
	DECLARE_CLASS(AProyectilEnemigo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterNaves2025"), NO_API) \
	DECLARE_SERIALIZER(AProyectilEnemigo)


#define ShooterNaves2025_master_Source_ShooterNaves2025_Public_ProyectilEnemigo_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAProyectilEnemigo(); \
	friend struct Z_Construct_UClass_AProyectilEnemigo_Statics; \
public: \
	DECLARE_CLASS(AProyectilEnemigo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterNaves2025"), NO_API) \
	DECLARE_SERIALIZER(AProyectilEnemigo)


#define ShooterNaves2025_master_Source_ShooterNaves2025_Public_ProyectilEnemigo_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProyectilEnemigo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProyectilEnemigo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProyectilEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProyectilEnemigo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProyectilEnemigo(AProyectilEnemigo&&); \
	NO_API AProyectilEnemigo(const AProyectilEnemigo&); \
public:


#define ShooterNaves2025_master_Source_ShooterNaves2025_Public_ProyectilEnemigo_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProyectilEnemigo(AProyectilEnemigo&&); \
	NO_API AProyectilEnemigo(const AProyectilEnemigo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProyectilEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProyectilEnemigo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProyectilEnemigo)


#define ShooterNaves2025_master_Source_ShooterNaves2025_Public_ProyectilEnemigo_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bActivo() { return STRUCT_OFFSET(AProyectilEnemigo, bActivo); }


#define ShooterNaves2025_master_Source_ShooterNaves2025_Public_ProyectilEnemigo_h_8_PROLOG
#define ShooterNaves2025_master_Source_ShooterNaves2025_Public_ProyectilEnemigo_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterNaves2025_master_Source_ShooterNaves2025_Public_ProyectilEnemigo_h_11_PRIVATE_PROPERTY_OFFSET \
	ShooterNaves2025_master_Source_ShooterNaves2025_Public_ProyectilEnemigo_h_11_SPARSE_DATA \
	ShooterNaves2025_master_Source_ShooterNaves2025_Public_ProyectilEnemigo_h_11_RPC_WRAPPERS \
	ShooterNaves2025_master_Source_ShooterNaves2025_Public_ProyectilEnemigo_h_11_INCLASS \
	ShooterNaves2025_master_Source_ShooterNaves2025_Public_ProyectilEnemigo_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterNaves2025_master_Source_ShooterNaves2025_Public_ProyectilEnemigo_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterNaves2025_master_Source_ShooterNaves2025_Public_ProyectilEnemigo_h_11_PRIVATE_PROPERTY_OFFSET \
	ShooterNaves2025_master_Source_ShooterNaves2025_Public_ProyectilEnemigo_h_11_SPARSE_DATA \
	ShooterNaves2025_master_Source_ShooterNaves2025_Public_ProyectilEnemigo_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterNaves2025_master_Source_ShooterNaves2025_Public_ProyectilEnemigo_h_11_INCLASS_NO_PURE_DECLS \
	ShooterNaves2025_master_Source_ShooterNaves2025_Public_ProyectilEnemigo_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERNAVES2025_API UClass* StaticClass<class AProyectilEnemigo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterNaves2025_master_Source_ShooterNaves2025_Public_ProyectilEnemigo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
