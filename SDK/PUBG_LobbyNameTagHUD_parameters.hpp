#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyNameTagHUD_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LobbyNameTagHUD.LobbyNameTagHUD_C.CleanUpNameTagWidget
struct ULobbyNameTagHUD_C_CleanUpNameTagWidget_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyNameTagHUD.LobbyNameTagHUD_C.SetupNameTagWidget
struct ULobbyNameTagHUD_C_SetupNameTagWidget_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyNameTagHUD.LobbyNameTagHUD_C.GetNameTagWidget
struct ULobbyNameTagHUD_C_GetNameTagWidget_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTslLobbyNameTagWidget*                      Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyNameTagHUD.LobbyNameTagHUD_C.On_NameTag_0_Prepass_1
struct ULobbyNameTagHUD_C_On_NameTag_0_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyNameTagHUD.LobbyNameTagHUD_C.Construct
struct ULobbyNameTagHUD_C_Construct_Params
{
};

// Function LobbyNameTagHUD.LobbyNameTagHUD_C.ExecuteUbergraph_LobbyNameTagHUD
struct ULobbyNameTagHUD_C_ExecuteUbergraph_LobbyNameTagHUD_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
