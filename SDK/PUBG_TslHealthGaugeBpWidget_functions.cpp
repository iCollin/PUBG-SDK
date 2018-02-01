// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TslHealthGaugeBpWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.SetupHealthGaugeColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            InitColor                      (Parm, IsPlainOldData)

void UTslHealthGaugeBpWidget_C::SetupHealthGaugeColor(const struct FLinearColor& InitColor)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(92091);

	UTslHealthGaugeBpWidget_C_SetupHealthGaugeColor_Params params;
	params.InitColor = InitColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.On_Background_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UTslHealthGaugeBpWidget_C::On_Background_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(92089);

	UTslHealthGaugeBpWidget_C_On_Background_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.Get_Background_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UTslHealthGaugeBpWidget_C::Get_Background_ColorAndOpacity_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(92081);

	UTslHealthGaugeBpWidget_C_Get_Background_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.Get_Background_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UTslHealthGaugeBpWidget_C::Get_Background_Visibility_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(92078);

	UTslHealthGaugeBpWidget_C_Get_Background_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.UpdateWaning
// (Public, BlueprintCallable, BlueprintEvent)

void UTslHealthGaugeBpWidget_C::UpdateWaning()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(92071);

	UTslHealthGaugeBpWidget_C_UpdateWaning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.UpdateColorGauge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTslHealthGaugeBpWidget_C::UpdateColorGauge()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(92065);

	UTslHealthGaugeBpWidget_C_UpdateColorGauge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.GetMoveCurve
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCurveFloat*             NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTslHealthGaugeBpWidget_C::GetMoveCurve(class UCurveFloat** NewParam)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(92063);

	UTslHealthGaugeBpWidget_C_GetMoveCurve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.SetHealth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewDestination                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bGroggy                        (Parm, ZeroConstructor, IsPlainOldData)

void UTslHealthGaugeBpWidget_C::SetHealth(float NewDestination, bool bGroggy)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(92056);

	UTslHealthGaugeBpWidget_C_SetHealth_Params params;
	params.NewDestination = NewDestination;
	params.bGroggy = bGroggy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.MoveTick
// (Public, BlueprintCallable, BlueprintEvent)

void UTslHealthGaugeBpWidget_C::MoveTick()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(92055);

	UTslHealthGaugeBpWidget_C_MoveTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.GetHealthGaugeColorOpacity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void UTslHealthGaugeBpWidget_C::GetHealthGaugeColorOpacity(struct FLinearColor* Color)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(92051);

	UTslHealthGaugeBpWidget_C_GetHealthGaugeColorOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTslHealthGaugeBpWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(92050);

	UTslHealthGaugeBpWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UTslHealthGaugeBpWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(92047);

	UTslHealthGaugeBpWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.StartMove
// (BlueprintCallable, BlueprintEvent)

void UTslHealthGaugeBpWidget_C::StartMove()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(92046);

	UTslHealthGaugeBpWidget_C_StartMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.ExecuteUbergraph_TslHealthGaugeBpWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTslHealthGaugeBpWidget_C::ExecuteUbergraph_TslHealthGaugeBpWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(92027);

	UTslHealthGaugeBpWidget_C_ExecuteUbergraph_TslHealthGaugeBpWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
