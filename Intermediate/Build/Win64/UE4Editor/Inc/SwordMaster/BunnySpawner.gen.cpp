// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwordMaster/BunnySpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBunnySpawner() {}
// Cross Module References
	SWORDMASTER_API UClass* Z_Construct_UClass_ABunnySpawner_NoRegister();
	SWORDMASTER_API UClass* Z_Construct_UClass_ABunnySpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SwordMaster();
	SWORDMASTER_API UFunction* Z_Construct_UFunction_ABunnySpawner_SpawnBunny();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SWORDMASTER_API UClass* Z_Construct_UClass_ABunnyHorde_NoRegister();
// End Cross Module References
	void ABunnySpawner::StaticRegisterNativesABunnySpawner()
	{
		UClass* Class = ABunnySpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnBunny", &ABunnySpawner::execSpawnBunny },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABunnySpawner_SpawnBunny_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABunnySpawner_SpawnBunny_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BunnySpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABunnySpawner_SpawnBunny_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABunnySpawner, nullptr, "SpawnBunny", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABunnySpawner_SpawnBunny_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABunnySpawner_SpawnBunny_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABunnySpawner_SpawnBunny()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABunnySpawner_SpawnBunny_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABunnySpawner_NoRegister()
	{
		return ABunnySpawner::StaticClass();
	}
	struct Z_Construct_UClass_ABunnySpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABunnySpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SwordMaster,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABunnySpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABunnySpawner_SpawnBunny, "SpawnBunny" }, // 1040764669
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABunnySpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BunnySpawner.h" },
		{ "ModuleRelativePath", "BunnySpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABunnySpawner_Statics::NewProp_ToSpawn_MetaData[] = {
		{ "Category", "BunnySpawner" },
		{ "ModuleRelativePath", "BunnySpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABunnySpawner_Statics::NewProp_ToSpawn = { "ToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABunnySpawner, ToSpawn), Z_Construct_UClass_ABunnyHorde_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABunnySpawner_Statics::NewProp_ToSpawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABunnySpawner_Statics::NewProp_ToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABunnySpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABunnySpawner_Statics::NewProp_ToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABunnySpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABunnySpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABunnySpawner_Statics::ClassParams = {
		&ABunnySpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABunnySpawner_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ABunnySpawner_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABunnySpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABunnySpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABunnySpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABunnySpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABunnySpawner, 1642940707);
	template<> SWORDMASTER_API UClass* StaticClass<ABunnySpawner>()
	{
		return ABunnySpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABunnySpawner(Z_Construct_UClass_ABunnySpawner, &ABunnySpawner::StaticClass, TEXT("/Script/SwordMaster"), TEXT("ABunnySpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABunnySpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
