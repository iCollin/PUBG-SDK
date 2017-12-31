// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_StackCountHandlingPopupWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.NotifyStackCountUpdated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStackCountHandlingPopupWidget_C::NotifyStackCountUpdated()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73634);

	UStackCountHandlingPopupWidget_C_NotifyStackCountUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.AddStackCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AddCount                       (Parm, ZeroConstructor, IsPlainOldData)

void UStackCountHandlingPopupWidget_C::AddStackCount(int AddCount)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73625);

	UStackCountHandlingPopupWidget_C_AddStackCount_Params params;
	params.AddCount = AddCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnPrepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UStackCountHandlingPopupWidget_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73613);

	UStackCountHandlingPopupWidget_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.FocusOnInputAmountText
// (Public, BlueprintCallable, BlueprintEvent)

void UStackCountHandlingPopupWidget_C::FocusOnInputAmountText()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73611);

	UStackCountHandlingPopupWidget_C_FocusOnInputAmountText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.On_InputAmountText_Prepass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UStackCountHandlingPopupWidget_C::On_InputAmountText_Prepass(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73600);

	UStackCountHandlingPopupWidget_C_On_InputAmountText_Prepass_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.GetMaxButtonText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStackCountHandlingPopupWidget_C::GetMaxButtonText()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73593);

	UStackCountHandlingPopupWidget_C_GetMaxButtonText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.GetInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AInventory*              Inventory                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStackCountHandlingPopupWidget_C::GetInventory(class AInventory** Inventory)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73584);

	UStackCountHandlingPopupWidget_C_GetInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.UpdateItemName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UStackCountHandlingPopupWidget_C::UpdateItemName(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73581);

	UStackCountHandlingPopupWidget_C_UpdateItemName_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.GetMaxCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UStackCountHandlingPopupWidget_C::GetMaxCount()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73566);

	UStackCountHandlingPopupWidget_C_GetMaxCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnItemDropOtherContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem*                   Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UStackCountHandlingPopupWidget_C::OnItemDropOtherContainer(class UItem* Item)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73564);

	UStackCountHandlingPopupWidget_C_OnItemDropOtherContainer_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.SetPopup
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupStyle                    PopupStyle                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Message                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         PressedDelegate                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UStackCountHandlingPopupWidget_C::SetPopup(EPopupStyle PopupStyle, const struct FText& Message, const struct FScriptDelegate& PressedDelegate)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73559);

	UStackCountHandlingPopupWidget_C_SetPopup_Params params;
	params.PopupStyle = PopupStyle;
	params.Message = Message;
	params.PressedDelegate = PressedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStackCountHandlingPopupWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73558);

	UStackCountHandlingPopupWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStackCountHandlingPopupWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73557);

	UStackCountHandlingPopupWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotContainerInterface> Container                      (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotInterface> Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> OtherContainer                 (Parm, ZeroConstructor, IsPlainOldData)

void UStackCountHandlingPopupWidget_C::CustomEvent_1(const TScriptInterface<class USlotContainerInterface>& Container, const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& OtherContainer)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73553);

	UStackCountHandlingPopupWidget_C_CustomEvent_1_Params params;
	params.Container = Container;
	params.Slot = Slot;
	params.OtherContainer = OtherContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStackCountHandlingPopupWidget_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73552);

	UStackCountHandlingPopupWidget_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__InputAmountButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStackCountHandlingPopupWidget_C::BndEvt__InputAmountButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73551);

	UStackCountHandlingPopupWidget_C_BndEvt__InputAmountButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStackCountHandlingPopupWidget_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73550);

	UStackCountHandlingPopupWidget_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__OuterPopup_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStackCountHandlingPopupWidget_C::BndEvt__OuterPopup_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73549);

	UStackCountHandlingPopupWidget_C_BndEvt__OuterPopup_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__MinButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStackCountHandlingPopupWidget_C::BndEvt__MinButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73548);

	UStackCountHandlingPopupWidget_C_BndEvt__MinButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__MaxButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStackCountHandlingPopupWidget_C::BndEvt__MaxButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73547);

	UStackCountHandlingPopupWidget_C_BndEvt__MaxButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.SubmitEvent
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UStackCountHandlingPopupWidget_C::SubmitEvent(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73544);

	UStackCountHandlingPopupWidget_C_SubmitEvent_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Close Popup
// (BlueprintCallable, BlueprintEvent)

void UStackCountHandlingPopupWidget_C::Close_Popup()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73543);

	UStackCountHandlingPopupWidget_C_Close_Popup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStackCountHandlingPopupWidget_C::Destruct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73542);

	UStackCountHandlingPopupWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Custom Event_1
// (BlueprintCallable, BlueprintEvent)

void UStackCountHandlingPopupWidget_C::Custom_Event_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73541);

	UStackCountHandlingPopupWidget_C_Custom_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.XBoxOneOk
// (BlueprintCallable, BlueprintEvent)

void UStackCountHandlingPopupWidget_C::XBoxOneOk()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73540);

	UStackCountHandlingPopupWidget_C_XBoxOneOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UStackCountHandlingPopupWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73537);

	UStackCountHandlingPopupWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.ONWidgetInputB
// (BlueprintCallable, BlueprintEvent)

void UStackCountHandlingPopupWidget_C::ONWidgetInputB()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73536);

	UStackCountHandlingPopupWidget_C_ONWidgetInputB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnWidgetMoveLeft
// (BlueprintCallable, BlueprintEvent)

void UStackCountHandlingPopupWidget_C::OnWidgetMoveLeft()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73535);

	UStackCountHandlingPopupWidget_C_OnWidgetMoveLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)

void UStackCountHandlingPopupWidget_C::CustomEvent_3()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73534);

	UStackCountHandlingPopupWidget_C_CustomEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)

void UStackCountHandlingPopupWidget_C::CustomEvent_4()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73533);

	UStackCountHandlingPopupWidget_C_CustomEvent_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.CustomEvent_5
// (BlueprintCallable, BlueprintEvent)

void UStackCountHandlingPopupWidget_C::CustomEvent_5()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73532);

	UStackCountHandlingPopupWidget_C_CustomEvent_5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__InputAmountText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UStackCountHandlingPopupWidget_C::BndEvt__InputAmountText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73530);

	UStackCountHandlingPopupWidget_C_BndEvt__InputAmountText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.ExecuteUbergraph_StackCountHandlingPopupWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStackCountHandlingPopupWidget_C::ExecuteUbergraph_StackCountHandlingPopupWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73481);

	UStackCountHandlingPopupWidget_C_ExecuteUbergraph_StackCountHandlingPopupWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnStackCountUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> SlotInterface                  (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            StackCount                     (Parm, ZeroConstructor, IsPlainOldData)

void UStackCountHandlingPopupWidget_C::OnStackCountUpdated__DelegateSignature(const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainer, int StackCount)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73477);

	UStackCountHandlingPopupWidget_C_OnStackCountUpdated__DelegateSignature_Params params;
	params.SlotInterface = SlotInterface;
	params.SlotContainer = SlotContainer;
	params.StackCount = StackCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
