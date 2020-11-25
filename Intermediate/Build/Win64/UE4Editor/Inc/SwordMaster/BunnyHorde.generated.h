// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWORDMASTER_BunnyHorde_generated_h
#error "BunnyHorde.generated.h already included, missing '#pragma once' in BunnyHorde.h"
#endif
#define SWORDMASTER_BunnyHorde_generated_h

#define SwordMaster_Source_SwordMaster_BunnyHorde_h_17_RPC_WRAPPERS
#define SwordMaster_Source_SwordMaster_BunnyHorde_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define SwordMaster_Source_SwordMaster_BunnyHorde_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABunnyHorde(); \
	friend struct Z_Construct_UClass_ABunnyHorde_Statics; \
public: \
	DECLARE_CLASS(ABunnyHorde, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SwordMaster"), NO_API) \
	DECLARE_SERIALIZER(ABunnyHorde)


#define SwordMaster_Source_SwordMaster_BunnyHorde_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABunnyHorde(); \
	friend struct Z_Construct_UClass_ABunnyHorde_Statics; \
public: \
	DECLARE_CLASS(ABunnyHorde, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SwordMaster"), NO_API) \
	DECLARE_SERIALIZER(ABunnyHorde)


#define SwordMaster_Source_SwordMaster_BunnyHorde_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABunnyHorde(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABunnyHorde) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABunnyHorde); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABunnyHorde); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABunnyHorde(ABunnyHorde&&); \
	NO_API ABunnyHorde(const ABunnyHorde&); \
public:


#define SwordMaster_Source_SwordMaster_BunnyHorde_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABunnyHorde(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABunnyHorde(ABunnyHorde&&); \
	NO_API ABunnyHorde(const ABunnyHorde&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABunnyHorde); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABunnyHorde); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABunnyHorde)


#define SwordMaster_Source_SwordMaster_BunnyHorde_h_17_PRIVATE_PROPERTY_OFFSET
#define SwordMaster_Source_SwordMaster_BunnyHorde_h_14_PROLOG
#define SwordMaster_Source_SwordMaster_BunnyHorde_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SwordMaster_Source_SwordMaster_BunnyHorde_h_17_PRIVATE_PROPERTY_OFFSET \
	SwordMaster_Source_SwordMaster_BunnyHorde_h_17_RPC_WRAPPERS \
	SwordMaster_Source_SwordMaster_BunnyHorde_h_17_INCLASS \
	SwordMaster_Source_SwordMaster_BunnyHorde_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SwordMaster_Source_SwordMaster_BunnyHorde_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SwordMaster_Source_SwordMaster_BunnyHorde_h_17_PRIVATE_PROPERTY_OFFSET \
	SwordMaster_Source_SwordMaster_BunnyHorde_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SwordMaster_Source_SwordMaster_BunnyHorde_h_17_INCLASS_NO_PURE_DECLS \
	SwordMaster_Source_SwordMaster_BunnyHorde_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWORDMASTER_API UClass* StaticClass<class ABunnyHorde>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SwordMaster_Source_SwordMaster_BunnyHorde_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
