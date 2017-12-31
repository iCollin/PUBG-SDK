#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_KillMessageWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetMessageColorAndOpacity
struct UBP_KillMessageWidget_C_SetMessageColorAndOpacity_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, IsPlainOldData)
};

// Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetFontStyleAndSize
struct UBP_KillMessageWidget_C_SetFontStyleAndSize_Params
{
	class UTextBlock*                                  Text;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Style;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetLayoutTo
struct UBP_KillMessageWidget_C_SetLayoutTo_Params
{
	bool                                               bIsHighlight;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetDeathMessage_Implementation
struct UBP_KillMessageWidget_C_SetDeathMessage_Implementation_Params
{
	struct FDeathMessage                               DeathMessage;                                             // (Parm, OutParm, ReferenceParm)
};

// Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetDeathMessage
struct UBP_KillMessageWidget_C_SetDeathMessage_Params
{
	struct FDeathMessage*                              InDeathMessage;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_KillMessageWidget.BP_KillMessageWidget_C.ExecuteUbergraph_BP_KillMessageWidget
struct UBP_KillMessageWidget_C_ExecuteUbergraph_BP_KillMessageWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
