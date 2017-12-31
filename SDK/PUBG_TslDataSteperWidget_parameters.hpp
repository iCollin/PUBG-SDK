#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TslDataSteperWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslDataSteperWidget.TslDataSteperWidget_C.GetGamePadHelpWidgetClass
struct UTslDataSteperWidget_C_GetGamePadHelpWidgetClass_Params
{
	class UClass*                                      GuideClass;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslDataSteperWidget.TslDataSteperWidget_C.PrevOption
struct UTslDataSteperWidget_C_PrevOption_Params
{
};

// Function TslDataSteperWidget.TslDataSteperWidget_C.NextOption
struct UTslDataSteperWidget_C_NextOption_Params
{
};

// Function TslDataSteperWidget.TslDataSteperWidget_C.SetSelectedOption
struct UTslDataSteperWidget_C_SetSelectedOption_Params
{
	struct FString                                     SelectOption;                                             // (Parm, ZeroConstructor)
};

// Function TslDataSteperWidget.TslDataSteperWidget_C.AddOption
struct UTslDataSteperWidget_C_AddOption_Params
{
	struct FString                                     NewOption;                                                // (Parm, ZeroConstructor)
};

// Function TslDataSteperWidget.TslDataSteperWidget_C.ClearOption
struct UTslDataSteperWidget_C_ClearOption_Params
{
};

// Function TslDataSteperWidget.TslDataSteperWidget_C.GetSelectedOption
struct UTslDataSteperWidget_C_GetSelectedOption_Params
{
	struct FString                                     SelectOption;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function TslDataSteperWidget.TslDataSteperWidget_C.OnKeyDown
struct UTslDataSteperWidget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslDataSteperWidget.TslDataSteperWidget_C.OnKeyUp
struct UTslDataSteperWidget_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslDataSteperWidget.TslDataSteperWidget_C.ProcessKeyDown
struct UTslDataSteperWidget_C_ProcessKeyDown_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	struct FEventReply                                 Reply;                                                    // (Parm, OutParm)
};

// Function TslDataSteperWidget.TslDataSteperWidget_C.OnFocusReceived
struct UTslDataSteperWidget_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslDataSteperWidget.TslDataSteperWidget_C.OnPrepass_1
struct UTslDataSteperWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslDataSteperWidget.TslDataSteperWidget_C.GetDisplayName
struct UTslDataSteperWidget_C_GetDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
