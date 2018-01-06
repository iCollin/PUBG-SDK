// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_SlotBaseWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SlotBaseWidget.SlotBaseWidget_C.IsPlayCharacterPickupAnim
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bIsPickup                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USlotBaseWidget_C::IsPlayCharacterPickupAnim(bool* bIsPickup)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(90041);

	USlotBaseWidget_C_IsPlayCharacterPickupAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsPickup != nullptr)
		*bIsPickup = params.bIsPickup;
}


// Function SlotBaseWidget.SlotBaseWidget_C.IsCharacterCasting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsCasting                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USlotBaseWidget_C::IsCharacterCasting(bool* IsCasting)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(90004);

	USlotBaseWidget_C_IsCharacterCasting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsCasting != nullptr)
		*IsCasting = params.IsCasting;
}


// Function SlotBaseWidget.SlotBaseWidget_C.PlaySoundAk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           SoundAk                        (Parm, ZeroConstructor, IsPlainOldData)

void USlotBaseWidget_C::PlaySoundAk(class UAkAudioEvent* SoundAk)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(89999);

	USlotBaseWidget_C_PlaySoundAk_Params params;
	params.SoundAk = SoundAk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SlotBaseWidget.SlotBaseWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USlotBaseWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(89998);

	USlotBaseWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SlotBaseWidget.SlotBaseWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void USlotBaseWidget_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(89995);

	USlotBaseWidget_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SlotBaseWidget.SlotBaseWidget_C.ExecuteUbergraph_SlotBaseWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USlotBaseWidget_C::ExecuteUbergraph_SlotBaseWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(89991);

	USlotBaseWidget_C_ExecuteUbergraph_SlotBaseWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
