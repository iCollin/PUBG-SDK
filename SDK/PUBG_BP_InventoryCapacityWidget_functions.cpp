// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_InventoryCapacityWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.NotifyItemDropped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, ZeroConstructor, IsPlainOldData)

void UBP_InventoryCapacityWidget_C::NotifyItemDropped(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& SlotContainer)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61555);

	UBP_InventoryCapacityWidget_C_NotifyItemDropped_Params params;
	params.Slot = Slot;
	params.SlotContainer = SlotContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.NotifyEquipmentItemFocused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> SlotInterface                  (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainerInterface         (Parm, ZeroConstructor, IsPlainOldData)

void UBP_InventoryCapacityWidget_C::NotifyEquipmentItemFocused(const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61542);

	UBP_InventoryCapacityWidget_C_NotifyEquipmentItemFocused_Params params;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.OnStackCountChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> SlotInterface                  (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainerInterface         (Parm, ZeroConstructor, IsPlainOldData)
// int                            StackCount                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_InventoryCapacityWidget_C::OnStackCountChanged(const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface, int StackCount)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61518);

	UBP_InventoryCapacityWidget_C_OnStackCountChanged_Params params;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;
	params.StackCount = StackCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.GetStackCountWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStackCountHandlingPopupWidget_C* AsStack_Count_Handling_Popup_Widget (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_InventoryCapacityWidget_C::GetStackCountWidget(class UStackCountHandlingPopupWidget_C** AsStack_Count_Handling_Popup_Widget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61512);

	UBP_InventoryCapacityWidget_C_GetStackCountWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsStack_Count_Handling_Popup_Widget != nullptr)
		*AsStack_Count_Handling_Popup_Widget = params.AsStack_Count_Handling_Popup_Widget;
}


// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.NotifyInventoryItemFocused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> SlotInterface                  (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainerInterface         (Parm, ZeroConstructor, IsPlainOldData)

void UBP_InventoryCapacityWidget_C::NotifyInventoryItemFocused(const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61500);

	UBP_InventoryCapacityWidget_C_NotifyInventoryItemFocused_Params params;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.ResetMaterialParams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bResetCapacity                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResetFeedback                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_InventoryCapacityWidget_C::ResetMaterialParams(bool bResetCapacity, bool bResetFeedback)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61492);

	UBP_InventoryCapacityWidget_C_ResetMaterialParams_Params params;
	params.bResetCapacity = bResetCapacity;
	params.bResetFeedback = bResetFeedback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.SetFeedbackMaterialParams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FeedbackStart                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          FeedbackEnd                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPositive                    (Parm, ZeroConstructor, IsPlainOldData)

void UBP_InventoryCapacityWidget_C::SetFeedbackMaterialParams(float FeedbackStart, float FeedbackEnd, bool bIsPositive)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61486);

	UBP_InventoryCapacityWidget_C_SetFeedbackMaterialParams_Params params;
	params.FeedbackStart = FeedbackStart;
	params.FeedbackEnd = FeedbackEnd;
	params.bIsPositive = bIsPositive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.SetCapacityMaterialParams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrMaxSpaceStart              (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrSpaceStart                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_InventoryCapacityWidget_C::SetCapacityMaterialParams(float CurrMaxSpaceStart, float CurrSpaceStart)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61482);

	UBP_InventoryCapacityWidget_C_SetCapacityMaterialParams_Params params;
	params.CurrMaxSpaceStart = CurrMaxSpaceStart;
	params.CurrSpaceStart = CurrSpaceStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.NotifyVicinityItemFocused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> SlotInterface                  (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainerInterface         (Parm, ZeroConstructor, IsPlainOldData)

void UBP_InventoryCapacityWidget_C::NotifyVicinityItemFocused(const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61458);

	UBP_InventoryCapacityWidget_C_NotifyVicinityItemFocused_Params params;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_InventoryCapacityWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61457);

	UBP_InventoryCapacityWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_InventoryCapacityWidget_C::Destruct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61456);

	UBP_InventoryCapacityWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.OnInventoryUpdated_Event_1
// (BlueprintCallable, BlueprintEvent)

void UBP_InventoryCapacityWidget_C::OnInventoryUpdated_Event_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61455);

	UBP_InventoryCapacityWidget_C_OnInventoryUpdated_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.ExecuteUbergraph_BP_InventoryCapacityWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_InventoryCapacityWidget_C::ExecuteUbergraph_BP_InventoryCapacityWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61444);

	UBP_InventoryCapacityWidget_C_ExecuteUbergraph_BP_InventoryCapacityWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
