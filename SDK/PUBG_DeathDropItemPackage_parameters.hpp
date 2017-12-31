#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_DeathDropItemPackage_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DeathDropItemPackage.DeathDropItemPackage_C.GetCategory
struct ADeathDropItemPackage_C_GetCategory_Params
{
	struct FText                                       Category;                                                 // (Parm, OutParm)
};

// Function DeathDropItemPackage.DeathDropItemPackage_C.UserConstructionScript
struct ADeathDropItemPackage_C_UserConstructionScript_Params
{
};

// Function DeathDropItemPackage.DeathDropItemPackage_C.ReceiveBeginPlay
struct ADeathDropItemPackage_C_ReceiveBeginPlay_Params
{
};

// Function DeathDropItemPackage.DeathDropItemPackage_C.ExecuteUbergraph_DeathDropItemPackage
struct ADeathDropItemPackage_C_ExecuteUbergraph_DeathDropItemPackage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
