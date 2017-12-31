#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ButtonWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ButtonWidget.ButtonWidget_C.OnKeyDown
struct UButtonWidget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ButtonWidget.ButtonWidget_C.OnFocusReceived
struct UButtonWidget_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ButtonWidget.ButtonWidget_C.MakeBrush
struct UButtonWidget_C_MakeBrush_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function ButtonWidget.ButtonWidget_C.Construct
struct UButtonWidget_C_Construct_Params
{
};

// Function ButtonWidget.ButtonWidget_C.OnButtonFocusReceived_Event
struct UButtonWidget_C_OnButtonFocusReceived_Event_Params
{
	bool                                               bHasFocus;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonWidget.ButtonWidget_C.OnFocusLost
struct UButtonWidget_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
};

// Function ButtonWidget.ButtonWidget_C.BndEvt__Button_32_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature
struct UButtonWidget_C_BndEvt__Button_32_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ButtonWidget.ButtonWidget_C.ExecuteUbergraph_ButtonWidget
struct UButtonWidget_C_ExecuteUbergraph_ButtonWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonWidget.ButtonWidget_C.OnGamepadB__DelegateSignature
struct UButtonWidget_C_OnGamepadB__DelegateSignature_Params
{
	bool                                               bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonWidget.ButtonWidget_C.OnGamepadA__DelegateSignature
struct UButtonWidget_C_OnGamepadA__DelegateSignature_Params
{
	bool                                               bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonWidget.ButtonWidget_C.OnNavigateKeyDown__DelegateSignature
struct UButtonWidget_C_OnNavigateKeyDown__DelegateSignature_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function ButtonWidget.ButtonWidget_C.OnButtonFocusReceived__DelegateSignature
struct UButtonWidget_C_OnButtonFocusReceived__DelegateSignature_Params
{
	bool                                               bHasFocus;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonWidget.ButtonWidget_C.OnClickedEventDispatcher__DelegateSignature
struct UButtonWidget_C_OnClickedEventDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
