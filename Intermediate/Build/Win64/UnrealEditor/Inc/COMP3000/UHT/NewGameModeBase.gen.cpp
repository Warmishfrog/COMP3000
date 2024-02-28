// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "COMP3000/NewGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewGameModeBase() {}
// Cross Module References
	COMP3000_API UClass* Z_Construct_UClass_ABasicEnemy_NoRegister();
	COMP3000_API UClass* Z_Construct_UClass_ANewGameModeBase();
	COMP3000_API UClass* Z_Construct_UClass_ANewGameModeBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_COMP3000();
// End Cross Module References
	void ANewGameModeBase::StaticRegisterNativesANewGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANewGameModeBase);
	UClass* Z_Construct_UClass_ANewGameModeBase_NoRegister()
	{
		return ANewGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ANewGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatStarted_MetaData[];
#endif
		static void NewProp_CombatStarted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CombatStarted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANewGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_COMP3000,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANewGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NewGameModeBase.h" },
		{ "ModuleRelativePath", "NewGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewGameModeBase_Statics::NewProp_EnemyToSpawn_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "NewGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANewGameModeBase_Statics::NewProp_EnemyToSpawn = { "EnemyToSpawn", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewGameModeBase, EnemyToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_ABasicEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANewGameModeBase_Statics::NewProp_EnemyToSpawn_MetaData), Z_Construct_UClass_ANewGameModeBase_Statics::NewProp_EnemyToSpawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewGameModeBase_Statics::NewProp_CombatStarted_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "NewGameModeBase.h" },
	};
#endif
	void Z_Construct_UClass_ANewGameModeBase_Statics::NewProp_CombatStarted_SetBit(void* Obj)
	{
		((ANewGameModeBase*)Obj)->CombatStarted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANewGameModeBase_Statics::NewProp_CombatStarted = { "CombatStarted", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANewGameModeBase), &Z_Construct_UClass_ANewGameModeBase_Statics::NewProp_CombatStarted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANewGameModeBase_Statics::NewProp_CombatStarted_MetaData), Z_Construct_UClass_ANewGameModeBase_Statics::NewProp_CombatStarted_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANewGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewGameModeBase_Statics::NewProp_EnemyToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewGameModeBase_Statics::NewProp_CombatStarted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANewGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANewGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANewGameModeBase_Statics::ClassParams = {
		&ANewGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANewGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANewGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANewGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ANewGameModeBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANewGameModeBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ANewGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ANewGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANewGameModeBase.OuterSingleton, Z_Construct_UClass_ANewGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANewGameModeBase.OuterSingleton;
	}
	template<> COMP3000_API UClass* StaticClass<ANewGameModeBase>()
	{
		return ANewGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANewGameModeBase);
	ANewGameModeBase::~ANewGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_NewGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_NewGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANewGameModeBase, ANewGameModeBase::StaticClass, TEXT("ANewGameModeBase"), &Z_Registration_Info_UClass_ANewGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANewGameModeBase), 1115764908U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_NewGameModeBase_h_453236499(TEXT("/Script/COMP3000"),
		Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_NewGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_NewGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
