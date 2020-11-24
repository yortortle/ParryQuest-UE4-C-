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
	const FCppClassTypeInfoStatic Z_Construct_UClass_USwordGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USwordGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USwordGameInstance_Statics::ClassParams = {
		&USwordGameInstance::StaticClass,
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
	IMPLEMENT_CLASS(USwordGameInstance, 552885385);
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
