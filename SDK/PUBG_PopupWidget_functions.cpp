// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PopupWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PopupWidget.PopupWidget_C.OnGamepadButtonVisibilityPrepass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UPopupWidget_C::OnGamepadButtonVisibilityPrepass(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73419);

	UPopupWidget_C_OnGamepadButtonVisibilityPrepass_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget.PopupWidget_C.SetPopup
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupStyle                    PopupStyle                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Message                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         PressedDelegate                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPopupWidget_C::SetPopup(EPopupStyle PopupStyle, const struct FText& Message, const struct FScriptDelegate& PressedDelegate)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73414);

	UPopupWidget_C_SetPopup_Params params;
	params.PopupStyle = PopupStyle;
	params.Message = Message;
	params.PressedDelegate = PressedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget.PopupWidget_C.BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPopupWidget_C::BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73413);

	UPopupWidget_C_BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget.PopupWidget_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPopupWidget_C::BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73412);

	UPopupWidget_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget.PopupWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPopupWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73411);

	UPopupWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget.PopupWidget_C.Custom Event_1
// (BlueprintCallable, BlueprintEvent)

void UPopupWidget_C::Custom_Event_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73410);

	UPopupWidget_C_Custom_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget.PopupWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPopupWidget_C::Destruct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73409);

	UPopupWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget.PopupWidget_C.XBoxOneOk
// (BlueprintCallable, BlueprintEvent)

void UPopupWidget_C::XBoxOneOk()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73408);

	UPopupWidget_C_XBoxOneOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget.PopupWidget_C.Custom Event_2
// (BlueprintCallable, BlueprintEvent)

void UPopupWidget_C::Custom_Event_2()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73407);

	UPopupWidget_C_Custom_Event_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget.PopupWidget_C.XBoxOneCancel
// (BlueprintCallable, BlueprintEvent)

void UPopupWidget_C::XBoxOneCancel()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73406);

	UPopupWidget_C_XBoxOneCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget.PopupWidget_C.ExecuteUbergraph_PopupWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPopupWidget_C::ExecuteUbergraph_PopupWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73392);

	UPopupWidget_C_ExecuteUbergraph_PopupWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget.PopupWidget_C.ButtonClickDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupButtonID                 NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void UPopupWidget_C::ButtonClickDispatcher__DelegateSignature(EPopupButtonID NewParam)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73389);

	UPopupWidget_C_ButtonClickDispatcher__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
