// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePrototypeCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
PROTOTYPE_API UClass* Z_Construct_UClass_APrototypeCameraManager();
PROTOTYPE_API UClass* Z_Construct_UClass_APrototypeCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_Prototype();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APrototypeCameraManager **************************************************
void APrototypeCameraManager::StaticRegisterNativesAPrototypeCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APrototypeCameraManager;
UClass* APrototypeCameraManager::GetPrivateStaticClass()
{
	using TClass = APrototypeCameraManager;
	if (!Z_Registration_Info_UClass_APrototypeCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PrototypeCameraManager"),
			Z_Registration_Info_UClass_APrototypeCameraManager.InnerSingleton,
			StaticRegisterNativesAPrototypeCameraManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APrototypeCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_APrototypeCameraManager_NoRegister()
{
	return APrototypeCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APrototypeCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "PrototypeCameraManager.h" },
		{ "ModuleRelativePath", "PrototypeCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrototypeCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APrototypeCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_Prototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APrototypeCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APrototypeCameraManager_Statics::ClassParams = {
	&APrototypeCameraManager::StaticClass,
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
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APrototypeCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_APrototypeCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APrototypeCameraManager()
{
	if (!Z_Registration_Info_UClass_APrototypeCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrototypeCameraManager.OuterSingleton, Z_Construct_UClass_APrototypeCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APrototypeCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APrototypeCameraManager);
APrototypeCameraManager::~APrototypeCameraManager() {}
// ********** End Class APrototypeCameraManager ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_myeos_Documents_GitHub_unreal_Prototype_Source_Prototype_PrototypeCameraManager_h__Script_Prototype_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APrototypeCameraManager, APrototypeCameraManager::StaticClass, TEXT("APrototypeCameraManager"), &Z_Registration_Info_UClass_APrototypeCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrototypeCameraManager), 1439052954U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_myeos_Documents_GitHub_unreal_Prototype_Source_Prototype_PrototypeCameraManager_h__Script_Prototype_3286773530(TEXT("/Script/Prototype"),
	Z_CompiledInDeferFile_FID_Users_myeos_Documents_GitHub_unreal_Prototype_Source_Prototype_PrototypeCameraManager_h__Script_Prototype_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_myeos_Documents_GitHub_unreal_Prototype_Source_Prototype_PrototypeCameraManager_h__Script_Prototype_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
