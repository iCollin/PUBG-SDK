#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CastingBarInfoTextWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.On_CastingInfoCancelMsgLayer_Prepass_1
struct UCastingBarInfoTextWidget_C_On_CastingInfoCancelMsgLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.OnCastCancleorFinish
struct UCastingBarInfoTextWidget_C_OnCastCancleorFinish_Params
{
};

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.OnCastStart
struct UCastingBarInfoTextWidget_C_OnCastStart_Params
{
};

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.Get_CastingInfoCancelMsgLayer_ContentColorAndOpacity_1
struct UCastingBarInfoTextWidget_C_Get_CastingInfoCancelMsgLayer_ContentColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.On_CastingInfoCancelMsgBox_Prepass_1
struct UCastingBarInfoTextWidget_C_On_CastingInfoCancelMsgBox_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.Get_KeyText_Text_1
struct UCastingBarInfoTextWidget_C_Get_KeyText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.OnPrepass_1
struct UCastingBarInfoTextWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.GetVisibility_1
struct UCastingBarInfoTextWidget_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.GetCastName
struct UCastingBarInfoTextWidget_C_GetCastName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.Tick
struct UCastingBarInfoTextWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.Construct
struct UCastingBarInfoTextWidget_C_Construct_Params
{
};

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.Destruct
struct UCastingBarInfoTextWidget_C_Destruct_Params
{
};

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.ExecuteUbergraph_CastingBarInfoTextWidget
struct UCastingBarInfoTextWidget_C_ExecuteUbergraph_CastingBarInfoTextWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
