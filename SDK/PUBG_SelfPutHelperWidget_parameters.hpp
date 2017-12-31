#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_SelfPutHelperWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.SwapFromWeapon
struct USelfPutHelperWidget_C_SwapFromWeapon_Params
{
};

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.SwapFormEquipment
struct USelfPutHelperWidget_C_SwapFormEquipment_Params
{
};

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.SwapFormVicnityOrInventory
struct USelfPutHelperWidget_C_SwapFormVicnityOrInventory_Params
{
};

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.IsSelfPutMode
struct USelfPutHelperWidget_C_IsSelfPutMode_Params
{
	bool                                               bIsSelfPutMode;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.GetFocusData
struct USelfPutHelperWidget_C_GetFocusData_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        EnableWeaponIndex;                                        // (Parm, OutParm, ZeroConstructor)
	EWeaponAttachmentSlotID                            AttachmentSlotID;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.NextWeapon
struct USelfPutHelperWidget_C_NextWeapon_Params
{
};

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.PrevWeapon
struct USelfPutHelperWidget_C_PrevWeapon_Params
{
};

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.Put
struct USelfPutHelperWidget_C_Put_Params
{
};

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.Stop
struct USelfPutHelperWidget_C_Stop_Params
{
};

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.StartSelfPutItem
struct USelfPutHelperWidget_C_StartSelfPutItem_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    Container;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StartWeaponIndex;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.OnNotifySelfPut__DelegateSignature
struct USelfPutHelperWidget_C_OnNotifySelfPut__DelegateSignature_Params
{
	bool                                               bStart;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
