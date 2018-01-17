// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_InGameMenuWidget_Gamepad_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.IsTeamMatch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsTeamMatch                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::IsTeamMatch(bool* bIsTeamMatch)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76752);

	UInGameMenuWidget_Gamepad_C_IsTeamMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsTeamMatch != nullptr)
		*bIsTeamMatch = params.bIsTeamMatch;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.NavigateButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::NavigateButton(class UWidget* Button)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76748);

	UInGameMenuWidget_Gamepad_C_NavigateButton_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UInGameMenuWidget_Gamepad_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76740);

	UInGameMenuWidget_Gamepad_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.IsPCOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::IsPCOnly(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76730);

	UInGameMenuWidget_Gamepad_C_IsPCOnly_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.IsGamepadOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::IsGamepadOnly(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76721);

	UInGameMenuWidget_Gamepad_C_IsGamepadOnly_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.GetVersionText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UInGameMenuWidget_Gamepad_C::GetVersionText_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76705);

	UInGameMenuWidget_Gamepad_C_GetVersionText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.QuitGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupButtonID                 ButtonID                       (Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::QuitGame(EPopupButtonID ButtonID)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76697);

	UInGameMenuWidget_Gamepad_C_QuitGame_Params params;
	params.ButtonID = ButtonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.GoToLobby
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupButtonID                 ButtonID                       (Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::GoToLobby(EPopupButtonID ButtonID)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76689);

	UInGameMenuWidget_Gamepad_C_GoToLobby_Params params;
	params.ButtonID = ButtonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInGameMenuWidget_Gamepad_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76688);

	UInGameMenuWidget_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.OnHiddenWidget
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuWidget_Gamepad_C::OnHiddenWidget()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76687);

	UInGameMenuWidget_Gamepad_C_OnHiddenWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__OptionButton_K2Node_ComponentBoundEvent_107_OnClickedEventDispatcher__DelegateSignature
// (BlueprintEvent)

void UInGameMenuWidget_Gamepad_C::BndEvt__OptionButton_K2Node_ComponentBoundEvent_107_OnClickedEventDispatcher__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76686);

	UInGameMenuWidget_Gamepad_C_BndEvt__OptionButton_K2Node_ComponentBoundEvent_107_OnClickedEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuWidget_Gamepad_C::CustomEvent_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76685);

	UInGameMenuWidget_Gamepad_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuWidget_Gamepad_C::CustomEvent_2()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76684);

	UInGameMenuWidget_Gamepad_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__Resume_K2Node_ComponentBoundEvent_195_OnClickedEventDispatcher__DelegateSignature
// (BlueprintEvent)

void UInGameMenuWidget_Gamepad_C::BndEvt__Resume_K2Node_ComponentBoundEvent_195_OnClickedEventDispatcher__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76683);

	UInGameMenuWidget_Gamepad_C_BndEvt__Resume_K2Node_ComponentBoundEvent_195_OnClickedEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76680);

	UInGameMenuWidget_Gamepad_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.OpenGamepadOption
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuWidget_Gamepad_C::OpenGamepadOption()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76679);

	UInGameMenuWidget_Gamepad_C_OpenGamepadOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_123_OnClickedEventDispatcher__DelegateSignature
// (BlueprintEvent)

void UInGameMenuWidget_Gamepad_C::BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_123_OnClickedEventDispatcher__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76678);

	UInGameMenuWidget_Gamepad_C_BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_123_OnClickedEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__Resume_K2Node_ComponentBoundEvent_392_OnNavigateKeyDown__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void UInGameMenuWidget_Gamepad_C::BndEvt__Resume_K2Node_ComponentBoundEvent_392_OnNavigateKeyDown__DelegateSignature(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76676);

	UInGameMenuWidget_Gamepad_C_BndEvt__Resume_K2Node_ComponentBoundEvent_392_OnNavigateKeyDown__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__SETTINGS_K2Node_ComponentBoundEvent_401_OnNavigateKeyDown__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void UInGameMenuWidget_Gamepad_C::BndEvt__SETTINGS_K2Node_ComponentBoundEvent_401_OnNavigateKeyDown__DelegateSignature(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76674);

	UInGameMenuWidget_Gamepad_C_BndEvt__SETTINGS_K2Node_ComponentBoundEvent_401_OnNavigateKeyDown__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_411_OnNavigateKeyDown__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void UInGameMenuWidget_Gamepad_C::BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_411_OnNavigateKeyDown__DelegateSignature(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76672);

	UInGameMenuWidget_Gamepad_C_BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_411_OnNavigateKeyDown__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_422_OnNavigateKeyDown__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void UInGameMenuWidget_Gamepad_C::BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_422_OnNavigateKeyDown__DelegateSignature(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76670);

	UInGameMenuWidget_Gamepad_C_BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_422_OnNavigateKeyDown__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__SETTINGS_K2Node_ComponentBoundEvent_43_OnGamepadA__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::BndEvt__SETTINGS_K2Node_ComponentBoundEvent_43_OnGamepadA__DelegateSignature(bool bPressed)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76668);

	UInGameMenuWidget_Gamepad_C_BndEvt__SETTINGS_K2Node_ComponentBoundEvent_43_OnGamepadA__DelegateSignature_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__Resume_K2Node_ComponentBoundEvent_52_OnGamepadA__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::BndEvt__Resume_K2Node_ComponentBoundEvent_52_OnGamepadA__DelegateSignature(bool bPressed)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76666);

	UInGameMenuWidget_Gamepad_C_BndEvt__Resume_K2Node_ComponentBoundEvent_52_OnGamepadA__DelegateSignature_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_70_OnGamepadA__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_70_OnGamepadA__DelegateSignature(bool bPressed)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76664);

	UInGameMenuWidget_Gamepad_C_BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_70_OnGamepadA__DelegateSignature_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnGamepadA__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnGamepadA__DelegateSignature(bool bPressed)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76662);

	UInGameMenuWidget_Gamepad_C_BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnGamepadA__DelegateSignature_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__Resume_K2Node_ComponentBoundEvent_0_OnGamepadB__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::BndEvt__Resume_K2Node_ComponentBoundEvent_0_OnGamepadB__DelegateSignature(bool bPressed)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76660);

	UInGameMenuWidget_Gamepad_C_BndEvt__Resume_K2Node_ComponentBoundEvent_0_OnGamepadB__DelegateSignature_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__SETTINGS_K2Node_ComponentBoundEvent_1_OnGamepadB__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::BndEvt__SETTINGS_K2Node_ComponentBoundEvent_1_OnGamepadB__DelegateSignature(bool bPressed)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76658);

	UInGameMenuWidget_Gamepad_C_BndEvt__SETTINGS_K2Node_ComponentBoundEvent_1_OnGamepadB__DelegateSignature_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_2_OnGamepadB__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_2_OnGamepadB__DelegateSignature(bool bPressed)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76656);

	UInGameMenuWidget_Gamepad_C_BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_2_OnGamepadB__DelegateSignature_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_3_OnGamepadB__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_3_OnGamepadB__DelegateSignature(bool bPressed)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76654);

	UInGameMenuWidget_Gamepad_C_BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_3_OnGamepadB__DelegateSignature_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnClickedEventDispatcher__DelegateSignature
// (BlueprintEvent)

void UInGameMenuWidget_Gamepad_C::BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnClickedEventDispatcher__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76653);

	UInGameMenuWidget_Gamepad_C_BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnClickedEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.ExecuteUbergraph_InGameMenuWidget_Gamepad
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::ExecuteUbergraph_InGameMenuWidget_Gamepad(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76585);

	UInGameMenuWidget_Gamepad_C_ExecuteUbergraph_InGameMenuWidget_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.TestDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_Gamepad_C::TestDispatcher__DelegateSignature(bool NewParam)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76583);

	UInGameMenuWidget_Gamepad_C_TestDispatcher__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
