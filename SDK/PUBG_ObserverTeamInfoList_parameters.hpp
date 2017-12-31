#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ObserverTeamInfoList_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.On_TeamList_Prepass_2
struct UObserverTeamInfoList_C_On_TeamList_Prepass_2_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.CollapseAllSquadPlayerInfos
struct UObserverTeamInfoList_C_CollapseAllSquadPlayerInfos_Params
{
};

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.SetSquadPlayerInfo
struct UObserverTeamInfoList_C_SetSquadPlayerInfo_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ATslCharacter*                               TslCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USquadPlayerInfoWidget_C*                    SquadPlayerInfo;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.DestructSquadPlayerInfoPool
struct UObserverTeamInfoList_C_DestructSquadPlayerInfoPool_Params
{
};

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.ConstructSquadPlayerInfoPool
struct UObserverTeamInfoList_C_ConstructSquadPlayerInfoPool_Params
{
};

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.On_TeamList_Prepass_1
struct UObserverTeamInfoList_C_On_TeamList_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.IsSameTeam
struct UObserverTeamInfoList_C_IsSameTeam_Params
{
	class ATslCharacter*                               Character1;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class ATslCharacter*                               Character2;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               retVal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.FindSpectateOrFollowCharacter
struct UObserverTeamInfoList_C_FindSpectateOrFollowCharacter_Params
{
	class ATslCharacter*                               TslCharacter;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.UpdateTeamList
struct UObserverTeamInfoList_C_UpdateTeamList_Params
{
};

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.Construct
struct UObserverTeamInfoList_C_Construct_Params
{
};

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.Tick
struct UObserverTeamInfoList_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.CustomTick
struct UObserverTeamInfoList_C_CustomTick_Params
{
};

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.TimerCheckUpdateList
struct UObserverTeamInfoList_C_TimerCheckUpdateList_Params
{
};

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.Destruct
struct UObserverTeamInfoList_C_Destruct_Params
{
};

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.ExecuteUbergraph_ObserverTeamInfoList
struct UObserverTeamInfoList_C_ExecuteUbergraph_ObserverTeamInfoList_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
