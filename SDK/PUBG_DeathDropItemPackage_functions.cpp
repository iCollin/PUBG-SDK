// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_DeathDropItemPackage_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DeathDropItemPackage.DeathDropItemPackage_C.GetCategory
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Category                       (Parm, OutParm)

void ADeathDropItemPackage_C::GetCategory(struct FText* Category)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(91939);

	ADeathDropItemPackage_C_GetCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Category != nullptr)
		*Category = params.Category;
}


// Function DeathDropItemPackage.DeathDropItemPackage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADeathDropItemPackage_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(91938);

	ADeathDropItemPackage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathDropItemPackage.DeathDropItemPackage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADeathDropItemPackage_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(91937);

	ADeathDropItemPackage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathDropItemPackage.DeathDropItemPackage_C.ExecuteUbergraph_DeathDropItemPackage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADeathDropItemPackage_C::ExecuteUbergraph_DeathDropItemPackage(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(69857);

	ADeathDropItemPackage_C_ExecuteUbergraph_DeathDropItemPackage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
