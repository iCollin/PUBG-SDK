#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ScreenSettingWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ScreenSettingWidget.ScreenSettingWidget_C.IsEnable
struct UScreenSettingWidget_C_IsEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScreenSettingWidget.ScreenSettingWidget_C.GetSelectedFullScreenMode
struct UScreenSettingWidget_C_GetSelectedFullScreenMode_Params
{
	TEnumAsByte<EWindowMode>                           FullscreenMode;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenSettingWidget.ScreenSettingWidget_C.SettingDefault
struct UScreenSettingWidget_C_SettingDefault_Params
{
};

// Function ScreenSettingWidget.ScreenSettingWidget_C.IsChanged
struct UScreenSettingWidget_C_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScreenSettingWidget.ScreenSettingWidget_C.GetResolutionEnabled
struct UScreenSettingWidget_C_GetResolutionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScreenSettingWidget.ScreenSettingWidget_C.GetSelectedResolution
struct UScreenSettingWidget_C_GetSelectedResolution_Params
{
	struct FScreenResolution                           SelectedResolution;                                       // (Parm, OutParm)
};

// Function ScreenSettingWidget.ScreenSettingWidget_C.InitializeResolutionIWidget
struct UScreenSettingWidget_C_InitializeResolutionIWidget_Params
{
};

// Function ScreenSettingWidget.ScreenSettingWidget_C.OnDefault
struct UScreenSettingWidget_C_OnDefault_Params
{
};

// Function ScreenSettingWidget.ScreenSettingWidget_C.OnReset
struct UScreenSettingWidget_C_OnReset_Params
{
};

// Function ScreenSettingWidget.ScreenSettingWidget_C.OnApply
struct UScreenSettingWidget_C_OnApply_Params
{
};

// Function ScreenSettingWidget.ScreenSettingWidget_C.Construct
struct UScreenSettingWidget_C_Construct_Params
{
};

// Function ScreenSettingWidget.ScreenSettingWidget_C.ExecuteUbergraph_ScreenSettingWidget
struct UScreenSettingWidget_C_ExecuteUbergraph_ScreenSettingWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
