#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MainLobbyHUD_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MainLobbyHUD.MainLobbyHUD_C.OnKey_LobbySystemMenu
struct UMainLobbyHUD_C_OnKey_LobbySystemMenu_Params
{
};

// Function MainLobbyHUD.MainLobbyHUD_C.OnKeyDown
struct UMainLobbyHUD_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainLobbyHUD.MainLobbyHUD_C.OnPrepass_isShipping
struct UMainLobbyHUD_C_OnPrepass_isShipping_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLobbyHUD.MainLobbyHUD_C.CleanUpNameTagWidget
struct UMainLobbyHUD_C_CleanUpNameTagWidget_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLobbyHUD.MainLobbyHUD_C.SetupNameTagWidget
struct UMainLobbyHUD_C_SetupNameTagWidget_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLobbyHUD.MainLobbyHUD_C.GetNameTagWidget
struct UMainLobbyHUD_C_GetNameTagWidget_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTslLobbyNameTagWidget*                      Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainLobbyHUD.MainLobbyHUD_C.OnDestroyCharacter
struct UMainLobbyHUD_C_OnDestroyCharacter_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLobbyHUD.MainLobbyHUD_C.OnCreateCharacter
struct UMainLobbyHUD_C_OnCreateCharacter_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLobbyHUD.MainLobbyHUD_C.CloseWebPopupByID
struct UMainLobbyHUD_C_CloseWebPopupByID_Params
{
	struct FString                                     WebPopupID;                                               // (Parm, ZeroConstructor)
};

// Function MainLobbyHUD.MainLobbyHUD_C.RemoveWebPopup
struct UMainLobbyHUD_C_RemoveWebPopup_Params
{
	class UWebPopup_C*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLobbyHUD.MainLobbyHUD_C.AddWebPopup
struct UMainLobbyHUD_C_AddWebPopup_Params
{
	class UWebPopup_C*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLobbyHUD.MainLobbyHUD_C.CanShowWebPopup
struct UMainLobbyHUD_C_CanShowWebPopup_Params
{
	struct FString                                     PopupId;                                                  // (Parm, ZeroConstructor)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainLobbyHUD.MainLobbyHUD_C.ShowWebPopupImpl
struct UMainLobbyHUD_C_ShowWebPopupImpl_Params
{
	struct FWebPopupParam                              Param;                                                    // (Parm)
};

// Function MainLobbyHUD.MainLobbyHUD_C.On_HorizontalBox_90_Prepass_1
struct UMainLobbyHUD_C_On_HorizontalBox_90_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLobbyHUD.MainLobbyHUD_C.OnReload
struct UMainLobbyHUD_C_OnReload_Params
{
};

// Function MainLobbyHUD.MainLobbyHUD_C.GetMainCoherentWidget
struct UMainLobbyHUD_C_GetMainCoherentWidget_Params
{
	class UCoherentUIGTWidget*                         Browser;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainLobbyHUD.MainLobbyHUD_C.OnKey_SystemMenuOrEscape
struct UMainLobbyHUD_C_OnKey_SystemMenuOrEscape_Params
{
};

// Function MainLobbyHUD.MainLobbyHUD_C.InitializeHUD
struct UMainLobbyHUD_C_InitializeHUD_Params
{
};

// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_Setting_K2Node_ComponentBoundEvent_190_OnButtonClickedEvent__DelegateSignature
struct UMainLobbyHUD_C_BndEvt__Button_Setting_K2Node_ComponentBoundEvent_190_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_Reload_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature
struct UMainLobbyHUD_C_BndEvt__Button_Reload_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature
struct UMainLobbyHUD_C_BndEvt__Button_Quit_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainLobbyHUD.MainLobbyHUD_C.ShowWebPopup
struct UMainLobbyHUD_C_ShowWebPopup_Params
{
	struct FWebPopupParam                              Param;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function MainLobbyHUD.MainLobbyHUD_C.Construct
struct UMainLobbyHUD_C_Construct_Params
{
};

// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
struct UMainLobbyHUD_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_NewSystemMenu_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature
struct UMainLobbyHUD_C_BndEvt__Button_NewSystemMenu_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainLobbyHUD.MainLobbyHUD_C.ExecuteUbergraph_MainLobbyHUD
struct UMainLobbyHUD_C_ExecuteUbergraph_MainLobbyHUD_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
