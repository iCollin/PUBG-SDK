#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Item_Boost_PainKiller_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Item_Boost_PainKiller.Item_Boost_PainKiller_C.BoostGaugeUp
struct UItem_Boost_PainKiller_C_BoostGaugeUp_Params
{
};

// Function Item_Boost_PainKiller.Item_Boost_PainKiller_C.IsCastable
struct UItem_Boost_PainKiller_C_IsCastable_Params
{
	class ATslCharacter**                              Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Item_Boost_PainKiller.Item_Boost_PainKiller_C.PrintCastingTime
struct UItem_Boost_PainKiller_C_PrintCastingTime_Params
{
};

// Function Item_Boost_PainKiller.Item_Boost_PainKiller_C.UseBy
struct UItem_Boost_PainKiller_C_UseBy_Params
{
	class ATslCharacter**                              Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
