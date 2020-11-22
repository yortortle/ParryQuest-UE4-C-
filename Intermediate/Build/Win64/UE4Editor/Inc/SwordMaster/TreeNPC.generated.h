// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWORDMASTER_TreeNPC_generated_h
#error "TreeNPC.generated.h already included, missing '#pragma once' in TreeNPC.h"
#endif
#define SWORDMASTER_TreeNPC_generated_h

#define SwordMaster_Source_SwordMaster_TreeNPC_h_19_RPC_WRAPPERS
#define SwordMaster_Source_SwordMaster_TreeNPC_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define SwordMaster_Source_SwordMaster_TreeNPC_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATreeNPC(); \
	friend struct Z_Construct_UClass_ATreeNPC_Statics; \
public: \
	DECLARE_CLASS(ATreeNPC, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SwordMaster"), NO_API) \
	DECLARE_SERIALIZER(ATreeNPC)


#define SwordMaster_Source_SwordMaster_TreeNPC_h_19_INCLASS \
private: \
	static void StaticRegisterNativesATreeNPC(); \
	friend struct Z_Construct_UClass_ATreeNPC_Statics; \
public: \
	DECLARE_CLASS(ATreeNPC, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SwordMaster"), NO_API) \
	DECLARE_SERIALIZER(ATreeNPC)


#define SwordMaster_Source_SwordMaster_TreeNPC_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATreeNPC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATreeNPC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATreeNPC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATreeNPC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATreeNPC(ATreeNPC&&); \
	NO_API ATreeNPC(const ATreeNPC&); \
public:


#define SwordMaster_Source_SwordMaster_TreeNPC_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATreeNPC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATreeNPC(ATreeNPC&&); \
	NO_API ATreeNPC(const ATreeNPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATreeNPC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATreeNPC); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATreeNPC)


#define SwordMaster_Source_SwordMaster_TreeNPC_h_19_PRIVATE_PROPERTY_OFFSET
#define SwordMaster_Source_SwordMaster_TreeNPC_h_16_PROLOG
#define SwordMaster_Source_SwordMaster_TreeNPC_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SwordMaster_Source_SwordMaster_TreeNPC_h_19_PRIVATE_PROPERTY_OFFSET \
	SwordMaster_Source_SwordMaster_TreeNPC_h_19_RPC_WRAPPERS \
	SwordMaster_Source_SwordMaster_TreeNPC_h_19_INCLASS \
	SwordMaster_Source_SwordMaster_TreeNPC_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SwordMaster_Source_SwordMaster_TreeNPC_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SwordMaster_Source_SwordMaster_TreeNPC_h_19_PRIVATE_PROPERTY_OFFSET \
	SwordMaster_Source_SwordMaster_TreeNPC_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	SwordMaster_Source_SwordMaster_TreeNPC_h_19_INCLASS_NO_PURE_DECLS \
	SwordMaster_Source_SwordMaster_TreeNPC_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWORDMASTER_API UClass* StaticClass<class ATreeNPC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SwordMaster_Source_SwordMaster_TreeNPC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
