#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TslHealthGaugeBpWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.SetupHealthGaugeColor
struct UTslHealthGaugeBpWidget_C_SetupHealthGaugeColor_Params
{
	struct FLinearColor                                InitColor;                                                // (Parm, IsPlainOldData)
};

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.On_Background_Prepass_1
struct UTslHealthGaugeBpWidget_C_On_Background_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.Get_Background_ColorAndOpacity_1
struct UTslHealthGaugeBpWidget_C_Get_Background_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.Get_Background_Visibility_1
struct UTslHealthGaugeBpWidget_C_Get_Background_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.UpdateWaning
struct UTslHealthGaugeBpWidget_C_UpdateWaning_Params
{
};

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.UpdateColorGauge
struct UTslHealthGaugeBpWidget_C_UpdateColorGauge_Params
{
};

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.GetMoveCurve
struct UTslHealthGaugeBpWidget_C_GetMoveCurve_Params
{
	class UCurveFloat*                                 NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.SetHealth
struct UTslHealthGaugeBpWidget_C_SetHealth_Params
{
	float                                              NewDestination;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bGroggy;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.MoveTick
struct UTslHealthGaugeBpWidget_C_MoveTick_Params
{
};

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.GetHealthGaugeColorOpacity
struct UTslHealthGaugeBpWidget_C_GetHealthGaugeColorOpacity_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.Construct
struct UTslHealthGaugeBpWidget_C_Construct_Params
{
};

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.Tick
struct UTslHealthGaugeBpWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.StartMove
struct UTslHealthGaugeBpWidget_C_StartMove_Params
{
};

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.ExecuteUbergraph_TslHealthGaugeBpWidget
struct UTslHealthGaugeBpWidget_C_ExecuteUbergraph_TslHealthGaugeBpWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
