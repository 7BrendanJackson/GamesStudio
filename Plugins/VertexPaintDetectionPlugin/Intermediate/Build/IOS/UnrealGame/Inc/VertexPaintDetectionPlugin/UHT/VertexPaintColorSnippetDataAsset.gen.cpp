// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VertexPaintDetectionPlugin/Public/VertexPaintColorSnippetDataAsset.h"
#include "VertexPaintDetectionPlugin/Public/VertexPaintDetectionStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexPaintColorSnippetDataAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintColorSnippetDataAsset();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct();
// End Cross Module References
	void UVertexPaintColorSnippetDataAsset::StaticRegisterNativesUVertexPaintColorSnippetDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexPaintColorSnippetDataAsset);
	UClass* Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister()
	{
		return UVertexPaintColorSnippetDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_snippetColorData_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_snippetColorData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_snippetColorData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_snippetColorData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "VertexPaintColorSnippetDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VertexPaintColorSnippetDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_Statics::NewProp_snippetColorData_ValueProp = { "snippetColorData", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct, METADATA_PARAMS(nullptr, 0) }; // 181279890
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_Statics::NewProp_snippetColorData_Key_KeyProp = { "snippetColorData_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_Statics::NewProp_snippetColorData_MetaData[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintColorSnippetDataAsset.h" },
		{ "ToolTip", "TMap of an Object Snippet Color Data which can be a Static or Skeletal Mesh. Accesses which snippet with a String identifier. Color Snippets can be used if you for instance want a bunch of zombies with different blood patterns on them, then you can store a bunch of different snippets and randomize which to use when spawning a zombie." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_Statics::NewProp_snippetColorData = { "snippetColorData", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexPaintColorSnippetDataAsset, snippetColorData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_Statics::NewProp_snippetColorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_Statics::NewProp_snippetColorData_MetaData)) }; // 181279890
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_Statics::NewProp_snippetColorData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_Statics::NewProp_snippetColorData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_Statics::NewProp_snippetColorData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexPaintColorSnippetDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_Statics::ClassParams = {
		&UVertexPaintColorSnippetDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVertexPaintColorSnippetDataAsset()
	{
		if (!Z_Registration_Info_UClass_UVertexPaintColorSnippetDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexPaintColorSnippetDataAsset.OuterSingleton, Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexPaintColorSnippetDataAsset.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<UVertexPaintColorSnippetDataAsset>()
	{
		return UVertexPaintColorSnippetDataAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexPaintColorSnippetDataAsset);
	UVertexPaintColorSnippetDataAsset::~UVertexPaintColorSnippetDataAsset() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintColorSnippetDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintColorSnippetDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexPaintColorSnippetDataAsset, UVertexPaintColorSnippetDataAsset::StaticClass, TEXT("UVertexPaintColorSnippetDataAsset"), &Z_Registration_Info_UClass_UVertexPaintColorSnippetDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexPaintColorSnippetDataAsset), 1002129722U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintColorSnippetDataAsset_h_4200862355(TEXT("/Script/VertexPaintDetectionPlugin"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintColorSnippetDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintColorSnippetDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
