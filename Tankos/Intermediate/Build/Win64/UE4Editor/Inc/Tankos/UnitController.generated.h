// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKOS_UnitController_generated_h
#error "UnitController.generated.h already included, missing '#pragma once' in UnitController.h"
#endif
#define TANKOS_UnitController_generated_h

#define Tankos_Source_Tankos_UnitController_h_14_SPARSE_DATA
#define Tankos_Source_Tankos_UnitController_h_14_RPC_WRAPPERS
#define Tankos_Source_Tankos_UnitController_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Tankos_Source_Tankos_UnitController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnitController(); \
	friend struct Z_Construct_UClass_AUnitController_Statics; \
public: \
	DECLARE_CLASS(AUnitController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankos"), NO_API) \
	DECLARE_SERIALIZER(AUnitController)


#define Tankos_Source_Tankos_UnitController_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAUnitController(); \
	friend struct Z_Construct_UClass_AUnitController_Statics; \
public: \
	DECLARE_CLASS(AUnitController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankos"), NO_API) \
	DECLARE_SERIALIZER(AUnitController)


#define Tankos_Source_Tankos_UnitController_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnitController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnitController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnitController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnitController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnitController(AUnitController&&); \
	NO_API AUnitController(const AUnitController&); \
public:


#define Tankos_Source_Tankos_UnitController_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnitController(AUnitController&&); \
	NO_API AUnitController(const AUnitController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnitController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnitController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnitController)


#define Tankos_Source_Tankos_UnitController_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerUnit() { return STRUCT_OFFSET(AUnitController, PlayerUnit); }


#define Tankos_Source_Tankos_UnitController_h_11_PROLOG
#define Tankos_Source_Tankos_UnitController_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankos_Source_Tankos_UnitController_h_14_PRIVATE_PROPERTY_OFFSET \
	Tankos_Source_Tankos_UnitController_h_14_SPARSE_DATA \
	Tankos_Source_Tankos_UnitController_h_14_RPC_WRAPPERS \
	Tankos_Source_Tankos_UnitController_h_14_INCLASS \
	Tankos_Source_Tankos_UnitController_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tankos_Source_Tankos_UnitController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankos_Source_Tankos_UnitController_h_14_PRIVATE_PROPERTY_OFFSET \
	Tankos_Source_Tankos_UnitController_h_14_SPARSE_DATA \
	Tankos_Source_Tankos_UnitController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Tankos_Source_Tankos_UnitController_h_14_INCLASS_NO_PURE_DECLS \
	Tankos_Source_Tankos_UnitController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKOS_API UClass* StaticClass<class AUnitController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tankos_Source_Tankos_UnitController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
