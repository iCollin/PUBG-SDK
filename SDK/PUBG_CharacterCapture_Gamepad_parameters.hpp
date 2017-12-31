#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CharacterCapture_Gamepad_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.PrepassCharacterCapture
struct UCharacterCapture_Gamepad_C_PrepassCharacterCapture_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.FinalizeCharacterCapture
struct UCharacterCapture_Gamepad_C_FinalizeCharacterCapture_Params
{
};

// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.SaveCharacterStudio
struct UCharacterCapture_Gamepad_C_SaveCharacterStudio_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.InitCharacterCapture
struct UCharacterCapture_Gamepad_C_InitCharacterCapture_Params
{
};

// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.Construct
struct UCharacterCapture_Gamepad_C_Construct_Params
{
};

// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.Destruct
struct UCharacterCapture_Gamepad_C_Destruct_Params
{
};

// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.ExecuteUbergraph_CharacterCapture_Gamepad
struct UCharacterCapture_Gamepad_C_ExecuteUbergraph_CharacterCapture_Gamepad_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
