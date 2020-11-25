// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwordMaster/BunnyTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBunnyTrigger() {}
// Cross Module References
	SWORDMASTER_API UClass* Z_Construct_UClass_ABunnyTrigger_NoRegister();
	SWORDMASTER_API UClass* Z_Construct_UClass_ABunnyTrigger();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_SwordMaster();
	SWORDMASTER_API UFunction* Z_Construct_UFunction_ABunnyTrigger_OnOverlapBegin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SWORDMASTER_API UFunction* Z_Construct_UFunction_ABunnyTrigger_OnOverlapEnd();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void ABunnyTrigger::StaticRegisterNativesABunnyTrigger()
	{
		UClass* Class = ABunnyTrigger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ABunnyTrigger::execOnOverlapBegin },
			{ "OnOverlapEnd", &ABunnyTrigger::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABunnyTrigger_OnOverlapBegin_Statics
	{
		struct BunnyTrigger_eventOnOverlapBegin_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABunnyTrigger_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BunnyTrigger_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABunnyTrigger_OnOverlapBegin_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BunnyTrigger_eventOnOverlapBegin_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABunnyTrigger_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABunnyTrigger_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABunnyTrigger_OnOverlapBegin_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABunnyTrigger_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BunnyTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABunnyTrigger_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABunnyTrigger, nullptr, "OnOverlapBegin", sizeof(BunnyTrigger_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ABunnyTrigger_OnOverlapBegin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABunnyTrigger_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABunnyTrigger_OnOverlapBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABunnyTrigger_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABunnyTrigger_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABunnyTrigger_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABunnyTrigger_OnOverlapEnd_Statics
	{
		struct BunnyTrigger_eventOnOverlapEnd_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABunnyTrigger_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BunnyTrigger_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABunnyTrigger_OnOverlapEnd_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BunnyTrigger_eventOnOverlapEnd_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABunnyTrigger_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABunnyTrigger_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABunnyTrigger_OnOverlapEnd_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABunnyTrigger_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BunnyTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABunnyTrigger_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABunnyTrigger, nullptr, "OnOverlapEnd", sizeof(BunnyTrigger_eventOnOverlapEnd_Parms), Z_Construct_UFunction_ABunnyTrigger_OnOverlapEnd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABunnyTrigger_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABunnyTrigger_OnOverlapEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABunnyTrigger_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABunnyTrigger_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABunnyTrigger_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABunnyTrigger_NoRegister()
	{
		return ABunnyTrigger::StaticClass();
	}
	struct Z_Construct_UClass_ABunnyTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelToLoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LevelToLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_spawnActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABunnyTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_SwordMaster,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABunnyTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABunnyTrigger_OnOverlapBegin, "OnOverlapBegin" }, // 1915573127
		{ &Z_Construct_UFunction_ABunnyTrigger_OnOverlapEnd, "OnOverlapEnd" }, // 2951555670
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABunnyTrigger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BunnyTrigger.h" },
		{ "ModuleRelativePath", "BunnyTrigger.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABunnyTrigger_Statics::NewProp_GameTime_MetaData[] = {
		{ "Category", "BunnyTrigger" },
		{ "ModuleRelativePath", "BunnyTrigger.h" },
		{ "ToolTip", "UMyGameInstance* GI;" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABunnyTrigger_Statics::NewProp_GameTime = { "GameTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABunnyTrigger, GameTime), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ABunnyTrigger_Statics::NewProp_GameTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABunnyTrigger_Statics::NewProp_GameTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABunnyTrigger_Statics::NewProp_LevelToLoad_MetaData[] = {
		{ "Category", "BunnyTrigger" },
		{ "ModuleRelativePath", "BunnyTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABunnyTrigger_Statics::NewProp_LevelToLoad = { "LevelToLoad", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABunnyTrigger, LevelToLoad), METADATA_PARAMS(Z_Construct_UClass_ABunnyTrigger_Statics::NewProp_LevelToLoad_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABunnyTrigger_Statics::NewProp_LevelToLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABunnyTrigger_Statics::NewProp_spawnActor_MetaData[] = {
		{ "Category", "BunnyTrigger" },
		{ "ModuleRelativePath", "BunnyTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABunnyTrigger_Statics::NewProp_spawnActor = { "spawnActor", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABunnyTrigger, spawnActor), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABunnyTrigger_Statics::NewProp_spawnActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABunnyTrigger_Statics::NewProp_spawnActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABunnyTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABunnyTrigger_Statics::NewProp_GameTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABunnyTrigger_Statics::NewProp_LevelToLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABunnyTrigger_Statics::NewProp_spawnActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABunnyTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABunnyTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABunnyTrigger_Statics::ClassParams = {
		&ABunnyTrigger::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABunnyTrigger_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ABunnyTrigger_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABunnyTrigger_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABunnyTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABunnyTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABunnyTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABunnyTrigger, 2677372292);
	template<> SWORDMASTER_API UClass* StaticClass<ABunnyTrigger>()
	{
		return ABunnyTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABunnyTrigger(Z_Construct_UClass_ABunnyTrigger, &ABunnyTrigger::StaticClass, TEXT("/Script/SwordMaster"), TEXT("ABunnyTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABunnyTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
