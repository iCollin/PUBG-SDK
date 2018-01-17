#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_OptionButton_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OptionButton.OptionButton_C.SetButtonBgColor
struct UOptionButton_C_SetButtonBgColor_Params
{
	struct FLinearColor                                InBackgroundColor;                                        // (Parm, IsPlainOldData)
};

// Function OptionButton.OptionButton_C.GetText_1
struct UOptionButton_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OptionButton.OptionButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature
struct UOptionButton_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OptionButton.OptionButton_C.ExecuteUbergraph_OptionButton
struct UOptionButton_C_ExecuteUbergraph_OptionButton_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionButton.OptionButton_C.OnClicked__DelegateSignature
struct UOptionButton_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
