// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "COMP3000/FP_player.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFP_player() {}
// Cross Module References
	COMP3000_API UClass* Z_Construct_UClass_AFP_player();
	COMP3000_API UClass* Z_Construct_UClass_AFP_player_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_COMP3000();
// End Cross Module References
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
	void AFP_player::StaticRegisterNativesAFP_player()
	{
		UClass* Class = AFP_player::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveForward", &AFP_player::execMoveForward },
			{ "MoveRight", &AFP_player::execMoveRight },
			{ "StartJump", &AFP_player::execStartJump },
			{ "StopJump", &AFP_player::execStopJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "Comment", "// Handles input for moving forward and backward.\n" },
#endif
		{ "ModuleRelativePath", "FP_player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles input for moving forward and backward." },
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFP_player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_COMP3000,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFP_player_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFP_player_MoveForward, "MoveForward" }, // 2742964377
		{ &Z_Construct_UFunction_AFP_player_MoveRight, "MoveRight" }, // 2969092450
		{ &Z_Construct_UFunction_AFP_player_StartJump, "StartJump" }, // 1660933228
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFP_player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFP_player>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFP_player_Statics::ClassParams = {
		&AFP_player::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFP_player_Statics::Class_MetaDataParams), Z_Construct_UClass_AFP_player_Statics::Class_MetaDataParams)
	};
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
		{ Z_Construct_UClass_AFP_player, AFP_player::StaticClass, TEXT("AFP_player"), &Z_Registration_Info_UClass_AFP_player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFP_player), 2497557474U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_FP_player_h_2300985710(TEXT("/Script/COMP3000"),
		Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_FP_player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_FP_player_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS