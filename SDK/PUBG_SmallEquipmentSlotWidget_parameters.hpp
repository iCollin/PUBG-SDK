#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_SmallEquipmentSlotWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.GetSlotItem
struct USmallEquipmentSlotWidget_C_GetSlotItem_Params
{
	TScriptInterface<class USlotInterface>             SlotItem;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.GetSlotContainer
struct USmallEquipmentSlotWidget_C_GetSlotContainer_Params
{
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.IsFocus
struct USmallEquipmentSlotWidget_C_IsFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.SetFocus
struct USmallEquipmentSlotWidget_C_SetFocus_Params
{
	bool*                                              NewFocus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.On_FocusColorBG_Prepass_1
struct USmallEquipmentSlotWidget_C_On_FocusColorBG_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.GetItem_Bp
struct USmallEquipmentSlotWidget_C_GetItem_Bp_Params
{
	class UItem*                                       Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.OnPreviewMouseButtonDown
struct USmallEquipmentSlotWidget_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.GetIcon
struct USmallEquipmentSlotWidget_C_GetIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.OnDragDetected
struct USmallEquipmentSlotWidget_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.GetSlotName
struct USmallEquipmentSlotWidget_C_GetSlotName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.OnUpdateItem
struct USmallEquipmentSlotWidget_C_OnUpdateItem_Params
{
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.Construct
struct USmallEquipmentSlotWidget_C_Construct_Params
{
};

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.ExecuteUbergraph_SmallEquipmentSlotWidget
struct USmallEquipmentSlotWidget_C_ExecuteUbergraph_SmallEquipmentSlotWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
