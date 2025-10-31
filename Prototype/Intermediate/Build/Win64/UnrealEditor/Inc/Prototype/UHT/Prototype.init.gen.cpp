// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrototype_init() {}
	PROTOTYPE_API UFunction* Z_Construct_UDelegateFunction_Prototype_BulletCountUpdatedDelegate__DelegateSignature();
	PROTOTYPE_API UFunction* Z_Construct_UDelegateFunction_Prototype_DamagedDelegate__DelegateSignature();
	PROTOTYPE_API UFunction* Z_Construct_UDelegateFunction_Prototype_PawnDeathDelegate__DelegateSignature();
	PROTOTYPE_API UFunction* Z_Construct_UDelegateFunction_Prototype_SprintStateChangedDelegate__DelegateSignature();
	PROTOTYPE_API UFunction* Z_Construct_UDelegateFunction_Prototype_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Prototype;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Prototype()
	{
		if (!Z_Registration_Info_UPackage__Script_Prototype.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Prototype_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Prototype_DamagedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Prototype_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Prototype_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Prototype_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Prototype",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0685E3CD,
				0xE853AD1C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Prototype.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Prototype.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Prototype(Z_Construct_UPackage__Script_Prototype, TEXT("/Script/Prototype"), Z_Registration_Info_UPackage__Script_Prototype, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0685E3CD, 0xE853AD1C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
