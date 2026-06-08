// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterNaves2025/Public/Nave_Francotirador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNave_Francotirador() {}
// Cross Module References
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_ANave_Francotirador_NoRegister();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_ANave_Francotirador();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_ANave_Padre();
	UPackage* Z_Construct_UPackage__Script_ShooterNaves2025();
// End Cross Module References
	void ANave_Francotirador::StaticRegisterNativesANave_Francotirador()
	{
	}
	UClass* Z_Construct_UClass_ANave_Francotirador_NoRegister()
	{
		return ANave_Francotirador::StaticClass();
	}
	struct Z_Construct_UClass_ANave_Francotirador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanciaIdeal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanciaIdeal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanciaEscape_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanciaEscape;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANave_Francotirador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANave_Padre,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterNaves2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Francotirador_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nave_Francotirador.h" },
		{ "ModuleRelativePath", "Public/Nave_Francotirador.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Francotirador_Statics::NewProp_DistanciaIdeal_MetaData[] = {
		{ "Category", "Ataque" },
		{ "ModuleRelativePath", "Public/Nave_Francotirador.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANave_Francotirador_Statics::NewProp_DistanciaIdeal = { "DistanciaIdeal", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave_Francotirador, DistanciaIdeal), METADATA_PARAMS(Z_Construct_UClass_ANave_Francotirador_Statics::NewProp_DistanciaIdeal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Francotirador_Statics::NewProp_DistanciaIdeal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Francotirador_Statics::NewProp_DistanciaEscape_MetaData[] = {
		{ "Category", "Ataque" },
		{ "ModuleRelativePath", "Public/Nave_Francotirador.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANave_Francotirador_Statics::NewProp_DistanciaEscape = { "DistanciaEscape", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave_Francotirador, DistanciaEscape), METADATA_PARAMS(Z_Construct_UClass_ANave_Francotirador_Statics::NewProp_DistanciaEscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Francotirador_Statics::NewProp_DistanciaEscape_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANave_Francotirador_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Francotirador_Statics::NewProp_DistanciaIdeal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Francotirador_Statics::NewProp_DistanciaEscape,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANave_Francotirador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANave_Francotirador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANave_Francotirador_Statics::ClassParams = {
		&ANave_Francotirador::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANave_Francotirador_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Francotirador_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANave_Francotirador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Francotirador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANave_Francotirador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANave_Francotirador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANave_Francotirador, 1464092134);
	template<> SHOOTERNAVES2025_API UClass* StaticClass<ANave_Francotirador>()
	{
		return ANave_Francotirador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANave_Francotirador(Z_Construct_UClass_ANave_Francotirador, &ANave_Francotirador::StaticClass, TEXT("/Script/ShooterNaves2025"), TEXT("ANave_Francotirador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANave_Francotirador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
