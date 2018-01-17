// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CoherentUIGTPlugin_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CoherentUIGTPlugin.CoherentUIGTWidget.TriggerJSEvent
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UCoherentUIGTJSEvent*    EventData                      (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTWidget::TriggerJSEvent(const struct FString& Name, class UCoherentUIGTJSEvent* EventData)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(21481);

	UCoherentUIGTWidget_TriggerJSEvent_Params params;
	params.Name = Name;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.ShowPaintRects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           show                           (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTWidget::ShowPaintRects(bool show)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(21479);

	UCoherentUIGTWidget_ShowPaintRects_Params params;
	params.show = show;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.SetClickThroughAlphaThreshold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          threshold                      (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTWidget::SetClickThroughAlphaThreshold(float threshold)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(21477);

	UCoherentUIGTWidget_SetClickThroughAlphaThreshold_Params params;
	params.threshold = threshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.Reload
// (Final, Native, Public, BlueprintCallable)

void UCoherentUIGTWidget::Reload()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(21476);

	UCoherentUIGTWidget_Reload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.Redraw
// (Final, Native, Public, BlueprintCallable, Const)

void UCoherentUIGTWidget::Redraw()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(21475);

	UCoherentUIGTWidget_Redraw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.Load
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 path                           (Parm, ZeroConstructor)

void UCoherentUIGTWidget::Load(const struct FString& path)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(21473);

	UCoherentUIGTWidget_Load_Params params;
	params.path = path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsTransparent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCoherentUIGTWidget::IsTransparent()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(21471);

	UCoherentUIGTWidget_IsTransparent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyToCreateView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCoherentUIGTWidget::IsReadyToCreateView()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(21469);

	UCoherentUIGTWidget_IsReadyToCreateView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyForBindings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCoherentUIGTWidget::IsReadyForBindings()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(21467);

	UCoherentUIGTWidget_IsReadyForBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsDocumentReady
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCoherentUIGTWidget::IsDocumentReady()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(21465);

	UCoherentUIGTWidget_IsDocumentReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.HasRequestedView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCoherentUIGTWidget::HasRequestedView()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(21463);

	UCoherentUIGTWidget_HasRequestedView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.GetClickThroughAlphaThreshold
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCoherentUIGTWidget::GetClickThroughAlphaThreshold()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(21461);

	UCoherentUIGTWidget_GetClickThroughAlphaThreshold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateJSEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCoherentUIGTJSEvent* UCoherentUIGTWidget::CreateJSEvent()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(21459);

	UCoherentUIGTWidget_CreateJSEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddStructArg
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UStructProperty*         Arg                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTJSEvent::AddStructArg(class UStructProperty* Arg)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40117);

	UCoherentUIGTJSEvent_AddStructArg_Params params;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 str                            (Parm, ZeroConstructor)

void UCoherentUIGTJSEvent::AddString(const struct FString& str)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40115);

	UCoherentUIGTJSEvent_AddString_Params params;
	params.str = str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTJSEvent::AddObject(class UObject* Object)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40113);

	UCoherentUIGTJSEvent_AddObject_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddInt32
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            integer                        (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTJSEvent::AddInt32(int integer)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40111);

	UCoherentUIGTJSEvent_AddInt32_Params params;
	params.integer = integer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          FL                             (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTJSEvent::AddFloat(float FL)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40109);

	UCoherentUIGTJSEvent_AddFloat_Params params;
	params.FL = FL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddByte
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  byte                           (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTJSEvent::AddByte(unsigned char byte)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40107);

	UCoherentUIGTJSEvent_AddByte_Params params;
	params.byte = byte;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           B                              (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTJSEvent::AddBool(bool B)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40105);

	UCoherentUIGTJSEvent_AddBool_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddArray
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>                    Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCoherentUIGTJSEvent::AddArray(TArray<int> Array)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40102);

	UCoherentUIGTJSEvent_AddArray_Params params;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.ReadObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTJSPayload::ReadObject(int Index, class UObject* Object)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40131);

	UCoherentUIGTJSPayload_ReadObject_Params params;
	params.Index = Index;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCoherentUIGTJSPayload::GetString(int Index)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40128);

	UCoherentUIGTJSPayload_GetString_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetNumber
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCoherentUIGTJSPayload::GetNumber(int Index)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40125);

	UCoherentUIGTJSPayload_GetNumber_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetInt32
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCoherentUIGTJSPayload::GetInt32(int Index)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40122);

	UCoherentUIGTJSPayload_GetInt32_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCoherentUIGTJSPayload::GetBool(int Index)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40119);

	UCoherentUIGTJSPayload_GetBool_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.TriggerJSEvent
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UCoherentUIGTJSEvent*    EventData                      (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBaseComponent::TriggerJSEvent(const struct FString& Name, class UCoherentUIGTJSEvent* EventData)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40162);

	UCoherentUIGTBaseComponent_TriggerJSEvent_Params params;
	params.Name = Name;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.ShowPaintRects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           show                           (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBaseComponent::ShowPaintRects(bool show)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40160);

	UCoherentUIGTBaseComponent_ShowPaintRects_Params params;
	params.show = show;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetClickThroughAlphaThreshold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          threshold                      (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBaseComponent::SetClickThroughAlphaThreshold(float threshold)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40158);

	UCoherentUIGTBaseComponent_SetClickThroughAlphaThreshold_Params params;
	params.threshold = threshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Resize
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBaseComponent::Resize(int Width, int Height)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40155);

	UCoherentUIGTBaseComponent_Resize_Params params;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Reload
// (Final, Native, Public, BlueprintCallable)

void UCoherentUIGTBaseComponent::Reload()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40154);

	UCoherentUIGTBaseComponent_Reload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Redraw
// (Final, Native, Public, BlueprintCallable, Const)

void UCoherentUIGTBaseComponent::Redraw()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40153);

	UCoherentUIGTBaseComponent_Redraw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Load
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 path                           (Parm, ZeroConstructor)

void UCoherentUIGTBaseComponent::Load(const struct FString& path)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40151);

	UCoherentUIGTBaseComponent_Load_Params params;
	params.path = path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsTransparent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCoherentUIGTBaseComponent::IsTransparent()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40149);

	UCoherentUIGTBaseComponent_IsTransparent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyToCreateView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCoherentUIGTBaseComponent::IsReadyToCreateView()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40147);

	UCoherentUIGTBaseComponent_IsReadyToCreateView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyForBindings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCoherentUIGTBaseComponent::IsReadyForBindings()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40145);

	UCoherentUIGTBaseComponent_IsReadyForBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsDocumentReady
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCoherentUIGTBaseComponent::IsDocumentReady()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40143);

	UCoherentUIGTBaseComponent_IsDocumentReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.HasRequestedView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCoherentUIGTBaseComponent::HasRequestedView()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40141);

	UCoherentUIGTBaseComponent_HasRequestedView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.GetClickThroughAlphaThreshold
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCoherentUIGTBaseComponent::GetClickThroughAlphaThreshold()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40139);

	UCoherentUIGTBaseComponent_GetClickThroughAlphaThreshold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EnableDelayedUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBaseComponent::EnableDelayedUpdate(bool bEnabled)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40137);

	UCoherentUIGTBaseComponent_EnableDelayedUpdate_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateJSEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCoherentUIGTJSEvent* UCoherentUIGTBaseComponent::CreateJSEvent()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40135);

	UCoherentUIGTBaseComponent_CreateJSEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.TriggerJSEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTBaseComponent* Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_TriggerJSEvent(class UCoherentUIGTBaseComponent* Component, const struct FString& EventName, class UCoherentUIGTJSEvent* JSEvent)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40231);

	UCoherentUIGTBlueprintFunctionLibrary_TriggerJSEvent_Params params;
	params.Component = Component;
	params.EventName = EventName;
	params.JSEvent = JSEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.PurgeCoherentDiskCache
// (Final, Native, Static, Public, BlueprintCallable)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_PurgeCoherentDiskCache()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40230);

	UCoherentUIGTBlueprintFunctionLibrary_PurgeCoherentDiskCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.CreateJSEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UCoherentUIGTJSEvent*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCoherentUIGTJSEvent* UCoherentUIGTBlueprintFunctionLibrary::STATIC_CreateJSEvent(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40227);

	UCoherentUIGTBlueprintFunctionLibrary_CreateJSEvent_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddStructArg
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// class UStructProperty*         Arg                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddStructArg(class UCoherentUIGTJSEvent* JSEvent, class UStructProperty* Arg)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40224);

	UCoherentUIGTBlueprintFunctionLibrary_AddStructArg_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Arg                            (Parm, ZeroConstructor)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddString(class UCoherentUIGTJSEvent* JSEvent, const struct FString& Arg)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40221);

	UCoherentUIGTBlueprintFunctionLibrary_AddString_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Arg                            (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddObject(class UCoherentUIGTJSEvent* JSEvent, class UObject* Arg)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40218);

	UCoherentUIGTBlueprintFunctionLibrary_AddObject_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddInt32
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Arg                            (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddInt32(class UCoherentUIGTJSEvent* JSEvent, int Arg)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40215);

	UCoherentUIGTBlueprintFunctionLibrary_AddInt32_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Arg                            (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddFloat(class UCoherentUIGTJSEvent* JSEvent, float Arg)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40212);

	UCoherentUIGTBlueprintFunctionLibrary_AddFloat_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddByte
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Arg                            (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddByte(class UCoherentUIGTJSEvent* JSEvent, unsigned char Arg)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40209);

	UCoherentUIGTBlueprintFunctionLibrary_AddByte_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddBool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Arg                            (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddBool(class UCoherentUIGTJSEvent* JSEvent, bool Arg)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40206);

	UCoherentUIGTBlueprintFunctionLibrary_AddBool_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArrayOfStructs
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Arg                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddArrayOfStructs(class UCoherentUIGTJSEvent* JSEvent, TArray<int> Arg)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40202);

	UCoherentUIGTBlueprintFunctionLibrary_AddArrayOfStructs_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Arg                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ArrayType                      (Parm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddArray(class UCoherentUIGTJSEvent* JSEvent, TArray<int> Arg, int ArrayType)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40197);

	UCoherentUIGTBlueprintFunctionLibrary_AddArray_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;
	params.ArrayType = ArrayType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTGameHUD.SetupUIGTView
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 PageUrl                        (Parm, ZeroConstructor)
// bool                           bIsTransparent                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ClickThroughAlphaThreshold     (Parm, ZeroConstructor, IsPlainOldData)
// float                          AnimationFrameDefer            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDelayedUpdate                 (Parm, ZeroConstructor, IsPlainOldData)

void ACoherentUIGTGameHUD::SetupUIGTView(const struct FString& PageUrl, bool bIsTransparent, float ClickThroughAlphaThreshold, float AnimationFrameDefer, bool bDelayedUpdate)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40235);

	ACoherentUIGTGameHUD_SetupUIGTView_Params params;
	params.PageUrl = PageUrl;
	params.bIsTransparent = bIsTransparent;
	params.ClickThroughAlphaThreshold = ClickThroughAlphaThreshold;
	params.AnimationFrameDefer = AnimationFrameDefer;
	params.bDelayedUpdate = bDelayedUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.ToggleCoherentUIGTInputFocus
// (Final, Native, Public, BlueprintCallable)

void ACoherentUIGTInputActor::ToggleCoherentUIGTInputFocus()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40265);

	ACoherentUIGTInputActor_ToggleCoherentUIGTInputFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetLineTraceMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EGTInputWidgetLineTraceMode> Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void ACoherentUIGTInputActor::SetLineTraceMode(TEnumAsByte<EGTInputWidgetLineTraceMode> Mode)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40263);

	ACoherentUIGTInputActor_SetLineTraceMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetInputPropagationBehaviour
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> Propagation                    (Parm, ZeroConstructor, IsPlainOldData)

void ACoherentUIGTInputActor::SetInputPropagationBehaviour(TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> Propagation)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40261);

	ACoherentUIGTInputActor_SetInputPropagationBehaviour_Params params;
	params.Propagation = Propagation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTViewFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTBaseComponent* NewFocusedView                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ACoherentUIGTInputActor::SetCoherentUIGTViewFocus(class UCoherentUIGTBaseComponent* NewFocusedView)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40259);

	ACoherentUIGTInputActor_SetCoherentUIGTViewFocus_Params params;
	params.NewFocusedView = NewFocusedView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTInputFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           FocusUI                        (Parm, ZeroConstructor, IsPlainOldData)

void ACoherentUIGTInputActor::SetCoherentUIGTInputFocus(bool FocusUI)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40257);

	ACoherentUIGTInputActor_SetCoherentUIGTInputFocus_Params params;
	params.FocusUI = FocusUI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACoherentUIGTInputActor::IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40255);

	ACoherentUIGTInputActor_IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsCoherentUIGTFocused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACoherentUIGTInputActor::IsCoherentUIGTFocused()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40253);

	ACoherentUIGTInputActor_IsCoherentUIGTFocused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECollisionChannel> CollisionChannel               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextureAddress>   AddressMode                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGTInputWidgetRaycastQuality> RaycastQuality                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            UVChannel                      (Parm, ZeroConstructor, IsPlainOldData)

void ACoherentUIGTInputActor::Initialize(TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<ETextureAddress> AddressMode, TEnumAsByte<EGTInputWidgetRaycastQuality> RaycastQuality, int UVChannel)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40248);

	ACoherentUIGTInputActor_Initialize_Params params;
	params.CollisionChannel = CollisionChannel;
	params.AddressMode = AddressMode;
	params.RaycastQuality = RaycastQuality;
	params.UVChannel = UVChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.GetInputPropagationBehaviour
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> ACoherentUIGTInputActor::GetInputPropagationBehaviour()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40246);

	ACoherentUIGTInputActor_GetInputPropagationBehaviour_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.AlwaysAcceptMouseInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAccept                        (Parm, ZeroConstructor, IsPlainOldData)

void ACoherentUIGTInputActor::AlwaysAcceptMouseInput(bool bAccept)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40244);

	ACoherentUIGTInputActor_AlwaysAcceptMouseInput_Params params;
	params.bAccept = bAccept;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAllow                         (Parm, ZeroConstructor, IsPlainOldData)

void ACoherentUIGTInputActor::AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(bool bAllow)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40242);

	ACoherentUIGTInputActor_AllowJoystickInputWhileUIGTIsFocused_DEPRECATED_Params params;
	params.bAllow = bAllow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTLiveView.OnLiveViewSizeRequest
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UCoherentUIGTBaseComponent* baseComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            Width                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCoherentUIGTLiveView::OnLiveViewSizeRequest(class UCoherentUIGTBaseComponent* baseComponent, const struct FString& Name, int* Width, int* Height)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40270);

	UCoherentUIGTLiveView_OnLiveViewSizeRequest_Params params;
	params.baseComponent = baseComponent;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
