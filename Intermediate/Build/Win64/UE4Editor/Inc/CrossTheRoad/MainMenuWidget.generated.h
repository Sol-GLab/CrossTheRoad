// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CROSSTHEROAD_MainMenuWidget_generated_h
#error "MainMenuWidget.generated.h already included, missing '#pragma once' in MainMenuWidget.h"
#endif
#define CROSSTHEROAD_MainMenuWidget_generated_h

#define test_Source_CrossTheRoad_Public_MainMenuWidget_h_12_SPARSE_DATA
#define test_Source_CrossTheRoad_Public_MainMenuWidget_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQuitGameClick); \
	DECLARE_FUNCTION(execGameStartClick);


#define test_Source_CrossTheRoad_Public_MainMenuWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQuitGameClick); \
	DECLARE_FUNCTION(execGameStartClick);


#define test_Source_CrossTheRoad_Public_MainMenuWidget_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenuWidget(); \
	friend struct Z_Construct_UClass_UMainMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMainMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuWidget)


#define test_Source_CrossTheRoad_Public_MainMenuWidget_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUMainMenuWidget(); \
	friend struct Z_Construct_UClass_UMainMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMainMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuWidget)


#define test_Source_CrossTheRoad_Public_MainMenuWidget_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuWidget(UMainMenuWidget&&); \
	NO_API UMainMenuWidget(const UMainMenuWidget&); \
public:


#define test_Source_CrossTheRoad_Public_MainMenuWidget_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuWidget(UMainMenuWidget&&); \
	NO_API UMainMenuWidget(const UMainMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuWidget)


#define test_Source_CrossTheRoad_Public_MainMenuWidget_h_12_PRIVATE_PROPERTY_OFFSET
#define test_Source_CrossTheRoad_Public_MainMenuWidget_h_9_PROLOG
#define test_Source_CrossTheRoad_Public_MainMenuWidget_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	test_Source_CrossTheRoad_Public_MainMenuWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	test_Source_CrossTheRoad_Public_MainMenuWidget_h_12_SPARSE_DATA \
	test_Source_CrossTheRoad_Public_MainMenuWidget_h_12_RPC_WRAPPERS \
	test_Source_CrossTheRoad_Public_MainMenuWidget_h_12_INCLASS \
	test_Source_CrossTheRoad_Public_MainMenuWidget_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define test_Source_CrossTheRoad_Public_MainMenuWidget_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	test_Source_CrossTheRoad_Public_MainMenuWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	test_Source_CrossTheRoad_Public_MainMenuWidget_h_12_SPARSE_DATA \
	test_Source_CrossTheRoad_Public_MainMenuWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	test_Source_CrossTheRoad_Public_MainMenuWidget_h_12_INCLASS_NO_PURE_DECLS \
	test_Source_CrossTheRoad_Public_MainMenuWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSTHEROAD_API UClass* StaticClass<class UMainMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID test_Source_CrossTheRoad_Public_MainMenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
