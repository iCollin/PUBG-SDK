// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_SelfPutHelperWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.SwapFromWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void USelfPutHelperWidget_C::SwapFromWeapon()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61404);

	USelfPutHelperWidget_C_SwapFromWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.SwapFormEquipment
// (Public, BlueprintCallable, BlueprintEvent)

void USelfPutHelperWidget_C::SwapFormEquipment()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61403);

	USelfPutHelperWidget_C_SwapFormEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.SwapFormVicnityOrInventory
// (Public, BlueprintCallable, BlueprintEvent)

void USelfPutHelperWidget_C::SwapFormVicnityOrInventory()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61402);

	USelfPutHelperWidget_C_SwapFormVicnityOrInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.IsSelfPutMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsSelfPutMode                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USelfPutHelperWidget_C::IsSelfPutMode(bool* bIsSelfPutMode)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61400);

	USelfPutHelperWidget_C_IsSelfPutMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsSelfPutMode != nullptr)
		*bIsSelfPutMode = params.bIsSelfPutMode;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.GetFocusData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    EnableWeaponIndex              (Parm, OutParm, ZeroConstructor)
// EWeaponAttachmentSlotID        AttachmentSlotID               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USelfPutHelperWidget_C::GetFocusData(int* Index, TArray<int>* EnableWeaponIndex, EWeaponAttachmentSlotID* AttachmentSlotID)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61394);

	USelfPutHelperWidget_C_GetFocusData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
	if (EnableWeaponIndex != nullptr)
		*EnableWeaponIndex = params.EnableWeaponIndex;
	if (AttachmentSlotID != nullptr)
		*AttachmentSlotID = params.AttachmentSlotID;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.NextWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void USelfPutHelperWidget_C::NextWeapon()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61390);

	USelfPutHelperWidget_C_NextWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.PrevWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void USelfPutHelperWidget_C::PrevWeapon()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61386);

	USelfPutHelperWidget_C_PrevWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.Put
// (Public, BlueprintCallable, BlueprintEvent)

void USelfPutHelperWidget_C::Put()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61355);

	USelfPutHelperWidget_C_Put_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.Stop
// (Public, BlueprintCallable, BlueprintEvent)

void USelfPutHelperWidget_C::Stop()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61354);

	USelfPutHelperWidget_C_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.StartSelfPutItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> Container                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StartWeaponIndex               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USelfPutHelperWidget_C::StartSelfPutItem(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& Container, bool* bResult, int* StartWeaponIndex)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61317);

	USelfPutHelperWidget_C_StartSelfPutItem_Params params;
	params.Slot = Slot;
	params.Container = Container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
	if (StartWeaponIndex != nullptr)
		*StartWeaponIndex = params.StartWeaponIndex;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.OnNotifySelfPut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bStart                         (Parm, ZeroConstructor, IsPlainOldData)

void USelfPutHelperWidget_C::OnNotifySelfPut__DelegateSignature(bool bStart)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61315);

	USelfPutHelperWidget_C_OnNotifySelfPut__DelegateSignature_Params params;
	params.bStart = bStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
