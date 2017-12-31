#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ImportantMessageWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ImportantMessageWidget.ImportantMessageWidget_C.GetFadeInAnimation
struct UImportantMessageWidget_C_GetFadeInAnimation_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ImportantMessageWidget.ImportantMessageWidget_C.GetFadeOutAnimation
struct UImportantMessageWidget_C_GetFadeOutAnimation_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ImportantMessageWidget.ImportantMessageWidget_C.Construct
struct UImportantMessageWidget_C_Construct_Params
{
};

// Function ImportantMessageWidget.ImportantMessageWidget_C.ExecuteUbergraph_ImportantMessageWidget
struct UImportantMessageWidget_C_ExecuteUbergraph_ImportantMessageWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
