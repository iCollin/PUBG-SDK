// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_XboxTeamManageWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.OnMouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_XboxTeamManageWidget_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78722);

	UBP_XboxTeamManageWidget_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.HandleButtonB
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_XboxTeamManageWidget_C::HandleButtonB()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78717);

	UBP_XboxTeamManageWidget_C_HandleButtonB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_XboxTeamManageWidget_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78710);

	UBP_XboxTeamManageWidget_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_XboxTeamManageWidget_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78700);

	UBP_XboxTeamManageWidget_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_2_OnGamepadNavigateKeyDown__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_2_OnGamepadNavigateKeyDown__DelegateSignature(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78698);

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_2_OnGamepadNavigateKeyDown__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_0_OnGamepadA__DelegateSignature
// (BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_0_OnGamepadA__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78697);

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_0_OnGamepadA__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_1_OnGamepadA__DelegateSignature
// (BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_1_OnGamepadA__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78696);

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_1_OnGamepadA__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_2_OnGamepadA__DelegateSignature
// (BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_2_OnGamepadA__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78695);

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_2_OnGamepadA__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_1_OnGamepadNavigateKeyDown__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_1_OnGamepadNavigateKeyDown__DelegateSignature(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78693);

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_1_OnGamepadNavigateKeyDown__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_3_OnGamepadB__DelegateSignature
// (BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_3_OnGamepadB__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78692);

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_3_OnGamepadB__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_4_OnGamepadB__DelegateSignature
// (BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_4_OnGamepadB__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78691);

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_4_OnGamepadB__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_5_OnGamepadB__DelegateSignature
// (BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_5_OnGamepadB__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78690);

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_5_OnGamepadB__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_0_OnGamepadNavigateKeyDown__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_0_OnGamepadNavigateKeyDown__DelegateSignature(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78688);

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_0_OnGamepadNavigateKeyDown__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_6_OnGamepadX__DelegateSignature
// (BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_6_OnGamepadX__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78687);

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_6_OnGamepadX__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_7_OnGamepadX__DelegateSignature
// (BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_7_OnGamepadX__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78686);

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_7_OnGamepadX__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_8_OnGamepadX__DelegateSignature
// (BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_8_OnGamepadX__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78685);

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_8_OnGamepadX__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.ExecuteUbergraph_BP_XboxTeamManageWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_XboxTeamManageWidget_C::ExecuteUbergraph_BP_XboxTeamManageWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78668);

	UBP_XboxTeamManageWidget_C_ExecuteUbergraph_BP_XboxTeamManageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
