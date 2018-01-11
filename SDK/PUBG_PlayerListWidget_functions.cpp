// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PlayerListWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerListWidget.PlayerListWidget_C.InitForReplay
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerListWidget_C::InitForReplay()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73231);

	UPlayerListWidget_C_InitForReplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerListWidget.PlayerListWidget_C.CheckChangeList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bChange                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerListWidget_C::CheckChangeList(bool* bChange)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73214);

	UPlayerListWidget_C_CheckChangeList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bChange != nullptr)
		*bChange = params.bChange;
}


// Function PlayerListWidget.PlayerListWidget_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPlayerListWidget_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73209);

	UPlayerListWidget_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerListWidget.PlayerListWidget_C.IsIncludeDyingPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerListWidget_C::IsIncludeDyingPlayer(bool* NewParam)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73206);

	UPlayerListWidget_C_IsIncludeDyingPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function PlayerListWidget.PlayerListWidget_C.UpdatePlayerList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InputPin                       (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerListWidget_C::UpdatePlayerList(float InputPin)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73142);

	UPlayerListWidget_C_UpdatePlayerList_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerListWidget.PlayerListWidget_C.GetPlayersInDistance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class ATslCharacter*>   PlayerList                     (Parm, OutParm, ZeroConstructor)

void UPlayerListWidget_C::GetPlayersInDistance(TArray<class ATslCharacter*>* PlayerList)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73107);

	UPlayerListWidget_C_GetPlayersInDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerList != nullptr)
		*PlayerList = params.PlayerList;
}


// Function PlayerListWidget.PlayerListWidget_C.CheckUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerListWidget_C::CheckUpdate()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73088);

	UPlayerListWidget_C_CheckUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerListWidget.PlayerListWidget_C.CreateOrUpdatePlayerInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IndexToTest                    (Parm, ZeroConstructor, IsPlainOldData)
// class ATslCharacter*           Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerInfoWidget_C*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPlayerInfoWidget_C* UPlayerListWidget_C::CreateOrUpdatePlayerInfo(int IndexToTest, class ATslCharacter* Character)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73079);

	UPlayerListWidget_C_CreateOrUpdatePlayerInfo_Params params;
	params.IndexToTest = IndexToTest;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerListWidget.PlayerListWidget_C.RefreshList
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerListWidget_C::RefreshList()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73061);

	UPlayerListWidget_C_RefreshList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerListWidget.PlayerListWidget_C.OnGotoTimelineDone_PlayerList
// (BlueprintCallable, BlueprintEvent)

void UPlayerListWidget_C::OnGotoTimelineDone_PlayerList()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73060);

	UPlayerListWidget_C_OnGotoTimelineDone_PlayerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerListWidget.PlayerListWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerListWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73059);

	UPlayerListWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerListWidget.PlayerListWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerListWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73056);

	UPlayerListWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerListWidget.PlayerListWidget_C.BndEvt__DistanceSliderWidget_K2Node_ComponentBoundEvent_81_ChagedDistance__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          NewDistance                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerListWidget_C::BndEvt__DistanceSliderWidget_K2Node_ComponentBoundEvent_81_ChagedDistance__DelegateSignature(float NewDistance, float Value)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73053);

	UPlayerListWidget_C_BndEvt__DistanceSliderWidget_K2Node_ComponentBoundEvent_81_ChagedDistance__DelegateSignature_Params params;
	params.NewDistance = NewDistance;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerListWidget.PlayerListWidget_C.CheckChangeTimer
// (BlueprintCallable, BlueprintEvent)

void UPlayerListWidget_C::CheckChangeTimer()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73052);

	UPlayerListWidget_C_CheckChangeTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerListWidget.PlayerListWidget_C.OnTurn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerListWidget_C::OnTurn(float Scale)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73050);

	UPlayerListWidget_C_OnTurn_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerListWidget.PlayerListWidget_C.OnLookUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerListWidget_C::OnLookUp(float Scale)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73048);

	UPlayerListWidget_C_OnLookUp_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerListWidget.PlayerListWidget_C.Custom Event_1
// (BlueprintCallable, BlueprintEvent)

void UPlayerListWidget_C::Custom_Event_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73047);

	UPlayerListWidget_C_Custom_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerListWidget.PlayerListWidget_C.Custom Event_2
// (BlueprintCallable, BlueprintEvent)

void UPlayerListWidget_C::Custom_Event_2()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73046);

	UPlayerListWidget_C_Custom_Event_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerListWidget.PlayerListWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerListWidget_C::Destruct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73045);

	UPlayerListWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerListWidget.PlayerListWidget_C.ExecuteUbergraph_PlayerListWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerListWidget_C::ExecuteUbergraph_PlayerListWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72997);

	UPlayerListWidget_C_ExecuteUbergraph_PlayerListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
