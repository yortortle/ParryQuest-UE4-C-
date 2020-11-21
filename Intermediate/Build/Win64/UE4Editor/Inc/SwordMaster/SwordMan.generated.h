// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SWORDMASTER_SwordMan_generated_h
#error "SwordMan.generated.h already included, missing '#pragma once' in SwordMan.h"
#endif
#define SWORDMASTER_SwordMan_generated_h

#define SwordMaster_Source_SwordMaster_SwordMan_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMovementAnimations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MovementAnimations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverLapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverLapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define SwordMaster_Source_SwordMaster_SwordMan_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMovementAnimations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MovementAnimations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverLapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverLapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define SwordMaster_Source_SwordMaster_SwordMan_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASwordMan(); \
	friend struct Z_Construct_UClass_ASwordMan_Statics; \
public: \
	DECLARE_CLASS(ASwordMan, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SwordMaster"), NO_API) \
	DECLARE_SERIALIZER(ASwordMan)


#define SwordMaster_Source_SwordMaster_SwordMan_h_32_INCLASS \
private: \
	static void StaticRegisterNativesASwordMan(); \
	friend struct Z_Construct_UClass_ASwordMan_Statics; \
public: \
	DECLARE_CLASS(ASwordMan, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SwordMaster"), NO_API) \
	DECLARE_SERIALIZER(ASwordMan)


#define SwordMaster_Source_SwordMaster_SwordMan_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASwordMan(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASwordMan) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwordMan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwordMan); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwordMan(ASwordMan&&); \
	NO_API ASwordMan(const ASwordMan&); \
public:


#define SwordMaster_Source_SwordMaster_SwordMan_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwordMan(ASwordMan&&); \
	NO_API ASwordMan(const ASwordMan&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwordMan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwordMan); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASwordMan)


#define SwordMaster_Source_SwordMaster_SwordMan_h_32_PRIVATE_PROPERTY_OFFSET
#define SwordMaster_Source_SwordMaster_SwordMan_h_29_PROLOG
#define SwordMaster_Source_SwordMaster_SwordMan_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SwordMaster_Source_SwordMaster_SwordMan_h_32_PRIVATE_PROPERTY_OFFSET \
	SwordMaster_Source_SwordMaster_SwordMan_h_32_RPC_WRAPPERS \
	SwordMaster_Source_SwordMaster_SwordMan_h_32_INCLASS \
	SwordMaster_Source_SwordMaster_SwordMan_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SwordMaster_Source_SwordMaster_SwordMan_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SwordMaster_Source_SwordMaster_SwordMan_h_32_PRIVATE_PROPERTY_OFFSET \
	SwordMaster_Source_SwordMaster_SwordMan_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	SwordMaster_Source_SwordMaster_SwordMan_h_32_INCLASS_NO_PURE_DECLS \
	SwordMaster_Source_SwordMaster_SwordMan_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWORDMASTER_API UClass* StaticClass<class ASwordMan>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SwordMaster_Source_SwordMaster_SwordMan_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
