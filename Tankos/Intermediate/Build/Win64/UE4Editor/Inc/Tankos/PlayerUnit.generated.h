// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKOS_PlayerUnit_generated_h
#error "PlayerUnit.generated.h already included, missing '#pragma once' in PlayerUnit.h"
#endif
#define TANKOS_PlayerUnit_generated_h

#define Tankos_Source_Tankos_PlayerUnit_h_16_SPARSE_DATA
#define Tankos_Source_Tankos_PlayerUnit_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveForward);


#define Tankos_Source_Tankos_PlayerUnit_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveForward);


#define Tankos_Source_Tankos_PlayerUnit_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerUnit(); \
	friend struct Z_Construct_UClass_APlayerUnit_Statics; \
public: \
	DECLARE_CLASS(APlayerUnit, AUnitBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankos"), NO_API) \
	DECLARE_SERIALIZER(APlayerUnit)


#define Tankos_Source_Tankos_PlayerUnit_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerUnit(); \
	friend struct Z_Construct_UClass_APlayerUnit_Statics; \
public: \
	DECLARE_CLASS(APlayerUnit, AUnitBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankos"), NO_API) \
	DECLARE_SERIALIZER(APlayerUnit)


#define Tankos_Source_Tankos_PlayerUnit_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerUnit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerUnit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerUnit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerUnit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerUnit(APlayerUnit&&); \
	NO_API APlayerUnit(const APlayerUnit&); \
public:


#define Tankos_Source_Tankos_PlayerUnit_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerUnit(APlayerUnit&&); \
	NO_API APlayerUnit(const APlayerUnit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerUnit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerUnit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerUnit)


#define Tankos_Source_Tankos_PlayerUnit_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__M_SpringArm() { return STRUCT_OFFSET(APlayerUnit, M_SpringArm); } \
	FORCEINLINE static uint32 __PPO__M_Camera() { return STRUCT_OFFSET(APlayerUnit, M_Camera); }


#define Tankos_Source_Tankos_PlayerUnit_h_13_PROLOG
#define Tankos_Source_Tankos_PlayerUnit_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankos_Source_Tankos_PlayerUnit_h_16_PRIVATE_PROPERTY_OFFSET \
	Tankos_Source_Tankos_PlayerUnit_h_16_SPARSE_DATA \
	Tankos_Source_Tankos_PlayerUnit_h_16_RPC_WRAPPERS \
	Tankos_Source_Tankos_PlayerUnit_h_16_INCLASS \
	Tankos_Source_Tankos_PlayerUnit_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tankos_Source_Tankos_PlayerUnit_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankos_Source_Tankos_PlayerUnit_h_16_PRIVATE_PROPERTY_OFFSET \
	Tankos_Source_Tankos_PlayerUnit_h_16_SPARSE_DATA \
	Tankos_Source_Tankos_PlayerUnit_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Tankos_Source_Tankos_PlayerUnit_h_16_INCLASS_NO_PURE_DECLS \
	Tankos_Source_Tankos_PlayerUnit_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKOS_API UClass* StaticClass<class APlayerUnit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tankos_Source_Tankos_PlayerUnit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
