// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/IProyectil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIProyectil() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_UIProyectil_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_UIProyectil();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
// End Cross Module References
	void UIProyectil::StaticRegisterNativesUIProyectil()
	{
	}
	UClass* Z_Construct_UClass_UIProyectil_NoRegister()
	{
		return UIProyectil::StaticClass();
	}
	struct Z_Construct_UClass_UIProyectil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIProyectil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIProyectil_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IProyectil.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIProyectil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIProyectil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIProyectil_Statics::ClassParams = {
		&UIProyectil::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIProyectil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIProyectil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIProyectil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIProyectil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIProyectil, 2045600475);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<UIProyectil>()
	{
		return UIProyectil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIProyectil(Z_Construct_UClass_UIProyectil, &UIProyectil::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("UIProyectil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIProyectil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
