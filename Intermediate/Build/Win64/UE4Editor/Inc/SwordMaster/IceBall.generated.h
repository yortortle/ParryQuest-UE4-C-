// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef SWORDMASTER_IceBall_generated_h
#error "IceBall.generated.h already included, missing '#pragma once' in IceBall.h"
#endif
#define SWORDMASTER_IceBall_generated_h

#define SwordMaster_Source_SwordMaster_IceBall_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define SwordMaster_Source_SwordMaster_IceBall_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define SwordMaster_Source_SwordMaster_IceBall_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIceBall(); \
	friend struct Z_Construct_UClass_AIceBall_Statics; \
public: \
	DECLARE_CLASS(AIceBall, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SwordMaster"), NO_API) \
	DECLARE_SERIALIZER(AIceBall)


#define SwordMaster_Source_SwordMaster_IceBall_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAIceBall(); \
	friend struct Z_Construct_UClass_AIceBall_Statics; \
public: \
	DECLARE_CLASS(AIceBall, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SwordMaster"), NO_API) \
	DECLARE_SERIALIZER(AIceBall)


#define SwordMaster_Source_SwordMaster_IceBall_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIceBall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIceBall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIceBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIceBall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIceBall(AIceBall&&); \
	NO_API AIceBall(const AIceBall&); \
public:


#define SwordMaster_Source_SwordMaster_IceBall_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIceBall(AIceBall&&); \
	NO_API AIceBall(const AIceBall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIceBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIceBall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIceBall)


#define SwordMaster_Source_SwordMaster_IceBall_h_14_PRIVATE_PROPERTY_OFFSET
#define SwordMaster_Source_SwordMaster_IceBall_h_11_PROLOG
#define SwordMaster_Source_SwordMaster_IceBall_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SwordMaster_Source_SwordMaster_IceBall_h_14_PRIVATE_PROPERTY_OFFSET \
	SwordMaster_Source_SwordMaster_IceBall_h_14_RPC_WRAPPERS \
	SwordMaster_Source_SwordMaster_IceBall_h_14_INCLASS \
	SwordMaster_Source_SwordMaster_IceBall_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SwordMaster_Source_SwordMaster_IceBall_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SwordMaster_Source_SwordMaster_IceBall_h_14_PRIVATE_PROPERTY_OFFSET \
	SwordMaster_Source_SwordMaster_IceBall_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SwordMaster_Source_SwordMaster_IceBall_h_14_INCLASS_NO_PURE_DECLS \
	SwordMaster_Source_SwordMaster_IceBall_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWORDMASTER_API UClass* StaticClass<class AIceBall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SwordMaster_Source_SwordMaster_IceBall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
