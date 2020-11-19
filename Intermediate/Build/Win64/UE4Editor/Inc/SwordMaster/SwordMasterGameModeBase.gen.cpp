// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwordMaster/SwordMasterGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwordMasterGameModeBase() {}
// Cross Module References
	SWORDMASTER_API UClass* Z_Construct_UClass_ASwordMasterGameModeBase_NoRegister();
	SWORDMASTER_API UClass* Z_Construct_UClass_ASwordMasterGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SwordMaster();
// End Cross Module References
	void ASwordMasterGameModeBase::StaticRegisterNativesASwordMasterGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASwordMasterGameModeBase_NoRegister()
	{
		return ASwordMasterGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASwordMasterGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASwordMasterGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SwordMaster,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordMasterGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SwordMasterGameModeBase.h" },
		{ "ModuleRelativePath", "SwordMasterGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASwordMasterGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwordMasterGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASwordMasterGameModeBase_Statics::ClassParams = {
		&ASwordMasterGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ASwordMasterGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASwordMasterGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASwordMasterGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASwordMasterGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASwordMasterGameModeBase, 3235585631);
	template<> SWORDMASTER_API UClass* StaticClass<ASwordMasterGameModeBase>()
	{
		return ASwordMasterGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASwordMasterGameModeBase(Z_Construct_UClass_ASwordMasterGameModeBase, &ASwordMasterGameModeBase::StaticClass, TEXT("/Script/SwordMaster"), TEXT("ASwordMasterGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASwordMasterGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
