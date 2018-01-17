#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PlayerGroupWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerGroupWidget.PlayerGroupWidget_C.On_PlayerListBG_Prepass_1
struct UPlayerGroupWidget_C_On_PlayerListBG_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerGroupWidget.PlayerGroupWidget_C.On_PlayerListBorder_Prepass_1
struct UPlayerGroupWidget_C_On_PlayerListBorder_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerGroupWidget.PlayerGroupWidget_C.Clear
struct UPlayerGroupWidget_C_Clear_Params
{
};

// Function PlayerGroupWidget.PlayerGroupWidget_C.AddPlayerWidget
struct UPlayerGroupWidget_C_AddPlayerWidget_Params
{
	class UPlayerInfoWidget_C*                         PlayerInfo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerGroupWidget.PlayerGroupWidget_C.Construct
struct UPlayerGroupWidget_C_Construct_Params
{
};

// Function PlayerGroupWidget.PlayerGroupWidget_C.ExecuteUbergraph_PlayerGroupWidget
struct UPlayerGroupWidget_C_ExecuteUbergraph_PlayerGroupWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
