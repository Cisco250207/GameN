// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterNaves2025/Public/ShooterHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterHUD() {}
// Cross Module References
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_AShooterHUD_NoRegister();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_AShooterHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ShooterNaves2025();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_AShooterNaves2025Pawn_NoRegister();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_AShooterNaves2025GameMode_NoRegister();
// End Cross Module References
	void AShooterHUD::StaticRegisterNativesAShooterHUD()
	{
	}
	UClass* Z_Construct_UClass_AShooterHUD_NoRegister()
	{
		return AShooterHUD::StaticClass();
	}
	struct Z_Construct_UClass_AShooterHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JugadorCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JugadorCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameModeCache;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterNaves2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "ShooterHUD.h" },
		{ "ModuleRelativePath", "Public/ShooterHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::NewProp_JugadorCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShooterHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterHUD_Statics::NewProp_JugadorCache = { "JugadorCache", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterHUD, JugadorCache), Z_Construct_UClass_AShooterNaves2025Pawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::NewProp_JugadorCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::NewProp_JugadorCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterHUD_Statics::NewProp_GameModeCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShooterHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterHUD_Statics::NewProp_GameModeCache = { "GameModeCache", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterHUD, GameModeCache), Z_Construct_UClass_AShooterNaves2025GameMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::NewProp_GameModeCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::NewProp_GameModeCache_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterHUD_Statics::NewProp_JugadorCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterHUD_Statics::NewProp_GameModeCache,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterHUD_Statics::ClassParams = {
		&AShooterHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShooterHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AShooterHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterHUD, 169620577);
	template<> SHOOTERNAVES2025_API UClass* StaticClass<AShooterHUD>()
	{
		return AShooterHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterHUD(Z_Construct_UClass_AShooterHUD, &AShooterHUD::StaticClass, TEXT("/Script/ShooterNaves2025"), TEXT("AShooterHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
