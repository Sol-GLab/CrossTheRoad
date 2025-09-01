// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossTheRoad/Public/RoadActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoadActor() {}
// Cross Module References
	CROSSTHEROAD_API UClass* Z_Construct_UClass_ARoadActor_NoRegister();
	CROSSTHEROAD_API UClass* Z_Construct_UClass_ARoadActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CrossTheRoad();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ARoadActor::StaticRegisterNativesARoadActor()
	{
	}
	UClass* Z_Construct_UClass_ARoadActor_NoRegister()
	{
		return ARoadActor::StaticClass();
	}
	struct Z_Construct_UClass_ARoadActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoadMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallMesh1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WallMesh1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallMesh2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WallMesh2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wall1Collision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wall1Collision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wall2Collision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wall2Collision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedBoost_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SpeedBoost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPointRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnPointRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPointLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnPointLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoadActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CrossTheRoad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RoadActor.h" },
		{ "ModuleRelativePath", "Public/RoadActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadActor_Statics::NewProp_RoadMesh_MetaData[] = {
		{ "Category", "RoadMesh" },
		{ "Comment", "// Mesh and collision\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoadActor.h" },
		{ "ToolTip", "Mesh and collision" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoadActor_Statics::NewProp_RoadMesh = { "RoadMesh", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoadActor, RoadMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoadActor_Statics::NewProp_RoadMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadActor_Statics::NewProp_RoadMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadActor_Statics::NewProp_WallMesh1_MetaData[] = {
		{ "Category", "Wall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoadActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoadActor_Statics::NewProp_WallMesh1 = { "WallMesh1", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoadActor, WallMesh1), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoadActor_Statics::NewProp_WallMesh1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadActor_Statics::NewProp_WallMesh1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadActor_Statics::NewProp_WallMesh2_MetaData[] = {
		{ "Category", "Wall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoadActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoadActor_Statics::NewProp_WallMesh2 = { "WallMesh2", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoadActor, WallMesh2), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoadActor_Statics::NewProp_WallMesh2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadActor_Statics::NewProp_WallMesh2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadActor_Statics::NewProp_Wall1Collision_MetaData[] = {
		{ "Category", "CollisionBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoadActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoadActor_Statics::NewProp_Wall1Collision = { "Wall1Collision", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoadActor, Wall1Collision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoadActor_Statics::NewProp_Wall1Collision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadActor_Statics::NewProp_Wall1Collision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadActor_Statics::NewProp_Wall2Collision_MetaData[] = {
		{ "Category", "CollisionBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoadActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoadActor_Statics::NewProp_Wall2Collision = { "Wall2Collision", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoadActor, Wall2Collision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoadActor_Statics::NewProp_Wall2Collision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadActor_Statics::NewProp_Wall2Collision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadActor_Statics::NewProp_CollisionBox_MetaData[] = {
		{ "Category", "CollisionBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoadActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoadActor_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoadActor, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoadActor_Statics::NewProp_CollisionBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadActor_Statics::NewProp_CollisionBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadActor_Statics::NewProp_SpeedBoost_MetaData[] = {
		{ "Comment", "// Speed Boost for every road\n" },
		{ "ModuleRelativePath", "Public/RoadActor.h" },
		{ "ToolTip", "Speed Boost for every road" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARoadActor_Statics::NewProp_SpeedBoost = { "SpeedBoost", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoadActor, SpeedBoost), METADATA_PARAMS(Z_Construct_UClass_ARoadActor_Statics::NewProp_SpeedBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadActor_Statics::NewProp_SpeedBoost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadActor_Statics::NewProp_SpawnPointRight_MetaData[] = {
		{ "Category", "SpawnPoint" },
		{ "Comment", "// Spawn Points\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoadActor.h" },
		{ "ToolTip", "Spawn Points" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoadActor_Statics::NewProp_SpawnPointRight = { "SpawnPointRight", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoadActor, SpawnPointRight), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoadActor_Statics::NewProp_SpawnPointRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadActor_Statics::NewProp_SpawnPointRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadActor_Statics::NewProp_SpawnPointLeft_MetaData[] = {
		{ "Category", "SpawnPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoadActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoadActor_Statics::NewProp_SpawnPointLeft = { "SpawnPointLeft", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoadActor, SpawnPointLeft), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoadActor_Statics::NewProp_SpawnPointLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadActor_Statics::NewProp_SpawnPointLeft_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoadActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadActor_Statics::NewProp_RoadMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadActor_Statics::NewProp_WallMesh1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadActor_Statics::NewProp_WallMesh2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadActor_Statics::NewProp_Wall1Collision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadActor_Statics::NewProp_Wall2Collision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadActor_Statics::NewProp_CollisionBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadActor_Statics::NewProp_SpeedBoost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadActor_Statics::NewProp_SpawnPointRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadActor_Statics::NewProp_SpawnPointLeft,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoadActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoadActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARoadActor_Statics::ClassParams = {
		&ARoadActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARoadActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARoadActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARoadActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARoadActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARoadActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARoadActor, 559420180);
	template<> CROSSTHEROAD_API UClass* StaticClass<ARoadActor>()
	{
		return ARoadActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARoadActor(Z_Construct_UClass_ARoadActor, &ARoadActor::StaticClass, TEXT("/Script/CrossTheRoad"), TEXT("ARoadActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoadActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
