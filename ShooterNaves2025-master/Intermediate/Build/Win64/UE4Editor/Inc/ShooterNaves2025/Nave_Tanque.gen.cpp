// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterNaves2025/Public/Nave_Tanque.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNave_Tanque() {}
// Cross Module References
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_ANave_Tanque_NoRegister();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_ANave_Tanque();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_ANave_Padre();
	UPackage* Z_Construct_UPackage__Script_ShooterNaves2025();
// End Cross Module References
	void ANave_Tanque::StaticRegisterNativesANave_Tanque()
	{
	}
	UClass* Z_Construct_UClass_ANave_Tanque_NoRegister()
	{
		return ANave_Tanque::StaticClass();
	}
	struct Z_Construct_UClass_ANave_Tanque_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TiempoEntreDisparos_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TiempoEntreDisparos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CantidadProyectilesPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CantidadProyectilesPool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANave_Tanque_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANave_Padre,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterNaves2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Tanque_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nave_Tanque.h" },
		{ "ModuleRelativePath", "Public/Nave_Tanque.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Tanque_Statics::NewProp_TiempoEntreDisparos_MetaData[] = {
		{ "Category", "Ataque" },
		{ "ModuleRelativePath", "Public/Nave_Tanque.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANave_Tanque_Statics::NewProp_TiempoEntreDisparos = { "TiempoEntreDisparos", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave_Tanque, TiempoEntreDisparos), METADATA_PARAMS(Z_Construct_UClass_ANave_Tanque_Statics::NewProp_TiempoEntreDisparos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Tanque_Statics::NewProp_TiempoEntreDisparos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Tanque_Statics::NewProp_CantidadProyectilesPool_MetaData[] = {
		{ "Category", "Pool" },
		{ "ModuleRelativePath", "Public/Nave_Tanque.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANave_Tanque_Statics::NewProp_CantidadProyectilesPool = { "CantidadProyectilesPool", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave_Tanque, CantidadProyectilesPool), METADATA_PARAMS(Z_Construct_UClass_ANave_Tanque_Statics::NewProp_CantidadProyectilesPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Tanque_Statics::NewProp_CantidadProyectilesPool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANave_Tanque_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Tanque_Statics::NewProp_TiempoEntreDisparos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Tanque_Statics::NewProp_CantidadProyectilesPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANave_Tanque_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANave_Tanque>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANave_Tanque_Statics::ClassParams = {
		&ANave_Tanque::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANave_Tanque_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Tanque_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANave_Tanque_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Tanque_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANave_Tanque()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANave_Tanque_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANave_Tanque, 117606386);
	template<> SHOOTERNAVES2025_API UClass* StaticClass<ANave_Tanque>()
	{
		return ANave_Tanque::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANave_Tanque(Z_Construct_UClass_ANave_Tanque, &ANave_Tanque::StaticClass, TEXT("/Script/ShooterNaves2025"), TEXT("ANave_Tanque"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANave_Tanque);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
