#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_InputEventActor_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function InputEventActor.InputEventActor_C.ProcessEnableInput
struct AInputEventActor_C_ProcessEnableInput_Params
{
	class APlayerController*                           OwningPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputEventActor.InputEventActor_C.UserConstructionScript
struct AInputEventActor_C_UserConstructionScript_Params
{
};

// Function InputEventActor.InputEventActor_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_4
struct AInputEventActor_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function InputEventActor.InputEventActor_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_3
struct AInputEventActor_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function InputEventActor.InputEventActor_C.ExecuteUbergraph_InputEventActor
struct AInputEventActor_C_ExecuteUbergraph_InputEventActor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputEventActor.InputEventActor_C.OnInputAction__DelegateSignature
struct AInputEventActor_C_OnInputAction__DelegateSignature_Params
{
	bool                                               bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
