// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossTheRoad/Public/PauseWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePauseWidget() {}
// Cross Module References
	CROSSTHEROAD_API UClass* Z_Construct_UClass_UPauseWidget_NoRegister();
	CROSSTHEROAD_API UClass* Z_Construct_UClass_UPauseWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CrossTheRoad();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPauseWidget::execQuitGameClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuitGameClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPauseWidget::execMainMenuClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MainMenuClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPauseWidget::execGameResumeClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GameResumeClick();
		P_NATIVE_END;
	}
	void UPauseWidget::StaticRegisterNativesUPauseWidget()
	{
		UClass* Class = UPauseWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GameResumeClick", &UPauseWidget::execGameResumeClick },
			{ "MainMenuClick", &UPauseWidget::execMainMenuClick },
			{ "QuitGameClick", &UPauseWidget::execQuitGameClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPauseWidget_GameResumeClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPauseWidget_GameResumeClick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Button click functions\n" },
		{ "ModuleRelativePath", "Public/PauseWidget.h" },
		{ "ToolTip", "Button click functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseWidget_GameResumeClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseWidget, nullptr, "GameResumeClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPauseWidget_GameResumeClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseWidget_GameResumeClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPauseWidget_GameResumeClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPauseWidget_GameResumeClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPauseWidget_MainMenuClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPauseWidget_MainMenuClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PauseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseWidget_MainMenuClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseWidget, nullptr, "MainMenuClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPauseWidget_MainMenuClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseWidget_MainMenuClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPauseWidget_MainMenuClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPauseWidget_MainMenuClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPauseWidget_QuitGameClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPauseWidget_QuitGameClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PauseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseWidget_QuitGameClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseWidget, nullptr, "QuitGameClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPauseWidget_QuitGameClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseWidget_QuitGameClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPauseWidget_QuitGameClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPauseWidget_QuitGameClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPauseWidget_NoRegister()
	{
		return UPauseWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPauseWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResumeButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResumeButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainMenuButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuitButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPauseWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CrossTheRoad,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPauseWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPauseWidget_GameResumeClick, "GameResumeClick" }, // 4269778741
		{ &Z_Construct_UFunction_UPauseWidget_MainMenuClick, "MainMenuClick" }, // 4069952811
		{ &Z_Construct_UFunction_UPauseWidget_QuitGameClick, "QuitGameClick" }, // 1175665733
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PauseWidget.h" },
		{ "ModuleRelativePath", "Public/PauseWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseWidget_Statics::NewProp_ResumeButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "//Buttons\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PauseWidget.h" },
		{ "ToolTip", "Buttons" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseWidget_Statics::NewProp_ResumeButton = { "ResumeButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPauseWidget, ResumeButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPauseWidget_Statics::NewProp_ResumeButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPauseWidget_Statics::NewProp_ResumeButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseWidget_Statics::NewProp_MainMenuButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PauseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseWidget_Statics::NewProp_MainMenuButton = { "MainMenuButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPauseWidget, MainMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPauseWidget_Statics::NewProp_MainMenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPauseWidget_Statics::NewProp_MainMenuButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseWidget_Statics::NewProp_QuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PauseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseWidget_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPauseWidget, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPauseWidget_Statics::NewProp_QuitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPauseWidget_Statics::NewProp_QuitButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPauseWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseWidget_Statics::NewProp_ResumeButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseWidget_Statics::NewProp_MainMenuButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseWidget_Statics::NewProp_QuitButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPauseWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPauseWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPauseWidget_Statics::ClassParams = {
		&UPauseWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPauseWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPauseWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPauseWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPauseWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPauseWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPauseWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPauseWidget, 2868361927);
	template<> CROSSTHEROAD_API UClass* StaticClass<UPauseWidget>()
	{
		return UPauseWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPauseWidget(Z_Construct_UClass_UPauseWidget, &UPauseWidget::StaticClass, TEXT("/Script/CrossTheRoad"), TEXT("UPauseWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPauseWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
