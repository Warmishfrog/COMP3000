// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "COMP3000/Public/DiamondSquare.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiamondSquare() {}
// Cross Module References
	COMP3000_API UClass* Z_Construct_UClass_ADiamondSquare();
	COMP3000_API UClass* Z_Construct_UClass_ADiamondSquare_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_COMP3000();
// End Cross Module References
	DEFINE_FUNCTION(ADiamondSquare::execSetMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterial(Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADiamondSquare::execSetChunkParameters)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InZMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNoiseScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InVertexDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InUVScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InXOffset);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InYOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChunkParameters(Z_Param_InSize,Z_Param_InZMultiplier,Z_Param_InNoiseScale,Z_Param_InVertexDistance,Z_Param_InUVScale,Z_Param_InXOffset,Z_Param_InYOffset);
		P_NATIVE_END;
	}
	void ADiamondSquare::StaticRegisterNativesADiamondSquare()
	{
		UClass* Class = ADiamondSquare::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetChunkParameters", &ADiamondSquare::execSetChunkParameters },
			{ "SetMaterial", &ADiamondSquare::execSetMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics
	{
		struct DiamondSquare_eventSetChunkParameters_Parms
		{
			int32 InSize;
			float InZMultiplier;
			float InNoiseScale;
			float InVertexDistance;
			float InUVScale;
			float InXOffset;
			float InYOffset;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InSize;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InZMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InNoiseScale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InVertexDistance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InUVScale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InXOffset;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InYOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics::NewProp_InSize = { "InSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DiamondSquare_eventSetChunkParameters_Parms, InSize), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics::NewProp_InZMultiplier = { "InZMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DiamondSquare_eventSetChunkParameters_Parms, InZMultiplier), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics::NewProp_InNoiseScale = { "InNoiseScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DiamondSquare_eventSetChunkParameters_Parms, InNoiseScale), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics::NewProp_InVertexDistance = { "InVertexDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DiamondSquare_eventSetChunkParameters_Parms, InVertexDistance), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics::NewProp_InUVScale = { "InUVScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DiamondSquare_eventSetChunkParameters_Parms, InUVScale), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics::NewProp_InXOffset = { "InXOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DiamondSquare_eventSetChunkParameters_Parms, InXOffset), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics::NewProp_InYOffset = { "InYOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DiamondSquare_eventSetChunkParameters_Parms, InYOffset), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics::NewProp_InSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics::NewProp_InZMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics::NewProp_InNoiseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics::NewProp_InVertexDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics::NewProp_InUVScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics::NewProp_InXOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics::NewProp_InYOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Terrain Generation" },
		{ "ModuleRelativePath", "Public/DiamondSquare.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADiamondSquare, nullptr, "SetChunkParameters", nullptr, nullptr, Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics::DiamondSquare_eventSetChunkParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics::DiamondSquare_eventSetChunkParameters_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADiamondSquare_SetChunkParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADiamondSquare_SetChunkParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADiamondSquare_SetMaterial_Statics
	{
		struct DiamondSquare_eventSetMaterial_Parms
		{
			UMaterialInterface* Material;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADiamondSquare_SetMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DiamondSquare_eventSetMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADiamondSquare_SetMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADiamondSquare_SetMaterial_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADiamondSquare_SetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Terrain Generation" },
		{ "ModuleRelativePath", "Public/DiamondSquare.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADiamondSquare_SetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADiamondSquare, nullptr, "SetMaterial", nullptr, nullptr, Z_Construct_UFunction_ADiamondSquare_SetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADiamondSquare_SetMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADiamondSquare_SetMaterial_Statics::DiamondSquare_eventSetMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADiamondSquare_SetMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADiamondSquare_SetMaterial_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADiamondSquare_SetMaterial_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADiamondSquare_SetMaterial_Statics::DiamondSquare_eventSetMaterial_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADiamondSquare_SetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADiamondSquare_SetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADiamondSquare);
	UClass* Z_Construct_UClass_ADiamondSquare_NoRegister()
	{
		return ADiamondSquare::StaticClass();
	}
	struct Z_Construct_UClass_ADiamondSquare_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADiamondSquare_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_COMP3000,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ADiamondSquare_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADiamondSquare_SetChunkParameters, "SetChunkParameters" }, // 352595262
		{ &Z_Construct_UFunction_ADiamondSquare_SetMaterial, "SetMaterial" }, // 1218100870
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADiamondSquare_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DiamondSquare.h" },
		{ "ModuleRelativePath", "Public/DiamondSquare.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "DiamondSquare" },
		{ "CLampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Trongle Sizes\n" },
#endif
		{ "ModuleRelativePath", "Public/DiamondSquare.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trongle Sizes" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADiamondSquare, Size), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Size_MetaData), Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Size_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADiamondSquare_Statics::NewProp_ZMultiplier_MetaData[] = {
		{ "Category", "DiamondSquare" },
		{ "CLampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Perlin Noise modifiers\n" },
#endif
		{ "ModuleRelativePath", "Public/DiamondSquare.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Perlin Noise modifiers" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADiamondSquare_Statics::NewProp_ZMultiplier = { "ZMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADiamondSquare, ZMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::NewProp_ZMultiplier_MetaData), Z_Construct_UClass_ADiamondSquare_Statics::NewProp_ZMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADiamondSquare_Statics::NewProp_NoiseScale_MetaData[] = {
		{ "Category", "DiamondSquare" },
		{ "CLampMin", "0" },
		{ "ModuleRelativePath", "Public/DiamondSquare.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADiamondSquare_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADiamondSquare, NoiseScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::NewProp_NoiseScale_MetaData), Z_Construct_UClass_ADiamondSquare_Statics::NewProp_NoiseScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADiamondSquare_Statics::NewProp_XOffset_MetaData[] = {
		{ "Category", "DiamondSquare" },
		{ "CLampMin", "0" },
		{ "ModuleRelativePath", "Public/DiamondSquare.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADiamondSquare_Statics::NewProp_XOffset = { "XOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADiamondSquare, XOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::NewProp_XOffset_MetaData), Z_Construct_UClass_ADiamondSquare_Statics::NewProp_XOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADiamondSquare_Statics::NewProp_YOffset_MetaData[] = {
		{ "Category", "DiamondSquare" },
		{ "CLampMin", "0" },
		{ "ModuleRelativePath", "Public/DiamondSquare.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADiamondSquare_Statics::NewProp_YOffset = { "YOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADiamondSquare, YOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::NewProp_YOffset_MetaData), Z_Construct_UClass_ADiamondSquare_Statics::NewProp_YOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADiamondSquare_Statics::NewProp_VertexDistance_MetaData[] = {
		{ "Category", "DiamondSquare" },
		{ "CLampMin", "0.000001" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Material and Vertices Scaling\n" },
#endif
		{ "ModuleRelativePath", "Public/DiamondSquare.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material and Vertices Scaling" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADiamondSquare_Statics::NewProp_VertexDistance = { "VertexDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADiamondSquare, VertexDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::NewProp_VertexDistance_MetaData), Z_Construct_UClass_ADiamondSquare_Statics::NewProp_VertexDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADiamondSquare_Statics::NewProp_UVScale_MetaData[] = {
		{ "Category", "DiamondSquare" },
		{ "CLampMin", "0.000001" },
		{ "ModuleRelativePath", "Public/DiamondSquare.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADiamondSquare_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADiamondSquare, UVScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::NewProp_UVScale_MetaData), Z_Construct_UClass_ADiamondSquare_Statics::NewProp_UVScale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADiamondSquare_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADiamondSquare_Statics::NewProp_ZMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADiamondSquare_Statics::NewProp_NoiseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADiamondSquare_Statics::NewProp_XOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADiamondSquare_Statics::NewProp_YOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADiamondSquare_Statics::NewProp_VertexDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADiamondSquare_Statics::NewProp_UVScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADiamondSquare_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADiamondSquare>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADiamondSquare_Statics::ClassParams = {
		&ADiamondSquare::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADiamondSquare_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::Class_MetaDataParams), Z_Construct_UClass_ADiamondSquare_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADiamondSquare()
	{
		if (!Z_Registration_Info_UClass_ADiamondSquare.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADiamondSquare.OuterSingleton, Z_Construct_UClass_ADiamondSquare_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADiamondSquare.OuterSingleton;
	}
	template<> COMP3000_API UClass* StaticClass<ADiamondSquare>()
	{
		return ADiamondSquare::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADiamondSquare);
	ADiamondSquare::~ADiamondSquare() {}
	struct Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_Public_DiamondSquare_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_Public_DiamondSquare_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADiamondSquare, ADiamondSquare::StaticClass, TEXT("ADiamondSquare"), &Z_Registration_Info_UClass_ADiamondSquare, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADiamondSquare), 981954274U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_Public_DiamondSquare_h_2202289696(TEXT("/Script/COMP3000"),
		Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_Public_DiamondSquare_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_COMP3000_Source_COMP3000_Public_DiamondSquare_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
