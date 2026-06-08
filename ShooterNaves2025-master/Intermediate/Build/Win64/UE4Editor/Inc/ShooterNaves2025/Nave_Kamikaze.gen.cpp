// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterNaves2025/Public/Nave_Kamikaze.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNave_Kamikaze() {}
// Cross Module References
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_ANave_Kamikaze_NoRegister();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_ANave_Kamikaze();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_ANave_Padre();
	UPackage* Z_Construct_UPackage__Script_ShooterNaves2025();
// End Cross Module References
	void ANave_Kamikaze::StaticRegisterNativesANave_Kamikaze()
	{
	}
	UClass* Z_Construct_UClass_ANave_Kamikaze_NoRegister()
	{
		return ANave_Kamikaze::StaticClass();
	}
	struct Z_Construct_UClass_ANave_Kamikaze_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANave_Kamikaze_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANave_Padre,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterNaves2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Kamikaze_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nave_Kamikaze.h" },
		{ "ModuleRelativePath", "Public/Nave_Kamikaze.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANave_Kamikaze_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANave_Kamikaze>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANave_Kamikaze_Statics::ClassParams = {
		&ANave_Kamikaze::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANave_Kamikaze_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Kamikaze_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANave_Kamikaze()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANave_Kamikaze_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANave_Kamikaze, 517617234);
	template<> SHOOTERNAVES2025_API UClass* StaticClass<ANave_Kamikaze>()
	{
		return ANave_Kamikaze::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANave_Kamikaze(Z_Construct_UClass_ANave_Kamikaze, &ANave_Kamikaze::StaticClass, TEXT("/Script/ShooterNaves2025"), TEXT("ANave_Kamikaze"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANave_Kamikaze);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
