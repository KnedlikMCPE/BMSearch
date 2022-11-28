// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTweenContainer;
enum class ETweenLoopType : uint8;
class UObject;
enum class ETweenGenericType : uint8;
class UBaseTween;
#ifdef TWEENMAKER_TweenManagerActor_generated_h
#error "TweenManagerActor.generated.h already included, missing '#pragma once' in TweenManagerActor.h"
#endif
#define TWEENMAKER_TweenManagerActor_generated_h

#define BMSearch_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerActor_h_14_SPARSE_DATA
#define BMSearch_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerActor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_CreateTweenContainerStatic); \
	DECLARE_FUNCTION(execDeleteAllTweens); \
	DECLARE_FUNCTION(execDeleteAllTweensByObject); \
	DECLARE_FUNCTION(execFindTweenByName); \
	DECLARE_FUNCTION(execIsObjectTweening);


#define BMSearch_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_CreateTweenContainerStatic); \
	DECLARE_FUNCTION(execDeleteAllTweens); \
	DECLARE_FUNCTION(execDeleteAllTweensByObject); \
	DECLARE_FUNCTION(execFindTweenByName); \
	DECLARE_FUNCTION(execIsObjectTweening);


#define BMSearch_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATweenManagerActor(); \
	friend struct Z_Construct_UClass_ATweenManagerActor_Statics; \
public: \
	DECLARE_CLASS(ATweenManagerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TweenMaker"), NO_API) \
	DECLARE_SERIALIZER(ATweenManagerActor)


#define BMSearch_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATweenManagerActor(); \
	friend struct Z_Construct_UClass_ATweenManagerActor_Statics; \
public: \
	DECLARE_CLASS(ATweenManagerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TweenMaker"), NO_API) \
	DECLARE_SERIALIZER(ATweenManagerActor)


#define BMSearch_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATweenManagerActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATweenManagerActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATweenManagerActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATweenManagerActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATweenManagerActor(ATweenManagerActor&&); \
	NO_API ATweenManagerActor(const ATweenManagerActor&); \
public:


#define BMSearch_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATweenManagerActor(ATweenManagerActor&&); \
	NO_API ATweenManagerActor(const ATweenManagerActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATweenManagerActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATweenManagerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATweenManagerActor)


#define BMSearch_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerActor_h_14_PRIVATE_PROPERTY_OFFSET
#define BMSearch_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerActor_h_12_PROLOG
#define BMSearch_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BMSearch_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerActor_h_14_PRIVATE_PROPERTY_OFFSET \
	BMSearch_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerActor_h_14_SPARSE_DATA \
	BMSearch_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerActor_h_14_RPC_WRAPPERS \
	BMSearch_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerActor_h_14_INCLASS \
	BMSearch_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BMSearch_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BMSearch_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerActor_h_14_PRIVATE_PROPERTY_OFFSET \
	BMSearch_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerActor_h_14_SPARSE_DATA \
	BMSearch_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BMSearch_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerActor_h_14_INCLASS_NO_PURE_DECLS \
	BMSearch_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWEENMAKER_API UClass* StaticClass<class ATweenManagerActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BMSearch_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
