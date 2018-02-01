#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ParachutePlayer_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ParachutePlayer.ParachutePlayer_C.UserConstructionScript
struct AParachutePlayer_C_UserConstructionScript_Params
{
};

// Function ParachutePlayer.ParachutePlayer_C.UnknownFunction
struct AParachutePlayer_C_UnknownFunction_Params
{
};

// Function ParachutePlayer.ParachutePlayer_C.ReceiveEndPlay
struct AParachutePlayer_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ParachutePlayer.ParachutePlayer_C.ReceiveHit
struct AParachutePlayer_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ParachutePlayer.ParachutePlayer_C.ReceiveTick
struct AParachutePlayer_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ParachutePlayer.ParachutePlayer_C.ReceiveBeginPlay
struct AParachutePlayer_C_ReceiveBeginPlay_Params
{
};

// Function ParachutePlayer.ParachutePlayer_C.ExecuteUbergraph_ParachutePlayer
struct AParachutePlayer_C_ExecuteUbergraph_ParachutePlayer_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ParachutePlayer.ParachutePlayer_C.On Land__DelegateSignature
struct AParachutePlayer_C_On_Land__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
