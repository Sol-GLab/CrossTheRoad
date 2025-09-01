// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CROSSTHEROAD_GameOverWidget_generated_h
#error "GameOverWidget.generated.h already included, missing '#pragma once' in GameOverWidget.h"
#endif
#define CROSSTHEROAD_GameOverWidget_generated_h

#define test_Source_CrossTheRoad_Public_GameOverWidget_h_13_SPARSE_DATA
#define test_Source_CrossTheRoad_Public_GameOverWidget_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQuitGameClick); \
	DECLARE_FUNCTION(execMainMenuClick); \
	DECLARE_FUNCTION(execGameRestartClick);


#define test_Source_CrossTheRoad_Public_GameOverWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQuitGameClick); \
	DECLARE_FUNCTION(execMainMenuClick); \
	DECLARE_FUNCTION(execGameRestartClick);


#define test_Source_CrossTheRoad_Public_GameOverWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameOverWidget(); \
	friend struct Z_Construct_UClass_UGameOverWidget_Statics; \
public: \
	DECLARE_CLASS(UGameOverWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(UGameOverWidget)


#define test_Source_CrossTheRoad_Public_GameOverWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUGameOverWidget(); \
	friend struct Z_Construct_UClass_UGameOverWidget_Statics; \
public: \
	DECLARE_CLASS(UGameOverWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(UGameOverWidget)


#define test_Source_CrossTheRoad_Public_GameOverWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameOverWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameOverWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameOverWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameOverWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameOverWidget(UGameOverWidget&&); \
	NO_API UGameOverWidget(const UGameOverWidget&); \
public:


#define test_Source_CrossTheRoad_Public_GameOverWidget_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameOverWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameOverWidget(UGameOverWidget&&); \
	NO_API UGameOverWidget(const UGameOverWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameOverWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameOverWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameOverWidget)


#define test_Source_CrossTheRoad_Public_GameOverWidget_h_13_PRIVATE_PROPERTY_OFFSET
#define test_Source_CrossTheRoad_Public_GameOverWidget_h_10_PROLOG
#define test_Source_CrossTheRoad_Public_GameOverWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	test_Source_CrossTheRoad_Public_GameOverWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	test_Source_CrossTheRoad_Public_GameOverWidget_h_13_SPARSE_DATA \
	test_Source_CrossTheRoad_Public_GameOverWidget_h_13_RPC_WRAPPERS \
	test_Source_CrossTheRoad_Public_GameOverWidget_h_13_INCLASS \
	test_Source_CrossTheRoad_Public_GameOverWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define test_Source_CrossTheRoad_Public_GameOverWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	test_Source_CrossTheRoad_Public_GameOverWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	test_Source_CrossTheRoad_Public_GameOverWidget_h_13_SPARSE_DATA \
	test_Source_CrossTheRoad_Public_GameOverWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	test_Source_CrossTheRoad_Public_GameOverWidget_h_13_INCLASS_NO_PURE_DECLS \
	test_Source_CrossTheRoad_Public_GameOverWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSTHEROAD_API UClass* StaticClass<class UGameOverWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID test_Source_CrossTheRoad_Public_GameOverWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
