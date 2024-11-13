// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/ITransfromar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeITransfromar() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_UITransfromar_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_UITransfromar();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
// End Cross Module References
	void UITransfromar::StaticRegisterNativesUITransfromar()
	{
	}
	UClass* Z_Construct_UClass_UITransfromar_NoRegister()
	{
		return UITransfromar::StaticClass();
	}
	struct Z_Construct_UClass_UITransfromar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UITransfromar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UITransfromar_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ITransfromar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UITransfromar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IITransfromar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UITransfromar_Statics::ClassParams = {
		&UITransfromar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UITransfromar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UITransfromar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UITransfromar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UITransfromar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UITransfromar, 2419592582);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<UITransfromar>()
	{
		return UITransfromar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UITransfromar(Z_Construct_UClass_UITransfromar, &UITransfromar::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("UITransfromar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UITransfromar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
