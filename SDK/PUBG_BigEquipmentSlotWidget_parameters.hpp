#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BigEquipmentSlotWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetSlotItem
struct UBigEquipmentSlotWidget_C_GetSlotItem_Params
{
	TScriptInterface<class USlotInterface>             SlotItem;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetSlotContainer
struct UBigEquipmentSlotWidget_C_GetSlotContainer_Params
{
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.IsFocus
struct UBigEquipmentSlotWidget_C_IsFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.SetFocus
struct UBigEquipmentSlotWidget_C_SetFocus_Params
{
	bool*                                              NewFocus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.On_FocusColorBG_Prepass_1
struct UBigEquipmentSlotWidget_C_On_FocusColorBG_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetItem_Bp
struct UBigEquipmentSlotWidget_C_GetItem_Bp_Params
{
	class UItem*                                       Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetDurability
struct UBigEquipmentSlotWidget_C_GetDurability_Params
{
	float                                              Durability;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.UpdateDurationNumber
struct UBigEquipmentSlotWidget_C_UpdateDurationNumber_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.UpdateDurabilityGauge
struct UBigEquipmentSlotWidget_C_UpdateDurabilityGauge_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.UpdateDurabilityVisibility
struct UBigEquipmentSlotWidget_C_UpdateDurabilityVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.OnPreviewMouseButtonDown
struct UBigEquipmentSlotWidget_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.HaveDurability
struct UBigEquipmentSlotWidget_C_HaveDurability_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetDurabilityPercent
struct UBigEquipmentSlotWidget_C_GetDurabilityPercent_Params
{
	float                                              DurabilityPercent;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.OnDragDetected
struct UBigEquipmentSlotWidget_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetSlotName
struct UBigEquipmentSlotWidget_C_GetSlotName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.OnUpdateItem
struct UBigEquipmentSlotWidget_C_OnUpdateItem_Params
{
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.Construct
struct UBigEquipmentSlotWidget_C_Construct_Params
{
};

// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.ExecuteUbergraph_BigEquipmentSlotWidget
struct UBigEquipmentSlotWidget_C_ExecuteUbergraph_BigEquipmentSlotWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
