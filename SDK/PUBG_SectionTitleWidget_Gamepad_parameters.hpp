#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_SectionTitleWidget_Gamepad_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.OnPrepass_1
struct USectionTitleWidget_Gamepad_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.SetSubFocus
struct USectionTitleWidget_Gamepad_C_SetSubFocus_Params
{
	bool                                               bSubFocus;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.SetFocus
struct USectionTitleWidget_Gamepad_C_SetFocus_Params
{
	bool                                               bFocus;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.GetFocusMaterial
struct USectionTitleWidget_Gamepad_C_GetFocusMaterial_Params
{
	class UMaterialInstanceDynamic*                    FocusMaterial;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.Construct
struct USectionTitleWidget_Gamepad_C_Construct_Params
{
};

// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.Tick
struct USectionTitleWidget_Gamepad_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.ExecuteUbergraph_SectionTitleWidget_Gamepad
struct USectionTitleWidget_Gamepad_C_ExecuteUbergraph_SectionTitleWidget_Gamepad_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
