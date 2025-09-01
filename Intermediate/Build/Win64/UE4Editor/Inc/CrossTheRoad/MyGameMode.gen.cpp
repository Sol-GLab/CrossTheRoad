// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossTheRoad/Public/MyGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameMode() {}
// Cross Module References
	CROSSTHEROAD_API UClass* Z_Construct_UClass_AMyGameMode_NoRegister();
	CROSSTHEROAD_API UClass* Z_Construct_UClass_AMyGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CrossTheRoad();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CROSSTHEROAD_API UClass* Z_Construct_UClass_UGameOverWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyGameMode::execGameOverScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GameOverScreen();
		P_NATIVE_END;
	}
	void AMyGameMode::StaticRegisterNativesAMyGameMode()
	{
		UClass* Class = AMyGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GameOverScreen", &AMyGameMode::execGameOverScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyGameMode_GameOverScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameMode_GameOverScreen_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Widget fucntion\n" },
		{ "ModuleRelativePath", "Public/MyGameMode.h" },
		{ "ToolTip", "Widget fucntion" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameMode_GameOverScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameMode, nullptr, "GameOverScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameMode_GameOverScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameMode_GameOverScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameMode_GameOverScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyGameMode_GameOverScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyGameMode_NoRegister()
	{
		return AMyGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameOverWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameOverWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CrossTheRoad,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyGameMode_GameOverScreen, "GameOverScreen" }, // 686807764
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyGameMode.h" },
		{ "ModuleRelativePath", "Public/MyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameMode_Statics::NewProp_GameOverWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "// Game over widget\n" },
		{ "ModuleRelativePath", "Public/MyGameMode.h" },
		{ "ToolTip", "Game over widget" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyGameMode_Statics::NewProp_GameOverWidgetClass = { "GameOverWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameMode, GameOverWidgetClass), Z_Construct_UClass_UGameOverWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyGameMode_Statics::NewProp_GameOverWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::NewProp_GameOverWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameMode_Statics::NewProp_GameOverWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyGameMode_Statics::ClassParams = {
		&AMyGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyGameMode, 2921146379);
	template<> CROSSTHEROAD_API UClass* StaticClass<AMyGameMode>()
	{
		return AMyGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyGameMode(Z_Construct_UClass_AMyGameMode, &AMyGameMode::StaticClass, TEXT("/Script/CrossTheRoad"), TEXT("AMyGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
