// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Item_Heal_Bandage_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Item_Heal_Bandage.Item_Heal_Bandage_C.PrintCastingTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItem_Heal_Bandage_C::PrintCastingTime()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(89550);

	UItem_Heal_Bandage_C_PrintCastingTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
