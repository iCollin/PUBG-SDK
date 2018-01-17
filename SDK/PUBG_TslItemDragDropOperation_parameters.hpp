#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TslItemDragDropOperation_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsDragDroppingItemAttachment
struct UTslItemDragDropOperation_C_IsDragDroppingItemAttachment_Params
{
	bool                                               IsAttachment;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsDragDroppingItemWeapon
struct UTslItemDragDropOperation_C_IsDragDroppingItemWeapon_Params
{
	bool                                               IsWeapon;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsInEquipment
struct UTslItemDragDropOperation_C_IsInEquipment_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslItemDragDropOperation.TslItemDragDropOperation_C.GetCurrentOtherContainer
struct UTslItemDragDropOperation_C_GetCurrentOtherContainer_Params
{
	TScriptInterface<class USlotContainerInterface>    OtherContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslItemDragDropOperation.TslItemDragDropOperation_C.LeaveOtherContainer
struct UTslItemDragDropOperation_C_LeaveOtherContainer_Params
{
};

// Function TslItemDragDropOperation.TslItemDragDropOperation_C.EnterOtherContainer
struct UTslItemDragDropOperation_C_EnterOtherContainer_Params
{
	TScriptInterface<class USlotContainerInterface>    NewOtherContainer;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsEnableAction
struct UTslItemDragDropOperation_C_IsEnableAction_Params
{
	bool                                               IsEnableAction;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslItemDragDropOperation.TslItemDragDropOperation_C.GetActionName
struct UTslItemDragDropOperation_C_GetActionName_Params
{
	struct FName                                       ActionName;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslItemDragDropOperation.TslItemDragDropOperation_C.GetOptions
struct UTslItemDragDropOperation_C_GetOptions_Params
{
	struct FString                                     Options;                                                  // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
