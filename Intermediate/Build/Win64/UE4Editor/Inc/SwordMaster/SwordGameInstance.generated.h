// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWORDMASTER_SwordGameInstance_generated_h
#error "SwordGameInstance.generated.h already included, missing '#pragma once' in SwordGameInstance.h"
#endif
#define SWORDMASTER_SwordGameInstance_generated_h

#define SwordMaster_Source_SwordMaster_SwordGameInstance_h_15_RPC_WRAPPERS
#define SwordMaster_Source_SwordMaster_SwordGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define SwordMaster_Source_SwordMaster_SwordGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSwordGameInstance(); \
	friend struct Z_Construct_UClass_USwordGameInstance_Statics; \
public: \
	DECLARE_CLASS(USwordGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SwordMaster"), NO_API) \
	DECLARE_SERIALIZER(USwordGameInstance)


#define SwordMaster_Source_SwordMaster_SwordGameInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSwordGameInstance(); \
	friend struct Z_Construct_UClass_USwordGameInstance_Statics; \
public: \
	DECLARE_CLASS(USwordGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SwordMaster"), NO_API) \
	DECLARE_SERIALIZER(USwordGameInstance)


#define SwordMaster_Source_SwordMaster_SwordGameInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USwordGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USwordGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USwordGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USwordGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USwordGameInstance(USwordGameInstance&&); \
	NO_API USwordGameInstance(const USwordGameInstance&); \
public:


#define SwordMaster_Source_SwordMaster_SwordGameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USwordGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USwordGameInstance(USwordGameInstance&&); \
	NO_API USwordGameInstance(const USwordGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USwordGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USwordGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USwordGameInstance)


#define SwordMaster_Source_SwordMaster_SwordGameInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define SwordMaster_Source_SwordMaster_SwordGameInstance_h_12_PROLOG
#define SwordMaster_Source_SwordMaster_SwordGameInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SwordMaster_Source_SwordMaster_SwordGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	SwordMaster_Source_SwordMaster_SwordGameInstance_h_15_RPC_WRAPPERS \
	SwordMaster_Source_SwordMaster_SwordGameInstance_h_15_INCLASS \
	SwordMaster_Source_SwordMaster_SwordGameInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SwordMaster_Source_SwordMaster_SwordGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SwordMaster_Source_SwordMaster_SwordGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	SwordMaster_Source_SwordMaster_SwordGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SwordMaster_Source_SwordMaster_SwordGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	SwordMaster_Source_SwordMaster_SwordGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWORDMASTER_API UClass* StaticClass<class USwordGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SwordMaster_Source_SwordMaster_SwordGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
