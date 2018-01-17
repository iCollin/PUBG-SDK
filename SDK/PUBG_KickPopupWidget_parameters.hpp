#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_KickPopupWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function KickPopupWidget.KickPopupWidget_C.SetPopup
struct UKickPopupWidget_C_SetPopup_Params
{
	EPopupStyle                                        PopupStyle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             PressedDelegate;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function KickPopupWidget.KickPopupWidget_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UKickPopupWidget_C_BndEvt__YesButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function KickPopupWidget.KickPopupWidget_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
struct UKickPopupWidget_C_BndEvt__NoButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function KickPopupWidget.KickPopupWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
struct UKickPopupWidget_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function KickPopupWidget.KickPopupWidget_C.Construct
struct UKickPopupWidget_C_Construct_Params
{
};

// Function KickPopupWidget.KickPopupWidget_C.Destruct
struct UKickPopupWidget_C_Destruct_Params
{
};

// Function KickPopupWidget.KickPopupWidget_C.Custom Event_1
struct UKickPopupWidget_C_Custom_Event_1_Params
{
};

// Function KickPopupWidget.KickPopupWidget_C.ExecuteUbergraph_KickPopupWidget
struct UKickPopupWidget_C_ExecuteUbergraph_KickPopupWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KickPopupWidget.KickPopupWidget_C.ButttonClick__DelegateSignature
struct UKickPopupWidget_C_ButttonClick__DelegateSignature_Params
{
	EPopupButtonID                                     NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
