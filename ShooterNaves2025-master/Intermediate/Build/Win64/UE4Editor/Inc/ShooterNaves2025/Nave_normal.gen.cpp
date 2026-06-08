// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterNaves2025/Public/Nave_normal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNave_normal() {}
// Cross Module References
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_ANave_Normal_NoRegister();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_ANave_Normal();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_ANave_Padre();
	UPackage* Z_Construct_UPackage__Script_ShooterNaves2025();
// End Cross Module References
	void ANave_Normal::StaticRegisterNativesANave_Normal()
	{
	}
	UClass* Z_Construct_UClass_ANave_Normal_NoRegister()
	{
		return ANave_Normal::StaticClass();
	}
	struct Z_Construct_UClass_ANave_Normal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntervaloEmbestida_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IntervaloEmbestida;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DuracionPreparacion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DuracionPreparacion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DuracionEmbestida_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DuracionEmbestida;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiplicadorVelocidadEmbestida_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MultiplicadorVelocidadEmbestida;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANave_Normal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANave_Padre,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterNaves2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Normal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nave_normal.h" },
		{ "ModuleRelativePath", "Public/Nave_normal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Normal_Statics::NewProp_IntervaloEmbestida_MetaData[] = {
		{ "Category", "Ataque" },
		{ "ModuleRelativePath", "Public/Nave_normal.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANave_Normal_Statics::NewProp_IntervaloEmbestida = { "IntervaloEmbestida", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave_Normal, IntervaloEmbestida), METADATA_PARAMS(Z_Construct_UClass_ANave_Normal_Statics::NewProp_IntervaloEmbestida_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Normal_Statics::NewProp_IntervaloEmbestida_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Normal_Statics::NewProp_DuracionPreparacion_MetaData[] = {
		{ "Category", "Ataque" },
		{ "ModuleRelativePath", "Public/Nave_normal.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANave_Normal_Statics::NewProp_DuracionPreparacion = { "DuracionPreparacion", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave_Normal, DuracionPreparacion), METADATA_PARAMS(Z_Construct_UClass_ANave_Normal_Statics::NewProp_DuracionPreparacion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Normal_Statics::NewProp_DuracionPreparacion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Normal_Statics::NewProp_DuracionEmbestida_MetaData[] = {
		{ "Category", "Ataque" },
		{ "ModuleRelativePath", "Public/Nave_normal.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANave_Normal_Statics::NewProp_DuracionEmbestida = { "DuracionEmbestida", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave_Normal, DuracionEmbestida), METADATA_PARAMS(Z_Construct_UClass_ANave_Normal_Statics::NewProp_DuracionEmbestida_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Normal_Statics::NewProp_DuracionEmbestida_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Normal_Statics::NewProp_MultiplicadorVelocidadEmbestida_MetaData[] = {
		{ "Category", "Ataque" },
		{ "ModuleRelativePath", "Public/Nave_normal.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANave_Normal_Statics::NewProp_MultiplicadorVelocidadEmbestida = { "MultiplicadorVelocidadEmbestida", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave_Normal, MultiplicadorVelocidadEmbestida), METADATA_PARAMS(Z_Construct_UClass_ANave_Normal_Statics::NewProp_MultiplicadorVelocidadEmbestida_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Normal_Statics::NewProp_MultiplicadorVelocidadEmbestida_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANave_Normal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Normal_Statics::NewProp_IntervaloEmbestida,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Normal_Statics::NewProp_DuracionPreparacion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Normal_Statics::NewProp_DuracionEmbestida,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Normal_Statics::NewProp_MultiplicadorVelocidadEmbestida,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANave_Normal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANave_Normal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANave_Normal_Statics::ClassParams = {
		&ANave_Normal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANave_Normal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Normal_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANave_Normal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Normal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANave_Normal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANave_Normal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANave_Normal, 3142285242);
	template<> SHOOTERNAVES2025_API UClass* StaticClass<ANave_Normal>()
	{
		return ANave_Normal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANave_Normal(Z_Construct_UClass_ANave_Normal, &ANave_Normal::StaticClass, TEXT("/Script/ShooterNaves2025"), TEXT("ANave_Normal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANave_Normal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
