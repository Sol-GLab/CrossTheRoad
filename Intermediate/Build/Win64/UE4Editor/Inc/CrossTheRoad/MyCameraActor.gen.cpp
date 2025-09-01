// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossTheRoad/Public/MyCameraActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCameraActor() {}
// Cross Module References
	CROSSTHEROAD_API UClass* Z_Construct_UClass_AMyCameraActor_NoRegister();
	CROSSTHEROAD_API UClass* Z_Construct_UClass_AMyCameraActor();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor();
	UPackage* Z_Construct_UPackage__Script_CrossTheRoad();
// End Cross Module References
	void AMyCameraActor::StaticRegisterNativesAMyCameraActor()
	{
	}
	UClass* Z_Construct_UClass_AMyCameraActor_NoRegister()
	{
		return AMyCameraActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyCameraActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCameraActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CrossTheRoad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCameraActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "MyCameraActor.h" },
		{ "ModuleRelativePath", "Public/MyCameraActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCameraActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCameraActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCameraActor_Statics::ClassParams = {
		&AMyCameraActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyCameraActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCameraActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCameraActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyCameraActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCameraActor, 1488064215);
	template<> CROSSTHEROAD_API UClass* StaticClass<AMyCameraActor>()
	{
		return AMyCameraActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCameraActor(Z_Construct_UClass_AMyCameraActor, &AMyCameraActor::StaticClass, TEXT("/Script/CrossTheRoad"), TEXT("AMyCameraActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCameraActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
