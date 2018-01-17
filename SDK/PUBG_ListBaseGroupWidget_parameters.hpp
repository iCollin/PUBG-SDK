#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ListBaseGroupWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ListBaseGroupWidget.ListBaseGroupWidget_C.GetChilderenCount
struct UListBaseGroupWidget_C_GetChilderenCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ListBaseGroupWidget.ListBaseGroupWidget_C.AddChild
struct UListBaseGroupWidget_C_AddChild_Params
{
	class UWidget*                                     Content;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ListBaseGroupWidget.ListBaseGroupWidget_C.Clear
struct UListBaseGroupWidget_C_Clear_Params
{
};

// Function ListBaseGroupWidget.ListBaseGroupWidget_C.On_List_Prepass_1
struct UListBaseGroupWidget_C_On_List_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ListBaseGroupWidget.ListBaseGroupWidget_C.AddCategoryGroup
struct UListBaseGroupWidget_C_AddCategoryGroup_Params
{
	class UCategoryGroupWidget_C*                      CategoryGroup;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
