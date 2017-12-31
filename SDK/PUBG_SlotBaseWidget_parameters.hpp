#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_SlotBaseWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SlotBaseWidget.SlotBaseWidget_C.IsPlayCharacterPickupAnim
struct USlotBaseWidget_C_IsPlayCharacterPickupAnim_Params
{
	bool                                               bIsPickup;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SlotBaseWidget.SlotBaseWidget_C.IsCharacterCasting
struct USlotBaseWidget_C_IsCharacterCasting_Params
{
	bool                                               IsCasting;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SlotBaseWidget.SlotBaseWidget_C.PlaySoundAk
struct USlotBaseWidget_C_PlaySoundAk_Params
{
	class UAkAudioEvent*                               SoundAk;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SlotBaseWidget.SlotBaseWidget_C.Construct
struct USlotBaseWidget_C_Construct_Params
{
};

// Function SlotBaseWidget.SlotBaseWidget_C.OnMouseEnter
struct USlotBaseWidget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function SlotBaseWidget.SlotBaseWidget_C.ExecuteUbergraph_SlotBaseWidget
struct USlotBaseWidget_C_ExecuteUbergraph_SlotBaseWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
