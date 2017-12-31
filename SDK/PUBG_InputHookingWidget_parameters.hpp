#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_InputHookingWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function InputHookingWidget.InputHookingWidget_C.OnInputAxis
struct UInputHookingWidget_C_OnInputAxis_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputHookingWidget.InputHookingWidget_C.OnInputAction
struct UInputHookingWidget_C_OnInputAction_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
