// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_ObserverPlayerIconMuzzleFlash_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ObserverPlayerIconMuzzleFlash.BP_ObserverPlayerIconMuzzleFlash_C.PlayMuzzleFlashAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ObserverPlayerIconMuzzleFlash_C::PlayMuzzleFlashAnim()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(66087);

	UBP_ObserverPlayerIconMuzzleFlash_C_PlayMuzzleFlashAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ObserverPlayerIconMuzzleFlash.BP_ObserverPlayerIconMuzzleFlash_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ObserverPlayerIconMuzzleFlash_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(66086);

	UBP_ObserverPlayerIconMuzzleFlash_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ObserverPlayerIconMuzzleFlash.BP_ObserverPlayerIconMuzzleFlash_C.ExecuteUbergraph_BP_ObserverPlayerIconMuzzleFlash
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_ObserverPlayerIconMuzzleFlash_C::ExecuteUbergraph_BP_ObserverPlayerIconMuzzleFlash(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(66084);

	UBP_ObserverPlayerIconMuzzleFlash_C_ExecuteUbergraph_BP_ObserverPlayerIconMuzzleFlash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
