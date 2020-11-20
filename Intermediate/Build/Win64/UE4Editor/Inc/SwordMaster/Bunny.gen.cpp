// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwordMaster/Bunny.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBunny() {}
// Cross Module References
	SWORDMASTER_API UClass* Z_Construct_UClass_ABunny_NoRegister();
	SWORDMASTER_API UClass* Z_Construct_UClass_ABunny();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_SwordMaster();
// End Cross Module References
	void ABunny::StaticRegisterNativesABunny()
	{
	}
	UClass* Z_Construct_UClass_ABunny_NoRegister()
	{
		return ABunny::StaticClass();
	}
	struct Z_Construct_UClass_ABunny_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABunny_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SwordMaster,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABunny_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Bunny.h" },
		{ "ModuleRelativePath", "Bunny.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABunny_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABunny>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABunny_Statics::ClassParams = {
		&ABunny::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABunny_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABunny_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABunny()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABunny_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABunny, 2760518809);
	template<> SWORDMASTER_API UClass* StaticClass<ABunny>()
	{
		return ABunny::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABunny(Z_Construct_UClass_ABunny, &ABunny::StaticClass, TEXT("/Script/SwordMaster"), TEXT("ABunny"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABunny);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
