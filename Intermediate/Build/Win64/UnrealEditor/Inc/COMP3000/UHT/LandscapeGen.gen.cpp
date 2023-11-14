// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "COMP3000/Public/LandscapeGen.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeGen() {}
// Cross Module References
	COMP3000_API UClass* Z_Construct_UClass_ALandscapeGen();
	COMP3000_API UClass* Z_Construct_UClass_ALandscapeGen_NoRegister();
	COMP3000_API UScriptStruct* Z_Construct_UScriptStruct_FChunkPosition();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_COMP3000();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChunkPosition;
class UScriptStruct* FChunkPosition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChunkPosition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChunkPosition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkPosition, (UObject*)Z_Construct_UPackage__Script_COMP3000(), TEXT("ChunkPosition"));
	}
	return Z_Registration_Info_UScriptStruct_ChunkPosition.OuterSingleton;
}
template<> COMP3000_API UScriptStruct* StaticStruct<FChunkPosition>()
{
	return FChunkPosition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChunkPosition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkPosition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LandscapeGen.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChunkPosition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkPosition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkPosition_Statics::NewProp_X_MetaData[] = {
		{ "Category", "ChunkPosition" },
		{ "ModuleRelativePath", "Public/LandscapeGen.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChunkPosition_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkPosition, X), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkPosition_Statics::NewProp_X_MetaData), Z_Construct_UScriptStruct_FChunkPosition_Statics::NewProp_X_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkPosition_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "ChunkPosition" },
		{ "ModuleRelativePath", "Public/LandscapeGen.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChunkPosition_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkPosition, Y), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkPosition_Statics::NewProp_Y_MetaData), Z_Construct_UScriptStruct_FChunkPosition_Statics::NewProp_Y_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChunkPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkPosition_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkPosition_Statics::NewProp_Y,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChunkPosition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_COMP3000,
		nullptr,
		&NewStructOps,
		"ChunkPosition",
		Z_Construct_UScriptStruct_FChunkPosition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkPosition_Statics::PropPointers),
		sizeof(FChunkPosition),
		alignof(FChunkPosition),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkPosition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChunkPosition_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkPosition_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChunkPosition()
	{
		if (!Z_Registration_Info_UScriptStruct_ChunkPosition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChunkPosition.InnerSingleton, Z_Construct_UScriptStruct_FChunkPosition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChunkPosition.InnerSingleton;
	}
	void ALandscapeGen::StaticRegisterNativesALandscapeGen()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALandscapeGen);
	UClass* Z_Construct_UClass_ALandscapeGen_NoRegister()
	{
		return ALandscapeGen::StaticClass();
	}
	struct Z_Construct_UClass_ALandscapeGen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_XOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UVScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Current;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Visible_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Visible;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Generated_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Generated_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Generated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALandscapeGen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_COMP3000,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGen_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeGen.h" },
		{ "ModuleRelativePath", "Public/LandscapeGen.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "LandscapeGen" },
		{ "ModuleRelativePath", "Public/LandscapeGen.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGen, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Distance_MetaData), Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Distance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "LandscapeGen" },
		{ "CLampMin", "0" },
		{ "ModuleRelativePath", "Public/LandscapeGen.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGen, Size), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Size_MetaData), Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Size_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGen_Statics::NewProp_ZMultiplier_MetaData[] = {
		{ "Category", "LandscapeGen" },
		{ "CLampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Perlin Noise modifiers\n" },
#endif
		{ "ModuleRelativePath", "Public/LandscapeGen.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Perlin Noise modifiers" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGen_Statics::NewProp_ZMultiplier = { "ZMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGen, ZMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGen_Statics::NewProp_ZMultiplier_MetaData), Z_Construct_UClass_ALandscapeGen_Statics::NewProp_ZMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGen_Statics::NewProp_NoiseScale_MetaData[] = {
		{ "Category", "LandscapeGen" },
		{ "CLampMin", "0" },
		{ "ModuleRelativePath", "Public/LandscapeGen.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGen_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGen, NoiseScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGen_Statics::NewProp_NoiseScale_MetaData), Z_Construct_UClass_ALandscapeGen_Statics::NewProp_NoiseScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGen_Statics::NewProp_XOffset_MetaData[] = {
		{ "Category", "LandscapeGen" },
		{ "CLampMin", "0" },
		{ "ModuleRelativePath", "Public/LandscapeGen.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGen_Statics::NewProp_XOffset = { "XOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGen, XOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGen_Statics::NewProp_XOffset_MetaData), Z_Construct_UClass_ALandscapeGen_Statics::NewProp_XOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGen_Statics::NewProp_YOffset_MetaData[] = {
		{ "Category", "LandscapeGen" },
		{ "CLampMin", "0" },
		{ "ModuleRelativePath", "Public/LandscapeGen.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGen_Statics::NewProp_YOffset = { "YOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGen, YOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGen_Statics::NewProp_YOffset_MetaData), Z_Construct_UClass_ALandscapeGen_Statics::NewProp_YOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGen_Statics::NewProp_VertexDistance_MetaData[] = {
		{ "Category", "LandscapeGen" },
		{ "CLampMin", "0.000001" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Material and Vertices Scaling\n" },
#endif
		{ "ModuleRelativePath", "Public/LandscapeGen.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material and Vertices Scaling" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGen_Statics::NewProp_VertexDistance = { "VertexDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGen, VertexDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGen_Statics::NewProp_VertexDistance_MetaData), Z_Construct_UClass_ALandscapeGen_Statics::NewProp_VertexDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGen_Statics::NewProp_UVScale_MetaData[] = {
		{ "Category", "LandscapeGen" },
		{ "CLampMin", "0.000001" },
		{ "ModuleRelativePath", "Public/LandscapeGen.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGen_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGen, UVScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGen_Statics::NewProp_UVScale_MetaData), Z_Construct_UClass_ALandscapeGen_Statics::NewProp_UVScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/LandscapeGen.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGen, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Material_MetaData), Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Material_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Current_MetaData[] = {
		{ "Category", "Chunk Position" },
		{ "ModuleRelativePath", "Public/LandscapeGen.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGen, Current), Z_Construct_UScriptStruct_FChunkPosition, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Current_MetaData), Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Current_MetaData) }; // 1490250955
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Visible_MetaData[] = {
		{ "Category", "Chunk Position" },
		{ "ModuleRelativePath", "Public/LandscapeGen.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Visible = { "Visible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGen, Visible), Z_Construct_UScriptStruct_FChunkPosition, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Visible_MetaData), Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Visible_MetaData) }; // 1490250955
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Generated_ElementProp = { "Generated", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChunkPosition, METADATA_PARAMS(0, nullptr) }; // 1490250955
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Generated_MetaData[] = {
		{ "Category", "Chunk Position" },
		{ "ModuleRelativePath", "Public/LandscapeGen.h" },
	};
#endif
	static_assert(TModels_V<CGetTypeHashable, FChunkPosition>, "The structure 'FChunkPosition' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Generated = { "Generated", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGen, Generated), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Generated_MetaData), Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Generated_MetaData) }; // 1490250955
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscapeGen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGen_Statics::NewProp_ZMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGen_Statics::NewProp_NoiseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGen_Statics::NewProp_XOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGen_Statics::NewProp_YOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGen_Statics::NewProp_VertexDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGen_Statics::NewProp_UVScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Visible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Generated_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGen_Statics::NewProp_Generated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandscapeGen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapeGen>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALandscapeGen_Statics::ClassParams = {
		&ALandscapeGen::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALandscapeGen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGen_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGen_Statics::Class_MetaDataParams), Z_Construct_UClass_ALandscapeGen_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGen_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ALandscapeGen()
	{
		if (!Z_Registration_Info_UClass_ALandscapeGen.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALandscapeGen.OuterSingleton, Z_Construct_UClass_ALandscapeGen_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALandscapeGen.OuterSingleton;
	}
	template<> COMP3000_API UClass* StaticClass<ALandscapeGen>()
	{
		return ALandscapeGen::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeGen);
	ALandscapeGen::~ALandscapeGen() {}
	struct Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_Public_LandscapeGen_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_Public_LandscapeGen_h_Statics::ScriptStructInfo[] = {
		{ FChunkPosition::StaticStruct, Z_Construct_UScriptStruct_FChunkPosition_Statics::NewStructOps, TEXT("ChunkPosition"), &Z_Registration_Info_UScriptStruct_ChunkPosition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChunkPosition), 1490250955U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_Public_LandscapeGen_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALandscapeGen, ALandscapeGen::StaticClass, TEXT("ALandscapeGen"), &Z_Registration_Info_UClass_ALandscapeGen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALandscapeGen), 665681313U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_Public_LandscapeGen_h_3694840848(TEXT("/Script/COMP3000"),
		Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_Public_LandscapeGen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_Public_LandscapeGen_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_Public_LandscapeGen_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_Public_LandscapeGen_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
