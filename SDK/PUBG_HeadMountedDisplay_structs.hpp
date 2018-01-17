#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Basic.hpp"
#include "PUBG_Engine_classes.hpp"
#include "PUBG_InputCore_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8_t
{
	ETrackingStatus__NotTracked    = 0,
	ETrackingStatus__InertialOnly  = 1,
	ETrackingStatus__Tracked       = 2,
	ETrackingStatus__ETrackingStatus_MAX = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
