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

// Function SoundSettingWidget.SoundSettingWidget_C.IsChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USoundSettingWidget_C::IsChanged()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(68671);

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
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(68658);

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
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(68657);

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
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(68656);

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
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(68655);

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
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(68654);

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
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(68640);

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
