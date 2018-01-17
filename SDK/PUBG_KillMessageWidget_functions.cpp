// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_KillMessageWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KillMessageWidget.KillMessageWidget_C.UpdateDeathMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDeathMessage           NewDeathMessage                (Parm)

void UKillMessageWidget_C::UpdateDeathMessage(const struct FDeathMessage& NewDeathMessage)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(70474);

	UKillMessageWidget_C_UpdateDeathMessage_Params params;
	params.NewDeathMessage = NewDeathMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillMessageWidget.KillMessageWidget_C.SetKillMessageFont
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UKillMessageWidget_C::SetKillMessageFont()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(70454);

	UKillMessageWidget_C_SetKillMessageFont_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillMessageWidget.KillMessageWidget_C.OnPrepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UKillMessageWidget_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(70452);

	UKillMessageWidget_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillMessageWidget.KillMessageWidget_C.SetKillMessageText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UKillMessageWidget_C::SetKillMessageText()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(70266);

	UKillMessageWidget_C_SetKillMessageText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillMessageWidget.KillMessageWidget_C.GetNumStartTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            NumStartTeam                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKillMessageWidget_C::GetNumStartTeam(int* NumStartTeam)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(70261);

	UKillMessageWidget_C_GetNumStartTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumStartTeam != nullptr)
		*NumStartTeam = params.NumStartTeam;
}


// Function KillMessageWidget.KillMessageWidget_C.On_AlivePlayer_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UKillMessageWidget_C::On_AlivePlayer_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(70252);

	UKillMessageWidget_C_On_AlivePlayer_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillMessageWidget.KillMessageWidget_C.On_MyKills_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UKillMessageWidget_C::On_MyKills_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(70207);

	UKillMessageWidget_C_On_MyKills_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillMessageWidget.KillMessageWidget_C.GetBrushColor_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UKillMessageWidget_C::GetBrushColor_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(70199);

	UKillMessageWidget_C_GetBrushColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillMessageWidget.KillMessageWidget_C.GetTeamAlive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Alive                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKillMessageWidget_C::GetTeamAlive(int* Alive)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(70193);

	UKillMessageWidget_C_GetTeamAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Alive != nullptr)
		*Alive = params.Alive;
}


// Function KillMessageWidget.KillMessageWidget_C.Get_AlivePlayer_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UKillMessageWidget_C::Get_AlivePlayer_Text_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(70158);

	UKillMessageWidget_C_Get_AlivePlayer_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillMessageWidget.KillMessageWidget_C.GetAlivePlayerNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            AlivePlayer                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKillMessageWidget_C::GetAlivePlayerNum(int* AlivePlayer)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(70153);

	UKillMessageWidget_C_GetAlivePlayerNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AlivePlayer != nullptr)
		*AlivePlayer = params.AlivePlayer;
}


// Function KillMessageWidget.KillMessageWidget_C.GetKillNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            KillNum                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKillMessageWidget_C::GetKillNum(int* KillNum)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(70146);

	UKillMessageWidget_C_GetKillNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KillNum != nullptr)
		*KillNum = params.KillNum;
}


// Function KillMessageWidget.KillMessageWidget_C.Get_Killer_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UKillMessageWidget_C::Get_Killer_Visibility_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(70136);

	UKillMessageWidget_C_Get_Killer_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillMessageWidget.KillMessageWidget_C.Get_Insert2_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UKillMessageWidget_C::Get_Insert2_Visibility_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(70126);

	UKillMessageWidget_C_Get_Insert2_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillMessageWidget.KillMessageWidget_C.Get_Insert_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UKillMessageWidget_C::Get_Insert_Visibility_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(70116);

	UKillMessageWidget_C_Get_Insert_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillMessageWidget.KillMessageWidget_C.GetFadeInAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*        Animation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKillMessageWidget_C::GetFadeInAnimation(class UWidgetAnimation** Animation)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(70568);

	UKillMessageWidget_C_GetFadeInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function KillMessageWidget.KillMessageWidget_C.GetFadeOutAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*        Animation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKillMessageWidget_C::GetFadeOutAnimation(class UWidgetAnimation** Animation)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(70566);

	UKillMessageWidget_C_GetFadeOutAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function KillMessageWidget.KillMessageWidget_C.InitializeKillMessageText
// (Public, BlueprintCallable, BlueprintEvent)

void UKillMessageWidget_C::InitializeKillMessageText()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(70113);

	UKillMessageWidget_C_InitializeKillMessageText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillMessageWidget.KillMessageWidget_C.IsVictimTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsTeam                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKillMessageWidget_C::IsVictimTeam(bool* IsTeam)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(70106);

	UKillMessageWidget_C_IsVictimTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsTeam != nullptr)
		*IsTeam = params.IsTeam;
}


// Function KillMessageWidget.KillMessageWidget_C.IsKillerTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsTeam                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKillMessageWidget_C::IsKillerTeam(bool* IsTeam)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(70099);

	UKillMessageWidget_C_IsKillerTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsTeam != nullptr)
		*IsTeam = params.IsTeam;
}


// Function KillMessageWidget.KillMessageWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UKillMessageWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(70545);

	UKillMessageWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillMessageWidget.KillMessageWidget_C.ExecuteUbergraph_KillMessageWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UKillMessageWidget_C::ExecuteUbergraph_KillMessageWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(70097);

	UKillMessageWidget_C_ExecuteUbergraph_KillMessageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
