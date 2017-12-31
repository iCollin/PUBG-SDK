#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_InventoryListBaseWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.IsFocusable
struct UInventoryListBaseWidget_C_IsFocusable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.InputLB
struct UInventoryListBaseWidget_C_InputLB_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.InputLT
struct UInventoryListBaseWidget_C_InputLT_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.InputRB
struct UInventoryListBaseWidget_C_InputRB_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.InputRT
struct UInventoryListBaseWidget_C_InputRT_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.GetFocusingChildWidget
struct UInventoryListBaseWidget_C_GetFocusingChildWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.InputA
struct UInventoryListBaseWidget_C_InputA_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.InputB
struct UInventoryListBaseWidget_C_InputB_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.InputX
struct UInventoryListBaseWidget_C_InputX_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.InputY
struct UInventoryListBaseWidget_C_InputY_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.GetDownWidget
struct UInventoryListBaseWidget_C_GetDownWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.GetLeftWidget
struct UInventoryListBaseWidget_C_GetLeftWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.GetRightWidget
struct UInventoryListBaseWidget_C_GetRightWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.GetUpWidget
struct UInventoryListBaseWidget_C_GetUpWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.Down
struct UInventoryListBaseWidget_C_Down_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.IsFocus
struct UInventoryListBaseWidget_C_IsFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.Left
struct UInventoryListBaseWidget_C_Left_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.Right
struct UInventoryListBaseWidget_C_Right_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.SetFocus
struct UInventoryListBaseWidget_C_SetFocus_Params
{
	bool                                               NewFocus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.Up
struct UInventoryListBaseWidget_C_Up_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.HandleOnLeaveSlot
struct UInventoryListBaseWidget_C_HandleOnLeaveSlot_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.HandleOnEnterSlot
struct UInventoryListBaseWidget_C_HandleOnEnterSlot_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.OnItemSlotWidgetCreated
struct UInventoryListBaseWidget_C_OnItemSlotWidgetCreated_Params
{
	class UItemSlotWidget_C*                           ItemSlotWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.HandleOnDoSlotAction
struct UInventoryListBaseWidget_C_HandleOnDoSlotAction_Params
{
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.GetScrollAccelation
struct UInventoryListBaseWidget_C_GetScrollAccelation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.GetMaxScroll
struct UInventoryListBaseWidget_C_GetMaxScroll_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.OnChildWidgetRefreshFocus
struct UInventoryListBaseWidget_C_OnChildWidgetRefreshFocus_Params
{
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.On_FocusColor_Prepass_1
struct UInventoryListBaseWidget_C_On_FocusColor_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.UpdateOffset_XBoxOne_Up
struct UInventoryListBaseWidget_C_UpdateOffset_XBoxOne_Up_Params
{
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.UpdateOffset_XBoxOne_Down
struct UInventoryListBaseWidget_C_UpdateOffset_XBoxOne_Down_Params
{
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.GetSelectWidget
struct UInventoryListBaseWidget_C_GetSelectWidget_Params
{
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.isEmptyList
struct UInventoryListBaseWidget_C_isEmptyList_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.RefreshList_Inventory
struct UInventoryListBaseWidget_C_RefreshList_Inventory_Params
{
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.GetSlotItem
struct UInventoryListBaseWidget_C_GetSlotItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotInterface>             Item_SlotInterface;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UItemSlotWidget_C*                           ItemSlotWidget;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.RefreshList_Visinity
struct UInventoryListBaseWidget_C_RefreshList_Visinity_Params
{
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.OnDrop
struct UInventoryListBaseWidget_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.GetContentCount
struct UInventoryListBaseWidget_C_GetContentCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.GetWeightPercent
struct UInventoryListBaseWidget_C_GetWeightPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.GetWeightText
struct UInventoryListBaseWidget_C_GetWeightText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.RefreshList
struct UInventoryListBaseWidget_C_RefreshList_Params
{
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.CreateBackgroundSlots
struct UInventoryListBaseWidget_C_CreateBackgroundSlots_Params
{
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.Construct
struct UInventoryListBaseWidget_C_Construct_Params
{
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.OnSlotFocus
struct UInventoryListBaseWidget_C_OnSlotFocus_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.OnRefreshList
struct UInventoryListBaseWidget_C_OnRefreshList_Params
{
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.OnDragEnter
struct UInventoryListBaseWidget_C_OnDragEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.OnDragLeave
struct UInventoryListBaseWidget_C_OnDragLeave_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.Destruct
struct UInventoryListBaseWidget_C_Destruct_Params
{
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.Tick
struct UInventoryListBaseWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.CustomEvent_1
struct UInventoryListBaseWidget_C_CustomEvent_1_Params
{
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.OnRefreshFocus
struct UInventoryListBaseWidget_C_OnRefreshFocus_Params
{
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.OnAddScroll
struct UInventoryListBaseWidget_C_OnAddScroll_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.OnSlotMoveUpPressed
struct UInventoryListBaseWidget_C_OnSlotMoveUpPressed_Params
{
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.OnSlotMoveUpReleased
struct UInventoryListBaseWidget_C_OnSlotMoveUpReleased_Params
{
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.OnSlotMoveDownPressed
struct UInventoryListBaseWidget_C_OnSlotMoveDownPressed_Params
{
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.OnSlotMoveDownReleased
struct UInventoryListBaseWidget_C_OnSlotMoveDownReleased_Params
{
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.OnSlotScrollMoving
struct UInventoryListBaseWidget_C_OnSlotScrollMoving_Params
{
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.ExecuteUbergraph_InventoryListBaseWidget
struct UInventoryListBaseWidget_C_ExecuteUbergraph_InventoryListBaseWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.OnLeaveSlot__DelegateSignature
struct UInventoryListBaseWidget_C_OnLeaveSlot__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.OnEnterSlot__DelegateSignature
struct UInventoryListBaseWidget_C_OnEnterSlot__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.OnDoSlotAction__DelegateSignature
struct UInventoryListBaseWidget_C_OnDoSlotAction__DelegateSignature_Params
{
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.OnInventoryDrop__DelegateSignature
struct UInventoryListBaseWidget_C_OnInventoryDrop__DelegateSignature_Params
{
	class UDragDropOperation*                          Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.RefreshFocus__DelegateSignature
struct UInventoryListBaseWidget_C_RefreshFocus__DelegateSignature_Params
{
};

// Function InventoryListBaseWidget.InventoryListBaseWidget_C.OnChildSlotFocus__DelegateSignature
struct UInventoryListBaseWidget_C_OnChildSlotFocus__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
