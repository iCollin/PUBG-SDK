#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CountDownWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CountDownWidget.CountDownWidget_C.GetTslGameState
struct UCountDownWidget_C_GetTslGameState_Params
{
	class ATslGameState*                               GameState;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CountDownWidget.CountDownWidget_C.On_CountDownBlock_Prepass_1
struct UCountDownWidget_C_On_CountDownBlock_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CountDownWidget.CountDownWidget_C.On_CountDownText_Prepass_1
struct UCountDownWidget_C_On_CountDownText_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CountDownWidget.CountDownWidget_C.Get_CountDownText_Visibility_1
struct UCountDownWidget_C_Get_CountDownText_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CountDownWidget.CountDownWidget_C.Get_CountDownText_Text_1
struct UCountDownWidget_C_Get_CountDownText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
