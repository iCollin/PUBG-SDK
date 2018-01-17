#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TslItemDragWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslItemDragWidget.TslItemDragWidget_C.On_ErrorIcon_Prepass_1
struct UTslItemDragWidget_C_On_ErrorIcon_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslItemDragWidget.TslItemDragWidget_C.IsEnable
struct UTslItemDragWidget_C_IsEnable_Params
{
	bool                                               IsEnable;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslItemDragWidget.TslItemDragWidget_C.UpdateBackgroundImage
struct UTslItemDragWidget_C_UpdateBackgroundImage_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslItemDragWidget.TslItemDragWidget_C.GettslItemDragDropOperation
struct UTslItemDragWidget_C_GettslItemDragDropOperation_Params
{
	class UTslItemDragDropOperation_C*                 AsTsl_Item_Drag_Drop_Operation;                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslItemDragWidget.TslItemDragWidget_C.GetActionName
struct UTslItemDragWidget_C_GetActionName_Params
{
	struct FName                                       ActionName;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslItemDragWidget.TslItemDragWidget_C.GetInventory
struct UTslItemDragWidget_C_GetInventory_Params
{
	class AInventory*                                  Inventory;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslItemDragWidget.TslItemDragWidget_C.GetAdditionalMaxStackCount
struct UTslItemDragWidget_C_GetAdditionalMaxStackCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslItemDragWidget.TslItemDragWidget_C.GetShooterPlayerController
struct UTslItemDragWidget_C_GetShooterPlayerController_Params
{
	class ATslPlayerController*                        ShooterPlayerController;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslItemDragWidget.TslItemDragWidget_C.UpdateStackCount
struct UTslItemDragWidget_C_UpdateStackCount_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslItemDragWidget.TslItemDragWidget_C.UpdateStackCountVisibility
struct UTslItemDragWidget_C_UpdateStackCountVisibility_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslItemDragWidget.TslItemDragWidget_C.UpdateIcon
struct UTslItemDragWidget_C_UpdateIcon_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslItemDragWidget.TslItemDragWidget_C.Construct
struct UTslItemDragWidget_C_Construct_Params
{
};

// Function TslItemDragWidget.TslItemDragWidget_C.Destruct
struct UTslItemDragWidget_C_Destruct_Params
{
};

// Function TslItemDragWidget.TslItemDragWidget_C.ExecuteUbergraph_TslItemDragWidget
struct UTslItemDragWidget_C_ExecuteUbergraph_TslItemDragWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
