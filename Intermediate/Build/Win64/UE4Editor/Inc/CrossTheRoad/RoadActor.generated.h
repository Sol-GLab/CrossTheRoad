// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CROSSTHEROAD_RoadActor_generated_h
#error "RoadActor.generated.h already included, missing '#pragma once' in RoadActor.h"
#endif
#define CROSSTHEROAD_RoadActor_generated_h

#define CrossTheRoad_main_Source_CrossTheRoad_Public_RoadActor_h_14_SPARSE_DATA
#define CrossTheRoad_main_Source_CrossTheRoad_Public_RoadActor_h_14_RPC_WRAPPERS
#define CrossTheRoad_main_Source_CrossTheRoad_Public_RoadActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define CrossTheRoad_main_Source_CrossTheRoad_Public_RoadActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARoadActor(); \
	friend struct Z_Construct_UClass_ARoadActor_Statics; \
public: \
	DECLARE_CLASS(ARoadActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(ARoadActor)


#define CrossTheRoad_main_Source_CrossTheRoad_Public_RoadActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesARoadActor(); \
	friend struct Z_Construct_UClass_ARoadActor_Statics; \
public: \
	DECLARE_CLASS(ARoadActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(ARoadActor)


#define CrossTheRoad_main_Source_CrossTheRoad_Public_RoadActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARoadActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARoadActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoadActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoadActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARoadActor(ARoadActor&&); \
	NO_API ARoadActor(const ARoadActor&); \
public:


#define CrossTheRoad_main_Source_CrossTheRoad_Public_RoadActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARoadActor(ARoadActor&&); \
	NO_API ARoadActor(const ARoadActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoadActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoadActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARoadActor)


#define CrossTheRoad_main_Source_CrossTheRoad_Public_RoadActor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RoadMesh() { return STRUCT_OFFSET(ARoadActor, RoadMesh); } \
	FORCEINLINE static uint32 __PPO__CollisionBox() { return STRUCT_OFFSET(ARoadActor, CollisionBox); }


#define CrossTheRoad_main_Source_CrossTheRoad_Public_RoadActor_h_11_PROLOG
#define CrossTheRoad_main_Source_CrossTheRoad_Public_RoadActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossTheRoad_main_Source_CrossTheRoad_Public_RoadActor_h_14_PRIVATE_PROPERTY_OFFSET \
	CrossTheRoad_main_Source_CrossTheRoad_Public_RoadActor_h_14_SPARSE_DATA \
	CrossTheRoad_main_Source_CrossTheRoad_Public_RoadActor_h_14_RPC_WRAPPERS \
	CrossTheRoad_main_Source_CrossTheRoad_Public_RoadActor_h_14_INCLASS \
	CrossTheRoad_main_Source_CrossTheRoad_Public_RoadActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CrossTheRoad_main_Source_CrossTheRoad_Public_RoadActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossTheRoad_main_Source_CrossTheRoad_Public_RoadActor_h_14_PRIVATE_PROPERTY_OFFSET \
	CrossTheRoad_main_Source_CrossTheRoad_Public_RoadActor_h_14_SPARSE_DATA \
	CrossTheRoad_main_Source_CrossTheRoad_Public_RoadActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CrossTheRoad_main_Source_CrossTheRoad_Public_RoadActor_h_14_INCLASS_NO_PURE_DECLS \
	CrossTheRoad_main_Source_CrossTheRoad_Public_RoadActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSTHEROAD_API UClass* StaticClass<class ARoadActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CrossTheRoad_main_Source_CrossTheRoad_Public_RoadActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
