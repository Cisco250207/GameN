// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterNaves2025/Public/PowerUpEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerUpEffect() {}
// Cross Module References
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_UPowerUpEffect_NoRegister();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_UPowerUpEffect();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ShooterNaves2025();
// End Cross Module References
	void UPowerUpEffect::StaticRegisterNativesUPowerUpEffect()
	{
	}
	UClass* Z_Construct_UClass_UPowerUpEffect_NoRegister()
	{
		return UPowerUpEffect::StaticClass();
	}
	struct Z_Construct_UClass_UPowerUpEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPowerUpEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterNaves2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerUpEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PowerUpEffect.h" },
		{ "ModuleRelativePath", "Public/PowerUpEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPowerUpEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPowerUpEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPowerUpEffect_Statics::ClassParams = {
		&UPowerUpEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPowerUpEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerUpEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPowerUpEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPowerUpEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPowerUpEffect, 1992564366);
	template<> SHOOTERNAVES2025_API UClass* StaticClass<UPowerUpEffect>()
	{
		return UPowerUpEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPowerUpEffect(Z_Construct_UClass_UPowerUpEffect, &UPowerUpEffect::StaticClass, TEXT("/Script/ShooterNaves2025"), TEXT("UPowerUpEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPowerUpEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
