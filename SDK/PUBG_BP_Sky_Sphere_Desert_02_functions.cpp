// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_Sky_Sphere_Desert_02_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Sky_Sphere_Desert_02.BP_Sky_Sphere_Desert_02_C.UpdateSunDirection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Sky_Sphere_Desert_02_C::UpdateSunDirection()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(110654);

	ABP_Sky_Sphere_Desert_02_C_UpdateSunDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere_Desert_02.BP_Sky_Sphere_Desert_02_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Sky_Sphere_Desert_02_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(110634);

	ABP_Sky_Sphere_Desert_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
