#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ParachuteVehicleWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ParachuteVehicleWidget.ParachuteVehicleWidget_C.On_Parachute_Prepass_1
struct UParachuteVehicleWidget_C_On_Parachute_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ParachuteVehicleWidget.ParachuteVehicleWidget_C.Get_AirSpeed_Text_1
struct UParachuteVehicleWidget_C_Get_AirSpeed_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ParachuteVehicleWidget.ParachuteVehicleWidget_C.OnPrepass_ParachuteWidgetVisibility
struct UParachuteVehicleWidget_C_OnPrepass_ParachuteWidgetVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ParachuteVehicleWidget.ParachuteVehicleWidget_C.Construct
struct UParachuteVehicleWidget_C_Construct_Params
{
};

// Function ParachuteVehicleWidget.ParachuteVehicleWidget_C.Tick
struct UParachuteVehicleWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ParachuteVehicleWidget.ParachuteVehicleWidget_C.ExecuteUbergraph_ParachuteVehicleWidget
struct UParachuteVehicleWidget_C_ExecuteUbergraph_ParachuteVehicleWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
