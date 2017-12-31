#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PlayerListWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerListWidget.PlayerListWidget_C.InitForReplay
struct UPlayerListWidget_C_InitForReplay_Params
{
};

// Function PlayerListWidget.PlayerListWidget_C.CheckChangeList
struct UPlayerListWidget_C_CheckChangeList_Params
{
	bool                                               bChange;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerListWidget.PlayerListWidget_C.OnPreviewKeyDown
struct UPlayerListWidget_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlayerListWidget.PlayerListWidget_C.IsIncludeDyingPlayer
struct UPlayerListWidget_C_IsIncludeDyingPlayer_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerListWidget.PlayerListWidget_C.UpdatePlayerList
struct UPlayerListWidget_C_UpdatePlayerList_Params
{
	float                                              InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerListWidget.PlayerListWidget_C.GetPlayersInDistance
struct UPlayerListWidget_C_GetPlayersInDistance_Params
{
	TArray<class ATslCharacter*>                       PlayerList;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function PlayerListWidget.PlayerListWidget_C.CheckUpdate
struct UPlayerListWidget_C_CheckUpdate_Params
{
};

// Function PlayerListWidget.PlayerListWidget_C.CreateOrUpdatePlayerInfo
struct UPlayerListWidget_C_CreateOrUpdatePlayerInfo_Params
{
	int                                                IndexToTest;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ATslCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerInfoWidget_C*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayerListWidget.PlayerListWidget_C.RefreshList
struct UPlayerListWidget_C_RefreshList_Params
{
};

// Function PlayerListWidget.PlayerListWidget_C.OnGotoTimelineDone_PlayerList
struct UPlayerListWidget_C_OnGotoTimelineDone_PlayerList_Params
{
};

// Function PlayerListWidget.PlayerListWidget_C.Construct
struct UPlayerListWidget_C_Construct_Params
{
};

// Function PlayerListWidget.PlayerListWidget_C.Tick
struct UPlayerListWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerListWidget.PlayerListWidget_C.BndEvt__DistanceSliderWidget_K2Node_ComponentBoundEvent_81_ChagedDistance__DelegateSignature
struct UPlayerListWidget_C_BndEvt__DistanceSliderWidget_K2Node_ComponentBoundEvent_81_ChagedDistance__DelegateSignature_Params
{
	float                                              NewDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerListWidget.PlayerListWidget_C.CheckChangeTimer
struct UPlayerListWidget_C_CheckChangeTimer_Params
{
};

// Function PlayerListWidget.PlayerListWidget_C.OnTurn
struct UPlayerListWidget_C_OnTurn_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerListWidget.PlayerListWidget_C.OnLookUp
struct UPlayerListWidget_C_OnLookUp_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerListWidget.PlayerListWidget_C.Custom Event_1
struct UPlayerListWidget_C_Custom_Event_1_Params
{
};

// Function PlayerListWidget.PlayerListWidget_C.Custom Event_2
struct UPlayerListWidget_C_Custom_Event_2_Params
{
};

// Function PlayerListWidget.PlayerListWidget_C.Destruct
struct UPlayerListWidget_C_Destruct_Params
{
};

// Function PlayerListWidget.PlayerListWidget_C.ExecuteUbergraph_PlayerListWidget
struct UPlayerListWidget_C_ExecuteUbergraph_PlayerListWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
