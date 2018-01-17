#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_InventoryBaseWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function InventoryBaseWidget.InventoryBaseWidget_C.UpdateDragDragDroppingItem
struct UInventoryBaseWidget_C_UpdateDragDragDroppingItem_Params
{
	class UItem*                                       DroppingItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryBaseWidget.InventoryBaseWidget_C.SetInventoryWidget
struct UInventoryBaseWidget_C_SetInventoryWidget_Params
{
	class UInventoryWidget_C*                          Inventory;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryBaseWidget.InventoryBaseWidget_C.ExecuteUbergraph_InventoryBaseWidget
struct UInventoryBaseWidget_C_ExecuteUbergraph_InventoryBaseWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryBaseWidget.InventoryBaseWidget_C.RefreshFocus__DelegateSignature
struct UInventoryBaseWidget_C_RefreshFocus__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
