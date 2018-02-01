#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_HitNotifyWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HitNotifyWidget.HitNotifyWidget_C.GetBloodSpotWidget
struct UHitNotifyWidget_C_GetBloodSpotWidget_Params
{
	class UBloodSpotWidget_C*                          returnVal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HitNotifyWidget.HitNotifyWidget_C.InitializeBloodSpotWidgets
struct UHitNotifyWidget_C_InitializeBloodSpotWidgets_Params
{
};

// Function HitNotifyWidget.HitNotifyWidget_C.InitializeKoreanRating
struct UHitNotifyWidget_C_InitializeKoreanRating_Params
{
};

// Function HitNotifyWidget.HitNotifyWidget_C.InitializeChineseLicensing
struct UHitNotifyWidget_C_InitializeChineseLicensing_Params
{
};

// Function HitNotifyWidget.HitNotifyWidget_C.DamagedPercentToDamage
struct UHitNotifyWidget_C_DamagedPercentToDamage_Params
{
	float                                              DamagedPercent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HitNotifyWidget.HitNotifyWidget_C.GetPlayerHealthPercent
struct UHitNotifyWidget_C_GetPlayerHealthPercent_Params
{
	float                                              HealthPercent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HitNotifyWidget.HitNotifyWidget_C.PostAkEvent
struct UHitNotifyWidget_C_PostAkEvent_Params
{
	class UAkAudioEvent*                               AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HitNotifyWidget.HitNotifyWidget_C.SetRTPCValue
struct UHitNotifyWidget_C_SetRTPCValue_Params
{
	struct FString                                     RTPC;                                                     // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HitNotifyWidget.HitNotifyWidget_C.DamagedPercentToDamagePercent
struct UHitNotifyWidget_C_DamagedPercentToDamagePercent_Params
{
	float                                              DamagedPercent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamagePercent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HitNotifyWidget.HitNotifyWidget_C.PlayHitNotifySound
struct UHitNotifyWidget_C_PlayHitNotifySound_Params
{
};

// Function HitNotifyWidget.HitNotifyWidget_C.GetRandomScale
struct UHitNotifyWidget_C_GetRandomScale_Params
{
	struct FVector2D                                   Scale;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function HitNotifyWidget.HitNotifyWidget_C.GetRandomTranslation
struct UHitNotifyWidget_C_GetRandomTranslation_Params
{
	struct FVector2D                                   Translation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function HitNotifyWidget.HitNotifyWidget_C.OnHitNotify
struct UHitNotifyWidget_C_OnHitNotify_Params
{
	float                                              DamagePercent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EDamageTypeCategory                                DamageTypeCategory;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HitNotifyWidget.HitNotifyWidget_C.Construct
struct UHitNotifyWidget_C_Construct_Params
{
};

// Function HitNotifyWidget.HitNotifyWidget_C.ExecuteUbergraph_HitNotifyWidget
struct UHitNotifyWidget_C_ExecuteUbergraph_HitNotifyWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
