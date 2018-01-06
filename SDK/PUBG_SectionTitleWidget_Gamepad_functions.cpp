// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_SectionTitleWidget_Gamepad_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.OnPrepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void USectionTitleWidget_Gamepad_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(60819);

	USectionTitleWidget_Gamepad_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.SetSubFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSubFocus                      (Parm, ZeroConstructor, IsPlainOldData)

void USectionTitleWidget_Gamepad_C::SetSubFocus(bool bSubFocus)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(60817);

	USectionTitleWidget_Gamepad_C_SetSubFocus_Params params;
	params.bSubFocus = bSubFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bFocus                         (Parm, ZeroConstructor, IsPlainOldData)

void USectionTitleWidget_Gamepad_C::SetFocus(bool bFocus)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(60815);

	USectionTitleWidget_Gamepad_C_SetFocus_Params params;
	params.bFocus = bFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.GetFocusMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* FocusMaterial                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USectionTitleWidget_Gamepad_C::GetFocusMaterial(class UMaterialInstanceDynamic** FocusMaterial)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(60811);

	USectionTitleWidget_Gamepad_C_GetFocusMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusMaterial != nullptr)
		*FocusMaterial = params.FocusMaterial;
}


// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USectionTitleWidget_Gamepad_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(60810);

	USectionTitleWidget_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void USectionTitleWidget_Gamepad_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(60807);

	USectionTitleWidget_Gamepad_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.ExecuteUbergraph_SectionTitleWidget_Gamepad
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USectionTitleWidget_Gamepad_C::ExecuteUbergraph_SectionTitleWidget_Gamepad(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(60803);

	USectionTitleWidget_Gamepad_C_ExecuteUbergraph_SectionTitleWidget_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
