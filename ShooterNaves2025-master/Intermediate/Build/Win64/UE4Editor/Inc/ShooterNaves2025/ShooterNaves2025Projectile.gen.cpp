// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterNaves2025/ShooterNaves2025Projectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterNaves2025Projectile() {}
// Cross Module References
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_AShooterNaves2025Projectile_NoRegister();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_AShooterNaves2025Projectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ShooterNaves2025();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AShooterNaves2025Projectile::execDesactivarProyectil)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DesactivarProyectil();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterNaves2025Projectile::execActivarProyectil)
	{
		P_GET_STRUCT(FVector,Z_Param_NuevaUbicacion);
		P_GET_STRUCT(FRotator,Z_Param_NuevaRotacion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivarProyectil(Z_Param_NuevaUbicacion,Z_Param_NuevaRotacion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterNaves2025Projectile::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void AShooterNaves2025Projectile::StaticRegisterNativesAShooterNaves2025Projectile()
	{
		UClass* Class = AShooterNaves2025Projectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivarProyectil", &AShooterNaves2025Projectile::execActivarProyectil },
			{ "DesactivarProyectil", &AShooterNaves2025Projectile::execDesactivarProyectil },
			{ "OnHit", &AShooterNaves2025Projectile::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterNaves2025Projectile_ActivarProyectil_Statics
	{
		struct ShooterNaves2025Projectile_eventActivarProyectil_Parms
		{
			FVector NuevaUbicacion;
			FRotator NuevaRotacion;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NuevaUbicacion;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NuevaRotacion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterNaves2025Projectile_ActivarProyectil_Statics::NewProp_NuevaUbicacion = { "NuevaUbicacion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterNaves2025Projectile_eventActivarProyectil_Parms, NuevaUbicacion), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterNaves2025Projectile_ActivarProyectil_Statics::NewProp_NuevaRotacion = { "NuevaRotacion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterNaves2025Projectile_eventActivarProyectil_Parms, NuevaRotacion), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterNaves2025Projectile_ActivarProyectil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterNaves2025Projectile_ActivarProyectil_Statics::NewProp_NuevaUbicacion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterNaves2025Projectile_ActivarProyectil_Statics::NewProp_NuevaRotacion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterNaves2025Projectile_ActivarProyectil_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterNaves2025Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterNaves2025Projectile_ActivarProyectil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterNaves2025Projectile, nullptr, "ActivarProyectil", nullptr, nullptr, sizeof(ShooterNaves2025Projectile_eventActivarProyectil_Parms), Z_Construct_UFunction_AShooterNaves2025Projectile_ActivarProyectil_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterNaves2025Projectile_ActivarProyectil_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterNaves2025Projectile_ActivarProyectil_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterNaves2025Projectile_ActivarProyectil_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterNaves2025Projectile_ActivarProyectil()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterNaves2025Projectile_ActivarProyectil_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterNaves2025Projectile_DesactivarProyectil_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterNaves2025Projectile_DesactivarProyectil_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterNaves2025Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterNaves2025Projectile_DesactivarProyectil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterNaves2025Projectile, nullptr, "DesactivarProyectil", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterNaves2025Projectile_DesactivarProyectil_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterNaves2025Projectile_DesactivarProyectil_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterNaves2025Projectile_DesactivarProyectil()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterNaves2025Projectile_DesactivarProyectil_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics
	{
		struct ShooterNaves2025Projectile_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterNaves2025Projectile_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterNaves2025Projectile_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterNaves2025Projectile_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterNaves2025Projectile_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterNaves2025Projectile_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::NewProp_HitComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterNaves2025Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterNaves2025Projectile, nullptr, "OnHit", nullptr, nullptr, sizeof(ShooterNaves2025Projectile_eventOnHit_Parms), Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShooterNaves2025Projectile_NoRegister()
	{
		return AShooterNaves2025Projectile::StaticClass();
	}
	struct Z_Construct_UClass_AShooterNaves2025Projectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActivo_MetaData[];
#endif
		static void NewProp_bActivo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActivo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Danio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Danio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterNaves2025Projectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterNaves2025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterNaves2025Projectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterNaves2025Projectile_ActivarProyectil, "ActivarProyectil" }, // 866487969
		{ &Z_Construct_UFunction_AShooterNaves2025Projectile_DesactivarProyectil, "DesactivarProyectil" }, // 19014959
		{ &Z_Construct_UFunction_AShooterNaves2025Projectile_OnHit, "OnHit" }, // 3336013570
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025Projectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ShooterNaves2025Projectile.h" },
		{ "ModuleRelativePath", "ShooterNaves2025Projectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025Projectile_Statics::NewProp_ProjectileMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterNaves2025Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterNaves2025Projectile_Statics::NewProp_ProjectileMesh = { "ProjectileMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterNaves2025Projectile, ProjectileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025Projectile_Statics::NewProp_ProjectileMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025Projectile_Statics::NewProp_ProjectileMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025Projectile_Statics::NewProp_ProjectileMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterNaves2025Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterNaves2025Projectile_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterNaves2025Projectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025Projectile_Statics::NewProp_ProjectileMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025Projectile_Statics::NewProp_ProjectileMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025Projectile_Statics::NewProp_bActivo_MetaData[] = {
		{ "Category", "Pool" },
		{ "ModuleRelativePath", "ShooterNaves2025Projectile.h" },
	};
#endif
	void Z_Construct_UClass_AShooterNaves2025Projectile_Statics::NewProp_bActivo_SetBit(void* Obj)
	{
		((AShooterNaves2025Projectile*)Obj)->bActivo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterNaves2025Projectile_Statics::NewProp_bActivo = { "bActivo", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterNaves2025Projectile), &Z_Construct_UClass_AShooterNaves2025Projectile_Statics::NewProp_bActivo_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025Projectile_Statics::NewProp_bActivo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025Projectile_Statics::NewProp_bActivo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025Projectile_Statics::NewProp_Danio_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "ShooterNaves2025Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterNaves2025Projectile_Statics::NewProp_Danio = { "Danio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterNaves2025Projectile, Danio), METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025Projectile_Statics::NewProp_Danio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025Projectile_Statics::NewProp_Danio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterNaves2025Projectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025Projectile_Statics::NewProp_ProjectileMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025Projectile_Statics::NewProp_ProjectileMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025Projectile_Statics::NewProp_bActivo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025Projectile_Statics::NewProp_Danio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterNaves2025Projectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterNaves2025Projectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterNaves2025Projectile_Statics::ClassParams = {
		&AShooterNaves2025Projectile::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShooterNaves2025Projectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025Projectile_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025Projectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025Projectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterNaves2025Projectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterNaves2025Projectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterNaves2025Projectile, 2840464658);
	template<> SHOOTERNAVES2025_API UClass* StaticClass<AShooterNaves2025Projectile>()
	{
		return AShooterNaves2025Projectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterNaves2025Projectile(Z_Construct_UClass_AShooterNaves2025Projectile, &AShooterNaves2025Projectile::StaticClass, TEXT("/Script/ShooterNaves2025"), TEXT("AShooterNaves2025Projectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterNaves2025Projectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
