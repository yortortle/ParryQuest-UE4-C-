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
	SWORDMASTER_API UFunction* Z_Construct_UFunction_ASwordMan_OnOverLapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SWORDMASTER_API UFunction* Z_Construct_UFunction_ASwordMan_OnOverLapNPC();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
// End Cross Module References
	void ASwordMan::StaticRegisterNativesASwordMan()
	{
		UClass* Class = ASwordMan::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverLapBegin", &ASwordMan::execOnOverLapBegin },
			{ "OnOverLapNPC", &ASwordMan::execOnOverLapNPC },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics
	{
		struct SwordMan_eventOnOverLapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SwordMan_eventOnOverLapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SwordMan_eventOnOverLapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SwordMan_eventOnOverLapBegin_Parms), &Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SwordMan_eventOnOverLapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SwordMan_eventOnOverLapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SwordMan_eventOnOverLapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SwordMan_eventOnOverLapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SwordMan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwordMan, nullptr, "OnOverLapBegin", sizeof(SwordMan_eventOnOverLapBegin_Parms), Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASwordMan_OnOverLapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASwordMan_OnOverLapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASwordMan_OnOverLapNPC_Statics
	{
		struct SwordMan_eventOnOverLapNPC_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASwordMan_OnOverLapNPC_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SwordMan_eventOnOverLapNPC_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwordMan_OnOverLapNPC_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASwordMan_OnOverLapNPC_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SwordMan_eventOnOverLapNPC_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASwordMan_OnOverLapNPC_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASwordMan_OnOverLapNPC_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASwordMan_OnOverLapNPC_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SwordMan_eventOnOverLapNPC_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwordMan_OnOverLapNPC_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASwordMan_OnOverLapNPC_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SwordMan_eventOnOverLapNPC_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASwordMan_OnOverLapNPC_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASwordMan_OnOverLapNPC_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASwordMan_OnOverLapNPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwordMan_OnOverLapNPC_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwordMan_OnOverLapNPC_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwordMan_OnOverLapNPC_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwordMan_OnOverLapNPC_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwordMan_OnOverLapNPC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SwordMan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwordMan_OnOverLapNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwordMan, nullptr, "OnOverLapNPC", sizeof(SwordMan_eventOnOverLapNPC_Parms), Z_Construct_UFunction_ASwordMan_OnOverLapNPC_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASwordMan_OnOverLapNPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASwordMan_OnOverLapNPC_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASwordMan_OnOverLapNPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASwordMan_OnOverLapNPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASwordMan_OnOverLapNPC_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MageLevel_MetaData[];
#endif
		static void NewProp_MageLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MageLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyCollisionSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyCollisionSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitRight1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitRight1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitLeft1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitLeft1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDown1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitDown1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitUp1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitUp1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetActor;
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
		{ &Z_Construct_UFunction_ASwordMan_OnOverLapBegin, "OnOverLapBegin" }, // 3599371634
		{ &Z_Construct_UFunction_ASwordMan_OnOverLapNPC, "OnOverLapNPC" }, // 1944595362
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordMan_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SwordMan.h" },
		{ "ModuleRelativePath", "SwordMan.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordMan_Statics::NewProp_MageLevel_MetaData[] = {
		{ "Category", "SwordMan" },
		{ "ModuleRelativePath", "SwordMan.h" },
	};
#endif
	void Z_Construct_UClass_ASwordMan_Statics::NewProp_MageLevel_SetBit(void* Obj)
	{
		((ASwordMan*)Obj)->MageLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASwordMan_Statics::NewProp_MageLevel = { "MageLevel", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASwordMan), &Z_Construct_UClass_ASwordMan_Statics::NewProp_MageLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASwordMan_Statics::NewProp_MageLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordMan_Statics::NewProp_MageLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordMan_Statics::NewProp_MyCollisionSphere_MetaData[] = {
		{ "Category", "SwordMan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SwordMan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordMan_Statics::NewProp_MyCollisionSphere = { "MyCollisionSphere", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordMan, MyCollisionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordMan_Statics::NewProp_MyCollisionSphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordMan_Statics::NewProp_MyCollisionSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordMan_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "SwordMan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SwordMan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordMan_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordMan, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordMan_Statics::NewProp_MeshComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordMan_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordMan_Statics::NewProp_InteractBox_MetaData[] = {
		{ "Category", "SwordMan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SwordMan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordMan_Statics::NewProp_InteractBox = { "InteractBox", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordMan, InteractBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordMan_Statics::NewProp_InteractBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordMan_Statics::NewProp_InteractBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordMan_Statics::NewProp_HitRight1_MetaData[] = {
		{ "Category", "SwordMan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SwordMan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordMan_Statics::NewProp_HitRight1 = { "HitRight1", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordMan, HitRight1), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordMan_Statics::NewProp_HitRight1_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordMan_Statics::NewProp_HitRight1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordMan_Statics::NewProp_HitLeft1_MetaData[] = {
		{ "Category", "SwordMan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SwordMan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordMan_Statics::NewProp_HitLeft1 = { "HitLeft1", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordMan, HitLeft1), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordMan_Statics::NewProp_HitLeft1_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordMan_Statics::NewProp_HitLeft1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordMan_Statics::NewProp_HitDown1_MetaData[] = {
		{ "Category", "SwordMan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SwordMan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordMan_Statics::NewProp_HitDown1 = { "HitDown1", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordMan, HitDown1), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordMan_Statics::NewProp_HitDown1_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordMan_Statics::NewProp_HitDown1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordMan_Statics::NewProp_HitUp1_MetaData[] = {
		{ "Category", "SwordMan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SwordMan.h" },
		{ "ToolTip", "Collision box components for swing animation collisions." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordMan_Statics::NewProp_HitUp1 = { "HitUp1", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordMan, HitUp1), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordMan_Statics::NewProp_HitUp1_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordMan_Statics::NewProp_HitUp1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordMan_Statics::NewProp_targetActor_MetaData[] = {
		{ "Category", "SwordMan" },
		{ "ModuleRelativePath", "SwordMan.h" },
		{ "ToolTip", "delete this later if not used" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordMan_Statics::NewProp_targetActor = { "targetActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordMan, targetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordMan_Statics::NewProp_targetActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordMan_Statics::NewProp_targetActor_MetaData)) };
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
		{ "ToolTip", "Creating Blueprint editable UPaperFlipBooks to store the various flipbooks for different action states, to be later used with the getSprite()->SetFlipbook() function.\nmovement animations" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveLeft = { "MoveLeft", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordMan, MoveLeft), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordMan_Statics::NewProp_MoveLeft_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASwordMan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordMan_Statics::NewProp_MageLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordMan_Statics::NewProp_MyCollisionSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordMan_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordMan_Statics::NewProp_InteractBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordMan_Statics::NewProp_HitRight1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordMan_Statics::NewProp_HitLeft1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordMan_Statics::NewProp_HitDown1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordMan_Statics::NewProp_HitUp1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordMan_Statics::NewProp_targetActor,
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
	IMPLEMENT_CLASS(ASwordMan, 3640752368);
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
