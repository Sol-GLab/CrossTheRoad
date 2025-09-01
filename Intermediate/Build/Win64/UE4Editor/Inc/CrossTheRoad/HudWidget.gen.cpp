// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossTheRoad/Public/HudWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudWidget() {}
// Cross Module References
	CROSSTHEROAD_API UClass* Z_Construct_UClass_UHudWidget_NoRegister();
	CROSSTHEROAD_API UClass* Z_Construct_UClass_UHudWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CrossTheRoad();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UHudWidget::StaticRegisterNativesUHudWidget()
	{
	}
	UClass* Z_Construct_UClass_UHudWidget_NoRegister()
	{
		return UHudWidget::StaticClass();
	}
	struct Z_Construct_UClass_UHudWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalScoreBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TotalScoreBlock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHudWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CrossTheRoad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HudWidget.h" },
		{ "ModuleRelativePath", "Public/HudWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudWidget_Statics::NewProp_TotalScoreBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "// Score text block\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HudWidget.h" },
		{ "ToolTip", "Score text block" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudWidget_Statics::NewProp_TotalScoreBlock = { "TotalScoreBlock", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudWidget, TotalScoreBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHudWidget_Statics::NewProp_TotalScoreBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudWidget_Statics::NewProp_TotalScoreBlock_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHudWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudWidget_Statics::NewProp_TotalScoreBlock,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHudWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHudWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHudWidget_Statics::ClassParams = {
		&UHudWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHudWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHudWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHudWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHudWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHudWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHudWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudWidget, 3135894669);
	template<> CROSSTHEROAD_API UClass* StaticClass<UHudWidget>()
	{
		return UHudWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudWidget(Z_Construct_UClass_UHudWidget, &UHudWidget::StaticClass, TEXT("/Script/CrossTheRoad"), TEXT("UHudWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
