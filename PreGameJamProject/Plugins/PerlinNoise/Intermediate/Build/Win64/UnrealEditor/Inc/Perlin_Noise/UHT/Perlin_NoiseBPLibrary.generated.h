// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perlin_NoiseBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PERLIN_NOISE_Perlin_NoiseBPLibrary_generated_h
#error "Perlin_NoiseBPLibrary.generated.h already included, missing '#pragma once' in Perlin_NoiseBPLibrary.h"
#endif
#define PERLIN_NOISE_Perlin_NoiseBPLibrary_generated_h

#define FID_PreGameJamProject_Plugins_PerlinNoise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_34_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetSeed); \
	DECLARE_FUNCTION(execFourD_Perlin_Fractal); \
	DECLARE_FUNCTION(execThreeD_Perlin_Fractal); \
	DECLARE_FUNCTION(execTwoD_Perlin_Fractal); \
	DECLARE_FUNCTION(execOneD_Perlin_Fractal); \
	DECLARE_FUNCTION(execFourD_Perlin_Noise); \
	DECLARE_FUNCTION(execThreeD_Perlin_Noise); \
	DECLARE_FUNCTION(execTwoD_Perlin_Noise); \
	DECLARE_FUNCTION(execOneD_Perlin_Noise);


#define FID_PreGameJamProject_Plugins_PerlinNoise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUPerlin_NoiseBPLibrary(); \
	friend struct Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UPerlin_NoiseBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Perlin_Noise"), NO_API) \
	DECLARE_SERIALIZER(UPerlin_NoiseBPLibrary)


#define FID_PreGameJamProject_Plugins_PerlinNoise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPerlin_NoiseBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPerlin_NoiseBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerlin_NoiseBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerlin_NoiseBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPerlin_NoiseBPLibrary(UPerlin_NoiseBPLibrary&&); \
	UPerlin_NoiseBPLibrary(const UPerlin_NoiseBPLibrary&); \
public: \
	NO_API virtual ~UPerlin_NoiseBPLibrary();


#define FID_PreGameJamProject_Plugins_PerlinNoise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_31_PROLOG
#define FID_PreGameJamProject_Plugins_PerlinNoise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PreGameJamProject_Plugins_PerlinNoise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_34_RPC_WRAPPERS \
	FID_PreGameJamProject_Plugins_PerlinNoise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_34_INCLASS \
	FID_PreGameJamProject_Plugins_PerlinNoise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PERLIN_NOISE_API UClass* StaticClass<class UPerlin_NoiseBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PreGameJamProject_Plugins_PerlinNoise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
