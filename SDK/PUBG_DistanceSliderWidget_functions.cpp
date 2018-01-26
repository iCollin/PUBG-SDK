// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_DistanceSliderWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DistanceSliderWidget.DistanceSliderWidget_C.ChangeDistance_Delegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UDistanceSliderWidget_C::ChangeDistance_Delegate(float Value)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(71604);

	UDistanceSliderWidget_C_ChangeDistance_Delegate_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.SetDistanceFunc
// (Public, BlueprintCallable, BlueprintEvent)

void UDistanceSliderWidget_C::SetDistanceFunc()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(71601);

	UDistanceSliderWidget_C_SetDistanceFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.ChangeDistance_Slider
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UDistanceSliderWidget_C::ChangeDistance_Slider(float Value)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(71598);

	UDistanceSliderWidget_C_ChangeDistance_Slider_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Pos                            (Parm, ZeroConstructor, IsPlainOldData)

void UDistanceSliderWidget_C::SetValue(float Pos)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(71595);

	UDistanceSliderWidget_C_SetValue_Params params;
	params.Pos = Pos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.SetDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UDistanceSliderWidget_C::SetDistance(float Value)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(71592);

	UDistanceSliderWidget_C_SetDistance_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.GetDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDistanceSliderWidget_C::GetDistance(float* Distance)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(71588);

	UDistanceSliderWidget_C_GetDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.BndEvt__DistanceSlider_K2Node_ComponentBoundEvent_64_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UDistanceSliderWidget_C::BndEvt__DistanceSlider_K2Node_ComponentBoundEvent_64_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(71586);

	UDistanceSliderWidget_C_BndEvt__DistanceSlider_K2Node_ComponentBoundEvent_64_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDistanceSliderWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(71585);

	UDistanceSliderWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.ExecuteUbergraph_DistanceSliderWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDistanceSliderWidget_C::ExecuteUbergraph_DistanceSliderWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(71575);

	UDistanceSliderWidget_C_ExecuteUbergraph_DistanceSliderWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.ChagedDistance__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewDistance                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UDistanceSliderWidget_C::ChagedDistance__DelegateSignature(float NewDistance, float Value)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(71572);

	UDistanceSliderWidget_C_ChagedDistance__DelegateSignature_Params params;
	params.NewDistance = NewDistance;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
