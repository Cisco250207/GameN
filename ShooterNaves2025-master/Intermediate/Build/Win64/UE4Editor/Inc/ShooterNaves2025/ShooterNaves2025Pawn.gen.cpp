// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterNaves2025/ShooterNaves2025Pawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterNaves2025Pawn() {}
// Cross Module References
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_AShooterNaves2025Pawn_NoRegister();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_AShooterNaves2025Pawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ShooterNaves2025();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AShooterNaves2025Pawn::execMorir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Morir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterNaves2025Pawn::execRecibirDanio)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CantidadDanio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RecibirDanio(Z_Param_CantidadDanio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterNaves2025Pawn::execActivarVelocidadExtra)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplicador);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duracion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivarVelocidadExtra(Z_Param_Multiplicador,Z_Param_Duracion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterNaves2025Pawn::execActivarDanioExtra)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplicador);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duracion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivarDanioExtra(Z_Param_Multiplicador,Z_Param_Duracion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterNaves2025Pawn::execCurar)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Cantidad);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Curar(Z_Param_Cantidad);
		P_NATIVE_END;
	}
	void AShooterNaves2025Pawn::StaticRegisterNativesAShooterNaves2025Pawn()
	{
		UClass* Class = AShooterNaves2025Pawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivarDanioExtra", &AShooterNaves2025Pawn::execActivarDanioExtra },
			{ "ActivarVelocidadExtra", &AShooterNaves2025Pawn::execActivarVelocidadExtra },
			{ "Curar", &AShooterNaves2025Pawn::execCurar },
			{ "Morir", &AShooterNaves2025Pawn::execMorir },
			{ "RecibirDanio", &AShooterNaves2025Pawn::execRecibirDanio },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarDanioExtra_Statics
	{
		struct ShooterNaves2025Pawn_eventActivarDanioExtra_Parms
		{
			float Multiplicador;
			float Duracion;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiplicador;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duracion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarDanioExtra_Statics::NewProp_Multiplicador = { "Multiplicador", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterNaves2025Pawn_eventActivarDanioExtra_Parms, Multiplicador), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarDanioExtra_Statics::NewProp_Duracion = { "Duracion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterNaves2025Pawn_eventActivarDanioExtra_Parms, Duracion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarDanioExtra_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarDanioExtra_Statics::NewProp_Multiplicador,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarDanioExtra_Statics::NewProp_Duracion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarDanioExtra_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterNaves2025Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarDanioExtra_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterNaves2025Pawn, nullptr, "ActivarDanioExtra", nullptr, nullptr, sizeof(ShooterNaves2025Pawn_eventActivarDanioExtra_Parms), Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarDanioExtra_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarDanioExtra_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarDanioExtra_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarDanioExtra_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarDanioExtra()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarDanioExtra_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarVelocidadExtra_Statics
	{
		struct ShooterNaves2025Pawn_eventActivarVelocidadExtra_Parms
		{
			float Multiplicador;
			float Duracion;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiplicador;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duracion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarVelocidadExtra_Statics::NewProp_Multiplicador = { "Multiplicador", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterNaves2025Pawn_eventActivarVelocidadExtra_Parms, Multiplicador), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarVelocidadExtra_Statics::NewProp_Duracion = { "Duracion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterNaves2025Pawn_eventActivarVelocidadExtra_Parms, Duracion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarVelocidadExtra_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarVelocidadExtra_Statics::NewProp_Multiplicador,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarVelocidadExtra_Statics::NewProp_Duracion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarVelocidadExtra_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterNaves2025Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarVelocidadExtra_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterNaves2025Pawn, nullptr, "ActivarVelocidadExtra", nullptr, nullptr, sizeof(ShooterNaves2025Pawn_eventActivarVelocidadExtra_Parms), Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarVelocidadExtra_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarVelocidadExtra_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarVelocidadExtra_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarVelocidadExtra_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarVelocidadExtra()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarVelocidadExtra_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterNaves2025Pawn_Curar_Statics
	{
		struct ShooterNaves2025Pawn_eventCurar_Parms
		{
			float Cantidad;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cantidad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterNaves2025Pawn_Curar_Statics::NewProp_Cantidad = { "Cantidad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterNaves2025Pawn_eventCurar_Parms, Cantidad), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterNaves2025Pawn_Curar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterNaves2025Pawn_Curar_Statics::NewProp_Cantidad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterNaves2025Pawn_Curar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterNaves2025Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterNaves2025Pawn_Curar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterNaves2025Pawn, nullptr, "Curar", nullptr, nullptr, sizeof(ShooterNaves2025Pawn_eventCurar_Parms), Z_Construct_UFunction_AShooterNaves2025Pawn_Curar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterNaves2025Pawn_Curar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterNaves2025Pawn_Curar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterNaves2025Pawn_Curar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterNaves2025Pawn_Curar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterNaves2025Pawn_Curar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterNaves2025Pawn_Morir_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterNaves2025Pawn_Morir_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterNaves2025Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterNaves2025Pawn_Morir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterNaves2025Pawn, nullptr, "Morir", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterNaves2025Pawn_Morir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterNaves2025Pawn_Morir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterNaves2025Pawn_Morir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterNaves2025Pawn_Morir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterNaves2025Pawn_RecibirDanio_Statics
	{
		struct ShooterNaves2025Pawn_eventRecibirDanio_Parms
		{
			float CantidadDanio;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CantidadDanio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterNaves2025Pawn_RecibirDanio_Statics::NewProp_CantidadDanio = { "CantidadDanio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterNaves2025Pawn_eventRecibirDanio_Parms, CantidadDanio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterNaves2025Pawn_RecibirDanio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterNaves2025Pawn_RecibirDanio_Statics::NewProp_CantidadDanio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterNaves2025Pawn_RecibirDanio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterNaves2025Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterNaves2025Pawn_RecibirDanio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterNaves2025Pawn, nullptr, "RecibirDanio", nullptr, nullptr, sizeof(ShooterNaves2025Pawn_eventRecibirDanio_Parms), Z_Construct_UFunction_AShooterNaves2025Pawn_RecibirDanio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterNaves2025Pawn_RecibirDanio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterNaves2025Pawn_RecibirDanio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterNaves2025Pawn_RecibirDanio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterNaves2025Pawn_RecibirDanio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterNaves2025Pawn_RecibirDanio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShooterNaves2025Pawn_NoRegister()
	{
		return AShooterNaves2025Pawn::StaticClass();
	}
	struct Z_Construct_UClass_AShooterNaves2025Pawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShipMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vida_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Vida;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VidaMaxima_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VidaMaxima;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEstaMuerto_MetaData[];
#endif
		static void NewProp_bEstaMuerto_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEstaMuerto;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiplicadorDanio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MultiplicadorDanio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CantidadProyectilesPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CantidadProyectilesPool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterNaves2025Pawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterNaves2025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterNaves2025Pawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarDanioExtra, "ActivarDanioExtra" }, // 2073126842
		{ &Z_Construct_UFunction_AShooterNaves2025Pawn_ActivarVelocidadExtra, "ActivarVelocidadExtra" }, // 1465424158
		{ &Z_Construct_UFunction_AShooterNaves2025Pawn_Curar, "Curar" }, // 566546230
		{ &Z_Construct_UFunction_AShooterNaves2025Pawn_Morir, "Morir" }, // 1998538819
		{ &Z_Construct_UFunction_AShooterNaves2025Pawn_RecibirDanio, "RecibirDanio" }, // 1694376640
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025Pawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShooterNaves2025Pawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ShooterNaves2025Pawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_ShipMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "Comment", "/* The mesh component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterNaves2025Pawn.h" },
		{ "ToolTip", "The mesh component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_ShipMeshComponent = { "ShipMeshComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterNaves2025Pawn, ShipMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_ShipMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_ShipMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** The camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterNaves2025Pawn.h" },
		{ "ToolTip", "The camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterNaves2025Pawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterNaves2025Pawn.h" },
		{ "ToolTip", "Camera boom positioning the camera above the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterNaves2025Pawn, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_Vida_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "ShooterNaves2025Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_Vida = { "Vida", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterNaves2025Pawn, Vida), METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_Vida_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_Vida_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_VidaMaxima_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "ShooterNaves2025Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_VidaMaxima = { "VidaMaxima", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterNaves2025Pawn, VidaMaxima), METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_VidaMaxima_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_VidaMaxima_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_bEstaMuerto_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "ShooterNaves2025Pawn.h" },
	};
#endif
	void Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_bEstaMuerto_SetBit(void* Obj)
	{
		((AShooterNaves2025Pawn*)Obj)->bEstaMuerto = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_bEstaMuerto = { "bEstaMuerto", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterNaves2025Pawn), &Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_bEstaMuerto_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_bEstaMuerto_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_bEstaMuerto_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_MultiplicadorDanio_MetaData[] = {
		{ "Category", "PowerUps" },
		{ "ModuleRelativePath", "ShooterNaves2025Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_MultiplicadorDanio = { "MultiplicadorDanio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterNaves2025Pawn, MultiplicadorDanio), METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_MultiplicadorDanio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_MultiplicadorDanio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Offset from the ships location to spawn projectiles */" },
		{ "ModuleRelativePath", "ShooterNaves2025Pawn.h" },
		{ "ToolTip", "Offset from the ships location to spawn projectiles" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterNaves2025Pawn, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_GunOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/* How fast the weapon will fire */" },
		{ "ModuleRelativePath", "ShooterNaves2025Pawn.h" },
		{ "ToolTip", "How fast the weapon will fire" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterNaves2025Pawn, FireRate), METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/* The speed our ship moves around the level */" },
		{ "ModuleRelativePath", "ShooterNaves2025Pawn.h" },
		{ "ToolTip", "The speed our ship moves around the level" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterNaves2025Pawn, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Sound to play each time we fire */" },
		{ "ModuleRelativePath", "ShooterNaves2025Pawn.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterNaves2025Pawn, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_CantidadProyectilesPool_MetaData[] = {
		{ "Category", "Pool" },
		{ "ModuleRelativePath", "ShooterNaves2025Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_CantidadProyectilesPool = { "CantidadProyectilesPool", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterNaves2025Pawn, CantidadProyectilesPool), METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_CantidadProyectilesPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_CantidadProyectilesPool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterNaves2025Pawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_ShipMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_Vida,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_VidaMaxima,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_bEstaMuerto,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_MultiplicadorDanio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_FireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025Pawn_Statics::NewProp_CantidadProyectilesPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterNaves2025Pawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterNaves2025Pawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterNaves2025Pawn_Statics::ClassParams = {
		&AShooterNaves2025Pawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShooterNaves2025Pawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025Pawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterNaves2025Pawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterNaves2025Pawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterNaves2025Pawn, 1127456382);
	template<> SHOOTERNAVES2025_API UClass* StaticClass<AShooterNaves2025Pawn>()
	{
		return AShooterNaves2025Pawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterNaves2025Pawn(Z_Construct_UClass_AShooterNaves2025Pawn, &AShooterNaves2025Pawn::StaticClass, TEXT("/Script/ShooterNaves2025"), TEXT("AShooterNaves2025Pawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterNaves2025Pawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
