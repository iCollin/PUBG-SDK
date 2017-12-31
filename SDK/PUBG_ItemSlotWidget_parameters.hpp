#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ItemSlotWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ItemSlotWidget.ItemSlotWidget_C.IsFocusable
struct UItemSlotWidget_C_IsFocusable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.InputLB
struct UItemSlotWidget_C_InputLB_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.InputLT
struct UItemSlotWidget_C_InputLT_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.InputRB
struct UItemSlotWidget_C_InputRB_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.InputRT
struct UItemSlotWidget_C_InputRT_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetFocusingChildWidget
struct UItemSlotWidget_C_GetFocusingChildWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.InputA
struct UItemSlotWidget_C_InputA_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.InputB
struct UItemSlotWidget_C_InputB_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.InputX
struct UItemSlotWidget_C_InputX_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.InputY
struct UItemSlotWidget_C_InputY_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetDownWidget
struct UItemSlotWidget_C_GetDownWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetLeftWidget
struct UItemSlotWidget_C_GetLeftWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetRightWidget
struct UItemSlotWidget_C_GetRightWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetUpWidget
struct UItemSlotWidget_C_GetUpWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.Down
struct UItemSlotWidget_C_Down_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.IsFocus
struct UItemSlotWidget_C_IsFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.Left
struct UItemSlotWidget_C_Left_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.Right
struct UItemSlotWidget_C_Right_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.SetFocus
struct UItemSlotWidget_C_SetFocus_Params
{
	bool                                               NewFocus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.Up
struct UItemSlotWidget_C_Up_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetSlotItem
struct UItemSlotWidget_C_GetSlotItem_Params
{
	TScriptInterface<class USlotInterface>             SlotItem;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetSlotContainer
struct UItemSlotWidget_C_GetSlotContainer_Params
{
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.RaiseLeaveEvent
struct UItemSlotWidget_C_RaiseLeaveEvent_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.RaiseEnterEvent
struct UItemSlotWidget_C_RaiseEnterEvent_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.PutSeltItem
struct UItemSlotWidget_C_PutSeltItem_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.StopSelfPutMode
struct UItemSlotWidget_C_StopSelfPutMode_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.StartSelfPutMode
struct UItemSlotWidget_C_StartSelfPutMode_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StartWeaponIndex;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.IsSelfPutMode
struct UItemSlotWidget_C_IsSelfPutMode_Params
{
	bool                                               bIsSelfPutMode;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.ProcessPressedY
struct UItemSlotWidget_C_ProcessPressedY_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.ProcessPressedA
struct UItemSlotWidget_C_ProcessPressedA_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.InitItemSlot
struct UItemSlotWidget_C_InitItemSlot_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnInputBPressed
struct UItemSlotWidget_C_OnInputBPressed_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnInputYReleased
struct UItemSlotWidget_C_OnInputYReleased_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnInputYPressed
struct UItemSlotWidget_C_OnInputYPressed_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnInputAReleased
struct UItemSlotWidget_C_OnInputAReleased_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnInputAPressed
struct UItemSlotWidget_C_OnInputAPressed_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.SetupInput_Gamepad
struct UItemSlotWidget_C_SetupInput_Gamepad_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnInputX
struct UItemSlotWidget_C_OnInputX_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.CheckSubFocus
struct UItemSlotWidget_C_CheckSubFocus_Params
{
	bool                                               bSubFocus;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.IsAttachmentFocus
struct UItemSlotWidget_C_IsAttachmentFocus_Params
{
	bool                                               bIsAttachmentFocus;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.IsSubFocus
struct UItemSlotWidget_C_IsSubFocus_Params
{
	bool                                               bIsSubFocus;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.IsEquipmentFocus
struct UItemSlotWidget_C_IsEquipmentFocus_Params
{
	bool                                               bIsFocus;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetInventoryWidget_Gamepad
struct UItemSlotWidget_C_GetInventoryWidget_Gamepad_Params
{
	class UInventoryWidget_Gamepad_C*                  NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetFocusSlotID
struct UItemSlotWidget_C_GetFocusSlotID_Params
{
	EEquipSlotID                                       EquipSlotID;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.SaveSlotInfo
struct UItemSlotWidget_C_SaveSlotInfo_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnShowToolTip
struct UItemSlotWidget_C_OnShowToolTip_Params
{
	bool                                               bIsGamepad;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.ShowStackcountPopup
struct UItemSlotWidget_C_ShowStackcountPopup_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnStackCountpopupBtnDown
struct UItemSlotWidget_C_OnStackCountpopupBtnDown_Params
{
	EPopupButtonID                                     ButtonID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.On_UseInfo_Text_Prepass_1
struct UItemSlotWidget_C_On_UseInfo_Text_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.On_CategoryText_Prepass_1
struct UItemSlotWidget_C_On_CategoryText_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.On_CategoryLayer_Prepass_1
struct UItemSlotWidget_C_On_CategoryLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.On_ItemMainLayer_Prepass_1
struct UItemSlotWidget_C_On_ItemMainLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.IsCastableItem
struct UItemSlotWidget_C_IsCastableItem_Params
{
	bool                                               IsCastableItem;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.On_DurabilityGauge_Prepass_1
struct UItemSlotWidget_C_On_DurabilityGauge_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.On_DurabilityBorder_Prepass_1
struct UItemSlotWidget_C_On_DurabilityBorder_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.IsUsableItemSlot
struct UItemSlotWidget_C_IsUsableItemSlot_Params
{
	TScriptInterface<class USlotInterface>             Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.IsAttachableItemSlot
struct UItemSlotWidget_C_IsAttachableItemSlot_Params
{
	TScriptInterface<class USlotInterface>             Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               return_node;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.isPickupableDropItemSlot
struct UItemSlotWidget_C_isPickupableDropItemSlot_Params
{
	TScriptInterface<class USlotInterface>             Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               return_value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.Get_UseInfo_Text_ColorAndOpacity_1
struct UItemSlotWidget_C_Get_UseInfo_Text_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.On_CastingBarLayer_Prepass_1
struct UItemSlotWidget_C_On_CastingBarLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetToolTipWidget_1
struct UItemSlotWidget_C_GetToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetOperationSpawnValue
struct UItemSlotWidget_C_GetOperationSpawnValue_Params
{
	class UItem*                                       Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UEquipableItem*                              EquipableItem;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UWeaponItem*                                 WeaponItem;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UThrowableItem*                              ThrowableItem;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAttachableItem*                             AttachmentItem;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotInterface>             SlotItem;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    Container;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateItemIfoVisibility
struct UItemSlotWidget_C_UpdateItemIfoVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateInnerItemSlotListVisibility
struct UItemSlotWidget_C_UpdateInnerItemSlotListVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateOpenButtonVisibility
struct UItemSlotWidget_C_UpdateOpenButtonVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateEquipableIconVisibility
struct UItemSlotWidget_C_UpdateEquipableIconVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateUseButtonVisibility
struct UItemSlotWidget_C_UpdateUseButtonVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateStackCountVisibility
struct UItemSlotWidget_C_UpdateStackCountVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.DialogButtonDown
struct UItemSlotWidget_C_DialogButtonDown_Params
{
	EPopupButtonID                                     ButtonID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.On_Brackground_Prepass_1
struct UItemSlotWidget_C_On_Brackground_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateIconSizeRatio
struct UItemSlotWidget_C_UpdateIconSizeRatio_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateUseText
struct UItemSlotWidget_C_UpdateUseText_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateButtonIconIndex
struct UItemSlotWidget_C_UpdateButtonIconIndex_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateSlot
struct UItemSlotWidget_C_UpdateSlot_Params
{
	TScriptInterface<class USlotInterface>             Item_SlotInterface;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPackaged;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSort;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateItemVisibility
struct UItemSlotWidget_C_UpdateItemVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateStackCountText
struct UItemSlotWidget_C_UpdateStackCountText_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateItemIconImage
struct UItemSlotWidget_C_UpdateItemIconImage_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.UpdateSlotName
struct UItemSlotWidget_C_UpdateSlotName_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetItemCount
struct UItemSlotWidget_C_GetItemCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.CreateTslDragDropOperation
struct UItemSlotWidget_C_CreateTslDragDropOperation_Params
{
	class UTslItemDragDropOperation_C*                 OutOperation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetOpenButtonVisibility
struct UItemSlotWidget_C_GetOpenButtonVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.DispatchRefreshInnerList
struct UItemSlotWidget_C_DispatchRefreshInnerList_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.IsDraggable
struct UItemSlotWidget_C_IsDraggable_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnDragDetected
struct UItemSlotWidget_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnMouseButtonDown
struct UItemSlotWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetContentCount
struct UItemSlotWidget_C_GetContentCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.Refresh
struct UItemSlotWidget_C_Refresh_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetInnerContainerVisibility
struct UItemSlotWidget_C_GetInnerContainerVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetPackagedLabelVisibility
struct UItemSlotWidget_C_GetPackagedLabelVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetIconVisibility
struct UItemSlotWidget_C_GetIconVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetAmmountTextVisibility
struct UItemSlotWidget_C_GetAmmountTextVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetAmmountText
struct UItemSlotWidget_C_GetAmmountText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetUseButtonVisibility
struct UItemSlotWidget_C_GetUseButtonVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetIconTexture
struct UItemSlotWidget_C_GetIconTexture_Params
{
	class UTexture*                                    Tex;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.GetSlotName
struct UItemSlotWidget_C_GetSlotName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ItemSlotWidget.ItemSlotWidget_C.Destruct
struct UItemSlotWidget_C_Destruct_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnMouseLeave
struct UItemSlotWidget_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ItemSlotWidget.ItemSlotWidget_C.BndEvt__InnerItemSlotListWidget_K2Node_ComponentBoundEvent_0_OnChildSlotFocus__DelegateSignature
struct UItemSlotWidget_C_BndEvt__InnerItemSlotListWidget_K2Node_ComponentBoundEvent_0_OnChildSlotFocus__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.ShowToolTip
struct UItemSlotWidget_C_ShowToolTip_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.Construct
struct UItemSlotWidget_C_Construct_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.Tick
struct UItemSlotWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnMouseEnter
struct UItemSlotWidget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnDragEnter
struct UItemSlotWidget_C_OnDragEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.ExecuteUbergraph_ItemSlotWidget
struct UItemSlotWidget_C_ExecuteUbergraph_ItemSlotWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnLeaveSlot__DelegateSignature
struct UItemSlotWidget_C_OnLeaveSlot__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnEnterSlot__DelegateSignature
struct UItemSlotWidget_C_OnEnterSlot__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnDoSlotAction__DelegateSignature
struct UItemSlotWidget_C_OnDoSlotAction__DelegateSignature_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.RefreshFocus__DelegateSignature
struct UItemSlotWidget_C_RefreshFocus__DelegateSignature_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnRefreshInnerList__DelegateSignature
struct UItemSlotWidget_C_OnRefreshInnerList__DelegateSignature_Params
{
};

// Function ItemSlotWidget.ItemSlotWidget_C.OnSlotFocus__DelegateSignature
struct UItemSlotWidget_C_OnSlotFocus__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
