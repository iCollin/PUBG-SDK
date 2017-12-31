#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_InGameReplayMenu_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function InGameReplayMenu.InGameReplayMenu_C.SetHUD
struct UInGameReplayMenu_C_SetHUD_Params
{
	class ATslHUD*                                     inHUD;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InGameReplayMenu.InGameReplayMenu_C.GotoReplayList
struct UInGameReplayMenu_C_GotoReplayList_Params
{
	EPopupButtonID                                     ButtonID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InGameReplayMenu.InGameReplayMenu_C.QuitReplay
struct UInGameReplayMenu_C_QuitReplay_Params
{
	EPopupButtonID                                     ButtonID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InGameReplayMenu.InGameReplayMenu_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_228_OnButtonClickedEvent__DelegateSignature
struct UInGameReplayMenu_C_BndEvt__Button_Exit_K2Node_ComponentBoundEvent_228_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InGameReplayMenu.InGameReplayMenu_C.BndEvt__Button_Resume_K2Node_ComponentBoundEvent_247_OnButtonClickedEvent__DelegateSignature
struct UInGameReplayMenu_C_BndEvt__Button_Resume_K2Node_ComponentBoundEvent_247_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InGameReplayMenu.InGameReplayMenu_C.BndEvt__Button_ReplayList_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature
struct UInGameReplayMenu_C_BndEvt__Button_ReplayList_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InGameReplayMenu.InGameReplayMenu_C.HidePopupWidgetForReplay
struct UInGameReplayMenu_C_HidePopupWidgetForReplay_Params
{
};

// Function InGameReplayMenu.InGameReplayMenu_C.OpenReplayListMap
struct UInGameReplayMenu_C_OpenReplayListMap_Params
{
};

// Function InGameReplayMenu.InGameReplayMenu_C.ExecuteUbergraph_InGameReplayMenu
struct UInGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
