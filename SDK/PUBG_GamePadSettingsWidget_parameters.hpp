#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GamePadSettingsWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.GetGamePadHelpWidgetClass
struct UGamePadSettingsWidget_C_GetGamePadHelpWidgetClass_Params
{
	class UClass*                                      GuideClass;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnKeyDown
struct UGamePadSettingsWidget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnPrevOrNextFocusableWidget
struct UGamePadSettingsWidget_C_OnPrevOrNextFocusableWidget_Params
{
	bool*                                              bNext;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     FocusableWidget;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.GetCurrentFocusWidget
struct UGamePadSettingsWidget_C_GetCurrentFocusWidget_Params
{
	class UWidget*                                     FocusWidget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.GetFocusableWidgetByIndex
struct UGamePadSettingsWidget_C_GetFocusableWidgetByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.Test
struct UGamePadSettingsWidget_C_Test_Params
{
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.IsEnableApply
struct UGamePadSettingsWidget_C_IsEnableApply_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.initailizeMouseSettingsWidget
struct UGamePadSettingsWidget_C_initailizeMouseSettingsWidget_Params
{
	bool                                               bIsDefaultSetting;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.IsChanged
struct UGamePadSettingsWidget_C_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnDefault
struct UGamePadSettingsWidget_C_OnDefault_Params
{
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnApply
struct UGamePadSettingsWidget_C_OnApply_Params
{
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.Construct
struct UGamePadSettingsWidget_C_Construct_Params
{
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnReset
struct UGamePadSettingsWidget_C_OnReset_Params
{
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnFocusLost
struct UGamePadSettingsWidget_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
};

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.ExecuteUbergraph_GamePadSettingsWidget
struct UGamePadSettingsWidget_C_ExecuteUbergraph_GamePadSettingsWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
