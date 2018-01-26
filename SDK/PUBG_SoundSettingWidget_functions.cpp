// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_SoundSettingWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SoundSettingWidget.SoundSettingWidget_C.GetGamePadHelpWidgetClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  GuideClass                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USoundSettingWidget_C::GetGamePadHelpWidgetClass(class UClass** GuideClass)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(91992);

	USoundSettingWidget_C_GetGamePadHelpWidgetClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GuideClass != nullptr)
		*GuideClass = params.GuideClass;
}


// Function SoundSettingWidget.SoundSettingWidget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USoundSettingWidget_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(91986);

	USoundSettingWidget_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SoundSettingWidget.SoundSettingWidget_C.IsChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USoundSettingWidget_C::IsChanged()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(91940);

	USoundSettingWidget_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SoundSettingWidget.SoundSettingWidget_C.UpdateSoundSettings
// (Public, BlueprintCallable, BlueprintEvent)

void USoundSettingWidget_C::UpdateSoundSettings()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(91919);

	USoundSettingWidget_C_UpdateSoundSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SoundSettingWidget.SoundSettingWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USoundSettingWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(91918);

	USoundSettingWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SoundSettingWidget.SoundSettingWidget_C.OnReset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USoundSettingWidget_C::OnReset()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(91917);

	USoundSettingWidget_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SoundSettingWidget.SoundSettingWidget_C.OnDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USoundSettingWidget_C::OnDefault()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(91916);

	USoundSettingWidget_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SoundSettingWidget.SoundSettingWidget_C.OnApply
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USoundSettingWidget_C::OnApply()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(91915);

	USoundSettingWidget_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SoundSettingWidget.SoundSettingWidget_C.ExecuteUbergraph_SoundSettingWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USoundSettingWidget_C::ExecuteUbergraph_SoundSettingWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(91898);

	USoundSettingWidget_C_ExecuteUbergraph_SoundSettingWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
