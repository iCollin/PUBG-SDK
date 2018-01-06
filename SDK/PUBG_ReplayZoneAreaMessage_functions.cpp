// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ReplayZoneAreaMessage_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.UpdateReplayZoneAreaMessage
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayZoneAreaMessage_C::UpdateReplayZoneAreaMessage()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72532);

	UReplayZoneAreaMessage_C_UpdateReplayZoneAreaMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UReplayZoneAreaMessage_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72531);

	UReplayZoneAreaMessage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UReplayZoneAreaMessage_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72528);

	UReplayZoneAreaMessage_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.ExecuteUbergraph_ReplayZoneAreaMessage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UReplayZoneAreaMessage_C::ExecuteUbergraph_ReplayZoneAreaMessage(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72522);

	UReplayZoneAreaMessage_C_ExecuteUbergraph_ReplayZoneAreaMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
