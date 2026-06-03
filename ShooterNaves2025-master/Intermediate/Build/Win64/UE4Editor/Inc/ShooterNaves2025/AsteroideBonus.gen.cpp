// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterNaves2025/Public/AsteroideBonus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsteroideBonus() {}
// Cross Module References
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_AAsteroideBonus_NoRegister();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_AAsteroideBonus();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ShooterNaves2025();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAsteroideBonus::execRecibirDanio)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CantidadDanio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RecibirDanio(Z_Param_CantidadDanio);
		P_NATIVE_END;
	}
	void AAsteroideBonus::StaticRegisterNativesAAsteroideBonus()
	{
		UClass* Class = AAsteroideBonus::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RecibirDanio", &AAsteroideBonus::execRecibirDanio },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAsteroideBonus_RecibirDanio_Statics
	{
		struct AsteroideBonus_eventRecibirDanio_Parms
		{
			float CantidadDanio;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CantidadDanio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAsteroideBonus_RecibirDanio_Statics::NewProp_CantidadDanio = { "CantidadDanio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsteroideBonus_eventRecibirDanio_Parms, CantidadDanio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAsteroideBonus_RecibirDanio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsteroideBonus_RecibirDanio_Statics::NewProp_CantidadDanio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsteroideBonus_RecibirDanio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsteroideBonus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsteroideBonus_RecibirDanio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsteroideBonus, nullptr, "RecibirDanio", nullptr, nullptr, sizeof(AsteroideBonus_eventRecibirDanio_Parms), Z_Construct_UFunction_AAsteroideBonus_RecibirDanio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsteroideBonus_RecibirDanio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsteroideBonus_RecibirDanio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsteroideBonus_RecibirDanio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsteroideBonus_RecibirDanio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAsteroideBonus_RecibirDanio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAsteroideBonus_NoRegister()
	{
		return AAsteroideBonus::StaticClass();
	}
	struct Z_Construct_UClass_AAsteroideBonus_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshAsteroide_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshAsteroide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vida_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Vida;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProbabilidadSoltarPowerUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProbabilidadSoltarPowerUp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAsteroideBonus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterNaves2025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAsteroideBonus_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAsteroideBonus_RecibirDanio, "RecibirDanio" }, // 549733030
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroideBonus_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsteroideBonus.h" },
		{ "ModuleRelativePath", "Public/AsteroideBonus.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroideBonus_Statics::NewProp_MeshAsteroide_MetaData[] = {
		{ "Category", "Componentes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AsteroideBonus.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsteroideBonus_Statics::NewProp_MeshAsteroide = { "MeshAsteroide", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsteroideBonus, MeshAsteroide), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsteroideBonus_Statics::NewProp_MeshAsteroide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroideBonus_Statics::NewProp_MeshAsteroide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroideBonus_Statics::NewProp_Vida_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AsteroideBonus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAsteroideBonus_Statics::NewProp_Vida = { "Vida", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsteroideBonus, Vida), METADATA_PARAMS(Z_Construct_UClass_AAsteroideBonus_Statics::NewProp_Vida_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroideBonus_Statics::NewProp_Vida_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroideBonus_Statics::NewProp_ProbabilidadSoltarPowerUp_MetaData[] = {
		{ "Category", "PowerUps" },
		{ "ModuleRelativePath", "Public/AsteroideBonus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAsteroideBonus_Statics::NewProp_ProbabilidadSoltarPowerUp = { "ProbabilidadSoltarPowerUp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsteroideBonus, ProbabilidadSoltarPowerUp), METADATA_PARAMS(Z_Construct_UClass_AAsteroideBonus_Statics::NewProp_ProbabilidadSoltarPowerUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroideBonus_Statics::NewProp_ProbabilidadSoltarPowerUp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAsteroideBonus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroideBonus_Statics::NewProp_MeshAsteroide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroideBonus_Statics::NewProp_Vida,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroideBonus_Statics::NewProp_ProbabilidadSoltarPowerUp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAsteroideBonus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsteroideBonus>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAsteroideBonus_Statics::ClassParams = {
		&AAsteroideBonus::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAsteroideBonus_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroideBonus_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAsteroideBonus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroideBonus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAsteroideBonus()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAsteroideBonus_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAsteroideBonus, 4162909426);
	template<> SHOOTERNAVES2025_API UClass* StaticClass<AAsteroideBonus>()
	{
		return AAsteroideBonus::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAsteroideBonus(Z_Construct_UClass_AAsteroideBonus, &AAsteroideBonus::StaticClass, TEXT("/Script/ShooterNaves2025"), TEXT("AAsteroideBonus"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsteroideBonus);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
