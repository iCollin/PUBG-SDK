#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_XboxGamepadHelpWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function XboxGamepadHelpWidget.XboxGamepadHelpWidget_C.OnKeyDown
struct UXboxGamepadHelpWidget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function XboxGamepadHelpWidget.XboxGamepadHelpWidget_C.OnMouseButtonDown_1
struct UXboxGamepadHelpWidget_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function XboxGamepadHelpWidget.XboxGamepadHelpWidget_C.SetState
struct UXboxGamepadHelpWidget_C_SetState_Params
{
	int                                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function XboxGamepadHelpWidget.XboxGamepadHelpWidget_C.Construct
struct UXboxGamepadHelpWidget_C_Construct_Params
{
};

// Function XboxGamepadHelpWidget.XboxGamepadHelpWidget_C.OnFocusLost
struct UXboxGamepadHelpWidget_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
};

// Function XboxGamepadHelpWidget.XboxGamepadHelpWidget_C.Tick
struct UXboxGamepadHelpWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function XboxGamepadHelpWidget.XboxGamepadHelpWidget_C.ExecuteUbergraph_XboxGamepadHelpWidget
struct UXboxGamepadHelpWidget_C_ExecuteUbergraph_XboxGamepadHelpWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
