#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_HudMain_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HudMain.HudMain_C.OnNotifyUnArmed
struct UHudMain_C_OnNotifyUnArmed_Params
{
	bool                                               bIsUnarmed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.OnNotifyVehicleLeave
struct UHudMain_C_OnNotifyVehicleLeave_Params
{
};

// Function HudMain.HudMain_C.OnNotifyVehicleRide
struct UHudMain_C_OnNotifyVehicleRide_Params
{
};

// Function HudMain.HudMain_C.OnNotifyReloaded
struct UHudMain_C_OnNotifyReloaded_Params
{
};

// Function HudMain.HudMain_C.OnNotifyReloadingNeed
struct UHudMain_C_OnNotifyReloadingNeed_Params
{
};

// Function HudMain.HudMain_C.OnInit_Delegate
struct UHudMain_C_OnInit_Delegate_Params
{
	class ATslBaseHUD**                                TslBaseHUD;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HudMain.HudMain_C.OnInit_Replay
struct UHudMain_C_OnInit_Replay_Params
{
	class ATslBaseHUD**                                TslBaseHUD;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HudMain.HudMain_C.OnInit_Input
struct UHudMain_C_OnInit_Input_Params
{
	class ATslBaseHUD**                                TslBaseHUD;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HudMain.HudMain_C.OnInit_Widget
struct UHudMain_C_OnInit_Widget_Params
{
	class ATslBaseHUD**                                TslBaseHUD;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HudMain.HudMain_C.OnMouseMove
struct UHudMain_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HudMain.HudMain_C.SetObserverSpectatingUp
struct UHudMain_C_SetObserverSpectatingUp_Params
{
};

// Function HudMain.HudMain_C.SetObserverSpectatingDown
struct UHudMain_C_SetObserverSpectatingDown_Params
{
};

// Function HudMain.HudMain_C.On_HideOnObserverSpectating_Prepass_1
struct UHudMain_C_On_HideOnObserverSpectating_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.ShouldShowReplayMenu
struct UHudMain_C_ShouldShowReplayMenu_Params
{
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.OnPrepass_3
struct UHudMain_C_OnPrepass_3_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.BindEventForShowReplayTimeline
struct UHudMain_C_BindEventForShowReplayTimeline_Params
{
};

// Function HudMain.HudMain_C.ShowReplayTimeLine
struct UHudMain_C_ShowReplayTimeLine_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.SetHUDForIngameReplayMenu
struct UHudMain_C_SetHUDForIngameReplayMenu_Params
{
};

// Function HudMain.HudMain_C.BindEventForMapClosing
struct UHudMain_C_BindEventForMapClosing_Params
{
};

// Function HudMain.HudMain_C.OnKey_ReplayMenuOrEscape
struct UHudMain_C_OnKey_ReplayMenuOrEscape_Params
{
};

// Function HudMain.HudMain_C.InitForReplay
struct UHudMain_C_InitForReplay_Params
{
};

// Function HudMain.HudMain_C.OnToggleOption
struct UHudMain_C_OnToggleOption_Params
{
};

// Function HudMain.HudMain_C.On_Name_Prepass_1
struct UHudMain_C_On_Name_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.UpdateReplayTimeline
struct UHudMain_C_UpdateReplayTimeline_Params
{
};

// Function HudMain.HudMain_C.OnToggleBattleList
struct UHudMain_C_OnToggleBattleList_Params
{
};

// Function HudMain.HudMain_C.OnMapHide
struct UHudMain_C_OnMapHide_Params
{
};

// Function HudMain.HudMain_C.OnMapShow
struct UHudMain_C_OnMapShow_Params
{
};

// Function HudMain.HudMain_C.OnKey_MapReleased
struct UHudMain_C_OnKey_MapReleased_Params
{
};

// Function HudMain.HudMain_C.OnKey_MapPressed
struct UHudMain_C_OnKey_MapPressed_Params
{
};

// Function HudMain.HudMain_C.OnShowCarePackageItemList
struct UHudMain_C_OnShowCarePackageItemList_Params
{
};

// Function HudMain.HudMain_C.GetMiniMapType
struct UHudMain_C_GetMiniMapType_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MiniMapype;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.On_BlueZoneGpsWidget_RoundType_Prepass_1
struct UHudMain_C_On_BlueZoneGpsWidget_RoundType_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.IsShowMapOrInventory
struct UHudMain_C_IsShowMapOrInventory_Params
{
	bool                                               bIsShow;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.Get_Spectating_Text_1
struct UHudMain_C_Get_Spectating_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HudMain.HudMain_C.OnPrepass_2
struct UHudMain_C_OnPrepass_2_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.On_CharacterCanvas_Prepass_1
struct UHudMain_C_On_CharacterCanvas_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.OnTogglePlayerList
struct UHudMain_C_OnTogglePlayerList_Params
{
};

// Function HudMain.HudMain_C.Get_KeyInfo_Text_1
struct UHudMain_C_Get_KeyInfo_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HudMain.HudMain_C.On_SpectatingKeyInfo_Prepass_1
struct UHudMain_C_On_SpectatingKeyInfo_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.IsCharacterAlive
struct UHudMain_C_IsCharacterAlive_Params
{
	bool                                               IsAlive;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.On_InventoryShowHiddenCanvas_Prepass_1
struct UHudMain_C_On_InventoryShowHiddenCanvas_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.Get_TextBlock_1_Text_1
struct UHudMain_C_Get_TextBlock_1_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HudMain.HudMain_C.On_OnlySpectating_Prepass_1
struct UHudMain_C_On_OnlySpectating_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.OnPrepass_1
struct UHudMain_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.OnPrepass_VisibilityOnMatchState
struct UHudMain_C_OnPrepass_VisibilityOnMatchState_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.On_BaseCanvas_Prepass_1
struct UHudMain_C_On_BaseCanvas_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.GetBoostRatio
struct UHudMain_C_GetBoostRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HudMain.HudMain_C.OnNitifyHit
struct UHudMain_C_OnNitifyHit_Params
{
	float                                              DamagePercent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EDamageTypeCategory                                DamageTypeCategory;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.Get_ParachuteText_Visibility_1
struct UHudMain_C_Get_ParachuteText_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HudMain.HudMain_C.Get_VisibilityOnMatchState
struct UHudMain_C_Get_VisibilityOnMatchState_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HudMain.HudMain_C.OnDisplaySystemMessage
struct UHudMain_C_OnDisplaySystemMessage_Params
{
	ESystemMessageType                                 MessageType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (Parm)
};

// Function HudMain.HudMain_C.OnDisplayKilledMessage
struct UHudMain_C_OnDisplayKilledMessage_Params
{
	struct FDeathMessage                               DeathMessage;                                             // (Parm)
};

// Function HudMain.HudMain_C.OnButtonClick
struct UHudMain_C_OnButtonClick_Params
{
	struct FString                                     ButotnName;                                               // (Parm, ZeroConstructor)
};

// Function HudMain.HudMain_C.Get_HealthBar_FillColorAndOpacity_1
struct UHudMain_C_Get_HealthBar_FillColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function HudMain.HudMain_C.OnKey_SystemMenuOrEscape
struct UHudMain_C_OnKey_SystemMenuOrEscape_Params
{
};

// Function HudMain.HudMain_C.Get_Vehicle_Health_Ratio
struct UHudMain_C_Get_Vehicle_Health_Ratio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HudMain.HudMain_C.GetFillColorAndOpacity_1
struct UHudMain_C_GetFillColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function HudMain.HudMain_C.Get_DebugInformation_Text_1
struct UHudMain_C_Get_DebugInformation_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HudMain.HudMain_C.OnToggleMap
struct UHudMain_C_OnToggleMap_Params
{
};

// Function HudMain.HudMain_C.Get_PlayerCoordinate_Text_1
struct UHudMain_C_Get_PlayerCoordinate_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HudMain.HudMain_C.Get_NumPlayersLeft_Text_1
struct UHudMain_C_Get_NumPlayersLeft_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HudMain.HudMain_C.Get_Health_Text_1
struct UHudMain_C_Get_Health_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HudMain.HudMain_C.Get_HealthMax_Text_1
struct UHudMain_C_Get_HealthMax_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HudMain.HudMain_C.GetHpRatio
struct UHudMain_C_GetHpRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HudMain.HudMain_C.OnPossessPawnChange
struct UHudMain_C_OnPossessPawnChange_Params
{
};

// Function HudMain.HudMain_C.Construct
struct UHudMain_C_Construct_Params
{
};

// Function HudMain.HudMain_C.OnShowWidget
struct UHudMain_C_OnShowWidget_Params
{
	struct FString                                     WidgetName;                                               // (Parm, ZeroConstructor)
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.HideMapForReplay
struct UHudMain_C_HideMapForReplay_Params
{
};

// Function HudMain.HudMain_C.CheckReplayTimer
struct UHudMain_C_CheckReplayTimer_Params
{
};

// Function HudMain.HudMain_C.CreateCheckReplayTimer
struct UHudMain_C_CreateCheckReplayTimer_Params
{
};

// Function HudMain.HudMain_C.ExecuteUbergraph_HudMain
struct UHudMain_C_ExecuteUbergraph_HudMain_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.ButtonClickedDispatcher__DelegateSignature
struct UHudMain_C_ButtonClickedDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
