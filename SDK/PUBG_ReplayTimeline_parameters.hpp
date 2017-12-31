#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ReplayTimeline_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ReplayTimeline.ReplayTimeline_C.UnBindOnGotoTimelineDoneToFindCharacter
struct UReplayTimeline_C_UnBindOnGotoTimelineDoneToFindCharacter_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.BindOnGotoTimelineDoneToFindCharacter
struct UReplayTimeline_C_BindOnGotoTimelineDoneToFindCharacter_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.UnBindOnGotoTimelineDoneToFindKillerOrVictim
struct UReplayTimeline_C_UnBindOnGotoTimelineDoneToFindKillerOrVictim_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.BindOnGotoTimelineDoneToFindKillerOrVictim
struct UReplayTimeline_C_BindOnGotoTimelineDoneToFindKillerOrVictim_Params
{
	struct FString                                     strKillerID;                                              // (Parm, ZeroConstructor)
	struct FString                                     strKillerName;                                            // (Parm, ZeroConstructor)
	struct FString                                     strVictimID;                                              // (Parm, ZeroConstructor)
	struct FString                                     strVictimName;                                            // (Parm, ZeroConstructor)
};

// Function ReplayTimeline.ReplayTimeline_C.CheckVideoCapture
struct UReplayTimeline_C_CheckVideoCapture_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.OnToggleReplayTimeline
struct UReplayTimeline_C_OnToggleReplayTimeline_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.SetTimelineMaximize
struct UReplayTimeline_C_SetTimelineMaximize_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.SetTimelineMinimize
struct UReplayTimeline_C_SetTimelineMinimize_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.CreateGetGroggyEventsTimer
struct UReplayTimeline_C_CreateGetGroggyEventsTimer_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.ClearDBNOEventItems
struct UReplayTimeline_C_ClearDBNOEventItems_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.HideDBNOEvents
struct UReplayTimeline_C_HideDBNOEvents_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.ShowDBNOEvents
struct UReplayTimeline_C_ShowDBNOEvents_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.ClearKillEventItems
struct UReplayTimeline_C_ClearKillEventItems_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.CreateGetKillEventsTimer
struct UReplayTimeline_C_CreateGetKillEventsTimer_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.UpdatePlayPauseBtns
struct UReplayTimeline_C_UpdatePlayPauseBtns_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.SetVisibleCtrls
struct UReplayTimeline_C_SetVisibleCtrls_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayTimeline.ReplayTimeline_C.OnSpeedDown
struct UReplayTimeline_C_OnSpeedDown_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.OnSpeedUp
struct UReplayTimeline_C_OnSpeedUp_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.OnPlay
struct UReplayTimeline_C_OnPlay_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.OnPause
struct UReplayTimeline_C_OnPause_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.OnTogglePause
struct UReplayTimeline_C_OnTogglePause_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.SetEnableUI
struct UReplayTimeline_C_SetEnableUI_Params
{
	bool                                               IsEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayTimeline.ReplayTimeline_C.HideKillEvents
struct UReplayTimeline_C_HideKillEvents_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.ShowKillEvents
struct UReplayTimeline_C_ShowKillEvents_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.SetCurTimeSpeed
struct UReplayTimeline_C_SetCurTimeSpeed_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.FloatToSeconds
struct UReplayTimeline_C_FloatToSeconds_Params
{
	float                                              InputTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       TextTime;                                                 // (Parm, OutParm)
};

// Function ReplayTimeline.ReplayTimeline_C.UpdateTimeline
struct UReplayTimeline_C_UpdateTimeline_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.Construct
struct UReplayTimeline_C_Construct_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.Tick
struct UReplayTimeline_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayTimeline.ReplayTimeline_C.BndEvt__TimelineSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
struct UReplayTimeline_C_BndEvt__TimelineSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnPause_K2Node_ComponentBoundEvent_234_OnButtonClickedEvent__DelegateSignature
struct UReplayTimeline_C_BndEvt__BtnPause_K2Node_ComponentBoundEvent_234_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnPlay_K2Node_ComponentBoundEvent_257_OnButtonClickedEvent__DelegateSignature
struct UReplayTimeline_C_BndEvt__BtnPlay_K2Node_ComponentBoundEvent_257_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnSpeedUp_K2Node_ComponentBoundEvent_317_OnButtonClickedEvent__DelegateSignature
struct UReplayTimeline_C_BndEvt__BtnSpeedUp_K2Node_ComponentBoundEvent_317_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnSpeedDown_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature
struct UReplayTimeline_C_BndEvt__BtnSpeedDown_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.GetKillEventsDone
struct UReplayTimeline_C_GetKillEventsDone_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.BndEvt__CheckBoxKills_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature
struct UReplayTimeline_C_BndEvt__CheckBoxKills_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayTimeline.ReplayTimeline_C.GetKillEvents
struct UReplayTimeline_C_GetKillEvents_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.Destruct
struct UReplayTimeline_C_Destruct_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.GetGroggyEvents
struct UReplayTimeline_C_GetGroggyEvents_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.GetGroggyEventsDone
struct UReplayTimeline_C_GetGroggyEventsDone_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.BndEvt__CheckBoxGroggys_K2Node_ComponentBoundEvent_86_OnCheckBoxComponentStateChanged__DelegateSignature
struct UReplayTimeline_C_BndEvt__CheckBoxGroggys_K2Node_ComponentBoundEvent_86_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnRec_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
struct UReplayTimeline_C_BndEvt__BtnRec_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnStop_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
struct UReplayTimeline_C_BndEvt__BtnStop_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.OnGoToTimelineDoneToFindKillerOrVictim
struct UReplayTimeline_C_OnGoToTimelineDoneToFindKillerOrVictim_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.OnGoToTimelineDoneToFindCharacter
struct UReplayTimeline_C_OnGoToTimelineDoneToFindCharacter_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.O_1
struct UReplayTimeline_C_O_1_Params
{
};

// Function ReplayTimeline.ReplayTimeline_C.ExecuteUbergraph_ReplayTimeline
struct UReplayTimeline_C_ExecuteUbergraph_ReplayTimeline_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
