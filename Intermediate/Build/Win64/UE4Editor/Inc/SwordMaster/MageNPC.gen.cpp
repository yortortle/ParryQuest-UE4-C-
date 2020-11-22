// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwordMaster/MageNPC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMageNPC() {}
// Cross Module References
	SWORDMASTER_API UClass* Z_Construct_UClass_AMageNPC_NoRegister();
	SWORDMASTER_API UClass* Z_Construct_UClass_AMageNPC();
	SWORDMASTER_API UClass* Z_Construct_UClass_ATreeNPC();
	UPackage* Z_Construct_UPackage__Script_SwordMaster();
// End Cross Module References
	void AMageNPC::StaticRegisterNativesAMageNPC()
	{
	}
	UClass* Z_Construct_UClass_AMageNPC_NoRegister()
	{
		return AMageNPC::StaticClass();
	}
	struct Z_Construct_UClass_AMageNPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMageNPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATreeNPC,
		(UObject* (*)())Z_Construct_UPackage__Script_SwordMaster,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMageNPC_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MageNPC.h" },
		{ "ModuleRelativePath", "MageNPC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMageNPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMageNPC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMageNPC_Statics::ClassParams = {
		&AMageNPC::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMageNPC_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMageNPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMageNPC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMageNPC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMageNPC, 2874529669);
	template<> SWORDMASTER_API UClass* StaticClass<AMageNPC>()
	{
		return AMageNPC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMageNPC(Z_Construct_UClass_AMageNPC, &AMageNPC::StaticClass, TEXT("/Script/SwordMaster"), TEXT("AMageNPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMageNPC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
