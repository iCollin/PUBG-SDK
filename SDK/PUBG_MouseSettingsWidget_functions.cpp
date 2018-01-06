// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MouseSettingsWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MouseSettingsWidget.MouseSettingsWidget_C.IsEnableApply
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMouseSettingsWidget_C::IsEnableApply()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(68260);

	UMouseSettingsWidget_C_IsEnableApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MouseSettingsWidget.MouseSettingsWidget_C.initailizeMouseSettingsWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsDefaultSetting              (Parm, ZeroConstructor, IsPlainOldData)

void UMouseSettingsWidget_C::initailizeMouseSettingsWidget(bool bIsDefaultSetting)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(68245);

	UMouseSettingsWidget_C_initailizeMouseSettingsWidget_Params params;
	params.bIsDefaultSetting = bIsDefaultSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MouseSettingsWidget.MouseSettingsWidget_C.IsChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMouseSettingsWidget_C::IsChanged()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(68226);

	UMouseSettingsWidget_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MouseSettingsWidget.MouseSettingsWidget_C.OnDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMouseSettingsWidget_C::OnDefault()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(68225);

	UMouseSettingsWidget_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MouseSettingsWidget.MouseSettingsWidget_C.OnApply
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMouseSettingsWidget_C::OnApply()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(68224);

	UMouseSettingsWidget_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MouseSettingsWidget.MouseSettingsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMouseSettingsWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(68223);

	UMouseSettingsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MouseSettingsWidget.MouseSettingsWidget_C.OnReset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMouseSettingsWidget_C::OnReset()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(68222);

	UMouseSettingsWidget_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MouseSettingsWidget.MouseSettingsWidget_C.ExecuteUbergraph_MouseSettingsWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMouseSettingsWidget_C::ExecuteUbergraph_MouseSettingsWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(68211);

	UMouseSettingsWidget_C_ExecuteUbergraph_MouseSettingsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
