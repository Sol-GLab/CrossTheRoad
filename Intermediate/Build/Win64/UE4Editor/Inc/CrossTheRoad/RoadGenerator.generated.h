// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CROSSTHEROAD_RoadGenerator_generated_h
#error "RoadGenerator.generated.h already included, missing '#pragma once' in RoadGenerator.h"
#endif
#define CROSSTHEROAD_RoadGenerator_generated_h

#define ggwp_Source_CrossTheRoad_Public_RoadGenerator_h_15_SPARSE_DATA
#define ggwp_Source_CrossTheRoad_Public_RoadGenerator_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRoadsGenerator);


#define ggwp_Source_CrossTheRoad_Public_RoadGenerator_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRoadsGenerator);


#define ggwp_Source_CrossTheRoad_Public_RoadGenerator_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARoadGenerator(); \
	friend struct Z_Construct_UClass_ARoadGenerator_Statics; \
public: \
	DECLARE_CLASS(ARoadGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(ARoadGenerator)


#define ggwp_Source_CrossTheRoad_Public_RoadGenerator_h_15_INCLASS \
private: \
	static void StaticRegisterNativesARoadGenerator(); \
	friend struct Z_Construct_UClass_ARoadGenerator_Statics; \
public: \
	DECLARE_CLASS(ARoadGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(ARoadGenerator)


#define ggwp_Source_CrossTheRoad_Public_RoadGenerator_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARoadGenerator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARoadGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoadGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoadGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARoadGenerator(ARoadGenerator&&); \
	NO_API ARoadGenerator(const ARoadGenerator&); \
public:


#define ggwp_Source_CrossTheRoad_Public_RoadGenerator_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARoadGenerator(ARoadGenerator&&); \
	NO_API ARoadGenerator(const ARoadGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoadGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoadGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARoadGenerator)


#define ggwp_Source_CrossTheRoad_Public_RoadGenerator_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NumberOfRoads() { return STRUCT_OFFSET(ARoadGenerator, NumberOfRoads); } \
	FORCEINLINE static uint32 __PPO__Distance() { return STRUCT_OFFSET(ARoadGenerator, Distance); } \
	FORCEINLINE static uint32 __PPO__Direction() { return STRUCT_OFFSET(ARoadGenerator, Direction); } \
	FORCEINLINE static uint32 __PPO__RoadCount() { return STRUCT_OFFSET(ARoadGenerator, RoadCount); } \
	FORCEINLINE static uint32 __PPO__SafeRoadCount() { return STRUCT_OFFSET(ARoadGenerator, SafeRoadCount); }


#define ggwp_Source_CrossTheRoad_Public_RoadGenerator_h_12_PROLOG
#define ggwp_Source_CrossTheRoad_Public_RoadGenerator_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ggwp_Source_CrossTheRoad_Public_RoadGenerator_h_15_PRIVATE_PROPERTY_OFFSET \
	ggwp_Source_CrossTheRoad_Public_RoadGenerator_h_15_SPARSE_DATA \
	ggwp_Source_CrossTheRoad_Public_RoadGenerator_h_15_RPC_WRAPPERS \
	ggwp_Source_CrossTheRoad_Public_RoadGenerator_h_15_INCLASS \
	ggwp_Source_CrossTheRoad_Public_RoadGenerator_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ggwp_Source_CrossTheRoad_Public_RoadGenerator_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ggwp_Source_CrossTheRoad_Public_RoadGenerator_h_15_PRIVATE_PROPERTY_OFFSET \
	ggwp_Source_CrossTheRoad_Public_RoadGenerator_h_15_SPARSE_DATA \
	ggwp_Source_CrossTheRoad_Public_RoadGenerator_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ggwp_Source_CrossTheRoad_Public_RoadGenerator_h_15_INCLASS_NO_PURE_DECLS \
	ggwp_Source_CrossTheRoad_Public_RoadGenerator_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSTHEROAD_API UClass* StaticClass<class ARoadGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ggwp_Source_CrossTheRoad_Public_RoadGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
