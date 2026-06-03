// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterNaves2025/Public/PowerUpDanioExtra.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerUpDanioExtra() {}
// Cross Module References
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_APowerUpDanioExtra_NoRegister();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_APowerUpDanioExtra();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_APowerUpBase();
	UPackage* Z_Construct_UPackage__Script_ShooterNaves2025();
// End Cross Module References
	void APowerUpDanioExtra::StaticRegisterNativesAPowerUpDanioExtra()
	{
	}
	UClass* Z_Construct_UClass_APowerUpDanioExtra_NoRegister()
	{
		return APowerUpDanioExtra::StaticClass();
	}
	struct Z_Construct_UClass_APowerUpDanioExtra_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APowerUpDanioExtra_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APowerUpBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterNaves2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerUpDanioExtra_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PowerUpDanioExtra.h" },
		{ "ModuleRelativePath", "Public/PowerUpDanioExtra.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APowerUpDanioExtra_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APowerUpDanioExtra>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APowerUpDanioExtra_Statics::ClassParams = {
		&APowerUpDanioExtra::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APowerUpDanioExtra_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APowerUpDanioExtra_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APowerUpDanioExtra()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APowerUpDanioExtra_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APowerUpDanioExtra, 257459926);
	template<> SHOOTERNAVES2025_API UClass* StaticClass<APowerUpDanioExtra>()
	{
		return APowerUpDanioExtra::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APowerUpDanioExtra(Z_Construct_UClass_APowerUpDanioExtra, &APowerUpDanioExtra::StaticClass, TEXT("/Script/ShooterNaves2025"), TEXT("APowerUpDanioExtra"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APowerUpDanioExtra);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
