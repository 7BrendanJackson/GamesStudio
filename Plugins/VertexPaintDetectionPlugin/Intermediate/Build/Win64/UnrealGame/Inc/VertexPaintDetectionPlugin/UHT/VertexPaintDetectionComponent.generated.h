// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VertexPaintDetectionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVertexDetectAdditionalDataToPassThrough;
struct FVertexDetectAmountOfPaintedColorsOfEachChannel;
struct FVertexDetectAvarageColorInAreaInfo;
struct FVertexDetectClosestVertexDataResultStruct;
struct FVertexDetectEstimatedColorAtHitLocationResultStruct;
struct FVertexDetectGetColorsOnlyStruct;
struct FVertexDetectInfoStruct;
struct FVertexDetectMeshDataStruct;
struct FVertexDetectTaskResultInfo;
struct FVertexDetectVertexColorsOnEachBone;
struct FVertexPaintAtLocationStruct;
struct FVertexPaintColorSnippetStruct;
struct FVertexPainthWithinAreaStruct;
struct FVertexPaintOnEntireMeshStruct;
struct FVertexPaintSetMeshComponentVertexColorsUsingSerializedString;
struct FVertexPaintStruct;
#ifdef VERTEXPAINTDETECTIONPLUGIN_VertexPaintDetectionComponent_generated_h
#error "VertexPaintDetectionComponent.generated.h already included, missing '#pragma once' in VertexPaintDetectionComponent.h"
#endif
#define VERTEXPAINTDETECTIONPLUGIN_VertexPaintDetectionComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_18_DELEGATE \
struct _Script_VertexPaintDetectionPlugin_eventVertexColorGetClosestVertexData_Parms \
{ \
	FVertexDetectTaskResultInfo taskResultInfo; \
	FVertexDetectMeshDataStruct meshVertexData; \
	FVertexDetectInfoStruct detectedMeshWithSettings; \
	FVertexDetectClosestVertexDataResultStruct closestVertexInfo; \
	FVertexDetectEstimatedColorAtHitLocationResultStruct estimatedColorAtHitLocationInfo; \
	FVertexDetectAvarageColorInAreaInfo avarageColorInAreaInfo; \
	FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel; \
	FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone; \
	FVertexDetectAdditionalDataToPassThrough additionalData; \
}; \
static inline void FVertexColorGetClosestVertexData_DelegateWrapper(const FMulticastScriptDelegate& VertexColorGetClosestVertexData, FVertexDetectTaskResultInfo taskResultInfo, FVertexDetectMeshDataStruct meshVertexData, FVertexDetectInfoStruct detectedMeshWithSettings, FVertexDetectClosestVertexDataResultStruct closestVertexInfo, FVertexDetectEstimatedColorAtHitLocationResultStruct estimatedColorAtHitLocationInfo, FVertexDetectAvarageColorInAreaInfo avarageColorInAreaInfo, FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel, FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone, FVertexDetectAdditionalDataToPassThrough additionalData) \
{ \
	_Script_VertexPaintDetectionPlugin_eventVertexColorGetClosestVertexData_Parms Parms; \
	Parms.taskResultInfo=taskResultInfo; \
	Parms.meshVertexData=meshVertexData; \
	Parms.detectedMeshWithSettings=detectedMeshWithSettings; \
	Parms.closestVertexInfo=closestVertexInfo; \
	Parms.estimatedColorAtHitLocationInfo=estimatedColorAtHitLocationInfo; \
	Parms.avarageColorInAreaInfo=avarageColorInAreaInfo; \
	Parms.amountOfPaintedColorsOfEachChannel=amountOfPaintedColorsOfEachChannel; \
	Parms.vertexColorsOnEachBone=vertexColorsOnEachBone; \
	Parms.additionalData=additionalData; \
	VertexColorGetClosestVertexData.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_20_DELEGATE \
struct _Script_VertexPaintDetectionPlugin_eventVertexColorGetAllVertexColorsOnly_Parms \
{ \
	FVertexDetectTaskResultInfo taskResultInfo; \
	FVertexDetectMeshDataStruct meshVertexData; \
	FVertexDetectGetColorsOnlyStruct gotAllVertexColorsWithSettings; \
	FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel; \
	FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone; \
	FVertexDetectAdditionalDataToPassThrough additionalData; \
}; \
static inline void FVertexColorGetAllVertexColorsOnly_DelegateWrapper(const FMulticastScriptDelegate& VertexColorGetAllVertexColorsOnly, FVertexDetectTaskResultInfo taskResultInfo, FVertexDetectMeshDataStruct meshVertexData, FVertexDetectGetColorsOnlyStruct gotAllVertexColorsWithSettings, FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel, FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone, FVertexDetectAdditionalDataToPassThrough additionalData) \
{ \
	_Script_VertexPaintDetectionPlugin_eventVertexColorGetAllVertexColorsOnly_Parms Parms; \
	Parms.taskResultInfo=taskResultInfo; \
	Parms.meshVertexData=meshVertexData; \
	Parms.gotAllVertexColorsWithSettings=gotAllVertexColorsWithSettings; \
	Parms.amountOfPaintedColorsOfEachChannel=amountOfPaintedColorsOfEachChannel; \
	Parms.vertexColorsOnEachBone=vertexColorsOnEachBone; \
	Parms.additionalData=additionalData; \
	VertexColorGetAllVertexColorsOnly.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_22_DELEGATE \
struct _Script_VertexPaintDetectionPlugin_eventVertexColorPaintedAtLocation_Parms \
{ \
	FVertexDetectTaskResultInfo taskResultInfo; \
	FVertexDetectMeshDataStruct meshVertexData; \
	FVertexPaintAtLocationStruct meshPaintedWithSettings; \
	FVertexDetectClosestVertexDataResultStruct closestVertexInfoAfterApplyingColor; \
	FVertexDetectEstimatedColorAtHitLocationResultStruct estimatedColorAtHitLocationInfo; \
	FVertexDetectAvarageColorInAreaInfo avarageColorInAreaInfo; \
	FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel; \
	FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone; \
	FVertexDetectAdditionalDataToPassThrough additionalData; \
}; \
static inline void FVertexColorPaintedAtLocation_DelegateWrapper(const FMulticastScriptDelegate& VertexColorPaintedAtLocation, FVertexDetectTaskResultInfo taskResultInfo, FVertexDetectMeshDataStruct meshVertexData, FVertexPaintAtLocationStruct meshPaintedWithSettings, FVertexDetectClosestVertexDataResultStruct closestVertexInfoAfterApplyingColor, FVertexDetectEstimatedColorAtHitLocationResultStruct estimatedColorAtHitLocationInfo, FVertexDetectAvarageColorInAreaInfo avarageColorInAreaInfo, FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel, FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone, FVertexDetectAdditionalDataToPassThrough additionalData) \
{ \
	_Script_VertexPaintDetectionPlugin_eventVertexColorPaintedAtLocation_Parms Parms; \
	Parms.taskResultInfo=taskResultInfo; \
	Parms.meshVertexData=meshVertexData; \
	Parms.meshPaintedWithSettings=meshPaintedWithSettings; \
	Parms.closestVertexInfoAfterApplyingColor=closestVertexInfoAfterApplyingColor; \
	Parms.estimatedColorAtHitLocationInfo=estimatedColorAtHitLocationInfo; \
	Parms.avarageColorInAreaInfo=avarageColorInAreaInfo; \
	Parms.amountOfPaintedColorsOfEachChannel=amountOfPaintedColorsOfEachChannel; \
	Parms.vertexColorsOnEachBone=vertexColorsOnEachBone; \
	Parms.additionalData=additionalData; \
	VertexColorPaintedAtLocation.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_24_DELEGATE \
struct _Script_VertexPaintDetectionPlugin_eventVertexColorPaintedWithinArea_Parms \
{ \
	FVertexDetectTaskResultInfo taskResultInfo; \
	FVertexDetectMeshDataStruct meshVertexData; \
	FVertexPainthWithinAreaStruct areaWithinMeshPaintedWithSettings; \
	FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel; \
	FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone; \
	FVertexDetectAdditionalDataToPassThrough additionalData; \
}; \
static inline void FVertexColorPaintedWithinArea_DelegateWrapper(const FMulticastScriptDelegate& VertexColorPaintedWithinArea, FVertexDetectTaskResultInfo taskResultInfo, FVertexDetectMeshDataStruct meshVertexData, FVertexPainthWithinAreaStruct areaWithinMeshPaintedWithSettings, FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel, FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone, FVertexDetectAdditionalDataToPassThrough additionalData) \
{ \
	_Script_VertexPaintDetectionPlugin_eventVertexColorPaintedWithinArea_Parms Parms; \
	Parms.taskResultInfo=taskResultInfo; \
	Parms.meshVertexData=meshVertexData; \
	Parms.areaWithinMeshPaintedWithSettings=areaWithinMeshPaintedWithSettings; \
	Parms.amountOfPaintedColorsOfEachChannel=amountOfPaintedColorsOfEachChannel; \
	Parms.vertexColorsOnEachBone=vertexColorsOnEachBone; \
	Parms.additionalData=additionalData; \
	VertexColorPaintedWithinArea.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_26_DELEGATE \
struct _Script_VertexPaintDetectionPlugin_eventVertexColorPaintedEntireMesh_Parms \
{ \
	FVertexDetectTaskResultInfo taskResultInfo; \
	FVertexDetectMeshDataStruct meshVertexData; \
	FVertexPaintOnEntireMeshStruct entireMeshPaintedWithSettings; \
	FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel; \
	FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone; \
	FVertexDetectAdditionalDataToPassThrough additionalData; \
}; \
static inline void FVertexColorPaintedEntireMesh_DelegateWrapper(const FMulticastScriptDelegate& VertexColorPaintedEntireMesh, FVertexDetectTaskResultInfo taskResultInfo, FVertexDetectMeshDataStruct meshVertexData, FVertexPaintOnEntireMeshStruct entireMeshPaintedWithSettings, FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel, FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone, FVertexDetectAdditionalDataToPassThrough additionalData) \
{ \
	_Script_VertexPaintDetectionPlugin_eventVertexColorPaintedEntireMesh_Parms Parms; \
	Parms.taskResultInfo=taskResultInfo; \
	Parms.meshVertexData=meshVertexData; \
	Parms.entireMeshPaintedWithSettings=entireMeshPaintedWithSettings; \
	Parms.amountOfPaintedColorsOfEachChannel=amountOfPaintedColorsOfEachChannel; \
	Parms.vertexColorsOnEachBone=vertexColorsOnEachBone; \
	Parms.additionalData=additionalData; \
	VertexColorPaintedEntireMesh.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_28_DELEGATE \
struct _Script_VertexPaintDetectionPlugin_eventVertexColorPaintColorSnippet_Parms \
{ \
	FVertexDetectTaskResultInfo taskResultInfo; \
	FVertexDetectMeshDataStruct meshVertexData; \
	FVertexPaintColorSnippetStruct paintColorSnippetWithSettings; \
	FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel; \
	FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone; \
	FVertexDetectAdditionalDataToPassThrough additionalData; \
}; \
static inline void FVertexColorPaintColorSnippet_DelegateWrapper(const FMulticastScriptDelegate& VertexColorPaintColorSnippet, FVertexDetectTaskResultInfo taskResultInfo, FVertexDetectMeshDataStruct meshVertexData, FVertexPaintColorSnippetStruct paintColorSnippetWithSettings, FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel, FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone, FVertexDetectAdditionalDataToPassThrough additionalData) \
{ \
	_Script_VertexPaintDetectionPlugin_eventVertexColorPaintColorSnippet_Parms Parms; \
	Parms.taskResultInfo=taskResultInfo; \
	Parms.meshVertexData=meshVertexData; \
	Parms.paintColorSnippetWithSettings=paintColorSnippetWithSettings; \
	Parms.amountOfPaintedColorsOfEachChannel=amountOfPaintedColorsOfEachChannel; \
	Parms.vertexColorsOnEachBone=vertexColorsOnEachBone; \
	Parms.additionalData=additionalData; \
	VertexColorPaintColorSnippet.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_30_DELEGATE \
struct _Script_VertexPaintDetectionPlugin_eventSetMeshComponentVertexColors_Parms \
{ \
	FVertexDetectTaskResultInfo taskResultInfo; \
	FVertexDetectMeshDataStruct meshVertexData; \
	FVertexPaintStruct setMeshComponentVertexColorSettings; \
	FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel; \
	FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone; \
	FVertexDetectAdditionalDataToPassThrough additionalData; \
}; \
static inline void FSetMeshComponentVertexColors_DelegateWrapper(const FMulticastScriptDelegate& SetMeshComponentVertexColors, FVertexDetectTaskResultInfo taskResultInfo, FVertexDetectMeshDataStruct meshVertexData, FVertexPaintStruct setMeshComponentVertexColorSettings, FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel, FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone, FVertexDetectAdditionalDataToPassThrough additionalData) \
{ \
	_Script_VertexPaintDetectionPlugin_eventSetMeshComponentVertexColors_Parms Parms; \
	Parms.taskResultInfo=taskResultInfo; \
	Parms.meshVertexData=meshVertexData; \
	Parms.setMeshComponentVertexColorSettings=setMeshComponentVertexColorSettings; \
	Parms.amountOfPaintedColorsOfEachChannel=amountOfPaintedColorsOfEachChannel; \
	Parms.vertexColorsOnEachBone=vertexColorsOnEachBone; \
	Parms.additionalData=additionalData; \
	SetMeshComponentVertexColors.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_32_DELEGATE \
struct _Script_VertexPaintDetectionPlugin_eventSetMeshComponentVertexColorsUsingSerializedString_Parms \
{ \
	FVertexDetectTaskResultInfo taskResultInfo; \
	FVertexDetectMeshDataStruct meshVertexData; \
	FVertexPaintSetMeshComponentVertexColorsUsingSerializedString setMeshComponentVertexColorUsingSerializedStringSettings; \
	FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel; \
	FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone; \
	FVertexDetectAdditionalDataToPassThrough additionalData; \
}; \
static inline void FSetMeshComponentVertexColorsUsingSerializedString_DelegateWrapper(const FMulticastScriptDelegate& SetMeshComponentVertexColorsUsingSerializedString, FVertexDetectTaskResultInfo taskResultInfo, FVertexDetectMeshDataStruct meshVertexData, FVertexPaintSetMeshComponentVertexColorsUsingSerializedString setMeshComponentVertexColorUsingSerializedStringSettings, FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel, FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone, FVertexDetectAdditionalDataToPassThrough additionalData) \
{ \
	_Script_VertexPaintDetectionPlugin_eventSetMeshComponentVertexColorsUsingSerializedString_Parms Parms; \
	Parms.taskResultInfo=taskResultInfo; \
	Parms.meshVertexData=meshVertexData; \
	Parms.setMeshComponentVertexColorUsingSerializedStringSettings=setMeshComponentVertexColorUsingSerializedStringSettings; \
	Parms.amountOfPaintedColorsOfEachChannel=amountOfPaintedColorsOfEachChannel; \
	Parms.vertexColorsOnEachBone=vertexColorsOnEachBone; \
	Parms.additionalData=additionalData; \
	SetMeshComponentVertexColorsUsingSerializedString.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_41_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_41_RPC_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_41_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVertexPaintDetectionComponent(); \
	friend struct Z_Construct_UClass_UVertexPaintDetectionComponent_Statics; \
public: \
	DECLARE_CLASS(UVertexPaintDetectionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VertexPaintDetectionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVertexPaintDetectionComponent)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUVertexPaintDetectionComponent(); \
	friend struct Z_Construct_UClass_UVertexPaintDetectionComponent_Statics; \
public: \
	DECLARE_CLASS(UVertexPaintDetectionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VertexPaintDetectionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVertexPaintDetectionComponent)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVertexPaintDetectionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVertexPaintDetectionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVertexPaintDetectionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVertexPaintDetectionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVertexPaintDetectionComponent(UVertexPaintDetectionComponent&&); \
	NO_API UVertexPaintDetectionComponent(const UVertexPaintDetectionComponent&); \
public:


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVertexPaintDetectionComponent(UVertexPaintDetectionComponent&&); \
	NO_API UVertexPaintDetectionComponent(const UVertexPaintDetectionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVertexPaintDetectionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVertexPaintDetectionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVertexPaintDetectionComponent)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_38_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_41_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_41_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_41_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_41_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_41_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_41_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_41_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<class UVertexPaintDetectionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
