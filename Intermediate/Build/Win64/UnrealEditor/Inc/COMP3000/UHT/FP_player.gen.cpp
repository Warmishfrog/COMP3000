// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "COMP3000/FP_player.h"
#include "COMP3000/Public/UpgradeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFP_player() {}
// Cross Module References
	COMP3000_API UClass* Z_Construct_UClass_AFP_player();
	COMP3000_API UClass* Z_Construct_UClass_AFP_player_NoRegister();
	COMP3000_API UClass* Z_Construct_UClass_AFPSProjectile_NoRegister();
	COMP3000_API UClass* Z_Construct_UClass_AHandMesh_NoRegister();
	COMP3000_API UClass* Z_Construct_UClass_UUpgradeComponent_NoRegister();
	COMP3000_API UScriptStruct* Z_Construct_UScriptStruct_FUpgradeData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	UPackage* Z_Construct_UPackage__Script_COMP3000();
// End Cross Module References
	DEFINE_FUNCTION(AFP_player::execApplyUpgradeEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyUpgradeEffect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFP_player::execLevelUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LevelUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFP_player::execGainXP)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_XPAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GainXP(Z_Param_XPAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFP_player::execStopFiring)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopFiring();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFP_player::execStartFiring)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartFiring();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFP_player::execResetCanFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCanFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFP_player::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFP_player::execStopJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFP_player::execStartJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFP_player::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFP_player::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_Value);
		P_NATIVE_END;
	}
	static FName NAME_AFP_player_DEATH = FName(TEXT("DEATH"));
	void AFP_player::DEATH()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFP_player_DEATH),NULL);
	}
	static FName NAME_AFP_player_LevelUpTRIGGER = FName(TEXT("LevelUpTRIGGER"));
	void AFP_player::LevelUpTRIGGER()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFP_player_LevelUpTRIGGER),NULL);
	}
	void AFP_player::StaticRegisterNativesAFP_player()
	{
		UClass* Class = AFP_player::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyUpgradeEffect", &AFP_player::execApplyUpgradeEffect },
			{ "Fire", &AFP_player::execFire },
			{ "GainXP", &AFP_player::execGainXP },
			{ "LevelUp", &AFP_player::execLevelUp },
			{ "MoveForward", &AFP_player::execMoveForward },
			{ "MoveRight", &AFP_player::execMoveRight },
			{ "ResetCanFire", &AFP_player::execResetCanFire },
			{ "StartFiring", &AFP_player::execStartFiring },
			{ "StartJump", &AFP_player::execStartJump },
			{ "StopFiring", &AFP_player::execStopFiring },
			{ "StopJump", &AFP_player::execStopJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFP_player_ApplyUpgradeEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFP_player_ApplyUpgradeEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "XP" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFP_player_ApplyUpgradeEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFP_player, nullptr, "ApplyUpgradeEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFP_player_ApplyUpgradeEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFP_player_ApplyUpgradeEffect_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFP_player_ApplyUpgradeEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFP_player_ApplyUpgradeEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFP_player_DEATH_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFP_player_DEATH_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFP_player_DEATH_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFP_player, nullptr, "DEATH", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFP_player_DEATH_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFP_player_DEATH_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFP_player_DEATH()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFP_player_DEATH_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFP_player_Fire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFP_player_Fire_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function that handles firing projectiles.\n" },
#endif
		{ "ModuleRelativePath", "FP_player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function that handles firing projectiles." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFP_player_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFP_player, nullptr, "Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFP_player_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFP_player_Fire_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFP_player_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFP_player_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFP_player_GainXP_Statics
	{
		struct FP_player_eventGainXP_Parms
		{
			float XPAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_XPAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFP_player_GainXP_Statics::NewProp_XPAmount = { "XPAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FP_player_eventGainXP_Parms, XPAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFP_player_GainXP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFP_player_GainXP_Statics::NewProp_XPAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFP_player_GainXP_Statics::Function_MetaDataParams[] = {
		{ "Category", "XP" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//XP\n" },
#endif
		{ "ModuleRelativePath", "FP_player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "XP" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFP_player_GainXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFP_player, nullptr, "GainXP", nullptr, nullptr, Z_Construct_UFunction_AFP_player_GainXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFP_player_GainXP_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFP_player_GainXP_Statics::FP_player_eventGainXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFP_player_GainXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFP_player_GainXP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFP_player_GainXP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFP_player_GainXP_Statics::FP_player_eventGainXP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFP_player_GainXP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFP_player_GainXP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFP_player_LevelUp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFP_player_LevelUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "XP" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFP_player_LevelUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFP_player, nullptr, "LevelUp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFP_player_LevelUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFP_player_LevelUp_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFP_player_LevelUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFP_player_LevelUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFP_player_LevelUpTRIGGER_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFP_player_LevelUpTRIGGER_Statics::Function_MetaDataParams[] = {
		{ "Category", "XP" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFP_player_LevelUpTRIGGER_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFP_player, nullptr, "LevelUpTRIGGER", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFP_player_LevelUpTRIGGER_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFP_player_LevelUpTRIGGER_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFP_player_LevelUpTRIGGER()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFP_player_LevelUpTRIGGER_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFP_player_MoveForward_Statics
	{
		struct FP_player_eventMoveForward_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFP_player_MoveForward_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FP_player_eventMoveForward_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFP_player_MoveForward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFP_player_MoveForward_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFP_player_MoveForward_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Movement\n// Handles input for moving forward and backward.\n" },
#endif
		{ "ModuleRelativePath", "FP_player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement\n Handles input for moving forward and backward." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFP_player_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFP_player, nullptr, "MoveForward", nullptr, nullptr, Z_Construct_UFunction_AFP_player_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFP_player_MoveForward_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFP_player_MoveForward_Statics::FP_player_eventMoveForward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFP_player_MoveForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFP_player_MoveForward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFP_player_MoveForward_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFP_player_MoveForward_Statics::FP_player_eventMoveForward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFP_player_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFP_player_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFP_player_MoveRight_Statics
	{
		struct FP_player_eventMoveRight_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFP_player_MoveRight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FP_player_eventMoveRight_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFP_player_MoveRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFP_player_MoveRight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFP_player_MoveRight_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handles input for moving right and left.\n" },
#endif
		{ "ModuleRelativePath", "FP_player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles input for moving right and left." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFP_player_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFP_player, nullptr, "MoveRight", nullptr, nullptr, Z_Construct_UFunction_AFP_player_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFP_player_MoveRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFP_player_MoveRight_Statics::FP_player_eventMoveRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFP_player_MoveRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFP_player_MoveRight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFP_player_MoveRight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFP_player_MoveRight_Statics::FP_player_eventMoveRight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFP_player_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFP_player_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFP_player_ResetCanFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFP_player_ResetCanFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFP_player_ResetCanFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFP_player, nullptr, "ResetCanFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFP_player_ResetCanFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFP_player_ResetCanFire_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFP_player_ResetCanFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFP_player_ResetCanFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFP_player_StartFiring_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFP_player_StartFiring_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFP_player_StartFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFP_player, nullptr, "StartFiring", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFP_player_StartFiring_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFP_player_StartFiring_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFP_player_StartFiring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFP_player_StartFiring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFP_player_StartJump_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFP_player_StartJump_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets jump flag when key is pressed.\n" },
#endif
		{ "ModuleRelativePath", "FP_player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets jump flag when key is pressed." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFP_player_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFP_player, nullptr, "StartJump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFP_player_StartJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFP_player_StartJump_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFP_player_StartJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFP_player_StartJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFP_player_StopFiring_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFP_player_StopFiring_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFP_player_StopFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFP_player, nullptr, "StopFiring", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFP_player_StopFiring_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFP_player_StopFiring_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFP_player_StopFiring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFP_player_StopFiring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFP_player_StopJump_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFP_player_StopJump_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clears jump flag when key is released.\n" },
#endif
		{ "ModuleRelativePath", "FP_player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears jump flag when key is released." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFP_player_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFP_player, nullptr, "StopJump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFP_player_StopJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFP_player_StopJump_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFP_player_StopJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFP_player_StopJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFP_player);
	UClass* Z_Construct_UClass_AFP_player_NoRegister()
	{
		return AFP_player::StaticClass();
	}
	struct Z_Construct_UClass_AFP_player_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HandClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_POVMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_POVMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_POVMeshOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_POVMeshOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_POVMeshRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_POVMeshRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minutes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Minutes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bChoiceMade_MetaData[];
#endif
		static void NewProp_bChoiceMade_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bChoiceMade;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootingSFX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootingSFX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovingSFX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovingSFX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SFXVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SFXVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MusicVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MusicVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MuzzleOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Projectile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Projectile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XP_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_XP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPToLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_XPToLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerUpgradeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerUpgradeComponent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentThreeUpgrades_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentThreeUpgrades_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentThreeUpgrades;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TempRow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TempRow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChosenUpgrade_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChosenUpgrade;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_val_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_val_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_val_InitialSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_val_InitialSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_val_MaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_val_MaxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_val_bShouldBounce_MetaData[];
#endif
		static void NewProp_val_bShouldBounce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_val_bShouldBounce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_val_Bounciness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_val_Bounciness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_val_bRotationFollowsVelocity_MetaData[];
#endif
		static void NewProp_val_bRotationFollowsVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_val_bRotationFollowsVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_val_ProjectileGravityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_val_ProjectileGravityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_val_lifespan_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_val_lifespan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_val_ProjectileScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_val_ProjectileScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_val_CollisionSphere_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_val_CollisionSphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_val_ExplosionRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_val_ExplosionRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_val_PierceCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_val_PierceCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFP_player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_COMP3000,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFP_player_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFP_player_ApplyUpgradeEffect, "ApplyUpgradeEffect" }, // 4029063649
		{ &Z_Construct_UFunction_AFP_player_DEATH, "DEATH" }, // 1223493245
		{ &Z_Construct_UFunction_AFP_player_Fire, "Fire" }, // 4261626434
		{ &Z_Construct_UFunction_AFP_player_GainXP, "GainXP" }, // 4169978926
		{ &Z_Construct_UFunction_AFP_player_LevelUp, "LevelUp" }, // 138197110
		{ &Z_Construct_UFunction_AFP_player_LevelUpTRIGGER, "LevelUpTRIGGER" }, // 2628745362
		{ &Z_Construct_UFunction_AFP_player_MoveForward, "MoveForward" }, // 1896454477
		{ &Z_Construct_UFunction_AFP_player_MoveRight, "MoveRight" }, // 2969092450
		{ &Z_Construct_UFunction_AFP_player_ResetCanFire, "ResetCanFire" }, // 2092735917
		{ &Z_Construct_UFunction_AFP_player_StartFiring, "StartFiring" }, // 1327279964
		{ &Z_Construct_UFunction_AFP_player_StartJump, "StartJump" }, // 1660933228
		{ &Z_Construct_UFunction_AFP_player_StopFiring, "StopFiring" }, // 4191470192
		{ &Z_Construct_UFunction_AFP_player_StopJump, "StopJump" }, // 3137902023
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FP_player.h" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Projectile class to spawn.\n" },
#endif
		{ "ModuleRelativePath", "FP_player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile class to spawn." },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AFPSProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_ProjectileClass_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_ProjectileClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_HandClass_MetaData[] = {
		{ "Category", "POVCamera" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_HandClass = { "HandClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, HandClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AHandMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_HandClass_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_HandClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_POVMesh_MetaData[] = {
		{ "Category", "POVCamera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  mesh instance\n" },
#endif
		{ "ModuleRelativePath", "FP_player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "mesh instance" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_POVMesh = { "POVMesh", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, POVMesh), Z_Construct_UClass_AHandMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_POVMesh_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_POVMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_POVMeshOffset_MetaData[] = {
		{ "Category", "POVCamera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  mesh offset and rotation\n" },
#endif
		{ "ModuleRelativePath", "FP_player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "mesh offset and rotation" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_POVMeshOffset = { "POVMeshOffset", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, POVMeshOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_POVMeshOffset_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_POVMeshOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_POVMeshRotation_MetaData[] = {
		{ "Category", "POVCamera" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_POVMeshRotation = { "POVMeshRotation", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, POVMeshRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_POVMeshRotation_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_POVMeshRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_Seconds_MetaData[] = {
		{ "Category", "FP_player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//gameplay\n" },
#endif
		{ "ModuleRelativePath", "FP_player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "gameplay" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, Seconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_Seconds_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_Seconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_Minutes_MetaData[] = {
		{ "Category", "FP_player" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_Minutes = { "Minutes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, Minutes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_Minutes_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_Minutes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_bChoiceMade_MetaData[] = {
		{ "Category", "FP_player" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	void Z_Construct_UClass_AFP_player_Statics::NewProp_bChoiceMade_SetBit(void* Obj)
	{
		((AFP_player*)Obj)->bChoiceMade = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_bChoiceMade = { "bChoiceMade", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFP_player), &Z_Construct_UClass_AFP_player_Statics::NewProp_bChoiceMade_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_bChoiceMade_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_bChoiceMade_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_FOV_MetaData[] = {
		{ "Category", "FP_player" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, FOV), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_FOV_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_FOV_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_ShootingSFX_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Audio\n" },
#endif
		{ "ModuleRelativePath", "FP_player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Audio" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_ShootingSFX = { "ShootingSFX", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, ShootingSFX), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_ShootingSFX_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_ShootingSFX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_MovingSFX_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_MovingSFX = { "MovingSFX", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, MovingSFX), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_MovingSFX_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_MovingSFX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_SFXVolume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_SFXVolume = { "SFXVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, SFXVolume), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_SFXVolume_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_SFXVolume_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_MusicVolume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_MusicVolume = { "MusicVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, MusicVolume), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_MusicVolume_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_MusicVolume_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_MuzzleOffset_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gun muzzle offset from the camera location.\n" },
#endif
		{ "ModuleRelativePath", "FP_player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gun muzzle offset from the camera location." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_MuzzleOffset = { "MuzzleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, MuzzleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_MuzzleOffset_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_MuzzleOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_Projectile_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Projectile class to spawn.\n" },
#endif
		{ "ModuleRelativePath", "FP_player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile class to spawn." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, Projectile), Z_Construct_UClass_AFPSProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_Projectile_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_Projectile_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ClampMin", "0.001" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_FireRate_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_FireRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//health\n" },
#endif
		{ "ModuleRelativePath", "FP_player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "health" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_CurrentHealth_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_CurrentHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_MaxHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_XP_MetaData[] = {
		{ "Category", "XP" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//for blueprint //ignore\n" },
#endif
		{ "ModuleRelativePath", "FP_player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "for blueprint ignore" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_XP = { "XP", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, XP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_XP_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_XP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_XPToLevel_MetaData[] = {
		{ "Category", "XP" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_XPToLevel = { "XPToLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, XPToLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_XPToLevel_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_XPToLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "XP" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, Level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_Level_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_Level_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_PlayerUpgradeComponent_MetaData[] = {
		{ "Category", "FP_player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_PlayerUpgradeComponent = { "PlayerUpgradeComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, PlayerUpgradeComponent), Z_Construct_UClass_UUpgradeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_PlayerUpgradeComponent_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_PlayerUpgradeComponent_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_CurrentThreeUpgrades_Inner = { "CurrentThreeUpgrades", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_CurrentThreeUpgrades_MetaData[] = {
		{ "Category", "FP_player" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_CurrentThreeUpgrades = { "CurrentThreeUpgrades", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, CurrentThreeUpgrades), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_CurrentThreeUpgrades_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_CurrentThreeUpgrades_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_TempRow_MetaData[] = {
		{ "Category", "FP_player" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_TempRow = { "TempRow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, TempRow), Z_Construct_UScriptStruct_FUpgradeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_TempRow_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_TempRow_MetaData) }; // 2846280346
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_ChosenUpgrade_MetaData[] = {
		{ "Category", "FP_player" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_ChosenUpgrade = { "ChosenUpgrade", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, ChosenUpgrade), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_ChosenUpgrade_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_ChosenUpgrade_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_val_Damage_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ClampMin", "0.1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//damage variables\n" },
#endif
		{ "ModuleRelativePath", "FP_player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "damage variables" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_val_Damage = { "val_Damage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, val_Damage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_val_Damage_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_val_Damage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_val_InitialSpeed_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ClampMin", "10.0" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_val_InitialSpeed = { "val_InitialSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, val_InitialSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_val_InitialSpeed_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_val_InitialSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_val_MaxSpeed_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ClampMin", "10.0" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_val_MaxSpeed = { "val_MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, val_MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_val_MaxSpeed_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_val_MaxSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_val_bShouldBounce_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	void Z_Construct_UClass_AFP_player_Statics::NewProp_val_bShouldBounce_SetBit(void* Obj)
	{
		((AFP_player*)Obj)->val_bShouldBounce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_val_bShouldBounce = { "val_bShouldBounce", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFP_player), &Z_Construct_UClass_AFP_player_Statics::NewProp_val_bShouldBounce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_val_bShouldBounce_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_val_bShouldBounce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_val_Bounciness_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_val_Bounciness = { "val_Bounciness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, val_Bounciness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_val_Bounciness_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_val_Bounciness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_val_bRotationFollowsVelocity_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	void Z_Construct_UClass_AFP_player_Statics::NewProp_val_bRotationFollowsVelocity_SetBit(void* Obj)
	{
		((AFP_player*)Obj)->val_bRotationFollowsVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_val_bRotationFollowsVelocity = { "val_bRotationFollowsVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFP_player), &Z_Construct_UClass_AFP_player_Statics::NewProp_val_bRotationFollowsVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_val_bRotationFollowsVelocity_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_val_bRotationFollowsVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_val_ProjectileGravityScale_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_val_ProjectileGravityScale = { "val_ProjectileGravityScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, val_ProjectileGravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_val_ProjectileGravityScale_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_val_ProjectileGravityScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_val_lifespan_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_val_lifespan = { "val_lifespan", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, val_lifespan), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_val_lifespan_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_val_lifespan_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_val_ProjectileScale_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ClampMin", "0.001" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_val_ProjectileScale = { "val_ProjectileScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, val_ProjectileScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_val_ProjectileScale_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_val_ProjectileScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_val_CollisionSphere_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_val_CollisionSphere = { "val_CollisionSphere", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, val_CollisionSphere), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_val_CollisionSphere_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_val_CollisionSphere_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_val_ExplosionRadius_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_val_ExplosionRadius = { "val_ExplosionRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, val_ExplosionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_val_ExplosionRadius_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_val_ExplosionRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_player_Statics::NewProp_val_PierceCount_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "FP_player.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFP_player_Statics::NewProp_val_PierceCount = { "val_PierceCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFP_player, val_PierceCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::NewProp_val_PierceCount_MetaData), Z_Construct_UClass_AFP_player_Statics::NewProp_val_PierceCount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFP_player_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_HandClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_POVMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_POVMeshOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_POVMeshRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_Seconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_Minutes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_bChoiceMade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_FOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_ShootingSFX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_MovingSFX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_SFXVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_MusicVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_MuzzleOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_Projectile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_FireRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_CurrentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_XP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_XPToLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_PlayerUpgradeComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_CurrentThreeUpgrades_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_CurrentThreeUpgrades,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_TempRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_ChosenUpgrade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_val_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_val_InitialSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_val_MaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_val_bShouldBounce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_val_Bounciness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_val_bRotationFollowsVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_val_ProjectileGravityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_val_lifespan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_val_ProjectileScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_val_CollisionSphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_val_ExplosionRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_player_Statics::NewProp_val_PierceCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFP_player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFP_player>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFP_player_Statics::ClassParams = {
		&AFP_player::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFP_player_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::Class_MetaDataParams), Z_Construct_UClass_AFP_player_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFP_player()
	{
		if (!Z_Registration_Info_UClass_AFP_player.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFP_player.OuterSingleton, Z_Construct_UClass_AFP_player_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFP_player.OuterSingleton;
	}
	template<> COMP3000_API UClass* StaticClass<AFP_player>()
	{
		return AFP_player::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFP_player);
	AFP_player::~AFP_player() {}
	struct Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_FP_player_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_FP_player_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFP_player, AFP_player::StaticClass, TEXT("AFP_player"), &Z_Registration_Info_UClass_AFP_player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFP_player), 129795622U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_FP_player_h_328906862(TEXT("/Script/COMP3000"),
		Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_FP_player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_FP_player_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
