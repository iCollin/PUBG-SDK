// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_InventoryWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InventoryWidget.InventoryWidget_C.IsFocusable
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryWidget_C::IsFocusable()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76367);

	UInventoryWidget_C_IsFocusable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryWidget.InventoryWidget_C.InputLB
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryWidget_C::InputLB()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76365);

	UInventoryWidget_C_InputLB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryWidget.InventoryWidget_C.InputLT
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryWidget_C::InputLT()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76363);

	UInventoryWidget_C_InputLT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryWidget.InventoryWidget_C.InputRB
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryWidget_C::InputRB()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76356);

	UInventoryWidget_C_InputRB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryWidget.InventoryWidget_C.InputRT
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryWidget_C::InputRT()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76349);

	UInventoryWidget_C_InputRT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryWidget.InventoryWidget_C.GetFocusingChildWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUserWidget* UInventoryWidget_C::GetFocusingChildWidget()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76345);

	UInventoryWidget_C_GetFocusingChildWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryWidget.InventoryWidget_C.InputA
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryWidget_C::InputA()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76337);

	UInventoryWidget_C_InputA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryWidget.InventoryWidget_C.InputB
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryWidget_C::InputB()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76329);

	UInventoryWidget_C_InputB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryWidget.InventoryWidget_C.InputX
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryWidget_C::InputX()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76321);

	UInventoryWidget_C_InputX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryWidget.InventoryWidget_C.InputY
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryWidget_C::InputY()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76313);

	UInventoryWidget_C_InputY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryWidget.InventoryWidget_C.GetDownWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUserWidget* UInventoryWidget_C::GetDownWidget()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76311);

	UInventoryWidget_C_GetDownWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryWidget.InventoryWidget_C.GetLeftWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUserWidget* UInventoryWidget_C::GetLeftWidget()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76309);

	UInventoryWidget_C_GetLeftWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryWidget.InventoryWidget_C.GetRightWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUserWidget* UInventoryWidget_C::GetRightWidget()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76307);

	UInventoryWidget_C_GetRightWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryWidget.InventoryWidget_C.GetUpWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUserWidget* UInventoryWidget_C::GetUpWidget()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76305);

	UInventoryWidget_C_GetUpWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryWidget.InventoryWidget_C.IsFocus
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryWidget_C::IsFocus()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76303);

	UInventoryWidget_C_IsFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryWidget.InventoryWidget_C.SetFocus
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewFocus                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryWidget_C::SetFocus(bool NewFocus)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76300);

	UInventoryWidget_C_SetFocus_Params params;
	params.NewFocus = NewFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryWidget.InventoryWidget_C.Down
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryWidget_C::Down()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76294);

	UInventoryWidget_C_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryWidget.InventoryWidget_C.Left
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryWidget_C::Left()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76275);

	UInventoryWidget_C_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryWidget.InventoryWidget_C.Right
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryWidget_C::Right()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76255);

	UInventoryWidget_C_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryWidget.InventoryWidget_C.Up
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryWidget_C::Up()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76249);

	UInventoryWidget_C_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryWidget.InventoryWidget_C.OnPrepass_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::OnPrepass_2(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76239);

	UInventoryWidget_C_OnPrepass_2_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.On_XBoxHelpTextBorder_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::On_XBoxHelpTextBorder_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76226);

	UInventoryWidget_C_On_XBoxHelpTextBorder_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.GetFirstFocusableChildWidgetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::GetFirstFocusableChildWidgetIndex(int* Index)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76214);

	UInventoryWidget_C_GetFirstFocusableChildWidgetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function InventoryWidget.InventoryWidget_C.OnChildWidgetRefresh
// (Public, BlueprintCallable, BlueprintEvent)

void UInventoryWidget_C::OnChildWidgetRefresh()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76197);

	UInventoryWidget_C_OnChildWidgetRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.GeRightFocusableIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::GeRightFocusableIndex(int* Index)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76181);

	UInventoryWidget_C_GeRightFocusableIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function InventoryWidget.InventoryWidget_C.GetLeftFocusableIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::GetLeftFocusableIndex(int* Index)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76167);

	UInventoryWidget_C_GetLeftFocusableIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function InventoryWidget.InventoryWidget_C.OnPrepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76165);

	UInventoryWidget_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.On_SortingButtonListBorder_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::On_SortingButtonListBorder_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76157);

	UInventoryWidget_C_On_SortingButtonListBorder_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.On_TextTime_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::On_TextTime_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76152);

	UInventoryWidget_C_On_TextTime_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.On_TextType_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::On_TextType_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76148);

	UInventoryWidget_C_On_TextType_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (Parm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryWidget_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76133);

	UInventoryWidget_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryWidget.InventoryWidget_C.GetMouseOverItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> Container                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UItem*                   Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UEquipableItem*          EquipableItem                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAttachableItem*         AttachableItem                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::GetMouseOverItem(TScriptInterface<class USlotInterface>* Slot, TScriptInterface<class USlotContainerInterface>* Container, class UItem** Item, class UEquipableItem** EquipableItem, class UAttachableItem** AttachableItem)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76127);

	UInventoryWidget_C_GetMouseOverItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Slot != nullptr)
		*Slot = params.Slot;
	if (Container != nullptr)
		*Container = params.Container;
	if (Item != nullptr)
		*Item = params.Item;
	if (EquipableItem != nullptr)
		*EquipableItem = params.EquipableItem;
	if (AttachableItem != nullptr)
		*AttachableItem = params.AttachableItem;
}


// Function InventoryWidget.InventoryWidget_C.PlayFadeInAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Playback_Speed                 (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::PlayFadeInAnim(float Playback_Speed)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76124);

	UInventoryWidget_C_PlayFadeInAnim_Params params;
	params.Playback_Speed = Playback_Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.On_VicinityInfoBlock_Prepass_1
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::On_VicinityInfoBlock_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76122);

	UInventoryWidget_C_On_VicinityInfoBlock_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.NewFunction_1
// (Public, BlueprintCallable, BlueprintEvent)

void UInventoryWidget_C::NewFunction_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76121);

	UInventoryWidget_C_NewFunction_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.UpdateDragDroppingObject
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::UpdateDragDroppingObject(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76119);

	UInventoryWidget_C_UpdateDragDroppingObject_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.FinalizeWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnInventoryUpdated             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FScriptDelegate         OnEquipmentUpdated             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UInventoryWidget_C::FinalizeWidget(const struct FScriptDelegate& OnInventoryUpdated, const struct FScriptDelegate& OnEquipmentUpdated)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76106);

	UInventoryWidget_C_FinalizeWidget_Params params;
	params.OnInventoryUpdated = OnInventoryUpdated;
	params.OnEquipmentUpdated = OnEquipmentUpdated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.InitializeWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnInventoryUpdated             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FScriptDelegate         OnEquipmentUpdated             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FScriptDelegate         OnUpdateItemList               (Parm, ZeroConstructor)
// struct FScriptDelegate         OnItemSlotFocus                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UInventoryWidget_C::InitializeWidget(const struct FScriptDelegate& OnInventoryUpdated, const struct FScriptDelegate& OnEquipmentUpdated, const struct FScriptDelegate& OnUpdateItemList, const struct FScriptDelegate& OnItemSlotFocus)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76085);

	UInventoryWidget_C_InitializeWidget_Params params;
	params.OnInventoryUpdated = OnInventoryUpdated;
	params.OnEquipmentUpdated = OnEquipmentUpdated;
	params.OnUpdateItemList = OnUpdateItemList;
	params.OnItemSlotFocus = OnItemSlotFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76082);

	UInventoryWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.BndEvt__VicinityTitleOn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UInventoryWidget_C::BndEvt__VicinityTitleOn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76081);

	UInventoryWidget_C_BndEvt__VicinityTitleOn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.BndEvt__VicinityTitleOff_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UInventoryWidget_C::BndEvt__VicinityTitleOff_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76080);

	UInventoryWidget_C_BndEvt__VicinityTitleOff_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.BndEvt__Vicinity_K2Node_ComponentBoundEvent_36_OnChildSlotFocus__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::BndEvt__Vicinity_K2Node_ComponentBoundEvent_36_OnChildSlotFocus__DelegateSignature(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& SlotContainer)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76077);

	UInventoryWidget_C_BndEvt__Vicinity_K2Node_ComponentBoundEvent_36_OnChildSlotFocus__DelegateSignature_Params params;
	params.Slot = Slot;
	params.SlotContainer = SlotContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.BndEvt__Backpack_K2Node_ComponentBoundEvent_40_OnChildSlotFocus__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::BndEvt__Backpack_K2Node_ComponentBoundEvent_40_OnChildSlotFocus__DelegateSignature(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& SlotContainer)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76074);

	UInventoryWidget_C_BndEvt__Backpack_K2Node_ComponentBoundEvent_40_OnChildSlotFocus__DelegateSignature_Params params;
	params.Slot = Slot;
	params.SlotContainer = SlotContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnPressed
// (BlueprintCallable, BlueprintEvent)

void UInventoryWidget_C::OnPressed()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76073);

	UInventoryWidget_C_OnPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnReleased
// (BlueprintCallable, BlueprintEvent)

void UInventoryWidget_C::OnReleased()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76072);

	UInventoryWidget_C_OnReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnItemSlotFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::OnItemSlotFocus(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& SlotContainer)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76069);

	UInventoryWidget_C_OnItemSlotFocus_Params params;
	params.Slot = Slot;
	params.SlotContainer = SlotContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (Parm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::OnDragEnter(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76065);

	UInventoryWidget_C_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (Parm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76062);

	UInventoryWidget_C_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.BndEvt__btn_time_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInventoryWidget_C::BndEvt__btn_time_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76061);

	UInventoryWidget_C_BndEvt__btn_time_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.BndEvt__btn_type_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInventoryWidget_C::BndEvt__btn_type_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76060);

	UInventoryWidget_C_BndEvt__btn_type_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnLeft
// (BlueprintCallable, BlueprintEvent)

void UInventoryWidget_C::OnLeft()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76059);

	UInventoryWidget_C_OnLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnRight
// (BlueprintCallable, BlueprintEvent)

void UInventoryWidget_C::OnRight()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76058);

	UInventoryWidget_C_OnRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnUp
// (BlueprintCallable, BlueprintEvent)

void UInventoryWidget_C::OnUp()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76057);

	UInventoryWidget_C_OnUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnDown
// (BlueprintCallable, BlueprintEvent)

void UInventoryWidget_C::OnDown()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76056);

	UInventoryWidget_C_OnDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInventoryWidget_C::Destruct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76055);

	UInventoryWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnWidgetInputA
// (BlueprintCallable, BlueprintEvent)

void UInventoryWidget_C::OnWidgetInputA()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76054);

	UInventoryWidget_C_OnWidgetInputA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.ONWidgetInputB
// (BlueprintCallable, BlueprintEvent)

void UInventoryWidget_C::ONWidgetInputB()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76053);

	UInventoryWidget_C_ONWidgetInputB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnWidgetInputX
// (BlueprintCallable, BlueprintEvent)

void UInventoryWidget_C::OnWidgetInputX()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76052);

	UInventoryWidget_C_OnWidgetInputX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnWidgetInputY
// (BlueprintCallable, BlueprintEvent)

void UInventoryWidget_C::OnWidgetInputY()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76051);

	UInventoryWidget_C_OnWidgetInputY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnItemExplorerProxyUpdated
// (BlueprintCallable, BlueprintEvent)

void UInventoryWidget_C::OnItemExplorerProxyUpdated()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76050);

	UInventoryWidget_C_OnItemExplorerProxyUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnInputRB
// (BlueprintCallable, BlueprintEvent)

void UInventoryWidget_C::OnInputRB()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76049);

	UInventoryWidget_C_OnInputRB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnInputRT
// (BlueprintCallable, BlueprintEvent)

void UInventoryWidget_C::OnInputRT()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76048);

	UInventoryWidget_C_OnInputRT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.BndEvt__Character_K2Node_ComponentBoundEvent_88_RefreshFocus__DelegateSignature
// (BlueprintEvent)

void UInventoryWidget_C::BndEvt__Character_K2Node_ComponentBoundEvent_88_RefreshFocus__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76047);

	UInventoryWidget_C_BndEvt__Character_K2Node_ComponentBoundEvent_88_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.BndEvt__Backpack_K2Node_ComponentBoundEvent_72_RefreshFocus__DelegateSignature
// (BlueprintEvent)

void UInventoryWidget_C::BndEvt__Backpack_K2Node_ComponentBoundEvent_72_RefreshFocus__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76046);

	UInventoryWidget_C_BndEvt__Backpack_K2Node_ComponentBoundEvent_72_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.BndEvt__Weapon_K2Node_ComponentBoundEvent_105_RefreshFocus__DelegateSignature
// (BlueprintEvent)

void UInventoryWidget_C::BndEvt__Weapon_K2Node_ComponentBoundEvent_105_RefreshFocus__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76045);

	UInventoryWidget_C_BndEvt__Weapon_K2Node_ComponentBoundEvent_105_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.BndEvt__Vicinity_K2Node_ComponentBoundEvent_115_RefreshFocus__DelegateSignature
// (BlueprintEvent)

void UInventoryWidget_C::BndEvt__Vicinity_K2Node_ComponentBoundEvent_115_RefreshFocus__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76044);

	UInventoryWidget_C_BndEvt__Vicinity_K2Node_ComponentBoundEvent_115_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnLeftRelease
// (BlueprintCallable, BlueprintEvent)

void UInventoryWidget_C::OnLeftRelease()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76043);

	UInventoryWidget_C_OnLeftRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnRightRelease
// (BlueprintCallable, BlueprintEvent)

void UInventoryWidget_C::OnRightRelease()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76042);

	UInventoryWidget_C_OnRightRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnUpRelease
// (BlueprintCallable, BlueprintEvent)

void UInventoryWidget_C::OnUpRelease()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76041);

	UInventoryWidget_C_OnUpRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnDownRelease
// (BlueprintCallable, BlueprintEvent)

void UInventoryWidget_C::OnDownRelease()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76040);

	UInventoryWidget_C_OnDownRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.MoveTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::MoveTick(float DeltaTime)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76038);

	UInventoryWidget_C_MoveTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInventoryWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76037);

	UInventoryWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnInteract
// (BlueprintCallable, BlueprintEvent)

void UInventoryWidget_C::OnInteract()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76036);

	UInventoryWidget_C_OnInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnWidgetInputLT
// (BlueprintCallable, BlueprintEvent)

void UInventoryWidget_C::OnWidgetInputLT()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76035);

	UInventoryWidget_C_OnWidgetInputLT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnWidgetInputRT
// (BlueprintCallable, BlueprintEvent)

void UInventoryWidget_C::OnWidgetInputRT()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76034);

	UInventoryWidget_C_OnWidgetInputRT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnEquipmentUpdated
// (BlueprintCallable, BlueprintEvent)

void UInventoryWidget_C::OnEquipmentUpdated()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76033);

	UInventoryWidget_C_OnEquipmentUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UInventoryWidget_C::CustomEvent_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76032);

	UInventoryWidget_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.BndEvt__Vicinity_K2Node_ComponentBoundEvent_36_OnInventoryDrop__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::BndEvt__Vicinity_K2Node_ComponentBoundEvent_36_OnInventoryDrop__DelegateSignature(class UDragDropOperation* Operation)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76030);

	UInventoryWidget_C_BndEvt__Vicinity_K2Node_ComponentBoundEvent_36_OnInventoryDrop__DelegateSignature_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.BndEvt__Backpack_K2Node_ComponentBoundEvent_38_OnInventoryDrop__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::BndEvt__Backpack_K2Node_ComponentBoundEvent_38_OnInventoryDrop__DelegateSignature(class UDragDropOperation* Operation)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76028);

	UInventoryWidget_C_BndEvt__Backpack_K2Node_ComponentBoundEvent_38_OnInventoryDrop__DelegateSignature_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.BndEvt__Weapon_K2Node_ComponentBoundEvent_56_OnInventoryDrop__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::BndEvt__Weapon_K2Node_ComponentBoundEvent_56_OnInventoryDrop__DelegateSignature(class UDragDropOperation* Operation)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76026);

	UInventoryWidget_C_BndEvt__Weapon_K2Node_ComponentBoundEvent_56_OnInventoryDrop__DelegateSignature_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.BndEvt__Character_K2Node_ComponentBoundEvent_69_OnInventoryDrop__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::BndEvt__Character_K2Node_ComponentBoundEvent_69_OnInventoryDrop__DelegateSignature(class UDragDropOperation* Operation)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76024);

	UInventoryWidget_C_BndEvt__Character_K2Node_ComponentBoundEvent_69_OnInventoryDrop__DelegateSignature_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnInventoryUpdated
// (BlueprintCallable, BlueprintEvent)

void UInventoryWidget_C::OnInventoryUpdated()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76023);

	UInventoryWidget_C_OnInventoryUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.BndEvt__Character_K2Node_ComponentBoundEvent_487_OnEnterSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::BndEvt__Character_K2Node_ComponentBoundEvent_487_OnEnterSlot__DelegateSignature(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& SlotContainer)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76020);

	UInventoryWidget_C_BndEvt__Character_K2Node_ComponentBoundEvent_487_OnEnterSlot__DelegateSignature_Params params;
	params.Slot = Slot;
	params.SlotContainer = SlotContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.BndEvt__Character_K2Node_ComponentBoundEvent_491_OnLeaveSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::BndEvt__Character_K2Node_ComponentBoundEvent_491_OnLeaveSlot__DelegateSignature(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& SlotContainer)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76017);

	UInventoryWidget_C_BndEvt__Character_K2Node_ComponentBoundEvent_491_OnLeaveSlot__DelegateSignature_Params params;
	params.Slot = Slot;
	params.SlotContainer = SlotContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.OnInventoryDrop_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::OnInventoryDrop_Event(class UDragDropOperation* Operation)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76015);

	UInventoryWidget_C_OnInventoryDrop_Event_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.BndEvt__Vicinity_K2Node_ComponentBoundEvent_44_OnDoSlotAction__DelegateSignature
// (BlueprintEvent)

void UInventoryWidget_C::BndEvt__Vicinity_K2Node_ComponentBoundEvent_44_OnDoSlotAction__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76014);

	UInventoryWidget_C_BndEvt__Vicinity_K2Node_ComponentBoundEvent_44_OnDoSlotAction__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.BndEvt__Backpack_K2Node_ComponentBoundEvent_45_OnDoSlotAction__DelegateSignature
// (BlueprintEvent)

void UInventoryWidget_C::BndEvt__Backpack_K2Node_ComponentBoundEvent_45_OnDoSlotAction__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76013);

	UInventoryWidget_C_BndEvt__Backpack_K2Node_ComponentBoundEvent_45_OnDoSlotAction__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.BndEvt__Equipment_K2Node_ComponentBoundEvent_64_OnDoSlotAction__DelegateSignature
// (BlueprintEvent)

void UInventoryWidget_C::BndEvt__Equipment_K2Node_ComponentBoundEvent_64_OnDoSlotAction__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76012);

	UInventoryWidget_C_BndEvt__Equipment_K2Node_ComponentBoundEvent_64_OnDoSlotAction__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.BndEvt__Vicinity_K2Node_ComponentBoundEvent_58_OnEnterSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::BndEvt__Vicinity_K2Node_ComponentBoundEvent_58_OnEnterSlot__DelegateSignature(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& SlotContainer)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76009);

	UInventoryWidget_C_BndEvt__Vicinity_K2Node_ComponentBoundEvent_58_OnEnterSlot__DelegateSignature_Params params;
	params.Slot = Slot;
	params.SlotContainer = SlotContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.BndEvt__Vicinity_K2Node_ComponentBoundEvent_62_OnLeaveSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::BndEvt__Vicinity_K2Node_ComponentBoundEvent_62_OnLeaveSlot__DelegateSignature(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& SlotContainer)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76006);

	UInventoryWidget_C_BndEvt__Vicinity_K2Node_ComponentBoundEvent_62_OnLeaveSlot__DelegateSignature_Params params;
	params.Slot = Slot;
	params.SlotContainer = SlotContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.BndEvt__Backpack_K2Node_ComponentBoundEvent_86_OnEnterSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::BndEvt__Backpack_K2Node_ComponentBoundEvent_86_OnEnterSlot__DelegateSignature(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& SlotContainer)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76003);

	UInventoryWidget_C_BndEvt__Backpack_K2Node_ComponentBoundEvent_86_OnEnterSlot__DelegateSignature_Params params;
	params.Slot = Slot;
	params.SlotContainer = SlotContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.BndEvt__Backpack_K2Node_ComponentBoundEvent_113_OnLeaveSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::BndEvt__Backpack_K2Node_ComponentBoundEvent_113_OnLeaveSlot__DelegateSignature(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& SlotContainer)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(76000);

	UInventoryWidget_C_BndEvt__Backpack_K2Node_ComponentBoundEvent_113_OnLeaveSlot__DelegateSignature_Params params;
	params.Slot = Slot;
	params.SlotContainer = SlotContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWidget.InventoryWidget_C.ExecuteUbergraph_InventoryWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWidget_C::ExecuteUbergraph_InventoryWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(75853);

	UInventoryWidget_C_ExecuteUbergraph_InventoryWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
