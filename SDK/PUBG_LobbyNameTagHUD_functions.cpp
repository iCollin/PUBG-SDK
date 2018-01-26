// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyNameTagHUD_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LobbyNameTagHUD.LobbyNameTagHUD_C.CleanUpNameTagWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ULobbyNameTagHUD_C::CleanUpNameTagWidget(int SlotIndex)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(106144);

	ULobbyNameTagHUD_C_CleanUpNameTagWidget_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyNameTagHUD.LobbyNameTagHUD_C.SetupNameTagWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ULobbyNameTagHUD_C::SetupNameTagWidget(int SlotIndex)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(106137);

	ULobbyNameTagHUD_C_SetupNameTagWidget_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyNameTagHUD.LobbyNameTagHUD_C.GetNameTagWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTslLobbyNameTagWidget*  Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULobbyNameTagHUD_C::GetNameTagWidget(int SlotIndex, class UTslLobbyNameTagWidget** Widget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(106133);

	ULobbyNameTagHUD_C_GetNameTagWidget_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function LobbyNameTagHUD.LobbyNameTagHUD_C.On_NameTag_0_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void ULobbyNameTagHUD_C::On_NameTag_0_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(106121);

	ULobbyNameTagHUD_C_On_NameTag_0_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyNameTagHUD.LobbyNameTagHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULobbyNameTagHUD_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(106120);

	ULobbyNameTagHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyNameTagHUD.LobbyNameTagHUD_C.ExecuteUbergraph_LobbyNameTagHUD
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULobbyNameTagHUD_C::ExecuteUbergraph_LobbyNameTagHUD(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(106114);

	ULobbyNameTagHUD_C_ExecuteUbergraph_LobbyNameTagHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
