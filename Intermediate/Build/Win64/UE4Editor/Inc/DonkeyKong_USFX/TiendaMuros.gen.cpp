// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/TiendaMuros.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTiendaMuros() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_ATiendaMuros_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_ATiendaMuros();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AFabricaMuros();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
// End Cross Module References
	void ATiendaMuros::StaticRegisterNativesATiendaMuros()
	{
	}
	UClass* Z_Construct_UClass_ATiendaMuros_NoRegister()
	{
		return ATiendaMuros::StaticClass();
	}
	struct Z_Construct_UClass_ATiendaMuros_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATiendaMuros_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFabricaMuros,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATiendaMuros_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TiendaMuros.h" },
		{ "ModuleRelativePath", "TiendaMuros.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATiendaMuros_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATiendaMuros>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATiendaMuros_Statics::ClassParams = {
		&ATiendaMuros::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATiendaMuros_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATiendaMuros_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATiendaMuros()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATiendaMuros_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATiendaMuros, 3916761588);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<ATiendaMuros>()
	{
		return ATiendaMuros::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATiendaMuros(Z_Construct_UClass_ATiendaMuros, &ATiendaMuros::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("ATiendaMuros"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATiendaMuros);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif