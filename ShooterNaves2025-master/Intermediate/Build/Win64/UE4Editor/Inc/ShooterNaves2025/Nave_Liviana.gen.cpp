// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterNaves2025/Public/Nave_Liviana.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNave_Liviana() {}
// Cross Module References
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_ANave_Liviana_NoRegister();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_ANave_Liviana();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_ANave_Padre();
	UPackage* Z_Construct_UPackage__Script_ShooterNaves2025();
// End Cross Module References
	void ANave_Liviana::StaticRegisterNativesANave_Liviana()
	{
	}
	UClass* Z_Construct_UClass_ANave_Liviana_NoRegister()
	{
		return ANave_Liviana::StaticClass();
	}
	struct Z_Construct_UClass_ANave_Liviana_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANave_Liviana_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANave_Padre,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterNaves2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Liviana_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nave_Liviana.h" },
		{ "ModuleRelativePath", "Public/Nave_Liviana.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANave_Liviana_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANave_Liviana>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANave_Liviana_Statics::ClassParams = {
		&ANave_Liviana::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANave_Liviana_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Liviana_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANave_Liviana()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANave_Liviana_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANave_Liviana, 1174544161);
	template<> SHOOTERNAVES2025_API UClass* StaticClass<ANave_Liviana>()
	{
		return ANave_Liviana::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANave_Liviana(Z_Construct_UClass_ANave_Liviana, &ANave_Liviana::StaticClass, TEXT("/Script/ShooterNaves2025"), TEXT("ANave_Liviana"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANave_Liviana);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
