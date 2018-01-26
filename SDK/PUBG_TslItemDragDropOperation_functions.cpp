// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TslItemDragDropOperation_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsDragDroppingItemAttachment
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsAttachment                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTslItemDragDropOperation_C::IsDragDroppingItemAttachment(bool* IsAttachment)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(91904);

	UTslItemDragDropOperation_C_IsDragDroppingItemAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAttachment != nullptr)
		*IsAttachment = params.IsAttachment;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsDragDroppingItemWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsWeapon                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTslItemDragDropOperation_C::IsDragDroppingItemWeapon(bool* IsWeapon)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(91899);

	UTslItemDragDropOperation_C_IsDragDroppingItemWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsWeapon != nullptr)
		*IsWeapon = params.IsWeapon;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsInEquipment
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTslItemDragDropOperation_C::IsInEquipment(bool* NewParam)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(91889);

	UTslItemDragDropOperation_C_IsInEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.GetCurrentOtherContainer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TScriptInterface<class USlotContainerInterface> OtherContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTslItemDragDropOperation_C::GetCurrentOtherContainer(TScriptInterface<class USlotContainerInterface>* OtherContainer)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(91883);

	UTslItemDragDropOperation_C_GetCurrentOtherContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OtherContainer != nullptr)
		*OtherContainer = params.OtherContainer;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.LeaveOtherContainer
// (Public, BlueprintCallable, BlueprintEvent)

void UTslItemDragDropOperation_C::LeaveOtherContainer()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(91879);

	UTslItemDragDropOperation_C_LeaveOtherContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.EnterOtherContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotContainerInterface> NewOtherContainer              (Parm, ZeroConstructor, IsPlainOldData)

void UTslItemDragDropOperation_C::EnterOtherContainer(const TScriptInterface<class USlotContainerInterface>& NewOtherContainer)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(91867);

	UTslItemDragDropOperation_C_EnterOtherContainer_Params params;
	params.NewOtherContainer = NewOtherContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.IsEnableAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsEnableAction                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTslItemDragDropOperation_C::IsEnableAction(bool* IsEnableAction)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(91862);

	UTslItemDragDropOperation_C_IsEnableAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnableAction != nullptr)
		*IsEnableAction = params.IsEnableAction;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.GetActionName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ActionName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTslItemDragDropOperation_C::GetActionName(struct FName* ActionName)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(91860);

	UTslItemDragDropOperation_C_GetActionName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionName != nullptr)
		*ActionName = params.ActionName;
}


// Function TslItemDragDropOperation.TslItemDragDropOperation_C.GetOptions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Options                        (Parm, OutParm, ZeroConstructor)

void UTslItemDragDropOperation_C::GetOptions(struct FString* Options)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(91852);

	UTslItemDragDropOperation_C_GetOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Options != nullptr)
		*Options = params.Options;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
