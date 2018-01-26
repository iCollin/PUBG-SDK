// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_StanceManagerWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.On_StanceManagerCanvas_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UBP_StanceManagerWidget_C::On_StanceManagerCanvas_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(57805);

	UBP_StanceManagerWidget_C_On_StanceManagerCanvas_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.SetStanceManagerShow
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_StanceManagerWidget_C::SetStanceManagerShow()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(57804);

	UBP_StanceManagerWidget_C_SetStanceManagerShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.SetStanceManagerHide
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_StanceManagerWidget_C::SetStanceManagerHide()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(57803);

	UBP_StanceManagerWidget_C_SetStanceManagerHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.OnDriver
// (BlueprintCallable, BlueprintEvent)

void UBP_StanceManagerWidget_C::OnDriver()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(57802);

	UBP_StanceManagerWidget_C_OnDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.OnRider
// (BlueprintCallable, BlueprintEvent)

void UBP_StanceManagerWidget_C::OnRider()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(57801);

	UBP_StanceManagerWidget_C_OnRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.ExecuteUbergraph_BP_StanceManagerWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_StanceManagerWidget_C::ExecuteUbergraph_BP_StanceManagerWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(57799);

	UBP_StanceManagerWidget_C_ExecuteUbergraph_BP_StanceManagerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
