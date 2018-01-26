// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GeneralSettingWidget_Gamepad_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.GetGamePadHelpWidgetClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  GuideClass                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGeneralSettingWidget_Gamepad_C::GetGamePadHelpWidgetClass(class UClass** GuideClass)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61925);

	UGeneralSettingWidget_Gamepad_C_GetGamePadHelpWidgetClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GuideClass != nullptr)
		*GuideClass = params.GuideClass;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UGeneralSettingWidget_Gamepad_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(62250);

	UGeneralSettingWidget_Gamepad_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.GetCurrentFocusWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 FocusWidget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGeneralSettingWidget_Gamepad_C::GetCurrentFocusWidget(class UWidget** FocusWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(62248);

	UGeneralSettingWidget_Gamepad_C_GetCurrentFocusWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusWidget != nullptr)
		*FocusWidget = params.FocusWidget;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UGeneralSettingWidget_Gamepad_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(62242);

	UGeneralSettingWidget_Gamepad_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.IsEnable_VideoCapture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGeneralSettingWidget_Gamepad_C::IsEnable_VideoCapture()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61919);

	UGeneralSettingWidget_Gamepad_C_IsEnable_VideoCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.SettingDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UGeneralSettingWidget_Gamepad_C::SettingDefault()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61913);

	UGeneralSettingWidget_Gamepad_C_SettingDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.IsChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGeneralSettingWidget_Gamepad_C::IsChanged()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61908);

	UGeneralSettingWidget_Gamepad_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.GetLanguageCultureName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 CultureName                    (Parm, OutParm, ZeroConstructor)

void UGeneralSettingWidget_Gamepad_C::GetLanguageCultureName(struct FString* CultureName)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61895);

	UGeneralSettingWidget_Gamepad_C_GetLanguageCultureName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CultureName != nullptr)
		*CultureName = params.CultureName;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.InitializeResolutionIWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bConstruct                     (Parm, ZeroConstructor, IsPlainOldData)

void UGeneralSettingWidget_Gamepad_C::InitializeResolutionIWidget(bool bConstruct)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61879);

	UGeneralSettingWidget_Gamepad_C_InitializeResolutionIWidget_Params params;
	params.bConstruct = bConstruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGeneralSettingWidget_Gamepad_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61878);

	UGeneralSettingWidget_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.OnApply
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGeneralSettingWidget_Gamepad_C::OnApply()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61877);

	UGeneralSettingWidget_Gamepad_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.OnDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGeneralSettingWidget_Gamepad_C::OnDefault()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61876);

	UGeneralSettingWidget_Gamepad_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.OnReset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGeneralSettingWidget_Gamepad_C::OnReset()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61875);

	UGeneralSettingWidget_Gamepad_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.ExecuteUbergraph_GeneralSettingWidget_Gamepad
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGeneralSettingWidget_Gamepad_C::ExecuteUbergraph_GeneralSettingWidget_Gamepad(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61872);

	UGeneralSettingWidget_Gamepad_C_ExecuteUbergraph_GeneralSettingWidget_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
