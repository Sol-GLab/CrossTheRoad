// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossTheRoad/CrossTheRoadGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrossTheRoadGameModeBase() {}
// Cross Module References
	CROSSTHEROAD_API UClass* Z_Construct_UClass_ACrossTheRoadGameModeBase_NoRegister();
	CROSSTHEROAD_API UClass* Z_Construct_UClass_ACrossTheRoadGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CrossTheRoad();
// End Cross Module References
	void ACrossTheRoadGameModeBase::StaticRegisterNativesACrossTheRoadGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACrossTheRoadGameModeBase_NoRegister()
	{
		return ACrossTheRoadGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACrossTheRoadGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrossTheRoadGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CrossTheRoad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrossTheRoadGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CrossTheRoadGameModeBase.h" },
		{ "ModuleRelativePath", "CrossTheRoadGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrossTheRoadGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrossTheRoadGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrossTheRoadGameModeBase_Statics::ClassParams = {
		&ACrossTheRoadGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACrossTheRoadGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrossTheRoadGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrossTheRoadGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrossTheRoadGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrossTheRoadGameModeBase, 2901227618);
	template<> CROSSTHEROAD_API UClass* StaticClass<ACrossTheRoadGameModeBase>()
	{
		return ACrossTheRoadGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrossTheRoadGameModeBase(Z_Construct_UClass_ACrossTheRoadGameModeBase, &ACrossTheRoadGameModeBase::StaticClass, TEXT("/Script/CrossTheRoad"), TEXT("ACrossTheRoadGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrossTheRoadGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
