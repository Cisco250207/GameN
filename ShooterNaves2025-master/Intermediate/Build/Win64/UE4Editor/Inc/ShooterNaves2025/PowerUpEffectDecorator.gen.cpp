// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterNaves2025/Public/PowerUpEffectDecorator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerUpEffectDecorator() {}
// Cross Module References
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_UPowerUpEffectDecorator_NoRegister();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_UPowerUpEffectDecorator();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_UPowerUpEffect();
	UPackage* Z_Construct_UPackage__Script_ShooterNaves2025();
	SHOOTERNAVES2025_API UClass* Z_Construct_UClass_UPowerUpEffect_NoRegister();
// End Cross Module References
	void UPowerUpEffectDecorator::StaticRegisterNativesUPowerUpEffectDecorator()
	{
	}
	UClass* Z_Construct_UClass_UPowerUpEffectDecorator_NoRegister()
	{
		return UPowerUpEffectDecorator::StaticClass();
	}
	struct Z_Construct_UClass_UPowerUpEffectDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EfectoDecorado_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EfectoDecorado;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPowerUpEffectDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPowerUpEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterNaves2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerUpEffectDecorator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PowerUpEffectDecorator.h" },
		{ "ModuleRelativePath", "Public/PowerUpEffectDecorator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerUpEffectDecorator_Statics::NewProp_EfectoDecorado_MetaData[] = {
		{ "ModuleRelativePath", "Public/PowerUpEffectDecorator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPowerUpEffectDecorator_Statics::NewProp_EfectoDecorado = { "EfectoDecorado", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerUpEffectDecorator, EfectoDecorado), Z_Construct_UClass_UPowerUpEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPowerUpEffectDecorator_Statics::NewProp_EfectoDecorado_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerUpEffectDecorator_Statics::NewProp_EfectoDecorado_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPowerUpEffectDecorator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerUpEffectDecorator_Statics::NewProp_EfectoDecorado,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPowerUpEffectDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPowerUpEffectDecorator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPowerUpEffectDecorator_Statics::ClassParams = {
		&UPowerUpEffectDecorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPowerUpEffectDecorator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPowerUpEffectDecorator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPowerUpEffectDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerUpEffectDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPowerUpEffectDecorator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPowerUpEffectDecorator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPowerUpEffectDecorator, 3509675457);
	template<> SHOOTERNAVES2025_API UClass* StaticClass<UPowerUpEffectDecorator>()
	{
		return UPowerUpEffectDecorator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPowerUpEffectDecorator(Z_Construct_UClass_UPowerUpEffectDecorator, &UPowerUpEffectDecorator::StaticClass, TEXT("/Script/ShooterNaves2025"), TEXT("UPowerUpEffectDecorator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPowerUpEffectDecorator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
