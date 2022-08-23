// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankos/UnitBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitBase() {}
// Cross Module References
	TANKOS_API UClass* Z_Construct_UClass_AUnitBase_NoRegister();
	TANKOS_API UClass* Z_Construct_UClass_AUnitBase();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Tankos();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AUnitBase::StaticRegisterNativesAUnitBase()
	{
	}
	UClass* Z_Construct_UClass_AUnitBase_NoRegister()
	{
		return AUnitBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnitBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_M_BoxCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_M_BoxCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_M_UnitBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_M_UnitBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_M_UnitTurret_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_M_UnitTurret;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_M_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_M_MoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_M_RotateSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_M_RotateSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnitBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnitBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UnitBase.h" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnitBase_Statics::NewProp_M_BoxCollision_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnitBase_Statics::NewProp_M_BoxCollision = { "M_BoxCollision", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnitBase, M_BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnitBase_Statics::NewProp_M_BoxCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnitBase_Statics::NewProp_M_BoxCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnitBase_Statics::NewProp_M_UnitBody_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//\xd0\x91\xd0\xbe\xd0\xba\xd1\x81 \xd0\xba\xd0\xbe\xd0\xbb\xd0\xbb\xd0\xb8\xd0\xb7\xd0\xb8\xd0\xb8\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnitBase.h" },
		{ "ToolTip", "\xd0\x91\xd0\xbe\xd0\xba\xd1\x81 \xd0\xba\xd0\xbe\xd0\xbb\xd0\xbb\xd0\xb8\xd0\xb7\xd0\xb8\xd0\xb8" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnitBase_Statics::NewProp_M_UnitBody = { "M_UnitBody", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnitBase, M_UnitBody), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnitBase_Statics::NewProp_M_UnitBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnitBase_Statics::NewProp_M_UnitBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnitBase_Statics::NewProp_M_UnitTurret_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//\xd0\xa2\xd0\xb5\xd0\xbb\xd0\xbe \xd1\x8e\xd0\xbd\xd0\xb8\xd1\x82\xd0\xb0(\xd0\xba\xd0\xbe\xd1\x80\xd0\xbf\xd1\x83\xd1\x81)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnitBase.h" },
		{ "ToolTip", "\xd0\xa2\xd0\xb5\xd0\xbb\xd0\xbe \xd1\x8e\xd0\xbd\xd0\xb8\xd1\x82\xd0\xb0(\xd0\xba\xd0\xbe\xd1\x80\xd0\xbf\xd1\x83\xd1\x81)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnitBase_Statics::NewProp_M_UnitTurret = { "M_UnitTurret", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnitBase, M_UnitTurret), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnitBase_Statics::NewProp_M_UnitTurret_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnitBase_Statics::NewProp_M_UnitTurret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnitBase_Statics::NewProp_M_MoveSpeed_MetaData[] = {
		{ "Category", "Movement|Speed" },
		{ "Comment", "//\xd0\x91\xd0\xb0\xd1\x88\xd0\xbd\xd1\x8f \xd1\x8e\xd0\xbd\xd0\xb8\xd1\x82\xd0\xb0\n" },
		{ "ModuleRelativePath", "UnitBase.h" },
		{ "ToolTip", "\xd0\x91\xd0\xb0\xd1\x88\xd0\xbd\xd1\x8f \xd1\x8e\xd0\xbd\xd0\xb8\xd1\x82\xd0\xb0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnitBase_Statics::NewProp_M_MoveSpeed = { "M_MoveSpeed", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnitBase, M_MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_AUnitBase_Statics::NewProp_M_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnitBase_Statics::NewProp_M_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnitBase_Statics::NewProp_M_RotateSpeed_MetaData[] = {
		{ "Category", "Movement|Speed" },
		{ "Comment", "//\xd0\xa1\xd0\xba\xd0\xbe\xd1\x80\xd0\xbe\xd1\x81\xd1\x82\xd1\x8c \xd0\xb4\xd0\xb2\xd0\xb8\xd0\xb6\xd0\xb5\xd0\xbd\xd0\xb8\xd1\x8f\n" },
		{ "ModuleRelativePath", "UnitBase.h" },
		{ "ToolTip", "\xd0\xa1\xd0\xba\xd0\xbe\xd1\x80\xd0\xbe\xd1\x81\xd1\x82\xd1\x8c \xd0\xb4\xd0\xb2\xd0\xb8\xd0\xb6\xd0\xb5\xd0\xbd\xd0\xb8\xd1\x8f" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnitBase_Statics::NewProp_M_RotateSpeed = { "M_RotateSpeed", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnitBase, M_RotateSpeed), METADATA_PARAMS(Z_Construct_UClass_AUnitBase_Statics::NewProp_M_RotateSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnitBase_Statics::NewProp_M_RotateSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnitBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitBase_Statics::NewProp_M_BoxCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitBase_Statics::NewProp_M_UnitBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitBase_Statics::NewProp_M_UnitTurret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitBase_Statics::NewProp_M_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitBase_Statics::NewProp_M_RotateSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnitBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnitBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnitBase_Statics::ClassParams = {
		&AUnitBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUnitBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUnitBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUnitBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnitBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnitBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnitBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnitBase, 4084552538);
	template<> TANKOS_API UClass* StaticClass<AUnitBase>()
	{
		return AUnitBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnitBase(Z_Construct_UClass_AUnitBase, &AUnitBase::StaticClass, TEXT("/Script/Tankos"), TEXT("AUnitBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnitBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
