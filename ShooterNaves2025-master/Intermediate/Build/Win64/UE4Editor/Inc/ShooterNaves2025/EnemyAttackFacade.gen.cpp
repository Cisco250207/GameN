// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterNaves2025/Public/EnemyAttackFacade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAttackFacade() {}
// Cross Module References
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_UEnemyAttackFacade_NoRegister();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_UEnemyAttackFacade();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ShooterNaves2025();
// End Cross Module References
	void UEnemyAttackFacade::StaticRegisterNativesUEnemyAttackFacade()
	{
	}
	UClass* Z_Construct_UClass_UEnemyAttackFacade_NoRegister()
	{
		return UEnemyAttackFacade::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyAttackFacade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyAttackFacade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterNaves2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAttackFacade_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "EnemyAttackFacade.h" },
		{ "ModuleRelativePath", "Public/EnemyAttackFacade.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyAttackFacade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyAttackFacade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemyAttackFacade_Statics::ClassParams = {
		&UEnemyAttackFacade::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyAttackFacade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAttackFacade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyAttackFacade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemyAttackFacade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemyAttackFacade, 3661013382);
	template<> SHOOTERNAVES2025_API UClass* StaticClass<UEnemyAttackFacade>()
	{
		return UEnemyAttackFacade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyAttackFacade(Z_Construct_UClass_UEnemyAttackFacade, &UEnemyAttackFacade::StaticClass, TEXT("/Script/ShooterNaves2025"), TEXT("UEnemyAttackFacade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyAttackFacade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
