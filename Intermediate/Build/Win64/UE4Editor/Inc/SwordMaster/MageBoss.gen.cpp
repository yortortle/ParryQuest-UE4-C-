// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwordMaster/MageBoss.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMageBoss() {}
// Cross Module References
	SWORDMASTER_API UClass* Z_Construct_UClass_AMageBoss_NoRegister();
	SWORDMASTER_API UClass* Z_Construct_UClass_AMageBoss();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_SwordMaster();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
// End Cross Module References
	void AMageBoss::StaticRegisterNativesAMageBoss()
	{
	}
	UClass* Z_Construct_UClass_AMageBoss_NoRegister()
	{
		return AMageBoss::StaticClass();
	}
	struct Z_Construct_UClass_AMageBoss_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeechBubble_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpeechBubble;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_targetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveRight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMageBoss_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SwordMaster,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMageBoss_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MageBoss.h" },
		{ "ModuleRelativePath", "MageBoss.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMageBoss_Statics::NewProp_SpeechBubble_MetaData[] = {
		{ "Category", "MageBoss" },
		{ "ModuleRelativePath", "MageBoss.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMageBoss_Statics::NewProp_SpeechBubble = { "SpeechBubble", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMageBoss, SpeechBubble), METADATA_PARAMS(Z_Construct_UClass_AMageBoss_Statics::NewProp_SpeechBubble_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMageBoss_Statics::NewProp_SpeechBubble_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMageBoss_Statics::NewProp_targetActor_MetaData[] = {
		{ "Category", "MageBoss" },
		{ "ModuleRelativePath", "MageBoss.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMageBoss_Statics::NewProp_targetActor = { "targetActor", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMageBoss, targetActor), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMageBoss_Statics::NewProp_targetActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMageBoss_Statics::NewProp_targetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMageBoss_Statics::NewProp_MoveLeft_MetaData[] = {
		{ "Category", "MageBoss" },
		{ "ModuleRelativePath", "MageBoss.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMageBoss_Statics::NewProp_MoveLeft = { "MoveLeft", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMageBoss, MoveLeft), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMageBoss_Statics::NewProp_MoveLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMageBoss_Statics::NewProp_MoveLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMageBoss_Statics::NewProp_MoveRight_MetaData[] = {
		{ "Category", "MageBoss" },
		{ "ModuleRelativePath", "MageBoss.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMageBoss_Statics::NewProp_MoveRight = { "MoveRight", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMageBoss, MoveRight), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMageBoss_Statics::NewProp_MoveRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMageBoss_Statics::NewProp_MoveRight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMageBoss_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMageBoss_Statics::NewProp_SpeechBubble,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMageBoss_Statics::NewProp_targetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMageBoss_Statics::NewProp_MoveLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMageBoss_Statics::NewProp_MoveRight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMageBoss_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMageBoss>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMageBoss_Statics::ClassParams = {
		&AMageBoss::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMageBoss_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AMageBoss_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMageBoss_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMageBoss_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMageBoss()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMageBoss_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMageBoss, 316622523);
	template<> SWORDMASTER_API UClass* StaticClass<AMageBoss>()
	{
		return AMageBoss::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMageBoss(Z_Construct_UClass_AMageBoss, &AMageBoss::StaticClass, TEXT("/Script/SwordMaster"), TEXT("AMageBoss"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMageBoss);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
