// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/ComponenteExtra.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponenteExtra() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_UComponenteExtra_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_UComponenteExtra();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
// End Cross Module References
	void UComponenteExtra::StaticRegisterNativesUComponenteExtra()
	{
	}
	UClass* Z_Construct_UClass_UComponenteExtra_NoRegister()
	{
		return UComponenteExtra::StaticClass();
	}
	struct Z_Construct_UClass_UComponenteExtra_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponenteExtra_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteExtra_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ComponenteExtra.h" },
		{ "ModuleRelativePath", "ComponenteExtra.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponenteExtra_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponenteExtra>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComponenteExtra_Statics::ClassParams = {
		&UComponenteExtra::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComponenteExtra_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteExtra_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponenteExtra()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComponenteExtra_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComponenteExtra, 3556939392);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<UComponenteExtra>()
	{
		return UComponenteExtra::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComponenteExtra(Z_Construct_UClass_UComponenteExtra, &UComponenteExtra::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("UComponenteExtra"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponenteExtra);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
