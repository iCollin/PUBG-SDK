#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CategoryGroupWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CategoryGroupWidget.CategoryGroupWidget_C.AddChild
struct UCategoryGroupWidget_C_AddChild_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function CategoryGroupWidget.CategoryGroupWidget_C.GetChilderenCount
struct UCategoryGroupWidget_C_GetChilderenCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CategoryGroupWidget.CategoryGroupWidget_C.Clear
struct UCategoryGroupWidget_C_Clear_Params
{
};

// Function CategoryGroupWidget.CategoryGroupWidget_C.OnPrepass_1
struct UCategoryGroupWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CategoryGroupWidget.CategoryGroupWidget_C.AddItemSlot
struct UCategoryGroupWidget_C_AddItemSlot_Params
{
	class UItemSlotWidget_C*                           ItemSlotWidget;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
