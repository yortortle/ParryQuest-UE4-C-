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
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_SwordMaster();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveUp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMageNPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SwordMaster,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMageNPC_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MageNPC.h" },
		{ "ModuleRelativePath", "MageNPC.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMageNPC_Statics::NewProp_MoveLeft_MetaData[] = {
		{ "Category", "MageNPC" },
		{ "ModuleRelativePath", "MageNPC.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMageNPC_Statics::NewProp_MoveLeft = { "MoveLeft", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMageNPC, MoveLeft), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMageNPC_Statics::NewProp_MoveLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMageNPC_Statics::NewProp_MoveLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMageNPC_Statics::NewProp_MoveRight_MetaData[] = {
		{ "Category", "MageNPC" },
		{ "ModuleRelativePath", "MageNPC.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMageNPC_Statics::NewProp_MoveRight = { "MoveRight", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMageNPC, MoveRight), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMageNPC_Statics::NewProp_MoveRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMageNPC_Statics::NewProp_MoveRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMageNPC_Statics::NewProp_MoveDown_MetaData[] = {
		{ "Category", "MageNPC" },
		{ "ModuleRelativePath", "MageNPC.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMageNPC_Statics::NewProp_MoveDown = { "MoveDown", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMageNPC, MoveDown), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMageNPC_Statics::NewProp_MoveDown_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMageNPC_Statics::NewProp_MoveDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMageNPC_Statics::NewProp_MoveUp_MetaData[] = {
		{ "Category", "MageNPC" },
		{ "ModuleRelativePath", "MageNPC.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMageNPC_Statics::NewProp_MoveUp = { "MoveUp", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMageNPC, MoveUp), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMageNPC_Statics::NewProp_MoveUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMageNPC_Statics::NewProp_MoveUp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMageNPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMageNPC_Statics::NewProp_MoveLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMageNPC_Statics::NewProp_MoveRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMageNPC_Statics::NewProp_MoveDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMageNPC_Statics::NewProp_MoveUp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMageNPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMageNPC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMageNPC_Statics::ClassParams = {
		&AMageNPC::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMageNPC_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AMageNPC_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AMageNPC, 2502818688);
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
