#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_KillMessageWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function KillMessageWidget.KillMessageWidget_C.UpdateDeathMessage
struct UKillMessageWidget_C_UpdateDeathMessage_Params
{
	struct FDeathMessage                               NewDeathMessage;                                          // (Parm)
};

// Function KillMessageWidget.KillMessageWidget_C.SetKillMessageFont
struct UKillMessageWidget_C_SetKillMessageFont_Params
{
};

// Function KillMessageWidget.KillMessageWidget_C.OnPrepass_1
struct UKillMessageWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.SetKillMessageText
struct UKillMessageWidget_C_SetKillMessageText_Params
{
};

// Function KillMessageWidget.KillMessageWidget_C.GetNumStartTeam
struct UKillMessageWidget_C_GetNumStartTeam_Params
{
	int                                                NumStartTeam;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.On_AlivePlayer_Prepass_1
struct UKillMessageWidget_C_On_AlivePlayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.On_MyKills_Prepass_1
struct UKillMessageWidget_C_On_MyKills_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.GetBrushColor_1
struct UKillMessageWidget_C_GetBrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.GetTeamAlive
struct UKillMessageWidget_C_GetTeamAlive_Params
{
	int                                                Alive;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.Get_AlivePlayer_Text_1
struct UKillMessageWidget_C_Get_AlivePlayer_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function KillMessageWidget.KillMessageWidget_C.GetAlivePlayerNum
struct UKillMessageWidget_C_GetAlivePlayerNum_Params
{
	int                                                AlivePlayer;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.GetKillNum
struct UKillMessageWidget_C_GetKillNum_Params
{
	int                                                KillNum;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.Get_Killer_Visibility_1
struct UKillMessageWidget_C_Get_Killer_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.Get_Insert2_Visibility_1
struct UKillMessageWidget_C_Get_Insert2_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.Get_Insert_Visibility_1
struct UKillMessageWidget_C_Get_Insert_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.GetFadeInAnimation
struct UKillMessageWidget_C_GetFadeInAnimation_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.GetFadeOutAnimation
struct UKillMessageWidget_C_GetFadeOutAnimation_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.InitializeKillMessageText
struct UKillMessageWidget_C_InitializeKillMessageText_Params
{
};

// Function KillMessageWidget.KillMessageWidget_C.IsVictimTeam
struct UKillMessageWidget_C_IsVictimTeam_Params
{
	bool                                               IsTeam;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.IsKillerTeam
struct UKillMessageWidget_C_IsKillerTeam_Params
{
	bool                                               IsTeam;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KillMessageWidget.KillMessageWidget_C.Construct
struct UKillMessageWidget_C_Construct_Params
{
};

// Function KillMessageWidget.KillMessageWidget_C.ExecuteUbergraph_KillMessageWidget
struct UKillMessageWidget_C_ExecuteUbergraph_KillMessageWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
