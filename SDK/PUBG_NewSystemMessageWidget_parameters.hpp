#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_NewSystemMessageWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NewSystemMessageWidget.NewSystemMessageWidget_C.PlayFadeIn
struct UNewSystemMessageWidget_C_PlayFadeIn_Params
{
};

// Function NewSystemMessageWidget.NewSystemMessageWidget_C.StartFadeIn
struct UNewSystemMessageWidget_C_StartFadeIn_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewSystemMessageWidget.NewSystemMessageWidget_C.GetFadeOutAnimation
struct UNewSystemMessageWidget_C_GetFadeOutAnimation_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewSystemMessageWidget.NewSystemMessageWidget_C.GetFadeInAnimation
struct UNewSystemMessageWidget_C_GetFadeInAnimation_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewSystemMessageWidget.NewSystemMessageWidget_C.SetTextSize
struct UNewSystemMessageWidget_C_SetTextSize_Params
{
	class UTextBlock*                                  TextBlock;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewSystemMessageWidget.NewSystemMessageWidget_C.StartFadeOut
struct UNewSystemMessageWidget_C_StartFadeOut_Params
{
};

// Function NewSystemMessageWidget.NewSystemMessageWidget_C.OnFadeOutFinished
struct UNewSystemMessageWidget_C_OnFadeOutFinished_Params
{
};

// Function NewSystemMessageWidget.NewSystemMessageWidget_C.OnFadeInFinished
struct UNewSystemMessageWidget_C_OnFadeInFinished_Params
{
};

// Function NewSystemMessageWidget.NewSystemMessageWidget_C.InitializeMessage
struct UNewSystemMessageWidget_C_InitializeMessage_Params
{
};

// Function NewSystemMessageWidget.NewSystemMessageWidget_C.Construct
struct UNewSystemMessageWidget_C_Construct_Params
{
};

// Function NewSystemMessageWidget.NewSystemMessageWidget_C.ExecuteUbergraph_NewSystemMessageWidget
struct UNewSystemMessageWidget_C_ExecuteUbergraph_NewSystemMessageWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewSystemMessageWidget.NewSystemMessageWidget_C.EndMessage__DelegateSignature
struct UNewSystemMessageWidget_C_EndMessage__DelegateSignature_Params
{
	class UNewSystemMessageWidget_C*                   SystemMessage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
