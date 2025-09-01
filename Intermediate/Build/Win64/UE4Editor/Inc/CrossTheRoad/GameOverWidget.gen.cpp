// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossTheRoad/Public/GameOverWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameOverWidget() {}
// Cross Module References
	CROSSTHEROAD_API UClass* Z_Construct_UClass_UGameOverWidget_NoRegister();
	CROSSTHEROAD_API UClass* Z_Construct_UClass_UGameOverWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CrossTheRoad();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGameOverWidget::execQuitGameClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuitGameClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameOverWidget::execMainMenuClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MainMenuClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameOverWidget::execGameRestartClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GameRestartClick();
		P_NATIVE_END;
	}
	void UGameOverWidget::StaticRegisterNativesUGameOverWidget()
	{
		UClass* Class = UGameOverWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GameRestartClick", &UGameOverWidget::execGameRestartClick },
			{ "MainMenuClick", &UGameOverWidget::execMainMenuClick },
			{ "QuitGameClick", &UGameOverWidget::execQuitGameClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameOverWidget_GameRestartClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameOverWidget_GameRestartClick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Button click functions\n" },
		{ "ModuleRelativePath", "Public/GameOverWidget.h" },
		{ "ToolTip", "Button click functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameOverWidget_GameRestartClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameOverWidget, nullptr, "GameRestartClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameOverWidget_GameRestartClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameOverWidget_GameRestartClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameOverWidget_GameRestartClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameOverWidget_GameRestartClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameOverWidget_MainMenuClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameOverWidget_MainMenuClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameOverWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameOverWidget_MainMenuClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameOverWidget, nullptr, "MainMenuClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameOverWidget_MainMenuClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameOverWidget_MainMenuClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameOverWidget_MainMenuClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameOverWidget_MainMenuClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameOverWidget_QuitGameClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameOverWidget_QuitGameClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameOverWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameOverWidget_QuitGameClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameOverWidget, nullptr, "QuitGameClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameOverWidget_QuitGameClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameOverWidget_QuitGameClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameOverWidget_QuitGameClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameOverWidget_QuitGameClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameOverWidget_NoRegister()
	{
		return UGameOverWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGameOverWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestartButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RestartButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainMenuButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuitButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalScoreBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TotalScoreBlock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameOverWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CrossTheRoad,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameOverWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameOverWidget_GameRestartClick, "GameRestartClick" }, // 867186631
		{ &Z_Construct_UFunction_UGameOverWidget_MainMenuClick, "MainMenuClick" }, // 4268275477
		{ &Z_Construct_UFunction_UGameOverWidget_QuitGameClick, "QuitGameClick" }, // 1407908426
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameOverWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameOverWidget.h" },
		{ "ModuleRelativePath", "Public/GameOverWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameOverWidget_Statics::NewProp_RestartButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "//Buttons\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameOverWidget.h" },
		{ "ToolTip", "Buttons" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameOverWidget_Statics::NewProp_RestartButton = { "RestartButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameOverWidget, RestartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameOverWidget_Statics::NewProp_RestartButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverWidget_Statics::NewProp_RestartButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameOverWidget_Statics::NewProp_MainMenuButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameOverWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameOverWidget_Statics::NewProp_MainMenuButton = { "MainMenuButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameOverWidget, MainMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameOverWidget_Statics::NewProp_MainMenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverWidget_Statics::NewProp_MainMenuButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameOverWidget_Statics::NewProp_QuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameOverWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameOverWidget_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameOverWidget, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameOverWidget_Statics::NewProp_QuitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverWidget_Statics::NewProp_QuitButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameOverWidget_Statics::NewProp_TotalScoreBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "// Total score display\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameOverWidget.h" },
		{ "ToolTip", "Total score display" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameOverWidget_Statics::NewProp_TotalScoreBlock = { "TotalScoreBlock", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameOverWidget, TotalScoreBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameOverWidget_Statics::NewProp_TotalScoreBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverWidget_Statics::NewProp_TotalScoreBlock_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameOverWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameOverWidget_Statics::NewProp_RestartButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameOverWidget_Statics::NewProp_MainMenuButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameOverWidget_Statics::NewProp_QuitButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameOverWidget_Statics::NewProp_TotalScoreBlock,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameOverWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameOverWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameOverWidget_Statics::ClassParams = {
		&UGameOverWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameOverWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameOverWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameOverWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameOverWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameOverWidget, 768288616);
	template<> CROSSTHEROAD_API UClass* StaticClass<UGameOverWidget>()
	{
		return UGameOverWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameOverWidget(Z_Construct_UClass_UGameOverWidget, &UGameOverWidget::StaticClass, TEXT("/Script/CrossTheRoad"), TEXT("UGameOverWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameOverWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
