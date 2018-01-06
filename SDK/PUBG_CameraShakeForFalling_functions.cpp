// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CameraShakeForFalling_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CameraShakeForFalling.CameraShakeForFalling_C.ReceivePlayShake
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void UCameraShakeForFalling_C::ReceivePlayShake(float* Scale)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(55792);

	UCameraShakeForFalling_C_ReceivePlayShake_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraShakeForFalling.CameraShakeForFalling_C.ExecuteUbergraph_CameraShakeForFalling
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCameraShakeForFalling_C::ExecuteUbergraph_CameraShakeForFalling(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(55789);

	UCameraShakeForFalling_C_ExecuteUbergraph_CameraShakeForFalling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
