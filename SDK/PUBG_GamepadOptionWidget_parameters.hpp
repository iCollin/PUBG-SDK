#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GamepadOptionWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GamepadOptionWidget.GamepadOptionWidget_C.ClearGuide
struct UGamepadOptionWidget_C_ClearGuide_Params
{
};

// Function GamepadOptionWidget.GamepadOptionWidget_C.OnPrepass_LTorRTVisibility
struct UGamepadOptionWidget_C_OnPrepass_LTorRTVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadOptionWidget.GamepadOptionWidget_C.OnKeyDown
struct UGamepadOptionWidget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GamepadOptionWidget.GamepadOptionWidget_C.On_GuideLayer_Prepass_1
struct UGamepadOptionWidget_C_On_GuideLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadOptionWidget.GamepadOptionWidget_C.On_CONTROL_Prepass_1
struct UGamepadOptionWidget_C_On_CONTROL_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadOptionWidget.GamepadOptionWidget_C.PrevOrNextPage
struct UGamepadOptionWidget_C_PrevOrNextPage_Params
{
	bool                                               bNext;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEventReply                                 Reply;                                                    // (Parm, OutParm)
};

// Function GamepadOptionWidget.GamepadOptionWidget_C.OnFocusReceived
struct UGamepadOptionWidget_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GamepadOptionWidget.GamepadOptionWidget_C.ProcessKeyDown
struct UGamepadOptionWidget_C_ProcessKeyDown_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	struct FEventReply                                 Replay;                                                   // (Parm, OutParm)
};

// Function GamepadOptionWidget.GamepadOptionWidget_C.Destruct
struct UGamepadOptionWidget_C_Destruct_Params
{
};

// Function GamepadOptionWidget.GamepadOptionWidget_C.Tick
struct UGamepadOptionWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadOptionWidget.GamepadOptionWidget_C.ExecuteUbergraph_GamepadOptionWidget
struct UGamepadOptionWidget_C_ExecuteUbergraph_GamepadOptionWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
