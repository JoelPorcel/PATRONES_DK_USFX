// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/MuroLadrillo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroLadrillo() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AMuroLadrillo_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AMuroLadrillo();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AMuro();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
// End Cross Module References
	void AMuroLadrillo::StaticRegisterNativesAMuroLadrillo()
	{
	}
	UClass* Z_Construct_UClass_AMuroLadrillo_NoRegister()
	{
		return AMuroLadrillo::StaticClass();
	}
	struct Z_Construct_UClass_AMuroLadrillo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroLadrillo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMuro,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroLadrillo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "MuroLadrillo.h" },
		{ "ModuleRelativePath", "MuroLadrillo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroLadrillo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroLadrillo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroLadrillo_Statics::ClassParams = {
		&AMuroLadrillo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMuroLadrillo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroLadrillo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroLadrillo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroLadrillo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroLadrillo, 3903589873);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<AMuroLadrillo>()
	{
		return AMuroLadrillo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroLadrillo(Z_Construct_UClass_AMuroLadrillo, &AMuroLadrillo::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("AMuroLadrillo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroLadrillo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
