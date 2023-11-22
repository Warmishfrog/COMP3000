// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FP_player.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMP3000_FP_player_generated_h
#error "FP_player.generated.h already included, missing '#pragma once' in FP_player.h"
#endif
#define COMP3000_FP_player_generated_h

#define FID_COMP3000_Source_COMP3000_FP_player_h_15_SPARSE_DATA
#define FID_COMP3000_Source_COMP3000_FP_player_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_COMP3000_Source_COMP3000_FP_player_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_COMP3000_Source_COMP3000_FP_player_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetCanFire); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execStopFiring); \
	DECLARE_FUNCTION(execStartFiring);


#define FID_COMP3000_Source_COMP3000_FP_player_h_15_ACCESSORS
#define FID_COMP3000_Source_COMP3000_FP_player_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFP_player(); \
	friend struct Z_Construct_UClass_AFP_player_Statics; \
public: \
	DECLARE_CLASS(AFP_player, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/COMP3000"), NO_API) \
	DECLARE_SERIALIZER(AFP_player)


#define FID_COMP3000_Source_COMP3000_FP_player_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFP_player(AFP_player&&); \
	NO_API AFP_player(const AFP_player&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFP_player); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFP_player); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFP_player) \
	NO_API virtual ~AFP_player();


#define FID_COMP3000_Source_COMP3000_FP_player_h_12_PROLOG
#define FID_COMP3000_Source_COMP3000_FP_player_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_COMP3000_Source_COMP3000_FP_player_h_15_SPARSE_DATA \
	FID_COMP3000_Source_COMP3000_FP_player_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_COMP3000_Source_COMP3000_FP_player_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_COMP3000_Source_COMP3000_FP_player_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_COMP3000_Source_COMP3000_FP_player_h_15_ACCESSORS \
	FID_COMP3000_Source_COMP3000_FP_player_h_15_INCLASS_NO_PURE_DECLS \
	FID_COMP3000_Source_COMP3000_FP_player_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMP3000_API UClass* StaticClass<class AFP_player>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_COMP3000_Source_COMP3000_FP_player_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
