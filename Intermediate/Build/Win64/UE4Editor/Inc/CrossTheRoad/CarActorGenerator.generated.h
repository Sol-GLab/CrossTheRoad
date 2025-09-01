// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ARoadActor;
#ifdef CROSSTHEROAD_CarActorGenerator_generated_h
#error "CarActorGenerator.generated.h already included, missing '#pragma once' in CarActorGenerator.h"
#endif
#define CROSSTHEROAD_CarActorGenerator_generated_h

#define CrossTheRoad_main_Source_CrossTheRoad_Public_CarActorGenerator_h_15_SPARSE_DATA
#define CrossTheRoad_main_Source_CrossTheRoad_Public_CarActorGenerator_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitialSpawnCars);


#define CrossTheRoad_main_Source_CrossTheRoad_Public_CarActorGenerator_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitialSpawnCars);


#define CrossTheRoad_main_Source_CrossTheRoad_Public_CarActorGenerator_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACarActorGenerator(); \
	friend struct Z_Construct_UClass_ACarActorGenerator_Statics; \
public: \
	DECLARE_CLASS(ACarActorGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(ACarActorGenerator)


#define CrossTheRoad_main_Source_CrossTheRoad_Public_CarActorGenerator_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACarActorGenerator(); \
	friend struct Z_Construct_UClass_ACarActorGenerator_Statics; \
public: \
	DECLARE_CLASS(ACarActorGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(ACarActorGenerator)


#define CrossTheRoad_main_Source_CrossTheRoad_Public_CarActorGenerator_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACarActorGenerator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACarActorGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarActorGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarActorGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarActorGenerator(ACarActorGenerator&&); \
	NO_API ACarActorGenerator(const ACarActorGenerator&); \
public:


#define CrossTheRoad_main_Source_CrossTheRoad_Public_CarActorGenerator_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarActorGenerator(ACarActorGenerator&&); \
	NO_API ACarActorGenerator(const ACarActorGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarActorGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarActorGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACarActorGenerator)


#define CrossTheRoad_main_Source_CrossTheRoad_Public_CarActorGenerator_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Car() { return STRUCT_OFFSET(ACarActorGenerator, Car); } \
	FORCEINLINE static uint32 __PPO__RoadNumber() { return STRUCT_OFFSET(ACarActorGenerator, RoadNumber); } \
	FORCEINLINE static uint32 __PPO__MinTime() { return STRUCT_OFFSET(ACarActorGenerator, MinTime); } \
	FORCEINLINE static uint32 __PPO__MaxTime() { return STRUCT_OFFSET(ACarActorGenerator, MaxTime); } \
	FORCEINLINE static uint32 __PPO__CarLength() { return STRUCT_OFFSET(ACarActorGenerator, CarLength); } \
	FORCEINLINE static uint32 __PPO__MaxDistance() { return STRUCT_OFFSET(ACarActorGenerator, MaxDistance); } \
	FORCEINLINE static uint32 __PPO__LastSpawn() { return STRUCT_OFFSET(ACarActorGenerator, LastSpawn); }


#define CrossTheRoad_main_Source_CrossTheRoad_Public_CarActorGenerator_h_11_PROLOG
#define CrossTheRoad_main_Source_CrossTheRoad_Public_CarActorGenerator_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossTheRoad_main_Source_CrossTheRoad_Public_CarActorGenerator_h_15_PRIVATE_PROPERTY_OFFSET \
	CrossTheRoad_main_Source_CrossTheRoad_Public_CarActorGenerator_h_15_SPARSE_DATA \
	CrossTheRoad_main_Source_CrossTheRoad_Public_CarActorGenerator_h_15_RPC_WRAPPERS \
	CrossTheRoad_main_Source_CrossTheRoad_Public_CarActorGenerator_h_15_INCLASS \
	CrossTheRoad_main_Source_CrossTheRoad_Public_CarActorGenerator_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CrossTheRoad_main_Source_CrossTheRoad_Public_CarActorGenerator_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossTheRoad_main_Source_CrossTheRoad_Public_CarActorGenerator_h_15_PRIVATE_PROPERTY_OFFSET \
	CrossTheRoad_main_Source_CrossTheRoad_Public_CarActorGenerator_h_15_SPARSE_DATA \
	CrossTheRoad_main_Source_CrossTheRoad_Public_CarActorGenerator_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CrossTheRoad_main_Source_CrossTheRoad_Public_CarActorGenerator_h_15_INCLASS_NO_PURE_DECLS \
	CrossTheRoad_main_Source_CrossTheRoad_Public_CarActorGenerator_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSTHEROAD_API UClass* StaticClass<class ACarActorGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CrossTheRoad_main_Source_CrossTheRoad_Public_CarActorGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
