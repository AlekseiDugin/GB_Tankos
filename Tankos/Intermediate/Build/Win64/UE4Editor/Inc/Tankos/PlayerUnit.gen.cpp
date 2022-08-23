// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankos/PlayerUnit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerUnit() {}
// Cross Module References
	TANKOS_API UClass* Z_Construct_UClass_APlayerUnit_NoRegister();
	TANKOS_API UClass* Z_Construct_UClass_APlayerUnit();
	TANKOS_API UClass* Z_Construct_UClass_AUnitBase();
	UPackage* Z_Construct_UPackage__Script_Tankos();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APlayerUnit::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	void APlayerUnit::StaticRegisterNativesAPlayerUnit()
	{
		UClass* Class = APlayerUnit::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveForward", &APlayerUnit::execMoveForward },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerUnit_MoveForward_Statics
	{
		struct PlayerUnit_eventMoveForward_Parms
		{
			float AxisValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerUnit_MoveForward_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerUnit_eventMoveForward_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerUnit_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerUnit_MoveForward_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerUnit_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xd0\x94\xd0\xb2\xd0\xb8\xd0\xb3\xd0\xb0\xd1\x82\xd1\x8c\xd1\x81\xd1\x8f \xd0\xb2\xd0\xbf\xd0\xb5\xd1\x80\xd1\x91\xd0\xb4\n" },
		{ "ModuleRelativePath", "PlayerUnit.h" },
		{ "ToolTip", "\xd0\x94\xd0\xb2\xd0\xb8\xd0\xb3\xd0\xb0\xd1\x82\xd1\x8c\xd1\x81\xd1\x8f \xd0\xb2\xd0\xbf\xd0\xb5\xd1\x80\xd1\x91\xd0\xb4" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerUnit_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerUnit, nullptr, "MoveForward", nullptr, nullptr, sizeof(PlayerUnit_eventMoveForward_Parms), Z_Construct_UFunction_APlayerUnit_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerUnit_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerUnit_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerUnit_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerUnit_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerUnit_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerUnit_NoRegister()
	{
		return APlayerUnit::StaticClass();
	}
	struct Z_Construct_UClass_APlayerUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_M_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_M_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_M_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_M_Camera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUnitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankos,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerUnit_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerUnit_MoveForward, "MoveForward" }, // 3093279827
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerUnit_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerUnit.h" },
		{ "ModuleRelativePath", "PlayerUnit.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerUnit_Statics::NewProp_M_SpringArm_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerUnit_Statics::NewProp_M_SpringArm = { "M_SpringArm", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerUnit, M_SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerUnit_Statics::NewProp_M_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerUnit_Statics::NewProp_M_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerUnit_Statics::NewProp_M_Camera_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//\xd0\x9a\xd1\x80\xd0\xb5\xd0\xbf\xd0\xbb\xd0\xb5\xd0\xbd\xd0\xb8\xd0\xb5 \xd0\xb4\xd0\xbb\xd1\x8f \xd0\xba\xd0\xb0\xd0\xbc\xd0\xb5\xd1\x80\xd1\x8b\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerUnit.h" },
		{ "ToolTip", "\xd0\x9a\xd1\x80\xd0\xb5\xd0\xbf\xd0\xbb\xd0\xb5\xd0\xbd\xd0\xb8\xd0\xb5 \xd0\xb4\xd0\xbb\xd1\x8f \xd0\xba\xd0\xb0\xd0\xbc\xd0\xb5\xd1\x80\xd1\x8b" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerUnit_Statics::NewProp_M_Camera = { "M_Camera", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerUnit, M_Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerUnit_Statics::NewProp_M_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerUnit_Statics::NewProp_M_Camera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerUnit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerUnit_Statics::NewProp_M_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerUnit_Statics::NewProp_M_Camera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerUnit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerUnit_Statics::ClassParams = {
		&APlayerUnit::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerUnit_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerUnit_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerUnit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerUnit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerUnit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerUnit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerUnit, 827583134);
	template<> TANKOS_API UClass* StaticClass<APlayerUnit>()
	{
		return APlayerUnit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerUnit(Z_Construct_UClass_APlayerUnit, &APlayerUnit::StaticClass, TEXT("/Script/Tankos"), TEXT("APlayerUnit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerUnit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
