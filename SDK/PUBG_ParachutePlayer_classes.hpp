#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ParachutePlayer_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ParachutePlayer.ParachutePlayer_C
// 0x00F4 (0x067C - 0x0588)
class AParachutePlayer_C : public AParachuteVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0588(0x0008) (Transient, DuplicateTransient)
	class UParachuteVehicleSeatInteraction*            ParachuteVehicleSeatInteraction;                          // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    CloudEffectParachuting;                                   // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    CloudEffectFalling;                                       // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            FreeFallFirstPersonCameraInVehicle;                       // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmInVehicleComponent*                FreeFallFirstSpringArmInVehicle;                          // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            FreeFallThirdPersonCameraInVehicle;                       // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmInVehicleComponent*                FreeFallThirdPersonSpringArmInVehicle;                    // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            FirstPersonCameraInVehicle;                               // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            ThirdPersonCameraInVehicle;                               // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmInVehicleComponent*                FirstPersonSpringArmInVehicle;                            // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmInVehicleComponent*                ThirdPersonSpringArmInVehicle;                            // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              _____0______1_48D534754930C313D14949AAF35C3B50;           // 0x05E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _____0__Direction_48D534754930C313D14949AAF35C3B50;       // 0x05EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline;                                               // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTerminalVelocity;                                      // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDecreaseTerminalVelocity;                              // 0x05FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LandingBrakeFactor;                                       // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLateralSpeed;                                          // 0x0604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isDebug;                                                  // 0x0608(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0609(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    On_Land;                                                  // 0x0610(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FVector2D                                   TestCoord_Start;                                          // 0x0620(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   TestCoord_End;                                            // 0x0628(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ParachuteFallingAltitudeStart;                            // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParachuteFallingAltitude;                                 // 0x0634(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedKPH;                                                 // 0x0638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActualAltitude;                                           // 0x063C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialSunMultiplier;                                     // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialFogMultiplier;                                     // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialStartDistance;                                     // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartSunMultiplier;                                       // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartFogMultiplier;                                       // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartStartDistance;                                       // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAtmosphericFogComponent*                    RefAtmosphereFogComponent;                                // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UExponentialHeightFogComponent*              RefExponontialFogComponent;                               // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalSpeedKPH;                                         // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastVelocity;                                             // 0x066C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              RelativeVelocity;                                         // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x3f8fe905);
		return ptr;
	}


	void UserConstructionScript();
	void UnknownFunction();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ParachutePlayer(int EntryPoint);
	void On_Land__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
