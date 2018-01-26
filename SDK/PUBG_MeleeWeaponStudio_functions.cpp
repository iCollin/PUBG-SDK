// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MeleeWeaponStudio_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MeleeWeaponStudio.MeleeWeaponStudio_C.OnLoaded
// (Public, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponStudio_C::OnLoaded()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61660);

	AMeleeWeaponStudio_C_OnLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponStudio.MeleeWeaponStudio_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponStudio_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61658);

	AMeleeWeaponStudio_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponStudio.MeleeWeaponStudio_C.SetItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponStudio_C::SetItem(class UItem** Item)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61656);

	AMeleeWeaponStudio_C_SetItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponStudio.MeleeWeaponStudio_C.ExecuteUbergraph_MeleeWeaponStudio
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponStudio_C::ExecuteUbergraph_MeleeWeaponStudio(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(61651);

	AMeleeWeaponStudio_C_ExecuteUbergraph_MeleeWeaponStudio_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
