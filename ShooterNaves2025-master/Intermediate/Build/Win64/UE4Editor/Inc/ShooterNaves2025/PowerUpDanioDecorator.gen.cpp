// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterNaves2025/Public/PowerUpDanioDecorator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerUpDanioDecorator() {}
// Cross Module References
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_UPowerUpDanioDecorator_NoRegister();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_UPowerUpDanioDecorator();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_UPowerUpEffectDecorator();
	UPackage* Z_Construct_UPackage__Script_ShooterNaves2025();
// End Cross Module References
	void UPowerUpDanioDecorator::StaticRegisterNativesUPowerUpDanioDecorator()
	{
	}
	UClass* Z_Construct_UClass_UPowerUpDanioDecorator_NoRegister()
	{
		return UPowerUpDanioDecorator::StaticClass();
	}
	struct Z_Construct_UClass_UPowerUpDanioDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPowerUpDanioDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPowerUpEffectDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterNaves2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerUpDanioDecorator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PowerUpDanioDecorator.h" },
		{ "ModuleRelativePath", "Public/PowerUpDanioDecorator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPowerUpDanioDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPowerUpDanioDecorator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPowerUpDanioDecorator_Statics::ClassParams = {
		&UPowerUpDanioDecorator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPowerUpDanioDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerUpDanioDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPowerUpDanioDecorator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPowerUpDanioDecorator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPowerUpDanioDecorator, 488227642);
	template<> SHOOTERNAVES2025_API UClass* StaticClass<UPowerUpDanioDecorator>()
	{
		return UPowerUpDanioDecorator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPowerUpDanioDecorator(Z_Construct_UClass_UPowerUpDanioDecorator, &UPowerUpDanioDecorator::StaticClass, TEXT("/Script/ShooterNaves2025"), TEXT("UPowerUpDanioDecorator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPowerUpDanioDecorator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
