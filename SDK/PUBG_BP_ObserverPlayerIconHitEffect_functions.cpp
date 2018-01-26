// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_ObserverPlayerIconHitEffect_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ObserverPlayerIconHitEffect.BP_ObserverPlayerIconHitEffect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ObserverPlayerIconHitEffect_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(63537);

	UBP_ObserverPlayerIconHitEffect_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ObserverPlayerIconHitEffect.BP_ObserverPlayerIconHitEffect_C.ExecuteUbergraph_BP_ObserverPlayerIconHitEffect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_ObserverPlayerIconHitEffect_C::ExecuteUbergraph_BP_ObserverPlayerIconHitEffect(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(63535);

	UBP_ObserverPlayerIconHitEffect_C_ExecuteUbergraph_BP_ObserverPlayerIconHitEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
