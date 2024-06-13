// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Perlin_Noise/Public/Perlin_NoiseBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerlin_NoiseBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
PERLIN_NOISE_API UClass* Z_Construct_UClass_UPerlin_NoiseBPLibrary();
PERLIN_NOISE_API UClass* Z_Construct_UClass_UPerlin_NoiseBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_Perlin_Noise();
// End Cross Module References

// Begin Class UPerlin_NoiseBPLibrary Function FourD_Perlin_Fractal
struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics
{
	struct Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms
	{
		float x;
		float y;
		float z;
		float w;
		int32 levels;
		float scale;
		float amplitude;
		float ScaleFade;
		float AmpFade;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "7" },
		{ "Category", "Perlin_Noise" },
		{ "CPP_Default_AmpFade", "2.000000" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_scale", "1.000000" },
		{ "CPP_Default_ScaleFade", "2.000000" },
		{ "DisplayName", "4D Perlin Fractal" },
		{ "Keywords", "Four 4D Perlin_Noise perlin noise fractal" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sample 4D fractal perlin noise at the given X,Y,Z,W coordinate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_w_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_levels_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFade_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmpFade_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_w;
	static const UECodeGen_Private::FIntPropertyParams NewProp_levels;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleFade;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AmpFade;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, x), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_x_MetaData), NewProp_x_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_y_MetaData), NewProp_y_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, z), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_z_MetaData), NewProp_z_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, w), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_w_MetaData), NewProp_w_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_levels = { "levels", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, levels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_levels_MetaData), NewProp_levels_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, amplitude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_ScaleFade = { "ScaleFade", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, ScaleFade), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleFade_MetaData), NewProp_ScaleFade_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_AmpFade = { "AmpFade", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, AmpFade), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmpFade_MetaData), NewProp_AmpFade_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_w,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_levels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_ScaleFade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_AmpFade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "FourD_Perlin_Fractal", nullptr, nullptr, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execFourD_Perlin_Fractal)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_z);
	P_GET_PROPERTY(FFloatProperty,Z_Param_w);
	P_GET_PROPERTY(FIntProperty,Z_Param_levels);
	P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleFade);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AmpFade);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UPerlin_NoiseBPLibrary::FourD_Perlin_Fractal(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w,Z_Param_levels,Z_Param_scale,Z_Param_amplitude,Z_Param_ScaleFade,Z_Param_AmpFade);
	P_NATIVE_END;
}
// End Class UPerlin_NoiseBPLibrary Function FourD_Perlin_Fractal

// Begin Class UPerlin_NoiseBPLibrary Function FourD_Perlin_Noise
struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics
{
	struct Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms
	{
		float x;
		float y;
		float z;
		float w;
		float scale;
		float amplitude;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perlin_Noise" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_scale", "1.000000" },
		{ "DisplayName", "4D Perlin Noise" },
		{ "Keywords", "Four 4D Perlin_Noise perlin noise Perlin Noise" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sample 4D perlin noise at the given X,Y,Z,W coordinate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_w_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_scale_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_amplitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_w;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms, x), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_x_MetaData), NewProp_x_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms, y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_y_MetaData), NewProp_y_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms, z), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_z_MetaData), NewProp_z_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms, w), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_w_MetaData), NewProp_w_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms, scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_scale_MetaData), NewProp_scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms, amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_amplitude_MetaData), NewProp_amplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_w,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "FourD_Perlin_Noise", nullptr, nullptr, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execFourD_Perlin_Noise)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_z);
	P_GET_PROPERTY(FFloatProperty,Z_Param_w);
	P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UPerlin_NoiseBPLibrary::FourD_Perlin_Noise(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w,Z_Param_scale,Z_Param_amplitude);
	P_NATIVE_END;
}
// End Class UPerlin_NoiseBPLibrary Function FourD_Perlin_Noise

// Begin Class UPerlin_NoiseBPLibrary Function OneD_Perlin_Fractal
struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics
{
	struct Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms
	{
		float x;
		int32 levels;
		float scale;
		float amplitude;
		float ScaleFade;
		float AmpFade;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "Category", "Perlin_Noise" },
		{ "CPP_Default_AmpFade", "2.000000" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_scale", "1.000000" },
		{ "CPP_Default_ScaleFade", "2.000000" },
		{ "DisplayName", "1D Perlin Fractal" },
		{ "Keywords", "One 1D Perlin_Noise perlin noise fractal" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sample 1D fractal perlin noise at the given X coordinate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_levels_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFade_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmpFade_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FIntPropertyParams NewProp_levels;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleFade;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AmpFade;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms, x), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_x_MetaData), NewProp_x_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_levels = { "levels", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms, levels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_levels_MetaData), NewProp_levels_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms, scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms, amplitude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_ScaleFade = { "ScaleFade", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms, ScaleFade), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleFade_MetaData), NewProp_ScaleFade_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_AmpFade = { "AmpFade", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms, AmpFade), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmpFade_MetaData), NewProp_AmpFade_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_levels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_ScaleFade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_AmpFade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "OneD_Perlin_Fractal", nullptr, nullptr, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execOneD_Perlin_Fractal)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FIntProperty,Z_Param_levels);
	P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleFade);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AmpFade);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UPerlin_NoiseBPLibrary::OneD_Perlin_Fractal(Z_Param_x,Z_Param_levels,Z_Param_scale,Z_Param_amplitude,Z_Param_ScaleFade,Z_Param_AmpFade);
	P_NATIVE_END;
}
// End Class UPerlin_NoiseBPLibrary Function OneD_Perlin_Fractal

// Begin Class UPerlin_NoiseBPLibrary Function OneD_Perlin_Noise
struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics
{
	struct Perlin_NoiseBPLibrary_eventOneD_Perlin_Noise_Parms
	{
		float x;
		float scale;
		float amplitude;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perlin_Noise" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_scale", "1.000000" },
		{ "DisplayName", "1D Perlin Noise" },
		{ "Keywords", "One 1D Perlin_Noise perlin noise Perlin Noise" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sample 1D perlin noise at the given X coordinate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_scale_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_amplitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Noise_Parms, x), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_x_MetaData), NewProp_x_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Noise_Parms, scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_scale_MetaData), NewProp_scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Noise_Parms, amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_amplitude_MetaData), NewProp_amplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Noise_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "OneD_Perlin_Noise", nullptr, nullptr, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::Perlin_NoiseBPLibrary_eventOneD_Perlin_Noise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::Perlin_NoiseBPLibrary_eventOneD_Perlin_Noise_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execOneD_Perlin_Noise)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UPerlin_NoiseBPLibrary::OneD_Perlin_Noise(Z_Param_x,Z_Param_scale,Z_Param_amplitude);
	P_NATIVE_END;
}
// End Class UPerlin_NoiseBPLibrary Function OneD_Perlin_Noise

// Begin Class UPerlin_NoiseBPLibrary Function SetSeed
struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics
{
	struct Perlin_NoiseBPLibrary_eventSetSeed_Parms
	{
		int32 seed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perlin_Noise" },
		{ "DisplayName", "Set Noise Seed" },
		{ "Keywords", "Set_Seed seed set seed" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the seed for noise generation." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_seed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::NewProp_seed = { "seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventSetSeed_Parms, seed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::NewProp_seed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "SetSeed", nullptr, nullptr, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::Perlin_NoiseBPLibrary_eventSetSeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::Perlin_NoiseBPLibrary_eventSetSeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execSetSeed)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_seed);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPerlin_NoiseBPLibrary::SetSeed(Z_Param_seed);
	P_NATIVE_END;
}
// End Class UPerlin_NoiseBPLibrary Function SetSeed

// Begin Class UPerlin_NoiseBPLibrary Function ThreeD_Perlin_Fractal
struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics
{
	struct Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms
	{
		float x;
		float y;
		float z;
		int32 levels;
		float scale;
		float amplitude;
		float ScaleFade;
		float AmpFade;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "6" },
		{ "Category", "Perlin_Noise" },
		{ "CPP_Default_AmpFade", "2.000000" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_scale", "1.000000" },
		{ "CPP_Default_ScaleFade", "2.000000" },
		{ "DisplayName", "3D Perlin Fractal" },
		{ "Keywords", "Three 3D Perlin_Noise perlin noise fractal" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sample 3D fractal perlin noise at the given X,Y,Z coordinate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_levels_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFade_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmpFade_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
	static const UECodeGen_Private::FIntPropertyParams NewProp_levels;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleFade;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AmpFade;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, x), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_x_MetaData), NewProp_x_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_y_MetaData), NewProp_y_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, z), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_z_MetaData), NewProp_z_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_levels = { "levels", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, levels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_levels_MetaData), NewProp_levels_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, amplitude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_ScaleFade = { "ScaleFade", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, ScaleFade), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleFade_MetaData), NewProp_ScaleFade_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_AmpFade = { "AmpFade", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, AmpFade), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmpFade_MetaData), NewProp_AmpFade_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_levels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_ScaleFade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_AmpFade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "ThreeD_Perlin_Fractal", nullptr, nullptr, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execThreeD_Perlin_Fractal)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_z);
	P_GET_PROPERTY(FIntProperty,Z_Param_levels);
	P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleFade);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AmpFade);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UPerlin_NoiseBPLibrary::ThreeD_Perlin_Fractal(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_levels,Z_Param_scale,Z_Param_amplitude,Z_Param_ScaleFade,Z_Param_AmpFade);
	P_NATIVE_END;
}
// End Class UPerlin_NoiseBPLibrary Function ThreeD_Perlin_Fractal

// Begin Class UPerlin_NoiseBPLibrary Function ThreeD_Perlin_Noise
struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics
{
	struct Perlin_NoiseBPLibrary_eventThreeD_Perlin_Noise_Parms
	{
		float x;
		float y;
		float z;
		float scale;
		float amplitude;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perlin_Noise" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_scale", "1.000000" },
		{ "DisplayName", "3D Perlin Noise" },
		{ "Keywords", "Three 3D Perlin_Noise perlin noise Perlin Noise" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sample 3D perlin noise at the given X,Y,Z coordinate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_scale_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_amplitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Noise_Parms, x), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_x_MetaData), NewProp_x_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Noise_Parms, y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_y_MetaData), NewProp_y_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Noise_Parms, z), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_z_MetaData), NewProp_z_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Noise_Parms, scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_scale_MetaData), NewProp_scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Noise_Parms, amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_amplitude_MetaData), NewProp_amplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Noise_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "ThreeD_Perlin_Noise", nullptr, nullptr, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::Perlin_NoiseBPLibrary_eventThreeD_Perlin_Noise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::Perlin_NoiseBPLibrary_eventThreeD_Perlin_Noise_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execThreeD_Perlin_Noise)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_z);
	P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UPerlin_NoiseBPLibrary::ThreeD_Perlin_Noise(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_scale,Z_Param_amplitude);
	P_NATIVE_END;
}
// End Class UPerlin_NoiseBPLibrary Function ThreeD_Perlin_Noise

// Begin Class UPerlin_NoiseBPLibrary Function TwoD_Perlin_Fractal
struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics
{
	struct Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms
	{
		float x;
		float y;
		int32 levels;
		float scale;
		float amplitude;
		float ScaleFade;
		float AmpFade;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "5" },
		{ "Category", "Perlin_Noise" },
		{ "CPP_Default_AmpFade", "2.000000" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_scale", "1.000000" },
		{ "CPP_Default_ScaleFade", "2.000000" },
		{ "DisplayName", "2D Perlin Fractal" },
		{ "Keywords", "Two 2D Perlin_Noise perlin noise fractal" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sample 2D fractal perlin noise at the given X,Y coordinate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_levels_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFade_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmpFade_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_levels;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleFade;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AmpFade;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms, x), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_x_MetaData), NewProp_x_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms, y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_y_MetaData), NewProp_y_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_levels = { "levels", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms, levels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_levels_MetaData), NewProp_levels_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms, scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms, amplitude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_ScaleFade = { "ScaleFade", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms, ScaleFade), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleFade_MetaData), NewProp_ScaleFade_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_AmpFade = { "AmpFade", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms, AmpFade), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmpFade_MetaData), NewProp_AmpFade_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_levels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_ScaleFade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_AmpFade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "TwoD_Perlin_Fractal", nullptr, nullptr, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execTwoD_Perlin_Fractal)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FIntProperty,Z_Param_levels);
	P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleFade);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AmpFade);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UPerlin_NoiseBPLibrary::TwoD_Perlin_Fractal(Z_Param_x,Z_Param_y,Z_Param_levels,Z_Param_scale,Z_Param_amplitude,Z_Param_ScaleFade,Z_Param_AmpFade);
	P_NATIVE_END;
}
// End Class UPerlin_NoiseBPLibrary Function TwoD_Perlin_Fractal

// Begin Class UPerlin_NoiseBPLibrary Function TwoD_Perlin_Noise
struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics
{
	struct Perlin_NoiseBPLibrary_eventTwoD_Perlin_Noise_Parms
	{
		float x;
		float y;
		float scale;
		float amplitude;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perlin_Noise" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_scale", "1.000000" },
		{ "DisplayName", "2D Perlin Noise" },
		{ "Keywords", "Two 2D Perlin_Noise perlin noise Perlin Noise" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sample 2D perlin noise at the given X,Y coordinate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_scale_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_amplitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Noise_Parms, x), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_x_MetaData), NewProp_x_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Noise_Parms, y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_y_MetaData), NewProp_y_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Noise_Parms, scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_scale_MetaData), NewProp_scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Noise_Parms, amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_amplitude_MetaData), NewProp_amplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Noise_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "TwoD_Perlin_Noise", nullptr, nullptr, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::Perlin_NoiseBPLibrary_eventTwoD_Perlin_Noise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::Perlin_NoiseBPLibrary_eventTwoD_Perlin_Noise_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execTwoD_Perlin_Noise)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UPerlin_NoiseBPLibrary::TwoD_Perlin_Noise(Z_Param_x,Z_Param_y,Z_Param_scale,Z_Param_amplitude);
	P_NATIVE_END;
}
// End Class UPerlin_NoiseBPLibrary Function TwoD_Perlin_Noise

// Begin Class UPerlin_NoiseBPLibrary
void UPerlin_NoiseBPLibrary::StaticRegisterNativesUPerlin_NoiseBPLibrary()
{
	UClass* Class = UPerlin_NoiseBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FourD_Perlin_Fractal", &UPerlin_NoiseBPLibrary::execFourD_Perlin_Fractal },
		{ "FourD_Perlin_Noise", &UPerlin_NoiseBPLibrary::execFourD_Perlin_Noise },
		{ "OneD_Perlin_Fractal", &UPerlin_NoiseBPLibrary::execOneD_Perlin_Fractal },
		{ "OneD_Perlin_Noise", &UPerlin_NoiseBPLibrary::execOneD_Perlin_Noise },
		{ "SetSeed", &UPerlin_NoiseBPLibrary::execSetSeed },
		{ "ThreeD_Perlin_Fractal", &UPerlin_NoiseBPLibrary::execThreeD_Perlin_Fractal },
		{ "ThreeD_Perlin_Noise", &UPerlin_NoiseBPLibrary::execThreeD_Perlin_Noise },
		{ "TwoD_Perlin_Fractal", &UPerlin_NoiseBPLibrary::execTwoD_Perlin_Fractal },
		{ "TwoD_Perlin_Noise", &UPerlin_NoiseBPLibrary::execTwoD_Perlin_Noise },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPerlin_NoiseBPLibrary);
UClass* Z_Construct_UClass_UPerlin_NoiseBPLibrary_NoRegister()
{
	return UPerlin_NoiseBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09@author Alex R.\n\x09@published 2021\n*/" },
#endif
		{ "IncludePath", "Perlin_NoiseBPLibrary.h" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@author Alex R.\n@published 2021" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal, "FourD_Perlin_Fractal" }, // 3756892526
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise, "FourD_Perlin_Noise" }, // 2794154548
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal, "OneD_Perlin_Fractal" }, // 2655206401
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise, "OneD_Perlin_Noise" }, // 3981496351
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed, "SetSeed" }, // 402583299
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal, "ThreeD_Perlin_Fractal" }, // 2908561143
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise, "ThreeD_Perlin_Noise" }, // 1712791631
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal, "TwoD_Perlin_Fractal" }, // 2155962867
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise, "TwoD_Perlin_Noise" }, // 1823174569
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerlin_NoiseBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Perlin_Noise,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics::ClassParams = {
	&UPerlin_NoiseBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPerlin_NoiseBPLibrary()
{
	if (!Z_Registration_Info_UClass_UPerlin_NoiseBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPerlin_NoiseBPLibrary.OuterSingleton, Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPerlin_NoiseBPLibrary.OuterSingleton;
}
template<> PERLIN_NOISE_API UClass* StaticClass<UPerlin_NoiseBPLibrary>()
{
	return UPerlin_NoiseBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPerlin_NoiseBPLibrary);
UPerlin_NoiseBPLibrary::~UPerlin_NoiseBPLibrary() {}
// End Class UPerlin_NoiseBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_PreGameJamProject_Plugins_PerlinNoise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPerlin_NoiseBPLibrary, UPerlin_NoiseBPLibrary::StaticClass, TEXT("UPerlin_NoiseBPLibrary"), &Z_Registration_Info_UClass_UPerlin_NoiseBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPerlin_NoiseBPLibrary), 291802620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PreGameJamProject_Plugins_PerlinNoise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_2476960316(TEXT("/Script/Perlin_Noise"),
	Z_CompiledInDeferFile_FID_PreGameJamProject_Plugins_PerlinNoise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PreGameJamProject_Plugins_PerlinNoise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
