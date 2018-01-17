#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BloodSpotWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BloodSpotWidget.BloodSpotWidget_C.Start
struct UBloodSpotWidget_C_Start_Params
{
};

// Function BloodSpotWidget.BloodSpotWidget_C.Construct
struct UBloodSpotWidget_C_Construct_Params
{
};

// Function BloodSpotWidget.BloodSpotWidget_C.OnAnimationStarted
struct UBloodSpotWidget_C_OnAnimationStarted_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BloodSpotWidget.BloodSpotWidget_C.OnAnimationFinished
struct UBloodSpotWidget_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BloodSpotWidget.BloodSpotWidget_C.ExecuteUbergraph_BloodSpotWidget
struct UBloodSpotWidget_C_ExecuteUbergraph_BloodSpotWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
