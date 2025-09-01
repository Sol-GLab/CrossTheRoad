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
#ifdef CROSSTHEROAD_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define CROSSTHEROAD_PlayerCharacter_generated_h

#define test_Source_CrossTheRoad_Public_PlayerCharacter_h_17_SPARSE_DATA
#define test_Source_CrossTheRoad_Public_PlayerCharacter_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRoadTouch); \
	DECLARE_FUNCTION(execMoveLeft); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define test_Source_CrossTheRoad_Public_PlayerCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRoadTouch); \
	DECLARE_FUNCTION(execMoveLeft); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define test_Source_CrossTheRoad_Public_PlayerCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define test_Source_CrossTheRoad_Public_PlayerCharacter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define test_Source_CrossTheRoad_Public_PlayerCharacter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define test_Source_CrossTheRoad_Public_PlayerCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define test_Source_CrossTheRoad_Public_PlayerCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Distance() { return STRUCT_OFFSET(APlayerCharacter, Distance); } \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(APlayerCharacter, Speed); } \
	FORCEINLINE static uint32 __PPO__EndLocation() { return STRUCT_OFFSET(APlayerCharacter, EndLocation); } \
	FORCEINLINE static uint32 __PPO__RotationSpeed() { return STRUCT_OFFSET(APlayerCharacter, RotationSpeed); } \
	FORCEINLINE static uint32 __PPO__RotationAxis() { return STRUCT_OFFSET(APlayerCharacter, RotationAxis); } \
	FORCEINLINE static uint32 __PPO__Angle() { return STRUCT_OFFSET(APlayerCharacter, Angle); } \
	FORCEINLINE static uint32 __PPO__PlayerMesh() { return STRUCT_OFFSET(APlayerCharacter, PlayerMesh); } \
	FORCEINLINE static uint32 __PPO__OverlapGeneration() { return STRUCT_OFFSET(APlayerCharacter, OverlapGeneration); }


#define test_Source_CrossTheRoad_Public_PlayerCharacter_h_14_PROLOG
#define test_Source_CrossTheRoad_Public_PlayerCharacter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	test_Source_CrossTheRoad_Public_PlayerCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	test_Source_CrossTheRoad_Public_PlayerCharacter_h_17_SPARSE_DATA \
	test_Source_CrossTheRoad_Public_PlayerCharacter_h_17_RPC_WRAPPERS \
	test_Source_CrossTheRoad_Public_PlayerCharacter_h_17_INCLASS \
	test_Source_CrossTheRoad_Public_PlayerCharacter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define test_Source_CrossTheRoad_Public_PlayerCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	test_Source_CrossTheRoad_Public_PlayerCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	test_Source_CrossTheRoad_Public_PlayerCharacter_h_17_SPARSE_DATA \
	test_Source_CrossTheRoad_Public_PlayerCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	test_Source_CrossTheRoad_Public_PlayerCharacter_h_17_INCLASS_NO_PURE_DECLS \
	test_Source_CrossTheRoad_Public_PlayerCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSTHEROAD_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID test_Source_CrossTheRoad_Public_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
