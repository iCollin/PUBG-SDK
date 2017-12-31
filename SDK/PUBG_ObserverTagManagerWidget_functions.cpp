// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ObserverTagManagerWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.CustomTick
// (BlueprintCallable, BlueprintEvent)

void UObserverTagManagerWidget_C::CustomTick()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73786);

	UObserverTagManagerWidget_C_CustomTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.TimerCheckUpdateList
// (BlueprintCallable, BlueprintEvent)

void UObserverTagManagerWidget_C::TimerCheckUpdateList()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73785);

	UObserverTagManagerWidget_C_TimerCheckUpdateList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UObserverTagManagerWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73784);

	UObserverTagManagerWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.ExecuteUbergraph_ObserverTagManagerWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UObserverTagManagerWidget_C::ExecuteUbergraph_ObserverTagManagerWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73780);

	UObserverTagManagerWidget_C_ExecuteUbergraph_ObserverTagManagerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
