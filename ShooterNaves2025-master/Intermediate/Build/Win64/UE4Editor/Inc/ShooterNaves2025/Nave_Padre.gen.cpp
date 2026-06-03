// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterNaves2025/Public/Nave_Padre.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNave_Padre() {}
// Cross Module References
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_ANave_Padre_NoRegister();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_ANave_Padre();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ShooterNaves2025();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ANave_Padre::execAplicarBuffBoss)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MultiplicadorVida);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MultiplicadorResistencia);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AplicarBuffBoss(Z_Param_MultiplicadorVida,Z_Param_MultiplicadorResistencia);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANave_Padre::execMorir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Morir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANave_Padre::execRecibirDanio)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CantidadDanio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RecibirDanio(Z_Param_CantidadDanio);
		P_NATIVE_END;
	}
	void ANave_Padre::StaticRegisterNativesANave_Padre()
	{
		UClass* Class = ANave_Padre::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AplicarBuffBoss", &ANave_Padre::execAplicarBuffBoss },
			{ "Morir", &ANave_Padre::execMorir },
			{ "RecibirDanio", &ANave_Padre::execRecibirDanio },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANave_Padre_AplicarBuffBoss_Statics
	{
		struct Nave_Padre_eventAplicarBuffBoss_Parms
		{
			float MultiplicadorVida;
			float MultiplicadorResistencia;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MultiplicadorVida;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MultiplicadorResistencia;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANave_Padre_AplicarBuffBoss_Statics::NewProp_MultiplicadorVida = { "MultiplicadorVida", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Nave_Padre_eventAplicarBuffBoss_Parms, MultiplicadorVida), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANave_Padre_AplicarBuffBoss_Statics::NewProp_MultiplicadorResistencia = { "MultiplicadorResistencia", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Nave_Padre_eventAplicarBuffBoss_Parms, MultiplicadorResistencia), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANave_Padre_AplicarBuffBoss_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANave_Padre_AplicarBuffBoss_Statics::NewProp_MultiplicadorVida,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANave_Padre_AplicarBuffBoss_Statics::NewProp_MultiplicadorResistencia,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANave_Padre_AplicarBuffBoss_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nave_Padre.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANave_Padre_AplicarBuffBoss_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANave_Padre, nullptr, "AplicarBuffBoss", nullptr, nullptr, sizeof(Nave_Padre_eventAplicarBuffBoss_Parms), Z_Construct_UFunction_ANave_Padre_AplicarBuffBoss_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANave_Padre_AplicarBuffBoss_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANave_Padre_AplicarBuffBoss_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANave_Padre_AplicarBuffBoss_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANave_Padre_AplicarBuffBoss()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANave_Padre_AplicarBuffBoss_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANave_Padre_Morir_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANave_Padre_Morir_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nave_Padre.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANave_Padre_Morir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANave_Padre, nullptr, "Morir", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANave_Padre_Morir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANave_Padre_Morir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANave_Padre_Morir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANave_Padre_Morir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANave_Padre_RecibirDanio_Statics
	{
		struct Nave_Padre_eventRecibirDanio_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANave_Padre_RecibirDanio_Statics::NewProp_CantidadDanio = { "CantidadDanio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Nave_Padre_eventRecibirDanio_Parms, CantidadDanio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANave_Padre_RecibirDanio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANave_Padre_RecibirDanio_Statics::NewProp_CantidadDanio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANave_Padre_RecibirDanio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nave_Padre.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANave_Padre_RecibirDanio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANave_Padre, nullptr, "RecibirDanio", nullptr, nullptr, sizeof(Nave_Padre_eventRecibirDanio_Parms), Z_Construct_UFunction_ANave_Padre_RecibirDanio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANave_Padre_RecibirDanio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANave_Padre_RecibirDanio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANave_Padre_RecibirDanio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANave_Padre_RecibirDanio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANave_Padre_RecibirDanio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANave_Padre_NoRegister()
	{
		return ANave_Padre::StaticClass();
	}
	struct Z_Construct_UClass_ANave_Padre_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vida_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Vida;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocidad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocidad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DanioContacto_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DanioContacto;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEstaMuerta_MetaData[];
#endif
		static void NewProp_bEstaMuerta_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEstaMuerta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPerseguirJugador_MetaData[];
#endif
		static void NewProp_bPerseguirJugador_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPerseguirJugador;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanciaMinima_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanciaMinima;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshNave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshNave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEsMiniBoss_MetaData[];
#endif
		static void NewProp_bEsMiniBoss_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEsMiniBoss;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiplicadorDanioRecibido_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MultiplicadorDanioRecibido;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEsBossFinal_MetaData[];
#endif
		static void NewProp_bEsBossFinal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEsBossFinal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Jugador_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Jugador;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBuffActivo_MetaData[];
#endif
		static void NewProp_bBuffActivo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuffActivo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANave_Padre_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterNaves2025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANave_Padre_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANave_Padre_AplicarBuffBoss, "AplicarBuffBoss" }, // 1291488358
		{ &Z_Construct_UFunction_ANave_Padre_Morir, "Morir" }, // 1693641474
		{ &Z_Construct_UFunction_ANave_Padre_RecibirDanio, "RecibirDanio" }, // 3208155039
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Padre_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nave_Padre.h" },
		{ "ModuleRelativePath", "Public/Nave_Padre.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Padre_Statics::NewProp_Vida_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Nave_Padre.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANave_Padre_Statics::NewProp_Vida = { "Vida", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave_Padre, Vida), METADATA_PARAMS(Z_Construct_UClass_ANave_Padre_Statics::NewProp_Vida_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Padre_Statics::NewProp_Vida_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Padre_Statics::NewProp_Velocidad_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Nave_Padre.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANave_Padre_Statics::NewProp_Velocidad = { "Velocidad", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave_Padre, Velocidad), METADATA_PARAMS(Z_Construct_UClass_ANave_Padre_Statics::NewProp_Velocidad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Padre_Statics::NewProp_Velocidad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Padre_Statics::NewProp_DanioContacto_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Nave_Padre.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANave_Padre_Statics::NewProp_DanioContacto = { "DanioContacto", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave_Padre, DanioContacto), METADATA_PARAMS(Z_Construct_UClass_ANave_Padre_Statics::NewProp_DanioContacto_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Padre_Statics::NewProp_DanioContacto_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Padre_Statics::NewProp_bEstaMuerta_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Nave_Padre.h" },
	};
#endif
	void Z_Construct_UClass_ANave_Padre_Statics::NewProp_bEstaMuerta_SetBit(void* Obj)
	{
		((ANave_Padre*)Obj)->bEstaMuerta = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANave_Padre_Statics::NewProp_bEstaMuerta = { "bEstaMuerta", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANave_Padre), &Z_Construct_UClass_ANave_Padre_Statics::NewProp_bEstaMuerta_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANave_Padre_Statics::NewProp_bEstaMuerta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Padre_Statics::NewProp_bEstaMuerta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Padre_Statics::NewProp_bPerseguirJugador_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "Public/Nave_Padre.h" },
	};
#endif
	void Z_Construct_UClass_ANave_Padre_Statics::NewProp_bPerseguirJugador_SetBit(void* Obj)
	{
		((ANave_Padre*)Obj)->bPerseguirJugador = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANave_Padre_Statics::NewProp_bPerseguirJugador = { "bPerseguirJugador", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANave_Padre), &Z_Construct_UClass_ANave_Padre_Statics::NewProp_bPerseguirJugador_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANave_Padre_Statics::NewProp_bPerseguirJugador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Padre_Statics::NewProp_bPerseguirJugador_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Padre_Statics::NewProp_DistanciaMinima_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "Public/Nave_Padre.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANave_Padre_Statics::NewProp_DistanciaMinima = { "DistanciaMinima", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave_Padre, DistanciaMinima), METADATA_PARAMS(Z_Construct_UClass_ANave_Padre_Statics::NewProp_DistanciaMinima_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Padre_Statics::NewProp_DistanciaMinima_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Padre_Statics::NewProp_MeshNave_MetaData[] = {
		{ "Category", "Componentes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Nave_Padre.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANave_Padre_Statics::NewProp_MeshNave = { "MeshNave", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave_Padre, MeshNave), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANave_Padre_Statics::NewProp_MeshNave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Padre_Statics::NewProp_MeshNave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Padre_Statics::NewProp_bEsMiniBoss_MetaData[] = {
		{ "Category", "Tipo" },
		{ "ModuleRelativePath", "Public/Nave_Padre.h" },
	};
#endif
	void Z_Construct_UClass_ANave_Padre_Statics::NewProp_bEsMiniBoss_SetBit(void* Obj)
	{
		((ANave_Padre*)Obj)->bEsMiniBoss = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANave_Padre_Statics::NewProp_bEsMiniBoss = { "bEsMiniBoss", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANave_Padre), &Z_Construct_UClass_ANave_Padre_Statics::NewProp_bEsMiniBoss_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANave_Padre_Statics::NewProp_bEsMiniBoss_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Padre_Statics::NewProp_bEsMiniBoss_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Padre_Statics::NewProp_MultiplicadorDanioRecibido_MetaData[] = {
		{ "Category", "Defensa" },
		{ "ModuleRelativePath", "Public/Nave_Padre.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANave_Padre_Statics::NewProp_MultiplicadorDanioRecibido = { "MultiplicadorDanioRecibido", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave_Padre, MultiplicadorDanioRecibido), METADATA_PARAMS(Z_Construct_UClass_ANave_Padre_Statics::NewProp_MultiplicadorDanioRecibido_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Padre_Statics::NewProp_MultiplicadorDanioRecibido_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Padre_Statics::NewProp_bEsBossFinal_MetaData[] = {
		{ "Category", "Nave_Padre" },
		{ "ModuleRelativePath", "Public/Nave_Padre.h" },
	};
#endif
	void Z_Construct_UClass_ANave_Padre_Statics::NewProp_bEsBossFinal_SetBit(void* Obj)
	{
		((ANave_Padre*)Obj)->bEsBossFinal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANave_Padre_Statics::NewProp_bEsBossFinal = { "bEsBossFinal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANave_Padre), &Z_Construct_UClass_ANave_Padre_Statics::NewProp_bEsBossFinal_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANave_Padre_Statics::NewProp_bEsBossFinal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Padre_Statics::NewProp_bEsBossFinal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Padre_Statics::NewProp_Jugador_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nave_Padre.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANave_Padre_Statics::NewProp_Jugador = { "Jugador", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave_Padre, Jugador), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANave_Padre_Statics::NewProp_Jugador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Padre_Statics::NewProp_Jugador_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Padre_Statics::NewProp_bBuffActivo_MetaData[] = {
		{ "Category", "Buff" },
		{ "ModuleRelativePath", "Public/Nave_Padre.h" },
	};
#endif
	void Z_Construct_UClass_ANave_Padre_Statics::NewProp_bBuffActivo_SetBit(void* Obj)
	{
		((ANave_Padre*)Obj)->bBuffActivo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANave_Padre_Statics::NewProp_bBuffActivo = { "bBuffActivo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANave_Padre), &Z_Construct_UClass_ANave_Padre_Statics::NewProp_bBuffActivo_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANave_Padre_Statics::NewProp_bBuffActivo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Padre_Statics::NewProp_bBuffActivo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANave_Padre_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Padre_Statics::NewProp_Vida,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Padre_Statics::NewProp_Velocidad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Padre_Statics::NewProp_DanioContacto,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Padre_Statics::NewProp_bEstaMuerta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Padre_Statics::NewProp_bPerseguirJugador,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Padre_Statics::NewProp_DistanciaMinima,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Padre_Statics::NewProp_MeshNave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Padre_Statics::NewProp_bEsMiniBoss,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Padre_Statics::NewProp_MultiplicadorDanioRecibido,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Padre_Statics::NewProp_bEsBossFinal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Padre_Statics::NewProp_Jugador,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Padre_Statics::NewProp_bBuffActivo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANave_Padre_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANave_Padre>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANave_Padre_Statics::ClassParams = {
		&ANave_Padre::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANave_Padre_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Padre_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANave_Padre_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Padre_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANave_Padre()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANave_Padre_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANave_Padre, 1161679729);
	template<> SHOOTERNAVES2025_API UClass* StaticClass<ANave_Padre>()
	{
		return ANave_Padre::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANave_Padre(Z_Construct_UClass_ANave_Padre, &ANave_Padre::StaticClass, TEXT("/Script/ShooterNaves2025"), TEXT("ANave_Padre"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANave_Padre);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
