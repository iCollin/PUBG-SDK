#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ListBaseGroupWidget_Gamepad_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C.GetChilderenCount
struct UListBaseGroupWidget_Gamepad_C_GetChilderenCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C.AddChild
struct UListBaseGroupWidget_Gamepad_C_AddChild_Params
{
	class UWidget*                                     Content;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C.Clear
struct UListBaseGroupWidget_Gamepad_C_Clear_Params
{
};

// Function ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C.On_List_Prepass_1
struct UListBaseGroupWidget_Gamepad_C_On_List_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C.AddCategoryGroup
struct UListBaseGroupWidget_Gamepad_C_AddCategoryGroup_Params
{
	class UCategoryGroupWidget_Gamepad_C*              CategoryGroup;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
