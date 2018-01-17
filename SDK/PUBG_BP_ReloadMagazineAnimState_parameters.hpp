#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_ReloadMagazineAnimState_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.DropMag
struct UBP_ReloadMagazineAnimState_C_DropMag_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.AttachMag
struct UBP_ReloadMagazineAnimState_C_AttachMag_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Attach;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.ShowMag
struct UBP_ReloadMagazineAnimState_C_ShowMag_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.Received_NotifyEnd
struct UBP_ReloadMagazineAnimState_C_Received_NotifyEnd_Params
{
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.Received_NotifyBegin
struct UBP_ReloadMagazineAnimState_C_Received_NotifyBegin_Params
{
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TotalDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
