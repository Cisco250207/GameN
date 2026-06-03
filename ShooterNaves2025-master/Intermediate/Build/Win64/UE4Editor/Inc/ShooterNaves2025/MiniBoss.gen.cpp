// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterNaves2025/Public/MiniBoss.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniBoss() {}
// Cross Module References
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_AMiniBoss_NoRegister();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_AMiniBoss();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_ANave_Padre();
	UPackage* Z_Construct_UPackage__Script_ShooterNaves2025();
// End Cross Module References
	DEFINE_FUNCTION(AMiniBoss::execDebilitar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Debilitar();
		P_NATIVE_END;
	}
	void AMiniBoss::StaticRegisterNativesAMiniBoss()
	{
		UClass* Class = AMiniBoss::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Debilitar", &AMiniBoss::execDebilitar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMiniBoss_Debilitar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMiniBoss_Debilitar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MiniBoss.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMiniBoss_Debilitar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiniBoss, nullptr, "Debilitar", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMiniBoss_Debilitar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniBoss_Debilitar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMiniBoss_Debilitar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMiniBoss_Debilitar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMiniBoss_NoRegister()
	{
		return AMiniBoss::StaticClass();
	}
	struct Z_Construct_UClass_AMiniBoss_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMiniBoss_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANave_Padre,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterNaves2025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMiniBoss_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMiniBoss_Debilitar, "Debilitar" }, // 4096436653
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiniBoss_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MiniBoss.h" },
		{ "ModuleRelativePath", "Public/MiniBoss.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMiniBoss_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMiniBoss>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMiniBoss_Statics::ClassParams = {
		&AMiniBoss::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMiniBoss_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMiniBoss_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMiniBoss()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMiniBoss_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMiniBoss, 359613823);
	template<> SHOOTERNAVES2025_API UClass* StaticClass<AMiniBoss>()
	{
		return AMiniBoss::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMiniBoss(Z_Construct_UClass_AMiniBoss, &AMiniBoss::StaticClass, TEXT("/Script/ShooterNaves2025"), TEXT("AMiniBoss"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMiniBoss);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
