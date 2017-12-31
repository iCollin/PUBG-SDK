#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_NewMessageBorderWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NewMessageBorderWidget.NewMessageBorderWidget_C.TickMove
struct UNewMessageBorderWidget_C_TickMove_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMessageBorderWidget.NewMessageBorderWidget_C.UpdatePositionInfo
struct UNewMessageBorderWidget_C_UpdatePositionInfo_Params
{
};

// Function NewMessageBorderWidget.NewMessageBorderWidget_C.IsFull
struct UNewMessageBorderWidget_C_IsFull_Params
{
	bool                                               Full;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewMessageBorderWidget.NewMessageBorderWidget_C.SetSizeRule
struct UNewMessageBorderWidget_C_SetSizeRule_Params
{
	TEnumAsByte<ESlateSizeRule>                        TopSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateSizeRule>                        BottomSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMessageBorderWidget.NewMessageBorderWidget_C.OnRemoveMessage
struct UNewMessageBorderWidget_C_OnRemoveMessage_Params
{
	class UNewSystemMessageWidget_C*                   SystemMessageWidget;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMessageBorderWidget.NewMessageBorderWidget_C.AddMessage
struct UNewMessageBorderWidget_C_AddMessage_Params
{
	class UNewSystemMessageWidget_C*                   Message;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMessageBorderWidget.NewMessageBorderWidget_C.DisplayKilledMessage
struct UNewMessageBorderWidget_C_DisplayKilledMessage_Params
{
	struct FDeathMessage                               DeathMessage;                                             // (Parm)
};

// Function NewMessageBorderWidget.NewMessageBorderWidget_C.Construct
struct UNewMessageBorderWidget_C_Construct_Params
{
};

// Function NewMessageBorderWidget.NewMessageBorderWidget_C.Tick
struct UNewMessageBorderWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMessageBorderWidget.NewMessageBorderWidget_C.ExecuteUbergraph_NewMessageBorderWidget
struct UNewMessageBorderWidget_C_ExecuteUbergraph_NewMessageBorderWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
