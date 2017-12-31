#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GeneralSettingWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GeneralSettingWidget.GeneralSettingWidget_C.IsChangeVideoCapture
struct UGeneralSettingWidget_C_IsChangeVideoCapture_Params
{
	bool                                               IsChange;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.IsEnable_VideoCapture
struct UGeneralSettingWidget_C_IsEnable_VideoCapture_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.ApplyMiniMapType
struct UGeneralSettingWidget_C_ApplyMiniMapType_Params
{
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.SettingDefault
struct UGeneralSettingWidget_C_SettingDefault_Params
{
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.IsChanged
struct UGeneralSettingWidget_C_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.GetLanguageCultureName
struct UGeneralSettingWidget_C_GetLanguageCultureName_Params
{
	struct FString                                     CultureName;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.InitializeResolutionIWidget
struct UGeneralSettingWidget_C_InitializeResolutionIWidget_Params
{
	bool                                               bConstruct;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.Construct
struct UGeneralSettingWidget_C_Construct_Params
{
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.OnApply
struct UGeneralSettingWidget_C_OnApply_Params
{
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.OnDefault
struct UGeneralSettingWidget_C_OnDefault_Params
{
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.OnReset
struct UGeneralSettingWidget_C_OnReset_Params
{
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.ExecuteUbergraph_GeneralSettingWidget
struct UGeneralSettingWidget_C_ExecuteUbergraph_GeneralSettingWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
