// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTweenRotator;
#ifdef TWEENMAKER_BP_OnTweenRotatorChangeDelegate_generated_h
#error "BP_OnTweenRotatorChangeDelegate.generated.h already included, missing '#pragma once' in BP_OnTweenRotatorChangeDelegate.h"
#endif
#define TWEENMAKER_BP_OnTweenRotatorChangeDelegate_generated_h

#define SearchInCupboards_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenRotatorChangeDelegate_h_7_DELEGATE \
struct _Script_TweenMaker_eventBP_OnTweenRotatorChange_Parms \
{ \
	UTweenRotator* Tween; \
}; \
static inline void FBP_OnTweenRotatorChange_DelegateWrapper(const FMulticastScriptDelegate& BP_OnTweenRotatorChange, UTweenRotator* Tween) \
{ \
	_Script_TweenMaker_eventBP_OnTweenRotatorChange_Parms Parms; \
	Parms.Tween=Tween; \
	BP_OnTweenRotatorChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SearchInCupboards_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenRotatorChangeDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
