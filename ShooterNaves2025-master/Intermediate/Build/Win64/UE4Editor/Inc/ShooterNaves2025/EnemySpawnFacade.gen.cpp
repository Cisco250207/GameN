// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterNaves2025/Public/EnemySpawnFacade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySpawnFacade() {}
// Cross Module References
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_UEnemySpawnFacade_NoRegister();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_UEnemySpawnFacade();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ShooterNaves2025();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_AShooterNaves2025GameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UEnemySpawnFacade::StaticRegisterNativesUEnemySpawnFacade()
	{
	}
	UClass* Z_Construct_UClass_UEnemySpawnFacade_NoRegister()
	{
		return UEnemySpawnFacade::StaticClass();
	}
	struct Z_Construct_UClass_UEnemySpawnFacade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameModeOwner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemigosActivos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemigosActivos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnemigosActivos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemySpawnFacade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterNaves2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemySpawnFacade_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "EnemySpawnFacade.h" },
		{ "ModuleRelativePath", "Public/EnemySpawnFacade.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemySpawnFacade_Statics::NewProp_GameModeOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemySpawnFacade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemySpawnFacade_Statics::NewProp_GameModeOwner = { "GameModeOwner", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemySpawnFacade, GameModeOwner), Z_Construct_UClass_AShooterNaves2025GameMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemySpawnFacade_Statics::NewProp_GameModeOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySpawnFacade_Statics::NewProp_GameModeOwner_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemySpawnFacade_Statics::NewProp_EnemigosActivos_Inner = { "EnemigosActivos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemySpawnFacade_Statics::NewProp_EnemigosActivos_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemySpawnFacade.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnemySpawnFacade_Statics::NewProp_EnemigosActivos = { "EnemigosActivos", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemySpawnFacade, EnemigosActivos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnemySpawnFacade_Statics::NewProp_EnemigosActivos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySpawnFacade_Statics::NewProp_EnemigosActivos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemySpawnFacade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemySpawnFacade_Statics::NewProp_GameModeOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemySpawnFacade_Statics::NewProp_EnemigosActivos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemySpawnFacade_Statics::NewProp_EnemigosActivos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemySpawnFacade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemySpawnFacade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemySpawnFacade_Statics::ClassParams = {
		&UEnemySpawnFacade::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemySpawnFacade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySpawnFacade_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemySpawnFacade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySpawnFacade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemySpawnFacade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemySpawnFacade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemySpawnFacade, 1765590);
	template<> SHOOTERNAVES2025_API UClass* StaticClass<UEnemySpawnFacade>()
	{
		return UEnemySpawnFacade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemySpawnFacade(Z_Construct_UClass_UEnemySpawnFacade, &UEnemySpawnFacade::StaticClass, TEXT("/Script/ShooterNaves2025"), TEXT("UEnemySpawnFacade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemySpawnFacade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
