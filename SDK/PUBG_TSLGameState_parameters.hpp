#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TSLGameState_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TSLGameState.TSLGameState_C.UserConstructionScript
struct ATSLGameState_C_UserConstructionScript_Params
{
};

// Function TSLGameState.TSLGameState_C.UpdateWorldTimeSecondsDelta
struct ATSLGameState_C_UpdateWorldTimeSecondsDelta_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TSLGameState.TSLGameState_C.ExecuteUbergraph_TSLGameState
struct ATSLGameState_C_ExecuteUbergraph_TSLGameState_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
