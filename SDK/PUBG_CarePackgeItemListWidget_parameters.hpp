#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CarePackgeItemListWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.UpdateIconTexture
struct UCarePackgeItemListWidget_C_UpdateIconTexture_Params
{
};

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.FinishCarePackgeItemList
struct UCarePackgeItemListWidget_C_FinishCarePackgeItemList_Params
{
};

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.PrepareCarePackgeItemList
struct UCarePackgeItemListWidget_C_PrepareCarePackgeItemList_Params
{
};

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.HideTextCarePackageEmpty
struct UCarePackgeItemListWidget_C_HideTextCarePackageEmpty_Params
{
};

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.SetCarePackgeItemList
struct UCarePackgeItemListWidget_C_SetCarePackgeItemList_Params
{
};

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.GetCarePackageItemIcons
struct UCarePackgeItemListWidget_C_GetCarePackageItemIcons_Params
{
};

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.HideCarePackageItemList
struct UCarePackgeItemListWidget_C_HideCarePackageItemList_Params
{
};

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.GetCarePackageItemWidget
struct UCarePackgeItemListWidget_C_GetCarePackageItemWidget_Params
{
	class UTexture*                                    ItemIcon;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ItemName;                                                 // (Parm)
	int                                                ItemCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCarePackageItemSlotWidget_C*                CarePackageItemSlotWidget;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.ShowCarePackageItemList
struct UCarePackgeItemListWidget_C_ShowCarePackageItemList_Params
{
};

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.Construct
struct UCarePackgeItemListWidget_C_Construct_Params
{
};

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.ShowCarePackageItem
struct UCarePackgeItemListWidget_C_ShowCarePackageItem_Params
{
};

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.CustomTick
struct UCarePackgeItemListWidget_C_CustomTick_Params
{
};

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.TimerCheckUpdateList
struct UCarePackgeItemListWidget_C_TimerCheckUpdateList_Params
{
};

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.ExecuteUbergraph_CarePackgeItemListWidget
struct UCarePackgeItemListWidget_C_ExecuteUbergraph_CarePackgeItemListWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.EventDispatcher_ShowCarePackageItem__DelegateSignature
struct UCarePackgeItemListWidget_C_EventDispatcher_ShowCarePackageItem__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
