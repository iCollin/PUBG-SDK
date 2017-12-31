#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MouseSettingsWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MouseSettingsWidget.MouseSettingsWidget_C.IsEnableApply
struct UMouseSettingsWidget_C_IsEnableApply_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MouseSettingsWidget.MouseSettingsWidget_C.initailizeMouseSettingsWidget
struct UMouseSettingsWidget_C_initailizeMouseSettingsWidget_Params
{
	bool                                               bIsDefaultSetting;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MouseSettingsWidget.MouseSettingsWidget_C.IsChanged
struct UMouseSettingsWidget_C_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MouseSettingsWidget.MouseSettingsWidget_C.OnDefault
struct UMouseSettingsWidget_C_OnDefault_Params
{
};

// Function MouseSettingsWidget.MouseSettingsWidget_C.OnApply
struct UMouseSettingsWidget_C_OnApply_Params
{
};

// Function MouseSettingsWidget.MouseSettingsWidget_C.Construct
struct UMouseSettingsWidget_C_Construct_Params
{
};

// Function MouseSettingsWidget.MouseSettingsWidget_C.OnReset
struct UMouseSettingsWidget_C_OnReset_Params
{
};

// Function MouseSettingsWidget.MouseSettingsWidget_C.ExecuteUbergraph_MouseSettingsWidget
struct UMouseSettingsWidget_C_ExecuteUbergraph_MouseSettingsWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
