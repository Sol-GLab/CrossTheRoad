// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CROSSTHEROAD_MyGameInstance_generated_h
#error "MyGameInstance.generated.h already included, missing '#pragma once' in MyGameInstance.h"
#endif
#define CROSSTHEROAD_MyGameInstance_generated_h

#define test_Source_CrossTheRoad_Public_MyGameInstance_h_10_SPARSE_DATA
#define test_Source_CrossTheRoad_Public_MyGameInstance_h_10_RPC_WRAPPERS
#define test_Source_CrossTheRoad_Public_MyGameInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define test_Source_CrossTheRoad_Public_MyGameInstance_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend struct Z_Construct_UClass_UMyGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance)


#define test_Source_CrossTheRoad_Public_MyGameInstance_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend struct Z_Construct_UClass_UMyGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance)


#define test_Source_CrossTheRoad_Public_MyGameInstance_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public:


#define test_Source_CrossTheRoad_Public_MyGameInstance_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyGameInstance)


#define test_Source_CrossTheRoad_Public_MyGameInstance_h_10_PRIVATE_PROPERTY_OFFSET
#define test_Source_CrossTheRoad_Public_MyGameInstance_h_7_PROLOG
#define test_Source_CrossTheRoad_Public_MyGameInstance_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	test_Source_CrossTheRoad_Public_MyGameInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	test_Source_CrossTheRoad_Public_MyGameInstance_h_10_SPARSE_DATA \
	test_Source_CrossTheRoad_Public_MyGameInstance_h_10_RPC_WRAPPERS \
	test_Source_CrossTheRoad_Public_MyGameInstance_h_10_INCLASS \
	test_Source_CrossTheRoad_Public_MyGameInstance_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define test_Source_CrossTheRoad_Public_MyGameInstance_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	test_Source_CrossTheRoad_Public_MyGameInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	test_Source_CrossTheRoad_Public_MyGameInstance_h_10_SPARSE_DATA \
	test_Source_CrossTheRoad_Public_MyGameInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	test_Source_CrossTheRoad_Public_MyGameInstance_h_10_INCLASS_NO_PURE_DECLS \
	test_Source_CrossTheRoad_Public_MyGameInstance_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSTHEROAD_API UClass* StaticClass<class UMyGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID test_Source_CrossTheRoad_Public_MyGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
