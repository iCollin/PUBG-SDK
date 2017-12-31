#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WeaponAttachmentSlotWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.GetSlotItem
struct UWeaponAttachmentSlotWidget_C_GetSlotItem_Params
{
	TScriptInterface<class USlotInterface>             SlotItem;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.GetSlotContainer
struct UWeaponAttachmentSlotWidget_C_GetSlotContainer_Params
{
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.CheckFirstAttachableSlot
struct UWeaponAttachmentSlotWidget_C_CheckFirstAttachableSlot_Params
{
	bool                                               bAttachable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.CheckAttachableByFocusSlot
struct UWeaponAttachmentSlotWidget_C_CheckAttachableByFocusSlot_Params
{
	bool                                               bAttachable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.InputB
struct UWeaponAttachmentSlotWidget_C_InputB_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.InputA
struct UWeaponAttachmentSlotWidget_C_InputA_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.SetFocus
struct UWeaponAttachmentSlotWidget_C_SetFocus_Params
{
	bool*                                              NewFocus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.OnDrop
struct UWeaponAttachmentSlotWidget_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.GetOptoins
struct UWeaponAttachmentSlotWidget_C_GetOptoins_Params
{
	struct FString                                     Options;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.GetDragDroppingAttachableItem
struct UWeaponAttachmentSlotWidget_C_GetDragDroppingAttachableItem_Params
{
	class UAttachableItem*                             DragDroppingAttachableItem;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.OnPrepass_2
struct UWeaponAttachmentSlotWidget_C_OnPrepass_2_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.On_AttachmentIcon_Prepass_1
struct UWeaponAttachmentSlotWidget_C_On_AttachmentIcon_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.IsSlotMouseOver_Bp
struct UWeaponAttachmentSlotWidget_C_IsSlotMouseOver_Bp_Params
{
	bool                                               IsMouseOver;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.OnPrepass_1
struct UWeaponAttachmentSlotWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.GetItem_Bp
struct UWeaponAttachmentSlotWidget_C_GetItem_Bp_Params
{
	class UItem*                                       Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.IsSlotSubOn_Bp
struct UWeaponAttachmentSlotWidget_C_IsSlotSubOn_Bp_Params
{
	bool                                               SubOn;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.IsSlotOn_Bp
struct UWeaponAttachmentSlotWidget_C_IsSlotOn_Bp_Params
{
	bool                                               IsOn;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.IsOhterSlotMouseOver
struct UWeaponAttachmentSlotWidget_C_IsOhterSlotMouseOver_Params
{
	bool                                               IsOver;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.IsAttachable
struct UWeaponAttachmentSlotWidget_C_IsAttachable_Params
{
	bool                                               IsAttachable;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.GetAttachmentItem
struct UWeaponAttachmentSlotWidget_C_GetAttachmentItem_Params
{
	class UAttachableItem*                             AttachmentItem;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.HasAttachmentSlot
struct UWeaponAttachmentSlotWidget_C_HasAttachmentSlot_Params
{
	bool                                               HasAttachmentSlot;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.MainPrepass_1
struct UWeaponAttachmentSlotWidget_C_MainPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.OnDragDetected
struct UWeaponAttachmentSlotWidget_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.OnMouseButtonDown
struct UWeaponAttachmentSlotWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.GetSlotVisibility
struct UWeaponAttachmentSlotWidget_C_GetSlotVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.GetSlotIcon
struct UWeaponAttachmentSlotWidget_C_GetSlotIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.GetAttachmentNameText
struct UWeaponAttachmentSlotWidget_C_GetAttachmentNameText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.OnDragEnter
struct UWeaponAttachmentSlotWidget_C_OnDragEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.OnDragLeave
struct UWeaponAttachmentSlotWidget_C_OnDragLeave_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.OnMouseEnter
struct UWeaponAttachmentSlotWidget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.OnMouseLeave
struct UWeaponAttachmentSlotWidget_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.Construct
struct UWeaponAttachmentSlotWidget_C_Construct_Params
{
};

// Function WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.ExecuteUbergraph_WeaponAttachmentSlotWidget
struct UWeaponAttachmentSlotWidget_C_ExecuteUbergraph_WeaponAttachmentSlotWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
