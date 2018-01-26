// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LocationServicesBPLibrary_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LocationServicesBPLibrary.LocationServices.StopLocationServices
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULocationServices::STATIC_StopLocationServices()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40321);

	ULocationServices_StopLocationServices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LocationServicesBPLibrary.LocationServices.StartLocationServices
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULocationServices::STATIC_StartLocationServices()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40319);

	ULocationServices_StartLocationServices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ELocationAccuracy              Accuracy                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULocationServices::STATIC_IsLocationAccuracyAvailable(ELocationAccuracy Accuracy)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40315);

	ULocationServices_IsLocationAccuracyAvailable_Params params;
	params.Accuracy = Accuracy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LocationServicesBPLibrary.LocationServices.InitLocationServices
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ELocationAccuracy              Accuracy                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          UpdateFrequency                (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinDistanceFilter              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULocationServices::STATIC_InitLocationServices(ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40309);

	ULocationServices_InitLocationServices_Params params;
	params.Accuracy = Accuracy;
	params.UpdateFrequency = UpdateFrequency;
	params.MinDistanceFilter = MinDistanceFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULocationServicesImpl*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULocationServicesImpl* ULocationServices::STATIC_GetLocationServicesImpl()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40307);

	ULocationServices_GetLocationServicesImpl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLocationServicesData   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLocationServicesData ULocationServices::STATIC_GetLastKnownLocation()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40305);

	ULocationServices_GetLastKnownLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULocationServices::STATIC_AreLocationServicesEnabled()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40303);

	ULocationServices_AreLocationServicesEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
