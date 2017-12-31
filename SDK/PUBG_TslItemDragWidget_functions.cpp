// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TslItemDragWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslItemDragWidget.TslItemDragWidget_C.On_ErrorIcon_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UTslItemDragWidget_C::On_ErrorIcon_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(58949);

	UTslItemDragWidget_C_On_ErrorIcon_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragWidget.TslItemDragWidget_C.IsEnable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsEnable                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTslItemDragWidget_C::IsEnable(bool* IsEnable)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(58945);

	UTslItemDragWidget_C_IsEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnable != nullptr)
		*IsEnable = params.IsEnable;
}


// Function TslItemDragWidget.TslItemDragWidget_C.UpdateBackgroundImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UTslItemDragWidget_C::UpdateBackgroundImage(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(58934);

	UTslItemDragWidget_C_UpdateBackgroundImage_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragWidget.TslItemDragWidget_C.GettslItemDragDropOperation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTslItemDragDropOperation_C* AsTsl_Item_Drag_Drop_Operation (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTslItemDragWidget_C::GettslItemDragDropOperation(class UTslItemDragDropOperation_C** AsTsl_Item_Drag_Drop_Operation)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(58929);

	UTslItemDragWidget_C_GettslItemDragDropOperation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsTsl_Item_Drag_Drop_Operation != nullptr)
		*AsTsl_Item_Drag_Drop_Operation = params.AsTsl_Item_Drag_Drop_Operation;
}


// Function TslItemDragWidget.TslItemDragWidget_C.GetActionName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ActionName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTslItemDragWidget_C::GetActionName(struct FName* ActionName)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(58926);

	UTslItemDragWidget_C_GetActionName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionName != nullptr)
		*ActionName = params.ActionName;
}


// Function TslItemDragWidget.TslItemDragWidget_C.GetInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AInventory*              Inventory                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTslItemDragWidget_C::GetInventory(class AInventory** Inventory)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(58917);

	UTslItemDragWidget_C_GetInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}


// Function TslItemDragWidget.TslItemDragWidget_C.GetAdditionalMaxStackCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTslItemDragWidget_C::GetAdditionalMaxStackCount(int* Count)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(58911);

	UTslItemDragWidget_C_GetAdditionalMaxStackCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function TslItemDragWidget.TslItemDragWidget_C.GetShooterPlayerController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATslPlayerController*    ShooterPlayerController        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTslItemDragWidget_C::GetShooterPlayerController(class ATslPlayerController** ShooterPlayerController)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(58905);

	UTslItemDragWidget_C_GetShooterPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShooterPlayerController != nullptr)
		*ShooterPlayerController = params.ShooterPlayerController;
}


// Function TslItemDragWidget.TslItemDragWidget_C.UpdateStackCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UTslItemDragWidget_C::UpdateStackCount(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(58887);

	UTslItemDragWidget_C_UpdateStackCount_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragWidget.TslItemDragWidget_C.UpdateStackCountVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UTslItemDragWidget_C::UpdateStackCountVisibility(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(58877);

	UTslItemDragWidget_C_UpdateStackCountVisibility_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragWidget.TslItemDragWidget_C.UpdateIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UTslItemDragWidget_C::UpdateIcon(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(58872);

	UTslItemDragWidget_C_UpdateIcon_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragWidget.TslItemDragWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTslItemDragWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(58871);

	UTslItemDragWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragWidget.TslItemDragWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTslItemDragWidget_C::Destruct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(58870);

	UTslItemDragWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragWidget.TslItemDragWidget_C.ExecuteUbergraph_TslItemDragWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTslItemDragWidget_C::ExecuteUbergraph_TslItemDragWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(58860);

	UTslItemDragWidget_C_ExecuteUbergraph_TslItemDragWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
