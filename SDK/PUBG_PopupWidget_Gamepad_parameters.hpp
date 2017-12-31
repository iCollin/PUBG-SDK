#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PopupWidget_Gamepad_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.SetPopup
struct UPopupWidget_Gamepad_C_SetPopup_Params
{
	EPopupStyle                                        PopupStyle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             PressedDelegate;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature
struct UPopupWidget_Gamepad_C_BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature
struct UPopupWidget_Gamepad_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.Construct
struct UPopupWidget_Gamepad_C_Construct_Params
{
};

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.Custom Event_1
struct UPopupWidget_Gamepad_C_Custom_Event_1_Params
{
};

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.Destruct
struct UPopupWidget_Gamepad_C_Destruct_Params
{
};

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.XBoxOneOk
struct UPopupWidget_Gamepad_C_XBoxOneOk_Params
{
};

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.Custom Event_2
struct UPopupWidget_Gamepad_C_Custom_Event_2_Params
{
};

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.XBoxOneCancel
struct UPopupWidget_Gamepad_C_XBoxOneCancel_Params
{
};

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.ExecuteUbergraph_PopupWidget_Gamepad
struct UPopupWidget_Gamepad_C_ExecuteUbergraph_PopupWidget_Gamepad_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.ButtonClickDispatcher__DelegateSignature
struct UPopupWidget_Gamepad_C_ButtonClickDispatcher__DelegateSignature_Params
{
	EPopupButtonID                                     NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
