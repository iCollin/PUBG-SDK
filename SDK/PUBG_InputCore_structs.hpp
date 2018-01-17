#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Basic.hpp"
#include "PUBG_CoreUObject_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum InputCore.ETouchIndex
enum class ETouchIndex : uint8_t
{
	ETouchIndex__Touch1            = 0,
	ETouchIndex__Touch2            = 1,
	ETouchIndex__Touch3            = 2,
	ETouchIndex__Touch4            = 3,
	ETouchIndex__Touch5            = 4,
	ETouchIndex__Touch6            = 5,
	ETouchIndex__Touch7            = 6,
	ETouchIndex__Touch8            = 7,
	ETouchIndex__Touch9            = 8,
	ETouchIndex__Touch10           = 9,
	ETouchIndex__ETouchIndex_MAX   = 10
};


// Enum InputCore.ETouchType
enum class ETouchType : uint8_t
{
	ETouchType__Began              = 0,
	ETouchType__Moved              = 1,
	ETouchType__Stationary         = 2,
	ETouchType__Ended              = 3,
	ETouchType__NumTypes           = 4,
	ETouchType__ETouchType_MAX     = 5
};


// Enum InputCore.EConsoleForGamepadLabels
enum class EConsoleForGamepadLabels : uint8_t
{
	EConsoleForGamepadLabels__None = 0,
	EConsoleForGamepadLabels__XBoxOne = 1,
	EConsoleForGamepadLabels__PS4  = 2,
	EConsoleForGamepadLabels__EConsoleForGamepadLabels_MAX = 3
};


// Enum InputCore.EControllerHand
enum class EControllerHand : uint8_t
{
	EControllerHand__Left          = 0,
	EControllerHand__Right         = 1,
	EControllerHand__Pad           = 2,
	EControllerHand__ExternalCamera = 3,
	EControllerHand__Gun           = 4,
	EControllerHand__Special       = 5,
	EControllerHand__Special01     = 6,
	EControllerHand__Special02     = 7,
	EControllerHand__Special03     = 8,
	EControllerHand__Special04     = 9,
	EControllerHand__Special05     = 10,
	EControllerHand__Special06     = 11,
	EControllerHand__Special07     = 12,
	EControllerHand__Special08     = 13,
	EControllerHand__EControllerHand_MAX = 14
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct InputCore.Key
// 0x0018
struct FKey
{
	struct FName                                       KeyName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
