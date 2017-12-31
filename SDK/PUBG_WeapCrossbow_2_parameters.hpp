#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WeapCrossbow_2_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapCrossbow_2.WeapCrossbow_1_C.UserConstructionScript
struct AWeapCrossbow_1_C_UserConstructionScript_Params
{
};

// Function WeapCrossbow_2.WeapCrossbow_1_C.ReceiveTick
struct AWeapCrossbow_1_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapCrossbow_2.WeapCrossbow_1_C.ServerSetAmmoState
struct AWeapCrossbow_1_C_ServerSetAmmoState_Params
{
	TEnumAsByte<ENUM_CrossbowState>                    NewAmmoState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapCrossbow_2.WeapCrossbow_1_C.ExecuteUbergraph_WeapCrossbow_2
struct AWeapCrossbow_1_C_ExecuteUbergraph_WeapCrossbow_2_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
