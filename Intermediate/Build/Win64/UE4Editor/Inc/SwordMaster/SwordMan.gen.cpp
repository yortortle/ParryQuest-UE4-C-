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
	SWORDMASTER_API UFunction* Z_Construct_UFunction_ASwordMan_setFlip();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
// End Cross Module References
	void ASwordMan::StaticRegisterNativesASwordMan()
	{
		UClass* Class = ASwordMan::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "setFlip", &ASwordMan::execsetFlip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASwordMan_setFlip_Statics
	{
		struct SwordMan_eventsetFlip_Parms
		{
			float f1;
			float f2;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_f2;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_f1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASwordMan_setFlip_Statics::NewProp_f2 = { "f2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SwordMan_eventsetFlip_Parms, f2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASwordMan_setFlip_Statics::NewProp_f1 = { "f1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SwordMan_eventsetFlip_Parms, f1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASwordMan_setFlip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwordMan_setFlip_Statics::NewProp_f2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwordMan_setFlip_Statics::NewProp_f1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwordMan_setFlip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SwordMan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwordMan_setFlip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwordMan, nullptr, "setFlip", sizeof(SwordMan_eventsetFlip_Parms), Z_Construct_UFunction_ASwordMan_setFlip_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASwordMan_setFlip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASwordMan_setFlip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASwordMan_setFlip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASwordMan_setFlip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASwordMan_setFlip_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_ASwordMan_setFlip, "setFlip" }, // 3468551618
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordMan_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SwordMan.h" },
		{ "ModuleRelativePath", "SwordMan.h" },
	};
#endif
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
		{ "ToolTip", "Creating Blueprint editable UPaperFlipBooks to store the various flipbooks for different action states, to be later used with the getSprite()->SetFlipbook() function." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveLeft = { "MoveLeft", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordMan, MoveLeft), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveLeft_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASwordMan_Statics::PropPointers[] = {
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
	IMPLEMENT_CLASS(ASwordMan, 3000091759);
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
