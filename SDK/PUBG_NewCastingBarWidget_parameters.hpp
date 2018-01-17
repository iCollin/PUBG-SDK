#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_NewCastingBarWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NewCastingBarWidget.NewCastingBarWidget_C.On_CastingBarCanvas_Prepass_1
struct UNewCastingBarWidget_C_On_CastingBarCanvas_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewCastingBarWidget.NewCastingBarWidget_C.GetRemainingCastTime
struct UNewCastingBarWidget_C_GetRemainingCastTime_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NewCastingBarWidget.NewCastingBarWidget_C.GetCastingNameText
struct UNewCastingBarWidget_C_GetCastingNameText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NewCastingBarWidget.NewCastingBarWidget_C.GetCastingProgressBarPercent
struct UNewCastingBarWidget_C_GetCastingProgressBarPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NewCastingBarWidget.NewCastingBarWidget_C.Construct
struct UNewCastingBarWidget_C_Construct_Params
{
};

// Function NewCastingBarWidget.NewCastingBarWidget_C.Tick
struct UNewCastingBarWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewCastingBarWidget.NewCastingBarWidget_C.Destruct
struct UNewCastingBarWidget_C_Destruct_Params
{
};

// Function NewCastingBarWidget.NewCastingBarWidget_C.OnInteract
struct UNewCastingBarWidget_C_OnInteract_Params
{
};

// Function NewCastingBarWidget.NewCastingBarWidget_C.ExecuteUbergraph_NewCastingBarWidget
struct UNewCastingBarWidget_C_ExecuteUbergraph_NewCastingBarWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
