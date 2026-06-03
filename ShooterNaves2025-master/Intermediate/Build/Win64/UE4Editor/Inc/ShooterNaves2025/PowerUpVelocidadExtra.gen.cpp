// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterNaves2025/Public/PowerUpVelocidadExtra.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerUpVelocidadExtra() {}
// Cross Module References
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_APowerUpVelocidadExtra_NoRegister();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_APowerUpVelocidadExtra();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_APowerUpBase();
	UPackage* Z_Construct_UPackage__Script_ShooterNaves2025();
// End Cross Module References
	void APowerUpVelocidadExtra::StaticRegisterNativesAPowerUpVelocidadExtra()
	{
	}
	UClass* Z_Construct_UClass_APowerUpVelocidadExtra_NoRegister()
	{
		return APowerUpVelocidadExtra::StaticClass();
	}
	struct Z_Construct_UClass_APowerUpVelocidadExtra_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APowerUpVelocidadExtra_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APowerUpBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterNaves2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerUpVelocidadExtra_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PowerUpVelocidadExtra.h" },
		{ "ModuleRelativePath", "Public/PowerUpVelocidadExtra.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APowerUpVelocidadExtra_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APowerUpVelocidadExtra>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APowerUpVelocidadExtra_Statics::ClassParams = {
		&APowerUpVelocidadExtra::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APowerUpVelocidadExtra_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APowerUpVelocidadExtra_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APowerUpVelocidadExtra()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APowerUpVelocidadExtra_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APowerUpVelocidadExtra, 4086897155);
	template<> SHOOTERNAVES2025_API UClass* StaticClass<APowerUpVelocidadExtra>()
	{
		return APowerUpVelocidadExtra::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APowerUpVelocidadExtra(Z_Construct_UClass_APowerUpVelocidadExtra, &APowerUpVelocidadExtra::StaticClass, TEXT("/Script/ShooterNaves2025"), TEXT("APowerUpVelocidadExtra"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APowerUpVelocidadExtra);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
