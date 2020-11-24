// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwordMaster/TreeNPC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTreeNPC() {}
// Cross Module References
	SWORDMASTER_API UClass* Z_Construct_UClass_ATreeNPC_NoRegister();
	SWORDMASTER_API UClass* Z_Construct_UClass_ATreeNPC();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_SwordMaster();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
// End Cross Module References
	void ATreeNPC::StaticRegisterNativesATreeNPC()
	{
	}
	UClass* Z_Construct_UClass_ATreeNPC_NoRegister()
	{
		return ATreeNPC::StaticClass();
	}
	struct Z_Construct_UClass_ATreeNPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeechBubble_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpeechBubble;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATreeNPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SwordMaster,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeNPC_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TreeNPC.h" },
		{ "ModuleRelativePath", "TreeNPC.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeNPC_Statics::NewProp_MoveDown_MetaData[] = {
		{ "Category", "TreeNPC" },
		{ "ModuleRelativePath", "TreeNPC.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATreeNPC_Statics::NewProp_MoveDown = { "MoveDown", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreeNPC, MoveDown), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATreeNPC_Statics::NewProp_MoveDown_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATreeNPC_Statics::NewProp_MoveDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeNPC_Statics::NewProp_MoveUp_MetaData[] = {
		{ "Category", "TreeNPC" },
		{ "ModuleRelativePath", "TreeNPC.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATreeNPC_Statics::NewProp_MoveUp = { "MoveUp", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreeNPC, MoveUp), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATreeNPC_Statics::NewProp_MoveUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATreeNPC_Statics::NewProp_MoveUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeNPC_Statics::NewProp_SpeechBubble_MetaData[] = {
		{ "Category", "TreeNPC" },
		{ "ModuleRelativePath", "TreeNPC.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATreeNPC_Statics::NewProp_SpeechBubble = { "SpeechBubble", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreeNPC, SpeechBubble), METADATA_PARAMS(Z_Construct_UClass_ATreeNPC_Statics::NewProp_SpeechBubble_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATreeNPC_Statics::NewProp_SpeechBubble_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATreeNPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreeNPC_Statics::NewProp_MoveDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreeNPC_Statics::NewProp_MoveUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreeNPC_Statics::NewProp_SpeechBubble,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATreeNPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATreeNPC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATreeNPC_Statics::ClassParams = {
		&ATreeNPC::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATreeNPC_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ATreeNPC_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATreeNPC_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATreeNPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATreeNPC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATreeNPC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATreeNPC, 1964562716);
	template<> SWORDMASTER_API UClass* StaticClass<ATreeNPC>()
	{
		return ATreeNPC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATreeNPC(Z_Construct_UClass_ATreeNPC, &ATreeNPC::StaticClass, TEXT("/Script/SwordMaster"), TEXT("ATreeNPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATreeNPC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
