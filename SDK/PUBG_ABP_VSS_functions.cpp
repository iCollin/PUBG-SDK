// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_VSS_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_VSS.ABP_VSS_C.HandleFireSelect
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_VSS_C::HandleFireSelect()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(53322);

	UABP_VSS_C_HandleFireSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_VSS.ABP_VSS_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_VSS_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(53321);

	UABP_VSS_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_VSS.ABP_VSS_C.Reload2_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_VSS_C::Reload2_Event_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(53320);

	UABP_VSS_C_Reload2_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_VSS.ABP_VSS_C.FireSelect_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_VSS_C::FireSelect_Event_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(53319);

	UABP_VSS_C_FireSelect_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_VSS.ABP_VSS_C.WeaponFire_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_VSS_C::WeaponFire_Event_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(53318);

	UABP_VSS_C_WeaponFire_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_VSS.ABP_VSS_C.CancelReload_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_VSS_C::CancelReload_Event_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(53317);

	UABP_VSS_C_CancelReload_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_VSS.ABP_VSS_C.ExecuteUbergraph_ABP_VSS
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_VSS_C::ExecuteUbergraph_ABP_VSS(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(53305);

	UABP_VSS_C_ExecuteUbergraph_ABP_VSS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
