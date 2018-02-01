// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyWidgetMain_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LobbyWidgetMain.LobbyWidgetMain_C.SendGameStateChangingToWeb
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InName2                        (Parm, ZeroConstructor, IsPlainOldData)

void ULobbyWidgetMain_C::SendGameStateChangingToWeb(const struct FName& InName, const struct FName& InName2)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(41392);

	ULobbyWidgetMain_C_SendGameStateChangingToWeb_Params params;
	params.InName = InName;
	params.InName2 = InName2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWidgetMain.LobbyWidgetMain_C.GameStateChanging
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  OldState                       (Parm, ZeroConstructor, IsPlainOldData)

void ULobbyWidgetMain_C::GameStateChanging(struct FName* NewState, struct FName* OldState)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(41389);

	ULobbyWidgetMain_C_GameStateChanging_Params params;
	params.NewState = NewState;
	params.OldState = OldState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWidgetMain.LobbyWidgetMain_C.ExecuteUbergraph_LobbyWidgetMain
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULobbyWidgetMain_C::ExecuteUbergraph_LobbyWidgetMain(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(41385);

	ULobbyWidgetMain_C_ExecuteUbergraph_LobbyWidgetMain_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
