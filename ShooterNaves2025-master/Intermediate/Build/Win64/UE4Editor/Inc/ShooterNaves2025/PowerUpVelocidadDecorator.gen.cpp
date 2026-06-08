// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterNaves2025/Public/PowerUpVelocidadDecorator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerUpVelocidadDecorator() {}
// Cross Module References
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_UPowerUpVelocidadDecorator_NoRegister();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_UPowerUpVelocidadDecorator();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_UPowerUpEffectDecorator();
	UPackage* Z_Construct_UPackage__Script_ShooterNaves2025();
// End Cross Module References
	void UPowerUpVelocidadDecorator::StaticRegisterNativesUPowerUpVelocidadDecorator()
	{
	}
	UClass* Z_Construct_UClass_UPowerUpVelocidadDecorator_NoRegister()
	{
		return UPowerUpVelocidadDecorator::StaticClass();
	}
	struct Z_Construct_UClass_UPowerUpVelocidadDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPowerUpVelocidadDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPowerUpEffectDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterNaves2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerUpVelocidadDecorator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PowerUpVelocidadDecorator.h" },
		{ "ModuleRelativePath", "Public/PowerUpVelocidadDecorator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPowerUpVelocidadDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPowerUpVelocidadDecorator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPowerUpVelocidadDecorator_Statics::ClassParams = {
		&UPowerUpVelocidadDecorator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPowerUpVelocidadDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerUpVelocidadDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPowerUpVelocidadDecorator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPowerUpVelocidadDecorator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPowerUpVelocidadDecorator, 1672741794);
	template<> SHOOTERNAVES2025_API UClass* StaticClass<UPowerUpVelocidadDecorator>()
	{
		return UPowerUpVelocidadDecorator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPowerUpVelocidadDecorator(Z_Construct_UClass_UPowerUpVelocidadDecorator, &UPowerUpVelocidadDecorator::StaticClass, TEXT("/Script/ShooterNaves2025"), TEXT("UPowerUpVelocidadDecorator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPowerUpVelocidadDecorator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
