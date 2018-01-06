// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GeneralSettingWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GeneralSettingWidget.GeneralSettingWidget_C.IsChangeVideoCapture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsChange                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGeneralSettingWidget_C::IsChangeVideoCapture(bool* IsChange)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(69629);

	UGeneralSettingWidget_C_IsChangeVideoCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsChange != nullptr)
		*IsChange = params.IsChange;
}


// Function GeneralSettingWidget.GeneralSettingWidget_C.IsEnable_VideoCapture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGeneralSettingWidget_C::IsEnable_VideoCapture()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(69623);

	UGeneralSettingWidget_C_IsEnable_VideoCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GeneralSettingWidget.GeneralSettingWidget_C.ApplyMiniMapType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGeneralSettingWidget_C::ApplyMiniMapType()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(69591);

	UGeneralSettingWidget_C_ApplyMiniMapType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeneralSettingWidget.GeneralSettingWidget_C.SettingDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UGeneralSettingWidget_C::SettingDefault()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(69585);

	UGeneralSettingWidget_C_SettingDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeneralSettingWidget.GeneralSettingWidget_C.IsChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGeneralSettingWidget_C::IsChanged()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(69578);

	UGeneralSettingWidget_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GeneralSettingWidget.GeneralSettingWidget_C.GetLanguageCultureName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 CultureName                    (Parm, OutParm, ZeroConstructor)

void UGeneralSettingWidget_C::GetLanguageCultureName(struct FString* CultureName)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(69565);

	UGeneralSettingWidget_C_GetLanguageCultureName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CultureName != nullptr)
		*CultureName = params.CultureName;
}


// Function GeneralSettingWidget.GeneralSettingWidget_C.InitializeResolutionIWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bConstruct                     (Parm, ZeroConstructor, IsPlainOldData)

void UGeneralSettingWidget_C::InitializeResolutionIWidget(bool bConstruct)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(69534);

	UGeneralSettingWidget_C_InitializeResolutionIWidget_Params params;
	params.bConstruct = bConstruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeneralSettingWidget.GeneralSettingWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGeneralSettingWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(69533);

	UGeneralSettingWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeneralSettingWidget.GeneralSettingWidget_C.OnApply
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGeneralSettingWidget_C::OnApply()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(69532);

	UGeneralSettingWidget_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeneralSettingWidget.GeneralSettingWidget_C.OnDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGeneralSettingWidget_C::OnDefault()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(69531);

	UGeneralSettingWidget_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeneralSettingWidget.GeneralSettingWidget_C.OnReset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGeneralSettingWidget_C::OnReset()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(69530);

	UGeneralSettingWidget_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeneralSettingWidget.GeneralSettingWidget_C.ExecuteUbergraph_GeneralSettingWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGeneralSettingWidget_C::ExecuteUbergraph_GeneralSettingWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(69526);

	UGeneralSettingWidget_C_ExecuteUbergraph_GeneralSettingWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
