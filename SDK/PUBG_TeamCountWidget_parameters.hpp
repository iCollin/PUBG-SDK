#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TeamCountWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TeamCountWidget.TeamCountWidget_C.OnPrepass_1
struct UTeamCountWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeamCountWidget.TeamCountWidget_C.On_KillCount_Prepass_1
struct UTeamCountWidget_C_On_KillCount_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeamCountWidget.TeamCountWidget_C.Construct
struct UTeamCountWidget_C_Construct_Params
{
};

// Function TeamCountWidget.TeamCountWidget_C.ExecuteUbergraph_TeamCountWidget
struct UTeamCountWidget_C_ExecuteUbergraph_TeamCountWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
