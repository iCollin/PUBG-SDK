// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_QualitySliderWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QualitySliderWidget.QualitySliderWidget_C.GetGamePadHelpWidgetClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  GuideClass                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQualitySliderWidget_C::GetGamePadHelpWidgetClass(class UClass** GuideClass)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(62520);

	UQualitySliderWidget_C_GetGamePadHelpWidgetClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GuideClass != nullptr)
		*GuideClass = params.GuideClass;
}


// Function QualitySliderWidget.QualitySliderWidget_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UQualitySliderWidget_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(62514);

	UQualitySliderWidget_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QualitySliderWidget.QualitySliderWidget_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UQualitySliderWidget_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(62509);

	UQualitySliderWidget_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QualitySliderWidget.QualitySliderWidget_C.ProcessKeyDown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)
// struct FEventReply             Reply                          (Parm, OutParm)

void UQualitySliderWidget_C::ProcessKeyDown(const struct FKey& Key, struct FEventReply* Reply)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(62490);

	UQualitySliderWidget_C_ProcessKeyDown_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;
}


// Function QualitySliderWidget.QualitySliderWidget_C.OnPrepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UQualitySliderWidget_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(62481);

	UQualitySliderWidget_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySliderWidget.QualitySliderWidget_C.GetValueText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UQualitySliderWidget_C::GetValueText()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(62476);

	UQualitySliderWidget_C_GetValueText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QualitySliderWidget.QualitySliderWidget_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UQualitySliderWidget_C::SetValue(float Value)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(62473);

	UQualitySliderWidget_C_SetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySliderWidget.QualitySliderWidget_C.GetQualityName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UQualitySliderWidget_C::GetQualityName()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(62471);

	UQualitySliderWidget_C_GetQualityName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QualitySliderWidget.QualitySliderWidget_C.GetValueByRange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQualitySliderWidget_C::GetValueByRange(float* Value)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(62467);

	UQualitySliderWidget_C_GetValueByRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function QualitySliderWidget.QualitySliderWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_370_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UQualitySliderWidget_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_370_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(62466);

	UQualitySliderWidget_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_370_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySliderWidget.QualitySliderWidget_C.BndEvt__RightButotn_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UQualitySliderWidget_C::BndEvt__RightButotn_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(62465);

	UQualitySliderWidget_C_BndEvt__RightButotn_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySliderWidget.QualitySliderWidget_C.BndEvt__EditableText_2_K2Node_ComponentBoundEvent_82_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UQualitySliderWidget_C::BndEvt__EditableText_2_K2Node_ComponentBoundEvent_82_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(62463);

	UQualitySliderWidget_C_BndEvt__EditableText_2_K2Node_ComponentBoundEvent_82_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySliderWidget.QualitySliderWidget_C.ExecuteUbergraph_QualitySliderWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UQualitySliderWidget_C::ExecuteUbergraph_QualitySliderWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(62450);

	UQualitySliderWidget_C_ExecuteUbergraph_QualitySliderWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
