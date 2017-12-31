#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_InventoryCapacityWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.NotifyItemDropped
struct UBP_InventoryCapacityWidget_C_NotifyItemDropped_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.NotifyEquipmentItemFocused
struct UBP_InventoryCapacityWidget_C_NotifyEquipmentItemFocused_Params
{
	TScriptInterface<class USlotInterface>             SlotInterface;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainerInterface;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.OnStackCountChanged
struct UBP_InventoryCapacityWidget_C_OnStackCountChanged_Params
{
	TScriptInterface<class USlotInterface>             SlotInterface;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainerInterface;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StackCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.GetStackCountWidget
struct UBP_InventoryCapacityWidget_C_GetStackCountWidget_Params
{
	class UStackCountHandlingPopupWidget_C*            AsStack_Count_Handling_Popup_Widget;                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.NotifyInventoryItemFocused
struct UBP_InventoryCapacityWidget_C_NotifyInventoryItemFocused_Params
{
	TScriptInterface<class USlotInterface>             SlotInterface;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainerInterface;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.ResetMaterialParams
struct UBP_InventoryCapacityWidget_C_ResetMaterialParams_Params
{
	bool                                               bResetCapacity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResetFeedback;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.SetFeedbackMaterialParams
struct UBP_InventoryCapacityWidget_C_SetFeedbackMaterialParams_Params
{
	float                                              FeedbackStart;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FeedbackEnd;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPositive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.SetCapacityMaterialParams
struct UBP_InventoryCapacityWidget_C_SetCapacityMaterialParams_Params
{
	float                                              CurrMaxSpaceStart;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrSpaceStart;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.NotifyVicinityItemFocused
struct UBP_InventoryCapacityWidget_C_NotifyVicinityItemFocused_Params
{
	TScriptInterface<class USlotInterface>             SlotInterface;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainerInterface;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.Construct
struct UBP_InventoryCapacityWidget_C_Construct_Params
{
};

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.Destruct
struct UBP_InventoryCapacityWidget_C_Destruct_Params
{
};

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.OnInventoryUpdated_Event_1
struct UBP_InventoryCapacityWidget_C_OnInventoryUpdated_Event_1_Params
{
};

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.ExecuteUbergraph_BP_InventoryCapacityWidget
struct UBP_InventoryCapacityWidget_C_ExecuteUbergraph_BP_InventoryCapacityWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
