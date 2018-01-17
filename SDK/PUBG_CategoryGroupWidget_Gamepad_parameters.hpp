#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CategoryGroupWidget_Gamepad_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CategoryGroupWidget_Gamepad.CategoryGroupWidget_Gamepad_C.AddChild
struct UCategoryGroupWidget_Gamepad_C_AddChild_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function CategoryGroupWidget_Gamepad.CategoryGroupWidget_Gamepad_C.GetChilderenCount
struct UCategoryGroupWidget_Gamepad_C_GetChilderenCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CategoryGroupWidget_Gamepad.CategoryGroupWidget_Gamepad_C.Clear
struct UCategoryGroupWidget_Gamepad_C_Clear_Params
{
};

// Function CategoryGroupWidget_Gamepad.CategoryGroupWidget_Gamepad_C.OnPrepass_1
struct UCategoryGroupWidget_Gamepad_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CategoryGroupWidget_Gamepad.CategoryGroupWidget_Gamepad_C.AddItemSlot
struct UCategoryGroupWidget_Gamepad_C_AddItemSlot_Params
{
	class UItemSlotWidget_Gamepad_C*                   ItemSlotWidget;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
