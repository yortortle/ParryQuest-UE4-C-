// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwordMaster/SwordGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwordGameInstance() {}
// Cross Module References
	SWORDMASTER_API UClass* Z_Construct_UClass_USwordGameInstance_NoRegister();
	SWORDMASTER_API UClass* Z_Construct_UClass_USwordGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_SwordMaster();
// End Cross Module References
	void USwordGameInstance::StaticRegisterNativesUSwordGameInstance()
	{
	}
	UClass* Z_Construct_UClass_USwordGameInstance_NoRegister()
	{
		return USwordGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_USwordGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mageCompleted_MetaData[];
#endif
		static void NewProp_mageCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mageCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USwordGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SwordMaster,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwordGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SwordGameInstance.h" },
		{ "ModuleRelativePath", "SwordGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwordGameInstance_Statics::NewProp_mageCompleted_MetaData[] = {
		{ "Category", "SwordGameInstance" },
		{ "ModuleRelativePath", "SwordGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_USwordGameInstance_Statics::NewProp_mageCompleted_SetBit(void* Obj)
	{
		((USwordGameInstance*)Obj)->mageCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwordGameInstance_Statics::NewProp_mageCompleted = { "mageCompleted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwordGameInstance), &Z_Construct_UClass_USwordGameInstance_Statics::NewProp_mageCompleted_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwordGameInstance_Statics::NewProp_mageCompleted_MetaData, ARRAY_COUNT(Z_Construct_UClass_USwordGameInstance_Statics::NewProp_mageCompleted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USwordGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwordGameInstance_Statics::NewProp_mageCompleted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USwordGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USwordGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USwordGameInstance_Statics::ClassParams = {
		&USwordGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USwordGameInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USwordGameInstance_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USwordGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USwordGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USwordGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USwordGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USwordGameInstance, 2380115170);
	template<> SWORDMASTER_API UClass* StaticClass<USwordGameInstance>()
	{
		return USwordGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USwordGameInstance(Z_Construct_UClass_USwordGameInstance, &USwordGameInstance::StaticClass, TEXT("/Script/SwordMaster"), TEXT("USwordGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USwordGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
