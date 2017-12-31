#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ControlOptionWidget_Gameapd_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.GetGamePadHelpWidgetClass
struct UControlOptionWidget_Gameapd_C_GetGamePadHelpWidgetClass_Params
{
	class UClass*                                      GuideClass;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnKeyDown
struct UControlOptionWidget_Gameapd_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.GetCurrentFocusWidget
struct UControlOptionWidget_Gameapd_C_GetCurrentFocusWidget_Params
{
	class UWidget*                                     FocusWidget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.IsChanged
struct UControlOptionWidget_Gameapd_C_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnPrevOrNextFocusableWidget
struct UControlOptionWidget_Gameapd_C_OnPrevOrNextFocusableWidget_Params
{
	bool*                                              bNext;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     FocusableWidget;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnFocusReceived
struct UControlOptionWidget_Gameapd_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.Construct
struct UControlOptionWidget_Gameapd_C_Construct_Params
{
};

// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnDefault
struct UControlOptionWidget_Gameapd_C_OnDefault_Params
{
};

// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnReset
struct UControlOptionWidget_Gameapd_C_OnReset_Params
{
};

// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnApply
struct UControlOptionWidget_Gameapd_C_OnApply_Params
{
};

// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.ExecuteUbergraph_ControlOptionWidget_Gameapd
struct UControlOptionWidget_Gameapd_C_ExecuteUbergraph_ControlOptionWidget_Gameapd_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
