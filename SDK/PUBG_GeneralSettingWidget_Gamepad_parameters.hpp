#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GeneralSettingWidget_Gamepad_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.GetGamePadHelpWidgetClass
struct UGeneralSettingWidget_Gamepad_C_GetGamePadHelpWidgetClass_Params
{
	class UClass*                                      GuideClass;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.OnKeyDown
struct UGeneralSettingWidget_Gamepad_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.GetCurrentFocusWidget
struct UGeneralSettingWidget_Gamepad_C_GetCurrentFocusWidget_Params
{
	class UWidget*                                     FocusWidget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.OnFocusReceived
struct UGeneralSettingWidget_Gamepad_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.IsEnable_VideoCapture
struct UGeneralSettingWidget_Gamepad_C_IsEnable_VideoCapture_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.SettingDefault
struct UGeneralSettingWidget_Gamepad_C_SettingDefault_Params
{
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.IsChanged
struct UGeneralSettingWidget_Gamepad_C_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.GetLanguageCultureName
struct UGeneralSettingWidget_Gamepad_C_GetLanguageCultureName_Params
{
	struct FString                                     CultureName;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.InitializeResolutionIWidget
struct UGeneralSettingWidget_Gamepad_C_InitializeResolutionIWidget_Params
{
	bool                                               bConstruct;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.Construct
struct UGeneralSettingWidget_Gamepad_C_Construct_Params
{
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.OnApply
struct UGeneralSettingWidget_Gamepad_C_OnApply_Params
{
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.OnDefault
struct UGeneralSettingWidget_Gamepad_C_OnDefault_Params
{
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.OnReset
struct UGeneralSettingWidget_Gamepad_C_OnReset_Params
{
};

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.ExecuteUbergraph_GeneralSettingWidget_Gamepad
struct UGeneralSettingWidget_Gamepad_C_ExecuteUbergraph_GeneralSettingWidget_Gamepad_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
