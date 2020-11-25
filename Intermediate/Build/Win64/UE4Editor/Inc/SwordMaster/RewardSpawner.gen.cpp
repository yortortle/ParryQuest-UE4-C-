// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwordMaster/RewardSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRewardSpawner() {}
// Cross Module References
	SWORDMASTER_API UClass* Z_Construct_UClass_ARewardSpawner_NoRegister();
	SWORDMASTER_API UClass* Z_Construct_UClass_ARewardSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SwordMaster();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ARewardSpawner::StaticRegisterNativesARewardSpawner()
	{
	}
	UClass* Z_Construct_UClass_ARewardSpawner_NoRegister()
	{
		return ARewardSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ARewardSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_spawnActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARewardSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SwordMaster,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARewardSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RewardSpawner.h" },
		{ "ModuleRelativePath", "RewardSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARewardSpawner_Statics::NewProp_spawnActor_MetaData[] = {
		{ "Category", "RewardSpawner" },
		{ "ModuleRelativePath", "RewardSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARewardSpawner_Statics::NewProp_spawnActor = { "spawnActor", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARewardSpawner, spawnActor), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARewardSpawner_Statics::NewProp_spawnActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARewardSpawner_Statics::NewProp_spawnActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARewardSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARewardSpawner_Statics::NewProp_spawnActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARewardSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARewardSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARewardSpawner_Statics::ClassParams = {
		&ARewardSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARewardSpawner_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ARewardSpawner_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ARewardSpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARewardSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARewardSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARewardSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARewardSpawner, 2371655993);
	template<> SWORDMASTER_API UClass* StaticClass<ARewardSpawner>()
	{
		return ARewardSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARewardSpawner(Z_Construct_UClass_ARewardSpawner, &ARewardSpawner::StaticClass, TEXT("/Script/SwordMaster"), TEXT("ARewardSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARewardSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
