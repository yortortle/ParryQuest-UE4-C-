// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWORDMASTER_MageNPC_generated_h
#error "MageNPC.generated.h already included, missing '#pragma once' in MageNPC.h"
#endif
#define SWORDMASTER_MageNPC_generated_h

#define SwordMaster_Source_SwordMaster_MageNPC_h_19_RPC_WRAPPERS
#define SwordMaster_Source_SwordMaster_MageNPC_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define SwordMaster_Source_SwordMaster_MageNPC_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMageNPC(); \
	friend struct Z_Construct_UClass_AMageNPC_Statics; \
public: \
	DECLARE_CLASS(AMageNPC, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SwordMaster"), NO_API) \
	DECLARE_SERIALIZER(AMageNPC)


#define SwordMaster_Source_SwordMaster_MageNPC_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAMageNPC(); \
	friend struct Z_Construct_UClass_AMageNPC_Statics; \
public: \
	DECLARE_CLASS(AMageNPC, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SwordMaster"), NO_API) \
	DECLARE_SERIALIZER(AMageNPC)


#define SwordMaster_Source_SwordMaster_MageNPC_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMageNPC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMageNPC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMageNPC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMageNPC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMageNPC(AMageNPC&&); \
	NO_API AMageNPC(const AMageNPC&); \
public:


#define SwordMaster_Source_SwordMaster_MageNPC_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMageNPC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMageNPC(AMageNPC&&); \
	NO_API AMageNPC(const AMageNPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMageNPC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMageNPC); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMageNPC)


#define SwordMaster_Source_SwordMaster_MageNPC_h_19_PRIVATE_PROPERTY_OFFSET
#define SwordMaster_Source_SwordMaster_MageNPC_h_16_PROLOG
#define SwordMaster_Source_SwordMaster_MageNPC_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SwordMaster_Source_SwordMaster_MageNPC_h_19_PRIVATE_PROPERTY_OFFSET \
	SwordMaster_Source_SwordMaster_MageNPC_h_19_RPC_WRAPPERS \
	SwordMaster_Source_SwordMaster_MageNPC_h_19_INCLASS \
	SwordMaster_Source_SwordMaster_MageNPC_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SwordMaster_Source_SwordMaster_MageNPC_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SwordMaster_Source_SwordMaster_MageNPC_h_19_PRIVATE_PROPERTY_OFFSET \
	SwordMaster_Source_SwordMaster_MageNPC_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	SwordMaster_Source_SwordMaster_MageNPC_h_19_INCLASS_NO_PURE_DECLS \
	SwordMaster_Source_SwordMaster_MageNPC_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWORDMASTER_API UClass* StaticClass<class AMageNPC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SwordMaster_Source_SwordMaster_MageNPC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
