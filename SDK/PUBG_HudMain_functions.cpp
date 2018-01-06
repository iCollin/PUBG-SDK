// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_HudMain_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HudMain.HudMain_C.OnNotifyUnArmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsUnarmed                     (Parm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::OnNotifyUnArmed(bool bIsUnarmed)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81338);

	UHudMain_C_OnNotifyUnArmed_Params params;
	params.bIsUnarmed = bIsUnarmed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnNotifyVehicleLeave
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnNotifyVehicleLeave()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81337);

	UHudMain_C_OnNotifyVehicleLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnNotifyVehicleRide
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnNotifyVehicleRide()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81336);

	UHudMain_C_OnNotifyVehicleRide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnNotifyReloaded
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnNotifyReloaded()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81335);

	UHudMain_C_OnNotifyReloaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnNotifyReloadingNeed
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnNotifyReloadingNeed()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81334);

	UHudMain_C_OnNotifyReloadingNeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnInit_Delegate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslBaseHUD**            TslBaseHUD                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHudMain_C::OnInit_Delegate(class ATslBaseHUD** TslBaseHUD)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81320);

	UHudMain_C_OnInit_Delegate_Params params;
	params.TslBaseHUD = TslBaseHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnInit_Replay
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslBaseHUD**            TslBaseHUD                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHudMain_C::OnInit_Replay(class ATslBaseHUD** TslBaseHUD)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81317);

	UHudMain_C_OnInit_Replay_Params params;
	params.TslBaseHUD = TslBaseHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnInit_Input
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslBaseHUD**            TslBaseHUD                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHudMain_C::OnInit_Input(class ATslBaseHUD** TslBaseHUD)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81305);

	UHudMain_C_OnInit_Input_Params params;
	params.TslBaseHUD = TslBaseHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnInit_Widget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslBaseHUD**            TslBaseHUD                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHudMain_C::OnInit_Widget(class ATslBaseHUD** TslBaseHUD)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81287);

	UHudMain_C_OnInit_Widget_Params params;
	params.TslBaseHUD = TslBaseHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UHudMain_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81278);

	UHudMain_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.SetObserverSpectatingUp
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::SetObserverSpectatingUp()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81277);

	UHudMain_C_SetObserverSpectatingUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.SetObserverSpectatingDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHudMain_C::SetObserverSpectatingDown()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81271);

	UHudMain_C_SetObserverSpectatingDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.On_HideOnObserverSpectating_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::On_HideOnObserverSpectating_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81261);

	UHudMain_C_On_HideOnObserverSpectating_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.ShouldShowReplayMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::ShouldShowReplayMenu(bool* bShow)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81254);

	UHudMain_C_ShouldShowReplayMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShow != nullptr)
		*bShow = params.bShow;
}


// Function HudMain.HudMain_C.OnPrepass_3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::OnPrepass_3(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81242);

	UHudMain_C_OnPrepass_3_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.BindEventForShowReplayTimeline
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::BindEventForShowReplayTimeline()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81239);

	UHudMain_C_BindEventForShowReplayTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.ShowReplayTimeLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::ShowReplayTimeLine(bool bShow)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81236);

	UHudMain_C_ShowReplayTimeLine_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.SetHUDForIngameReplayMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::SetHUDForIngameReplayMenu()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81231);

	UHudMain_C_SetHUDForIngameReplayMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.BindEventForMapClosing
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::BindEventForMapClosing()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81225);

	UHudMain_C_BindEventForMapClosing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_ReplayMenuOrEscape
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnKey_ReplayMenuOrEscape()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81218);

	UHudMain_C_OnKey_ReplayMenuOrEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.InitForReplay
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::InitForReplay()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81215);

	UHudMain_C_InitForReplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnToggleOption
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnToggleOption()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81206);

	UHudMain_C_OnToggleOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.On_Name_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::On_Name_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81197);

	UHudMain_C_On_Name_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.UpdateReplayTimeline
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::UpdateReplayTimeline()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81188);

	UHudMain_C_UpdateReplayTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnToggleBattleList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnToggleBattleList()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81172);

	UHudMain_C_OnToggleBattleList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnMapHide
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnMapHide()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81170);

	UHudMain_C_OnMapHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnMapShow
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnMapShow()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81161);

	UHudMain_C_OnMapShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_MapReleased
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnKey_MapReleased()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81153);

	UHudMain_C_OnKey_MapReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_MapPressed
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnKey_MapPressed()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81145);

	UHudMain_C_OnKey_MapPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnShowCarePackageItemList
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnShowCarePackageItemList()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81144);

	UHudMain_C_OnShowCarePackageItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.GetMiniMapType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  MiniMapype                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::GetMiniMapType(int Index, class UClass** MiniMapype)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81138);

	UHudMain_C_GetMiniMapType_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MiniMapype != nullptr)
		*MiniMapype = params.MiniMapype;
}


// Function HudMain.HudMain_C.On_BlueZoneGpsWidget_RoundType_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::On_BlueZoneGpsWidget_RoundType_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81136);

	UHudMain_C_On_BlueZoneGpsWidget_RoundType_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.IsShowMapOrInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bIsShow                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::IsShowMapOrInventory(bool* bIsShow)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81128);

	UHudMain_C_IsShowMapOrInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsShow != nullptr)
		*bIsShow = params.bIsShow;
}


// Function HudMain.HudMain_C.Get_Spectating_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHudMain_C::Get_Spectating_Text_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81119);

	UHudMain_C_Get_Spectating_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnPrepass_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::OnPrepass_2(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81104);

	UHudMain_C_OnPrepass_2_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.On_CharacterCanvas_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::On_CharacterCanvas_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81087);

	UHudMain_C_On_CharacterCanvas_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnTogglePlayerList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnTogglePlayerList()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81071);

	UHudMain_C_OnTogglePlayerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.Get_KeyInfo_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHudMain_C::Get_KeyInfo_Text_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81051);

	UHudMain_C_Get_KeyInfo_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.On_SpectatingKeyInfo_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::On_SpectatingKeyInfo_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81037);

	UHudMain_C_On_SpectatingKeyInfo_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.IsCharacterAlive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsAlive                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::IsCharacterAlive(bool* IsAlive)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81031);

	UHudMain_C_IsCharacterAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAlive != nullptr)
		*IsAlive = params.IsAlive;
}


// Function HudMain.HudMain_C.On_InventoryShowHiddenCanvas_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::On_InventoryShowHiddenCanvas_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81016);

	UHudMain_C_On_InventoryShowHiddenCanvas_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.Get_TextBlock_1_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHudMain_C::Get_TextBlock_1_Text_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(81007);

	UHudMain_C_Get_TextBlock_1_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.On_OnlySpectating_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::On_OnlySpectating_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80994);

	UHudMain_C_On_OnlySpectating_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnPrepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80981);

	UHudMain_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnPrepass_VisibilityOnMatchState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::OnPrepass_VisibilityOnMatchState(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80977);

	UHudMain_C_OnPrepass_VisibilityOnMatchState_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.On_BaseCanvas_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::On_BaseCanvas_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80975);

	UHudMain_C_On_BaseCanvas_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.GetBoostRatio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHudMain_C::GetBoostRatio()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80968);

	UHudMain_C_GetBoostRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnNitifyHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamagePercent                  (Parm, ZeroConstructor, IsPlainOldData)
// EDamageTypeCategory            DamageTypeCategory             (Parm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::OnNitifyHit(float DamagePercent, EDamageTypeCategory DamageTypeCategory)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80964);

	UHudMain_C_OnNitifyHit_Params params;
	params.DamagePercent = DamagePercent;
	params.DamageTypeCategory = DamageTypeCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.Get_ParachuteText_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UHudMain_C::Get_ParachuteText_Visibility_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80948);

	UHudMain_C_Get_ParachuteText_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.Get_VisibilityOnMatchState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UHudMain_C::Get_VisibilityOnMatchState()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80941);

	UHudMain_C_Get_VisibilityOnMatchState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnDisplaySystemMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESystemMessageType             MessageType                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Message                        (Parm)

void UHudMain_C::OnDisplaySystemMessage(ESystemMessageType MessageType, const struct FText& Message)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80925);

	UHudMain_C_OnDisplaySystemMessage_Params params;
	params.MessageType = MessageType;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnDisplayKilledMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDeathMessage           DeathMessage                   (Parm)

void UHudMain_C::OnDisplayKilledMessage(const struct FDeathMessage& DeathMessage)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80905);

	UHudMain_C_OnDisplayKilledMessage_Params params;
	params.DeathMessage = DeathMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnButtonClick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ButotnName                     (Parm, ZeroConstructor)

void UHudMain_C::OnButtonClick(const struct FString& ButotnName)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80903);

	UHudMain_C_OnButtonClick_Params params;
	params.ButotnName = ButotnName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.Get_HealthBar_FillColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UHudMain_C::Get_HealthBar_FillColorAndOpacity_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80897);

	UHudMain_C_Get_HealthBar_FillColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnKey_SystemMenuOrEscape
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnKey_SystemMenuOrEscape()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80890);

	UHudMain_C_OnKey_SystemMenuOrEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.Get_Vehicle_Health_Ratio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHudMain_C::Get_Vehicle_Health_Ratio()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80878);

	UHudMain_C_Get_Vehicle_Health_Ratio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.GetFillColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UHudMain_C::GetFillColorAndOpacity_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80876);

	UHudMain_C_GetFillColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.Get_DebugInformation_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHudMain_C::Get_DebugInformation_Text_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80868);

	UHudMain_C_Get_DebugInformation_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnToggleMap
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnToggleMap()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80858);

	UHudMain_C_OnToggleMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.Get_PlayerCoordinate_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHudMain_C::Get_PlayerCoordinate_Text_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80850);

	UHudMain_C_Get_PlayerCoordinate_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.Get_NumPlayersLeft_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHudMain_C::Get_NumPlayersLeft_Text_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80844);

	UHudMain_C_Get_NumPlayersLeft_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.Get_Health_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHudMain_C::Get_Health_Text_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80836);

	UHudMain_C_Get_Health_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.Get_HealthMax_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHudMain_C::Get_HealthMax_Text_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80828);

	UHudMain_C_Get_HealthMax_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.GetHpRatio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHudMain_C::GetHpRatio()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80821);

	UHudMain_C_GetHpRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnPossessPawnChange
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnPossessPawnChange()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80820);

	UHudMain_C_OnPossessPawnChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHudMain_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80819);

	UHudMain_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnShowWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 WidgetName                     (Parm, ZeroConstructor)
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::OnShowWidget(const struct FString& WidgetName, bool bShow)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80816);

	UHudMain_C_OnShowWidget_Params params;
	params.WidgetName = WidgetName;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.HideMapForReplay
// (BlueprintCallable, BlueprintEvent)

void UHudMain_C::HideMapForReplay()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80815);

	UHudMain_C_HideMapForReplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.CheckReplayTimer
// (BlueprintCallable, BlueprintEvent)

void UHudMain_C::CheckReplayTimer()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80814);

	UHudMain_C_CheckReplayTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.CreateCheckReplayTimer
// (BlueprintCallable, BlueprintEvent)

void UHudMain_C::CreateCheckReplayTimer()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80813);

	UHudMain_C_CreateCheckReplayTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.ExecuteUbergraph_HudMain
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::ExecuteUbergraph_HudMain(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80774);

	UHudMain_C_ExecuteUbergraph_HudMain_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.ButtonClickedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHudMain_C::ButtonClickedDispatcher__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(80773);

	UHudMain_C_ButtonClickedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
