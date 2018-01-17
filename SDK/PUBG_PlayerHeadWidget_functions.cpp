// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PlayerHeadWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateHealthGaugeColor
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerHeadWidget_C::UpdateHealthGaugeColor()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99233);

	UPlayerHeadWidget_C_UpdateHealthGaugeColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.AddAlphaWhenADS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::AddAlphaWhenADS(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99225);

	UPlayerHeadWidget_C_AddAlphaWhenADS_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.IsEmptyPlayerName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           EmptyPlayerName                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::IsEmptyPlayerName(bool* EmptyPlayerName)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99221);

	UPlayerHeadWidget_C_IsEmptyPlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EmptyPlayerName != nullptr)
		*EmptyPlayerName = params.EmptyPlayerName;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerHeadWidget_C::UpdateTextColor()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99217);

	UPlayerHeadWidget_C_UpdateTextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.IsGroggy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsGroggy                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::IsGroggy(bool* IsGroggy)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99213);

	UPlayerHeadWidget_C_IsGroggy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsGroggy != nullptr)
		*IsGroggy = params.IsGroggy;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.GetHealthPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Health                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::GetHealthPercent(float* Health)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99208);

	UPlayerHeadWidget_C_GetHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Health != nullptr)
		*Health = params.Health;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.GetGroggyHealthPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          GroggyHealth                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::GetGroggyHealthPercent(float* GroggyHealth)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99203);

	UPlayerHeadWidget_C_GetGroggyHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GroggyHealth != nullptr)
		*GroggyHealth = params.GroggyHealth;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateHealthGauge
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerHeadWidget_C::UpdateHealthGauge()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99196);

	UPlayerHeadWidget_C_UpdateHealthGauge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerHeadWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99195);

	UPlayerHeadWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99192);

	UPlayerHeadWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.SetCharacterIconPosition_UC
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector2D*              Pos_UC                         (Parm, IsPlainOldData)
// bool*                          IsHidden                       (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::SetCharacterIconPosition_UC(struct FVector2D* Pos_UC, bool* IsHidden)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99189);

	UPlayerHeadWidget_C_SetCharacterIconPosition_UC_Params params;
	params.Pos_UC = Pos_UC;
	params.IsHidden = IsHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.CustomTick
// (BlueprintCallable, BlueprintEvent)

void UPlayerHeadWidget_C::CustomTick()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99188);

	UPlayerHeadWidget_C_CustomTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.TimerCheckUpdateList
// (BlueprintCallable, BlueprintEvent)

void UPlayerHeadWidget_C::TimerCheckUpdateList()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99187);

	UPlayerHeadWidget_C_TimerCheckUpdateList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.SetPlayerNameTag
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  PlayerName                     (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::SetPlayerNameTag(struct FName* PlayerName)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99185);

	UPlayerHeadWidget_C_SetPlayerNameTag_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.SetTeamNumber
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           TeamNumber                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           teamColor                      (Parm, IsPlainOldData)

void UPlayerHeadWidget_C::SetTeamNumber(int* TeamNumber, struct FLinearColor* teamColor)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99182);

	UPlayerHeadWidget_C_SetTeamNumber_Params params;
	params.TeamNumber = TeamNumber;
	params.teamColor = teamColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.SetIndicatorColor
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FLinearColor*           teamColor                      (Parm, IsPlainOldData)

void UPlayerHeadWidget_C::SetIndicatorColor(struct FLinearColor* teamColor)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99180);

	UPlayerHeadWidget_C_SetIndicatorColor_Params params;
	params.teamColor = teamColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateWeaponIcon
// (Event, Public, BlueprintEvent)

void UPlayerHeadWidget_C::UpdateWeaponIcon()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99179);

	UPlayerHeadWidget_C_UpdateWeaponIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.ExecuteUbergraph_PlayerHeadWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::ExecuteUbergraph_PlayerHeadWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99156);

	UPlayerHeadWidget_C_ExecuteUbergraph_PlayerHeadWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
