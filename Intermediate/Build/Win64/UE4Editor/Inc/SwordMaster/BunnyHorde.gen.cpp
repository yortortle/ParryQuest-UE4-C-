// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwordMaster/BunnyHorde.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBunnyHorde() {}
// Cross Module References
	SWORDMASTER_API UClass* Z_Construct_UClass_ABunnyHorde_NoRegister();
	SWORDMASTER_API UClass* Z_Construct_UClass_ABunnyHorde();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_SwordMaster();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ABunnyHorde::StaticRegisterNativesABunnyHorde()
	{
	}
	UClass* Z_Construct_UClass_ABunnyHorde_NoRegister()
	{
		return ABunnyHorde::StaticClass();
	}
	struct Z_Construct_UClass_ABunnyHorde_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_spawnActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABunnyHorde_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SwordMaster,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABunnyHorde_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BunnyHorde.h" },
		{ "ModuleRelativePath", "BunnyHorde.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABunnyHorde_Statics::NewProp_MoveUp_MetaData[] = {
		{ "Category", "BunnyHorde" },
		{ "ModuleRelativePath", "BunnyHorde.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABunnyHorde_Statics::NewProp_MoveUp = { "MoveUp", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABunnyHorde, MoveUp), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABunnyHorde_Statics::NewProp_MoveUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABunnyHorde_Statics::NewProp_MoveUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABunnyHorde_Statics::NewProp_MoveDown_MetaData[] = {
		{ "Category", "BunnyHorde" },
		{ "ModuleRelativePath", "BunnyHorde.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABunnyHorde_Statics::NewProp_MoveDown = { "MoveDown", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABunnyHorde, MoveDown), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABunnyHorde_Statics::NewProp_MoveDown_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABunnyHorde_Statics::NewProp_MoveDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABunnyHorde_Statics::NewProp_MoveRight_MetaData[] = {
		{ "Category", "BunnyHorde" },
		{ "ModuleRelativePath", "BunnyHorde.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABunnyHorde_Statics::NewProp_MoveRight = { "MoveRight", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABunnyHorde, MoveRight), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABunnyHorde_Statics::NewProp_MoveRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABunnyHorde_Statics::NewProp_MoveRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABunnyHorde_Statics::NewProp_MoveLeft_MetaData[] = {
		{ "Category", "BunnyHorde" },
		{ "ModuleRelativePath", "BunnyHorde.h" },
		{ "ToolTip", "movement animations" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABunnyHorde_Statics::NewProp_MoveLeft = { "MoveLeft", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABunnyHorde, MoveLeft), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABunnyHorde_Statics::NewProp_MoveLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABunnyHorde_Statics::NewProp_MoveLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABunnyHorde_Statics::NewProp_spawnActor_MetaData[] = {
		{ "Category", "BunnyHorde" },
		{ "ModuleRelativePath", "BunnyHorde.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABunnyHorde_Statics::NewProp_spawnActor = { "spawnActor", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABunnyHorde, spawnActor), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABunnyHorde_Statics::NewProp_spawnActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABunnyHorde_Statics::NewProp_spawnActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABunnyHorde_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABunnyHorde_Statics::NewProp_MoveUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABunnyHorde_Statics::NewProp_MoveDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABunnyHorde_Statics::NewProp_MoveRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABunnyHorde_Statics::NewProp_MoveLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABunnyHorde_Statics::NewProp_spawnActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABunnyHorde_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABunnyHorde>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABunnyHorde_Statics::ClassParams = {
		&ABunnyHorde::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABunnyHorde_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ABunnyHorde_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABunnyHorde_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABunnyHorde_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABunnyHorde()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABunnyHorde_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABunnyHorde, 3077036363);
	template<> SWORDMASTER_API UClass* StaticClass<ABunnyHorde>()
	{
		return ABunnyHorde::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABunnyHorde(Z_Construct_UClass_ABunnyHorde, &ABunnyHorde::StaticClass, TEXT("/Script/SwordMaster"), TEXT("ABunnyHorde"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABunnyHorde);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
