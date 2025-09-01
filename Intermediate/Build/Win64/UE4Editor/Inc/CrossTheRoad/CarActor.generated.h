// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
struct FVector;
#ifdef CROSSTHEROAD_CarActor_generated_h
#error "CarActor.generated.h already included, missing '#pragma once' in CarActor.h"
#endif
#define CROSSTHEROAD_CarActor_generated_h

#define test_Source_CrossTheRoad_Public_CarActor_h_14_SPARSE_DATA
#define test_Source_CrossTheRoad_Public_CarActor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayerOverlap); \
	DECLARE_FUNCTION(execSetEndPoint);


#define test_Source_CrossTheRoad_Public_CarActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayerOverlap); \
	DECLARE_FUNCTION(execSetEndPoint);


#define test_Source_CrossTheRoad_Public_CarActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACarActor(); \
	friend struct Z_Construct_UClass_ACarActor_Statics; \
public: \
	DECLARE_CLASS(ACarActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(ACarActor)


#define test_Source_CrossTheRoad_Public_CarActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACarActor(); \
	friend struct Z_Construct_UClass_ACarActor_Statics; \
public: \
	DECLARE_CLASS(ACarActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(ACarActor)


#define test_Source_CrossTheRoad_Public_CarActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACarActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACarActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarActor(ACarActor&&); \
	NO_API ACarActor(const ACarActor&); \
public:


#define test_Source_CrossTheRoad_Public_CarActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarActor(ACarActor&&); \
	NO_API ACarActor(const ACarActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACarActor)


#define test_Source_CrossTheRoad_Public_CarActor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CarMesh() { return STRUCT_OFFSET(ACarActor, CarMesh); } \
	FORCEINLINE static uint32 __PPO__CollisionBox() { return STRUCT_OFFSET(ACarActor, CollisionBox); } \
	FORCEINLINE static uint32 __PPO__EndPoint() { return STRUCT_OFFSET(ACarActor, EndPoint); } \
	FORCEINLINE static uint32 __PPO__HasPoint() { return STRUCT_OFFSET(ACarActor, HasPoint); }


#define test_Source_CrossTheRoad_Public_CarActor_h_11_PROLOG
#define test_Source_CrossTheRoad_Public_CarActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	test_Source_CrossTheRoad_Public_CarActor_h_14_PRIVATE_PROPERTY_OFFSET \
	test_Source_CrossTheRoad_Public_CarActor_h_14_SPARSE_DATA \
	test_Source_CrossTheRoad_Public_CarActor_h_14_RPC_WRAPPERS \
	test_Source_CrossTheRoad_Public_CarActor_h_14_INCLASS \
	test_Source_CrossTheRoad_Public_CarActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define test_Source_CrossTheRoad_Public_CarActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	test_Source_CrossTheRoad_Public_CarActor_h_14_PRIVATE_PROPERTY_OFFSET \
	test_Source_CrossTheRoad_Public_CarActor_h_14_SPARSE_DATA \
	test_Source_CrossTheRoad_Public_CarActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	test_Source_CrossTheRoad_Public_CarActor_h_14_INCLASS_NO_PURE_DECLS \
	test_Source_CrossTheRoad_Public_CarActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSTHEROAD_API UClass* StaticClass<class ACarActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID test_Source_CrossTheRoad_Public_CarActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
