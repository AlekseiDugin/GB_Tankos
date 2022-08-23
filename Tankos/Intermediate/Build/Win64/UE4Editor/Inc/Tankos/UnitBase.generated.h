// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKOS_UnitBase_generated_h
#error "UnitBase.generated.h already included, missing '#pragma once' in UnitBase.h"
#endif
#define TANKOS_UnitBase_generated_h

#define Tankos_Source_Tankos_UnitBase_h_17_SPARSE_DATA
#define Tankos_Source_Tankos_UnitBase_h_17_RPC_WRAPPERS
#define Tankos_Source_Tankos_UnitBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Tankos_Source_Tankos_UnitBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnitBase(); \
	friend struct Z_Construct_UClass_AUnitBase_Statics; \
public: \
	DECLARE_CLASS(AUnitBase, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankos"), NO_API) \
	DECLARE_SERIALIZER(AUnitBase)


#define Tankos_Source_Tankos_UnitBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAUnitBase(); \
	friend struct Z_Construct_UClass_AUnitBase_Statics; \
public: \
	DECLARE_CLASS(AUnitBase, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankos"), NO_API) \
	DECLARE_SERIALIZER(AUnitBase)


#define Tankos_Source_Tankos_UnitBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnitBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnitBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnitBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnitBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnitBase(AUnitBase&&); \
	NO_API AUnitBase(const AUnitBase&); \
public:


#define Tankos_Source_Tankos_UnitBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnitBase(AUnitBase&&); \
	NO_API AUnitBase(const AUnitBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnitBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnitBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnitBase)


#define Tankos_Source_Tankos_UnitBase_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__M_BoxCollision() { return STRUCT_OFFSET(AUnitBase, M_BoxCollision); } \
	FORCEINLINE static uint32 __PPO__M_UnitBody() { return STRUCT_OFFSET(AUnitBase, M_UnitBody); } \
	FORCEINLINE static uint32 __PPO__M_UnitTurret() { return STRUCT_OFFSET(AUnitBase, M_UnitTurret); } \
	FORCEINLINE static uint32 __PPO__M_MoveSpeed() { return STRUCT_OFFSET(AUnitBase, M_MoveSpeed); } \
	FORCEINLINE static uint32 __PPO__M_RotateSpeed() { return STRUCT_OFFSET(AUnitBase, M_RotateSpeed); }


#define Tankos_Source_Tankos_UnitBase_h_14_PROLOG
#define Tankos_Source_Tankos_UnitBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankos_Source_Tankos_UnitBase_h_17_PRIVATE_PROPERTY_OFFSET \
	Tankos_Source_Tankos_UnitBase_h_17_SPARSE_DATA \
	Tankos_Source_Tankos_UnitBase_h_17_RPC_WRAPPERS \
	Tankos_Source_Tankos_UnitBase_h_17_INCLASS \
	Tankos_Source_Tankos_UnitBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tankos_Source_Tankos_UnitBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankos_Source_Tankos_UnitBase_h_17_PRIVATE_PROPERTY_OFFSET \
	Tankos_Source_Tankos_UnitBase_h_17_SPARSE_DATA \
	Tankos_Source_Tankos_UnitBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Tankos_Source_Tankos_UnitBase_h_17_INCLASS_NO_PURE_DECLS \
	Tankos_Source_Tankos_UnitBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKOS_API UClass* StaticClass<class AUnitBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tankos_Source_Tankos_UnitBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
