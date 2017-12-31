#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TslCheckBox_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslCheckBox.TslCheckBox_C.GetGamePadHelpWidgetClass
struct UTslCheckBox_C_GetGamePadHelpWidgetClass_Params
{
	class UClass*                                      GuideClass;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslCheckBox.TslCheckBox_C.OnKeyDown
struct UTslCheckBox_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslCheckBox.TslCheckBox_C.OnKeyUp
struct UTslCheckBox_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslCheckBox.TslCheckBox_C.IsToggleKey
struct UTslCheckBox_C_IsToggleKey_Params
{
	struct FKey                                        Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               IsToggle;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslCheckBox.TslCheckBox_C.Toggle
struct UTslCheckBox_C_Toggle_Params
{
};

// Function TslCheckBox.TslCheckBox_C.ProcessKeyDown
struct UTslCheckBox_C_ProcessKeyDown_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	struct FEventReply                                 Reply;                                                    // (Parm, OutParm)
};

// Function TslCheckBox.TslCheckBox_C.OnFocusReceived
struct UTslCheckBox_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslCheckBox.TslCheckBox_C.OnPrepass_1
struct UTslCheckBox_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslCheckBox.TslCheckBox_C.OnMouseButtonDown_1
struct UTslCheckBox_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslCheckBox.TslCheckBox_C.GetBrush_1
struct UTslCheckBox_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslCheckBox.TslCheckBox_C.IsChekced
struct UTslCheckBox_C_IsChekced_Params
{
	bool                                               bChecked;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslCheckBox.TslCheckBox_C.SetCheck
struct UTslCheckBox_C_SetCheck_Params
{
	bool                                               bChecked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslCheckBox.TslCheckBox_C.GetDisplayName
struct UTslCheckBox_C_GetDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslCheckBox.TslCheckBox_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
struct UTslCheckBox_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function TslCheckBox.TslCheckBox_C.ExecuteUbergraph_TslCheckBox
struct UTslCheckBox_C_ExecuteUbergraph_TslCheckBox_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
