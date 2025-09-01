// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossTheRoad/Public/CarActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarActor() {}
// Cross Module References
	CROSSTHEROAD_API UClass* Z_Construct_UClass_ACarActor_NoRegister();
	CROSSTHEROAD_API UClass* Z_Construct_UClass_ACarActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CrossTheRoad();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CROSSTHEROAD_API UClass* Z_Construct_UClass_UGameOverWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACarActor::execPlayerOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACarActor::execSetEndPoint)
	{
		P_GET_STRUCT(FVector,Z_Param_NewTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEndPoint(Z_Param_NewTarget);
		P_NATIVE_END;
	}
	void ACarActor::StaticRegisterNativesACarActor()
	{
		UClass* Class = ACarActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayerOverlap", &ACarActor::execPlayerOverlap },
			{ "SetEndPoint", &ACarActor::execSetEndPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics
	{
		struct CarActor_eventPlayerOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CarActor_eventPlayerOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CarActor_eventPlayerOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CarActor_eventPlayerOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CarActor_eventPlayerOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((CarActor_eventPlayerOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CarActor_eventPlayerOverlap_Parms), &Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CarActor_eventPlayerOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Overlap event\n" },
		{ "ModuleRelativePath", "Public/CarActor.h" },
		{ "ToolTip", "Overlap event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACarActor, nullptr, "PlayerOverlap", nullptr, nullptr, sizeof(CarActor_eventPlayerOverlap_Parms), Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACarActor_PlayerOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACarActor_PlayerOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACarActor_SetEndPoint_Statics
	{
		struct CarActor_eventSetEndPoint_Parms
		{
			FVector NewTarget;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACarActor_SetEndPoint_Statics::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CarActor_eventSetEndPoint_Parms, NewTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACarActor_SetEndPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACarActor_SetEndPoint_Statics::NewProp_NewTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACarActor_SetEndPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/CarActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACarActor_SetEndPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACarActor, nullptr, "SetEndPoint", nullptr, nullptr, sizeof(CarActor_eventSetEndPoint_Parms), Z_Construct_UFunction_ACarActor_SetEndPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACarActor_SetEndPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACarActor_SetEndPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACarActor_SetEndPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACarActor_SetEndPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACarActor_SetEndPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACarActor_NoRegister()
	{
		return ACarActor::StaticClass();
	}
	struct Z_Construct_UClass_ACarActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CarMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasPoint_MetaData[];
#endif
		static void NewProp_HasPoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Timer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameOverWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameOverWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACarActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CrossTheRoad,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACarActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACarActor_PlayerOverlap, "PlayerOverlap" }, // 730772436
		{ &Z_Construct_UFunction_ACarActor_SetEndPoint, "SetEndPoint" }, // 2486304529
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CarActor.h" },
		{ "ModuleRelativePath", "Public/CarActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarActor_Statics::NewProp_CarMesh_MetaData[] = {
		{ "Category", "BaseMesh" },
		{ "Comment", "//Basic mesh and collision\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CarActor.h" },
		{ "ToolTip", "Basic mesh and collision" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarActor_Statics::NewProp_CarMesh = { "CarMesh", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarActor, CarMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACarActor_Statics::NewProp_CarMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarActor_Statics::NewProp_CarMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarActor_Statics::NewProp_CollisionBox_MetaData[] = {
		{ "Category", "CollisionBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CarActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarActor_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarActor, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACarActor_Statics::NewProp_CollisionBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarActor_Statics::NewProp_CollisionBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarActor_Statics::NewProp_EndPoint_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// Movement\n" },
		{ "ModuleRelativePath", "Public/CarActor.h" },
		{ "ToolTip", "Movement" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACarActor_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarActor, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACarActor_Statics::NewProp_EndPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarActor_Statics::NewProp_EndPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarActor_Statics::NewProp_HasPoint_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/CarActor.h" },
	};
#endif
	void Z_Construct_UClass_ACarActor_Statics::NewProp_HasPoint_SetBit(void* Obj)
	{
		((ACarActor*)Obj)->HasPoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACarActor_Statics::NewProp_HasPoint = { "HasPoint", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACarActor), &Z_Construct_UClass_ACarActor_Statics::NewProp_HasPoint_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACarActor_Statics::NewProp_HasPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarActor_Statics::NewProp_HasPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarActor_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "CollisionBox" },
		{ "Comment", "// Car setting\n" },
		{ "ModuleRelativePath", "Public/CarActor.h" },
		{ "ToolTip", "Car setting" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACarActor_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarActor, Speed), METADATA_PARAMS(Z_Construct_UClass_ACarActor_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarActor_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarActor_Statics::NewProp_Timer_MetaData[] = {
		{ "Category", "RestartTimer" },
		{ "Comment", "// Timer before restart and restart function\n" },
		{ "ModuleRelativePath", "Public/CarActor.h" },
		{ "ToolTip", "Timer before restart and restart function" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACarActor_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarActor, Timer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ACarActor_Statics::NewProp_Timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarActor_Statics::NewProp_Timer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarActor_Statics::NewProp_GameOverWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/CarActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACarActor_Statics::NewProp_GameOverWidgetClass = { "GameOverWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarActor, GameOverWidgetClass), Z_Construct_UClass_UGameOverWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACarActor_Statics::NewProp_GameOverWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarActor_Statics::NewProp_GameOverWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACarActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarActor_Statics::NewProp_CarMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarActor_Statics::NewProp_CollisionBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarActor_Statics::NewProp_EndPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarActor_Statics::NewProp_HasPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarActor_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarActor_Statics::NewProp_Timer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarActor_Statics::NewProp_GameOverWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACarActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACarActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACarActor_Statics::ClassParams = {
		&ACarActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACarActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACarActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACarActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACarActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACarActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACarActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACarActor, 892983581);
	template<> CROSSTHEROAD_API UClass* StaticClass<ACarActor>()
	{
		return ACarActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACarActor(Z_Construct_UClass_ACarActor, &ACarActor::StaticClass, TEXT("/Script/CrossTheRoad"), TEXT("ACarActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACarActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
