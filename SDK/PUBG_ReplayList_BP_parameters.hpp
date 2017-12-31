#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ReplayList_BP_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ReplayList_BP.ReplayList_BP_C.OnUpdateItem
struct AReplayList_BP_C_OnUpdateItem_Params
{
	struct FReplayItem                                 inReplayItem;                                             // (Parm)
};

// Function ReplayList_BP.ReplayList_BP_C.UpdateReplayList
struct AReplayList_BP_C_UpdateReplayList_Params
{
	struct FString                                     inRegionOrLocal;                                          // (Parm, ZeroConstructor)
};

// Function ReplayList_BP.ReplayList_BP_C.CheckReplayBusyStatus
struct AReplayList_BP_C_CheckReplayBusyStatus_Params
{
	bool                                               bIsReplayBusy;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayList_BP.ReplayList_BP_C.OnGoPageBtn
struct AReplayList_BP_C_OnGoPageBtn_Params
{
};

// Function ReplayList_BP.ReplayList_BP_C.OnNextPageBtn
struct AReplayList_BP_C_OnNextPageBtn_Params
{
};

// Function ReplayList_BP.ReplayList_BP_C.OnPrevPageBtn
struct AReplayList_BP_C_OnPrevPageBtn_Params
{
};

// Function ReplayList_BP.ReplayList_BP_C.ClearReplayList
struct AReplayList_BP_C_ClearReplayList_Params
{
};

// Function ReplayList_BP.ReplayList_BP_C.UserConstructionScript
struct AReplayList_BP_C_UserConstructionScript_Params
{
};

// Function ReplayList_BP.ReplayList_BP_C.ReceiveBeginPlay
struct AReplayList_BP_C_ReceiveBeginPlay_Params
{
};

// Function ReplayList_BP.ReplayList_BP_C.CreateReplayListEvent
struct AReplayList_BP_C_CreateReplayListEvent_Params
{
};

// Function ReplayList_BP.ReplayList_BP_C.PrevPageEvent
struct AReplayList_BP_C_PrevPageEvent_Params
{
};

// Function ReplayList_BP.ReplayList_BP_C.NextPageEvent
struct AReplayList_BP_C_NextPageEvent_Params
{
};

// Function ReplayList_BP.ReplayList_BP_C.GoPageEvent
struct AReplayList_BP_C_GoPageEvent_Params
{
};

// Function ReplayList_BP.ReplayList_BP_C.OnItemClicked
struct AReplayList_BP_C_OnItemClicked_Params
{
	struct FString                                     RegionOrLocal;                                            // (Parm, ZeroConstructor)
	struct FReplayItem                                 inReplayItem;                                             // (Parm)
};

// Function ReplayList_BP.ReplayList_BP_C.ExecuteUbergraph_ReplayList_BP
struct AReplayList_BP_C_ExecuteUbergraph_ReplayList_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
