#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LocationServicesBPLibrary_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LocationServicesBPLibrary.LocationServices.StopLocationServices
struct ULocationServices_StopLocationServices_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LocationServicesBPLibrary.LocationServices.StartLocationServices
struct ULocationServices_StartLocationServices_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable
struct ULocationServices_IsLocationAccuracyAvailable_Params
{
	ELocationAccuracy                                  Accuracy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LocationServicesBPLibrary.LocationServices.InitLocationServices
struct ULocationServices_InitLocationServices_Params
{
	ELocationAccuracy                                  Accuracy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              UpdateFrequency;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinDistanceFilter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl
struct ULocationServices_GetLocationServicesImpl_Params
{
	class ULocationServicesImpl*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation
struct ULocationServices_GetLastKnownLocation_Params
{
	struct FLocationServicesData                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled
struct ULocationServices_AreLocationServicesEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
