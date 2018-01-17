#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BattleListWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BattleListWidget.BattleListWidget_C.SetBattleListSubTitle
struct UBattleListWidget_C_SetBattleListSubTitle_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SubTitle;                                                 // (Parm, ZeroConstructor)
};

// Function BattleListWidget.BattleListWidget_C.ClearBattleList
struct UBattleListWidget_C_ClearBattleList_Params
{
};

// Function BattleListWidget.BattleListWidget_C.CollapseAllPlayerInfos
struct UBattleListWidget_C_CollapseAllPlayerInfos_Params
{
};

// Function BattleListWidget.BattleListWidget_C.SetPlayerInfo
struct UBattleListWidget_C_SetPlayerInfo_Params
{
	class ATslCharacter*                               TslCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerInfoWidget_C*                         PlayerInfo;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleListWidget.BattleListWidget_C.DestructPlayerInfoPool
struct UBattleListWidget_C_DestructPlayerInfoPool_Params
{
};

// Function BattleListWidget.BattleListWidget_C.ConstructPlayerInfoPool
struct UBattleListWidget_C_ConstructPlayerInfoPool_Params
{
};

// Function BattleListWidget.BattleListWidget_C.FindCharacterByShortcutNum
struct UBattleListWidget_C_FindCharacterByShortcutNum_Params
{
	int                                                ShortcutNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ATslCharacter*                               Character;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleListWidget.BattleListWidget_C.AddSubTitle
struct UBattleListWidget_C_AddSubTitle_Params
{
	struct FString                                     SubTitle;                                                 // (Parm, ZeroConstructor)
};

// Function BattleListWidget.BattleListWidget_C.IsSameTeam
struct UBattleListWidget_C_IsSameTeam_Params
{
	class ATslCharacter*                               Character1;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class ATslCharacter*                               Character2;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               retVal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleListWidget.BattleListWidget_C.SetNearbyPlayerIndex
struct UBattleListWidget_C_SetNearbyPlayerIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter10
struct UBattleListWidget_C_BattleListSetCharacter10_Params
{
};

// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter9
struct UBattleListWidget_C_BattleListSetCharacter9_Params
{
};

// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter8
struct UBattleListWidget_C_BattleListSetCharacter8_Params
{
};

// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter7
struct UBattleListWidget_C_BattleListSetCharacter7_Params
{
};

// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter6
struct UBattleListWidget_C_BattleListSetCharacter6_Params
{
};

// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter5
struct UBattleListWidget_C_BattleListSetCharacter5_Params
{
};

// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter4
struct UBattleListWidget_C_BattleListSetCharacter4_Params
{
};

// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter3
struct UBattleListWidget_C_BattleListSetCharacter3_Params
{
};

// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter2
struct UBattleListWidget_C_BattleListSetCharacter2_Params
{
};

// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter1
struct UBattleListWidget_C_BattleListSetCharacter1_Params
{
};

// Function BattleListWidget.BattleListWidget_C.BindKeyBattleList
struct UBattleListWidget_C_BindKeyBattleList_Params
{
};

// Function BattleListWidget.BattleListWidget_C.UpdateEngagedEnemiesList
struct UBattleListWidget_C_UpdateEngagedEnemiesList_Params
{
};

// Function BattleListWidget.BattleListWidget_C.FindSpectateOrFollowCharacter
struct UBattleListWidget_C_FindSpectateOrFollowCharacter_Params
{
	class ATslCharacter*                               TslCharacter;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleListWidget.BattleListWidget_C.UpdateNearbyPlayersList
struct UBattleListWidget_C_UpdateNearbyPlayersList_Params
{
};

// Function BattleListWidget.BattleListWidget_C.FindCharacterByPlayerState
struct UBattleListWidget_C_FindCharacterByPlayerState_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ATslCharacter*                               Character;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleListWidget.BattleListWidget_C.UpdateOtherEngagementsList
struct UBattleListWidget_C_UpdateOtherEngagementsList_Params
{
};

// Function BattleListWidget.BattleListWidget_C.RefreshPlayerList
struct UBattleListWidget_C_RefreshPlayerList_Params
{
};

// Function BattleListWidget.BattleListWidget_C.Construct
struct UBattleListWidget_C_Construct_Params
{
};

// Function BattleListWidget.BattleListWidget_C.CustomTick
struct UBattleListWidget_C_CustomTick_Params
{
};

// Function BattleListWidget.BattleListWidget_C.TimerCheckUpdateList
struct UBattleListWidget_C_TimerCheckUpdateList_Params
{
};

// Function BattleListWidget.BattleListWidget_C.Destruct
struct UBattleListWidget_C_Destruct_Params
{
};

// Function BattleListWidget.BattleListWidget_C.ExecuteUbergraph_BattleListWidget
struct UBattleListWidget_C_ExecuteUbergraph_BattleListWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
