#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PlayerHeadWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateHealthGaugeColor
struct UPlayerHeadWidget_C_UpdateHealthGaugeColor_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.AddAlphaWhenADS
struct UPlayerHeadWidget_C_AddAlphaWhenADS_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.IsEmptyPlayerName
struct UPlayerHeadWidget_C_IsEmptyPlayerName_Params
{
	bool                                               EmptyPlayerName;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateTextColor
struct UPlayerHeadWidget_C_UpdateTextColor_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.IsGroggy
struct UPlayerHeadWidget_C_IsGroggy_Params
{
	bool                                               IsGroggy;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.GetHealthPercent
struct UPlayerHeadWidget_C_GetHealthPercent_Params
{
	float                                              Health;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.GetGroggyHealthPercent
struct UPlayerHeadWidget_C_GetGroggyHealthPercent_Params
{
	float                                              GroggyHealth;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateHealthGauge
struct UPlayerHeadWidget_C_UpdateHealthGauge_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.Construct
struct UPlayerHeadWidget_C_Construct_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.Tick
struct UPlayerHeadWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.SetCharacterIconPosition_UC
struct UPlayerHeadWidget_C_SetCharacterIconPosition_UC_Params
{
	struct FVector2D*                                  Pos_UC;                                                   // (Parm, IsPlainOldData)
	bool*                                              IsHidden;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.CustomTick
struct UPlayerHeadWidget_C_CustomTick_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.TimerCheckUpdateList
struct UPlayerHeadWidget_C_TimerCheckUpdateList_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.SetPlayerNameTag
struct UPlayerHeadWidget_C_SetPlayerNameTag_Params
{
	struct FName*                                      PlayerName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.SetTeamNumber
struct UPlayerHeadWidget_C_SetTeamNumber_Params
{
	int*                                               TeamNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               teamColor;                                                // (Parm, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.SetIndicatorColor
struct UPlayerHeadWidget_C_SetIndicatorColor_Params
{
	struct FLinearColor*                               teamColor;                                                // (Parm, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateWeaponIcon
struct UPlayerHeadWidget_C_UpdateWeaponIcon_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.ExecuteUbergraph_PlayerHeadWidget
struct UPlayerHeadWidget_C_ExecuteUbergraph_PlayerHeadWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
