// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ZombieMatchResultNameWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ZombieMatchResultNameWidget.ZombieMatchResultNameWidget_C.UpdatePlayerMatchResultInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTslPlayerMatchResultInfo TslPlayerMatchResultInfo       (Parm)
// bool                           IsFirst                        (Parm, ZeroConstructor, IsPlainOldData)

void UZombieMatchResultNameWidget_C::UpdatePlayerMatchResultInfo(const struct FTslPlayerMatchResultInfo& TslPlayerMatchResultInfo, bool IsFirst)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(66044);

	UZombieMatchResultNameWidget_C_UpdatePlayerMatchResultInfo_Params params;
	params.TslPlayerMatchResultInfo = TslPlayerMatchResultInfo;
	params.IsFirst = IsFirst;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
