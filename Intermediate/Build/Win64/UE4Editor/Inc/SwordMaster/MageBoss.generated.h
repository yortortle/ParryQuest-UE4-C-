// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWORDMASTER_MageBoss_generated_h
#error "MageBoss.generated.h already included, missing '#pragma once' in MageBoss.h"
#endif
#define SWORDMASTER_MageBoss_generated_h

#define SwordMaster_Source_SwordMaster_MageBoss_h_18_RPC_WRAPPERS
#define SwordMaster_Source_SwordMaster_MageBoss_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define SwordMaster_Source_SwordMaster_MageBoss_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMageBoss(); \
	friend struct Z_Construct_UClass_AMageBoss_Statics; \
public: \
	DECLARE_CLASS(AMageBoss, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SwordMaster"), NO_API) \
	DECLARE_SERIALIZER(AMageBoss)


#define SwordMaster_Source_SwordMaster_MageBoss_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAMageBoss(); \
	friend struct Z_Construct_UClass_AMageBoss_Statics; \
public: \
	DECLARE_CLASS(AMageBoss, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SwordMaster"), NO_API) \
	DECLARE_SERIALIZER(AMageBoss)


#define SwordMaster_Source_SwordMaster_MageBoss_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMageBoss(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMageBoss) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMageBoss); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMageBoss); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMageBoss(AMageBoss&&); \
	NO_API AMageBoss(const AMageBoss&); \
public:


#define SwordMaster_Source_SwordMaster_MageBoss_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMageBoss(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMageBoss(AMageBoss&&); \
	NO_API AMageBoss(const AMageBoss&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMageBoss); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMageBoss); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMageBoss)


#define SwordMaster_Source_SwordMaster_MageBoss_h_18_PRIVATE_PROPERTY_OFFSET
#define SwordMaster_Source_SwordMaster_MageBoss_h_15_PROLOG
#define SwordMaster_Source_SwordMaster_MageBoss_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SwordMaster_Source_SwordMaster_MageBoss_h_18_PRIVATE_PROPERTY_OFFSET \
	SwordMaster_Source_SwordMaster_MageBoss_h_18_RPC_WRAPPERS \
	SwordMaster_Source_SwordMaster_MageBoss_h_18_INCLASS \
	SwordMaster_Source_SwordMaster_MageBoss_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SwordMaster_Source_SwordMaster_MageBoss_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SwordMaster_Source_SwordMaster_MageBoss_h_18_PRIVATE_PROPERTY_OFFSET \
	SwordMaster_Source_SwordMaster_MageBoss_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	SwordMaster_Source_SwordMaster_MageBoss_h_18_INCLASS_NO_PURE_DECLS \
	SwordMaster_Source_SwordMaster_MageBoss_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWORDMASTER_API UClass* StaticClass<class AMageBoss>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SwordMaster_Source_SwordMaster_MageBoss_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
