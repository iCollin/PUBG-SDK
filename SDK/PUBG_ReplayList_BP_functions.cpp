// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ReplayList_BP_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReplayList_BP.ReplayList_BP_C.OnUpdateItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FReplayItem             inReplayItem                   (Parm)

void AReplayList_BP_C::OnUpdateItem(const struct FReplayItem& inReplayItem)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(107321);

	AReplayList_BP_C_OnUpdateItem_Params params;
	params.inReplayItem = inReplayItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.UpdateReplayList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 inRegionOrLocal                (Parm, ZeroConstructor)

void AReplayList_BP_C::UpdateReplayList(const struct FString& inRegionOrLocal)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(107318);

	AReplayList_BP_C_UpdateReplayList_Params params;
	params.inRegionOrLocal = inRegionOrLocal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.CheckReplayBusyStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsReplayBusy                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AReplayList_BP_C::CheckReplayBusyStatus(bool* bIsReplayBusy)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(107315);

	AReplayList_BP_C_CheckReplayBusyStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsReplayBusy != nullptr)
		*bIsReplayBusy = params.bIsReplayBusy;
}


// Function ReplayList_BP.ReplayList_BP_C.OnGoPageBtn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AReplayList_BP_C::OnGoPageBtn()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(107307);

	AReplayList_BP_C_OnGoPageBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.OnNextPageBtn
// (Public, BlueprintCallable, BlueprintEvent)

void AReplayList_BP_C::OnNextPageBtn()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(107303);

	AReplayList_BP_C_OnNextPageBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.OnPrevPageBtn
// (Public, BlueprintCallable, BlueprintEvent)

void AReplayList_BP_C::OnPrevPageBtn()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(107299);

	AReplayList_BP_C_OnPrevPageBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.ClearReplayList
// (Public, BlueprintCallable, BlueprintEvent)

void AReplayList_BP_C::ClearReplayList()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(107298);

	AReplayList_BP_C_ClearReplayList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AReplayList_BP_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(107297);

	AReplayList_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AReplayList_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(107296);

	AReplayList_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.CreateReplayListEvent
// (BlueprintCallable, BlueprintEvent)

void AReplayList_BP_C::CreateReplayListEvent()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(107295);

	AReplayList_BP_C_CreateReplayListEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.PrevPageEvent
// (BlueprintCallable, BlueprintEvent)

void AReplayList_BP_C::PrevPageEvent()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(107294);

	AReplayList_BP_C_PrevPageEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.NextPageEvent
// (BlueprintCallable, BlueprintEvent)

void AReplayList_BP_C::NextPageEvent()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(107293);

	AReplayList_BP_C_NextPageEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.GoPageEvent
// (BlueprintCallable, BlueprintEvent)

void AReplayList_BP_C::GoPageEvent()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(107292);

	AReplayList_BP_C_GoPageEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.OnItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RegionOrLocal                  (Parm, ZeroConstructor)
// struct FReplayItem             inReplayItem                   (Parm)

void AReplayList_BP_C::OnItemClicked(const struct FString& RegionOrLocal, const struct FReplayItem& inReplayItem)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(107289);

	AReplayList_BP_C_OnItemClicked_Params params;
	params.RegionOrLocal = RegionOrLocal;
	params.inReplayItem = inReplayItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.ExecuteUbergraph_ReplayList_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AReplayList_BP_C::ExecuteUbergraph_ReplayList_BP(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(107259);

	AReplayList_BP_C_ExecuteUbergraph_ReplayList_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
