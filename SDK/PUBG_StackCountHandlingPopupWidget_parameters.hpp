#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_StackCountHandlingPopupWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.NotifyToCapacityWidget
struct UStackCountHandlingPopupWidget_C_NotifyToCapacityWidget_Params
{
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.NotifyStackCountUpdated
struct UStackCountHandlingPopupWidget_C_NotifyStackCountUpdated_Params
{
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.AddStackCount
struct UStackCountHandlingPopupWidget_C_AddStackCount_Params
{
	int                                                AddCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnPrepass_1
struct UStackCountHandlingPopupWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.FocusOnInputAmountText
struct UStackCountHandlingPopupWidget_C_FocusOnInputAmountText_Params
{
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.On_InputAmountText_Prepass
struct UStackCountHandlingPopupWidget_C_On_InputAmountText_Prepass_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.GetMaxButtonText
struct UStackCountHandlingPopupWidget_C_GetMaxButtonText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.GetInventory
struct UStackCountHandlingPopupWidget_C_GetInventory_Params
{
	class AInventory*                                  Inventory;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.UpdateItemName
struct UStackCountHandlingPopupWidget_C_UpdateItemName_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.GetMaxCount
struct UStackCountHandlingPopupWidget_C_GetMaxCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnItemDropOtherContainer
struct UStackCountHandlingPopupWidget_C_OnItemDropOtherContainer_Params
{
	class UItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.SetPopup
struct UStackCountHandlingPopupWidget_C_SetPopup_Params
{
	EPopupStyle                                        PopupStyle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             PressedDelegate;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UStackCountHandlingPopupWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Construct
struct UStackCountHandlingPopupWidget_C_Construct_Params
{
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.CustomEvent_1
struct UStackCountHandlingPopupWidget_C_CustomEvent_1_Params
{
	TScriptInterface<class USlotContainerInterface>    Container;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    OtherContainer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UStackCountHandlingPopupWidget_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__InputAmountButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UStackCountHandlingPopupWidget_C_BndEvt__InputAmountButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UStackCountHandlingPopupWidget_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__OuterPopup_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UStackCountHandlingPopupWidget_C_BndEvt__OuterPopup_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__MinButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UStackCountHandlingPopupWidget_C_BndEvt__MinButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__MaxButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UStackCountHandlingPopupWidget_C_BndEvt__MaxButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.SubmitEvent
struct UStackCountHandlingPopupWidget_C_SubmitEvent_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Close Popup
struct UStackCountHandlingPopupWidget_C_Close_Popup_Params
{
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Destruct
struct UStackCountHandlingPopupWidget_C_Destruct_Params
{
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Custom Event_1
struct UStackCountHandlingPopupWidget_C_Custom_Event_1_Params
{
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.XBoxOneOk
struct UStackCountHandlingPopupWidget_C_XBoxOneOk_Params
{
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Tick
struct UStackCountHandlingPopupWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.ONWidgetInputB
struct UStackCountHandlingPopupWidget_C_ONWidgetInputB_Params
{
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnWidgetMoveLeft
struct UStackCountHandlingPopupWidget_C_OnWidgetMoveLeft_Params
{
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.CustomEvent_3
struct UStackCountHandlingPopupWidget_C_CustomEvent_3_Params
{
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.CustomEvent_4
struct UStackCountHandlingPopupWidget_C_CustomEvent_4_Params
{
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.CustomEvent_5
struct UStackCountHandlingPopupWidget_C_CustomEvent_5_Params
{
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__InputAmountText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
struct UStackCountHandlingPopupWidget_C_BndEvt__InputAmountText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnStackCountActionPerformed
struct UStackCountHandlingPopupWidget_C_OnStackCountActionPerformed_Params
{
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.ExecuteUbergraph_StackCountHandlingPopupWidget
struct UStackCountHandlingPopupWidget_C_ExecuteUbergraph_StackCountHandlingPopupWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnStackCountUpdated__DelegateSignature
struct UStackCountHandlingPopupWidget_C_OnStackCountUpdated__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             SlotInterface;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StackCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
