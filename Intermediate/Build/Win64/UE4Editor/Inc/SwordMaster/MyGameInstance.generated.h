// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWORDMASTER_MyGameInstance_generated_h
#error "MyGameInstance.generated.h already included, missing '#pragma once' in MyGameInstance.h"
#endif
#define SWORDMASTER_MyGameInstance_generated_h

#define SwordMaster_Source_SwordMaster_MyGameInstance_h_16_RPC_WRAPPERS
#define SwordMaster_Source_SwordMaster_MyGameInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define SwordMaster_Source_SwordMaster_MyGameInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend struct Z_Construct_UClass_UMyGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SwordMaster"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance)


#define SwordMaster_Source_SwordMaster_MyGameInstance_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend struct Z_Construct_UClass_UMyGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SwordMaster"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance)


#define SwordMaster_Source_SwordMaster_MyGameInstance_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public:


#define SwordMaster_Source_SwordMaster_MyGameInstance_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyGameInstance)


#define SwordMaster_Source_SwordMaster_MyGameInstance_h_16_PRIVATE_PROPERTY_OFFSET
#define SwordMaster_Source_SwordMaster_MyGameInstance_h_13_PROLOG
#define SwordMaster_Source_SwordMaster_MyGameInstance_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SwordMaster_Source_SwordMaster_MyGameInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	SwordMaster_Source_SwordMaster_MyGameInstance_h_16_RPC_WRAPPERS \
	SwordMaster_Source_SwordMaster_MyGameInstance_h_16_INCLASS \
	SwordMaster_Source_SwordMaster_MyGameInstance_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SwordMaster_Source_SwordMaster_MyGameInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SwordMaster_Source_SwordMaster_MyGameInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	SwordMaster_Source_SwordMaster_MyGameInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SwordMaster_Source_SwordMaster_MyGameInstance_h_16_INCLASS_NO_PURE_DECLS \
	SwordMaster_Source_SwordMaster_MyGameInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWORDMASTER_API UClass* StaticClass<class UMyGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SwordMaster_Source_SwordMaster_MyGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
