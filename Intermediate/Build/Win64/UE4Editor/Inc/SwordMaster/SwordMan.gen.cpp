// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwordMaster/SwordMan.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwordMan() {}
// Cross Module References
	SWORDMASTER_API UClass* Z_Construct_UClass_ASwordMan_NoRegister();
	SWORDMASTER_API UClass* Z_Construct_UClass_ASwordMan();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_SwordMaster();
	SWORDMASTER_API UFunction* Z_Construct_UFunction_ASwordMan_MovementAnimations();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
// End Cross Module References
	void ASwordMan::StaticRegisterNativesASwordMan()
	{
		UClass* Class = ASwordMan::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MovementAnimations", &ASwordMan::execMovementAnimations },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASwordMan_MovementAnimations_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwordMan_MovementAnimations_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SwordMan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwordMan_MovementAnimations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwordMan, nullptr, "MovementAnimations", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASwordMan_MovementAnimations_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASwordMan_MovementAnimations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASwordMan_MovementAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASwordMan_MovementAnimations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASwordMan_NoRegister()
	{
		return ASwordMan::StaticClass();
	}
	struct Z_Construct_UClass_ASwordMan_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwingDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwingDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwingUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwingUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwingRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwingRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwingLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwingLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleLeft;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASwordMan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SwordMaster,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASwordMan_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASwordMan_MovementAnimations, "MovementAnimations" }, // 612322754
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordMan_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SwordMan.h" },
		{ "ModuleRelativePath", "SwordMan.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordMan_Statics::NewProp_SwingDown_MetaData[] = {
		{ "Category", "SwordMan" },
		{ "ModuleRelativePath", "SwordMan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordMan_Statics::NewProp_SwingDown = { "SwingDown", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordMan, SwingDown), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordMan_Statics::NewProp_SwingDown_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordMan_Statics::NewProp_SwingDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordMan_Statics::NewProp_SwingUp_MetaData[] = {
		{ "Category", "SwordMan" },
		{ "ModuleRelativePath", "SwordMan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordMan_Statics::NewProp_SwingUp = { "SwingUp", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordMan, SwingUp), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordMan_Statics::NewProp_SwingUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordMan_Statics::NewProp_SwingUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordMan_Statics::NewProp_SwingRight_MetaData[] = {
		{ "Category", "SwordMan" },
		{ "ModuleRelativePath", "SwordMan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordMan_Statics::NewProp_SwingRight = { "SwingRight", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordMan, SwingRight), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordMan_Statics::NewProp_SwingRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordMan_Statics::NewProp_SwingRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordMan_Statics::NewProp_SwingLeft_MetaData[] = {
		{ "Category", "SwordMan" },
		{ "ModuleRelativePath", "SwordMan.h" },
		{ "ToolTip", "Third set is for sword swing and parry animations" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordMan_Statics::NewProp_SwingLeft = { "SwingLeft", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordMan, SwingLeft), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordMan_Statics::NewProp_SwingLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordMan_Statics::NewProp_SwingLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordMan_Statics::NewProp_IdleUp_MetaData[] = {
		{ "Category", "SwordMan" },
		{ "ModuleRelativePath", "SwordMan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordMan_Statics::NewProp_IdleUp = { "IdleUp", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordMan, IdleUp), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordMan_Statics::NewProp_IdleUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordMan_Statics::NewProp_IdleUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordMan_Statics::NewProp_IdleDown_MetaData[] = {
		{ "Category", "SwordMan" },
		{ "ModuleRelativePath", "SwordMan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordMan_Statics::NewProp_IdleDown = { "IdleDown", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordMan, IdleDown), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordMan_Statics::NewProp_IdleDown_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordMan_Statics::NewProp_IdleDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordMan_Statics::NewProp_IdleRight_MetaData[] = {
		{ "Category", "SwordMan" },
		{ "ModuleRelativePath", "SwordMan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordMan_Statics::NewProp_IdleRight = { "IdleRight", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordMan, IdleRight), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordMan_Statics::NewProp_IdleRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordMan_Statics::NewProp_IdleRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordMan_Statics::NewProp_IdleLeft_MetaData[] = {
		{ "Category", "SwordMan" },
		{ "ModuleRelativePath", "SwordMan.h" },
		{ "ToolTip", "Second set is for IDLE animations" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordMan_Statics::NewProp_IdleLeft = { "IdleLeft", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordMan, IdleLeft), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordMan_Statics::NewProp_IdleLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordMan_Statics::NewProp_IdleLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveUp_MetaData[] = {
		{ "Category", "SwordMan" },
		{ "ModuleRelativePath", "SwordMan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveUp = { "MoveUp", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordMan, MoveUp), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveDown_MetaData[] = {
		{ "Category", "SwordMan" },
		{ "ModuleRelativePath", "SwordMan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveDown = { "MoveDown", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordMan, MoveDown), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveDown_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveRight_MetaData[] = {
		{ "Category", "SwordMan" },
		{ "ModuleRelativePath", "SwordMan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveRight = { "MoveRight", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordMan, MoveRight), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveLeft_MetaData[] = {
		{ "Category", "SwordMan" },
		{ "ModuleRelativePath", "SwordMan.h" },
		{ "ToolTip", "Creating Blueprint editable UPaperFlipBooks to store the various flipbooks for different action states, to be later used with the getSprite()->SetFlipbook() function.\nFirst set is for movement animations" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveLeft = { "MoveLeft", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordMan, MoveLeft), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveLeft_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASwordMan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordMan_Statics::NewProp_SwingDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordMan_Statics::NewProp_SwingUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordMan_Statics::NewProp_SwingRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordMan_Statics::NewProp_SwingLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordMan_Statics::NewProp_IdleUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordMan_Statics::NewProp_IdleDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordMan_Statics::NewProp_IdleRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordMan_Statics::NewProp_IdleLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveLeft,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASwordMan_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwordMan>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASwordMan_Statics::ClassParams = {
		&ASwordMan::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASwordMan_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ASwordMan_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASwordMan_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASwordMan_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASwordMan()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASwordMan_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASwordMan, 1337427329);
	template<> SWORDMASTER_API UClass* StaticClass<ASwordMan>()
	{
		return ASwordMan::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASwordMan(Z_Construct_UClass_ASwordMan, &ASwordMan::StaticClass, TEXT("/Script/SwordMaster"), TEXT("ASwordMan"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASwordMan);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
