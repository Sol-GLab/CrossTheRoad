// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossTheRoad/Public/SafeRoadActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSafeRoadActor() {}
// Cross Module References
	CROSSTHEROAD_API UClass* Z_Construct_UClass_ASafeRoadActor_NoRegister();
	CROSSTHEROAD_API UClass* Z_Construct_UClass_ASafeRoadActor();
	CROSSTHEROAD_API UClass* Z_Construct_UClass_ARoadActor();
	UPackage* Z_Construct_UPackage__Script_CrossTheRoad();
// End Cross Module References
	void ASafeRoadActor::StaticRegisterNativesASafeRoadActor()
	{
	}
	UClass* Z_Construct_UClass_ASafeRoadActor_NoRegister()
	{
		return ASafeRoadActor::StaticClass();
	}
	struct Z_Construct_UClass_ASafeRoadActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASafeRoadActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARoadActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CrossTheRoad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASafeRoadActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SafeRoadActor.h" },
		{ "ModuleRelativePath", "Public/SafeRoadActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASafeRoadActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASafeRoadActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASafeRoadActor_Statics::ClassParams = {
		&ASafeRoadActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASafeRoadActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASafeRoadActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASafeRoadActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASafeRoadActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASafeRoadActor, 2759813439);
	template<> CROSSTHEROAD_API UClass* StaticClass<ASafeRoadActor>()
	{
		return ASafeRoadActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASafeRoadActor(Z_Construct_UClass_ASafeRoadActor, &ASafeRoadActor::StaticClass, TEXT("/Script/CrossTheRoad"), TEXT("ASafeRoadActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASafeRoadActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
