// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ObserverTeamInfoList_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.On_TeamList_Prepass_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UObserverTeamInfoList_C::On_TeamList_Prepass_2(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(56601);

	UObserverTeamInfoList_C_On_TeamList_Prepass_2_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.CollapseAllSquadPlayerInfos
// (Public, BlueprintCallable, BlueprintEvent)

void UObserverTeamInfoList_C::CollapseAllSquadPlayerInfos()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(56594);

	UObserverTeamInfoList_C_CollapseAllSquadPlayerInfos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.SetSquadPlayerInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class ATslCharacter*           TslCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class USquadPlayerInfoWidget_C* SquadPlayerInfo                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UObserverTeamInfoList_C::SetSquadPlayerInfo(int Index, class ATslCharacter* TslCharacter, class USquadPlayerInfoWidget_C** SquadPlayerInfo)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(56588);

	UObserverTeamInfoList_C_SetSquadPlayerInfo_Params params;
	params.Index = Index;
	params.TslCharacter = TslCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SquadPlayerInfo != nullptr)
		*SquadPlayerInfo = params.SquadPlayerInfo;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.DestructSquadPlayerInfoPool
// (Public, BlueprintCallable, BlueprintEvent)

void UObserverTeamInfoList_C::DestructSquadPlayerInfoPool()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(56587);

	UObserverTeamInfoList_C_DestructSquadPlayerInfoPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.ConstructSquadPlayerInfoPool
// (Public, BlueprintCallable, BlueprintEvent)

void UObserverTeamInfoList_C::ConstructSquadPlayerInfoPool()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(56580);

	UObserverTeamInfoList_C_ConstructSquadPlayerInfoPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.On_TeamList_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UObserverTeamInfoList_C::On_TeamList_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(56578);

	UObserverTeamInfoList_C_On_TeamList_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.IsSameTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslCharacter*           Character1                     (Parm, ZeroConstructor, IsPlainOldData)
// class ATslCharacter*           Character2                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           retVal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UObserverTeamInfoList_C::IsSameTeam(class ATslCharacter* Character1, class ATslCharacter* Character2, bool* retVal)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(56571);

	UObserverTeamInfoList_C_IsSameTeam_Params params;
	params.Character1 = Character1;
	params.Character2 = Character2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retVal != nullptr)
		*retVal = params.retVal;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.FindSpectateOrFollowCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslCharacter*           TslCharacter                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UObserverTeamInfoList_C::FindSpectateOrFollowCharacter(class ATslCharacter** TslCharacter)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(56560);

	UObserverTeamInfoList_C_FindSpectateOrFollowCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TslCharacter != nullptr)
		*TslCharacter = params.TslCharacter;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.UpdateTeamList
// (Public, BlueprintCallable, BlueprintEvent)

void UObserverTeamInfoList_C::UpdateTeamList()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(56545);

	UObserverTeamInfoList_C_UpdateTeamList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UObserverTeamInfoList_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(56544);

	UObserverTeamInfoList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UObserverTeamInfoList_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(56541);

	UObserverTeamInfoList_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.CustomTick
// (BlueprintCallable, BlueprintEvent)

void UObserverTeamInfoList_C::CustomTick()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(56540);

	UObserverTeamInfoList_C_CustomTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.TimerCheckUpdateList
// (BlueprintCallable, BlueprintEvent)

void UObserverTeamInfoList_C::TimerCheckUpdateList()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(56539);

	UObserverTeamInfoList_C_TimerCheckUpdateList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UObserverTeamInfoList_C::Destruct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(56538);

	UObserverTeamInfoList_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.ExecuteUbergraph_ObserverTeamInfoList
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UObserverTeamInfoList_C::ExecuteUbergraph_ObserverTeamInfoList(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(56532);

	UObserverTeamInfoList_C_ExecuteUbergraph_ObserverTeamInfoList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
