#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_TeamMarkWidget_new_3_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.DecideWidgetColors
struct UBP_TeamMarkWidget_new_2_C_DecideWidgetColors_Params
{
	bool                                               Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.IsFreeCam
struct UBP_TeamMarkWidget_new_2_C_IsFreeCam_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.OnPrepass_1
struct UBP_TeamMarkWidget_new_2_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.Get_PlayerName_Text_1
struct UBP_TeamMarkWidget_new_2_C_Get_PlayerName_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
