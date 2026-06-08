// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterNaves2025/Public/BossFinal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBossFinal() {}
// Cross Module References
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_ABossFinal_NoRegister();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_ABossFinal();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_ANave_Padre();
	UPackage* Z_Construct_UPackage__Script_ShooterNaves2025();
// End Cross Module References
	void ABossFinal::StaticRegisterNativesABossFinal()
	{
	}
	UClass* Z_Construct_UClass_ABossFinal_NoRegister()
	{
		return ABossFinal::StaticClass();
	}
	struct Z_Construct_UClass_ABossFinal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABossFinal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANave_Padre,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterNaves2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABossFinal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BossFinal.h" },
		{ "ModuleRelativePath", "Public/BossFinal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABossFinal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABossFinal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABossFinal_Statics::ClassParams = {
		&ABossFinal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABossFinal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABossFinal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABossFinal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABossFinal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABossFinal, 3408684287);
	template<> SHOOTERNAVES2025_API UClass* StaticClass<ABossFinal>()
	{
		return ABossFinal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABossFinal(Z_Construct_UClass_ABossFinal, &ABossFinal::StaticClass, TEXT("/Script/ShooterNaves2025"), TEXT("ABossFinal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABossFinal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
