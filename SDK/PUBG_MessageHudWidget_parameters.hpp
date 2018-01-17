#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MessageHudWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MessageHudWidget.MessageHudWidget_C.Icon_DisplayKilledMessage
struct UMessageHudWidget_C_Icon_DisplayKilledMessage_Params
{
	struct FDeathMessage                               Input;                                                    // (Parm)
};

// Function MessageHudWidget.MessageHudWidget_C.Normal_DisplayKilledMessage
struct UMessageHudWidget_C_Normal_DisplayKilledMessage_Params
{
	struct FDeathMessage                               InputPin;                                                 // (Parm)
};

// Function MessageHudWidget.MessageHudWidget_C.CreateGamePlayMessage
struct UMessageHudWidget_C_CreateGamePlayMessage_Params
{
	struct FText                                       Message;                                                  // (Parm)
	TEnumAsByte<ETextJustify>                          TextAlignment;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TextSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFade_In;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UNewSystemMessageWidget_C*                   MessageWidget;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MessageHudWidget.MessageHudWidget_C.OnDisplayMessage
struct UMessageHudWidget_C_OnDisplayMessage_Params
{
	ESystemMessageType                                 MessageType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (Parm)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageHudWidget.MessageHudWidget_C.CreateKillMessage
struct UMessageHudWidget_C_CreateKillMessage_Params
{
	struct FDeathMessage                               DeathMessage;                                             // (Parm)
	TEnumAsByte<ETextJustify>                          TextAlignment;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 TextColor;                                                // (Parm)
	int                                                TextSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFade_In;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowMyKillCount;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMessagePool;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UNewSystemMessageWidget_C*                   MessageWidget;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MessageHudWidget.MessageHudWidget_C.CreateSystemMessage
struct UMessageHudWidget_C_CreateSystemMessage_Params
{
	struct FText                                       Message;                                                  // (Parm)
	TEnumAsByte<ETextJustify>                          TextAlignment;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 TextColor;                                                // (Parm)
	int                                                TextSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFade_In;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UNewSystemMessageWidget_C*                   MessageWidget;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MessageHudWidget.MessageHudWidget_C.OnDisplayKilledMessage
struct UMessageHudWidget_C_OnDisplayKilledMessage_Params
{
	struct FDeathMessage                               DeathMessage;                                             // (Parm)
};

// Function MessageHudWidget.MessageHudWidget_C.OnDisplaySystemMessage
struct UMessageHudWidget_C_OnDisplaySystemMessage_Params
{
	ESystemMessageType                                 MessageType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (Parm)
};

// Function MessageHudWidget.MessageHudWidget_C.InitializeMessageHUD
struct UMessageHudWidget_C_InitializeMessageHUD_Params
{
};

// Function MessageHudWidget.MessageHudWidget_C.Construct
struct UMessageHudWidget_C_Construct_Params
{
};

// Function MessageHudWidget.MessageHudWidget_C.ExecuteUbergraph_MessageHudWidget
struct UMessageHudWidget_C_ExecuteUbergraph_MessageHudWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
