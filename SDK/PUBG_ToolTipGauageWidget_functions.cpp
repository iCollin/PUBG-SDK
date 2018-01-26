// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ToolTipGauageWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ToolTipGauageWidget.ToolTipGauageWidget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BeginGap                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndGap                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCompareMode                   (Parm, ZeroConstructor, IsPlainOldData)

void UToolTipGauageWidget_C::Update(float BeginGap, float EndGap, bool bCompareMode)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(62287);

	UToolTipGauageWidget_C_Update_Params params;
	params.BeginGap = BeginGap;
	params.EndGap = EndGap;
	params.bCompareMode = bCompareMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTipGauageWidget.ToolTipGauageWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UToolTipGauageWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(62286);

	UToolTipGauageWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTipGauageWidget.ToolTipGauageWidget_C.ExecuteUbergraph_ToolTipGauageWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UToolTipGauageWidget_C::ExecuteUbergraph_ToolTipGauageWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(62283);

	UToolTipGauageWidget_C_ExecuteUbergraph_ToolTipGauageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
