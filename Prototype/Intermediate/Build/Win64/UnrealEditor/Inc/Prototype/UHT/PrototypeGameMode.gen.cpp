// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePrototypeGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROTOTYPE_API UClass* Z_Construct_UClass_APrototypeGameMode();
PROTOTYPE_API UClass* Z_Construct_UClass_APrototypeGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Prototype();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APrototypeGameMode *******************************************************
void APrototypeGameMode::StaticRegisterNativesAPrototypeGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APrototypeGameMode;
UClass* APrototypeGameMode::GetPrivateStaticClass()
{
	using TClass = APrototypeGameMode;
	if (!Z_Registration_Info_UClass_APrototypeGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PrototypeGameMode"),
			Z_Registration_Info_UClass_APrototypeGameMode.InnerSingleton,
			StaticRegisterNativesAPrototypeGameMode,
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
	return Z_Registration_Info_UClass_APrototypeGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_APrototypeGameMode_NoRegister()
{
	return APrototypeGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APrototypeGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PrototypeGameMode.h" },
		{ "ModuleRelativePath", "PrototypeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrototypeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APrototypeGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Prototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APrototypeGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APrototypeGameMode_Statics::ClassParams = {
	&APrototypeGameMode::StaticClass,
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
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APrototypeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APrototypeGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APrototypeGameMode()
{
	if (!Z_Registration_Info_UClass_APrototypeGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrototypeGameMode.OuterSingleton, Z_Construct_UClass_APrototypeGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APrototypeGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APrototypeGameMode);
APrototypeGameMode::~APrototypeGameMode() {}
// ********** End Class APrototypeGameMode *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_myeos_Documents_GitHub_unreal_Prototype_Source_Prototype_PrototypeGameMode_h__Script_Prototype_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APrototypeGameMode, APrototypeGameMode::StaticClass, TEXT("APrototypeGameMode"), &Z_Registration_Info_UClass_APrototypeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrototypeGameMode), 3853416841U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_myeos_Documents_GitHub_unreal_Prototype_Source_Prototype_PrototypeGameMode_h__Script_Prototype_2840848642(TEXT("/Script/Prototype"),
	Z_CompiledInDeferFile_FID_Users_myeos_Documents_GitHub_unreal_Prototype_Source_Prototype_PrototypeGameMode_h__Script_Prototype_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_myeos_Documents_GitHub_unreal_Prototype_Source_Prototype_PrototypeGameMode_h__Script_Prototype_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
