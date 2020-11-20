// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWORDMASTER_Bunny_generated_h
#error "Bunny.generated.h already included, missing '#pragma once' in Bunny.h"
#endif
#define SWORDMASTER_Bunny_generated_h

#define SwordMaster_Source_SwordMaster_Bunny_h_22_RPC_WRAPPERS
#define SwordMaster_Source_SwordMaster_Bunny_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define SwordMaster_Source_SwordMaster_Bunny_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABunny(); \
	friend struct Z_Construct_UClass_ABunny_Statics; \
public: \
	DECLARE_CLASS(ABunny, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SwordMaster"), NO_API) \
	DECLARE_SERIALIZER(ABunny)


#define SwordMaster_Source_SwordMaster_Bunny_h_22_INCLASS \
private: \
	static void StaticRegisterNativesABunny(); \
	friend struct Z_Construct_UClass_ABunny_Statics; \
public: \
	DECLARE_CLASS(ABunny, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SwordMaster"), NO_API) \
	DECLARE_SERIALIZER(ABunny)


#define SwordMaster_Source_SwordMaster_Bunny_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABunny(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABunny) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABunny); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABunny); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABunny(ABunny&&); \
	NO_API ABunny(const ABunny&); \
public:


#define SwordMaster_Source_SwordMaster_Bunny_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABunny(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABunny(ABunny&&); \
	NO_API ABunny(const ABunny&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABunny); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABunny); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABunny)


#define SwordMaster_Source_SwordMaster_Bunny_h_22_PRIVATE_PROPERTY_OFFSET
#define SwordMaster_Source_SwordMaster_Bunny_h_19_PROLOG
#define SwordMaster_Source_SwordMaster_Bunny_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SwordMaster_Source_SwordMaster_Bunny_h_22_PRIVATE_PROPERTY_OFFSET \
	SwordMaster_Source_SwordMaster_Bunny_h_22_RPC_WRAPPERS \
	SwordMaster_Source_SwordMaster_Bunny_h_22_INCLASS \
	SwordMaster_Source_SwordMaster_Bunny_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SwordMaster_Source_SwordMaster_Bunny_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SwordMaster_Source_SwordMaster_Bunny_h_22_PRIVATE_PROPERTY_OFFSET \
	SwordMaster_Source_SwordMaster_Bunny_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	SwordMaster_Source_SwordMaster_Bunny_h_22_INCLASS_NO_PURE_DECLS \
	SwordMaster_Source_SwordMaster_Bunny_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWORDMASTER_API UClass* StaticClass<class ABunny>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SwordMaster_Source_SwordMaster_Bunny_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
