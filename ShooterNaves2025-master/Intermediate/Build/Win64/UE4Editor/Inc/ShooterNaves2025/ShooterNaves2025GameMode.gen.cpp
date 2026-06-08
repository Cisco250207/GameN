// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterNaves2025/ShooterNaves2025GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterNaves2025GameMode() {}
// Cross Module References
	SHOOTERNAVES2025_API UEnum* Z_Construct_UEnum_ShooterNaves2025_EEstadoJuego();
	UPackage* Z_Construct_UPackage__Script_ShooterNaves2025();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_AShooterNaves2025GameMode_NoRegister();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_AShooterNaves2025GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_UEnemySpawnFacade_NoRegister();
// End Cross Module References
	static UEnum* EEstadoJuego_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ShooterNaves2025_EEstadoJuego, Z_Construct_UPackage__Script_ShooterNaves2025(), TEXT("EEstadoJuego"));
		}
		return Singleton;
	}
	template<> SHOOTERNAVES2025_API UEnum* StaticEnum<EEstadoJuego>()
	{
		return EEstadoJuego_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEstadoJuego(EEstadoJuego_StaticEnum, TEXT("/Script/ShooterNaves2025"), TEXT("EEstadoJuego"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ShooterNaves2025_EEstadoJuego_Hash() { return 2051847398U; }
	UEnum* Z_Construct_UEnum_ShooterNaves2025_EEstadoJuego()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ShooterNaves2025();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEstadoJuego"), 0, Get_Z_Construct_UEnum_ShooterNaves2025_EEstadoJuego_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEstadoJuego::Jugando", (int64)EEstadoJuego::Jugando },
				{ "EEstadoJuego::GameOver", (int64)EEstadoJuego::GameOver },
				{ "EEstadoJuego::GoodEnding", (int64)EEstadoJuego::GoodEnding },
				{ "EEstadoJuego::FaseCompletada", (int64)EEstadoJuego::FaseCompletada },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// GameMode principal del juego\n// Maneja los 6 niveles, las oleadas de enemigos,\n// el sistema de vidas y la logica de victoria/derrota\n" },
				{ "FaseCompletada.DisplayName", "Fase Completada" },
				{ "FaseCompletada.Name", "EEstadoJuego::FaseCompletada" },
				{ "GameOver.DisplayName", "Game Over" },
				{ "GameOver.Name", "EEstadoJuego::GameOver" },
				{ "GoodEnding.DisplayName", "Good Ending" },
				{ "GoodEnding.Name", "EEstadoJuego::GoodEnding" },
				{ "Jugando.DisplayName", "Jugando" },
				{ "Jugando.Name", "EEstadoJuego::Jugando" },
				{ "ModuleRelativePath", "ShooterNaves2025GameMode.h" },
				{ "ToolTip", "GameMode principal del juego\nManeja los 6 niveles, las oleadas de enemigos,\nel sistema de vidas y la logica de victoria/derrota" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ShooterNaves2025,
				nullptr,
				"EEstadoJuego",
				"EEstadoJuego",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(AShooterNaves2025GameMode::execCambiarEstado)
	{
		P_GET_ENUM(EEstadoJuego,Z_Param_NuevoEstado);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CambiarEstado(EEstadoJuego(Z_Param_NuevoEstado));
		P_NATIVE_END;
	}
	void AShooterNaves2025GameMode::StaticRegisterNativesAShooterNaves2025GameMode()
	{
		UClass* Class = AShooterNaves2025GameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CambiarEstado", &AShooterNaves2025GameMode::execCambiarEstado },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterNaves2025GameMode_CambiarEstado_Statics
	{
		struct ShooterNaves2025GameMode_eventCambiarEstado_Parms
		{
			EEstadoJuego NuevoEstado;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NuevoEstado_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NuevoEstado;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AShooterNaves2025GameMode_CambiarEstado_Statics::NewProp_NuevoEstado_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AShooterNaves2025GameMode_CambiarEstado_Statics::NewProp_NuevoEstado = { "NuevoEstado", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterNaves2025GameMode_eventCambiarEstado_Parms, NuevoEstado), Z_Construct_UEnum_ShooterNaves2025_EEstadoJuego, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterNaves2025GameMode_CambiarEstado_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterNaves2025GameMode_CambiarEstado_Statics::NewProp_NuevoEstado_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterNaves2025GameMode_CambiarEstado_Statics::NewProp_NuevoEstado,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterNaves2025GameMode_CambiarEstado_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterNaves2025GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterNaves2025GameMode_CambiarEstado_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterNaves2025GameMode, nullptr, "CambiarEstado", nullptr, nullptr, sizeof(ShooterNaves2025GameMode_eventCambiarEstado_Parms), Z_Construct_UFunction_AShooterNaves2025GameMode_CambiarEstado_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterNaves2025GameMode_CambiarEstado_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterNaves2025GameMode_CambiarEstado_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterNaves2025GameMode_CambiarEstado_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterNaves2025GameMode_CambiarEstado()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterNaves2025GameMode_CambiarEstado_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShooterNaves2025GameMode_NoRegister()
	{
		return AShooterNaves2025GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AShooterNaves2025GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NivelActual_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NivelActual;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemigosRestantes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnemigosRestantes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaEnemigos_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MetaEnemigos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VidasJugador_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VidasJugador;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Puntuacion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Puntuacion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGameOver_MetaData[];
#endif
		static void NewProp_bGameOver_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGameOver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGoodEnding_MetaData[];
#endif
		static void NewProp_bGoodEnding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGoodEnding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFase1Completada_MetaData[];
#endif
		static void NewProp_bFase1Completada_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFase1Completada;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextoLoreActual_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextoLoreActual;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MensajeTemporal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MensajeTemporal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TiempoMensajeTemporal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TiempoMensajeTemporal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextoBadEnding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextoBadEnding;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EstadoActual_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EstadoActual_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EstadoActual;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemySpawnFacade_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemySpawnFacade;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterNaves2025GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterNaves2025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterNaves2025GameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterNaves2025GameMode_CambiarEstado, "CambiarEstado" }, // 2367534821
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ShooterNaves2025GameMode.h" },
		{ "ModuleRelativePath", "ShooterNaves2025GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_NivelActual_MetaData[] = {
		{ "Category", "Nivel" },
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 SISTEMA DE NIVELES \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n// Nivel actual del juego (1 al 6)\n" },
		{ "ModuleRelativePath", "ShooterNaves2025GameMode.h" },
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 SISTEMA DE NIVELES \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\nNivel actual del juego (1 al 6)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_NivelActual = { "NivelActual", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterNaves2025GameMode, NivelActual), METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_NivelActual_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_NivelActual_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_EnemigosRestantes_MetaData[] = {
		{ "Category", "Nivel" },
		{ "Comment", "// Enemigos que quedan por destruir en el nivel actual\n" },
		{ "ModuleRelativePath", "ShooterNaves2025GameMode.h" },
		{ "ToolTip", "Enemigos que quedan por destruir en el nivel actual" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_EnemigosRestantes = { "EnemigosRestantes", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterNaves2025GameMode, EnemigosRestantes), METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_EnemigosRestantes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_EnemigosRestantes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_MetaEnemigos_MetaData[] = {
		{ "Category", "Nivel" },
		{ "Comment", "// Enemigos que hay que destruir para pasar el nivel\n" },
		{ "ModuleRelativePath", "ShooterNaves2025GameMode.h" },
		{ "ToolTip", "Enemigos que hay que destruir para pasar el nivel" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_MetaEnemigos = { "MetaEnemigos", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterNaves2025GameMode, MetaEnemigos), METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_MetaEnemigos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_MetaEnemigos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_VidasJugador_MetaData[] = {
		{ "Category", "Jugador" },
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 SISTEMA DE VIDAS \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n// Vidas del jugador\n" },
		{ "ModuleRelativePath", "ShooterNaves2025GameMode.h" },
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 SISTEMA DE VIDAS \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\nVidas del jugador" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_VidasJugador = { "VidasJugador", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterNaves2025GameMode, VidasJugador), METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_VidasJugador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_VidasJugador_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_Puntuacion_MetaData[] = {
		{ "Category", "Jugador" },
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 SISTEMA DE PUNTUACION \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
		{ "ModuleRelativePath", "ShooterNaves2025GameMode.h" },
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 SISTEMA DE PUNTUACION \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_Puntuacion = { "Puntuacion", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterNaves2025GameMode, Puntuacion), METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_Puntuacion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_Puntuacion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_bGameOver_MetaData[] = {
		{ "Category", "Estado" },
		{ "ModuleRelativePath", "ShooterNaves2025GameMode.h" },
	};
#endif
	void Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_bGameOver_SetBit(void* Obj)
	{
		((AShooterNaves2025GameMode*)Obj)->bGameOver = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_bGameOver = { "bGameOver", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterNaves2025GameMode), &Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_bGameOver_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_bGameOver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_bGameOver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_bGoodEnding_MetaData[] = {
		{ "Category", "Estado" },
		{ "ModuleRelativePath", "ShooterNaves2025GameMode.h" },
	};
#endif
	void Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_bGoodEnding_SetBit(void* Obj)
	{
		((AShooterNaves2025GameMode*)Obj)->bGoodEnding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_bGoodEnding = { "bGoodEnding", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterNaves2025GameMode), &Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_bGoodEnding_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_bGoodEnding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_bGoodEnding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_bFase1Completada_MetaData[] = {
		{ "Category", "Estado" },
		{ "ModuleRelativePath", "ShooterNaves2025GameMode.h" },
	};
#endif
	void Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_bFase1Completada_SetBit(void* Obj)
	{
		((AShooterNaves2025GameMode*)Obj)->bFase1Completada = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_bFase1Completada = { "bFase1Completada", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterNaves2025GameMode), &Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_bFase1Completada_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_bFase1Completada_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_bFase1Completada_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_TextoLoreActual_MetaData[] = {
		{ "Category", "Lore" },
		{ "ModuleRelativePath", "ShooterNaves2025GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_TextoLoreActual = { "TextoLoreActual", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterNaves2025GameMode, TextoLoreActual), METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_TextoLoreActual_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_TextoLoreActual_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_MensajeTemporal_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "ShooterNaves2025GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_MensajeTemporal = { "MensajeTemporal", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterNaves2025GameMode, MensajeTemporal), METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_MensajeTemporal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_MensajeTemporal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_TiempoMensajeTemporal_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "ShooterNaves2025GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_TiempoMensajeTemporal = { "TiempoMensajeTemporal", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterNaves2025GameMode, TiempoMensajeTemporal), METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_TiempoMensajeTemporal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_TiempoMensajeTemporal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_TextoBadEnding_MetaData[] = {
		{ "Category", "Estado" },
		{ "ModuleRelativePath", "ShooterNaves2025GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_TextoBadEnding = { "TextoBadEnding", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterNaves2025GameMode, TextoBadEnding), METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_TextoBadEnding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_TextoBadEnding_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_EstadoActual_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_EstadoActual_MetaData[] = {
		{ "Category", "Estado" },
		{ "ModuleRelativePath", "ShooterNaves2025GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_EstadoActual = { "EstadoActual", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterNaves2025GameMode, EstadoActual), Z_Construct_UEnum_ShooterNaves2025_EEstadoJuego, METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_EstadoActual_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_EstadoActual_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_EnemySpawnFacade_MetaData[] = {
		{ "Category", "Spawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterNaves2025GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_EnemySpawnFacade = { "EnemySpawnFacade", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterNaves2025GameMode, EnemySpawnFacade), Z_Construct_UClass_UEnemySpawnFacade_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_EnemySpawnFacade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_EnemySpawnFacade_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterNaves2025GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_NivelActual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_EnemigosRestantes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_MetaEnemigos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_VidasJugador,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_Puntuacion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_bGameOver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_bGoodEnding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_bFase1Completada,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_TextoLoreActual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_MensajeTemporal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_TiempoMensajeTemporal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_TextoBadEnding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_EstadoActual_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_EstadoActual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNaves2025GameMode_Statics::NewProp_EnemySpawnFacade,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterNaves2025GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterNaves2025GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterNaves2025GameMode_Statics::ClassParams = {
		&AShooterNaves2025GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShooterNaves2025GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNaves2025GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterNaves2025GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterNaves2025GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterNaves2025GameMode, 460318828);
	template<> SHOOTERNAVES2025_API UClass* StaticClass<AShooterNaves2025GameMode>()
	{
		return AShooterNaves2025GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterNaves2025GameMode(Z_Construct_UClass_AShooterNaves2025GameMode, &AShooterNaves2025GameMode::StaticClass, TEXT("/Script/ShooterNaves2025"), TEXT("AShooterNaves2025GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterNaves2025GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
