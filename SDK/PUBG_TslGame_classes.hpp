#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TslGame_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TslGame.TslPopupInterface
// 0x0000 (0x0028 - 0x0028)
class UTslPopupInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xbcea04b6);
		return ptr;
	}


	void SetPopup(EPopupStyle PopupStyle, const struct FText& Message, const struct FScriptDelegate& PressedDelegate);
};


// Class TslGame.ActionInputEventHolder
// 0x0028 (0x0050 - 0x0028)
class UActionInputEventHolder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xc2242ac8);
		return ptr;
	}

};


// Class TslGame.TslBaseHUD
// 0x00B0 (0x0548 - 0x0498)
class ATslBaseHUD : public AHUD
{
public:
	class UClass*                                      MainUMGHudClass;                                          // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAkAudioBank*>                        AutoLoadAudioBanks;                                       // 0x04A0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04B0(0x0008) MISSED OFFSET
	TArray<class UActionInputEventHolder*>             ActionInputEventHolderArray;                              // 0x04B8(0x0010) (ZeroConstructor, Transient)
	TMap<struct FString, struct FTslWidgetState>       WidgetStateMap;                                           // 0x04C8(0x0050) (ZeroConstructor, Transient)
	class UUserWidget*                                 MainUMGHud;                                               // 0x0518(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UBlockInputUserWidget*>               BlockInputWidgetList;                                     // 0x0520(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<struct FString>                             UseMouseWidgetStack;                                      // 0x0530(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	bool                                               IsTimelineMaximize;                                       // 0x0540(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0541(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x51605e21);
		return ptr;
	}


	void WidgetToggle(const struct FString& WidgetName);
	void WidgetShow(const struct FString& WidgetName, EWidgetShowType ShowType, class UObject* OptionalParam);
	void WidgetCreate(const struct FString& WidgetName, const struct FTslWidgetConfig& Config);
	EKillcamDisplayCode UpdateKillcamDisplayCode();
	void UnbindActionKeyDelegateEvent(const struct FName& ActionName, TEnumAsByte<EInputEvent> InputEvent);
	void ShowPopupDialog(const struct FString& PopupWidgetName, EPopupStyle PopupStyle, const struct FText& Message, const struct FScriptDelegate& PressedDelegate);
	void OnClickedKillcamPlay();
	bool IsWidgetShow(const struct FString& WidgetName);
	bool IsMouseUse();
	bool HideWidgetByEscape();
	void HidePopupDialog(const struct FString& PopupWidgetName);
	class UUserWidget* GetWidget(const struct FString& WidgetName);
	class UUserWidget* GetMainUMGHud();
	EKillcamDisplayCode GetLastKillcamDisplayCode();
	struct FText GetKillcamCountingText(const struct FText& InCountingTextFormat);
	void DestroyAllWidgets();
	void BindActionKeyDelegateEvent(const struct FName& ActionName, TEnumAsByte<EInputEvent> InputEvent, const struct FScriptDelegate& ActionKeyDelegate);
};


// Class TslGame.AirborneEjectionArea
// 0x0010 (0x03C0 - 0x03B0)
class AAirborneEjectionArea : public AActor
{
public:
	class USphereComponent*                            SphereComponent;                                          // 0x03B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Radius;                                                   // 0x03B8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf67e0bea);
		return ptr;
	}

};


// Class TslGame.AnimDB
// 0x0148 (0x0178 - 0x0030)
class UAnimDB : public UDataAsset
{
public:
	struct FAnimInfo                                   Stand_Info;                                               // 0x0030(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FAnimInfo                                   Crouch_Info;                                              // 0x0098(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FAnimInfo                                   Prone_Info;                                               // 0x0100(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              BlendSpaceSpeed_Walk;                                     // 0x0168(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlendSpaceSpeed_Run;                                      // 0x016C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlendSpaceSpeed_Sprint;                                   // 0x0170(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0174(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x5ac2fac1);
		return ptr;
	}


	class UBlendSpace* GetBlendSpaceRelaxed(TEnumAsByte<EAnimStanceType> AnimStance, bool bIsFPP);
	class UBlendSpace* GetBlendSpace(TEnumAsByte<EAnimStanceType> AnimStance, bool bIsFPP);
	float GetAnimSpeed(TEnumAsByte<EAnimStanceType> AnimStance, float Direction, float InSpeed, float* PlayRate, float* SprintAlpha);
};


// Class TslGame.AnimNotify_AkEvent_Advanced
// 0x0050 (0x0088 - 0x0038)
class UAnimNotify_AkEvent_Advanced : public UAnimNotify
{
public:
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x0040(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       AttachName;                                               // 0x0050(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CustomRelativeLocation;                                   // 0x0058(0x000C) (Edit, BlueprintReadOnly, IsPlainOldData)
	bool                                               bFollow;                                                  // 0x0064(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMinActivationDistance;                                // 0x0065(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseActivationDistanceByAttenuation;                      // 0x0066(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0067(0x0001) MISSED OFFSET
	float                                              MinActivationDistance;                                    // 0x0068(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayCameraShake;                                         // 0x006C(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	class UClass*                                      CameraShake;                                              // 0x0070(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               AffectedCameras;                                          // 0x0078(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x23796892);
		return ptr;
	}

};


// Class TslGame.AnimNotify_CharacterAnimationNotify
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_CharacterAnimationNotify : public UAnimNotify
{
public:
	struct FName                                       NotifyName;                                               // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x80fab4cd);
		return ptr;
	}

};


// Class TslGame.AnimNotify_UnarmedAttack
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_UnarmedAttack : public UAnimNotify
{
public:
	struct FName                                       NotifyName;                                               // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x859baba3);
		return ptr;
	}

};


// Class TslGame.AnimNotify_WeaponAnimationNotify
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_WeaponAnimationNotify : public UAnimNotify
{
public:
	struct FName                                       NotifyName;                                               // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf3b10964);
		return ptr;
	}

};


// Class TslGame.AsyncStaticMeshComponent
// 0x0070 (0x0A50 - 0x09E0)
class UAsyncStaticMeshComponent : public UStaticMeshComponent
{
public:
	struct FScriptMulticastDelegate                    OnStaticMeshLoaded;                                       // 0x09E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TAssetPtr<class UStaticMesh>                       StaticMeshAsset;                                          // 0x09F0(0x0020) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0A10(0x0008) MISSED OFFSET
	class UStaticMesh*                                 ErrorStaticMesh;                                          // 0x0A18(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ClientCollisionProfileNameOverride;                       // 0x0A20(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class UStaticMesh>                       PendingStaticMeshAsset;                                   // 0x0A28(0x0020) (Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0A48(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xe1d8fd52);
		return ptr;
	}


	void SetStaticMeshAsset(TAssetPtr<class UStaticMesh> Asset);
	bool IsSameMesh(TAssetPtr<class UStaticMesh> Asset);
	TAssetPtr<class UStaticMesh> GetStaticMeshAsset();
	void ClearStaticMeshAsset();
};


// Class TslGame.BluezoneInOutComponent
// 0x00E0 (0x02C0 - 0x01E0)
class UBluezoneInOutComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x01E0(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x2c000616);
		return ptr;
	}

};


// Class TslGame.BluezoneInOutSoundEffectComponent
// 0x0010 (0x01F0 - 0x01E0)
class UBluezoneInOutSoundEffectComponent : public UActorComponent
{
public:
	class UAkAudioEvent*                               BluezoneInSoundAk;                                        // 0x01E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               BluezoneOutSoundAk;                                       // 0x01E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x5704001a);
		return ptr;
	}

};


// Class TslGame.BTDecorator_HasLoSTo
// 0x0028 (0x0090 - 0x0068)
class UBTDecorator_HasLoSTo : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      EnemyKey;                                                 // 0x0068(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x547cb835);
		return ptr;
	}

};


// Class TslGame.BTTask_FindPointNearEnemy
// 0x0000 (0x0098 - 0x0098)
class UBTTask_FindPointNearEnemy : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x97e5c76d);
		return ptr;
	}

};


// Class TslGame.TslBuff
// 0x0060 (0x0410 - 0x03B0)
class ATslBuff : public AActor
{
public:
	struct FName                                       OverlapId;                                                // 0x03B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EBuffOverlapSolveMethod                            OverlapSolveMethod;                                       // 0x03B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03B9(0x0003) MISSED OFFSET
	float                                              BuffTickInterval;                                         // 0x03BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuffTickFirstDelay;                                       // 0x03C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuffDuration;                                             // 0x03C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Infinite;                                                 // 0x03C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	struct FName                                       AttachSocket;                                             // 0x03D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AttachServerPaticleClass;                                 // 0x03D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDebuff;                                                 // 0x03E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	class UBuffComponet*                               OwnerBuffComponent;                                       // 0x03E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x03F0(0x0010) MISSED OFFSET
	class ATslServerParticle*                          AttachedServerPaticle;                                    // 0x0400(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0408(0x0004) MISSED OFFSET
	bool                                               bClientNotifyStartBuff;                                   // 0x040C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClientNotifyStopBuff;                                    // 0x040D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x040E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa85da242);
		return ptr;
	}


	void TickBuff();
	void StopBuffBlueprint(bool bCanceled);
	void StartBuffBlueprint();
	class APawn* GetOwnerPawn();
	class ATslCharacter* GetOwnerCharacter();
	struct FAttackId GetAttackId();
	bool CanApplyBuff();
};


// Class TslGame.BuffComponet
// 0x0010 (0x01F0 - 0x01E0)
class UBuffComponet : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x3b082262);
		return ptr;
	}


	void RemoveBuff(const struct FName& OverlapId);
	class ATslBuff* FindBuffWithOverlapId(const struct FName& BuffOverlapId);
	class ATslBuff* AddBuff(class UClass* TslBuffClass);
};


// Class TslGame.CameraSettings
// 0x0070 (0x0098 - 0x0028)
class UCameraSettings : public UObject
{
public:
	float                                              CameraPitchMinStand;                                      // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraPitchMaxStand;                                      // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraYawMinStand;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraYawMaxStand;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraPitchMinProne;                                      // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraPitchMaxProne;                                      // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraYawMinProne;                                        // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraYawMaxProne;                                        // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              FPSShowOnHighScopingFOV;                                  // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TPSShowOnHighScopingFOV;                                  // 0x004C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraPitchMinInVehicle;                                  // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraPitchMaxInVehicle;                                  // 0x0054(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraYawMinInVehicle;                                    // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraYawMaxInVehicle;                                    // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       HeadBoneName;                                             // 0x0060(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FString>                             HideMaterialsWhenCameraIsInHead;                          // 0x0068(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FString>                             HideMaterialsOnScopeMode;                                 // 0x0078(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FString>                             HideMaterialsOnHighScopeMode;                             // 0x0088(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb0f350ae);
		return ptr;
	}

};


// Class TslGame.CastableInterface
// 0x0000 (0x0028 - 0x0028)
class UCastableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x9b028446);
		return ptr;
	}


	bool IsCastable(class ATslCharacter* Character);
	struct FText GetCastFailMessage(class ATslCharacter* Character);
	struct FCastConfig GetCastConfig();
};


// Class TslGame.TslWheelSuspensionAudioData
// 0x0050 (0x0080 - 0x0030)
class UTslWheelSuspensionAudioData : public UDataAsset
{
public:
	TMap<ELandingSoundSwitchState, float>              LandingSoundSwitchesPerHorVelocity;                       // 0x0030(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd7433b3d);
		return ptr;
	}

};


// Class TslGame.CastComponent
// 0x0030 (0x0210 - 0x01E0)
class UCastComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCancelCast;                                             // 0x01E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x18];                                      // 0x01F8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x00589836);
		return ptr;
	}


	bool StartCast(const TScriptInterface<class UCastableInterface>& CastableInterface);
	float GetTotalCastTime();
	float GetElapsedCastTime();
	ECastPriority GetCastPriority();
	class UObject* GetCastObject();
	struct FText GetCastName();
	ECastLevel GetCastLevel();
	ECastAnim GetCastAnim();
	bool CancelCast();
};


// Class TslGame.CharacterBreathComponent
// 0x0090 (0x0270 - 0x01E0)
class UCharacterBreathComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E0(0x0008) MISSED OFFSET
	float                                              Breath;                                                   // 0x01E8(0x0004) (Edit, Net, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              BreathMax;                                                // 0x01EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BreathPointOffsetAtStand;                                 // 0x01F0(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BreathPointOffsetAtCrouch;                                // 0x01FC(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BreathPointOffsetAtProne;                                 // 0x0208(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BreathPointOffsetAtGroggy;                                // 0x0214(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      RestorationBuff;                                          // 0x0220(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ApneaDebuff;                                              // 0x0228(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      HoldBreathDebuff;                                         // 0x0230(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumBreathStartHoldingBreath;                          // 0x0238(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	class UClass*                                      SprintDebuff;                                             // 0x0240(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumBreathStartSprinting;                              // 0x0248(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x24];                                      // 0x024C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa14c0b74);
		return ptr;
	}


	void OnRep_Breath(float LastBreath);
	bool IsInApnea();
	bool IsConsuming();
	float GetBreathRatio();
	float GetBreathMax();
	float GetBreath();
	bool CanStartSprinting();
	bool CanStartHoldingBreath();
	void AddBreath(float Value);
};


// Class TslGame.CharacterStudio
// 0x0090 (0x0440 - 0x03B0)
class ACharacterStudio : public AActor
{
public:
	class USpringArmComponent*                         SpringArmComponent;                                       // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            CameraComponent;                                          // 0x03B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCaptureComponent;                                    // 0x03C0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UTextureRenderTarget2D*                      TextureTarget;                                            // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDynamicResolution;                                    // 0x03D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03D1(0x0003) MISSED OFFSET
	float                                              MaxViewDistance;                                          // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MaleCharacterProxyClass;                                  // 0x03D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FemaleCharacterProxyClass;                                // 0x03E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET
	struct FTransform                                  CharacterInitialTransform;                                // 0x03F0(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
	class ATslCharacterProxy*                          CharacterProxy;                                           // 0x0420(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USceneComponent*                             CharacterRotationPivot;                                   // 0x0428(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SceneCaptureMaterial;                                     // 0x0430(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0438(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xea068f87);
		return ptr;
	}


	void Update();
	void SetSceneCaptureMaterial(class UMaterialInstanceDynamic* Mid);
	void SetCharacter(class ATslCharacter* Character);
	bool IsUsingDynamicResolution();
	bool IsCharacterValid();
	class UMaterialInstanceDynamic* GetSceneCaptureMaterial();
	class ATslCharacter* GetCharacter();
	void AddYaw(float Yaw);
};


// Class TslGame.CoherentCommonBinder
// 0x0078 (0x00A0 - 0x0028)
class UCoherentCommonBinder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
	struct FString                                     DefaultLobbyUrl;                                          // 0x0088(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa1596455);
		return ptr;
	}


	void Test();
	void OnWebPageOnPlatformFailed();
	void BindUI();
	void BindDelegate();
};


// Class TslGame.CoherentWidgetBinder
// 0x0010 (0x00B0 - 0x00A0)
class UCoherentWidgetBinder : public UCoherentCommonBinder
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x65646626);
		return ptr;
	}

};


// Class TslGame.LobbyCoherentWidgetBinder
// 0x0000 (0x00B0 - 0x00B0)
class ULobbyCoherentWidgetBinder : public UCoherentWidgetBinder
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x866fe52e);
		return ptr;
	}

};


// Class TslGame.TslBasePlayerController
// 0x0010 (0x0700 - 0x06F0)
class ATslBasePlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x06F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf2b13279);
		return ptr;
	}


	void Server_SetBPFactor(float factor);
	void HandleClipboard();
};


// Class TslGame.TslPlayerController
// 0x0450 (0x0B50 - 0x0700)
class ATslPlayerController : public ATslBasePlayerController
{
public:
	struct FScriptMulticastDelegate                    OnShowReplayTimeline;                                     // 0x0700(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x148];                                     // 0x0710(0x0148) MISSED OFFSET
	unsigned char                                      UnknownData01 : 1;                                        // 0x0858(0x0001)
	unsigned char                                      bIsSpectated : 1;                                         // 0x0858(0x0001) (Net, Transient)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0859(0x0003) MISSED OFFSET
	struct FVector                                     CameraPeekLeftMove;                                       // 0x085C(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CameraPeekRightMove;                                      // 0x0868(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0874(0x0010) MISSED OFFSET
	ECameraViewBehaviour                               CameraViewBehaviour;                                      // 0x0884(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xF];                                       // 0x0885(0x000F) MISSED OFFSET
	struct FVector_NetQuantizeNormal                   SpectatorAccumViewRotation;                               // 0x0894(0x000C) (Net, Transient)
	EObserverAuthorityType                             ObserverAuthorityType;                                    // 0x08A0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x37];                                      // 0x08A1(0x0037) MISSED OFFSET
	class UActorComponent*                             InteractionTargetComponent;                               // 0x08D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class ATslCharacter*                               SpectatorViewCharacter;                                   // 0x08E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x10];                                      // 0x08E8(0x0010) MISSED OFFSET
	class ATslAchievement*                             Achievement;                                              // 0x08F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMeshComponent*                              SpectatorScopeMesh;                                       // 0x0900(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData07[0x60];                                      // 0x0908(0x0060) MISSED OFFSET
	TArray<struct FNearClippingLevelOverZ>             NearClippingLevelsOverZ;                                  // 0x0968(0x0010) (ZeroConstructor, Config)
	float                                              MaxValidPing;                                             // 0x0978(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultFOV;                                               // 0x097C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              InteractGamepadHoldTime;                                  // 0x0980(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0984(0x0004) MISSED OFFSET
	class UVivoxComponent*                             VivoxComponent;                                           // 0x0988(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ATeam*>                               Teams;                                                    // 0x0990(0x0010) (Net, ZeroConstructor)
	TArray<TWeakObjectPtr<class ATslCharacter>>        ReplicateTeamMembers;                                     // 0x09A0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData09[0x50];                                      // 0x09B0(0x0050) MISSED OFFSET
	TArray<TWeakObjectPtr<class ATslCharacter>>        ReplicateCharacter;                                       // 0x0A00(0x0010) (ZeroConstructor)
	TArray<TWeakObjectPtr<class ACarePackageItem>>     ReplicateCarePackageItemList;                             // 0x0A10(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData10[0x20];                                      // 0x0A20(0x0020) MISSED OFFSET
	float                                              DeathResultDelaySeconds;                                  // 0x0A40(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0xFC];                                      // 0x0A44(0x00FC) MISSED OFFSET
	bool                                               bUseTPAntibotClient;                                      // 0x0B40(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0xF];                                       // 0x0B41(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x65f0e266);
		return ptr;
	}


	void UnreliablePong(int SeqID, int64_t DateTimeTickFromServer);
	void UnreliablePing(int SeqID, int64_t DateTimeTick);
	void ToggleInventory();
	void Suicide();
	void SimulateInputKey(const struct FKey& Key, bool bPressed);
	void ShowTslDebugInfomation();
	void ShowTeamDeathPopup();
	void ShowPlayerControllerBindActions_Admin();
	void ShowMatchResult();
	void ShowInGameMenu_Gamepad();
	void ShowInGameMenu();
	void ShowGotoLobbyPopUp(EPopupButtonID ButtonID);
	void SetDefaultFOV(float NewFOV);
	void SetCustomDepth(bool bOn);
	void SetCanSeeTerrainThroughFogInTheAir(bool bCanSee);
	void ServerViewTargetReplicateUpdate();
	void ServerTryInteractByComponent(class UActorComponent* TargetComponent);
	void ServerTryInteract(class AActor* TargetObject);
	void ServerSystemInfo(const struct FString& OsLanguage, const struct FString& GameLanguage, const struct FString& OsVersion, const struct FString& CpuName, const struct FString& GpuName, uint32_t RamInGB);
	void ServerSuicide();
	void ServerStopHoldRotation(const struct FRotator& DeltaRotation, bool bUseInterp);
	void ServerStat(TEnumAsByte<EServerStatType> StatType, const struct FString& Password);
	void ServerStartInteractionByComponent(class UActorComponent* InteractionComponent);
	void ServerStartInteraction(class UInteractionComponent* InteractionComponent);
	void ServerStartHoldRotation(const struct FRotator& Current);
	void ServerSpawnVehicle();
	void ServerSetViewTarget(class AActor* NewViewTarget);
	void ServerSetThirdPerson(bool bNewThirdPerson);
	void ServerSetIsReviving(bool InbIsReviving);
	void ServerSetControlRotation(const struct FRotator& Rotation);
	void ServerSetClientFps(float Fps);
	void ServerSetAccumViewRotation(const struct FVector_NetQuantizeNormal& InAccumViewRotation);
	void ServerSendTPPacketReliable(TArray<unsigned char> Packet);
	void ServerSendPacketUnreliable(TArray<unsigned char> Packet);
	void ServerSendPacketReliable(TArray<unsigned char> Packet);
	void ServerSay(const struct FString& Msg);
	void ServerPickUpItemFromPackage(class UItem* Item, class AItemPackage* Package, const struct FName& TargetContainer, const struct FString& Options);
	void ServerPickUpDroppedItem(class UObject* DroppedItemObject, const struct FName& TargetContainer, const struct FString& Options);
	void ServerNotifyHitToGlassWindowInst(class UTslInstancedGlassWindowComponent* GlassWindowInstComponent, const struct FHitResult& Hit);
	void ServerNotifyHitToGlassWindow(class UTslGlassWindowComponent* GlassWindowComponent, const struct FHitResult& Hit);
	void ServerNextSetViewTarget(bool bIsPrev);
	void ServerMoveToVehicleSeat(int SeatIndex);
	void ServerMapLoadFinishedOnClient();
	void ServerLeaveMatchIntentionally();
	void ServerKickCharacter(class ATslCharacter* TslCharacter, const struct FText& Reason);
	void ServerCheat(const struct FString& Msg);
	void ServerCancelInteraction(class UActorComponent* InteractionComponent);
	void ServerBroadCastUpdateCameraInfo(bool InbFirstPerson, bool InbIsInVehicle, bool InbIsScoping);
	void ServerBroadCastCastingBar(float CastTime, const struct FText& CastName, bool OnOff);
	void ServerBEServerCommand(const struct FString& Command, const struct FString& Arg0, const struct FString& Arg1, const struct FString& Arg2);
	void ServerAdmin(const struct FString& AdminCommand);
	void SendSystemMessage(ESystemMessageType MessageType, const struct FText& Message, float MessageDuration);
	void Say(const struct FString& Msg);
	void SaveGearProfile(int ProfileIndex, TArray<class UClass*> inArray);
	void ReliablePong(int SeqID, int64_t DateTimeTickFromServer);
	void ReliablePing(int SeqID, int64_t DateTimeTick);
	void OnShowCastingBarWidget(float CastTime, const struct FText& CastName, bool OnOff);
	void OnRep_Team();
	void OnRep_CameraViewBehaviour();
	void OnRep_bUseTPAntibotClient();
	void OnMoveToVehicleSeat(unsigned char idx);
	void OnItemStackCountHandlingMode();
	void OnFinishInteractionCast(class UObject* CastObject);
	void OnExecuteExitCommand();
	void OnClickedReportButton(EReportCause ReportCause, ESubjectToReport SubjectToReport, TArray<EReportDetailCauseType> ReportDetailCauseTypeList);
	void OnCancelInteractionCast(class UObject* CastObject);
	void OffItemStackCountHandlingMode();
	void ObserverTeleportTo(const struct FVector& Location);
	void NextSetViewTarget();
	void KickCharacter(class ATslCharacter* TslCharacter, const struct FText& Reason);
	bool IsSpectatorState();
	bool IsSpectating();
	bool IsSameObservingCameraMode(EObserverCameraMode CameraType);
	bool IsReplayingKillcam();
	bool IsReplaying();
	bool IsObserving();
	bool IsItemStackCountHandlingMode();
	bool IsHighPing();
	bool IsGroggying();
	bool IsGamepadHoldProcessing();
	bool IsGameInputAllowed();
	void HideTslDebugInfomation();
	void HideMatchResult();
	class UVivoxComponent* GetVivoxComponent();
	class ATslCharacter* GetViewTargetTslCharacter();
	class ATeam* GetViewTargetTeam();
	TArray<struct FTslPlayerMatchResultInfo> GetTslZombieMatchResultInfos();
	TArray<struct FTslPlayerMatchResultInfo> GetTslPlayerMatchResultInfos();
	TArray<struct FTslPlayerMatchResultInfo> GetTslHumanMatchResultInfos();
	class ATslCharacter* GetTslCharacter();
	int GetTeamOverallKillCountAtObserving();
	int GetTeamMemberCount();
	struct FRotator GetTargetViewRotation();
	struct FString GetSpectatingPlayerName();
	TArray<class ATslCharacter*> GetReplicateTeamMembers();
	TArray<class ATslCharacter*> GetReplicateCharacters();
	TArray<class ACarePackageItem*> GetReplicateCarePackageItems();
	float GetOtherElapsedCastTime();
	float GetOtherCastTime();
	struct FText GetOtherCastingName();
	EObserverCameraMode GetObserverCameraMode();
	EObserverAuthorityType GetObserverAuthorityType();
	struct FString GetKillerName();
	struct FText GetHudDebugText();
	TArray<class UClass*> GetGearProfile(int ProfileIndex);
	float GetCurrentHoldProgressRate();
	TArray<class ATeam*> GetClientTeam(bool IncludeSelf);
	bool GetCanAllSpectate();
	int GetAliveTeamMemberCount();
	void DumpActorDetailByRaycast();
	void DropItem(const struct FString& ItemTypeName);
	bool CompleteReportKiller();
	void ClientWasWarnedTobeKicked(const struct FText& KickReason);
	void ClientWasKickedAndExit(const struct FText& KickReason);
	void ClientUpdateSpectatorCameraMode(const struct FName& InCameraName, bool InbFirstPerson, bool InbIsInVehicle, bool InbIsScoping);
	void ClientStartOnlineGame();
	void ClientShowMatchResult();
	void ClientShowCastingBar(float CastTime, const struct FText& CastName, bool OnOff);
	void ClientSetTslPlayerMatchResultInfos(TArray<struct FTslPlayerMatchResultInfo> InTslPlayerMatchResultInfos);
	void ClientSetCanAllSpectate(bool InbCanSpectate);
	void ClientSendTPPacketReliable(TArray<unsigned char> Packet);
	void ClientSendRoundEndEvent(bool bIsWinner, int ExpendedTimeInSeconds);
	void ClientSendPacketUnreliable(TArray<unsigned char> Packet);
	void ClientSendPacketReliable(TArray<unsigned char> Packet);
	void ClientOnCharacterRestart();
	void ClientOnCharacterDeath(bool bIsTeamMatch, bool bHasAliveTeamMember, const struct FTslReportUserInfo& InKillerInfo, bool InbCanReport);
	void ClientNotifyStartBuff(const struct FName& BuffName, bool bStart);
	void ClientNotifySpeedBoost(float Boost);
	void ClientNotifyRestrictingPlayArea();
	void ClientNotifyPlayerEndWithoutHitInfo(int Ranking, const struct FTslPlayerStatistics& Statistics, const struct FTslPlayerStatisticsForOwner& StatisticsForOwner);
	void ClientNotifyPlayerEnd(int Ranking, const struct FTslPlayerStatistics& Statistics, const struct FTslPlayerStatisticsForOwner& StatisticsForOwner, const struct FTakeHitInfo& LastTakeHitInfo);
	void ClientNotifyNextGasIn(const struct FVector_NetQuantize& PoisonGasWarningPosition, float PoisonGasWarningRadius);
	void ClientNotifyHealAmount_Unreliable(float Heal);
	void ClientNotifyHealAmount_Reliable(float Heal);
	void ClientNotifyHealAmount(float Heal);
	void ClientNotifyHeal_Unreliable(float HealthStart, float Health, float MaxHealth);
	void ClientNotifyHeal_Reliable(float HealthStart, float Health, float MaxHealth);
	void ClientNotifyHeal(float HealthStart, float Health, float MaxHealth);
	void ClientInteractByComponent(class UActorComponent* TargetComponent);
	void ClientInteract(class AActor* TargetObject);
	void ClientGameStarted();
	void ClientEndOnlineGame();
	void ClientAdminCopyString(const struct FString& inString);
	void Cheat_ServerSpawnVehicle(int VehicleIndex);
	bool CanSeeTerrainThroughFogInTheAir();
	bool CanReport();
	void BP_Test_SpawnVehicle(int VehicleIndex);
	void BEServer(const struct FString& Command, const struct FString& Arg0, const struct FString& Arg1, const struct FString& Arg2);
	void BEClient(const struct FString& Command);
	void Admin(const struct FString& ServerAdminCommand);
};


// Class TslGame.ConnectionHandlerInterface
// 0x0000 (0x0028 - 0x0028)
class UConnectionHandlerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x5ca49bad);
		return ptr;
	}

};


// Class TslGame.ConsoleCommandExecutor
// 0x0000 (0x03B0 - 0x03B0)
class AConsoleCommandExecutor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa2ac7865);
		return ptr;
	}


	void ExecuteConsoleCommands(TArray<struct FString> Commands);
};


// Class TslGame.DeployedItem
// 0x0018 (0x03C8 - 0x03B0)
class ADeployedItem : public AActor
{
public:
	class UClass*                                      ItemType;                                                 // 0x03B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StackCount;                                               // 0x03B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	class USceneComponent*                             SceneComponent;                                           // 0x03C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x1561fc03);
		return ptr;
	}

};


// Class TslGame.SubActor
// 0x0008 (0x03B8 - 0x03B0)
class ASubActor : public AActor
{
public:
	class ATslCharacter*                               NetOwnerCharacter;                                        // 0x03B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x54d8f6f1);
		return ptr;
	}

};


// Class TslGame.SlotInterface
// 0x0000 (0x0028 - 0x0028)
class USlotInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x064fe685);
		return ptr;
	}


	bool IsWeapon();
	bool IsStackable();
	bool IsPackageItem();
	bool IsEquipable();
	bool IsCastableItem();
	bool IsAttachment();
	float GetUnitSpace();
	class UTexture* GetToolTipIconTexture();
	float GetToolTipIconSizeRatio();
	int GetStackCountMax();
	int GetStackCount();
	float GetSpace();
	int GetSortPriority();
	struct FText GetSlotName();
	struct FText GetSlotDetailedName();
	struct FText GetSlotDescription();
	struct FText GetSlotCategory();
	class UTexture* GetIconTexture();
	float GetIconSizeRatio();
	class UAkAudioEvent* GetDropSound();
};


// Class TslGame.SlotContainerInterface
// 0x0000 (0x0028 - 0x0028)
class USlotContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x77798eee);
		return ptr;
	}


	void ShowSlotContextMenu(const TScriptInterface<class USlotInterface>& Slot);
	bool IsEnableAction(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& OtherContainer, const struct FString& Options);
	void HideSlotContextMenu();
	TScriptInterface<class USlotInterface> GetSlotContext();
	class AActor* GetSlotContainerOwner();
	struct FName GetSlotContainerName();
	struct FName GetDefaultActionName(const TScriptInterface<class USlotInterface>& Slot);
	TArray<struct FName> GetAvailableSlotActions(const TScriptInterface<class USlotInterface>& Slot);
	TArray<TScriptInterface<class USlotInterface>> GetAllSlots();
	struct FName GetActionName(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& OtherContainer, const struct FString& Options);
	void DropSlotOnOtherContainer(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& OtherContainer, const struct FString& Options);
	void DoSlotActionDefault(const TScriptInterface<class USlotInterface>& Slot);
	void DoSlotAction(const struct FName& ActionName, const struct FString& Options);
	void DoActionWithSlot(const TScriptInterface<class USlotInterface>& Slot, const struct FName& ActionName, const struct FString& Options);
};


// Class TslGame.ItemSlotContainer
// 0x0030 (0x03E8 - 0x03B8)
class AItemSlotContainer : public ASubActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B8(0x0008) MISSED OFFSET
	struct FScriptDelegate                             OnCreateAndShowContextMenuWidget;                         // 0x03C0(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnDestroyContextMenuWidget;                               // 0x03D0(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb69f09f2);
		return ptr;
	}

};


// Class TslGame.ItemExplorerInterface
// 0x0000 (0x0028 - 0x0028)
class UItemExplorerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x20cc8fd1);
		return ptr;
	}


	void UpdateItemList();
	TArray<TScriptInterface<class USlotInterface>> GetExplorableItemSlotList();
};


// Class TslGame.ItemExplorer
// 0x0030 (0x0418 - 0x03E8)
class AItemExplorer : public AItemSlotContainer
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET
	struct FScriptDelegate                             OnUpdateItemList;                                         // 0x03F0(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnClearItemList;                                          // 0x0400(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0410(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf275a188);
		return ptr;
	}

};


// Class TslGame.ExplorableItemInterface
// 0x0000 (0x0028 - 0x0028)
class UExplorableItemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x44f6718a);
		return ptr;
	}


	bool IsValidExplorableItem();
	struct FName GetInteractiveActionName();
	float GetExplorationDistance();
};


// Class TslGame.Item
// 0x0198 (0x01C0 - 0x0028)
class UItem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	unsigned char                                      bStackable : 1;                                           // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bUsable : 1;                                              // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bIsConsumable : 1;                                        // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bDisableSpawnInGame : 1;                                  // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                StackCount;                                               // 0x003C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	struct FText                                       ItemName;                                                 // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       ItemCategory;                                             // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       ItemDetailedName;                                         // 0x0070(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       ItemDescription;                                          // 0x0088(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              ItemMaxInteractableDistance;                              // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StackCountMax;                                            // 0x00A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpacePerItem;                                             // 0x00A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TAssetPtr<class UStaticMesh>                       DroppedMesh;                                              // 0x00B0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              DroppedMeshScale;                                         // 0x00D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	TAssetPtr<class UTexture>                          Icon;                                                     // 0x00D8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TAssetPtr<class UTexture>                          ToolTipIcon;                                              // 0x00F8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              IconSizeRatio;                                            // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ToolTipIconSizeRatio;                                     // 0x011C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               DropSoundAk;                                              // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               PickUpSoundAk;                                            // 0x0128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               InventoryPutSoundAk;                                      // 0x0130(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SortPriority;                                             // 0x0138(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LobbyItemID;                                              // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLobbyItemDesc                              LobbyItemDesc;                                            // 0x0140(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	EItemCategory                                      Category;                                                 // 0x0198(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0199(0x0007) MISSED OFFSET
	struct FName                                       SubCategory;                                              // 0x01A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsToy;                                                   // 0x01A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x01A9(0x0007) MISSED OFFSET
	struct FString                                     Note;                                                     // 0x01B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x1889ae15);
		return ptr;
	}


	bool UseBy(class ATslCharacter* Character);
	bool PickUpBy(class ATslCharacter* Character, const struct FName& TargetContainer, const struct FString& Options);
	bool IsWeapon();
	bool IsToy();
	bool IsPackageItem();
	bool IsEquipable();
	bool IsCastableItem();
	bool IsAttachment();
	class UTexture* GetIconTexture();
};


// Class TslGame.ItemPackage
// 0x00F8 (0x0510 - 0x0418)
class AItemPackage : public AItemExplorer
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0418(0x0010) MISSED OFFSET
	struct FText                                       PackageName;                                              // 0x0428(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       PackageCategory;                                          // 0x0440(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       PackageDetailedName;                                      // 0x0458(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       PackageDescription;                                       // 0x0470(0x0018) (Edit, DisableEditOnInstance)
	class UTexture*                                    PackageIcon;                                              // 0x0488(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PackageIconSizeRatio;                                     // 0x0490(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0494(0x0004) MISSED OFFSET
	class UTexture*                                    PackageToolTipIcon;                                       // 0x0498(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PackageToolTipIconSizeRatio;                              // 0x04A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04A4(0x0004) MISSED OFFSET
	TAssetPtr<class UStaticMesh>                       PackageMesh;                                              // 0x04A8(0x0020) (Edit, DisableEditOnInstance)
	class UBoxComponent*                               BoxComponent;                                             // 0x04C8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UOnceInteractionComponent*                   InteractionComponent;                                     // 0x04D0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	bool                                               DestroyByEmptyItem;                                       // 0x04D8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x04D9(0x0007) MISSED OFFSET
	TArray<class UItem*>                               Items;                                                    // 0x04E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst)
	struct FString                                     CreatorName;                                              // 0x04F0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	int                                                SortPriority;                                             // 0x0500(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0504(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xc2be39b7);
		return ptr;
	}


	void Items_RepNotify();
	bool IsOpenedBy(class ATslCharacter* Character);
	void ClientOnInteractBy(class ATslCharacter* OtherCharacter);
	bool AllowInteract(class ATslCharacter* OtherCharacter);
};


// Class TslGame.DeployedItemPackage
// 0x0018 (0x03C8 - 0x03B0)
class ADeployedItemPackage : public AActor
{
public:
	class UClass*                                      ItemPackageType;                                          // 0x03B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FPackagedItemInfo>                   ItemInfos;                                                // 0x03B8(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xfbf7f6dd);
		return ptr;
	}

};


// Class TslGame.DoorDataAsset
// 0x0038 (0x0068 - 0x0030)
class UDoorDataAsset : public UDataAsset
{
public:
	float                                              OpenAngle;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UCurveFloat*                                 OpenCurve;                                                // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OpenCurveDuration;                                        // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class UCurveFloat*                                 CloseCurve;                                               // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CloseCurveDuration;                                       // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               OpenSound;                                                // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               CloseSound;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd762ca30);
		return ptr;
	}

};


// Class TslGame.TslReactionDoorData
// 0x0040 (0x0070 - 0x0030)
class UTslReactionDoorData : public UDataAsset
{
public:
	float                                              PointDamageImpulse;                                       // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PointDamageRadius;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BreakingRadius;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BreakingImpulse;                                          // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BreakingMinDamage;                                        // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageAccumulateTimeout;                                  // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ZombieDamageAccumulateTimeout;                            // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FName                                       TopImpactSoketName;                                       // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CenterImpactSoketName;                                    // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       BottomImpactSoketName;                                    // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               DestructibleSoundAk;                                      // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa0916cf0);
		return ptr;
	}

};


// Class TslGame.DoorFrameComponent
// 0x0070 (0x0A50 - 0x09E0)
class UDoorFrameComponent : public UStaticMeshComponent
{
public:
	struct FTransform                                  DoorTransform;                                            // 0x09E0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SoundOffsetFromDoor;                                      // 0x0A10(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A1C(0x0004) MISSED OFFSET
	class UStaticMesh*                                 DoorStaticMesh;                                           // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDestructibleMesh*                           DoorDestructibleMesh;                                     // 0x0A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDoorDataAsset*                              DoorDataAsset;                                            // 0x0A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTslReactionDoorData*                        ReactionDoorData;                                         // 0x0A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableSubComponents;                                    // 0x0A40(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0A41(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x3fc8ac80);
		return ptr;
	}


	class UStaticMesh* GetDoorStaticMesh();
	void DisableSubComponents(bool bDisable);
};


// Class TslGame.DroppedItem
// 0x0008 (0x03B8 - 0x03B0)
class ADroppedItem : public AActor
{
public:
	class UItem*                                       Item;                                                     // 0x03B0(0x0008) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xdc8aab77);
		return ptr;
	}


	void Item_RepNotify();
};


// Class TslGame.DroppedItemGridManager
// 0x00B0 (0x0460 - 0x03B0)
class ADroppedItemGridManager : public AInfo
{
public:
	float                                              MaxGridSize;                                              // 0x03B0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxGridLayerNum;                                          // 0x03B4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxItemNumPerGroup;                                       // 0x03B8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA4];                                      // 0x03BC(0x00A4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xc1075c58);
		return ptr;
	}

};


// Class TslGame.DroppedItemGroup
// 0x0010 (0x03C0 - 0x03B0)
class ADroppedItemGroup : public AActor
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03B0(0x0004) MISSED OFFSET
	float                                              RandomSpawnRadius;                                        // 0x03B4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxRandomSpawnCount;                                      // 0x03B8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb45540bc);
		return ptr;
	}


	void OnItemEndPlay();
	void OnItemBeginPlay();
	bool AddItem(class UItem* NewItem, const struct FVector& NewWorldLocation);
};


// Class TslGame.DroppedItemInterface
// 0x0000 (0x0028 - 0x0028)
class UDroppedItemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x5a498158);
		return ptr;
	}


	class UItem* GetDroppedItem();
};


// Class TslGame.ExportableDataAsset
// 0x0020 (0x0050 - 0x0030)
class UExportableDataAsset : public UDataAsset
{
public:
	struct FDirectoryPath                              JsonSaveDirectory;                                        // 0x0030(0x0010) (Edit)
	struct FString                                     JsonSaveFileName;                                         // 0x0040(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb46f3362);
		return ptr;
	}

};


// Class TslGame.LobbyCustomizableData
// 0x0020 (0x0070 - 0x0050)
class ULobbyCustomizableData : public UExportableDataAsset
{
public:
	TArray<struct FLobbyFaceElement>                   Faces;                                                    // 0x0050(0x0010) (Edit, ZeroConstructor)
	TArray<struct FLobbyHairElement>                   Hairs;                                                    // 0x0060(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x3872b2ec);
		return ptr;
	}

};


// Class TslGame.LobbyItemExporter
// 0x0010 (0x0060 - 0x0050)
class ULobbyItemExporter : public UExportableDataAsset
{
public:
	struct FString                                     LocJsonSaveFileName;                                      // 0x0050(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xecb9f5ea);
		return ptr;
	}

};


// Class TslGame.FlashBangCaptureActor
// 0x0030 (0x03E0 - 0x03B0)
class AFlashBangCaptureActor : public AActor
{
public:
	class USceneComponent*                             SceneRootComponent;                                       // 0x03B0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCapture;                                             // 0x03B8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class APawn*                                       PlayerPawnReference;                                      // 0x03C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	class UTextureRenderTarget2D*                      CaptureTexture;                                           // 0x03C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x03D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb26ac459);
		return ptr;
	}


	void CaptureScreen();
	void CaptureINIT(bool bDoDelay, float CaptureDelay, class APawn* PlayerRef, class UTextureRenderTarget2D* RenderTexture, const struct FPostProcessSettings& PP_Settings, bool bHidePawn);
};


// Class TslGame.GameEventObserver
// 0x0060 (0x0088 - 0x0028)
class UGameEventObserver : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnMatchStarted;                                           // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnMatchEnded;                                             // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnKillOtherPlayer;                                        // 0x0048(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnDie;                                                    // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnDamage;                                                 // 0x0068(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnDeathCamFinished;                                       // 0x0078(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x008946a8);
		return ptr;
	}

};


// Class TslGame.GamePadInputAixsComponent
// 0x0020 (0x0200 - 0x01E0)
class UGamePadInputAixsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x01E0(0x0004) MISSED OFFSET
	float                                              YawAccelPct;                                              // 0x01E4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PitchAccelPct;                                            // 0x01E8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastYawAccelDir;                                          // 0x01EC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastPitchAccelDir;                                        // 0x01F0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastYawInput;                                             // 0x01F4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastPitchInput;                                           // 0x01F8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x7aa1f16f);
		return ptr;
	}

};


// Class TslGame.GameStateListenerComponent
// 0x0020 (0x0200 - 0x01E0)
class UGameStateListenerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnGameModeEvent;                                          // 0x01E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb4005fee);
		return ptr;
	}

};


// Class TslGame.GeneralItemSpawner
// 0x0000 (0x0028 - 0x0028)
class UGeneralItemSpawner : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x12177c67);
		return ptr;
	}


	TArray<class UItem*> CreateItems();
	TArray<struct FItemInitiator> CreateItemInitiators();
};


// Class TslGame.TableGeneralItemSpawner
// 0x00C0 (0x00E8 - 0x0028)
class UTableGeneralItemSpawner : public UGeneralItemSpawner
{
public:
	class UDataTable*                                  RawItemSpawnDataTable;                                    // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  RawItemSpawnTogetherDataTable;                            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FGeneralItemSpawnProb>               SpawnProbArray;                                           // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0048(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xbde872cb);
		return ptr;
	}

};


// Class TslGame.HackReporterComponent
// 0x0240 (0x0420 - 0x01E0)
class UHackReporterComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x240];                                     // 0x01E0(0x0240) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xdb66e9b9);
		return ptr;
	}


	void ServerOnWallHackDetected(class ATslCharacter* Victim, float Distance);
};


// Class TslGame.HighlightSession
// 0x0078 (0x00A0 - 0x0028)
class UHighlightSession : public UObject
{
public:
	struct FHighlightRecordConfig                      Config_Kill;                                              // 0x0028(0x000C) (Config)
	struct FHighlightRecordConfig                      Config_KillGroggy;                                        // 0x0034(0x000C) (Config)
	struct FHighlightRecordConfig                      Config_Die;                                               // 0x0040(0x000C) (Config)
	struct FHighlightRecordConfig                      Config_DieGroggy;                                         // 0x004C(0x000C) (Config)
	struct FHighlightRecordConfig                      Config_EndMatch;                                          // 0x0058(0x000C) (Config)
	struct FHighlightRecordConfig                      Config_DeathCam;                                          // 0x0064(0x000C) (Config)
	class UTslGameInstance*                            TslGameInstance;                                          // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0078(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x3927485c);
		return ptr;
	}


	void RecordRemainEvents();
	void MatchEnded();
	void KillOtherPlayer(bool bGroggy);
	void Die(bool bGroggy);
	void DeathCamFinished(float DeathCamRunningTime);
};


// Class TslGame.InteractionInterface
// 0x0000 (0x0028 - 0x0028)
class UInteractionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x705ab5e9);
		return ptr;
	}


	struct FText GetInteractiveObjectName();
	struct FText GetInteractionVerb();
	bool AllowInteractBy(class ATslCharacter* Character);
};


// Class TslGame.InteractionComponent
// 0x0180 (0x0360 - 0x01E0)
class UInteractionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E0(0x0008) MISSED OFFSET
	float                                              MaxInteractableDistance;                                  // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01EC(0x0004) MISSED OFFSET
	struct FText                                       InteractionVerb;                                          // 0x01F0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       InteractiveObjectName;                                    // 0x0208(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCastConfig                                 CastConfig;                                               // 0x0220(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bUseTraceCheck;                                           // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0259(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInteractBy;                                             // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientOnInteractBy;                                       // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xE0];                                      // 0x0280(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf0b3f38d);
		return ptr;
	}


	struct FText GetInteractiveObjectName();
	struct FText GetInteractionVerb();
	bool AllowInteractBy(class ATslCharacter* Character);
};


// Class TslGame.DoublePhaseInteractionComponent
// 0x00D0 (0x0430 - 0x0360)
class UDoublePhaseInteractionComponent : public UInteractionComponent
{
public:
	struct FText                                       FirstInteractionVerb;                                     // 0x0360(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       FirstInteractiveObjectName;                               // 0x0378(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SecondInteractionVerb;                                    // 0x0390(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SecondInteractiveObjectName;                              // 0x03A8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnSecondInteractBy;                                       // 0x03C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientOnSecondInteractBy;                                 // 0x03D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x50];                                      // 0x03E0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xe9d82d0d);
		return ptr;
	}

};


// Class TslGame.DroppedItemActorComponent
// 0x0020 (0x0380 - 0x0360)
class UDroppedItemActorComponent : public UInteractionComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0360(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x4b593f73);
		return ptr;
	}


	void OnInteractDelegate(class ATslCharacter* OtherCharacter);
	bool AllowInteractDelegate(class ATslCharacter* OtherCharacter);
};


// Class TslGame.OnceInteractionComponent
// 0x0010 (0x0370 - 0x0360)
class UOnceInteractionComponent : public UInteractionComponent
{
public:
	TArray<struct FName>                               CharacterHistory;                                         // 0x0360(0x0010) (Net, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x47163876);
		return ptr;
	}

};


// Class TslGame.InteractorComponent
// 0x0000 (0x01E0 - 0x01E0)
class UInteractorComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x09dbd50a);
		return ptr;
	}

};


// Class TslGame.AmmoItem
// 0x0010 (0x01D0 - 0x01C0)
class UAmmoItem : public UItem
{
public:
	class UTexture*                                    AmmoIcon;                                                 // 0x01C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmmoIconRatio;                                            // 0x01C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x5761c3bf);
		return ptr;
	}

};


// Class TslGame.AttachableItem
// 0x0230 (0x03F0 - 0x01C0)
class UAttachableItem : public UItem
{
public:
	struct FWeaponAttachmentData                       AttachmentData;                                           // 0x01C0(0x01F0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TAssetPtr<class UStaticMesh>                       AttachmentMeshAsset;                                      // 0x03B0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FWeaponAttachmentWeaponTagData>      AttachmentWeaponTagData;                                  // 0x03D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               EquipOnPickUp;                                            // 0x03E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               AttachedSoundAk;                                          // 0x03E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xe5c699ea);
		return ptr;
	}


	EWeaponAttachmentSlotID GetAttachmentSlotID(const struct FName& WeaponTag);
	struct FWeaponAttachmentData GetAttachmentData(const struct FName& WeaponTag);
};


// Class TslGame.CastableItem
// 0x0040 (0x0200 - 0x01C0)
class UCastableItem : public UItem
{
public:
	struct FCastConfig                                 CastConfig;                                               // 0x01C0(0x0038) (Edit, DisableEditOnInstance)
	bool                                               bCanUseInWater;                                           // 0x01F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ECastableItemType                                  CastableItemType;                                         // 0x01F9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x01FA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xaab2227c);
		return ptr;
	}

};


// Class TslGame.HealItem
// 0x0000 (0x0200 - 0x0200)
class UHealItem : public UCastableItem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd633797b);
		return ptr;
	}


	float GetHealLimit(class ATslCharacter* TslCharacter);
};


// Class TslGame.HealOverTimeItem
// 0x0008 (0x0208 - 0x0200)
class UHealOverTimeItem : public UHealItem
{
public:
	class UClass*                                      HealOverTimeBuffClass;                                    // 0x0200(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x94aec506);
		return ptr;
	}

};


// Class TslGame.InstantHealItem
// 0x0008 (0x0208 - 0x0200)
class UInstantHealItem : public UHealItem
{
public:
	float                                              HealLimit;                                                // 0x0200(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0204(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb66dc7c0);
		return ptr;
	}

};


// Class TslGame.SkinItem
// 0x0028 (0x0228 - 0x0200)
class USkinItem : public UCastableItem
{
public:
	struct FSkinData                                   SkinData;                                                 // 0x0200(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bAutoAction;                                              // 0x0220(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0221(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x120d4bce);
		return ptr;
	}


	bool CheckSkin(const TScriptInterface<class USkinnableInterface>& SkinnableInterface);
	bool ApplySkin(const TScriptInterface<class USkinnableInterface>& SkinnableInterface);
};


// Class TslGame.EquipableItem
// 0x00B8 (0x0278 - 0x01C0)
class UEquipableItem : public UItem
{
public:
	EEquipSlotID                                       EquipSlotID;                                              // 0x01C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01C1(0x0003) MISSED OFFSET
	float                                              SpaceExtension;                                           // 0x01C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageReductionRate;                                      // 0x01C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DurabilityMax;                                            // 0x01CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DestroyByDurability;                                      // 0x01D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01D1(0x0003) MISSED OFFSET
	float                                              Durability;                                               // 0x01D4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	EDurabilityConsumeType                             DurabilityConsumeType;                                    // 0x01D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01D9(0x0007) MISSED OFFSET
	struct FCustomizableObjectIdentifier               CustomizableObjectIdentifierForMale;                      // 0x01E0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FCustomizableObjectIdentifier               CustomizableObjectIdentifierForFemale;                    // 0x0210(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UAkAudioEvent*                               EquipedSoundAk;                                           // 0x0240(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EEquipableItemSoundGroup                           SoundGroup;                                               // 0x0248(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EEquipableItemSoundType                            SoundType;                                                // 0x0249(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanZombieEquip;                                          // 0x024A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESlotOffsetType                                    SlotOffsetType;                                           // 0x024B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsUnequipable;                                           // 0x024C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x024D(0x0003) MISSED OFFSET
	TAssetPtr<class UTexture>                          HudDisplayEquipIcon;                                      // 0x0250(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0270(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x4e606221);
		return ptr;
	}


	void UnequipBy(class ATslCharacter* Character);
	bool EquipBy(class ATslCharacter* Character, const struct FEquipPosition& Position);
	bool CanEquipTo(class ATslCharacter* Character);
};


// Class TslGame.CustomEquipableItem
// 0x00F8 (0x0370 - 0x0278)
class UCustomEquipableItem : public UEquipableItem
{
public:
	int                                                ItemLevel;                                                // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	struct FTransform                                  SlotOffset_Primary;                                       // 0x0280(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  SlotOffset_Secondary;                                     // 0x02B0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  SlotOffset_SideArm;                                       // 0x02E0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  SlotOffset_Melee;                                         // 0x0310(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  SlotOffset_Thrown;                                        // 0x0340(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x7ec6ec22);
		return ptr;
	}


	struct FTransform GetOffset_Thrown();
	struct FTransform GetOffset_SideArm();
	struct FTransform GetOffset_Secondary();
	struct FTransform GetOffset_Primary();
	struct FTransform GetOffset_Melee();
	int GetItemLevel();
};


// Class TslGame.ParachuteItem
// 0x0008 (0x0280 - 0x0278)
class UParachuteItem : public UEquipableItem
{
public:
	class UClass*                                      ParachuteType;                                            // 0x0278(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x7ac9b08c);
		return ptr;
	}

};


// Class TslGame.ThrowableItem
// 0x0018 (0x0290 - 0x0278)
class UThrowableItem : public UEquipableItem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0278(0x0008) MISSED OFFSET
	class UClass*                                      WeaponType;                                               // 0x0280(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ATslWeapon*                                  EquippedWeapon;                                           // 0x0288(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x5f0c81c5);
		return ptr;
	}


	class ATslWeapon* GetEquippedWeapon();
	class ATslWeapon* GetDefaultWeaponObject();
};


// Class TslGame.SkinnableInterface
// 0x0000 (0x0028 - 0x0028)
class USkinnableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xc57349e8);
		return ptr;
	}


	bool HasSkin(const struct FSkinData& InSkinData);
	void ClearSkin();
};


// Class TslGame.TslWeapon
// 0x0428 (0x07D8 - 0x03B0)
class ATslWeapon : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET
	class UTexture*                                    WeaponIcon;                                               // 0x03C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponIconRatio;                                          // 0x03C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	struct FCanvasIcon                                 PrimaryIcon;                                              // 0x03D0(0x0018) (Edit, DisableEditOnInstance)
	struct FCanvasIcon                                 SecondaryIcon;                                            // 0x03E8(0x0018) (Edit, DisableEditOnInstance)
	struct FCanvasIcon                                 PrimaryClipIcon;                                          // 0x0400(0x0018) (Edit, DisableEditOnInstance)
	struct FCanvasIcon                                 SecondaryClipIcon;                                        // 0x0418(0x0018) (Edit, DisableEditOnInstance)
	float                                              AmmoIconsCount;                                           // 0x0430(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PrimaryClipIconOffset;                                    // 0x0434(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SecondaryClipIconOffset;                                  // 0x0438(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	struct FCanvasIcon                                 Crosshair[0x5];                                           // 0x0440(0x0018) (Edit, DisableEditOnInstance)
	struct FCanvasIcon                                 AimingCrosshair[0x5];                                     // 0x04B8(0x0018) (Edit, DisableEditOnInstance)
	bool                                               UseLaserDot;                                              // 0x0530(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseCustomCrosshair;                                       // 0x0531(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseCustomAimingCrosshair;                                 // 0x0532(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHideCrosshairWhileNotAiming;                             // 0x0533(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0534(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnUpdatedAttachment;                                      // 0x0538(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class ATslCharacter*                               MyPawn;                                                   // 0x0548(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FWeaponData                                 WeaponConfig;                                             // 0x0550(0x0098) (Edit, DisableEditOnInstance)
	EWeaponHand                                        WeaponHand;                                               // 0x05E8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x05E9(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      Mesh3P;                                                   // 0x05F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RootScene;                                                // 0x05F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0600(0x0001) MISSED OFFSET
	EAttachmentCalculateType                           AttachmentAniRateCalculateType;                           // 0x0601(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAttachmentCalculateType                           AttachmentRecoilPatternScaleCalculateType;                // 0x0602(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x5];                                       // 0x0603(0x0005) MISSED OFFSET
	TArray<struct FWeaponAttachmentPositionData>       AttachmentPositionData;                                   // 0x0608(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FWeaponAttachmentAssetData>          DefaultAttachedItemAssets;                                // 0x0618(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              AttachedItemClasses;                                      // 0x0628(0x0010) (Net, ZeroConstructor, Transient)
	struct FName                                       WeaponTag;                                                // 0x0638(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x18];                                      // 0x0640(0x0018) MISSED OFFSET
	TMap<EWeaponAttachmentSlotID, class UAsyncStaticMeshComponent*> AttachedStaticComponentMap;                               // 0x0658(0x0050) (ExportObject, ZeroConstructor, Transient)
	class UAkComponent*                                AkComponent;                                              // 0x06A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FName                                       MuzzleAttachPoint;                                        // 0x06B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FiringAttachPoint;                                        // 0x06B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MuzzleFx;                                                 // 0x06C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ShellFxAttachPoint;                                       // 0x06C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ShellFxClass;                                             // 0x06D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    MuzzlePSC;                                                // 0x06D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    MuzzlePSCSecondary;                                       // 0x06E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      FireCameraShake;                                          // 0x06E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        FireForceFeedback;                                        // 0x06F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               FireSoundAk;                                              // 0x06F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               FireLoopSoundAk;                                          // 0x0700(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               FireFinishSoundAk;                                        // 0x0708(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               OutOfAmmoSoundAk;                                         // 0x0710(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               ReloadSoundAk;                                            // 0x0718(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               EquipSoundAk;                                             // 0x0720(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               UnequipSoundAk;                                           // 0x0728(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               AimingStartSoundAk;                                       // 0x0730(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               AimingFinishSoundAk;                                      // 0x0738(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               ScopingStartSoundAk;                                      // 0x0740(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               ScopingFinishSoundAk;                                     // 0x0748(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAnimWeaponType                                    AnimWeaponType;                                           // 0x0750(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0751(0x0007) MISSED OFFSET
	struct FWeaponBasicAnim                            WeaponAnim;                                               // 0x0758(0x0018) (Edit, DisableEditOnInstance)
	struct FWeaponRollAnim                             ProneRollAnim;                                            // 0x0770(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              HipDuration;                                              // 0x0780(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bLoopedMuzzleFX : 1;                                      // 0x0784(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bLoopedFireSound : 1;                                     // 0x0784(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData09[0x33];                                      // 0x0785(0x0033) MISSED OFFSET
	struct FSkinData                                   SkinData;                                                 // 0x07B8(0x0020) (Net, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf343efc1);
		return ptr;
	}


	void Weapon_AttachShoulder();
	void Weapon_AttachHand();
	void SimulatePhysicalBodyHit(const struct FHitResult& Impact, const struct FVector& ShotDirection);
	void ServerLogFireWeapon(const struct FAttackId& AttackId);
	void OnRep_SkinData();
	void OnRep_MyPawn();
	void OnRep_AttachedItemClasses(TArray<class UClass*> OldVal);
	void OnAnimationNotify(const struct FName& NotifyName);
	bool IsWeaponAttachedToShoulder();
	bool IsCustomSightAttached(EWeaponAttachmentSlotID SlotID);
	float GetWeaponReadyDuration();
	class USkeletalMeshComponent* GetWeaponMesh();
	EWeaponGripLeftHand GetWeaponGripTypeLeft();
	float GetWeaponEquipDuration();
	float GetWeaponDamage();
	struct FWeaponData GetWeaponConfig();
	EWeaponClass GetWeaponClassEnum();
	struct FName GetWeaponAttachmentPoint(EWeaponAttachmentSlotID SlotID, const struct FName& Tag);
	struct FWeaponAttachmentData GetWeaponAttachmentData(EWeaponAttachmentSlotID SlotID);
	TArray<struct FWeaponAttachmentAssetData> GetWeaponAttachmentAssetDatas();
	struct FWeaponAttachmentAssetData GetWeaponAttachmentAsset(EWeaponAttachmentSlotID SlotID);
	float GetWeaponAnimationKick();
	EThrownWeaponType GetThrownType();
	struct FVector GetSwayModifier();
	float GetStanceSwayModifier(EAnimStance Stance);
	class UAnimMontage* GetRecoilMontage();
	class ATslCharacter* GetPawnOwner();
	struct FVector GetLowerRailOffset();
	struct FText GetItemName();
	bool GetDoGripPose();
	TArray<class UAsyncStaticMeshComponent*> GetAttachedMesh();
	EAnimWeaponType GetAnimWeaponType();
	TArray<struct FWeaponAttachmentData> GetAllWeaponAttachmentData();
	TArray<struct FWeaponAttachmentAssetData> GetAllWeaponAttachmentAssets();
	void ClientInitByReconnection(bool bIsArmed);
	void AttachWeaponToSlot(int SlotIndex);
	void AttachWeaponToMesh();
};


// Class TslGame.WeaponItem
// 0x0050 (0x02C8 - 0x0278)
class UWeaponItem : public UEquipableItem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0278(0x0008) MISSED OFFSET
	class UClass*                                      WeaponType;                                               // 0x0280(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AmmoCount;                                                // 0x0288(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AmmoPerClip;                                              // 0x028C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FWeaponAttachmentTagData>            AttachmentTagData;                                        // 0x0290(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       WeaponTag;                                                // 0x02A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAttachableItem*>                     AttachedItems;                                            // 0x02A8(0x0010) (Net, ZeroConstructor, Transient)
	EFiringMode                                        FiringMode;                                               // 0x02B8(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02B9(0x0007) MISSED OFFSET
	class ATslWeapon*                                  EquippedWeapon;                                           // 0x02C0(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xbbb04b49);
		return ptr;
	}


	void SetFiringMode(EFiringMode fMode);
	bool IsAttachable(class UAttachableItem* Item);
	bool HasAttachmentSlot(EWeaponAttachmentSlotID SlotID);
	EFiringMode GetFiringMode();
	class ATslWeapon* GetEquippedWeapon();
	class ATslWeapon* GetDefaultWeaponObject();
	class UAttachableItem* GetAttachedItem(EWeaponAttachmentSlotID SlotID);
	int GetAttachableItemCount();
	TArray<class UAttachableItem*> GetAllAttachedItems();
	class UAttachableItem* DetachItem(EWeaponAttachmentSlotID SlotID);
	bool AttachItem(class UAttachableItem* Item);
};


// Class TslGame.RandomlyGeneratableItem
// 0x0068 (0x0228 - 0x01C0)
class URandomlyGeneratableItem : public UItem
{
public:
	struct FString                                     RandomExpression;                                         // 0x01C0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bOpenByKey : 1;                                           // 0x01D0(0x0001) (Edit)
	unsigned char                                      bOpenByPoint : 1;                                         // 0x01D0(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01D1(0x0007) MISSED OFFSET
	TAssetPtr<class UClass>                            OpenKeyItem;                                              // 0x01D8(0x0020) (Edit)
	int                                                OpenKeyItemCount;                                         // 0x01F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PointOpenPrice;                                           // 0x01FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExchangeBundleId;                                         // 0x0200(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0204(0x0004) MISSED OFFSET
	TArray<struct FLobbyItemBundle>                    BundleList;                                               // 0x0208(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    ReferenceItems;                                           // 0x0218(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xad7dd245);
		return ptr;
	}

};


// Class TslGame.UseByPickupItem
// 0x0000 (0x01C0 - 0x01C0)
class UUseByPickupItem : public UItem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd8dd976b);
		return ptr;
	}

};


// Class TslGame.ItemSpawnProcessor
// 0x0010 (0x0038 - 0x0028)
class UItemSpawnProcessor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd84120f2);
		return ptr;
	}


	void ProcessSpawnItem(class UItemSpotGroupComponent* Spawner);
	void ProcessGroup(class UItemSpotGroupComponent* SpotGroup, TArray<class UItemSpotComponent*> Spots);
	bool CheckItemGroup(class UItemSpotGroupComponent* SpotGroup);
};


// Class TslGame.SpawnTableItemSpawnProcessor
// 0x0F30 (0x0F68 - 0x0038)
class USpawnTableItemSpawnProcessor : public UItemSpawnProcessor
{
public:
	TArray<struct FItemSpotGroupTypeProperty>          RawSpotGroupProperties;                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UDataTable*                                  RawItemSpawnDataTable;                                    // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  RawItemSpawnTogetherDataTable;                            // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xEB8];                                     // 0x0058(0x0EB8) MISSED OFFSET
	bool                                               bUseActorSpawn;                                           // 0x0F10(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x57];                                      // 0x0F11(0x0057) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xfa81e6f1);
		return ptr;
	}

};


// Class TslGame.ItemSpot
// 0x0008 (0x03B8 - 0x03B0)
class AItemSpot : public AActor
{
public:
	class UItemSpotGroupComponent*                     SpotGroupComponent;                                       // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x637ea2dd);
		return ptr;
	}

};


// Class TslGame.ItemSpotComponent
// 0x0010 (0x0400 - 0x03F0)
class UItemSpotComponent : public USceneComponent
{
public:
	EItemSpotType                                      ItemSpotType;                                             // 0x03F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x03F1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xda516f5e);
		return ptr;
	}

};


// Class TslGame.ItemSpotGroupComponent
// 0x0010 (0x0400 - 0x03F0)
class UItemSpotGroupComponent : public USceneComponent
{
public:
	EItemSpotGroupType                                 SpotGroupType;                                            // 0x03F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x03F1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xc56aa9bf);
		return ptr;
	}

};


// Class TslGame.ItemStudio
// 0x0060 (0x0410 - 0x03B0)
class AItemStudio : public AActor
{
public:
	struct FName                                       CameraSocketName;                                         // 0x03B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTextureRenderTarget2D*                      TextureTarget;                                            // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxViewDistance;                                          // 0x03C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	class UCameraComponent*                            CameraComponent;                                          // 0x03C8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCaptureComponent;                                    // 0x03D0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET
	struct FTransform                                  DefaultCameraSocketTransform;                             // 0x03E0(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xc37c8117);
		return ptr;
	}


	void UpdateComponentToWorld(class UMeshComponent* Mesh);
	void SetTextureRenderTarget(class UTextureRenderTarget2D* NewTextureTarget);
	void SetItem(class UItem* Item);
	void AddYaw(float Value);
};


// Class TslGame.ItemToolTipWidget
// 0x0000 (0x0240 - 0x0240)
class UItemToolTipWidget : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x2e43d9ee);
		return ptr;
	}


	void UpdateVicinityOrInventorySlotItemToolTip(class UEquipableItem* EquipableItem, class UEquipableItem* EquipmentSlotItem);
	void UpdateToolTipBySlotInterface(const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& Container);
	void UpdateSlotInfo(const TScriptInterface<class USlotInterface>& SlotInterface);
	void UpdateEquipmentSlotItemToolTip(class UEquipableItem* EquipableItem);
};


// Class TslGame.LevelAttribute
// 0x0028 (0x03D8 - 0x03B0)
class ALevelAttribute : public AInfo
{
public:
	int                                                NumMapBlock;                                              // 0x03B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FBox2D                                      MapRect2D;                                                // 0x03B4(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, Net)
	class UMaterialInterface*                          MapImageMaterial;                                         // 0x03C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x98446dfe);
		return ptr;
	}

};


// Class TslGame.LobbyItemBundleIdPublisher
// 0x0028 (0x0050 - 0x0028)
class ULobbyItemBundleIdPublisher : public UObject
{
public:
	struct FString                                     LobbyItemPath;                                            // 0x0028(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xba1ad3be);
		return ptr;
	}

};


// Class TslGame.LobbyLink
// 0x00A8 (0x00D0 - 0x0028)
class ULobbyLink : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0028(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x9c0d7950);
		return ptr;
	}

};


// Class TslGame.LobbyWidget
// 0x0000 (0x0240 - 0x0240)
class ULobbyWidget : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xda1e5aa4);
		return ptr;
	}


	void GameStateChanging(const struct FName& NewState, const struct FName& OldState);
};


// Class TslGame.MatchPreparer
// 0x0030 (0x0058 - 0x0028)
class UMatchPreparer : public UObject
{
public:
	int                                                WarmupTime;                                               // 0x0028(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                WarmupTimeInPIE;                                          // 0x002C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xad8ba25a);
		return ptr;
	}


	void TimerGameStartCountDown();
};


// Class TslGame.AirborneMatchPreparer
// 0x0048 (0x00A0 - 0x0058)
class UAirborneMatchPreparer : public UMatchPreparer
{
public:
	class UClass*                                      AircraftClass;                                            // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ATransportAircraftVehicle*>           Aircrafts;                                                // 0x0060(0x0010) (ZeroConstructor, Transient)
	int                                                AircraftCount;                                            // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AircraftCapacityOverride;                                 // 0x0074(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              AircraftAltitude;                                         // 0x0078(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EndThetaDegree;                                           // 0x007C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AircraftIntervalDistance;                                 // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0084(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x93ac6d3c);
		return ptr;
	}


	void AllowDealDamage();
};


// Class TslGame.NormalMatchPreparer
// 0x0018 (0x0070 - 0x0058)
class UNormalMatchPreparer : public UMatchPreparer
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET
	int                                                AvailablePlayerStartCount;                                // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x1551c45d);
		return ptr;
	}

};


// Class TslGame.MaterialMergeSettings
// 0x0080 (0x00A8 - 0x0028)
class UMaterialMergeSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	class UMaterial*                                   MasterMaterial;                                           // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   MergedMaterial;                                           // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FMaterialMergerParameters>           ParameterList;                                            // 0x0090(0x0010) (Edit, ZeroConstructor)
	bool                                               bUpdateParameterList;                                     // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa789fce2);
		return ptr;
	}

};


// Class TslGame.ModeController
// 0x0000 (0x04A8 - 0x04A8)
class AModeController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x51013e55);
		return ptr;
	}


	void SendSystemMessageToAll(ESystemMessageType MessageType, const struct FText& Message, float MessageDuration);
	bool IsPlayInEditor();
	bool HandleServerAdminBlueprint(const struct FString& AdminCommand);
	class ATslGameState* GetGameState();
	class ATslGameMode* GetGameMode();
	bool CanDealDamage(class ATslPlayerState* DamageInstigator, class ATslPlayerState* DamagedPlayer);
};


// Class TslGame.BattleRoyaleModeController
// 0x0090 (0x0538 - 0x04A8)
class ABattleRoyaleModeController : public AModeController
{
public:
	TArray<struct FBattleRoyalePoisionGasData>         NormalPoisonGasDataArray;                                 // 0x04A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FBattleRoyalePoisionGasData>         FastPoisonGasDataArray;                                   // 0x04B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	int                                                FastZonePlayerCount;                                      // 0x04C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              BattleRoyaleZoneTypeCheckTime;                            // 0x04CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      PoisonWarningTime;                                        // 0x04D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              WaterVolumeRayHeight;                                     // 0x04E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x04E4(0x000C) MISSED OFFSET
	TArray<class ATslPhysicsVolume*>                   OceanPhysicsVolume;                                       // 0x04F0(0x0010) (ZeroConstructor, Transient)
	TArray<class ATslPassBluezoneArea*>                PassBluezoneAreas;                                        // 0x0500(0x0010) (ZeroConstructor, Transient)
	TArray<class ATslPassBlueZoneAreaRectangle*>       PassBluezoneAreasRectangle;                               // 0x0510(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0520(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb36a2369);
		return ptr;
	}


	bool SetNextGasInBlackboard();
	void InitRadius();
	float GetPoisonGasDamagePerSecond(float CharaterToCenterDistance, float SafetyZoneRadius, float PoisonGasWarningRadius);
	int GetMaxPhaseCount();
};


// Class TslGame.CarePackageController
// 0x0030 (0x04D8 - 0x04A8)
class ACarePackageController : public AModeController
{
public:
	class UClass*                                      AircraftCarePackageClass;                                 // 0x04A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   StartDelay;                                               // 0x04B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SpawnInterval;                                            // 0x04B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingHeight;                                             // 0x04C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CarePackageLifeTime;                                      // 0x04C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WhiteZoneSpawnInnerRate;                                  // 0x04C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DropAreaRate;                                             // 0x04CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x39f86d51);
		return ptr;
	}


	struct FVector SpawnAircraftCarePackageCustom(const struct FVector& DropLocation);
	struct FVector SpawnAircraftCarePackage(bool CopyIntersectionInfo);
	bool SetNextCarePackageInBlackboard();
	void InitCarePackageSetting();
	float GetSpawnInterval();
};


// Class TslGame.RedZoneController
// 0x00A8 (0x0550 - 0x04A8)
class ARedZoneController : public AModeController
{
public:
	class UClass*                                      BombTemplateClass;                                        // 0x04A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartDelay;                                               // 0x04B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   NextCreateRedZoneInterval;                                // 0x04B4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              BombingDelay;                                             // 0x04BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x04C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   LimitExceptExplosionRadius;                               // 0x04C4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              ExceptExplosionRadius;                                    // 0x04CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BombProjectileDelayTime;                                  // 0x04D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RedZoneDuration;                                          // 0x04D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   BombingInterval;                                          // 0x04D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              RedZoneLifeTime;                                          // 0x04E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReyStartHeight;                                           // 0x04E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RedZoneRadiusOffsetRate;                                  // 0x04E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET
	struct FText                                       RedZoneStartText;                                         // 0x04F0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	int                                                RedZoneProjectileCount;                                   // 0x0508(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFGSquircularMapping;                                     // 0x050C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x050D(0x0003) MISSED OFFSET
	float                                              RayCheckAroundLength;                                     // 0x0510(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0514(0x0004) MISSED OFFSET
	class UClass*                                      BeginServerPaticleClass;                                  // 0x0518(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ATslServerParticle*                          BeginServerPaticle;                                       // 0x0520(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              BeginSoundDelay;                                          // 0x0528(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x14];                                      // 0x052C(0x0014) MISSED OFFSET
	TArray<class ATslPhysicsVolume*>                   OceanPhysicsVolume;                                       // 0x0540(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xc14987eb);
		return ptr;
	}


	void SpawnBombProjectile();
	bool SetNextRedZoneInBlackboard();
	void OnBombingStart(const struct FVector& RedZonePosition);
	void InitRedZoneSetting();
	float GetRandomBombingInterval();
};


// Class TslGame.MutableCharacter
// 0x0050 (0x0830 - 0x07E0)
class AMutableCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x07E0(0x0020) MISSED OFFSET
	EGender                                            Gender;                                                   // 0x0800(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0801(0x0007) MISSED OFFSET
	class UCustomizableObjectInstance*                 CustomizableObjectInstance;                               // 0x0808(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTslCustomizableSkeletalComponent*           CustomizableSkeletalComponent;                            // 0x0810(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	TArray<unsigned char>                              InstanceDescriptor;                                       // 0x0818(0x0010) (Edit, Net, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0828(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa8399d7f);
		return ptr;
	}


	void UpdateAppearence();
	void OnRep_InstanceDescriptor();
	EGender GetGender();
};


// Class TslGame.LobbyCharacter
// 0x0060 (0x0890 - 0x0830)
class ALobbyCharacter : public AMutableCharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0830(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHost;                                                   // 0x0838(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbySceneChanged;                                      // 0x0848(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bHasJacket : 1;                                           // 0x0858(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsReady : 1;                                             // 0x0858(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsHost : 1;                                              // 0x0858(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsInCustomizationScene : 1;                              // 0x0858(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x37];                                      // 0x0859(0x0037) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb822a24d);
		return ptr;
	}


	int GetSlotId();
	struct FString GetNickName();
	struct FString GetNetId();
};


// Class TslGame.TestMutableCharacter
// 0x0000 (0x0830 - 0x0830)
class ATestMutableCharacter : public AMutableCharacter
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd9631703);
		return ptr;
	}

};


// Class TslGame.TslVaultingHelper
// 0x0010 (0x03C0 - 0x03B0)
class ATslVaultingHelper : public AActor
{
public:
	class USceneComponent*                             RootSceneComponent;                                       // 0x03B0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ActorAttachScene;                                         // 0x03B8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xfe1e0045);
		return ptr;
	}


	struct FVector GetActorAttachScene();
};


// Class TslGame.TslWeapon_Gun
// 0x0310 (0x0AE8 - 0x07D8)
class ATslWeapon_Gun : public ATslWeapon
{
public:
	bool                                               bSpawnBulletFromBarrel;                                   // 0x07D8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x07D9(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               VariableZoomStepAk;                                       // 0x07E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               ZeroingStepAk;                                            // 0x07E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07F0(0x0004) MISSED OFFSET
	int                                                AmmoPerClip;                                              // 0x07F4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                CurrentAmmoInClip;                                        // 0x07F8(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                CurrentZeroLevel;                                         // 0x07FC(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bIsHipped : 1;                                            // 0x0800(0x0001) (Net, Transient)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0801(0x0003) MISSED OFFSET
	float                                              TimeBetweenShots;                                         // 0x0804(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0808(0x0028) MISSED OFFSET
	int                                                FiringModeIndex;                                          // 0x0830(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x84];                                      // 0x0834(0x0084) MISSED OFFSET
	struct FWeaponGunData                              WeaponGunConfig;                                          // 0x08B8(0x0090) (Edit, DisableEditOnInstance)
	struct FWeaponDeviationData                        WeaponDeviationConfig;                                    // 0x0948(0x0044) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData05[0x4];                                       // 0x098C(0x0004) MISSED OFFSET
	struct FWeaponGunAnim                              WeaponGunAnim;                                            // 0x0990(0x00F0) (Edit, DisableEditOnInstance)
	struct FWeaponPPSettings                           WeaponGunPostprocessSettings;                             // 0x0A80(0x0050) (Edit, DisableEditOnInstance)
	struct FName                                       ScopingAttachPoint;                                       // 0x0AD0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ScopingFocusPoint;                                        // 0x0AD8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLoackLoadedAmmo;                                         // 0x0AE0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0AE1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x3c430512);
		return ptr;
	}


	bool WeaponCycleDone();
	void StopReloadAnimByOne();
	void StartManualFireCycle();
	void SimulateWeaponReload(EWeaponReloadAnimExec ReloadAnimExec);
	void SetWeaponReloadInterrupted(bool bIsInterrupted);
	void SetSpawnBulletFromBarrel(bool DoSpawnBulletFromBarrel);
	void SetFiringMode(EFiringMode FiringMode);
	void ServerStopReload();
	void ServerStopFire();
	void ServerStartReload();
	void ServerStartFire();
	void ServerSetHip(bool bNewIsHipped);
	void ServerSetCurrentZeroLevel(int ZeroLevel);
	void ServerHandleFiring(const struct FHitResult& ExceptTrajectoryHitResult);
	void ServerCancelReload();
	void Server_StartManualFireCycle();
	void ProcessBoltAction();
	void PlayWeaponCycleCameraAnim();
	void PlayLongTailSound();
	void OnRep_TimeBetweenShots(float LastTimeBetweenShots);
	void OnRep_MyPawn();
	void OnRep_FiringModeIndex();
	void OnRep_CurrentZeroLevel(int LastCurrentZeroLevel);
	void OnRep_AttachedItemClasses(TArray<class UClass*> OldVal);
	void OnRep_AmmoCount(int LastCurrentAmmoInClip);
	void OnInventoryUpdated();
	void OnAttachmentScopeLoaded();
	void OnAnimationNotify(const struct FName& NotifyName);
	void ManualFireCycleFinished();
	bool IsWeaponCycleInProgress();
	bool IsReloadInterrupted();
	bool IsReloading();
	class UAnimMontage* GetWeaponTacticalReload();
	struct FWeaponPPSettings GetWeaponPostprocessSettings();
	struct FWeaponPPSettings GetWeaponOrScopePostprocessSettings();
	struct FVector GetWeaponHandOffsetFPP();
	struct FVector GetWeaponHandOffset();
	struct FWeaponGunData GetWeaponGunConfig();
	struct FWeaponGunAnim GetWeaponGunAnimConfig();
	float GetWeaponFullReloadTime();
	float GetWeaponFullRealoadTimeWithAttachments();
	float GetWeaponCurrentRecoilValue();
	float GetWeaponCurrentDeviationValue();
	class UAnimMontage* GetWeaponChargeReload();
	float GetReloadAnimationPlayRate();
	struct FVector GetRecoilADSSocketOffsetScale();
	int GetNumOfFiringMode();
	float GetMovementModifierScope();
	float GetMovementModifierAim();
	int GetMaxAmmo();
	float GetMagOutDuration();
	struct FVector GetMagDropLinearVelocity();
	struct FVector GetMagDropAngularVelocity();
	int GetGripTypeIndex();
	EFiringMode GetFiringMode();
	class UAmmoItem* GetDefaultAmmoObject();
	float GetCurrentDeviation();
	int GetCurrentAmmoInInventory();
	int GetCurrentAmmoInClip();
	int GetCurrentAmmo();
	class UAnimMontage* GetCharacterTacticalReloadFromAttach();
	class UAnimMontage* GetCharacterReloadTacticalMontage();
	class UAnimMontage* GetCharacterReloadChargeMontage();
	class UAnimMontage* GetCharacterReloadByOneStopMontage();
	class UAnimMontage* GetCharacterReloadByOneStartMontage();
	class UAnimMontage* GetCharacterReloadByOneSingleMontage();
	class UBlendSpaceBase* GetCharacterLHGripBlendspace();
	class UBlendSpace1D* GetCharacterGripBlendspace();
	class UAnimMontage* GetCharacterFireSelectorMontage();
	class UAnimMontage* GetCharacterFireMontage();
	class UAnimMontage* GetCharacterFireCycle();
	class UAnimMontage* GetCharacterChargeReloadFromAttach();
	int GetAmmoPerClip();
	class UClass* GetAmmoItemClass();
	float GetADSRecoilKick();
	void ClientStopSimulatingWeaponFire();
	void ClientSimulateWeaponFire(const struct FHitResult& ExceptTrajectoryHitResult);
	void ClientSetFiringMode(EFiringMode FiringMode);
	void ClientNotifyStopReloadByOne();
	void ClientNotifyOutOfAmmo();
	void ClientNotifyAmmo(int InCurrentAmmoInClip);
	void ClientCancelReload();
	void Client_StartManualFireCycle();
	bool CheckMiddlePointCollision();
	void CancelReloadImpl();
	void BroadcastOutOfAmmo();
	void AnimCall_ToggleFireMode();
	void AnimCall_ReloadTacticalWeapon();
	void AnimCall_ReloadChargeWeapon();
	void AnimCall_ReloadByOneStop();
	void AnimCall_FireWeaponCycle();
	void AnimCall_FireWeapon();
};


// Class TslGame.VehicleSeatActor
// 0x0088 (0x0438 - 0x03B0)
class AVehicleSeatActor : public AActor
{
public:
	float                                              ViewPitchMin;                                             // 0x03B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ViewPitchMax;                                             // 0x03B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ViewYawMin;                                               // 0x03B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ViewYawMax;                                               // 0x03BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CurvePitchMax;                                            // 0x03C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 CurvePitchMin;                                            // 0x03C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanOnlyFireWhileAiming;                                  // 0x03D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET
	class UBlendSpaceBase*                             SeatBlendspaceAiming;                                     // 0x03D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           SeatAnimationIdle;                                        // 0x03E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAimOffsetBlendSpace*                        SeatIdleAO;                                               // 0x03E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             TransitionOutBlendspace;                                  // 0x03F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             TransitionInBlendspace;                                   // 0x03F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRestricWeaponUse;                                        // 0x0400(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0401(0x0007) MISSED OFFSET
	TArray<EWeaponClass>                               AllowedWeaponClasses;                                     // 0x0408(0x0010) (Edit, ZeroConstructor)
	bool                                               bUseEntryVelocityRestriction;                             // 0x0418(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	float                                              MaxVelocityForEntry;                                      // 0x041C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ATslCharacter*                               Rider;                                                    // 0x0420(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x0428(0x000C) MISSED OFFSET
	EVehicleAnimType                                   SeatAnimationType;                                        // 0x0434(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0435(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf1b6eb42);
		return ptr;
	}


	void OnRep_Rider();
	bool IsWeaponClassAllowed(EWeaponClass InClass);
	bool IsEntryAllowedByVelocity();
	class UTslVehicleSeatComponent* GetVehicleSeatComponent();
	class APawn* GetVehiclePawn();
	TScriptInterface<class UTslVehicleInterface> GetVehicleInterface();
	EVehicleAnimType GetVehicleAnimType();
	class UBlendSpaceBase* GetTransitionOutBlendspace();
	class UBlendSpaceBase* GetTransitionInBlendspace();
	class UAimOffsetBlendSpace* GetSeatIdleAO();
	class UAnimSequenceBase* GetSeatIdleAnimation();
	class UBlendSpaceBase* GetSeatAimingBlendspace();
	class ATslCharacter* GetRider();
	float GetMinPitchByYaw(float CurrentYaw);
	float GetMaxPitchByYaw(float CurrentYaw);
	bool GetCanFireOnlyWhileAimed();
	struct FText GetAdditionalMessage(class ATslCharacter* Character);
	bool AllowInteract(class ATslCharacter* OtherCharacter);
};


// Class TslGame.WeaponProcessor
// 0x0140 (0x04F0 - 0x03B0)
class AWeaponProcessor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnWeaponProcessorArmed;                                   // 0x03B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF0];                                      // 0x03C8(0x00F0) MISSED OFFSET
	TArray<class ATslWeapon*>                          EquippedWeapons;                                          // 0x04B8(0x0010) (Net, ZeroConstructor, Transient)
	int                                                CurrentWeaponIndex;                                       // 0x04C8(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x24];                                      // 0x04CC(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x409b1fe8);
		return ptr;
	}


	void SimulateUnArmWeapon(int WeaponIndex, bool bNeedAnimation);
	void SimulateArmWeapon(int WeaponIndex, bool bNeedAnimation);
	void ServerUnarmCurrentWeapon(bool bNeedAnimation);
	void ServerArmWeapon(int WeaponIndex, bool bNeedAnimation);
	void OnRep_EquippedWeapons(TArray<class ATslWeapon*> LastEquippedWeapons);
	void OnRep_CurrentWeaponIndex();
	void NotifyWeaponUpdate();
	bool IsUnarmedWeapon(int WeaponIndex);
	bool IsUnarmed();
	class ATslWeapon_Throwable* GetWeaponThrowable();
	int GetWeaponIndex();
	class ATslWeapon_Gun* GetWeaponGun();
	class ATslWeapon* GetWeaponByIndex(int Index);
	class ATslWeapon* GetWeapon();
	int GetUnarmedWeaponIndex();
	class ATslWeapon* GetCurrentWeapon();
	class ATslWeapon* FindWeapon(class UClass* WeaponClass);
	void ClientSetWeaponIndex(int WeaponIndex);
	void ClientInitByReconnection(int InitWeaponIndex);
	void ClientForceRemoveWeapon(int WeaponIndex);
};


// Class TslGame.VaultingData
// 0x0108 (0x0138 - 0x0030)
class UVaultingData : public UDataAsset
{
public:
	float                                              LocationStartNormalScale;                                 // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocationStartZOffset;                                     // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocationEndNormalScale;                                   // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocationEndZOffset;                                       // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsClimb;                                                 // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSlide;                                                 // 0x0041(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	float                                              VaultInitialTimer;                                        // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ApexAdditiveStartTime;                                    // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ApexAdditiveEndTime;                                      // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreApexSpeedScale;                                        // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostApexSpeedScale;                                       // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VaultEndToFallTimerCutoff;                                // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   StartCutoffByDistance_InMap;                              // 0x005C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   StartCutoffByDistance_OutMap;                             // 0x0064(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   StartCutoffBySpeed_InMap;                                 // 0x006C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   StartCutoffBySpeed_OutMap;                                // 0x0074(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   PlayrateBySpeed_InMap_PreApex;                            // 0x007C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   PlayrateBySpeed_OutMap_PreApex;                           // 0x0084(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   PlayrateBySpeed_InMap_PostApex;                           // 0x008C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   PlayrateBySpeed_OutMap_PostApex;                          // 0x0094(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           AnimationSequence;                                        // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           AnimationSequence_Rifle;                                  // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 AnimationCurve;                                           // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   CharLocationInterpSpeedInMap;                             // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   CharLocationInterpSpeedOutMap;                            // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   TimerProgressionByDistanceInMap;                          // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   TimerProgressionByDistanceOutMap;                         // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              TimerProgressionVTimerMax;                                // 0x00D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VaultEndTimerNormal;                                      // 0x00DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VaultEndTimerFall;                                        // 0x00E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharacterPostVaultVelocityScalar;                         // 0x00E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CharacterPostVaultVelocityScalarVector;                   // 0x00E8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CharacterPostVaultVelocityScalarVector_ToFall;            // 0x00F4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimBlendInTime;                                          // 0x0100(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimBlendOutTime;                                         // 0x0104(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanVaultWithWeapon;                                      // 0x0108(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsCancellable;                                           // 0x0109(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x010A(0x0002) MISSED OFFSET
	float                                              MinCancelVTimer;                                          // 0x010C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxCancelVTimer;                                          // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TaskEndVTimer;                                            // 0x0114(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostVaultTimerProgressionScale;                           // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseStaticVTimerDampening;                                // 0x011C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseMappedVTimerDampening;                                // 0x011D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x011E(0x0002) MISSED OFFSET
	float                                              StaticDampeningScalar;                                    // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaticDampeningVTimerMax;                                 // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MappedDampeningScalar;                                    // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MappedDampeningVTimerMax;                                 // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseCustomApexForTimer;                                   // 0x0130(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	float                                              CustomApex;                                               // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x16cd727c);
		return ptr;
	}


	class UAnimSequenceBase* GetVaultAnimation(bool bHasRifle);
	float GetBlendSpeedByDistance(float InDistance);
	float GetAnimationLength();
	class UCurveFloat* GetAnimationCurve();
};


// Class TslGame.TslCharacter
// 0x0F20 (0x1750 - 0x0830)
class ATslCharacter : public AMutableCharacter
{
public:
	class UTslPawnInputBindingComponent*               TslPawnInputBindingComponent;                             // 0x0830(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0838(0x0001) MISSED OFFSET
	bool                                               bPeekLeftToggled;                                         // 0x0839(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPeekRightToggled;                                        // 0x083A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x083B(0x0001) MISSED OFFSET
	TWeakObjectPtr<class ATslPlayerState>              CurrentAttackerPlayerState;                               // 0x083C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ATslPlayerState>              LastAttackedPlayerState;                                  // 0x0844(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4C];                                      // 0x084C(0x004C) MISSED OFFSET
	struct FScriptMulticastDelegate                    NoBagSpaceDelgate;                                        // 0x0898(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x8];                                       // 0x08A8(0x0008) MISSED OFFSET
	TMap<ESlotOffsetType, struct FItemOffsetData>      ItemOffsetConfig;                                         // 0x08B0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x48];                                      // 0x0900(0x0048) MISSED OFFSET
	class AController*                                 LastPossessedController;                                  // 0x0948(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UAkAudioBank*>                        Banks;                                                    // 0x0950(0x0010) (ZeroConstructor, Transient)
	class UBuffComponet*                               BuffComponent;                                            // 0x0960(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x40];                                      // 0x0968(0x0040) MISSED OFFSET
	ECastAnim                                          Remote_CastAnim;                                          // 0x09A8(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x09A9(0x0007) MISSED OFFSET
	class ATslCharacter*                               RevivingCharacter;                                        // 0x09B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATslPlayerState*                             GroggyPlayerInstigator;                                   // 0x09B8(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<class UCameraComponent*, float>               SavedCameraFOV;                                           // 0x09C0(0x0050) (ZeroConstructor)
	class UCameraComponent*                            SavedCamera;                                              // 0x0A10(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData07[0x20];                                      // 0x0A18(0x0020) MISSED OFFSET
	int                                                CurrentVariableZoomLevel;                                 // 0x0A38(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              BuffFinalSpreadFactor;                                    // 0x0A3C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class AInventoryFacade*                            InventoryFacade;                                          // 0x0A40(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class AWeaponProcessor*                            WeaponProcessor;                                          // 0x0A48(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      CharacterState;                                           // 0x0A50(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bIsScopingRemote : 1;                                     // 0x0A51(0x0001) (Net, Transient)
	unsigned char                                      bIsAimingRemote : 1;                                      // 0x0A51(0x0001) (Net, Transient)
	unsigned char                                      bIsFirstPersonRemote : 1;                                 // 0x0A51(0x0001) (Net, Transient)
	unsigned char                                      bIsInVehicleRemote : 1;                                   // 0x0A51(0x0001) (Net, Transient)
	unsigned char                                      UnknownData08[0x1E];                                      // 0x0A52(0x001E) MISSED OFFSET
	class UClass*                                      DropPackageType;                                          // 0x0A70(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SoundClearAk;                                             // 0x0A78(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               RemoteVolumeControlOn;                                    // 0x0A80(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               RemoteVolumeControlOff;                                   // 0x0A88(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 CameraFovRatioCurve;                                      // 0x0A90(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeavyFallVerticalVelocityThreshold;                       // 0x0A98(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtremeFallVerticalVelocityThreshold;                     // 0x0A9C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProneFallVerticalVelocityThreshold;                       // 0x0AA0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeavyFallMovementStopTime;                                // 0x0AA4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtremeFallMovementStopTime;                              // 0x0AA8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0AAC(0x0004) MISSED OFFSET
	float                                              Punch_Damage;                                             // 0x0AB0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PunchHeavy_Damage;                                        // 0x0AB4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      UnarmedDamageType;                                        // 0x0AB8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ZombieDamageType;                                         // 0x0AC0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Punch_Distance;                                           // 0x0AC8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PunchHeavy_Distance;                                      // 0x0ACC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Punch_Radius;                                             // 0x0AD0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PunchHeavy_Radius;                                        // 0x0AD4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Punch_InitialLocation;                                    // 0x0AD8(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0AE4(0x0004) MISSED OFFSET
	struct FVector                                     LeanLeftTraceOffset;                                      // 0x0AE8(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeanRightTraceOffset;                                     // 0x0AF4(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x8];                                       // 0x0B00(0x0008) MISSED OFFSET
	float                                              LeanOffset_Stand;                                         // 0x0B08(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeanOffset_Crouch;                                        // 0x0B0C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeanOffset_Prone;                                         // 0x0B10(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x10];                                      // 0x0B14(0x0010) MISSED OFFSET
	float                                              Sprint_MaxSpeed;                                          // 0x0B24(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Sprint_MinSpeed;                                          // 0x0B28(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintingFOV;                                             // 0x0B2C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumBreathToHold;                                      // 0x0B30(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0B34(0x0004) MISSED OFFSET
	struct FName                                       SwimPoint;                                                // 0x0B38(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwimableWaterDepth;                                       // 0x0B40(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrouchWaterDepth;                                         // 0x0B44(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProneWaterDepth;                                          // 0x0B48(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterFloorDetectionLength;                                // 0x0B4C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwimMaxControllerPitch;                                   // 0x0B50(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnderwaterSwimGapFromSurface;                             // 0x0B54(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SwimTrailEffectClass;                                     // 0x0B58(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ATslParticle*                                SwimTrailEffect;                                          // 0x0B60(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       ParticleSocket_SwimIdleRipple;                            // 0x0B68(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SwimIdleRippleEffectClass;                                // 0x0B70(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                maxNumSwimIdleRippleEffect;                               // 0x0B78(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwimIdleRippleOffsetFromSurface;                          // 0x0B7C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x10];                                      // 0x0B80(0x0010) MISSED OFFSET
	class UCharacterBreathComponent*                   BreathComponent;                                          // 0x0B90(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FName                                       BreathPoint;                                              // 0x0B98(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      UnderwaterChokeEffectClass;                               // 0x0BA0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ATslParticle*                                UnderwaterChokeEffect;                                    // 0x0BA8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              IndoorCheckDistance;                                      // 0x0BB0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0BB4(0x0004) MISSED OFFSET
	float                                              IndoorCheckHalfConeAngle;                                 // 0x0BB8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IndoorCheckSuccessRate;                                   // 0x0BBC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                IndoorCheckSamplingQueueSize;                             // 0x0BC0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                IndoorCheckAccuracyMultiplier;                            // 0x0BC4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x20];                                      // 0x0BC8(0x0020) MISSED OFFSET
	float                                              FootSoundObstructionCheckInterval;                        // 0x0BE8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FootSoundObstructionCheckMaxDistance;                     // 0x0BEC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x8];                                       // 0x0BF0(0x0008) MISSED OFFSET
	struct FName                                       ParachuteAttachPoint;                                     // 0x0BF8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReleasingParachuteAltitude;                               // 0x0C00(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForceReleasingParachuteAltitude;                          // 0x0C04(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumParachuteAltitude;                                 // 0x0C08(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x0C0C(0x0004) MISSED OFFSET
	class UClass*                                      ParachuteType;                                            // 0x0C10(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bParachuteLandingAssist;                                  // 0x0C18(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x0C19(0x0007) MISSED OFFSET
	class UCastComponent*                              CastComponent;                                            // 0x0C20(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStanceComponent*                            StanceComponent;                                          // 0x0C28(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UHackReporterComponent*                      HackReporterComponent;                                    // 0x0C30(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bAcceptHitsWhileNotAlive;                                 // 0x0C38(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x0C39(0x0003) MISSED OFFSET
	float                                              SimulatedHit_Initial;                                     // 0x0C3C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SimulatedHit_RecoveryPerSecond;                           // 0x0C40(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SimulatedHit_Value;                                       // 0x0C44(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SimulatedHit_ImpulsePower;                                // 0x0C48(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SimlatedHit_PunchLightPower;                              // 0x0C4C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SimlatedHit_PunchHeavyPower;                              // 0x0C50(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x0C54(0x0004) MISSED OFFSET
	class UClass*                                      PunchImpactEffect;                                        // 0x0C58(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x28];                                      // 0x0C60(0x0028) MISSED OFFSET
	class UCharacterWeaponAnimInfoComponent*           WeaponAnimInfoComponent;                                  // 0x0C88(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Primary;                               // 0x0C90(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Secondary;                             // 0x0C98(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Sidearm;                               // 0x0CA0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Melee;                                 // 0x0CA8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Thrown;                                // 0x0CB0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UClass*                                      FootStepEffectClassInDirt;                                // 0x0CB8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FootStepEffectClassInGrass;                               // 0x0CC0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FootStepEffectClassInRock;                                // 0x0CC8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FootStepEffectClassInSand;                                // 0x0CD0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ParticleSocketFootLeft;                                   // 0x0CD8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ParticleSocketFootRight;                                  // 0x0CE0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FootStepEffectClassInWater;                               // 0x0CE8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ATslParticle*                                FootStepEffect;                                           // 0x0CF0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ATeam*                                       Team;                                                     // 0x0CF8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x20];                                      // 0x0D00(0x0020) MISSED OFFSET
	class UTslViewTargetTempComponent*                 ViewTargetTempComponent;                                  // 0x0D20(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UTslCharacterValidateLocationComponent*      ValidateLocationComponent;                                // 0x0D28(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UTslThrowableTrajectoryViewComponent*        ThrowableTrajectoryViewComponent;                         // 0x0D30(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData24[0x20];                                      // 0x0D38(0x0020) MISSED OFFSET
	struct FString                                     CharacterNetId;                                           // 0x0D58(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     CharacterName;                                            // 0x0D68(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       HeadAttachPoint;                                          // 0x0D78(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraHeadHideDistance;                                   // 0x0D80(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0xC];                                       // 0x0D84(0x000C) MISSED OFFSET
	struct FVector                                     CrouchedCameraMove;                                       // 0x0D90(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PronedCameraMove;                                         // 0x0D9C(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GroggyCameraMove;                                         // 0x0DA8(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              CrouchedCameraMoveSpeed;                                  // 0x0DB4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PronedCameraMoveSpeed;                                    // 0x0DB8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroggyCameraMoveSpeed;                                    // 0x0DBC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x48];                                      // 0x0DC0(0x0048) MISSED OFFSET
	struct FTakeHitInfo                                LastTakeHitInfo;                                          // 0x0E08(0x0058) (Net, Transient)
	unsigned char                                      UnknownData27[0x4];                                       // 0x0E60(0x0004) MISSED OFFSET
	float                                              TargetingSpeedModifier;                                   // 0x0E64(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ETargetingType                                     TargetingType;                                            // 0x0E68(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x0E69(0x0003) MISSED OFFSET
	float                                              Stand_RunningSpeedModifier;                               // 0x0E6C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Stand_SprintingSpeedModifier;                             // 0x0E70(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Stand_SprintingBigGunModifier;                            // 0x0E74(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Stand_SprintingRifleModifier;                             // 0x0E78(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Stand_SprintingSmallGunMOdifier;                          // 0x0E7C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Crouch_RunningSpeedModifier;                              // 0x0E80(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Crouch_SprintingSpeedModifier;                            // 0x0E84(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Prone_RunningSpeedModifier;                               // 0x0E88(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Prone_SprintingSpeedModifier;                             // 0x0E8C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReviveCastingTime;                                        // 0x0E90(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bWantsToRun : 1;                                          // 0x0E94(0x0001) (Net, Transient)
	unsigned char                                      bWantsToSprint : 1;                                       // 0x0E94(0x0001) (Net, Transient)
	unsigned char                                      bWantsToSprintingAuto : 1;                                // 0x0E94(0x0001) (Net, Transient)
	unsigned char                                      bWantsToRollingLeft : 1;                                  // 0x0E94(0x0001) (Net, Transient)
	unsigned char                                      bWantsToRollingRight : 1;                                 // 0x0E94(0x0001) (Net, Transient)
	unsigned char                                      bIsPeekLeft : 1;                                          // 0x0E94(0x0001) (Net, Transient)
	unsigned char                                      bIsPeekRight : 1;                                         // 0x0E94(0x0001) (Net, Transient)
	unsigned char                                      IgnoreRotation : 1;                                       // 0x0E94(0x0001) (Net, Transient)
	unsigned char                                      bIsGroggying : 1;                                         // 0x0E95(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditConst)
	unsigned char                                      bIsThirdPerson : 1;                                       // 0x0E95(0x0001) (Net, Transient)
	unsigned char                                      UnknownData29 : 1;                                        // 0x0E95(0x0001)
	unsigned char                                      bIsReviving : 1;                                          // 0x0E95(0x0001) (Net, Transient)
	unsigned char                                      bIsWeaponObstructed : 1;                                  // 0x0E95(0x0001) (Net, Transient)
	unsigned char                                      bIsCoatEquipped : 1;                                      // 0x0E95(0x0001) (Net, Transient)
	unsigned char                                      bIsZombie : 1;                                            // 0x0E95(0x0001) (Net, Transient)
	unsigned char                                      bIsThrowHigh : 1;                                         // 0x0E95(0x0001) (Net, Transient)
	unsigned char                                      UnknownData30[0x2];                                       // 0x0E96(0x0002) MISSED OFFSET
	bool                                               bUseRightShoulderAiming;                                  // 0x0E98(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x0E99(0x0003) MISSED OFFSET
	struct FRotator                                    GunDirectionSway;                                         // 0x0E9C(0x000C) (Net, Transient, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   AimOffsets;                                               // 0x0EA8(0x000C) (Net, Transient)
	struct FVector_NetQuantizeNormal                   LastAimOffsets;                                           // 0x0EB4(0x000C)
	unsigned char                                      UnknownData32[0xC];                                       // 0x0EC0(0x000C) MISSED OFFSET
	float                                              AimoffsetsLastRepTime;                                    // 0x0ECC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData33[0x2C];                                      // 0x0ED0(0x002C) MISSED OFFSET
	struct FRotator                                    CurrentAutoRotator;                                       // 0x0EFC(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoPitchValueMax;                                        // 0x0F08(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoPitchBlendSpeed;                                      // 0x0F0C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData34[0x8];                                       // 0x0F10(0x0008) MISSED OFFSET
	class UCurveFloat*                                 Curve_JumpCamera;                                         // 0x0F18(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                Curve_FPPCameraOffsetByFOV;                               // 0x0F20(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_DBNOFadeOut;                                        // 0x0F28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DBNOFadeOutLerpSpeed;                                     // 0x0F30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData35[0x4];                                       // 0x0F34(0x0004) MISSED OFFSET
	class UCurveFloat*                                 Curve_StandWalk;                                          // 0x0F38(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_StandRun;                                           // 0x0F40(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_StandSprint;                                        // 0x0F48(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_CrouchWalk;                                         // 0x0F50(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_CrouchRun;                                          // 0x0F58(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_CrouchSprint;                                       // 0x0F60(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_ProneWalk;                                          // 0x0F68(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_ProneRun;                                           // 0x0F70(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_ProneSprint;                                        // 0x0F78(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_Swim;                                               // 0x0F80(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_UnderwaterSwim;                                     // 0x0F88(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_StandScope;                                         // 0x0F90(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_CrouchScope;                                        // 0x0F98(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_ProneScope;                                         // 0x0FA0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_StandAim;                                           // 0x0FA8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_CrouchAim;                                          // 0x0FB0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_ProneAim;                                           // 0x0FB8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_DBNO;                                               // 0x0FC0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_GroundAngle;                                        // 0x0FC8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                Curve_WeaponSway;                                         // 0x0FD0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_TurningLerp;                                        // 0x0FD8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_TurningLerpLocomotion;                              // 0x0FE0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DirectionalSpeedModifier;                                 // 0x0FE8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PointDamageForceMultiplier;                               // 0x0FEC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointDamageForce_MapMin;                                  // 0x0FF0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointDamageForce_MapMax;                                  // 0x0FF4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RadialDamageForceMultiplier;                              // 0x0FF8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ERadialImpulseFalloff>                 RadialDamageFalloffType;                                  // 0x0FFC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData36[0x3];                                       // 0x0FFD(0x0003) MISSED OFFSET
	class UAnimMontage*                                RollLeftAnim;                                             // 0x1000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                RollRightAnim;                                            // 0x1008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCharacterAnim                              CharacterAnim;                                            // 0x1010(0x0010) (Edit, DisableEditOnInstance)
	class AController*                                 NetOwnerController;                                       // 0x1020(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LeanAlphaSpeed;                                           // 0x1028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnSpeedHip;                                             // 0x102C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnSpeedAimed;                                           // 0x1030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnSpeedOverLimit;                                       // 0x1034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTurnAngleHip;                                          // 0x1038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTurnAngleAim;                                          // 0x103C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnLinearEndThreshold;                                   // 0x1040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNonLinearTurn;                                           // 0x1044(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData37[0x3];                                       // 0x1045(0x0003) MISSED OFFSET
	float                                              TurnNonLinearEndThreshold;                                // 0x1048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnNonLinearInterpSpeed;                                 // 0x104C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CapsuleTurnInterpSpeedLocomotion;                         // 0x1050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CapsuleTurnInterpSpeedLocomotionSprint;                   // 0x1054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CapsuleTurnInterpSpeedLocomotionProne;                    // 0x1058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CapsuleTurnInterpSpeedStationary;                         // 0x105C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData38[0x18];                                      // 0x1060(0x0018) MISSED OFFSET
	struct FName                                       FPPCameraBoneName;                                        // 0x1078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TPPCameraBoneName;                                        // 0x1080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData39[0xC];                                       // 0x1088(0x000C) MISSED OFFSET
	float                                              AimStateDefaultTime;                                      // 0x1094(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimStateReturnTime;                                       // 0x1098(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimStateDrawTime;                                         // 0x109C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData40[0x8];                                       // 0x10A0(0x0008) MISSED OFFSET
	bool                                               bAimStateActive;                                          // 0x10A8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bFreeMode;                                                // 0x10A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData41[0x6];                                       // 0x10AA(0x0006) MISSED OFFSET
	float                                              CanGroggyDamageTime;                                      // 0x10B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData42[0x4];                                       // 0x10B4(0x0004) MISSED OFFSET
	struct FText                                       GroggyStartText;                                          // 0x10B8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       GroggyCancelText;                                         // 0x10D0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       GroggyFinishText;                                         // 0x10E8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              GamepadRunningValue;                                      // 0x1100(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData43[0xC];                                       // 0x1104(0x000C) MISSED OFFSET
	struct FRotator                                    BlendTargetViewRotation;                                  // 0x1110(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DesiredDirection;                                         // 0x111C(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData44[0x4];                                       // 0x1124(0x0004) MISSED OFFSET
	class UClass*                                      InvulnerablilityBuff;                                     // 0x1128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInvulnerablilityEffectVisible;                           // 0x1130(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData45[0x7];                                       // 0x1131(0x0007) MISSED OFFSET
	TArray<class UClass*>                              ComponentsToDestroyOnDedicatedServer;                     // 0x1138(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FZombieCustomizationData>            ZombieCustomizationData;                                  // 0x1148(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsHoldingBreath;                                         // 0x1158(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData46[0x3];                                       // 0x1159(0x0003) MISSED OFFSET
	float                                              Health;                                                   // 0x115C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              HealthMax;                                                // 0x1160(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              GroggyHealth;                                             // 0x1164(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              GroggyHealthMax;                                          // 0x1168(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              DecreaseGroggyHealthPerSecond;                            // 0x116C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GroggyDamageWeight;                                       // 0x1170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData47[0x4];                                       // 0x1174(0x0004) MISSED OFFSET
	class UClass*                                      GroggyDamageType;                                         // 0x1178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealthByRevive;                                           // 0x1180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData48[0x4];                                       // 0x1184(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               GroggyToDieAkEvent;                                       // 0x1188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoostGauge;                                               // 0x1190(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              BoostGaugeMax;                                            // 0x1194(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              DecreaseTimerSecond;                                      // 0x1198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DecreaseBoostGaugeByTime;                                 // 0x119C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBuffWithBoostGauge>                 BuffWithBoostGauge;                                       // 0x11A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      MedKitClass;                                              // 0x11B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FirstAidClass;                                            // 0x11B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BandageClass;                                             // 0x11C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AdrenalineClass;                                          // 0x11C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PainKillerClass;                                          // 0x11D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      EnergyDrinkClass;                                         // 0x11D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              BoostItemClasses;                                         // 0x11E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              HealItemClasses;                                          // 0x11F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      GrenadeClass;                                             // 0x1200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MolotovClass;                                             // 0x1208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SmokeBombClass;                                           // 0x1210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FlashBangClass;                                           // 0x1218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData49[0x4];                                       // 0x1220(0x0004) MISSED OFFSET
	TWeakObjectPtr<class ATslPlayerState>              LaunchInstigator;                                         // 0x1224(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       LaunchCauser;                                             // 0x122C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData50[0x4];                                       // 0x1234(0x0004) MISSED OFFSET
	class UClass*                                      LaunchDamageTypeClass;                                    // 0x1238(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             LastLaunchTime;                                           // 0x1240(0x0008) (ZeroConstructor, IsPlainOldData)
	class APlayerState*                                AuthorizedPlayerState;                                    // 0x1248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	EEquipableItemSoundType                            ShoesSoundType;                                           // 0x1250(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData51[0x7];                                       // 0x1251(0x0007) MISSED OFFSET
	class UInteractorComponent*                        InteractorComponent;                                      // 0x1258(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UInteractionComponent*                       InteractionComponent;                                     // 0x1260(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData52[0x18];                                      // 0x1268(0x0018) MISSED OFFSET
	class UVehicleRiderComponent*                      VehicleRiderComponent;                                    // 0x1280(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UClass*                                      OutSidePlayerAreaEffectClass;                             // 0x1288(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ATslPostProcessEffect*                       OutSidePlayerAreaEffect;                                  // 0x1290(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      DBNOEffectClass;                                          // 0x1298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ATslPostProcessEffect*                       DBNOEffect;                                               // 0x12A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData53[0x1E0];                                     // 0x12A8(0x01E0) MISSED OFFSET
	class USkeletalMeshComponent*                      ShadowMesh;                                               // 0x1488(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              TargetingFOV;                                             // 0x1490(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              AimingDelay;                                              // 0x1494(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData54[0x8];                                       // 0x1498(0x0008) MISSED OFFSET
	float                                              AttackStateOffDelayTime;                                  // 0x14A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HitStateOffDelayTime;                                     // 0x14A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HitMePlayerStateOffDelayTime;                             // 0x14A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData55[0x34];                                      // 0x14AC(0x0034) MISSED OFFSET
	class UTslPlayerDamageConfig*                      DamageConfig;                                             // 0x14E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData56[0x4];                                       // 0x14E8(0x0004) MISSED OFFSET
	float                                              FallDamageFactor;                                         // 0x14EC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              FallDamageVelocityMin;                                    // 0x14F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIsActiveRagdollActive;                                   // 0x14F4(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData57[0x3];                                       // 0x14F5(0x0003) MISSED OFFSET
	float                                              CorpseLifeSpan;                                           // 0x14F8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData58[0xB4];                                      // 0x14FC(0x00B4) MISSED OFFSET
	TEnumAsByte<EStanceMode>                           PreReplicatedStanceMode;                                  // 0x15B0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData59[0x3];                                       // 0x15B1(0x0003) MISSED OFFSET
	struct FVector                                     JumpStartLocation_CP;                                     // 0x15B4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LandPredictedLocation_CP;                                 // 0x15C0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              FallHeight_CP;                                            // 0x15CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsVaulting_CP;                                           // 0x15D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData60[0x3];                                       // 0x15D1(0x0003) MISSED OFFSET
	float                                              VaultTimer_CP;                                            // 0x15D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VaultEndVelocity_CP;                                      // 0x15D8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VaultLastLocation_CP;                                     // 0x15E4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsClimbing_CP;                                           // 0x15F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEndVaultToFall_CP;                                       // 0x15F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData61[0x2];                                       // 0x15F2(0x0002) MISSED OFFSET
	struct FVector                                     VaultEndVelocityVectorMutliplier;                         // 0x15F4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              VaultEndVelocityVectorClamp;                              // 0x1600(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData62[0x4];                                       // 0x1604(0x0004) MISSED OFFSET
	class ATslVaultingHelper*                          VaultingHelperRef;                                        // 0x1608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bIsVaultingSystemEnabled;                                 // 0x1610(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData63[0x3];                                       // 0x1611(0x0003) MISSED OFFSET
	float                                              VaultingDirection_CP;                                     // 0x1614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	class UVaultingData*                               CurrentVaultData_CP;                                      // 0x1618(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bServerFinishedVault;                                     // 0x1620(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData64[0x3];                                       // 0x1621(0x0003) MISSED OFFSET
	float                                              JumpDelay;                                                // 0x1624(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpLastTimer;                                            // 0x1628(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsToVault;                                            // 0x162C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsToCancelVault;                                      // 0x162D(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData65[0x2];                                       // 0x162E(0x0002) MISSED OFFSET
	float                                              VaultProbeLoopTime;                                       // 0x1630(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GamepadReloadHoldTime;                                    // 0x1634(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	struct FTimerHandle                                TimerHandle_GamepadReloadHold;                            // 0x1638(0x0008)
	struct FAnimUpdateRateSettings                     AnimationUpdateRateSettings;                              // 0x1640(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              TO_CulledMovementTickrate;                                // 0x16B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TO_CulledActorTickInterval;                               // 0x16BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TO_MinimumDistance;                                       // 0x16C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunTickOptimization;                                     // 0x16C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunTickOptimization_Anim;                                // 0x16C5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunTickOptimization_Movement;                            // 0x16C6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData66[0x1];                                       // 0x16C7(0x0001) MISSED OFFSET
	float                                              TO_RenderedTolerance;                                     // 0x16C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTickOptimization_Move_Active;                            // 0x16CC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bTickOptimization_Anim_Active;                            // 0x16CD(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bTickOptimization_Actor_Active;                           // 0x16CE(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData67[0x5];                                       // 0x16CF(0x0005) MISSED OFFSET
	float                                              GamepadUnarmHoldTime;                                     // 0x16D4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              GamepadNextGunWeaponTabMaxTime;                           // 0x16D8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData68[0x49];                                      // 0x16DC(0x0049) MISSED OFFSET
	bool                                               bIsDemoVaulting_CP;                                       // 0x1725(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData69[0xA];                                       // 0x1726(0x000A) MISSED OFFSET
	class UBluezoneInOutComponent*                     BluezoneInOut;                                            // 0x1730(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBluezoneInOutSoundEffectComponent*          BluezoneInOutSoundEffect;                                 // 0x1738(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UGamePadInputAixsComponent*                  GamePadInputAixsComponent;                                // 0x1740(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData70[0x8];                                       // 0x1748(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x88be4a9e);
		return ptr;
	}


	void UpdateWeaponAttachPoint();
	void UnBindCallbackToHUD(class ATslPlayerController* InController);
	void ToggleInvincibility();
	void ToggleFreeMode();
	void ToggleAnimDynamics();
	bool TickOptimization_ShouldRunMovementUpdate();
	bool TickOptimization_ShouldRunAnimUpdate();
	bool TickOptimization_IsOverMinimumDistance();
	void TickOptimization_Eval();
	void StopAllAnimMontages();
	void STAT_TickEnd();
	void STAT_TickBegin();
	void SpawnPunchImpact_Reliable(const struct FVector& InLocation, const struct FRotator& InRotation);
	void SpawnPunchImpact(const struct FVector& InLocation, const struct FRotator& InRotation);
	void SpawnBulletPassByEffect(const struct FVector& Location, float BulletVelocity);
	void SimulatePhysicalHitRecovery();
	void SimulateHeadShot(const struct FTransform& SpawnTransform, const struct FTransform& ImpactTransform);
	void ShowDynamicCrosshair(bool bShow);
	void ShowCharacterInformation(bool bFullInfo);
	void SetWorldTransformIdentity();
	void SetWeaponInertia(const struct FRotator& InInertia);
	void SetupWeaponBlueprint();
	void SetTPPSpringarmOffset(float VerticalOffset);
	void SetTickOptimization_Movement(bool bActivate);
	void SetTickOptimization_Anim(bool bActivate);
	void SetTickOptimization_Actor(bool bActivate);
	void SetSwayDebuffParameters(float SwaySpeed, float SwayVerticalMultiplier, float SwayHorizontalMultiplier);
	void SetServerVaultFinished(bool InFinished);
	void SetParachuteLandingAssist(bool bAssistActive);
	void SetMovementEnabled(bool IsEnabled);
	void SetLaunchEvent(const struct FAttackId& AttackId, class ATslPlayerState* InPlayerState, class AActor* Causer, class UClass* DamageTypeClass);
	void SetJumpStartLocationAndFallheight(const struct FVector& JumpStartLoc, float FallHeight);
	void SetCustomDepth(bool bOn);
	void SetCharacterVaultingData(float InVaultTimer, bool InIsVaulting, bool InIsClimbing, bool InEndVaultToFall, float InDirection);
	void SetCanGroggyDamage(bool bInCanGroggyDamage);
	void SetBulletSpawnOverride(bool InOverride);
	void SetBuffFinalSpreadFactor(float FinalSpreadFactor);
	void SetBoostGauge(float NewBoostGauge);
	void SetAnimationAkSwitch(const struct FString& SwitchGroup, const struct FString& SwitchState);
	void SetAnimationAkRTPC(const struct FString& RTPCName, float RTPCValue);
	void SetAimStateActive(bool IsActive);
	void SetADSSocketOffset(const struct FVector& NewOffset);
	void SetActiveRagdoll(bool bIsActive);
	void SetAccessorySlot_Thrown(class UTslAccessoryComponent* AccessoryComponent);
	void SetAccessorySlot_SideArm(class UTslAccessoryComponent* AccessoryComponent);
	void SetAccessorySlot_Secondary(class UTslAccessoryComponent* AccessoryComponent);
	void SetAccessorySlot_Primary(class UTslAccessoryComponent* AccessoryComponent);
	void SetAccessorySlot_Melee(class UTslAccessoryComponent* AccessoryComponent);
	void SetAccessorySlot(class UTslAccessoryComponent* AccessoryComponent, EAccessorySlot Slot);
	void ServerSetVariableZoomLevel(int ZoomLevel);
	void ServerSetTargeting(ETargetingType NewTargetingType);
	void ServerSetSprintingAuto(bool bNewSprintingAuto);
	void ServerSetSprinting(bool bNewSprinting);
	void ServerSetRunning(bool bNewRunning);
	void ServerSetRolling(bool bNewRolling, bool bIsLeft);
	void ServerSetPeekRight(bool bNewPeekRight, bool InbUseRightShoulderAiming);
	void ServerSetPeekLeft(bool bNewPeekLeft, bool InbUseRightShoulderAiming);
	void ServerSetHoldingBreath(bool bNewHoldingBreath);
	void ServerSetGunDirectionSway(const struct FRotator& InGunDirectionSway);
	void ServerSetAimOffsets(const struct FVector_NetQuantizeNormal& NewAimOffsets);
	void ServerBroadCastAimingRemote(bool InbIsAming);
	void Server_UnarmedHitNotify(const struct FHitResult& Hit, TEnumAsByte<EPunchDamageType> PunchDamageType, TArray<float> AimSpeeds, uint32_t HitSeq);
	void Server_SetWeaponObstruction(bool bNewObstruction);
	void Server_SetVaultCancel(bool InCancel);
	void Server_SetThrowMode(bool bNewVal);
	void Server_SetParachuteLandingAssist(bool bAssistActive);
	void Server_SetFiringMode(EFiringMode fMode);
	void Server_SetCoatEquipped(bool IsEquipped);
	void Server_SetCastAnim(ECastAnim InCastAnim);
	void Server_SetCanGroggyDamage(bool bInCanGroggyDamage);
	void Server_SetAimState(bool IsActive);
	void Server_PlayUnarmedAttack(int AnimationIndex);
	void Server_CastFinishNotify();
	void Server_CastCancelNotify();
	void SendSystemMessage(ESystemMessageType MessageType, const struct FText& Message);
	void RunVaultCheck_BP();
	void ResetUnarmedAttack();
	void ResetParachute();
	void RemoveCrosshair();
	void ReevaluaeTargetingState();
	void PunchStart(TEnumAsByte<EPunchDamageType> PunchDamageType, float PunchDistance, float PunchRadius, TArray<float> InAimSpeeds);
	void ProcessRevive(float RemainGroggyHealthPercent);
	void ProcessDBNO(float GroggyHealthPercent);
	void PrepareParachute(class UClass* ParachuteType);
	void PlayCameraAnim(class UCameraAnim* CameraAnim);
	bool PickUpItem(class UItem* Item, const struct FName& TargetContainer, const struct FString& Options);
	void OnWeaponChanged();
	void OnWeapon_6();
	void OnWeapon_5();
	void OnWeapon_4();
	void OnWeapon_3();
	void OnWeapon_2();
	void OnUnarmPad();
	void OnUnarm();
	void OnThrowWeaponPad();
	void OnTest_SetupWeapon();
	void OnTest_InspectObject();
	void OnStopTargeting();
	void OnStopFire();
	void OnStartInteractBy(class ATslCharacter* OtherCharacter);
	void OnShowDynamicCrosshair(bool bShow);
	void OnRep_WeaponProcessor();
	void OnRep_VariableZoomLevel();
	void OnRep_TargetingType();
	void OnRep_ShoesSoundType();
	void OnRep_ReviveCastingTime();
	void OnRep_LastTakeHitInfo();
	void OnRep_IsWeaponObstructed();
	void OnRep_IsThrowHigh();
	void OnRep_IsThirdPerson();
	void OnRep_IsScopingRemote();
	void OnRep_IsReviving();
	void OnRep_IsPeekRight();
	void OnRep_IsPeekLeft();
	void OnRep_IsInVehicleRemote();
	void OnRep_IsGroggying();
	void OnRep_IsFirstPersonRemote();
	void OnRep_IsDemoVaulting();
	void OnRep_IsCrouched();
	void OnRep_IsCoatEquipped();
	void OnRep_IsAimingRemote();
	void OnRep_IgnoreRotation();
	void OnRep_Health(float LastHealth);
	void OnRep_GroggyHealth(float LastGroggyHealth);
	void OnRep_CharacterState();
	void OnRep_CastAnim();
	void OnRep_BoostGauge(float LastBoostGauge);
	void OnRep_AimStateActive();
	void OnRep_AimOffsets(const struct FVector_NetQuantizeNormal& PrevAimOffsets);
	void OnReloadGamepad();
	void OnMeleeWeaponPad();
	void OnInvulnerable();
	void OnInteractBy(class ATslCharacter* OtherCharacter);
	void OnIncreaseMaxFlyAccerleration();
	void OnFreeMoveMode();
	void OnDecreaseMaxFlyAccerleration();
	void OnChangeBreath(float Breath, float LastBreath, float BreathMax);
	void OnCancelInteractBy(class ATslCharacter* OtherCharacter);
	void OnBlockingWidgetOpened(class UWidget* Widget);
	void NotHaveThrowItemNotifyMessage(const struct FText& ItemName);
	void NotHaveHealItemNotifyMessage(const struct FText& ItemName);
	void NotHaveBoostItemNotifyMessage();
	void NativeOnWeaponChanged();
	void LocalMagazineDrop(const struct FVector& InitialVelocity);
	void LocalHandleVault_CP(const struct FVector& V_Start, const struct FVector& V_Apex, const struct FVector& V_ApexAdditive, const struct FVector& V_End, bool bIsClimb, EVaultAnimType InVaultType, bool bEndToFall, float Direction, float PlayerVelocity, float DistanceFromObject);
	bool IsZooming();
	bool IsZombie();
	bool IsWeaponUsingHighMagnificationScope();
	bool IsVehiclePassenger();
	bool IsVehicleDriver();
	bool IsVaultingEnabled();
	bool IsVaultingDebugEnabled();
	bool IsVaulting();
	bool IsVaultCancelled();
	bool IsUsingRightShoulderAiming();
	bool IsUpperCollision();
	bool IsUnderwater();
	bool IsUnderRoof();
	bool IsTeamMatch();
	bool IsTargeting();
	bool IsSwimming();
	bool IsSprinting();
	bool IsSpectatingCharacter();
	bool IsSitting();
	bool IsScoping();
	bool IsRunning();
	bool IsRolling();
	bool IsReviving();
	bool IsQuitter();
	bool IsQuickThrowHigh();
	bool IsPlayingPickUpAnimation();
	bool IsPeekRight();
	bool IsPeekLeft();
	bool IsParachuting();
	bool IsMoving();
	bool IsMouseUse();
	bool IsMeleeAttacking();
	bool IsMagazineHandAttached();
	bool IsMagazineGunAttached();
	bool IsLocalOrSpectating();
	bool IsInWaterVolume();
	bool IsInVehicle();
	bool IsInteracting();
	bool IsIndoor();
	bool IsInAircraft();
	bool IsHoldingBreath();
	bool IsHitted();
	bool IsHipped();
	bool IsGroggying();
	bool IsFreelooking();
	bool IsForcingFall();
	bool IsForceRotation();
	bool IsForcedProneAfterFall();
	bool IsFollowingCharacter();
	bool IsFloating();
	bool IsFirstPerson();
	bool IsFiring();
	bool IsFallingWithParachute();
	bool IsFallingFromHighAltitude();
	bool IsDying();
	bool IsCycleInProgress();
	bool IsCoatEquipped();
	bool IsCasting();
	bool IsCameraUnderwater();
	bool IsAudioTestEnabled();
	bool IsAttacked();
	bool IsAnimDynamicsEnabled();
	bool IsAlive();
	bool IsActiveRagdoll();
	void HaveNotAnyHealItemNotifyMessage();
	bool HasWeaponLeftHandIKSocket();
	bool HasWeapon(class UClass* WeaponClass);
	bool HasAnimatableObject(EAnimatableCustomizableTypes InParamType);
	void HandleVaulting_BP(const struct FVector& ImpactLocation, const struct FVector& CapsulePredictedLocation, const struct FVector& Normal2D, const struct FVector& DirectionVecotor, bool bForceVault, float JumpDistance, bool bBlockVault, bool bBlockClimb);
	void HandleVaultEnd_CP(const struct FVector& InVaultEndVelocity);
	void HandleCapsuleCollision();
	void GiveWeapon(class UClass* WeaponClass);
	class ATslWeapon_Throwable* GetWeaponThrowable();
	float GetWeaponReloadPlayRate();
	class AWeaponProcessor* GetWeaponProcessor();
	bool GetWeaponObstructionRemote();
	float GetWeaponMovementModifierScope();
	float GetWeaponMovementModifierAim();
	struct FTransform GetWeaponLeftHandIKTransform();
	struct FRotator GetWeaponInertia();
	struct FTransform GetWeaponHandIK_Right();
	struct FTransform GetWeaponHandIK_Left();
	float GetWeaponGunCollisionAlpha();
	class ATslWeapon_Gun* GetWeaponGun();
	float GetWeaponADSTimeModifier();
	class ATslWeapon* GetWeapon();
	bool GetWantsToJump();
	class UTslVehicleSeatComponent* GetVehicleSeatComponent();
	class UVehicleSeatInteractionComponent* GetVehicleSeat();
	class UVehicleRiderComponent* GetVehicleRiderComponent();
	class APawn* GetVehiclePawn();
	TScriptInterface<class UTslVehicleInterface> GetVehicleInterface();
	float GetVaultTimer();
	float GetVaultingDirection();
	int GetVaultingDebugType();
	class UVaultingData* GetVaultingDataByEnum(EVaultAnimType InVaultType);
	class ATslPlayerState* GetTslPlayerState();
	class ATslPlayerController* GetTslPlayerController();
	class UTslCharacterMovement* GetTslCharacterMovement();
	float GetTPPSpringarmOffset();
	class UCurveFloat* GetTPPCameraCurve();
	class ATeam* GetTeam();
	float GetTargetingSpeedModifier();
	TEnumAsByte<EStanceMode> GetStance();
	float GetSprintingSpeedModifier_Stand();
	float GetSprintingSpeedModifier_Prone();
	float GetSprintingSpeedModifier_Crouch();
	float GetSprintCurrentValue();
	float GetSpeedModifierByWeaponClass();
	float GetSpeedKmPerHour2D();
	struct FString GetShortPlayerName();
	bool GetServerVaultFinished();
	float GetRunningSpeedModifier_Stand();
	float GetRunningSpeedModifier_Prone();
	float GetRunningSpeedModifier_Crouch();
	struct FName GetReactionBone(const struct FName& BoneName);
	struct FString GetPlayerName();
	bool GetParachuteLandingAssist();
	class AParachuteVehicle* GetParachute();
	TScriptInterface<class UInteractionInterface> GetObjectCanInteract();
	float GetMaxSprintSpeed();
	float GetMaxGroundSpeedOnSlope();
	struct FString GetLocationString();
	float GetLeanRightAlpha();
	float GetLeanLeftAlpha();
	struct FRotator GetLastMoveRotation();
	class AInventoryFacade* GetInventoryFacade();
	struct FVector GetInteractObjectLocation();
	struct FString GetInteractionString();
	float GetIndoorFactor();
	struct FRotator GetFreelookSavedRotation();
	struct FRotator GetFreelookDeltaRotation();
	bool GetDynamicCrosshairHidden();
	class UClass* GetDropPackageType();
	struct FString GetDirectionString();
	float GetDirectionalSpeedModifier(TEnumAsByte<EMovementType> StanceType);
	struct FRotator GetDesiredRotation();
	class ATslWeapon* GetCurrentWeapon();
	float GetCurrentWaterSurfaceZ();
	float GetCurrentWaterSurfaceBaseZ();
	float GetCurrentWaterDepth();
	struct FRotator GetCurrentSway();
	class UStaticMesh* GetCurrentMagazineMesh();
	struct FTransform GetCurrentMagazineLocation();
	float GetCurrentHeightFromWaterFloor();
	bool GetCtrlShortCutOnOff();
	TScriptInterface<class UInteractionInterface> GetComponentCanInteract();
	class ATslPlayerState* GetClientTslPlayerState();
	struct FString GetCharacterNetId();
	class UObject* GetCastObject();
	struct FVector GetCameraDOF();
	float GetCameraAnimOverrideAlpha();
	bool GetBulletSpawnOverride();
	class UBuffComponet* GetBuffComponent();
	class UCharacterBreathComponent* GetBreathComponent();
	EAnimWeaponType GetAnimWeaponType();
	EAnimStance GetAnimStance();
	float GetAimStateTimer();
	float GetAimStateAlpha();
	struct FRotator GetAimOffsets();
	struct FVector GetADSSocketOffset();
	class AActor* GetActorCanInteract();
	class UCameraComponent* GetActiveCamera();
	class UTslAccessoryComponent* GetAccessorySlot(EAccessorySlot Slot);
	void FixupCamera();
	class ATslWeapon* FindWeapon(class UClass* WeaponClass);
	bool EnableScopeOutsideBlur();
	void EnableAudioTest();
	void DisableCollision();
	void DelayedFire();
	void ClientSoundPlayMulticast(class UAkAudioEvent* SoundAk);
	void ClientSoundPlay(class UAkAudioEvent* SoundAk);
	void ClientSimulationArmorDestruction(EEquipSlotID SlotID, const struct FTransform& Impact);
	void ClientSetTargeting(ETargetingType NewTargetingType);
	void ClientSendGroggyMessage(class ATslPlayerState* GroggyCauserPlayerState, class ATslPlayerState* VictimPlayerState, class UDamageType* GroggyCauserDamageType, EDamageReason DamageReason, const struct FText& DamageCauserName, class UClass* DamageCauserClass);
	void ClientRevivedCastingWidgetShow(bool bVisible);
	void ClientProcessRevive(float RemainGroggyHealth);
	void ClientPlayPickUpAnimation(const struct FVector_NetQuantize& InteractionObject);
	void ClientNotifyCrack(const struct FVector_NetQuantize& LocationRelative, float BulletVelocity);
	void ClientMyCharacterPlayPickUpAnimation(const struct FVector_NetQuantize& InteractionObject, float Duration);
	void ClientForceInitStance(TEnumAsByte<EStanceMode> ToStance);
	void ClientDrawDamageInfo(float Damage, class UTslDamageType* DamageType);
	void Client_PlayUnarmedAttack(int AnimationIndex);
	void Client_CastFinishNotify();
	void Client_CastCancelNotify();
	void CheckScopePP();
	void CheckMuzzleCollision();
	void CheckMuzzleBulletSpawn();
	void CheckJumpAndVault(bool bForceVelocity, const struct FVector& InForcedVelocity);
	void CheckForCoat();
	bool CheckEquipmentSlot(const struct FEquipPosition& InSlotData);
	bool CanSwim();
	void Camera_AimoffsetFix_TppToFpp();
	void Camera_AimoffsetFix_FppToTpp();
	void BindCallbackToHUD(class ATslPlayerController* InController);
	void ApplyRagdollPhysicsForce();
	void Anim_MagazineShow(bool bShow);
	void Anim_MagazineHandAttach(bool bAttach);
	bool Anim_IsMagazineVisible();
	bool AllowInteract(class ATslCharacter* OtherCharacter);
	void AdminSetUpWeapon();
	void AdminInvulnerable();
	void AdminFreeMoveMode();
	void AddBuffMoveSpeedFactor(float MoveSpeedFactor);
};


// Class TslGame.TslBot
// 0x0000 (0x1750 - 0x1750)
class ATslBot : public ATslCharacter
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x96889338);
		return ptr;
	}

};


// Class TslGame.ObserverTagWidget
// 0x0040 (0x0280 - 0x0240)
class UObserverTagWidget : public UUserWidget
{
public:
	float                                              OffsetZ;                                                  // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeadOffsetZ;                                              // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceForName;                                          // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceForIndicator;                                     // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0254(0x0004) MISSED OFFSET
	class UCurveFloat*                                 WidgetCurve;                                              // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 AnchorCurve;                                              // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ATslCharacter*                               Character;                                                // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0270(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xbc368af2);
		return ptr;
	}


	void UpdateWeaponIcon_Imp(class USizeBox* weaponBox, class UImage* weaponImage);
	void UpdateWeaponIcon();
	void SetTeamNumber(int TeamNumber, const struct FLinearColor& teamColor);
	void SetPlayerNameTag(const struct FName& PlayerName);
	void SetIndicatorColor(const struct FLinearColor& teamColor);
	void SetCharacterIconPosition_UC(const struct FVector2D& Pos_UC, bool IsHidden);
	void OnUpdateWidgetTransform(class UWidget* CharacterNameWidget, class UWidget* IndicatorWidget, const struct FVector2D& Pos_UC, bool IsHidden);
	bool IsTeamMember();
	bool IsLastSpectatedCharacter();
	void HandleWidgetPrepass(class UWidget* Widget);
	void HandleWeaponImagePrepass(class UWidget* Widget);
	void HandleTeamNumberPrepass(class UWidget* Widget);
	int GetTeamId(class ATslCharacter* TslCharacter);
	struct FLinearColor GetTeamColor(class ATslCharacter* TslCharacter);
};


// Class TslGame.ObserverTagManagerBaseWidget
// 0x0078 (0x02B8 - 0x0240)
class UObserverTagManagerBaseWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0240(0x0070) MISSED OFFSET
	class UClass*                                      WidgetTemplate;                                           // 0x02B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x2e434320);
		return ptr;
	}


	void UpdateReplicateCharacter();
	void RemoveReplicateCharacter(TArray<class ATslCharacter*> Characters);
	void AddReplicateCharacter(TArray<class ATslCharacter*> Characters);
};


// Class TslGame.TslVehicleInterface
// 0x0000 (0x0028 - 0x0028)
class UTslVehicleInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x808f7a1c);
		return ptr;
	}


	class USkeletalMeshComponent* GetVehicleMeshComponent();
	class ATslPlayerController* GetTslPlayerController();
};


// Class TslGame.ParachuteVehicle
// 0x0178 (0x0588 - 0x0410)
class AParachuteVehicle : public APawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0410(0x0010) MISSED OFFSET
	struct FScriptDelegate                             OnRelease;                                                // 0x0420(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnLand;                                                   // 0x0430(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	class UAkAudioEvent*                               ReleaseSound_Local;                                       // 0x0440(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               ReleaseSound_Remote;                                      // 0x0448(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               LandSound_Local;                                          // 0x0450(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               LandSound_Remote;                                         // 0x0458(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               FallingStartSound_Local;                                  // 0x0460(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               FallingStartSound_Remote;                                 // 0x0468(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkComponent*                                AkSoundCom;                                               // 0x0470(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UTslPawnInputBindingComponent*               TslPawnInputBindingComponent;                             // 0x0478(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGamePadInputAixsComponent*                  GamePadInputAixsComponent;                                // 0x0480(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComponent;                                            // 0x0488(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UParachuteVehicleMovement*                   ParachuteMovementComponent;                               // 0x0490(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UFreeFallMovement*                           FreeFallMovementComponent;                                // 0x0498(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UTslVehicleSeatComponent*                    VehicleSeatComponent;                                     // 0x04A0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UDoublePhaseInteractionComponent*            InteractionComponent;                                     // 0x04A8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class ATslCharacter>                LastDriver;                                               // 0x04B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04B8(0x0008) MISSED OFFSET
	struct FName                                       FreeFallFirstPersonCameraName;                            // 0x04C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       FreeFallThirdPersonCameraName;                            // 0x04C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FreeFallCameraPitchMin;                                   // 0x04D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FreeFallCameraPitchMax;                                   // 0x04D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ReleasingAltitude;                                        // 0x04D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForceReleasingAltitude;                                   // 0x04DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x04E0(0x0018) MISSED OFFSET
	float                                              SweepMoveHeight;                                          // 0x04F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LandingHeight;                                            // 0x04FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LandingDuration;                                          // 0x0500(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0504(0x0004) MISSED OFFSET
	class UClass*                                      LandingBuff;                                              // 0x0508(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0510(0x000C) MISSED OFFSET
	float                                              StuckCheckDistance;                                       // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StuckCheckDuration;                                       // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xC];                                       // 0x0524(0x000C) MISSED OFFSET
	unsigned char                                      UnknownData06 : 1;                                        // 0x0530(0x0001)
	unsigned char                                      ForwardInputRepApplied : 1;                               // 0x0530(0x0001) (Net, Transient)
	unsigned char                                      ForwardInputRepIsForward : 1;                             // 0x0530(0x0001) (Net, Transient)
	unsigned char                                      RightInputRepApplied : 1;                                 // 0x0530(0x0001) (Net, Transient)
	unsigned char                                      RightInputRepIsRight : 1;                                 // 0x0530(0x0001) (Net, Transient)
	unsigned char                                      bIsReleased : 1;                                          // 0x0530(0x0001) (Net, Transient)
	unsigned char                                      bIsDriven : 1;                                            // 0x0530(0x0001) (Net, Transient)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0531(0x0007) MISSED OFFSET
	struct FSkinData                                   SkinData;                                                 // 0x0538(0x0020) (Net, Transient)
	struct FRotator                                    InitialRotation;                                          // 0x0558(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     InitialVelocity;                                          // 0x0564(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     RideSocketOffset;                                         // 0x0570(0x000C) (Net, Transient, IsPlainOldData)
	struct FVector                                     LeaveSocketOffset;                                        // 0x057C(0x000C) (Net, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x00119e63);
		return ptr;
	}


	void ServerRelease();
	void PhysicsVolumeChanged(class APhysicsVolume* NewVolume);
	void OnSecondInteractBy(class ATslCharacter* Character);
	void OnRide(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat);
	void OnRep_SkinData();
	void OnRep_IsReleased();
	void OnRep_IsDriven();
	void OnPostDriverLeave();
	void OnInteractBy(class ATslCharacter* Character);
	void OnDriverRide();
	void OnDriverLeave();
	void Land();
	bool IsStuck();
	bool IsReleased();
	bool IsDriven();
	float GetAltitudeFromFloor();
	bool CanReleaseByInput();
	bool CanRelease();
	bool AllowSecondInteractBy(class ATslCharacter* Character);
	bool AllowInteractBy(class ATslCharacter* Character);
};


// Class TslGame.ReplicatedRootComponent
// 0x0000 (0x03F0 - 0x03F0)
class UReplicatedRootComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x20c0ca2c);
		return ptr;
	}

};


// Class TslGame.ReplicationTrigger
// 0x0030 (0x03E0 - 0x03B0)
class AReplicationTrigger : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET
	TArray<class AActor*>                              TargetReplicatedActors;                                   // 0x03B8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03C8(0x0004) MISSED OFFSET
	int                                                ReplicationGroupCount;                                    // 0x03CC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03D0(0x0004) MISSED OFFSET
	float                                              ReplicationGroupIntervalSeconds;                          // 0x03D4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf828a7aa);
		return ptr;
	}


	void EnableReplicationGroup();
};


// Class TslGame.ReplicationTriggerManager
// 0x0028 (0x03D8 - 0x03B0)
class AReplicationTriggerManager : public AInfo
{
public:
	TArray<class UClass*>                              TargetReplicatedActorClasses;                             // 0x03B0(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	float                                              TriggerRadius;                                            // 0x03C0(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              TriggerInterval;                                          // 0x03C4(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class AReplicationTrigger*>                 Triggers;                                                 // 0x03C8(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x5c307c67);
		return ptr;
	}

};


// Class TslGame.ReporterManager
// 0x0098 (0x00C0 - 0x0028)
class UReporterManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xe6b9df84);
		return ptr;
	}

};


// Class TslGame.RewardData
// 0x0028 (0x0058 - 0x0030)
class URewardData : public UDataAsset
{
public:
	float                                              DefaultScoreMultiplierByDamage;                           // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultScoreMultiplierByKill;                             // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      ScoreByReverseRanking;                                    // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      ScoreMultiplierByRanking;                                 // 0x0048(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd0199085);
		return ptr;
	}

};


// Class TslGame.SceneInteractionComponent
// 0x0110 (0x0500 - 0x03F0)
class USceneInteractionComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03F0(0x0010) MISSED OFFSET
	float                                              MaxInteractableDistance;                                  // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	struct FText                                       InteractionVerb;                                          // 0x0408(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       InteractiveObjectName;                                    // 0x0420(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bUseTraceCheck;                                           // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	struct FCastConfig                                 CastConfig;                                               // 0x0440(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0478(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInteractBy;                                             // 0x0480(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientOnInteractBy;                                       // 0x0490(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x60];                                      // 0x04A0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xfe62eb45);
		return ptr;
	}


	struct FText GetInteractiveObjectName();
	struct FText GetInteractionVerb();
	bool AllowInteractBy(class ATslCharacter* Character);
};


// Class TslGame.TslReplayMapDataInterface
// 0x0000 (0x0028 - 0x0028)
class UTslReplayMapDataInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x40fb3d53);
		return ptr;
	}

};


// Class TslGame.DoorInteractionComponent
// 0x0200 (0x0700 - 0x0500)
class UDoorInteractionComponent : public USceneInteractionComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0500(0x0010) MISSED OFFSET
	EDoorState                                         DoorState;                                                // 0x0510(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bReverseRotation : 1;                                     // 0x0511(0x0001) (Net)
	unsigned char                                      bIgnoreParentValidityCheck : 1;                           // 0x0511(0x0001)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0512(0x0002) MISSED OFFSET
	struct FVector                                     SoundOffset;                                              // 0x0514(0x000C) (IsPlainOldData)
	class UDoorDataAsset*                              DoorDataAsset;                                            // 0x0520(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1C8];                                     // 0x0528(0x01C8) MISSED OFFSET
	class UAkComponent*                                AkAudioComponent;                                         // 0x06F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x06F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb668b6bd);
		return ptr;
	}


	void OnRep_DoorState(EDoorState PrevDoorState);
	bool AllowInteract(class ATslCharacter* OtherCharacter);
};


// Class TslGame.DroppedItemInteractionComponent
// 0x0060 (0x0560 - 0x0500)
class UDroppedItemInteractionComponent : public USceneInteractionComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0500(0x0038) MISSED OFFSET
	class UItem*                                       Item;                                                     // 0x0538(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0540(0x0008) MISSED OFFSET
	class UAsyncStaticMeshComponent*                   StaticMeshComponent;                                      // 0x0548(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0550(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb3c8c8ca);
		return ptr;
	}


	void OnRep_Item();
	bool AllowInteractBy(class ATslCharacter* Character);
};


// Class TslGame.VehicleSeatInteractionComponent
// 0x00D0 (0x05D0 - 0x0500)
class UVehicleSeatInteractionComponent : public USceneInteractionComponent
{
public:
	class ATslCharacter*                               Rider;                                                    // 0x0500(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0508(0x000C) MISSED OFFSET
	int                                                SeatIndex;                                                // 0x0514(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ERiderType                                         RiderType;                                                // 0x0518(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0519(0x0007) MISSED OFFSET
	struct FName                                       LeaveSocketName;                                          // 0x0520(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ViewPitchMin;                                             // 0x0528(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ViewPitchMax;                                             // 0x052C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ViewYawMin;                                               // 0x0530(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ViewYawMax;                                               // 0x0534(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CurvePitchMax;                                            // 0x0538(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 CurvePitchMin;                                            // 0x0540(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FirstPersonCameraName;                                    // 0x0548(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ThirdPersonCameraName;                                    // 0x0550(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EVehicleAnimType                                   SeatAnimationType;                                        // 0x0558(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0559(0x0007) MISSED OFFSET
	class UBlendSpaceBase*                             SeatBlendspaceAiming;                                     // 0x0560(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             SeatBlendspaceFPPAiming;                                  // 0x0568(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           SeatAnimationIdle_Rifle;                                  // 0x0570(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           SeatAnimationIdle_Melee;                                  // 0x0578(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           SeatAnimationIdle_Unarmed;                                // 0x0580(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           SeatAnimationIdle_Grenade;                                // 0x0588(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAimOffsetBlendSpace*                        SeatIdleAO;                                               // 0x0590(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             TransitionOutBlendspace;                                  // 0x0598(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             TransitionInBlendspace;                                   // 0x05A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRestricWeaponUse;                                        // 0x05A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x05A9(0x0007) MISSED OFFSET
	TArray<EWeaponClass>                               AllowedWeaponClasses;                                     // 0x05B0(0x0010) (Edit, ZeroConstructor)
	bool                                               bCanOnlyFireWhileAiming;                                  // 0x05C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseEntryVelocityRestriction;                             // 0x05C1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x05C2(0x0002) MISSED OFFSET
	float                                              MaxVelocityForEntry;                                      // 0x05C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InteractionBlockDuration;                                 // 0x05C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x05CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x6ee44f76);
		return ptr;
	}


	void OnRep_Rider();
	void OnInteractDelegate(class ATslCharacter* OtherCharacter);
	bool IsWeaponClassAllowed(EWeaponClass InClass);
	bool IsEntryAllowedByVelocity();
	class UTslVehicleSeatComponent* GetVehicleSeatComponent();
	class APawn* GetVehiclePawn();
	TScriptInterface<class UTslVehicleInterface> GetVehicleInterface();
	EVehicleAnimType GetVehicleAnimType();
	class UBlendSpaceBase* GetTransitionOutBlendspace();
	class UBlendSpaceBase* GetTransitionInBlendspace();
	class UAimOffsetBlendSpace* GetSeatIdleAO();
	class UAnimSequenceBase* GetSeatIdleAnimation_Unarmed();
	class UAnimSequenceBase* GetSeatIdleAnimation_Rifle();
	class UAnimSequenceBase* GetSeatIdleAnimation_Melee();
	class UAnimSequenceBase* GetSeatIdleAnimation_Grenade();
	class UBlendSpaceBase* GetSeatAimingFPPBlendspace();
	class UBlendSpaceBase* GetSeatAimingBlendspace();
	class ATslCharacter* GetRider();
	float GetMinPitchByYaw(float CurrentYaw);
	float GetMaxPitchByYaw(float CurrentYaw);
	bool GetCanFireOnlyWhileAimed();
	struct FText GetAdditionalMessage(class ATslCharacter* Character);
	bool AllowInteractDelegate(class ATslCharacter* OtherCharacter);
};


// Class TslGame.MotorbikeVehicleSeatInteraction
// 0x0000 (0x05D0 - 0x05D0)
class UMotorbikeVehicleSeatInteraction : public UVehicleSeatInteractionComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xe5a30321);
		return ptr;
	}


	bool IsEntryAllowed(class ATslCharacter* InCharacter);
	void HandleFlipAndKickstand();
};


// Class TslGame.ParachuteVehicleSeatInteraction
// 0x0000 (0x05D0 - 0x05D0)
class UParachuteVehicleSeatInteraction : public UVehicleSeatInteractionComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x9cef207c);
		return ptr;
	}

};


// Class TslGame.SimpleInterpolationMovement
// 0x00A0 (0x0300 - 0x0260)
class USimpleInterpolationMovement : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0260(0x0018) MISSED OFFSET
	float                                              LocationInterpTime;                                       // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x027C(0x0038) MISSED OFFSET
	float                                              RotationInterpTime;                                       // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x38];                                      // 0x02B8(0x0038) MISSED OFFSET
	bool                                               bUseOnlyYawRotation;                                      // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSweepMove;                                            // 0x02F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSafeInterpolation;                                    // 0x02F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x02F3(0x0001) MISSED OFFSET
	float                                              ForceMoveTime;                                            // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x02F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x4e40841f);
		return ptr;
	}

};


// Class TslGame.FreeFallMovement
// 0x0050 (0x0350 - 0x0300)
class UFreeFallMovement : public USimpleInterpolationMovement
{
public:
	float                                              MinPitch;                                                 // 0x0300(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPitch;                                                 // 0x0304(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLateralSpeed;                                          // 0x0308(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LateralAcceleration;                                      // 0x030C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LateralDeceleration;                                      // 0x0310(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LateralBrakeDeceleration;                                 // 0x0314(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalAcceleration;                                     // 0x0318(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalDeceleration;                                     // 0x031C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TerminalSpeed;                                            // 0x0320(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinAdditiveTerminalSpeed;                                 // 0x0324(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAdditiveTerminalSpeed;                                 // 0x0328(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationYawRate;                                          // 0x032C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0330(0x0010) MISSED OFFSET
	float                                              InputUpdateTime;                                          // 0x0340(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0344(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x6d4424ee);
		return ptr;
	}


	void ServerUpdateInput(float InForwardInput, float InRightInput, float InDesiredPitchRotation, float InDesiredYawRotation);
	float GetRightInput();
	float GetForwardInput();
};


// Class TslGame.ParachuteVehicleMovement
// 0x0110 (0x0410 - 0x0300)
class UParachuteVehicleMovement : public USimpleInterpolationMovement
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0300(0x0004) MISSED OFFSET
	float                                              MaxSpeed;                                                 // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Deceleration;                                             // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRotationYawRate;                                       // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationYawAcceleration;                                  // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationYawDeceleration;                                  // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TerminalVelocity;                                         // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DecreaseTerminalVelocity;                                 // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0324(0x0008) MISSED OFFSET
	float                                              RotationYawReplicated;                                    // 0x032C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RotationPitchReplicated;                                  // 0x0330(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              InputUpdateTime;                                          // 0x0334(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2C];                                      // 0x0338(0x002C) MISSED OFFSET
	float                                              ParachuteForwardVelocityTransferTimeout;                  // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParachuteForwardVelocityTransferTimeoutDTScalar;          // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParachuteDeployCoefficient;                               // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              YawSpeed;                                                 // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxForwardPitch;                                          // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxBackwardPitch;                                         // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceForwardScale;                                        // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceForwardStaticSpeed;                                  // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VelocityLERPSpeedMin;                                     // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VelocityLERPSpeedMax;                                     // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VelocityLERPValueMin;                                     // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VelocityLERPValueMax;                                     // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DampingPitchMin;                                          // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DampingPitchMax;                                          // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DampingValueMin;                                          // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DampingValueMax;                                          // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceDownAngleMin;                                        // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceDownAngleMax;                                        // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceGravityMax;                                          // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceGravitySpeedMin;                                     // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceGravitySpeedMax;                                     // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceGravityValueMin;                                     // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceGravityValueMax;                                     // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RollSpeedMin;                                             // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RollSpeedMax;                                             // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RollAngleMin;                                             // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RollAngleMax;                                             // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RollInterpSpeed;                                          // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FinalVelocitySpeedMin;                                    // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FinalVelocitySpeedMax;                                    // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FinalVelocityDampingMin;                                  // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FinalVelocityDampingMax;                                  // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	float                                              TraceSphereRadius;                                        // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceSphereOffset;                                        // 0x03EC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              GroundTraceStart;                                         // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GroundTraceEnd;                                           // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GroundTraceDampingMin;                                    // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GroundTraceDampingMax;                                    // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0408(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x5de7cb2c);
		return ptr;
	}


	void ServerUpdateInput(float InForwardInput, float InRotationInput);
	float GetRotationYawRate();
	float GetRotationInput();
	float GetForwardInput();
	struct FRotator GetClientRotation();
};


// Class TslGame.TslAircraftVehicleMovement
// 0x0010 (0x0310 - 0x0300)
class UTslAircraftVehicleMovement : public USimpleInterpolationMovement
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0300(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x835c58ae);
		return ptr;
	}

};


// Class TslGame.SpringArmInVehicleComponent
// 0x0000 (0x0480 - 0x0480)
class USpringArmInVehicleComponent : public USpringArmComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x9cd1af13);
		return ptr;
	}

};


// Class TslGame.StanceComponent
// 0x0080 (0x0260 - 0x01E0)
class UStanceComponent : public UActorComponent
{
public:
	struct FStanceTransitionData                       StanceTransitionData;                                     // 0x01E0(0x0060) (Edit, DisableEditOnInstance)
	TEnumAsByte<EStanceMode>                           CurrentStance;                                            // 0x0240(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0241(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xff59e935);
		return ptr;
	}


	void ServerForceInitStance();
	void ServerChangeStance(TEnumAsByte<EStanceMode> ToStance);
	void OnRep_CurrentStance();
	void ClientInitByReconnection(TEnumAsByte<EStanceMode> InitStance);
};


// Class TslGame.TslPlayerStart
// 0x0028 (0x0408 - 0x03E0)
class ATslPlayerStart : public APlayerStart
{
public:
	EMatchStartType                                    MatchStartType;                                           // 0x03E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03E1(0x0003) MISSED OFFSET
	float                                              StartRadius;                                              // 0x03E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomRotation;                                          // 0x03E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03E9(0x0007) MISSED OFFSET
	TArray<class AStartActivationVolume*>              ActivationVolumes;                                        // 0x03F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0400(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x7db328e6);
		return ptr;
	}


	float GetRandomStartYawRotation();
	struct FVector GetRandomStartLocation();
};


// Class TslGame.StartActivationVolume
// 0x0008 (0x03F0 - 0x03E8)
class AStartActivationVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x264c0a3a);
		return ptr;
	}

};


// Class TslGame.ThingActivationVolume
// 0x0000 (0x03F0 - 0x03F0)
class AThingActivationVolume : public AStartActivationVolume
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa96f2e0a);
		return ptr;
	}

};


// Class TslGame.InventoryFacade
// 0x0020 (0x03D8 - 0x03B8)
class AInventoryFacade : public ASubActor
{
public:
	TArray<EEquipSlotID>                               AutoSwapEquipSlotID;                                      // 0x03B8(0x0010) (ZeroConstructor, Config)
	class AInventory*                                  Inventory;                                                // 0x03C8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class AEquipment*                                  Equipment;                                                // 0x03D0(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x7e74fd7a);
		return ptr;
	}


	bool IsAutoSwappable(EEquipSlotID SlotID);
	bool HasItemByClass(class UClass* ItemClass);
	void GiveItem_Admin(class UClass* ItemClass);
	class ATslCharacter* GetOwnerCharacter();
	class AInventory* GetInventory();
	class AEquipment* GetEquipment();
};


// Class TslGame.Equipment
// 0x0050 (0x0438 - 0x03E8)
class AEquipment : public AItemSlotContainer
{
public:
	struct FScriptMulticastDelegate                    OnEquipmentUpdated;                                       // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x03F8(0x0030) MISSED OFFSET
	TArray<class UEquipableItem*>                      Items;                                                    // 0x0428(0x0010) (Net, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa196db80);
		return ptr;
	}


	struct FEquipPosition WeaponIndexToEquipPosition(int WeaponIndex);
	void WeaponAttachmentSwap(const struct FEquipPosition& SourceWeapon, const struct FEquipPosition& TargetWeapon, const struct FName& ItemClassForVerify, EWeaponAttachmentSlotID AttachmentSlotID, bool bSoundPlay);
	void UnequipItem(const struct FEquipPosition& Position, const struct FName& ItemClassForVerify, bool bSoundPlay);
	bool TryEquipItem(class UItem* Item, bool bSoundPlay, bool bSwap);
	void PrimaryWeaponSwap(const struct FEquipPosition& EquipPosition, const struct FString& Options);
	void Items_RepNotify();
	bool IsSwapablePrimaryWeapon(const struct FEquipPosition& EquipPosition, const struct FString& Options);
	bool IsAttachableToWeapon(int WeaponIndex, class UAttachableItem* AttachableItem, bool bOnlyFree);
	class ATslCharacter* GetOwnerCharacter();
	int GetItemCountByClass(class UClass* ItemClass);
	class UEquipableItem* GetItem(const struct FEquipPosition& Position);
	class AInventoryFacade* GetInventoryFacade();
	struct FEquipPosition FindPosition(class UItem* Item);
	struct FEquipPosition FindEquipPosition(EEquipSlotID SlotID, bool bOnlyFree);
	struct FEquipPosition FindEquipableWeaponPosition(class UEquipableItem* EquipableItem, const struct FString& Options);
	int FindAttachableWeaponIndex(class UAttachableItem* AttachableItem, const struct FString& Options);
	int EquipPositionToWeaponIndex(const struct FEquipPosition& Position);
	bool EquipItem(const struct FEquipPosition& Position, class UEquipableItem* Item, bool bCheckViaCanEquipTo, bool bSoundPlay);
	void DropItem(const struct FEquipPosition& Position, const struct FName& ItemClassForVerify, bool bIsForce, bool bSoundPlay);
	void DropAttachedItemAll(const struct FEquipPosition& EquipPosition, const struct FName& ItemClassForVerify, bool bSoundPlay);
	void DropAttachedItem(const struct FEquipPosition& EquipPosition, const struct FName& ItemClassForVerify, EWeaponAttachmentSlotID SlotID, bool bSoundPlay);
	void DetachItemAll(const struct FEquipPosition& EquipPosition, const struct FName& ItemClassForVerify, bool bSoundPlay);
	void DetachItem(const struct FEquipPosition& EquipPosition, const struct FName& ItemClassForVerify, EWeaponAttachmentSlotID SlotID, bool bSoundPlay);
};


// Class TslGame.Inventory
// 0x0028 (0x0410 - 0x03E8)
class AInventory : public AItemSlotContainer
{
public:
	struct FScriptMulticastDelegate                    OnInventoryUpdated;                                       // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class UItem*>                               Items;                                                    // 0x03F8(0x0010) (Net, ZeroConstructor, Transient)
	float                                              MaxSpace;                                                 // 0x0408(0x0004) (Edit, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x040C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x30882c84);
		return ptr;
	}


	void UseItem(int Index, const struct FName& ItemClassForVerify);
	void OnFinishUseCast(class UObject* CastObject);
	void Items_RepNotify();
	class ATslCharacter* GetOwnerCharacter();
	float GetMaxSpace();
	int GetItemCountByClass(class UClass* ItemClass);
	int GetItemCount();
	class AInventoryFacade* GetInventoryFacade();
	float GetCurrentSpace();
	TArray<struct FInventoryItem> GetAllItemsByType(class UClass* ItemSuperClass);
	TArray<struct FInventoryItem> GetAllItems();
	int GetAdditionalMaxCount(class UItem* Item);
	int FindItemIndex(class UItem* Item);
	class UItem* FindItemHasMinStack(class UClass* ItemClass);
	class UItem* FindItem(class UClass* ItemClass);
	void EquipOrDropItem(int Index, const struct FName& ItemClassForVerify, bool bSoundPlay);
	void EquipItem(int Index, const struct FName& ItemClassForVerify, bool bSoundPlay);
	void DropItem(int Index, const struct FName& ItemClassForVerify, const struct FString& Options, bool bSoundPlay);
	bool ConsumeItemByClass(class UClass* ItemClass, int Count);
	void ClientBroadcastNoBagSpaceEvent();
	void AttachOrDropItem(int Index, const struct FName& ItemClassForVerify, bool bSoundPlay);
	void AttachItem(int Index, const struct FName& ItemClassForVerify, const struct FEquipPosition& EquipPosition, bool bSoundPlay);
};


// Class TslGame.ItemExplorerProxy
// 0x0020 (0x0438 - 0x0418)
class AItemExplorerProxy : public AItemExplorer
{
public:
	struct FScriptDelegate                             OnChangeItemExplorerProxy;                                // 0x0418(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0428(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xfa7015f8);
		return ptr;
	}


	void PropagateUpdateItemList();
	void PropagateDestroyContextMenuWidget();
	void PropagateCreateAndShowContextMenuWidget(const TScriptInterface<class USlotContainerInterface>& Param);
	void Pop();
	bool IsBaseExplorer();
};


// Class TslGame.CarePackageItem
// 0x00B0 (0x05C0 - 0x0510)
class ACarePackageItem : public AItemPackage
{
public:
	class UClass*                                      ParachuteClass;                                           // 0x0510(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SmokeFxClass;                                             // 0x0518(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SmokeAirFxClass;                                          // 0x0520(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LightFxClass;                                             // 0x0528(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmokeTime;                                                // 0x0530(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LimitFallSpeed;                                           // 0x0534(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SmokeSocket;                                              // 0x0538(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SmokeAirSocket;                                           // 0x0540(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LightSocket;                                              // 0x0548(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ParachuteSocket;                                          // 0x0550(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               LandSoundAk;                                              // 0x0558(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x0560(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPickupedItem;                                          // 0x0561(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHideIconOnMap;                                         // 0x0562(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTranslucentIconOnMap;                                  // 0x0563(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0564(0x0004) MISSED OFFSET
	class ATslParticle*                                SmokeFx;                                                  // 0x0568(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ATslParticle*                                SmokeAirFx;                                               // 0x0570(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ATslParticle*                                LightFx;                                                  // 0x0578(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      Parachute;                                                // 0x0580(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0588(0x0008) MISSED OFFSET
	class USimpleInterpolationMovement*                MovementComponent;                                        // 0x0590(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UBuoyancyForceComponent*                     BuoyancyForceComponent;                                   // 0x0598(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                AkComponent;                                              // 0x05A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x05A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x61982210);
		return ptr;
	}


	bool IsPickupedItem();
	bool IsFalling();
};


// Class TslGame.FloorSnapItemPackage
// 0x0018 (0x0528 - 0x0510)
class AFloorSnapItemPackage : public AItemPackage
{
public:
	float                                              RayLength;                                                // 0x0510(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseWaterSurface;                                         // 0x0514(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0515(0x0003) MISSED OFFSET
	float                                              WaterSurfaceThreshold;                                    // 0x0518(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x051C(0x0004) MISSED OFFSET
	class UBuoyancyForceComponent*                     BuoyancyForceComponent;                                   // 0x0520(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x393f5a5d);
		return ptr;
	}

};


// Class TslGame.NearbyInteractiveItemExplorer
// 0x0010 (0x0428 - 0x0418)
class ANearbyInteractiveItemExplorer : public AItemExplorer
{
public:
	TArray<TWeakObjectPtr<class UObject>>              ExplorableItems;                                          // 0x0418(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x40e68e53);
		return ptr;
	}

};


// Class TslGame.ThingSpawnProcessor
// 0x0010 (0x0038 - 0x0028)
class UThingSpawnProcessor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x2ba75a17);
		return ptr;
	}

};


// Class TslGame.SubThingSpawnProcessor
// 0x0000 (0x0028 - 0x0028)
class USubThingSpawnProcessor : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xbde5a1f9);
		return ptr;
	}

};


// Class TslGame.CombinedThingSpawnProcessor
// 0x0020 (0x0058 - 0x0038)
class UCombinedThingSpawnProcessor : public UThingSpawnProcessor
{
public:
	TArray<class UClass*>                              SubProcessorClasses;                                      // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<class USubThingSpawnProcessor*>             SubProcessors;                                            // 0x0048(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x17215a24);
		return ptr;
	}

};


// Class TslGame.PackageSubThingSpawnProcessor
// 0x03D0 (0x03F8 - 0x0028)
class UPackageSubThingSpawnProcessor : public USubThingSpawnProcessor
{
public:
	class UDataTable*                                  RawItemSpawnDataTable;                                    // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  RawItemSpawnTogetherDataTable;                            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FPackageSpotGroupProperty>           RawSpotGroupProperties;                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3B0];                                     // 0x0048(0x03B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x75b53549);
		return ptr;
	}

};


// Class TslGame.VehicleSubThingSpawnProcessor
// 0x03F0 (0x0418 - 0x0028)
class UVehicleSubThingSpawnProcessor : public USubThingSpawnProcessor
{
public:
	TArray<struct FVehicleSpotGroupProperty>           RawSpotGroupProperties;                                   // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UDataTable*                                  RawVehicleSpawnDataTable;                                 // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnZOffsetFromFloor;                                    // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3D4];                                     // 0x0044(0x03D4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd6217ec9);
		return ptr;
	}

};


// Class TslGame.Team
// 0x0068 (0x0418 - 0x03B0)
class ATeam : public AActor
{
public:
	struct FVector_NetQuantize100                      PlayerLocation;                                           // 0x03B0(0x000C) (Net, Transient)
	struct FRotator                                    PlayerRotation;                                           // 0x03BC(0x000C) (Net, Transient, IsPlainOldData)
	struct FString                                     PlayerName;                                               // 0x03C8(0x0010) (Net, ZeroConstructor, Transient)
	unsigned char                                      Health;                                                   // 0x03D8(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      HealthMax;                                                // 0x03D9(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      GroggyHealth;                                             // 0x03DA(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      GroggyHealthMax;                                          // 0x03DB(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   MapMarkerPosition;                                        // 0x03DC(0x0008) (Net, IsPlainOldData)
	unsigned char                                      bIsDying : 1;                                             // 0x03E4(0x0001) (Net, Transient)
	unsigned char                                      bIsGroggying : 1;                                         // 0x03E4(0x0001) (Net, Transient)
	unsigned char                                      bQuitter : 1;                                             // 0x03E4(0x0001) (Net, Transient)
	unsigned char                                      bShowMapMarker : 1;                                       // 0x03E4(0x0001) (Net, Transient)
	ETeamVehicleType                                   TeamVehicleType;                                          // 0x03E5(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03E6(0x0002) MISSED OFFSET
	float                                              BoostGauge;                                               // 0x03E8(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int8_t                                             MemberNumber;                                             // 0x03EC(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03ED(0x0003) MISSED OFFSET
	class ATslCharacter*                               TslCharacter;                                             // 0x03F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x03F8(0x0010) MISSED OFFSET
	struct FString                                     UniqueId;                                                 // 0x0408(0x0010) (Net, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x368865e3);
		return ptr;
	}


	void ServerSetShowMapMarker(bool bNewShowMapMarker);
	void ServerSetMapMarkerPosition(const struct FVector2D& NewMapMarkerPosition);
	void OnRep_Dying(bool bLastDying);
	bool IsShowMapMarker();
	bool IsQuitter();
	bool IsGroggying();
	bool IsDying();
	class ATslCharacter* GetTslCharacter();
	ETeamVehicleType GetRideVehicle();
	struct FString GetPlayerUniqueId();
	struct FRotator GetPlayerRotation();
	struct FString GetPlayerName();
	struct FVector GetPlayerLocation();
	int GetMemberNumber();
	struct FVector2D GetMapMarkerPosition();
	float GetHealthMax();
	float GetHealth();
	float GetGroggyHealthMax();
	float GetGroggyHealth();
};


// Class TslGame.ThingHolder
// 0x00A0 (0x0450 - 0x03B0)
class AThingHolder : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x03B0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x1a0227b6);
		return ptr;
	}

};


// Class TslGame.ThingSpot
// 0x0008 (0x03B8 - 0x03B0)
class AThingSpot : public AActor
{
public:
	class UThingSpotComponent*                         SpotComponent;                                            // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x42147084);
		return ptr;
	}

};


// Class TslGame.ThingSpotComponent
// 0x0010 (0x0400 - 0x03F0)
class UThingSpotComponent : public USceneComponent
{
public:
	EThingSpotGroupType                                SpotGroupType;                                            // 0x03F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03F1(0x0003) MISSED OFFSET
	struct FVector2D                                   RandomRotatorRange;                                       // 0x03F4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x5d865c51);
		return ptr;
	}

};


// Class TslGame.TslAccessoryComponent
// 0x0040 (0x0430 - 0x03F0)
class UTslAccessoryComponent : public USceneComponent
{
public:
	struct FTransform                                  InitialTransformAttachmentScene;                          // 0x03F0(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0420(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x144cfaba);
		return ptr;
	}


	void SetPhysicsSimulation(bool bSimulatePhysics);
	void InitSetupComponent(bool bSimulatePhysics);
};


// Class TslGame.TslAchievement
// 0x0018 (0x03C8 - 0x03B0)
class ATslAchievement : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xff341342);
		return ptr;
	}

};


// Class TslGame.TslAIController
// 0x0020 (0x04C8 - 0x04A8)
class ATslAIController : public AAIController
{
public:
	class UBlackboardComponent*                        BlackboardComp;                                           // 0x04A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UBehaviorTreeComponent*                      BehaviorComp;                                             // 0x04B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x04B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x4828f943);
		return ptr;
	}


	void ShootEnemy();
	bool FindClosestEnemyWithLOS(class ATslCharacter* ExcludeEnemy);
	void FindClosestEnemy();
};


// Class TslGame.TslAircraftVehicle
// 0x0090 (0x04A0 - 0x0410)
class ATslAircraftVehicle : public APawn
{
public:
	TArray<struct FAircraftParticle>                   AircraftParticles;                                        // 0x0410(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class ATslParticle*>                        AttachedParticles;                                        // 0x0420(0x0010) (ZeroConstructor)
	class UStaticMeshComponent*                        MeshComponent;                                            // 0x0430(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UTslAircraftVehicleMovement*                 MovementComponent;                                        // 0x0438(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USplineComponent*                            SplineComponent;                                          // 0x0440(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0448(0x0048) MISSED OFFSET
	float                                              TotalFlyingTime;                                          // 0x0490(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0494(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd8c10b59);
		return ptr;
	}

};


// Class TslGame.AircraftCarePackage
// 0x0070 (0x0510 - 0x04A0)
class AAircraftCarePackage : public ATslAircraftVehicle
{
public:
	class UClass*                                      CarePackageItemSpawnerClass;                              // 0x04A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CarePackageItemClass;                                     // 0x04A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FDropCarePackageTableData>           DropCarePackageTableData;                                 // 0x04B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UGeneralItemSpawner*                         CarePackageItemSpawner;                                   // 0x04C0(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class ATslPassCarePackageArea*>             PassCarePackageAreas;                                     // 0x04C8(0x0010) (ZeroConstructor, Transient)
	TArray<class ATslPassCarePackageAreaRectangle*>    PassCarePackageAreasRectangle;                            // 0x04D8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x28];                                      // 0x04E8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x0d86cbb7);
		return ptr;
	}


	bool IsPlayInEditor();
};


// Class TslGame.TransportAircraftVehicle
// 0x0078 (0x0518 - 0x04A0)
class ATransportAircraftVehicle : public ATslAircraftVehicle
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x04A0(0x0028) MISSED OFFSET
	class UAkAudioEvent*                               RideSound;                                                // 0x04C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               LeaveSound;                                               // 0x04D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkComponent*                                AkSoundCom;                                               // 0x04D8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UTslVehicleSeatComponent*                    VehicleSeatComponent;                                     // 0x04E0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UClass*                                      ParachuteItem;                                            // 0x04E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UInteractionComponent*                       InteractionComponent;                                     // 0x04F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bIsEnteredAtEjectionArea;                                 // 0x04F8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x04F9(0x0001) MISSED OFFSET
	bool                                               bIsVisible;                                               // 0x04FA(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x04FB(0x0001) MISSED OFFSET
	float                                              EjectPredictionTime;                                      // 0x04FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxEjectSpeed;                                            // 0x0500(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x14];                                      // 0x0504(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xcdbd3ebb);
		return ptr;
	}


	void OnRide(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat);
	void OnRep_IsVisible();
	void OnLocalPlayerRide();
	void OnLocalPlayerLeave();
	void OnLeave(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat);
	void OnInteractBy(class ATslCharacter* Character);
	bool IsInEjectionArea();
	void EnterAtEjectionArea();
	void EjectAll();
	bool AllowInteractBy(class ATslCharacter* Character);
};


// Class TslGame.TslAnchorActor
// 0x0010 (0x03C0 - 0x03B0)
class ATslAnchorActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x74326bf9);
		return ptr;
	}

};


// Class TslGame.TslWheeledVehicle
// 0x03C0 (0x07E0 - 0x0420)
class ATslWheeledVehicle : public AWheeledVehicle
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0420(0x0090) MISSED OFFSET
	class USphereComponent*                            ActivationTrigger;                                        // 0x04B0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UGamePadInputAixsComponent*                  GamePadInputAixsComponent;                                // 0x04B8(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              Health;                                                   // 0x04C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	float                                              HealthMax;                                                // 0x04C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Fuel;                                                     // 0x04C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	float                                              FuelMax;                                                  // 0x04CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStabilizeActive;                                         // 0x04D0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04D1(0x0003) MISSED OFFSET
	float                                              AirControlPitchInput;                                     // 0x04D4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              SpeedKPH;                                                 // 0x04D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x04DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RPM;                                                      // 0x04E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Brake;                                                    // 0x04E4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LatMax;                                                   // 0x04E8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LongSum;                                                  // 0x04EC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              WaterDepthMax;                                            // 0x04F0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              SurfaceMax;                                               // 0x04F4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              SuspensionMax;                                            // 0x04F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                FlatTireCount;                                            // 0x04FC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bDirtySpeedKPH : 1;                                       // 0x0500(0x0001)
	unsigned char                                      bDirtyThrottleInput : 1;                                  // 0x0500(0x0001)
	unsigned char                                      bDirtyRPM : 1;                                            // 0x0500(0x0001)
	unsigned char                                      bDirtyWaterDepthMax : 1;                                  // 0x0500(0x0001)
	unsigned char                                      bDirtyBrake : 1;                                          // 0x0500(0x0001)
	unsigned char                                      bDetectedStartup : 1;                                     // 0x0500(0x0001)
	unsigned char                                      bDetectedBraking : 1;                                     // 0x0500(0x0001)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0501(0x0007) MISSED OFFSET
	TArray<float>                                      WheelsLatSlip;                                            // 0x0508(0x0010) (ZeroConstructor, Transient)
	TArray<float>                                      WheelsLongSlip;                                           // 0x0518(0x0010) (ZeroConstructor, Transient)
	TArray<float>                                      WheelsSuspensionOffset;                                   // 0x0528(0x0010) (ZeroConstructor, Transient)
	TArray<class UPhysicalMaterial*>                   WheelsContactSurface;                                     // 0x0538(0x0010) (ZeroConstructor, Transient)
	TArray<class UPhysicalMaterial*>                   TestWheelsContactSurface_prev;                            // 0x0548(0x0010) (ZeroConstructor, Transient)
	TArray<float>                                      WheelsSuspensionMaxDrop;                                  // 0x0558(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      WheelsSuspensionMaxRaise;                                 // 0x0568(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UAkAudioEvent*                               NullSound;                                                // 0x0578(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTslImpactSoundInfo                         ImpactSound;                                              // 0x0580(0x0060) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FTslImpactSoundInfo                         LandingSound;                                             // 0x05E0(0x0060) (Edit, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               StartupSound;                                             // 0x0640(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               BreakSound;                                               // 0x0648(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               StopSound;                                                // 0x0650(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               CharacterHitSound;                                        // 0x0658(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxClampThrottleInClutch;                                 // 0x0660(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyCustomAnimUpdaterateSettings;                       // 0x0664(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0665(0x0003) MISSED OFFSET
	struct FAnimUpdateRateSettings                     AnimUpdateRateSettings;                                   // 0x0668(0x0078) (Edit, DisableEditOnInstance)
	unsigned char                                      bWantsToBoosting : 1;                                     // 0x06E0(0x0001) (Net, Transient)
	unsigned char                                      UnknownData04[0x3];                                       // 0x06E1(0x0003) MISSED OFFSET
	float                                              TorqueMultiplierForBoosting;                              // 0x06E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x06E8(0x0008) MISSED OFFSET
	class UTslVehicleHitComponent*                     VehicleHitComponent;                                      // 0x06F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UTslVehicleCommonComponent*                  VehicleCommonComponent;                                   // 0x06F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UTslVehicleSeatComponent*                    VehicleSeatComponent;                                     // 0x0700(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UTslVehicleEffectComponent*                  VehicleEffectComponent;                                   // 0x0708(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UTslVehicleSyncComponent*                    VehicleSyncComponent;                                     // 0x0710(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UTslVehicleTempComponent*                    VehicleTempComponent;                                     // 0x0718(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UTslPawnInputBindingComponent*               TslPawnInputBindingComponent;                             // 0x0720(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTslHornComponent*                           TslHornComponent;                                         // 0x0728(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UAkComponent*                                AudioComEngine;                                           // 0x0730(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UBuoyancyForceComponent*                     BuoyancyForceComponent;                                   // 0x0738(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	struct FName                                       SinkPoint;                                                // 0x0740(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SinkBuffType;                                             // 0x0748(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0750(0x0008) MISSED OFFSET
	class UBuffComponet*                               BuffComponent;                                            // 0x0758(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UClass*>                              ComponentsToDestroyOnDedicatedServer;                     // 0x0760(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bProcessAutoEject;                                        // 0x0770(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0771(0x0003) MISSED OFFSET
	float                                              AutoEjectGroundDistance;                                  // 0x0774(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AutoEjectRoll;                                            // 0x0778(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AutoEjectPitch;                                           // 0x077C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AutoEject_RiseRate;                                       // 0x0780(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AutoEject_FallRate;                                       // 0x0784(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0788(0x0004) MISSED OFFSET
	bool                                               bRunStabilizeOnEntry;                                     // 0x078C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x078D(0x0003) MISSED OFFSET
	float                                              StabilizeInitialTimer;                                    // 0x0790(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StablizeCurrentTimer;                                     // 0x0794(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              SteeringYawBias;                                          // 0x0798(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x44];                                      // 0x079C(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x1a13103b);
		return ptr;
	}


	void UpdateWheelSound();
	void UpdateWheelCaching();
	void UpdateBasicInfoCaching();
	void UnBindCallbackToHUD(class ATslPlayerController* InController);
	void SetAirControlPitchInput(float InInput);
	void ServerSetBoosting(bool bNewBoosting);
	void OnVehicleEjected();
	void OnRide(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat);
	void OnPostDriverRide();
	void OnPostDriverLeave();
	void OnLeave(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat);
	void OnCharacterHit(class ATslCharacter* HitCharacter, float HitDamage);
	void OnBreak();
	void OnBlockingWidgetOpened(class UWidget* Widget);
	void MulticastCharacterHitEffects(class ATslCharacter* CharacterHit, float HitDamage);
	bool IsSunken();
	bool IsStablizeOverrideActive();
	bool IsStabilizeOverrideEnabled();
	bool IsInWaterVolume();
	bool IsEnabledOptimizeTick();
	bool IsBoosting();
	class UTslWheeledVehicleMovement* GetTslVehicleMovement();
	float GetSteeringInput();
	float GetCurrentWaterSurfaceZ();
	class UBuffComponet* GetBuffComponent();
	float GetAirControlPitchInput();
	void BindCallbackToHUD(class ATslPlayerController* InController);
	void ActivationTriggerEndOverlap(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ActivationTriggerBeginOverlap(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
};


// Class TslGame.TslFloatingVehicle
// 0x00A8 (0x04B8 - 0x0410)
class ATslFloatingVehicle : public APawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0410(0x0010) MISSED OFFSET
	class UGamePadInputAixsComponent*                  GamePadInputAixsComponent;                                // 0x0420(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComponent;                                            // 0x0428(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UBuoyancyForceComponent*                     BuoyancyForceComponent;                                   // 0x0430(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UTslFloatingVehicleMovement*                 MovementComponent;                                        // 0x0438(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UTslVehicleHitComponent*                     VehicleHitComponent;                                      // 0x0440(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UTslVehicleCommonComponent*                  VehicleCommonComponent;                                   // 0x0448(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UTslVehicleSeatComponent*                    VehicleSeatComponent;                                     // 0x0450(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UTslVehicleEffectComponent*                  VehicleEffectComponent;                                   // 0x0458(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UTslVehicleSyncComponent*                    VehicleSyncComponent;                                     // 0x0460(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UTslVehicleTempComponent*                    VehicleTempComponent;                                     // 0x0468(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UTslHornComponent*                           TslHornComponent;                                         // 0x0470(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UTslPawnInputBindingComponent*               TslPawnInputBindingComponent;                             // 0x0478(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                AudioComEngine;                                           // 0x0480(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UClass*>                              ComponentsToDestroyOnDedicatedServer;                     // 0x0488(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       VehicleEnginePoint;                                       // 0x0498(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleEngineRadius;                                      // 0x04A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Health;                                                   // 0x04A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	float                                              HealthMax;                                                // 0x04A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Fuel;                                                     // 0x04AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	float                                              FuelMax;                                                  // 0x04B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x389c49e1);
		return ptr;
	}


	void UnBindCallbackToHUD(class ATslPlayerController* InController);
	void OnRide(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat);
	void OnPostDriverRide();
	void OnPostDriverLeave();
	void OnLeave(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat);
	void OnBlockingWidgetOpened(class UWidget* Widget);
	bool IsBoosting();
	float GetVehicleEngineImmersionDepth();
	struct FVector GetVehicleAcceleration();
	float GetSteerYawAngle();
	float GetMaxSteerYawAngle();
	void BindCallbackToHUD(class ATslPlayerController* InController);
};


// Class TslGame.TslWheeledVehicleMovement
// 0x0060 (0x0590 - 0x0530)
class UTslWheeledVehicleMovement : public UWheeledVehicleMovementComponent4W
{
public:
	TArray<float>                                      WheelHealthPercentages;                                   // 0x0530(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0540(0x0008) MISSED OFFSET
	struct FCustomTransmissionData                     CustomTransmission;                                       // 0x0548(0x0020) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0568(0x0004) MISSED OFFSET
	bool                                               bAlwaysUseDirectInput;                                    // 0x056C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x056D(0x0003) MISSED OFFSET
	float                                              Anim_SteeringInputInterpSpeed;                            // 0x0570(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Anim_InterpOfInterpSpeedScale;                            // 0x0574(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Anim_InterpOfInterpSpeedAbs;                              // 0x0578(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x057C(0x0008) MISSED OFFSET
	float                                              Anim_SpeedForInputTypeSwitch;                             // 0x0584(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0588(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x0ea00de4);
		return ptr;
	}


	void SetSimulateVehicle(bool bSimulate);
	void ServerUpdateAdditionalState(int TargetGear);
	void Server_SetMovementParameters(float InThrottle, float InSteer, float InBreak, float InHandbrake, int Gear);
	void ProcessCustomTransmission(float InVelocity);
	void OnDriverRide();
	void OnDriverLeave();
	void OnBreak();
	bool IsSimulatingVehicle();
	float GetWheelWaterDepth(int Index);
	float GetWheelSuspensionMaxRaise(int Index);
	float GetWheelSuspensionMaxDrop(int Index);
	float GetWheelRotationSpeed(int Index);
	TArray<float> GetWheelHealthPercentages();
	TEnumAsByte<EWheelContactType> GetWheelContactType(int Index, float MinVelocity, float MinSkid, float MinSpin, float SuspOffsetForContact);
	class UPhysicalMaterial* GetWheelContactSurfaceMaterial(int Index);
	struct FWheelContactData GetWheelContactData(int Index, float MinVelocity, float MinSkid, float MinSpin, float SuspOffsetForContact, float MinBrake, float MinRotationSpeed);
	float GetThrottleInput();
	float GetSteeringInputClamped();
	float GetSteeringInput();
	float GetHandbrakeInput();
	float GetBrakeInput();
	void ClientPunctureTire(int WheelIndex);
};


// Class TslGame.TslFloatingVehicleMovement
// 0x0050 (0x02B0 - 0x0260)
class UTslFloatingVehicleMovement : public UPawnMovementComponent
{
public:
	float                                              MaxAcceleration;                                          // 0x0260(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Acceleration;                                             // 0x0264(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              StartAccelerationRate;                                    // 0x0268(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StopAccelerationRate;                                     // 0x026C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRotationYawAngle;                                      // 0x0270(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationYawAngle;                                         // 0x0274(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RotationYawRate;                                          // 0x0278(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DirectionalAccelerationCurve;                             // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 SlideCompensationCurve;                                   // 0x0288(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostModifier;                                            // 0x0290(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsBoosting;                                              // 0x0294(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0295(0x0003) MISSED OFFSET
	float                                              ForwardInput;                                             // 0x0298(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RotationInput;                                            // 0x029C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02A0(0x0004) MISSED OFFSET
	float                                              HitCharacterDuration;                                     // 0x02A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x80990fb6);
		return ptr;
	}


	void ServerUpdateInput(float InForwardInput, float InRotationInput, bool bInIsBoosting);
	void OnDriverLeave();
	bool IsBoosting();
	float GetRotationYawAngle();
	float GetMaxRotationYawAngle();
	float GetMaxAcceleration();
	struct FVector GetCalculatedAcceleration();
	float GetAcceleration();
};


// Class TslGame.TslCharacterMovement
// 0x0390 (0x0BD0 - 0x0840)
class UTslCharacterMovement : public UCharacterMovementComponent
{
public:
	int                                                BroSimulateMovement;                                      // 0x0840(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0844(0x0004) MISSED OFFSET
	float                                              NetCorrectServerDeltaTime;                                // 0x0848(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     NetComputedPosition;                                      // 0x084C(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0xB0];                                      // 0x0858(0x00B0) MISSED OFFSET
	float                                              MaxProneSpeed;                                            // 0x0908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxGroggySpeed;                                           // 0x090C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpedHalfHeight;                                         // 0x0910(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              JumpVelocityLossScale;                                    // 0x0914(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ToFallVelocityDTScale;                                    // 0x0918(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ToFallVelocityClamp;                                      // 0x091C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SpeedToJumpModifier;                                      // 0x0920(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinJumpZVelocity;                                         // 0x0924(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxJumpZVelocity;                                         // 0x0928(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LandingJumpDecreaseModifier;                              // 0x092C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RecoveryWalkSpeedRatePerSec;                              // 0x0930(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinWalkSpeedModifier;                                     // 0x0934(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WalkSpeedModifierUnit;                                    // 0x0938(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinStandingJumpXYSpeed;                                   // 0x093C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SpeedInWaterModifier;                                     // 0x0940(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCPVault;                                              // 0x0944(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0945(0x0003) MISSED OFFSET
	TMap<EVaultAnimType, class UVaultingData*>         VaultingDataMap;                                          // 0x0948(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	int                                                HeightFor200;                                             // 0x0998(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HeightFor160;                                             // 0x099C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HeightFor120;                                             // 0x09A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HeightFor90;                                              // 0x09A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HeightFor60;                                              // 0x09A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SizeForNarrow;                                            // 0x09AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SizeForSlide;                                             // 0x09B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VelocityForMobile;                                        // 0x09B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlobalVaultScale;                                         // 0x09B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VaultCancelDTScalar;                                      // 0x09BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinVelocityForStaticVaultCheck;                           // 0x09C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   MaxVaultDistanceByVelocityInMap;                          // 0x09C4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   MaxVaultDistanceByVelocityOutMap;                         // 0x09CC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVaultingTask                               CurrentVaultingTask;                                      // 0x09D4(0x0040) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0A14(0x0004) MISSED OFFSET
	class UVaultingData*                               CurrentVaultingData;                                      // 0x0A18(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              V_Timer_CP;                                               // 0x0A20(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AnimMultiplierPreApex;                                    // 0x0A24(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AnimMultiplierPostApex;                                   // 0x0A28(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsVaulting_CP;                                           // 0x0A2C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0A2D(0x0003) MISSED OFFSET
	struct FVector                                     CharacterRelLocation;                                     // 0x0A30(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     LastVaultLocation;                                        // 0x0A3C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     AveragedVelocity;                                         // 0x0A48(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              LastVaultTime;                                            // 0x0A54(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VaultCancelAnimSpeed;                                     // 0x0A58(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsToCancelVault;                                      // 0x0A5C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x77];                                      // 0x0A5D(0x0077) MISSED OFFSET
	float                                              MaxSwimAcceleration;                                      // 0x0AD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxZSpeedOutOfWaterModifier;                              // 0x0AD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    MaxSwimmingRotationRate;                                  // 0x0ADC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    SwimmingRotationAcceleration;                             // 0x0AE8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MaxZSpeedOutOfWaterModifierForStandingSwimming;           // 0x0AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaveRidingModifier;                                       // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaveRidingSmoothingFactor;                                // 0x0AFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaveRidingModifierUnderWater;                             // 0x0B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StayingUnderWaterDepthBand;                               // 0x0B04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0B08(0x0004) MISSED OFFSET
	float                                              MaxUnderwaterSwimSpeed;                                   // 0x0B0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxUnderwaterSwimAcceleration;                            // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationUnderwaterSwimming;                    // 0x0B14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    MaxUnderwaterSwimmingRotationRate;                        // 0x0B18(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    UnderwaterSwimmingRotationAcceleration;                   // 0x0B24(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MinimumHighAltitude;                                      // 0x0B30(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0B34(0x0004) MISSED OFFSET
	float                                              MaxFallLateralSpeedAtHighAltitude;                        // 0x0B38(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TerminalVelocityAtHighAltitude;                           // 0x0B3C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DecreaseTerminalVelocityAtHighAltitude;                   // 0x0B40(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxFallAccelerationAtHighAltitude;                        // 0x0B44(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    FallRotationRateAtHighAltitude;                           // 0x0B48(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              AirControlAtHighAltitude;                                 // 0x0B54(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AirControlBoostMultiplierAtHighAltitude;                  // 0x0B58(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AirControlBoostVelocityThresholdAtHighAltitude;           // 0x0B5C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FallingDamageType;                                        // 0x0B60(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 EjectDamageCurve;                                         // 0x0B68(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingDamageMinZCut;                                     // 0x0B70(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingDamageVDampingZ;                                   // 0x0B74(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingDamageFactor;                                      // 0x0B78(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0xC];                                       // 0x0B7C(0x000C) MISSED OFFSET
	bool                                               UseBlockedHitDamage;                                      // 0x0B88(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData09[0x47];                                      // 0x0B89(0x0047) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x7a2415d1);
		return ptr;
	}


	bool TraceSphereForVaulting(const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<EDrawDebugTrace> DrawDebugType, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	bool TraceLineForVaulting(const struct FVector& Start, const struct FVector& End, TEnumAsByte<EDrawDebugTrace> DrawDebugType, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	bool TraceCapsuleForVaulting(const struct FVector& Start, const struct FVector& End, TEnumAsByte<EDrawDebugTrace> DrawDebugType, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	void StartVaultingTask(const struct FVaultingTask& InVaultTask);
	void PredictCapsulePathForVaulting(const struct FVector& StartPos, const struct FVector& LaunchVelocity, TEnumAsByte<EDrawDebugTrace> DrawDebugType, float DrawDebugTime, float CapsuleRadiusOverride, float CapsuleHalfHeightOverride, float SimFrequency, float MaxSimTime, struct FHitResult* OutHit, TArray<struct FVector>* OutPathPositions, struct FVector* OutLastTraceDestination);
	void LocalHandleVault_CP(const struct FVector& VaultStart, const struct FVector& VaultApex, const struct FVector& VaultApexAdditive, const struct FVector& VaultEnd, bool bIsClimb, EVaultAnimType VaultAnimType, bool bEndToFall, float Direction, float PlayerVelocity, float DistanceFromObject);
	bool IsVaulting();
	void HandleVaultPreEvaluation(bool bForceVelocity, const struct FVector& InForcedVelocity);
	struct FVaultingHandleResult HandleVaulting(const struct FVaultingHandleInput& Input);
	float GetVTimer();
	class UVaultingData* GetVaultingDataFromAnim(EVaultAnimType InVaultType);
	float GetMaxVaultDistanceBySpeed();
	float GetGlobalVaultingSpeedMultiplier();
	EVaultAnimType GetCurrentVaultType();
	EVaultAnimType EvaluateVaultAnimType(int FirstRow, int ApexAdditiveStepCounter, float AverageCellCount, bool bForceVault, bool bForceClimb, float CharVelocity);
	bool EndCurrentTaskToFall();
};


// Class TslGame.TslVehicleWheel
// 0x0110 (0x0218 - 0x0108)
class UTslVehicleWheel : public UVehicleWheel
{
public:
	float                                              Health;                                                   // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HealthMax;                                                // 0x010C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TireBoneName;                                             // 0x0110(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTireLink;                                             // 0x0118(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	int                                                TireLinkIndex;                                            // 0x011C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LongSlipSkidThreshold;                                    // 0x0120(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LateralSlipSkidThreshold;                                 // 0x0124(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpringCompressionLandingThreshold;                        // 0x0128(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bManualSuspensionSoundControl;                            // 0x012C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x012D(0x0003) MISSED OFFSET
	class UTslWheelSuspensionAudioData*                SuspensionAudioData;                                      // 0x0130(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WheelEffectOffset;                                        // 0x0138(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	class UTslWheelEffectType*                         RollEffect;                                               // 0x0148(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTslWheelEffectType*                         SkidAccelEffect;                                          // 0x0150(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTslWheelEffectType*                         SkidEffect;                                               // 0x0158(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PuncturedParticleClass;                                   // 0x0160(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PuncturedSparkParticleClass;                              // 0x0168(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              slipThresholdForPunkSpark;                                // 0x0170(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               LandingSound;                                             // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bApplyForceOnPuncture;                                    // 0x0180(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0181(0x0003) MISSED OFFSET
	float                                              PunctureForce;                                            // 0x0184(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PunctureVelocityScalar;                                   // 0x0188(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0xC];                                       // 0x018C(0x000C) MISSED OFFSET
	class ATslParticle*                                TslParticleRoll;                                          // 0x0198(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ATslParticle*                                TslParticleSkid;                                          // 0x01A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ATslParticle*                                TslParticleAccelSkid;                                     // 0x01A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ATslParticle*                                TslParticlePunctureSpark;                                 // 0x01B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x01B8(0x0008) MISSED OFFSET
	class UAkComponent*                                AudioCom;                                                 // 0x01C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              MinZVelocityForSuspensionSound;                           // 0x01C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3C];                                      // 0x01CC(0x003C) MISSED OFFSET
	float                                              TotalSpeedKmPerHour;                                      // 0x0208(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Slip;                                                     // 0x020C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               UseRoll;                                                  // 0x0210(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               UseSkid;                                                  // 0x0211(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               UseAccelSkid;                                             // 0x0212(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasLastStatus;                                           // 0x0213(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0214(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x0e871e98);
		return ptr;
	}

};


// Class TslGame.TslAnimInstance
// 0x0BA8 (0x0F20 - 0x0378)
class UTslAnimInstance : public UAnimInstance
{
public:
	struct FScriptMulticastDelegate                    WeaponFire;                                               // 0x0378(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    WeaponFireCycle;                                          // 0x0388(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipPrimary;                                             // 0x0398(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipSecondary;                                           // 0x03A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EqupiSidearm;                                             // 0x03B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipMelee;                                               // 0x03C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipThrown;                                              // 0x03D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnEquipPrimary;                                           // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnEquipSecondary;                                         // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnEqupiSidearm;                                           // 0x0408(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnEquipMelee;                                             // 0x0418(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnEquipThrown;                                            // 0x0428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ToggleFireMode;                                           // 0x0438(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadTactical;                                           // 0x0448(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadCharge;                                             // 0x0458(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadByOneStart;                                         // 0x0468(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadByOneStop;                                          // 0x0478(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadByOneSingle;                                        // 0x0488(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipThrownGrenade;                                       // 0x0498(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipThrownMolotov;                                       // 0x04A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipThrownOther;                                         // 0x04B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThrowPrepare;                                             // 0x04C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThrowCooking;                                             // 0x04D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThrowStart;                                               // 0x04E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThrowDrop;                                                // 0x04F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    LandHeavy;                                                // 0x0508(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    LandExtreme;                                              // 0x0518(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadCancel;                                             // 0x0528(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CharacterPickup;                                          // 0x0538(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnarmedAttack;                                            // 0x0548(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PowerupUsed;                                              // 0x0558(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ChangeCharacterAppearance;                                // 0x0568(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCastStart;                                              // 0x0578(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCastCancel;                                             // 0x0588(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCastFinish;                                             // 0x0598(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x05A8(0x0008) MISSED OFFSET
	class ATslCharacter*                               CharacterReference;                                       // 0x05B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      CharacterMesh_CP;                                         // 0x05B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	EAnimPawnState                                     PreEvalPawnState;                                         // 0x05C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05C1(0x0003) MISSED OFFSET
	float                                              LocomotionSpeed_CP;                                       // 0x05C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LocomotionSpeed2D_CP;                                     // 0x05C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMoving_CP;                                             // 0x05CC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x05CD(0x0003) MISSED OFFSET
	float                                              LocomotionDirection_CP;                                   // 0x05D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LocomotionDirectionClamped_CP;                            // 0x05D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LocomotionJumpDirection_CP;                               // 0x05D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LeanYaw_CP;                                               // 0x05DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    LastAbsoluteDirection_CP;                                 // 0x05E0(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    ControlRotation_CP;                                       // 0x05EC(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    ControlRotationLastMovement_CP;                           // 0x05F8(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    CharacterRotation_CP;                                     // 0x0604(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	EAnimStance                                        Stance_CP;                                                // 0x0610(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSprintingFast_CP;                                      // 0x0611(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSprinting_CP;                                          // 0x0612(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0613(0x0001) MISSED OFFSET
	float                                              WeaponGripType_CP;                                        // 0x0614(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SprintAlpha_CP;                                           // 0x0618(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SprintLocoAlpha_CP;                                       // 0x061C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SprintAlphaPitchComponent_CP;                             // 0x0620(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SprintAlphaSprintLimit_High;                              // 0x0624(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SprintAlphaSprintLimit_Low;                               // 0x0628(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SprintValue_CP;                                           // 0x062C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLocalQuickThrowHigh_CP;                                  // 0x0630(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0631(0x0003) MISSED OFFSET
	float                                              LocalThrowModeSwitchAlpha_CP;                             // 0x0634(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsJumping_CP;                                            // 0x0638(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bJumpForward_CP;                                          // 0x0639(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSwimming_CP;                                           // 0x063A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUnderWater_CP;                                         // 0x063B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDBNO_CP;                                               // 0x063C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EAnimStance                                        DBNOEntryStance;                                          // 0x063D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsReviving_CP;                                           // 0x063E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUpperbody_CP;                                          // 0x063F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTransitioning_CP;                                      // 0x0640(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0641(0x0003) MISSED OFFSET
	int                                                PlayerID_CP;                                              // 0x0644(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AirCraftIDAnim_CP;                                        // 0x0648(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEquippingPistol_CP;                                    // 0x064C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x064D(0x0003) MISSED OFFSET
	class UAnimMontage*                                PistolEquipMontageRefCP;                                  // 0x0650(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFlying_CP;                                             // 0x0658(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLocalPlayer;                                           // 0x0659(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x065A(0x0002) MISSED OFFSET
	float                                              LocalPlayerAlpha;                                         // 0x065C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPunching_CP;                                           // 0x0660(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0661(0x0003) MISSED OFFSET
	float                                              PunchingAlpha_CP;                                         // 0x0664(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EAnimWeaponType                                    Weapon_CP;                                                // 0x0668(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsArmedWithGun_CP;                                       // 0x0669(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsArmedWithThrown_CP;                                    // 0x066A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPreparingThrow_CP;                                     // 0x066B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ThrowableAdditionalAimYaw_CP;                             // 0x066C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CurrentRecoilMontage_CP;                                  // 0x0670(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               GripBlendSpace_CP;                                        // 0x0678(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             GripBlendSpaceLH_CP;                                      // 0x0680(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LHGripIndex_CP;                                           // 0x0688(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsReloading_CP;                                          // 0x068C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x068D(0x0003) MISSED OFFSET
	struct FVector                                     HandWeaponOffset_CP;                                      // 0x0690(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x069C(0x0004) MISSED OFFSET
	struct FTransform                                  WeaponInertia_CP;                                         // 0x06A0(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              ReloadAlpha_CP;                                           // 0x06D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HandWeaponOffsetAlpha_CP;                                 // 0x06D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RightClavicleRotation_CP;                                 // 0x06D8(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              FinalRecoilAlpha_CP;                                      // 0x06E4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             WeaponLocomotionBlendspace_CP;                            // 0x06E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             WeaponLocomotionBlendspace_Pistol;                        // 0x06F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             WeaponLocomotionBlendspace_SMG;                           // 0x06F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             WeaponLocomotionBlendspace_Rifle;                         // 0x0700(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             WeaponLocomotionBlendspace_Sniper;                        // 0x0708(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             WeaponLocomotionBlendspace_Pistol_FPP;                    // 0x0710(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             WeaponLocomotionBlendspace_SMG_FPP;                       // 0x0718(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             WeaponLocomotionBlendspace_Rifle_FPP;                     // 0x0720(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             WeaponLocomotionBlendspace_Sniper_FPP;                    // 0x0728(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertiaX_Scalar_CP;                                 // 0x0730(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertiaY_Scalar_CP;                                 // 0x0734(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertiaX_Clamp_CP;                                  // 0x0738(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertiaY_Clamp_CP;                                  // 0x073C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertia_InerpSpeed_CP;                              // 0x0740(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertiaX_Scalar_ADS_CP;                             // 0x0744(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertiaY_Scalar_ADS_CP;                             // 0x0748(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertiaX_Clamp_ADS_CP;                              // 0x074C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertiaY_Clamp_ADS_CP;                              // 0x0750(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertia_InerpSpeed_ADS_CP;                          // 0x0754(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertia_InerpSpeed_YawScalar_CP;                    // 0x0758(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertia_YawToRollScalar_CP;                         // 0x075C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertia_YawToRollScalar_ADS_CP;                     // 0x0760(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertiaRoll_Clamp_ADS_CP;                           // 0x0764(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertiaRoll_Clamp_CP;                               // 0x0768(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertia_Yaw_CP;                                     // 0x076C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WeaponInertia_Pitch_CP;                                   // 0x0770(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WeaponInertia_Roll_CP;                                    // 0x0774(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SprintWeaponLoweringAlpha_CP;                             // 0x0778(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RecoilRollValue_CP;                                       // 0x077C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RecoilTimer_CP;                                           // 0x0780(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RecoilRollRand_CP;                                        // 0x0784(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RecoilTimerScale_CP;                                      // 0x0788(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x078C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 RecoilRollCurve_CP;                                       // 0x0790(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponStabilityAlpha_CP;                                  // 0x0798(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WeaponStabilityRefSpeed_CP;                               // 0x079C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   WeaponStabilityRefMapIn_CP;                               // 0x07A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   WeaponStabilityRefMapOut_CP;                              // 0x07A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponStabilityInterpSpeed_CP;                            // 0x07B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsAiming_CP;                                             // 0x07B4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsScoping_CP;                                            // 0x07B5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x07B6(0x0002) MISSED OFFSET
	float                                              WeaponAimState_CP;                                        // 0x07B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SprintAlphaModifier_CP;                                   // 0x07BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAimingBackward_CP;                                     // 0x07C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x07C1(0x0003) MISSED OFFSET
	float                                              Yaw_CP;                                                   // 0x07C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RotationYaw_CP;                                           // 0x07C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Pitch_CP;                                                 // 0x07CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              YawNormalized_CP;                                         // 0x07D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DesiredPitch_CP;                                          // 0x07D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AimDirectionCardinal_CP;                                  // 0x07D8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x07D9(0x0003) MISSED OFFSET
	struct FRotator                                    AORot_CP;                                                 // 0x07DC(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    AORotBackwards_CP;                                        // 0x07E8(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              SwimmingPitch_CP;                                         // 0x07F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ForceAddAimOffset_CP;                                     // 0x07F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WeaponCollisionAlpha_CP;                                  // 0x07FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWeaponObstructedHigh_CP;                                 // 0x0800(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0801(0x0003) MISSED OFFSET
	float                                              WeaponCollisionReloadAlpha_CP;                            // 0x0804(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFalling_CP;                                            // 0x0808(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWasFalling_CP;                                           // 0x0809(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x2];                                       // 0x080A(0x0002) MISSED OFFSET
	float                                              FallingAlpha_CP;                                          // 0x080C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FallingMap2D;                                             // 0x0810(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   FallingMapZ;                                              // 0x0818(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceFall_CP;                                            // 0x0820(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x0821(0x0007) MISSED OFFSET
	class UAnimMontage*                                MontageFallingRifle_CP;                                   // 0x0828(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                MontageFallingUnarmed_CP;                                 // 0x0830(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LandingAlpha_CP;                                          // 0x0838(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLocalForceProne_CP;                                      // 0x083C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x083D(0x0003) MISSED OFFSET
	float                                              JumpHeight_CP;                                            // 0x0840(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FallHeight_CP;                                            // 0x0844(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     JumpStartLocation_CP;                                     // 0x0848(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     LandPredictionVector_CP;                                  // 0x0854(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              LeanLeftAlpha_CP;                                         // 0x0860(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LeanRightAlpha_CP;                                        // 0x0864(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LeanTwoSideAlpha_CP;                                      // 0x0868(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LeanLeftApplyTranslation_CP;                              // 0x086C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LeanInterpSpeed_CP;                                       // 0x0870(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeanInterpSpeedCollisionClamp_CP;                         // 0x0874(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseLinearLeanInterp;                                     // 0x0878(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFreefalling_CP;                                        // 0x0879(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsParachuting_CP;                                        // 0x087A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x1];                                       // 0x087B(0x0001) MISSED OFFSET
	float                                              FreefallX_CP;                                             // 0x087C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FreefallY_CP;                                             // 0x0880(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FreeFallAlpha_CP;                                         // 0x0884(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsParachuteLanding_CP;                                   // 0x0888(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsParachuteMoving_CP;                                    // 0x0889(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x2];                                       // 0x088A(0x0002) MISSED OFFSET
	float                                              Freefall_Yaw_CP;                                          // 0x088C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Freefall_Pitch_CP;                                        // 0x0890(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFreelooking_CP;                                        // 0x0894(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMeleeAttacking_CP;                                     // 0x0895(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLocalForceRotationHipLeft_CP;                            // 0x0896(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLocalForceRotationHipRight_CP;                           // 0x0897(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLocalForceRotationAimed_CP;                              // 0x0898(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x0899(0x0003) MISSED OFFSET
	float                                              RotationPlayrateAimed_CP;                                 // 0x089C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RotationPlayrateAimedAdditiveSpine_CP;                    // 0x08A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    LastRotation_CP;                                          // 0x08A4(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Freelook_Body_CP;                                         // 0x08B0(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Freelook_Delta_CP;                                        // 0x08BC(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	int                                                IdleIndex_CP;                                             // 0x08C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LastIdleIndex_CP;                                         // 0x08CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IdleTimer_CP;                                             // 0x08D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IdleTriggerRandom;                                        // 0x08D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IdleTriggerTimeMin_CP;                                    // 0x08D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IdleTriggerTimeVariation_CP;                              // 0x08DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  SlotPrimary_CP;                                           // 0x08E0(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FTransform                                  SlotSecondary_CP;                                         // 0x0910(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FTransform                                  SlotMelee_CP;                                             // 0x0940(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FTransform                                  SlotThrown_CP;                                            // 0x0970(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     SlotPrimary_Offset_CP;                                    // 0x09A0(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     SlotSecondary_Offset_CP;                                  // 0x09AC(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     SlotPrimary_Location_CP;                                  // 0x09B8(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     SlotSecondary_Location_CP;                                // 0x09C4(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     SlotMelee_Location_CP;                                    // 0x09D0(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     SlotThrown_Location_CP;                                   // 0x09DC(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    SlotPrimary_Rotation_CP;                                  // 0x09E8(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    SlotSecondary_Rotation_CP;                                // 0x09F4(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    SlotMelee_Rotation_CP;                                    // 0x0A00(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    SlotThrown_Rotation_CP;                                   // 0x0A0C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TMap<class UClass*, struct FTransform>             SlotPrimaryOffsetsPerWeapon;                              // 0x0A18(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<class UClass*, struct FTransform>             SlotSecondaryOffsetsPerWeapon;                            // 0x0A68(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              AnimDynamicsStandAlpha_CP;                                // 0x0AB8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AnimDynamicsStandSprintAlpha_CP;                          // 0x0ABC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AnimDynamicsCrouchAlpha_CP;                               // 0x0AC0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AnimDynamicsProneAlpha_CP;                                // 0x0AC4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EFCoat_CP;                                                // 0x0AC8(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bLocalFPP_CP;                                             // 0x0AD4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x0AD5(0x0003) MISSED OFFSET
	float                                              LocalFPPAlpha_CP;                                         // 0x0AD8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LocalFPPAlphaVehicleAimAO_CP;                             // 0x0ADC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInAircraft_CP;                                         // 0x0AE0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDriver_CP;                                             // 0x0AE1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSitting_CP;                                            // 0x0AE2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInVehicle_CP;                                          // 0x0AE3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LocalSteerInput_CP;                                       // 0x0AE4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LocalSteerInputMoto_CP;                                   // 0x0AE8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LocalStopMoto_CP;                                         // 0x0AEC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LocalThrottleInput_CP;                                    // 0x0AF0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    GasThighRot_CP;                                           // 0x0AF4(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    GasAnkleRot_CP;                                           // 0x0B00(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x0B0C(0x0004) MISSED OFFSET
	struct FTransform                                  GasKneeTransformX_CP;                                     // 0x0B10(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              LocalBrakeInput_CP;                                       // 0x0B40(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData24[0xC];                                       // 0x0B44(0x000C) MISSED OFFSET
	struct FTransform                                  BrakeKneeTransform_CP;                                    // 0x0B50(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    BrakeAnkleRot_CP;                                         // 0x0B80(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              BackwardAOAlpha_CP;                                       // 0x0B8C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AimBlendAlpha_CP;                                         // 0x0B90(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasContact_CP;                                           // 0x0B94(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x0B95(0x0003) MISSED OFFSET
	float                                              GroundContactMoto_CP;                                     // 0x0B98(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AirControlPitchInput_CP;                                  // 0x0B9C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  DriverIK_CP;                                              // 0x0BA0(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              PassengerIKAlpha_CP;                                      // 0x0BD0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DriverSpineLocWS_CP;                                      // 0x0BD4(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	EVehicleAnimType                                   VehicleSeatType_CP;                                       // 0x0BE0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMotoHasDriver_CP;                                        // 0x0BE1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bVaultCanceled;                                           // 0x0BE2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsVaulting_CP;                                           // 0x0BE3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AnimHairAlpha;                                            // 0x0BE4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VaultTimer_CP;                                            // 0x0BE8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VaultTimerLast_CP;                                        // 0x0BEC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EVaultAnimType                                     LocalVaultType_CP;                                        // 0x0BF0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x0BF1(0x0007) MISSED OFFSET
	class UAnimSequenceBase*                           VaultAnimSequence_CP;                                     // 0x0BF8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VaultAnimLength_CP;                                       // 0x0C00(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData27[0x4];                                       // 0x0C04(0x0004) MISSED OFFSET
	class UCurveFloat*                                 VaultCurve_CP;                                            // 0x0C08(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VaultBlendInTime_CP;                                      // 0x0C10(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VaultBlendOutTime_CP;                                     // 0x0C14(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEndVaultToFall_CP;                                       // 0x0C18(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x0C19(0x0003) MISSED OFFSET
	float                                              VaultBlendOutProgressTime_CP;                             // 0x0C1C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VaultBlendOutExactTime_CP;                                // 0x0C20(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VaultLastActionTimer_CP;                                  // 0x0C24(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VaultAnimTime_CP;                                         // 0x0C28(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VaultBlendOutTimeBuffer;                                  // 0x0C2C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ECastAnim                                          CurrentCastAnim_CP;                                       // 0x0C30(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsActiveRagdoll_CP;                                      // 0x0C31(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData29[0x2];                                       // 0x0C32(0x0002) MISSED OFFSET
	float                                              WeaponIKLH_CP;                                            // 0x0C34(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WeaponIKRH_CP;                                            // 0x0C38(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MontageIKLH_CP;                                           // 0x0C3C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MontageIKRH_CP;                                           // 0x0C40(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IgnoreWeaponTransform_CP;                                 // 0x0C44(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PickupIKAlpha_CP;                                         // 0x0C48(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TargetIKRH_CP;                                            // 0x0C4C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TargetIKLH_CP;                                            // 0x0C50(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ForceLegsFromAnim_CP;                                     // 0x0C54(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ATslWeapon_Gun*                              LastGunCache_CP;                                          // 0x0C58(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ATslWheeledVehicle*                          CachedWheeledVehicle_CP;                                  // 0x0C60(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ATslFloatingVehicle*                         CachedFloatingVehicle_CP;                                 // 0x0C68(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             PassengerAimBS_CP;                                        // 0x0C70(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             PassengerTransitionOut_CP;                                // 0x0C78(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             PassengerTransitionIn_CP;                                 // 0x0C80(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           PassengerIdle_Rifle_CP;                                   // 0x0C88(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           PassengerIdle_Unarmed_CP;                                 // 0x0C90(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           PassengerIdle_Grenade_CP;                                 // 0x0C98(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           PassengerIdle_Melee_CP;                                   // 0x0CA0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CurveAimState_CP;                                         // 0x0CA8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x8];                                       // 0x0CB0(0x0008) MISSED OFFSET
	bool                                               bIsLOD1;                                                  // 0x0CB8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLOD2;                                                  // 0x0CB9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsWearingCoat;                                           // 0x0CBA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData31[0x9];                                       // 0x0CBB(0x0009) MISSED OFFSET
	float                                              AnimatedHairsAlpha;                                       // 0x0CC4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsParentalControl;                                       // 0x0CC8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData32[0x7];                                       // 0x0CC9(0x0007) MISSED OFFSET
	class UAnimMontage*                                MontageMeleeAttack1;                                      // 0x0CD0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                MontageMeleeAttack2;                                      // 0x0CD8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                MontageMeleeAttack3;                                      // 0x0CE0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                MontagePunchingAttack1;                                   // 0x0CE8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                MontagePunchingAttack2;                                   // 0x0CF0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                MontagePunchingAttack3;                                   // 0x0CF8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FPPSprintAnimScalar;                                      // 0x0D00(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FPP_PrimaryAndSecondaryItemOffset;                        // 0x0D04(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              PunchingAlphaOneTarget_CP;                                // 0x0D10(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PunchingAlphaInterpSpeed;                                 // 0x0D14(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintWeaponLoweringScalar_CP;                            // 0x0D18(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrowStateSwitchInterpSpeed;                              // 0x0D1C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VaultingEvalTimeout;                                      // 0x0D20(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData33[0x4];                                       // 0x0D24(0x0004) MISSED OFFSET
	class UAnimDB*                                     UnarmedAnimDB_CP;                                         // 0x0D28(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimDB*                                     RifleAnimDB_CP;                                           // 0x0D30(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimDB*                                     MeleeAnimDB_CP;                                           // 0x0D38(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimDB*                                     GrenadeAnimDB_CP;                                         // 0x0D40(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData34[0x8];                                       // 0x0D48(0x0008) MISSED OFFSET
	struct FTransform                                  DefaultSlotPrimary_Male_CP;                               // 0x0D50(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  DefaultSlotSecondary_Male_CP;                             // 0x0D80(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  DefaultSlotMelee_Male_CP;                                 // 0x0DB0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  DefaultSlotThrown_Male_CP;                                // 0x0DE0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  DefaultSlotPrimary_Female_CP;                             // 0x0E10(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  DefaultSlotSecondary_Female_CP;                           // 0x0E40(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  DefaultSlotThrown_Female_CP;                              // 0x0E70(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  DefaultSlotMelee_Female_CP;                               // 0x0EA0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintLocoTimeMultiplier;                                 // 0x0ED0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintLocoTimeMultiplier_FPP;                             // 0x0ED4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintLocoTimeAlphaScalar;                                // 0x0ED8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintLocoTimeAlphaScalar_FPP;                            // 0x0EDC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintLocoInstantScalar;                                  // 0x0EE0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocomotionDirectionInterp;                                // 0x0EE4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeanYawInterpSpeedMin;                                    // 0x0EE8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeanYawInterpSpeedMax;                                    // 0x0EEC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeanYawGlobalMultiplier;                                  // 0x0EF0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeanYawClamp;                                             // 0x0EF4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintLocoStandLimit_High;                                // 0x0EF8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintLocoCrouchLimit_High;                               // 0x0EFC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintLocoProneLimit_High;                                // 0x0F00(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintLocoStandLimit_Low;                                 // 0x0F04(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintLocoCrouchLimit_Low;                                // 0x0F08(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintLocoProneLimit_Low;                                 // 0x0F0C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintLocoLimitInterpSpeed;                               // 0x0F10(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RightClavicleCompensation;                                // 0x0F14(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x37118367);
		return ptr;
	}


	void SetWeaponStatesEvaluationCooldown(float Time);
	void SetLandPredictionVector(const struct FVector& newLandVector);
	void SetJumpStartLocation(const struct FVector& NewLocation, float DefaultFallHeight);
	void ResetRecoilRoll();
	void ResetIdle();
	void RandomizeIdleIndex_CP(bool ExludeLastIndex);
	void ProcessCodePaths();
	void PreEvaluatePawnState();
	void OnHitReaction(EAnimWeaponType WeaponType, const struct FName& BoneName, const struct FVector& Direction);
	void HandleSpeedAndDirection_CP();
	void HandleItemOffsets_CP();
	unsigned char HandleCardinalDirection90(float InDirection);
	void HandleAnimCurves();
	void HandleADSSocketOffset();
	void GetVehicleAO(float* Yaw, float* Pitch);
	class UBlendSpace* GetBlendSpaceRelaxed_TS(TEnumAsByte<EAnimStanceType> AnimStance, bool bIsFPP, class UAnimDB* InAnimDB);
	class UBlendSpace* GetBlendSpace_TS(TEnumAsByte<EAnimStanceType> AnimStance, bool bIsFPP, class UAnimDB* InAnimDB);
	float GetAnimSpeed_TS(TEnumAsByte<EAnimStanceType> AnimStance, float Direction, float InSpeed, class UAnimDB* InAnimDB, bool bIsSprinting, float* PlayRate, float* SprintAlpha);
	bool GetAbsActorToBaseRotation(bool bInUseMin, float InAngle);
	float FindPositionFromDistanceCurve(float Distance, class UAnimSequenceBase* InAnimSequence);
	void EvaluateWeaponStates();
	void EvaluateWeaponStability();
	void EvaluateWeaponInertia();
	void EvaluateWeaponCollision();
	void EvaluateVehicle();
	void EvaluateVaulting();
	void EvaluateSwimming();
	void EvaluateRotations();
	void EvaluateRecoilRoll();
	void EvaluatePawnStates();
	void EvaluateMeleeAttack();
	void EvaluateLocalPawnStates();
	void EvaluateLeaning();
	void EvaluateJumping();
	void EvaluateJumpCamera();
	void EvaluateItemOffsets();
	void EvaluateIdle();
	void EvaluateFreelook();
	void EvaluateFreefallAndParachute();
	void EvaluateFallingAndLanding();
	void EvaluateCoatExternalForce();
	void EvaluateCharacterStates();
	void EvaluateCasting();
	void EvaluateAnimDynamics();
	void EvaluateAimStates();
	void EvaluateAimOffsets();
	void CacheCharacterReference(class ATslCharacter* InCharacter);
};


// Class TslGame.TslDamageType
// 0x0050 (0x0090 - 0x0040)
class UTslDamageType : public UDamageType
{
public:
	EDamageTypeCategory                                DamageTypeCategory;                                       // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FCanvasIcon                                 KillIcon;                                                 // 0x0048(0x0018) (Edit, BlueprintReadOnly, DisableEditOnInstance)
	class UForceFeedbackEffect*                        HitForceFeedback;                                         // 0x0060(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        KilledForceFeedback;                                      // 0x0068(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bFallDamage : 1;                                          // 0x0070(0x0001) (Edit, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	TArray<struct FDamageRatioInfo>                    DamageRatioInfos;                                         // 0x0078(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               HitReaction;                                              // 0x0088(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0089(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x9bcd5a1e);
		return ptr;
	}

};


// Class TslGame.TslHUD
// 0x04B8 (0x0A00 - 0x0548)
class ATslHUD : public ATslBaseHUD
{
public:
	struct FScriptMulticastDelegate                    OnPossessPawnChange;                                      // 0x0548(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDisplaySystemMessage;                                   // 0x0558(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDisplayKilledMessage;                                   // 0x0568(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnKillCountChanged;                                       // 0x0578(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyHit;                                              // 0x0588(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTeamPlayerJoin;                                         // 0x0598(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTeamPlayerRemove;                                       // 0x05A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyStartBuff;                                        // 0x05B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyHealAmount;                                       // 0x05C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyRestrictingPlayArea;                              // 0x05D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyNextGasIn;                                        // 0x05E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyDisplayMessage;                                   // 0x05F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyWeaponChange;                                     // 0x0608(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyWeaponUnarm;                                      // 0x0618(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyHeal;                                             // 0x0628(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyDropSlotOnOtherContainer;                         // 0x0638(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyBlockingWidgetOpened;                             // 0x0648(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyHealItemSelector_Gamepad;                         // 0x0658(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyReloadingNeed;                                    // 0x0668(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyReloaded;                                         // 0x0678(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyVehicleRide;                                      // 0x0688(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyVehicleLeave;                                     // 0x0698(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                BluezoneState;                                            // 0x06A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGpsReset;                                                // 0x06AC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBluezoneReset;                                           // 0x06AD(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayzoneReset;                                           // 0x06AE(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x06AF(0x0001) MISSED OFFSET
	float                                              GpsResetTimeCheck;                                        // 0x06B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x34];                                      // 0x06B4(0x0034) MISSED OFFSET
	struct FCanvasIcon                                 TimePlaceBg;                                              // 0x06E8(0x0018)
	struct FCanvasIcon                                 PrimaryWeapBg;                                            // 0x0700(0x0018)
	struct FCanvasIcon                                 SecondaryWeapBg;                                          // 0x0718(0x0018)
	struct FCanvasIcon                                 Crosshair[0x5];                                           // 0x0730(0x0018)
	unsigned char                                      UnknownData02[0x78];                                      // 0x07A8(0x0078) MISSED OFFSET
	class UTexture2D*                                  HitNotifyTexture;                                         // 0x0820(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  HUDMainTexture;                                           // 0x0828(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  HUDAssets02Texture;                                       // 0x0830(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  LowHealthOverlayTexture;                                  // 0x0838(0x0008) (ZeroConstructor, IsPlainOldData)
	class UFont*                                       BigFont;                                                  // 0x0840(0x0008) (ZeroConstructor, IsPlainOldData)
	class UFont*                                       NormalFont;                                               // 0x0848(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x60];                                      // 0x0850(0x0060) MISSED OFFSET
	class UTslSceneCaptureWorld*                       SceneCaptureWorld;                                        // 0x08B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x08B8(0x0010) MISSED OFFSET
	struct FVector                                     NextPlayzonePosition;                                     // 0x08C8(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              NextPlayzoneRadius;                                       // 0x08D4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurrentPlayzonePosition;                                  // 0x08D8(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              CurrentPlayzoneRadius;                                    // 0x08E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x50];                                      // 0x08E8(0x0050) MISSED OFFSET
	struct FString                                     SceneCapturePackageName;                                  // 0x0938(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData06[0xB8];                                      // 0x0948(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf8765ac0);
		return ptr;
	}


	void TestSendSystemMessage(const struct FText& Message, float Duration);
	void TestSendImportantMessage(const struct FText& Message, float Duration);
	void TestKillMessage(const struct FString& KillerName, const struct FString& VictimName, bool bKillerIsOwner, bool bVictimIsOwner);
	void TestGameEvent_MatchEnded();
	void TestGameEvent_KillOtherPlayer(bool bGroggy);
	void TestGameEvent_Die(bool bGroggy);
	void SpawnActorInSceneCaptureWorld(class UClass* ActorClass, const struct FTransform& SpawnTransform, const struct FScriptDelegate& DelegateToCall);
	void SetHighlightProvider(const struct FString& Provider);
	void RecordReplayHighlightSession(float timeLength);
	void NotifyDropSlotOnOtherContainer(const TScriptInterface<class USlotContainerInterface>& Container, const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& OtherContainer);
	bool IsGameEnded();
	void InitCaptureWorld();
	void GoToLobby();
	class APawn* GetPossessPawn();
	class ATslCharacter* GetPossessCharacter();
	float GetHealAmount();
};


// Class TslGame.TslSettings
// 0x04F8 (0x0520 - 0x0028)
class UTslSettings : public UObject
{
public:
	bool                                               SupportedClientReplay;                                    // 0x0028(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               SupportedKillcam;                                         // 0x0029(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                MaxReplaysForNullStreamer;                                // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              RepDistance_Item;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RepDistance_Character;                                    // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RepDistance_Weapon;                                       // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RepDistance_Vehicle;                                      // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RepDistance_Parachute;                                    // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RepDistance_Door;                                         // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RepDistance_Window;                                       // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RepFrequency_Character;                                   // 0x004C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RepFrequency_WheeledVehicle;                              // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RepFrequency_FloatingVehicle;                             // 0x0054(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RepFrequency_Parachute;                                   // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RepFrequency_Aircraft;                                    // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RepFrequency_CarePackage;                                 // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RepVehicle_SpawnDistance;                                 // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RepVehicle_UnspawnDistance;                               // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FRigidBodyErrorCorrection                   RepVehicle_PhysicErrorCorrection;                         // 0x006C(0x001C) (Edit, Config)
	float                                              CharacterCorrection_MaxSpeed;                             // 0x0088(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CharacterCorrection_MaxSpeedPositionError;                // 0x008C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CharacterCorrection_ZeroSpeedPositionError;               // 0x0090(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bBattlEyeEnabled;                                         // 0x0094(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bBattlEyeEnabledInPIE;                                    // 0x0095(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0096(0x0002) MISSED OFFSET
	float                                              BattlEyeReliablePacketIntervalOnClient;                   // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              BattlEyeReliablePacketIntervalOnServer;                   // 0x009C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bTPEnabled;                                               // 0x00A0(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bTPEnabledInPIE;                                          // 0x00A1(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bTPLaFPSUpdateStatus;                                     // 0x00A2(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00A3(0x0001) MISSED OFFSET
	float                                              TPLaFPSUpdateStatusPeriodInMs;                            // 0x00A4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bChineseLicensing;                                        // 0x00A8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseGappLobby;                                            // 0x00A9(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x00AA(0x0006) MISSED OFFSET
	struct FString                                     GappLobbyUrl;                                             // 0x00B0(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bKoreanRating;                                            // 0x00C0(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	float                                              GameStateLogInterval;                                     // 0x00C4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              ServerStatLogInterval;                                    // 0x00C8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CharacterPositionLogInterval;                             // 0x00CC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DestructibleComponentMaxDrawDistance;                     // 0x00D0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	class UClass*                                      CharacterClassToPlay;                                     // 0x00D8(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FBoneBinding>                        BoneMapping;                                              // 0x00E0(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               TestVehicleClasses;                                       // 0x00F0(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               TestFloatingVehicleClasses;                               // 0x0100(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FChineseLicensingDefaultCustomizeData> ChineseLicensingDefaultCustomizeData;                     // 0x0110(0x0010) (Edit, ZeroConstructor, Config)
	float                                              StoppedWheeledVehicleSpeedThreshold;                      // 0x0120(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              StoppedFloatingVehicleSpeedThreshold;                     // 0x0124(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              LastDriverDuration;                                       // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              InteractableDistanceToleranceOnDedicatedServer;           // 0x012C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              InteractableDistance_ItemDefault;                         // 0x0130(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              InteractableSpeed_ItemDefault;                            // 0x0134(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FInteractionCollisionData                   InteractionCollisionForFPS;                               // 0x0138(0x0014) (Edit, Config)
	struct FInteractionCollisionData                   InteractionCollisionForTPS;                               // 0x014C(0x0014) (Edit, Config)
	bool                                               bPreventFinishMatchInPIE;                                 // 0x0160(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableInitialItemDonator;                                // 0x0161(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0162(0x0002) MISSED OFFSET
	float                                              InventoryMaxSpaceDefault;                                 // 0x0164(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	class UTexture*                                    ErrorIconTexture;                                         // 0x0168(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTexture*                                    LoadingIconTexture;                                       // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             AssetsForPackageIntegrity;                                // 0x0178(0x0010) (ZeroConstructor)
	float                                              UICrosshairDistance;                                      // 0x0188(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              UICrosshairInterpSpeed;                                   // 0x018C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              UICrosshairDisableDistance;                               // 0x0190(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              BallisticDragScale;                                       // 0x0194(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              BallisticDropScale;                                       // 0x0198(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              BallisticMOAScale;                                        // 0x019C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RecoilControlScale;                                       // 0x01A0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RecoilAnimScale;                                          // 0x01A4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              GameTimeMultiplier;                                       // 0x01A8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               AimOffsetRayCast;                                         // 0x01AC(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x01AD(0x0003) MISSED OFFSET
	float                                              MeleeWeaponPitchMin;                                      // 0x01B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              MeleeWeaponPitchMax;                                      // 0x01B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableThrowLagCompensation;                               // 0x01B8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               FullRecoilRecovery;                                       // 0x01B9(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x01BA(0x0002) MISSED OFFSET
	struct FLevelLoadingBoostParameters                LevelLoadingBoostParameters;                              // 0x01BC(0x0010) (Edit, Config)
	unsigned char                                      UnknownData09[0x4];                                       // 0x01CC(0x0004) MISSED OFFSET
	TArray<struct FString>                             ErangelIgnoreWeatherIds;                                  // 0x01D0(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FNearClippingValue>                  NearClippingValues;                                       // 0x01E0(0x0010) (ZeroConstructor, Config)
	TArray<struct FTslGame_FCustomizableCategoryData>  CustomizableCategoryData;                                 // 0x01F0(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FCustomizableActionName>             CustomizableActionNames;                                  // 0x0200(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FTslGame_FCustomizableAxisName>      CustomizableAxisNames;                                    // 0x0210(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FCustomizableMouseSensitiveName>     CustomizableMouseSensitiveNames;                          // 0x0220(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FCustomizableGamePadSensitiveName>   CustomizableGamePadSensitiveNames;                        // 0x0230(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FSurportQualityLevel>                SupportedQualityLevels;                                   // 0x0240(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FScreenResolution>                   SupportedScreenResolutions;                               // 0x0250(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       MouseSensitivityCurve;                                    // 0x0260(0x0010) (Edit, Config)
	struct FStringAssetReference                       GammaCurve;                                               // 0x0270(0x0010) (Edit, Config)
	struct FAimAcceleration                            GamePadAimAcceleration;                                   // 0x0280(0x0008) (Edit, Config, IsPlainOldData)
	TArray<struct FColorBlindType>                     ColorBlindTypes;                                          // 0x0288(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FPresetColor>                        CrosshairColors;                                          // 0x0298(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FKeyInputModeName>                   KeyInputModeNames;                                        // 0x02A8(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FUiType>                             MiniMapTypeList;                                          // 0x02B8(0x0010) (Edit, ZeroConstructor, Config)
	float                                              MinimumScreenResolutionRatio;                             // 0x02C8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FScreenResolution                           MinimumScreenResolution;                                  // 0x02CC(0x0008) (Edit, Config)
	unsigned char                                      UnknownData10[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	TArray<struct FTeamColorAndIcon>                   OverrideMarkerColorAndIcons;                              // 0x02D8(0x0010) (Edit, ZeroConstructor, Config)
	float                                              PunchClientHitLeeway_Attacker;                            // 0x02E8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PunchClientHitLeeway_Victim;                              // 0x02EC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PunchClientHitLeeway_VictimInPlace;                       // 0x02F0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              ClientSideHitLeeway;                                      // 0x02F4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              ClientSideHitLeewayInPlace;                               // 0x02F8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              LogClientSideHitLeeway;                                   // 0x02FC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              ClientSideOriginDistanceLeeway;                           // 0x0300(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              ClientSideOriginDistanceLeewayInPlace;                    // 0x0304(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              ClientSideOriginDistanceMax;                              // 0x0308(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TravelDistanceLeeway;                                     // 0x030C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AllowedHitLag;                                            // 0x0310(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              LogMinHitLag;                                             // 0x0314(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              HackDetectionSpeed;                                       // 0x0318(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x031C(0x0004) MISSED OFFSET
	TArray<struct FOverrideScalability>                OverrideScalabilities;                                    // 0x0320(0x0010) (Edit, ZeroConstructor, Config)
	float                                              FakeDoorBlockMaxY;                                        // 0x0330(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	TArray<struct FReportCauseData>                    ReportCauses;                                             // 0x0338(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FSubjectToReport>                    SubjectToReport;                                          // 0x0348(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FReportDetailCauseTypeDescription>   ReportDetailCauseTypeDescriptions;                        // 0x0358(0x0010) (Edit, ZeroConstructor, Config)
	float                                              FreelookRecoveryInterpSpeed;                              // 0x0368(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	TMap<struct FName, float>                          GamepadSensitiveMultiplier;                               // 0x0370(0x0050) (Edit, ZeroConstructor, Config)
	float                                              GamePadInnerDeadZone;                                     // 0x03C0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              GamePadOutDeadZoneAcceleration;                           // 0x03C4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              GamePadOutMaxAxisValue;                                   // 0x03C8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              GamePadAccelerationStandardFps;                           // 0x03CC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AimAssistDecisionRadius;                                  // 0x03D0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bApplyInputValue;                                         // 0x03D4(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIgnorePadSensitive;                                      // 0x03D5(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x03D6(0x0002) MISSED OFFSET
	float                                              InsensitiveZone;                                          // 0x03D8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	TArray<struct FAimAssistData>                      AimCameraAssists;                                         // 0x03E0(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FAimAssistData>                      ADSCameraAssists;                                         // 0x03F0(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FAimAssistData>                      Scope2XCameraAssists;                                     // 0x0400(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FAimAssistData>                      Scope4XCameraAssists;                                     // 0x0410(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FAimAssistData>                      Scope8XCameraAssists;                                     // 0x0420(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FAimAssistData>                      Scope15XCameraAssists;                                    // 0x0430(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bIsESports;                                               // 0x0440(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	struct FStringAssetReference                       DialogUMGWidgetClassStringAssetReference;                 // 0x0448(0x0010) (Edit, Config)
	unsigned char                                      UnknownData17[0x50];                                      // 0x0458(0x0050) MISSED OFFSET
	class UCurveFloat*                                 LoadedMouseSensitivityCurve;                              // 0x04A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCurveFloat*                                 LoadedGammaCurve;                                         // 0x04B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextureRenderTarget2D*                      CharacterStudioRenderTarget;                              // 0x04B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FAnimatableCustomizableObjectData>   AnimatableCustomizableDatas;                              // 0x04C0(0x0010) (Edit, ZeroConstructor, Config)
	TMap<struct FName, float>                          NotifyDistanceLimitMap;                                   // 0x04D0(0x0050) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa6f787e2);
		return ptr;
	}


	void SetCharacterStudioRenderTarget(class UTextureRenderTarget2D* rt);
	bool IsUsingGappLobby();
	bool IsForKoreanRating();
	bool IsForChineseLicensing();
	bool IsESports();
	class UTslSettings* STATIC_GetTslSettings();
	float GetNotifyMaxDistanceByName(const struct FName& InName);
	struct FString GetGappLobbyUrl();
	class UTextureRenderTarget2D* GetCharacterStudioRenderTarget();
};


// Class TslGame.TslGameInstance
// 0x09C0 (0x0AB0 - 0x00F0)
class UTslGameInstance : public UGameInstance
{
public:
	TArray<struct FString>                             PersistentUClassPaths;                                    // 0x00F0(0x0010) (ZeroConstructor, Config)
	TArray<class UClass*>                              PersistentUClasses;                                       // 0x0100(0x0010) (ZeroConstructor, Transient)
	struct FString                                     WelcomeScreenMap;                                         // 0x0110(0x0010) (ZeroConstructor, Config)
	bool                                               bUseLobbyWidget;                                          // 0x0120(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	int                                                LobbyWidgetZOrder;                                        // 0x0124(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	class ULobbyLink*                                  LobbyLink;                                                // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UVivoxManager*                               VivoxManager;                                             // 0x0130(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UReporterManager*                            ReporterManager;                                          // 0x0138(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FTslStartParameter                          StartParamter;                                            // 0x0140(0x0080)
	unsigned char                                      UnknownData01[0x160];                                     // 0x01C0(0x0160) MISSED OFFSET
	class UClass*                                      LobbyWidgetClass;                                         // 0x0320(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x148];                                     // 0x0328(0x0148) MISSED OFFSET
	class ULobbyWidget*                                LobbyWidget;                                              // 0x0470(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0xA8];                                      // 0x0478(0x00A8) MISSED OFFSET
	TArray<struct FReplayKillEventItem>                ReplayKillEventItems;                                     // 0x0520(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnEnumerateReplayKillEventsDone;                          // 0x0530(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0xA0];                                      // 0x0540(0x00A0) MISSED OFFSET
	TArray<struct FReplayGroggyEventItem>              ReplayGroggyEventItems;                                   // 0x05E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnEnumerateReplayGroggyEventsDone;                        // 0x05F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0600(0x0010) MISSED OFFSET
	TArray<struct FReplayItem>                         ReplayItemList;                                           // 0x0610(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData06[0x38];                                      // 0x0620(0x0038) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnGetReplayListDone;                                      // 0x0658(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGotoTimelineDone;                                       // 0x0668(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRecordStarted;                                          // 0x0678(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReplayProblem;                                          // 0x0688(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDownloadZippedReplayProgressDelegate;                   // 0x0698(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDownloadZippedReplayCompleteDelegate;                   // 0x06A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData07[0x2C];                                      // 0x06B8(0x002C) MISSED OFFSET
	int                                                MaxReplaysForNullStreamer;                                // 0x06E4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumReplaysForNullStreamer;                                // 0x06E8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumReplaysToKeepForNullStreamer;                          // 0x06EC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnKeepAndDeleteOldestReplaysDoneDelegate;                 // 0x06F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData08[0x10];                                      // 0x0700(0x0010) MISSED OFFSET
	class UGameEventObserver*                          GameEventObserver;                                        // 0x0710(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0xA8];                                      // 0x0718(0x00A8) MISSED OFFSET
	struct FTslReplaySummary                           ReplaySummaryForPlayback;                                 // 0x07C0(0x0080) (BlueprintVisible, BlueprintReadOnly)
	struct FScriptMulticastDelegate                    OnGetReplaySummaryDone;                                   // 0x0840(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bIsStartedFromReplayListMap;                              // 0x0850(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0851(0x0007) MISSED OFFSET
	class ATslPlayerState*                             CachedDemoPlayerState;                                    // 0x0858(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x148];                                     // 0x0860(0x0148) MISSED OFFSET
	class UHighlightSession*                           HighlightSession;                                         // 0x09A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x100];                                     // 0x09B0(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa0813ce2);
		return ptr;
	}


	bool UseLobbyWidget();
	bool UpdateReplayShouldKeepBP(const struct FString& RegionOrLocal, const struct FString& SessionName, bool bShouldKeep);
	bool UpdateReplayAllDeadOrWinBP(const struct FString& RegionOrLocal, const struct FString& SessionName, bool bAllDeadOrWin);
	bool UnPause();
	void StopStat(TEnumAsByte<EServerStatType> StatType);
	void StopIfReplaying();
	bool StartStat(TEnumAsByte<EServerStatType> StatType);
	bool ShowYesNoMessage(const struct FString& strTitle, const struct FString& strMsg);
	void ShowSystemMessage(const struct FString& strTitle, const struct FString& strMsg);
	bool ShowOkCancelMessage(const struct FString& strTitle, const struct FString& strMsg);
	void ShowLoadingScreen();
	void SetStartedFromReplayListMap(bool bSet);
	void SetReplayTimeSpeed(float TimeSpeed);
	void SetReplayBusy(bool bBusy);
	void SetMaxReplaysForNullStreamer();
	void ResetReplayStreamer();
	void RequestReplayAKillEvent(const struct FString& EventID);
	void RequestReplayAGroggyEvent(const struct FString& EventID);
	void ReplayProblemDelegate__DelegateSignature();
	void ReplayJumpInt(int second);
	void ReplayJump(float TimelinePercentage);
	void RemoveAllKillEvents();
	void RemoveAllGroggyEvents();
	void RecordStartedDelegate__DelegateSignature();
	void QuitApplication(bool bShowMessage);
	void PlayReplayCommand(const struct FString& RegionOrLocal, const struct FString& SessionName);
	void PlayReplayBPByRegionOrLocal(const struct FString& Region, const struct FString& SessionName);
	void PlayReplayBP(const struct FString& SessionName);
	bool Pause();
	void OnPressedPopupConfirmInvite(EPopupButtonID ButtonID);
	void OnPressedPopupCommon(EPopupButtonID ButtonID);
	void KeepMaxReplaysAndDeleteOldestReplaysForNullStreamer();
	void KeepAndDeleteOldestReplaysForNullStreamer(int nReplaysToKeep);
	void KeepAndDeleteOldestReplaysDoneDelegate__DelegateSignature(int nRemains);
	bool IsReplaying();
	bool IsReplayError();
	bool IsRecording();
	bool IsPaused();
	bool IsLive();
	bool IsKillcamPlayback();
	void GotoTimelineDoneDelegate__DelegateSignature();
	void GotoReplayList();
	struct FString GetStartParameterStringValue(const struct FString& Key, const struct FString& NotFoundValue);
	struct FTslStartParameter GetStartParameter();
	bool GetStartedFromReplayListMap();
	float GetReplayTotalTime();
	void GetReplaySummaryDoneDelegate__DelegateSignature(const struct FTslReplaySummary& aTslReplaySummary);
	void GetReplaySummary(const struct FString& RegionOrLocal, const struct FString& SessionName);
	void GetReplayListLocal(int PageIndex, int PageSize);
	void GetReplayListDoneDelegate__DelegateSignature();
	void GetReplayListByRegionOrLocal(const struct FString& RegionOrLocal, int PageIndex, int PageSize);
	void GetReplayList();
	void GetReplayKill__DelegateSignature();
	float GetReplayCurrentTime();
	bool GetReplayBusy();
	struct FTslPlayerStateSummary GetRecordUserFromReplaySummary(const struct FTslReplaySummary& inReplaySummary);
	TArray<struct FTslPlayerStateSummary> GetRecorderTeamMembersFromReplaySummary(const struct FTslReplaySummary& inReplaySummary);
	int GetNumTotalReplays();
	void GetNumReplaysForNullStreamer();
	class UGameEventObserver* GetGameEventObserver();
	float GetDemoDiskFreeSpace();
	struct FName GetCurrentGameState();
	class ATslCharacter* FindRecorderCharacterForPlayback(TArray<class ATslCharacter*> ReplicatedCharacterList);
	void EnumerateReplayKillEvents();
	void EnumerateReplayGroggyEvents();
	void DownloadZippedReplayProgressDelegate__DelegateSignature(const struct FString& strFileName, int nReceived, int nTotal);
	void DownloadZippedReplayCompleteDelegate__DelegateSignature(const struct FString& strFullPath, const struct FString& strDirToExtract);
	bool DownloadZippedReplayBPByRegion(const struct FString& Region, const struct FString& SessionName, int nTotalSize);
	bool DeleteZippedReplayBP(const struct FString& ArchiveName);
	bool DeleteReplayBPByRegionOrLocal(const struct FString& RegionOrLocal, const struct FString& SessionName);
	bool CancelDownloadingZippedReplay(const struct FString& SessionName);
	void AddPlayerStateToReplaySummary(class ATslPlayerState* pPlayerState, struct FTslReplaySummary* inReplaySummary);
};


// Class TslGame.LobbyHUD
// 0x01A0 (0x0BA0 - 0x0A00)
class ALobbyHUD : public ATslHUD
{
public:
	struct FScriptMulticastDelegate                    OnRequestSystemMenu;                                      // 0x0A00(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UCurveFloat*                                 CameraTransitionCurve;                                    // 0x0A10(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraTransitionElapsedTime;                              // 0x0A18(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsCameraTransitionPlaying;                               // 0x0A1C(0x0001) (ZeroConstructor, IsPlainOldData)
	ELobbyCameraStates                                 LastCameraState;                                          // 0x0A1D(0x0001) (ZeroConstructor, IsPlainOldData)
	ELobbyCameraStates                                 FromCameraState;                                          // 0x0A1E(0x0001) (ZeroConstructor, IsPlainOldData)
	ELobbyCameraStates                                 ToCameraState;                                            // 0x0A1F(0x0001) (ZeroConstructor, IsPlainOldData)
	TMap<int, class ACameraActor*>                     LobbyCameras;                                             // 0x0A20(0x0050) (ZeroConstructor)
	struct FName                                       MainMenuStreamingLevelName;                               // 0x0A70(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       CustomizationStreamingLevelName;                          // 0x0A78(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          CachedLobbyCharacterTransforms;                           // 0x0A80(0x0010) (ZeroConstructor)
	class UCurveFloat*                                 FadeInOutCurve;                                           // 0x0A90(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ATslPostProcessEffect*                       LobbyPPE;                                                 // 0x0A98(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              FadeInOutEffectElapsedTime;                               // 0x0AA0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsFadeInOutEffectPlaying;                                // 0x0AA4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0AA5(0x0003) MISSED OFFSET
	struct FTimerHandle                                TimerHandle_FadeInOut;                                    // 0x0AA8(0x0008)
	class ATslPostProcessEffect*                       MainMenuPPE;                                              // 0x0AB0(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              CachedDOFFarBlueSize;                                     // 0x0AB8(0x0004) (ZeroConstructor, IsPlainOldData)
	ELobbyBlurChangingStates                           BlurChangingState;                                        // 0x0ABC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInitCameraTransition;                                    // 0x0ABD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0ABE(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCreateCharacter;                                        // 0x0AC0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDestroyCharacter;                                       // 0x0AD0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     StartURL;                                                 // 0x0AE0(0x0010) (Edit, ZeroConstructor)
	TArray<class UCoherentCommonBinder*>               CommonBinders;                                            // 0x0AF0(0x0010) (ZeroConstructor, Transient)
	class UAkComponent*                                AkSound;                                                  // 0x0B00(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class ACameraActor*                                MainCamera;                                               // 0x0B08(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0B10(0x0020) MISSED OFFSET
	class UClass*                                      LobbyCharacterMaleClass;                                  // 0x0B30(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LobbyCharacterFemaleClass;                                // 0x0B38(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0B40(0x0050) MISSED OFFSET
	struct FViewTargetTransitionParams                 ViewTargetTransitionParams;                               // 0x0B90(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xcc35ff4b);
		return ptr;
	}


	void TickFadeInOutEffect(float DeltaTime);
	void TickCameraTransition(float DeltaTime);
	void TestLobbyCharacterReady(uint32_t SlotIndex, bool bReady);
	void TestLobbyCharacterHost(uint32_t SlotIndex);
	void TestLobbyCharacterAddAngle(int SlotIndex, float InYawInDegree);
	void TestLobbyCamera_TeleportTo(int Index);
	void TestLobbyCamera_StartTransitionTo(int ToIndex);
	void TestLobbyCamera_StartTransitionFromTo(int FromIndex, int ToIndex);
	void TestLobbyCamera_SpawnCharacters(int Num);
	void TestLobbyCamera_Init();
	void TeleportCameraTo(ELobbyCameraStates InCameraState);
	void StopFadeInOutEffect();
	void StopCameraTransition();
	void StartFadeInOutEffect();
	void StartCameraTransitionTo(ELobbyCameraStates InToCameraState);
	void StartCameraTransitionFromTo(ELobbyCameraStates InFromCameraState, ELobbyCameraStates InToCameraState);
	void SetWidgetForBinding(int ViewIndex, class UCoherentUIGTWidget* Widget);
	void SetLobbyCharacterHiddenInGame(uint32_t SlotIndex, bool bNewHidden);
	void RequestSystemMenu();
	void OnReplaySummary(const struct FTslReplaySummary& ReplaySummary);
	void OnReplayList();
	void OnDeleteOldReplays(int RemainedReplayNum);
	void NotifyLobbySceneChanged(bool bIsCustomizationScene);
	void NotifyLobbyCharacterCreated(int InSlotIndex);
	void LeaveCustomizationMenu(ELobbyCameraStates InFromCameraState, ELobbyCameraStates InToCameraState);
	bool IsCameraHasBlurEffect(ELobbyCameraStates InLobbyCameraState);
	void InitLobbyTransition();
	void InitFadeInOutEffect();
	void InitCameraTransition();
	struct FString GetStartUrl();
	int GetLobbyCharacterNum();
	class ALobbyCharacter* GetLobbyCharacter(int SlotIndex);
	ELobbyCameraStates GetLobbyCameraState();
	class ACameraActor* GetLobbyCamera(ELobbyCameraStates InLobbyCameraState);
	float GetCurveDuration(class UCurveFloat* InCurve);
	void EnterCustomizationMenu(ELobbyCameraStates InFromCameraState, ELobbyCameraStates InToCameraState);
	ELobbyBlurChangingStates DecideBlurChangingState(ELobbyCameraStates InFromState, ELobbyCameraStates InToState);
	void ClearAllWidget();
	void CacheSubLevelNames();
	void CachePostProcessEffectFromLevel();
	void CacheMainCameraFromLevel();
	void CacheLobbyCharacterTransforms();
	void CacheLobbyCamarasFromLevel();
	void AddLobbyCharacterAngle(int SlotIndex, float AngleInDegree);
};


// Class TslGame.TslWelcomeBaseHUD
// 0x0048 (0x0590 - 0x0548)
class ATslWelcomeBaseHUD : public ATslBaseHUD
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0548(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStateChanged;                                           // 0x0558(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	EWelcomeState                                      WelcomeState;                                             // 0x0568(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x27];                                      // 0x0569(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x71e2d67f);
		return ptr;
	}


	void OnPressedPopupCommon(EPopupButtonID ButtonID);
};


// Class TslGame.TslEntryPlayerController
// 0x0008 (0x0708 - 0x0700)
class ATslEntryPlayerController : public ATslBasePlayerController
{
public:
	class UVivoxLobbyComponent*                        VivoxComponent;                                           // 0x0700(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x070c47e8);
		return ptr;
	}


	void LoadReplay(const struct FString& SessionName);
	void HandleLobbySystemMenu();
};


// Class TslGame.PerfBotPlayerController
// 0x0060 (0x0BB0 - 0x0B50)
class APerfBotPlayerController : public ATslPlayerController
{
public:
	int                                                AmmoClips;                                                // 0x0B50(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B54(0x0004) MISSED OFFSET
	class UClass*                                      WeaponType;                                               // 0x0B58(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0B60(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x22a9e47b);
		return ptr;
	}


	void ServerMoveToLocation(const struct FVector& Location);
	void ClientQuit();
};


// Class TslGame.TslDemoSpectator
// 0x0030 (0x0B80 - 0x0B50)
class ATslDemoSpectator : public ATslPlayerController
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0B50(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x80e47297);
		return ptr;
	}

};


// Class TslGame.TslPlayerController_Menu
// 0x0000 (0x0B50 - 0x0B50)
class ATslPlayerController_Menu : public ATslPlayerController
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x15f37e28);
		return ptr;
	}

};


// Class TslGame.TslBotAIController
// 0x0038 (0x04E0 - 0x04A8)
class ATslBotAIController : public AAIController
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x04A8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x94df8d82);
		return ptr;
	}

};


// Class TslGame.TslBreakableObject
// 0x0000 (0x03C0 - 0x03C0)
class ATslBreakableObject : public AStaticMeshActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa9381bcb);
		return ptr;
	}

};


// Class TslGame.CharacterBreathBuff
// 0x0008 (0x0418 - 0x0410)
class ACharacterBreathBuff : public ATslBuff
{
public:
	float                                              BreathPerTick;                                            // 0x0410(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0414(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x24abda40);
		return ptr;
	}


	class ATslCharacter* GetCharacter();
	class UCharacterBreathComponent* GetBreathComponent();
};


// Class TslGame.HealOverTimeBuff
// 0x0010 (0x0420 - 0x0410)
class AHealOverTimeBuff : public ATslBuff
{
public:
	float                                              HealPerTick;                                              // 0x0410(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HealLimit;                                                // 0x0414(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BuffCount;                                                // 0x0418(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x041C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x914296d8);
		return ptr;
	}

};


// Class TslGame.TslBuoyancyForceComponent
// 0x0000 (0x0490 - 0x0490)
class UTslBuoyancyForceComponent : public UBuoyancyForceComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xc11cbb1d);
		return ptr;
	}

};


// Class TslGame.TslCameraComponent
// 0x0010 (0x09B0 - 0x09A0)
class UTslCameraComponent : public UCameraComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x09A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xea183b81);
		return ptr;
	}

};


// Class TslGame.TslCharacterProxy
// 0x0030 (0x0810 - 0x07E0)
class ATslCharacterProxy : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07E0(0x0008) MISSED OFFSET
	TArray<class UWeaponClone*>                        ArmedWeapons;                                             // 0x07E8(0x0010) (ZeroConstructor)
	class UWeaponAnimInfoComponent*                    WeaponAnimInfoComponent;                                  // 0x07F8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              WeaponUpdateIntervalSeconds;                              // 0x0800(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0804(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x510e5612);
		return ptr;
	}


	void UpdateEquippedWeapons();
	void UpdateCharacterAppearance();
	void UpdateArmedWeapons();
	void SetAccessorySlot(class UTslAccessoryComponent* AccessoryComponent, EAccessorySlot Slot);
	class UTslAccessoryComponent* GetAccessorySlot(EAccessorySlot Slot);
};


// Class TslGame.TslCharacterSpringArmComponent
// 0x00E0 (0x0560 - 0x0480)
class UTslCharacterSpringArmComponent : public USpringArmComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0480(0x0004) MISSED OFFSET
	struct FVector                                     DefaultSocketOffset;                                      // 0x0484(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     IndoorSocketOffset;                                       // 0x0490(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     LeanLeftDefaultSocketOffsetAddition;                      // 0x049C(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     LeanRightDefaultSocketOffsetAddition;                     // 0x04A8(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     LeftShoulderAimingSocketOffset;                           // 0x04B4(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     RightShoulderAimingSocketOffset;                          // 0x04C0(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     LeanLeftAimedSocketOffsetAddition;                        // 0x04CC(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     LeanRightAimedSocketOffsetAddition;                       // 0x04D8(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     SprintSocketOffsetAddition;                               // 0x04E4(0x000C) (Edit, IsPlainOldData)
	float                                              CrouchSocketOffsetZAddition;                              // 0x04F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CrouchSocketOffsetMovementZAddition;                      // 0x04F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProneScoketOffsetZAddition;                               // 0x04F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SocketOffsetInterpSpeed;                                  // 0x04FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DefaultTargetOffset;                                      // 0x0500(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     IndoorTargetOffset;                                       // 0x050C(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     AimingTargetOffset;                                       // 0x0518(0x000C) (Edit, IsPlainOldData)
	float                                              TargetOffsetInterpSpeed;                                  // 0x0524(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetOffsetInterpSpeed_Vaulting;                         // 0x0528(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultSpringArmLength;                                   // 0x052C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IndoorSpringArmLength;                                    // 0x0530(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AimingSpringArmLength;                                    // 0x0534(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlockingCompressOffset;                                   // 0x0538(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlockingCompressCrouchOffset;                             // 0x053C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpringArmLengthInterpSpeed;                               // 0x0540(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AimingSpringArmLengthInterpSpeed;                         // 0x0544(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VaultingSpringArmLengthInterpSpeed;                       // 0x0548(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x054C(0x0004) MISSED OFFSET
	float                                              SpringArmRestoreInterpSpeed;                              // 0x0550(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0554(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x4fd00896);
		return ptr;
	}

};


// Class TslGame.TslCharacterValidateLocationComponent
// 0x0020 (0x0200 - 0x01E0)
class UTslCharacterValidateLocationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x01E0(0x000C) MISSED OFFSET
	float                                              InvalidUndergroundCheckInterval;                          // 0x01EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01F0(0x0004) MISSED OFFSET
	float                                              InvalidUndergroundCheckLength;                            // 0x01F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAdjustRange;                                           // 0x01F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxAdjustCount;                                           // 0x01FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x3b2bd3aa);
		return ptr;
	}

};


// Class TslGame.TslChatWidgetStyle
// 0x0988 (0x09B8 - 0x0030)
class UTslChatWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTslChatStyle                               ChatStyle;                                                // 0x0030(0x0988) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xc92724b2);
		return ptr;
	}

};


// Class TslGame.TslCheatManager
// 0x0018 (0x0090 - 0x0078)
class UTslCheatManager : public UCheatManager
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x9db2fdd3);
		return ptr;
	}


	void ToggleVisibilityOfDestructibleComponents();
	void ToggleMatchTimer();
	void ToggleII(float Interval);
	void ToggleFreeMode();
	void ToggleCollisionOfDestructibleComponents();
	void TestVoiceAccessToken();
	void SpawnBot();
	void SetVehicleRepRotCorrection(float AngularDeltaThreshold, float AngularInterpAlpha, float AngularRecipFixTime);
	void SetVehicleRepPosCorrection(float LinearDeltaThresholdSq, float LinearInterpAlpha, float LinearRecipFixTime, float BodySpeedThresholdSq);
	void SetSpectatorYawAndPitch(float Yaw, float Pitch, float RevertSmoothSpeed);
	void SetClientConnectionTimeout(float TimeoutSeconds);
	void SetBPFactor(float factor);
	void ReturnLookAt();
	void OnInteract();
	void OnFullMapSequenceStop();
	void MoveVehicleOnClient(float X, float Y, float Z);
	void LookAt(float Pitch, float Yaw, float Roll);
	void InsertCrashMeCommand();
	void ForceMatchStart();
	void DumpVoiceDevices();
	void DumpReplicatedItems();
	void DumpDestructibleComponents();
	void DrawVehicleCenterOfMass();
	void DelayCrash(float DelaySeconds);
	void CtrlShortCutOnOff(bool OnOff);
	void CopyDebugInfoRotation();
	void CopyDebugInfoLocation();
	void CopyDebugInfo();
	void Cheat(const struct FString& Msg);
	void ChangeTeam(int NewTeamNumber);
	void ActivatePakOrderingMode();
};


// Class TslGame.TslCoherentWidget
// 0x0010 (0x04A0 - 0x0490)
class UTslCoherentWidget : public UCoherentUIGTWidget
{
public:
	class UClass*                                      WidgetBinderClass;                                        // 0x0490(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCoherentWidgetBinder*                       WidgetBinder;                                             // 0x0498(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x5d0b9bcb);
		return ptr;
	}


	void GoBack();
};


// Class TslGame.TslConsole
// 0x0008 (0x0138 - 0x0130)
class UTslConsole : public UConsole
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0130(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x4581d690);
		return ptr;
	}

};


// Class TslGame.TslConsoleSetting
// 0x0090 (0x0100 - 0x0070)
class UTslConsoleSetting : public UConsoleSettings
{
public:
	TArray<struct FString>                             AutoCompleteItemPaths;                                    // 0x0070(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             AutoCompleteItemKinds;                                    // 0x0080(0x0010) (ZeroConstructor, Config)
	TArray<struct FAutoCompleteVehiclePaths>           AutoCompleteVehiclePaths;                                 // 0x0090(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FString>                             AutoCompleteMaleBody;                                     // 0x00A0(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             AutoCompleteMaleHair;                                     // 0x00B0(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             AutoCompleteMaleFace;                                     // 0x00C0(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             AutoCompleteFemaleBody;                                   // 0x00D0(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             AutoCompleteFemaleHair;                                   // 0x00E0(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             AutoCompleteFemaleFace;                                   // 0x00F0(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x58196754);
		return ptr;
	}

};


// Class TslGame.TslCustomizableSkeletalComponent
// 0x0000 (0x0440 - 0x0440)
class UTslCustomizableSkeletalComponent : public UCustomizableSkeletalComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x6470eacd);
		return ptr;
	}

};


// Class TslGame.TslDamageField
// 0x0038 (0x03E8 - 0x03B0)
class ATslDamageField : public AActor
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03B0(0x0004) MISSED OFFSET
	float                                              DamageRadius;                                             // 0x03B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DamageFieldFX;                                            // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Damage;                                                   // 0x03C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageInterval;                                           // 0x03C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x03C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03D0(0x0010) MISSED OFFSET
	class UClass*                                      DebuffTemplate;                                           // 0x03E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x44e47e5a);
		return ptr;
	}

};


// Class TslGame.TslDamageFieldContainer
// 0x0040 (0x03F0 - 0x03B0)
class ATslDamageFieldContainer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET
	TArray<struct FDamageFieldLayout>                  DamageFieldLayouts;                                       // 0x03B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	class UClass*                                      DamageFieldTemplate;                                      // 0x03D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FlameInWall;                                              // 0x03D8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	int                                                FlameMaxCountInWall;                                      // 0x03DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlameDelayInWall;                                         // 0x03E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x03E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf56a25d7);
		return ptr;
	}

};


// Class TslGame.TslDeathCameraComponent
// 0x0050 (0x0230 - 0x01E0)
class UTslDeathCameraComponent : public UActorComponent
{
public:
	float                                              MaxCameraDistance;                                        // 0x01E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CollisionDistanceFactor;                                  // 0x01E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeathFollowBlendTime;                                     // 0x01E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EViewTargetBlendFunction>              DeathFollowBlendFunc;                                     // 0x01EC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01ED(0x0003) MISSED OFFSET
	float                                              DeathFollowBlendExp;                                      // 0x01F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeathFollowTime;                                          // 0x01F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultFreeCameraArmLength;                               // 0x01F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	struct FVector                                     DeathLocationOffset;                                      // 0x01FC(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	class ATslCharacter*                               DeathCharacter;                                           // 0x0208(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0210(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x0d4238ed);
		return ptr;
	}

};


// Class TslGame.TslDestructibleComponent
// 0x0000 (0x0BA0 - 0x0BA0)
class UTslDestructibleComponent : public UDestructibleComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x7561279c);
		return ptr;
	}


	void ClientReceiveComponentDamage(float DamageAmount, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
};


// Class TslGame.TslDestructibleContainer
// 0x0008 (0x03B8 - 0x03B0)
class ATslDestructibleContainer : public AActor
{
public:
	unsigned char                                      bFlag : 1;                                                // 0x03B0(0x0001) (Net)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xfe0125c4);
		return ptr;
	}


	void OnRep_Flag();
};


// Class TslGame.TslDoor
// 0x0290 (0x0650 - 0x03C0)
class ATslDoor : public AStaticMeshActor
{
public:
	class UStaticMeshComponent*                        DoorMeshComponent;                                        // 0x03C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAkComponent*                                AkSound;                                                  // 0x03C8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UInteractionComponent*                       Interaction;                                              // 0x03D0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x03D8(0x0020) MISSED OFFSET
	class UDestructibleMesh*                           DoorDestructibleMesh;                                     // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDoorOpened : 1;                                          // 0x0400(0x0001) (Net)
	unsigned char                                      bReverseRotation : 1;                                     // 0x0400(0x0001) (Net)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	float                                              OpenAngle;                                                // 0x0404(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               OpenSound;                                                // 0x0408(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               CloseSound;                                               // 0x0410(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 OpenCurve;                                                // 0x0418(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OpenCurveDuration;                                        // 0x0420(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	class UCurveFloat*                                 CloseCurve;                                               // 0x0428(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CloseCurveDuration;                                       // 0x0430(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PointDamageImpulse;                                       // 0x0434(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PointDamageRadius;                                        // 0x0438(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BreakingRadius;                                           // 0x043C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BreakingImpulse;                                          // 0x0440(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BreakingMinDamage;                                        // 0x0444(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageAccumulateTimeout;                                  // 0x0448(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x044C(0x0004) MISSED OFFSET
	struct FName                                       TopImpactSoketName;                                       // 0x0450(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CenterImpactSoketName;                                    // 0x0458(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       BottomImpactSoketName;                                    // 0x0460(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1C8];                                     // 0x0468(0x01C8) MISSED OFFSET
	struct FDoorBreakingStateLegacy                    DoorBreakingState;                                        // 0x0630(0x0001) (Net)
	unsigned char                                      UnknownData05[0x1F];                                      // 0x0631(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd3ab8951);
		return ptr;
	}


	void OnRep_DoorOpened();
	void OnRep_DoorBreakingState();
	void OnInteractBy(class ATslCharacter* OtherCharacter);
	void ClientTakeDamage(float Damage, const struct FVector_NetQuantize& HitLocation, float DamageRadius, float Impulse);
};


// Class TslGame.TslEngine
// 0x0000 (0x0D70 - 0x0D70)
class UTslEngine : public UGameEngine
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf9e024af);
		return ptr;
	}

};


// Class TslGame.TslEntryGameMode
// 0x0000 (0x0480 - 0x0480)
class ATslEntryGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xfabf1490);
		return ptr;
	}

};


// Class TslGame.TslExplosionEffect
// 0x0228 (0x05D8 - 0x03B0)
class ATslExplosionEffect : public AActor
{
public:
	class UParticleSystem*                             ExplosionFX;                                              // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPointLightComponent*                        ExplosionLight;                                           // 0x03B8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	float                                              ExplosionLightFadeOut;                                    // 0x03C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               ExplosionSound;                                           // 0x03C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDecalEffectDataSet                         DecalEffectDataSet;                                       // 0x03D0(0x0168) (Edit, DisableEditOnInstance)
	float                                              DecalSpawnDelayTime;                                      // 0x0538(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x053C(0x0004) MISSED OFFSET
	struct FHitResult                                  SurfaceHit;                                               // 0x0540(0x0088) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x05C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x8c0a82dd);
		return ptr;
	}


	void OnParticleCollide(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName);
};


// Class TslGame.TslExplosionReactionInterface
// 0x0000 (0x0028 - 0x0028)
class UTslExplosionReactionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x120c16a0);
		return ptr;
	}


	void OnExplode(float DamageAmout, const struct FVector& Origin, TArray<struct FHitResult> ComponentHits, class AController* EventInstigator, class AActor* DamageCauser);
};


// Class TslGame.TslFence
// 0x00A0 (0x0450 - 0x03B0)
class ATslFence : public AActor
{
public:
	class USplineComponent*                            SplineComponent;                                          // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	ETslFenceSelector                                  BeginSelector;                                            // 0x03B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	class UStaticMesh*                                 BeginMesh1;                                               // 0x03C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 BeginMesh2;                                               // 0x03C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 BeginMesh3;                                               // 0x03D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 BeginMesh4;                                               // 0x03D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ETslFenceSelector                                  EndSelector;                                              // 0x03E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	class UStaticMesh*                                 EndMesh1;                                                 // 0x03E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 EndMesh2;                                                 // 0x03F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 EndMesh3;                                                 // 0x03F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 EndMesh4;                                                 // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRandomForMiddle;                                      // 0x0408(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMiddleSegmentsInOrder;                                // 0x0409(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x040A(0x0002) MISSED OFFSET
	float                                              UnitLengthForMiddle;                                      // 0x040C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UnitSpacingForMiddle;                                     // 0x0410(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PivotOffsetForMiddle;                                     // 0x0414(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               RandomStreamForMiddle;                                    // 0x0418(0x0008) (Edit)
	class UStaticMesh*                                 MiddleMesh1;                                              // 0x0420(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 MiddleMesh2;                                              // 0x0428(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 MiddleMesh3;                                              // 0x0430(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 MiddleMesh4;                                              // 0x0438(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FCollisionProfileName                       FenceCollisionProfile;                                    // 0x0440(0x0008) (Edit)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0448(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x8a457a94);
		return ptr;
	}


	class USplineComponent* GetSplineComponent();
};


// Class TslGame.TslReactionData
// 0x0040 (0x0070 - 0x0030)
class UTslReactionData : public UDataAsset
{
public:
	float                                              DestroyDelay;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVehicleReactionData                        VehicleReactionData;                                      // 0x0034(0x000C) (Edit)
	struct FRadialDamageReactionData                   RadialDamageReactionData;                                 // 0x0040(0x000C) (Edit)
	struct FPointDamageReactionData                    PointDamageReactionData;                                  // 0x004C(0x0010) (Edit)
	int                                                DependancyCountBySibling;                                 // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               PhysicsReactionSoundAk;                                   // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               DestructibleReactionSoundAk;                              // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x1d79cfe0);
		return ptr;
	}

};


// Class TslGame.TslReactionComponent
// 0x0060 (0x0A40 - 0x09E0)
class UTslReactionComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x09E0(0x0010) MISSED OFFSET
	unsigned char                                      bPendingDestroy : 1;                                      // 0x09F0(0x0001) (Net)
	unsigned char                                      UnknownData01[0x7];                                       // 0x09F1(0x0007) MISSED OFFSET
	class UTslReactionData*                            ReactionData;                                             // 0x09F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDestructibleMesh*                           ReactionDM;                                               // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0A08(0x0008) MISSED OFFSET
	class UDestructibleComponent*                      ReactionDestructible;                                     // 0x0A10(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ReactionStaticMeshComponent;                              // 0x0A18(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0A20(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf44011c5);
		return ptr;
	}


	void OnRep_PendingDestroy(bool PrevPendingDestroy);
	void Client_ReactByVehicle(const struct FVector& Impact, const struct FVector& ImpulseDir, const struct FVector& Velocity);
	void Client_ReactByRadialDamage(float DamageAmount, const struct FVector& Origin, const struct FVector& Impact, const struct FVector& ImpulseDir, float OuterRadius);
	void Client_ReactByPointDamage(float DamageAmount, const struct FVector& Impact, const struct FVector& ImpulseDir);
};


// Class TslGame.TslBreakableFence
// 0x0068 (0x04B8 - 0x0450)
class ATslBreakableFence : public ATslFence
{
public:
	class UTslReactionData*                            ReactionData;                                             // 0x0450(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDestructibleMesh*                           BeginDestuctible1;                                        // 0x0458(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDestructibleMesh*                           BeginDestuctible2;                                        // 0x0460(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDestructibleMesh*                           BeginDestuctible3;                                        // 0x0468(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDestructibleMesh*                           BeginDestuctible4;                                        // 0x0470(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDestructibleMesh*                           EndDestuctible1;                                          // 0x0478(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDestructibleMesh*                           EndDestuctible2;                                          // 0x0480(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDestructibleMesh*                           EndDestuctible3;                                          // 0x0488(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDestructibleMesh*                           EndDestuctible4;                                          // 0x0490(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDestructibleMesh*                           MiddleDestuctible1;                                       // 0x0498(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDestructibleMesh*                           MiddleDestuctible2;                                       // 0x04A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDestructibleMesh*                           MiddleDestuctible3;                                       // 0x04A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDestructibleMesh*                           MiddleDestuctible4;                                       // 0x04B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd0f8c229);
		return ptr;
	}

};


// Class TslGame.TslStaticFence
// 0x0000 (0x0450 - 0x0450)
class ATslStaticFence : public ATslFence
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x9de685be);
		return ptr;
	}

};


// Class TslGame.TslFocusableWidgetInterface
// 0x0000 (0x0028 - 0x0028)
class UTslFocusableWidgetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xc1148688);
		return ptr;
	}


	bool Up();
	bool SetFocus(bool NewFocus);
	bool Right();
	bool Left();
	bool IsFocusable();
	bool IsFocus();
	bool InputY();
	bool InputX();
	bool InputRT();
	bool InputRB();
	bool InputLT();
	bool InputLB();
	bool InputB();
	bool InputA();
	class UUserWidget* GetUpWidget();
	class UUserWidget* GetRightWidget();
	class UUserWidget* GetLeftWidget();
	class UUserWidget* GetFocusingChildWidget();
	class UUserWidget* GetDownWidget();
	bool Down();
};


// Class TslGame.TslGame_Menu
// 0x0000 (0x0480 - 0x0480)
class ATslGame_Menu : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x1b59995f);
		return ptr;
	}

};


// Class TslGame.TslPerformanceTestComponent
// 0x0140 (0x0320 - 0x01E0)
class UTslPerformanceTestComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x01E0(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x6953d65a);
		return ptr;
	}

};


// Class TslGame.TslGameMode
// 0x0340 (0x07C0 - 0x0480)
class ATslGameMode : public AGameMode
{
public:
	class UClass*                                      MalePawnClass;                                            // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PerfBotPlayerControllerClass;                             // 0x0488(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData)
	class UClass*                                      ModeControllerClass;                                      // 0x0490(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData)
	TArray<class UClass*>                              AdditionalModeControllerClasses;                          // 0x0498(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear)
	class UClass*                                      InitialItemDonatorClass;                                  // 0x04A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FMatchPreparerClass>                 MatchPreparerClasses;                                     // 0x04B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EMatchStartType                                    MatchStartType;                                           // 0x04C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	ECameraViewBehaviour                               CameraViewBehaviour;                                      // 0x04C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               PlayerRespawn;                                            // 0x04C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x04C3(0x0001) MISSED OFFSET
	int                                                PostMatchWaitingTime;                                     // 0x04C4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                CustomGamePostMatchWaitingTime;                           // 0x04C8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ESportsPostMatchWaitingTime;                              // 0x04CC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ServerQuitAfterLeavingMapTime;                            // 0x04D0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MinPlayers;                                               // 0x04D4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PlayerSpawnTryMaxCount;                                   // 0x04D8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnablePerfBotInPIE;                                      // 0x04DC(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnablePerfBotLogin;                                      // 0x04DD(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIsPerfBotSpawnToRandomPosition;                          // 0x04DE(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCanRestartPerfBot;                                       // 0x04DF(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableObserverInPIE;                                     // 0x04E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               IsBattleRoyale;                                           // 0x04E1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bStartPlayerAtMatchStart;                                 // 0x04E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldSpawnAtStartSpot;                                  // 0x04E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x04E4(0x0001) MISSED OFFSET
	bool                                               bIsEditorTestZombieMode;                                  // 0x04E5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIsCustomGame;                                            // 0x04E6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCanAllSpectate;                                          // 0x04E7(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	struct FCustomGameUpdateCharacterInfo              CustomGameUpdateCharacterInfo;                            // 0x04E8(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, Config)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET
	TArray<struct FLimitCustomStringParameter>         LimitCustomStringParameters;                              // 0x0500(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	float                                              MultiplierBlueZone;                                       // 0x0510(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              BlueZoneCentralizationFactor;                             // 0x0514(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              MultiplierCarePackage;                                    // 0x0518(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	struct FRedZoneCustomOption                        RedZoneCustomOption;                                      // 0x051C(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, Config)
	TArray<struct FBlueZoneCustomOption>               BlueZoneCustomOptions;                                    // 0x0538(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	int                                                WarmupTime;                                               // 0x0548(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	int                                                EditorTestTeamMemberCount;                                // 0x054C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	TMap<struct FString, class URewardData*>           RewardDataMap;                                            // 0x0550(0x0050) (Edit, ZeroConstructor)
	class URewardData*                                 RewardData;                                               // 0x05A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATslPlayerState*                             WinnerPlayerState;                                        // 0x05A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                WinnerTeam;                                               // 0x05B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x05B4(0x0004) MISSED OFFSET
	class UClass*                                      ItemSpawnProcessorClass;                                  // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ThingSpawnProcessorClass;                                 // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BasicBeltItemClassForNoBelt;                              // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x05D0(0x0008) MISSED OFFSET
	class UItemSpawnProcessor*                         ItemSpawnProcessor;                                       // 0x05D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UThingSpawnProcessor*                        ThingSpawnProcessor;                                      // 0x05E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGeneralItemSpawner*                         InitialItemDonator;                                       // 0x05E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMatchPreparer*                              MatchPreparer;                                            // 0x05F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AModeController*                             ModeController;                                           // 0x05F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ADroppedItemGridManager*                     DroppedItemGridManager;                                   // 0x0600(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class AModeController*>                     AdditinalModeControllers;                                 // 0x0608(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData05[0x98];                                      // 0x0618(0x0098) MISSED OFFSET
	TMap<struct FString, class APlayerState*>          JoinedUserPlayerStateMap;                                 // 0x06B0(0x0050) (ZeroConstructor, Transient)
	TArray<struct FTeams>                              Teams;                                                    // 0x0700(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData06[0xB0];                                      // 0x0710(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x11317352);
		return ptr;
	}


	void SendSystemMessageToAll(ESystemMessageType MessageType, const struct FText& Message, float MessageDuration);
	void NotifyRestrictingPlayAreaToAll();
	void NotifyNextGasInToAll(const struct FVector& PoisonGasWarningPosition, float PoisonGasWarningRadius);
	bool IsPreventFinishMatch();
	bool IsPlayInEditor();
	class UVivoxManager* GetVivoxManager();
	class UThingSpawnProcessor* GetThingSpawnProcessor();
	class ULobbyLink* GetLobbyLink();
	class UItemSpawnProcessor* GetItemSpawnProcessor();
	void GetAllPawns(TArray<class APawn*>* OutPawns);
	void FinishMatch();
	class ATslCharacter* FindCharacterByPlayerState(class APlayerState* State);
	bool CanDealDamage(class ATslPlayerState* DamageInstigator, class ATslPlayerState* DamagedPlayer);
	void BroadcastGameModeEvent(const struct FName& EventName, const struct FString& Parameter);
	void BenchmarkFinished();
};


// Class TslGame.TslGameUserSettings
// 0x0130 (0x0238 - 0x0108)
class UTslGameUserSettings : public UGameUserSettings
{
public:
	float                                              ScreenScale;                                              // 0x0108(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              Gamma;                                                    // 0x010C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIsLanMatch;                                              // 0x0110(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIsMasterSoundMute;                                       // 0x0111(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0112(0x0002) MISSED OFFSET
	float                                              MasterSoundVolume;                                        // 0x0114(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIsEffectSoundMute;                                       // 0x0118(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	float                                              EffectSoundVolume;                                        // 0x011C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIsUISoundMute;                                           // 0x0120(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	float                                              UISoundVolume;                                            // 0x0124(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIsBGMSoundMute;                                          // 0x0128(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	float                                              BGMSoundVolume;                                           // 0x012C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIsVoiceInputMute;                                        // 0x0130(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIsVoiceOutputMute;                                       // 0x0131(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0132(0x0002) MISSED OFFSET
	int                                                VoiceInputVolume;                                         // 0x0134(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                VoiceOutputVolume;                                        // 0x0138(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUsePushToTalk;                                           // 0x013C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseGlobalVoice;                                          // 0x013D(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseTeamVoice;                                            // 0x013E(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSavedGraphicOption;                                      // 0x013F(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bMotionBlur;                                              // 0x0140(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0141(0x0007) MISSED OFFSET
	struct FString                                     CultureName;                                              // 0x0148(0x0010) (ZeroConstructor, Config)
	struct FString                                     LastCultureName;                                          // 0x0158(0x0010) (ZeroConstructor, Config)
	struct FCustomInputSettings                        CustomInputSettins;                                       // 0x0168(0x0058) (Config)
	int                                                SelectMiniMapIndex;                                       // 0x01C0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              FpsCameraFov;                                             // 0x01C4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseForceFeedback;                                        // 0x01C8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x01C9(0x0003) MISSED OFFSET
	int                                                ColorBlindType;                                           // 0x01CC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     CrosshairColorString;                                     // 0x01D0(0x0010) (ZeroConstructor, Config)
	TArray<class UClass*>                              GearProfile1;                                             // 0x01E0(0x0010) (ZeroConstructor, Config)
	TArray<class UClass*>                              GearProfile2;                                             // 0x01F0(0x0010) (ZeroConstructor, Config)
	EUiShowType                                        FppWeaponIconShowType;                                    // 0x0200(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EUiShowType                                        TpsWeaponIconShowType;                                    // 0x0201(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EUiShowType                                        FppEquipableItemIconShowType;                             // 0x0202(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseCharacterCapture;                                     // 0x0203(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	int                                                WorldMapZoomSpeedLevel;                                   // 0x0204(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIconKillfeedEnabled;                                     // 0x0208(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	ETslInputModes                                     InputModeCrouch;                                          // 0x0209(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	ETslInputModes                                     InputModeProne;                                           // 0x020A(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	ETslInputModes                                     InputModeWalk;                                            // 0x020B(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	ETslInputModes                                     bToggleSprint;                                            // 0x020C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	ETslInputModes                                     InputModeHoldRotation;                                    // 0x020D(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	ETslInputModes                                     InputModeHoldBreath;                                      // 0x020E(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	ETslInputModes                                     InputModePeek;                                            // 0x020F(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	ETslInputModes                                     InputModeMap;                                             // 0x0210(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	ETslInputModes                                     InputModeADS;                                             // 0x0211(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	ETslInputModes                                     InputModeAim;                                             // 0x0212(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEditorApplyOverrideScalability;                          // 0x0213(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseFreeLookInterp;                                       // 0x0214(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseClientReplay;                                         // 0x0215(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseKillcam;                                              // 0x0216(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bPreloadingMap;                                           // 0x0217(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FString>                             PreloadingMaps;                                           // 0x0218(0x0010) (ZeroConstructor, Config)
	struct FScriptMulticastDelegate                    OnGameUserSettingApplied;                                 // 0x0228(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xec293359);
		return ptr;
	}

};


// Class TslGame.TslGameOption
// 0x0000 (0x0028 - 0x0028)
class UTslGameOption : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xe5eec5e8);
		return ptr;
	}


	struct FText STATIC_WheelAxisNameToWheelActionName(const struct FTslInputKey& Key, float InAxisScale);
	void STATIC_SetWorldMapZoomLevel(int NewZoomLevel);
	void STATIC_SetVSyncEnabled(bool bEnable);
	void STATIC_SetVoiceOutputVolume(int Volume);
	void STATIC_SetVoiceOutputMute(bool bIsMute);
	void STATIC_SetVoiceInputVolume(int Volume);
	void STATIC_SetVoiceInputMute(bool bIsMute);
	void STATIC_SetUseTeamVoice(bool bUse);
	void STATIC_SetUsePushToTalk(bool bUse);
	void STATIC_SetUseGlobalVoice(bool bUse);
	void STATIC_SetUseCharacterCapture(bool bUseCharacterCapture);
	void STATIC_SetUISoundVolume(float Volume);
	void STATIC_SetUISoundMute(bool bIsMute);
	void STATIC_SetTslInputMode(EInputModeSettingActions eAction, ETslInputModes eTslInputMode);
	void STATIC_SetTpsWeaponIconShowType(EUiShowType NewShowType);
	void STATIC_SetSelectMinimapTypeIndex(int Index);
	void STATIC_SetScreenScale(float Value);
	void STATIC_SetScreenResoultion(const struct FScreenResolution& ScreenResolution);
	void STATIC_SetQualityLevel(EQualityType Quality, int QualityLevel);
	void STATIC_SetOverallScalabilityLevel(int Value);
	void STATIC_SetMouseSensitivity(const struct FName& InMouseSensitiveName, float InMouseSensitivity);
	void STATIC_SetMotionBlur(bool bEnabled);
	void STATIC_SetMasterSoundVolume(float Volume);
	void STATIC_SetMasterSoundMute(bool bIsMute);
	void STATIC_SetInvertMouse(bool bInvert);
	void STATIC_SetInvertGamePadY(bool bInvert);
	void STATIC_SetInvertGamePadX(bool bInvert);
	void STATIC_SetInputKey_Internal(const struct FTslInputKey& NewKey, EKeyBindingSlot InKeyBindingSlot, bool bGamepad, TArray<struct FTslInputKey>* OutKeyList);
	void STATIC_SetIconKillfeedEnabled(bool bEnable);
	void STATIC_SetGamma(float Gamma);
	void STATIC_SetGamePadSensitivity(const struct FName& InGamePadSensitiveName, float InGamePadSensitivity);
	void STATIC_SetGamePadDeadZone(float InGamePadDeadZone);
	void STATIC_SetFullScreen(TEnumAsByte<EWindowMode> InFullscreenMode);
	void STATIC_SetFpsWeaponSlotShow(bool bNewShow);
	void STATIC_SetFpsCameraFov(float NewFovValue);
	void STATIC_SetFppWeaponIconShowType(EUiShowType NewShowType);
	void STATIC_SetFppEquipableItemIconShowType(EUiShowType NewShowType);
	void STATIC_SetForceFeedbackEffectEnabled(bool bEnabled);
	void STATIC_SetEquipableIteIconShow(bool bNewShow);
	void STATIC_SetEnablePreloadingMap(bool bEnabled);
	void STATIC_SetEnableFunctionality(EGameplayFunctionalities eAction, bool bValue);
	void STATIC_SetEnableClientReplay(EGameplayClientReplay eAction, bool bValue);
	void STATIC_SetEffectSoundVolume(float Volume);
	void STATIC_SetEffectSoundMute(bool bIsMute);
	void STATIC_SetCurrentProvider(const struct FString& ProviderName);
	void STATIC_SetCurrentCultureName(const struct FString& InCultureName);
	void STATIC_SetCurrentCrosshairColorString(const struct FString& CrosshairColorStr);
	void STATIC_SetCurrentColorBlindKeyByInt(int ColorBlindKey);
	void STATIC_SetCurrentColorBlindKey(EColorBlindType ColorBlindKey);
	void STATIC_SetBGMSoundVolume(float Volume);
	void STATIC_SetBGMSoundMute(bool bIsMute);
	void STATIC_SetAxisKeysToDefault(const struct FName& AxisName, float Scale);
	void STATIC_SetAxisKeys(const struct FName& AxisName, float Scale, TArray<struct FTslInputKey> NewKeys);
	void STATIC_SetAxisKey(const struct FName& AxisName, float Scale, const struct FTslInputKey& NewKey, EKeyBindingSlot InKeyBindingSlot, bool bGamepad);
	void STATIC_SetActionKeysToDefault(const struct FName& ActionName);
	void STATIC_SetActionKeys(const struct FName& ActionName, TArray<struct FTslInputKey> NewKeys);
	void STATIC_SetActionKey(const struct FName& ActionName, const struct FTslInputKey& NewKey, EKeyBindingSlot InKeyBindingSlot, bool bGamepad);
	TArray<struct FName> STATIC_NotDuplicateCategoryNames(const struct FName& CatecoryName);
	bool STATIC_IsVSyncEnabled();
	bool STATIC_IsVoiceOutputMute();
	bool STATIC_IsVoiceInputMute();
	bool STATIC_IsUISoundMute();
	bool STATIC_IsMouseWheelInput(const struct FTslInputKey& InInputedKey);
	bool STATIC_IsModifierKey(const struct FTslInputKey& Key);
	bool STATIC_IsMasterSoundMute();
	bool STATIC_IsKeyValid(const struct FTslInputKey& Key);
	bool STATIC_IsKeyUsed(const struct FTslInputKey& Key);
	bool STATIC_IsInvertMouse();
	bool STATIC_IsInvertGamePadY();
	bool STATIC_IsInvertGamePadX();
	bool STATIC_IsIconKillfeedEnabled();
	bool STATIC_IsGamepadKey(const struct FTslInputKey& Key);
	bool STATIC_IsFunctionalityEnabled(EGameplayFunctionalities eAction);
	bool STATIC_IsForceFeedbackEffectEnabled();
	bool STATIC_IsEnabledPreloadingMap();
	bool STATIC_IsEnabledMotionBlur();
	bool STATIC_IsEffectSoundMute();
	bool STATIC_IsDoubleTapSupported(EInputModeSettingActions eAction);
	bool STATIC_IsDefaultFunctionalityEnabled(EGameplayFunctionalities eAction);
	bool STATIC_IsDefaultClientReplayEnabled(EGameplayClientReplay eAction);
	bool STATIC_IsClientReplayEnabled(EGameplayClientReplay eAction);
	bool STATIC_IsBGMSoundMute();
	int STATIC_GetWorldMapZoomSpeedLevel();
	int STATIC_GetVoiceOutputVolume();
	int STATIC_GetVoiceInputVolume();
	bool STATIC_GetUseTeamVoice();
	bool STATIC_GetUsePushToTalk();
	bool STATIC_GetUseGlobalVoice();
	bool STATIC_GetUseCharacterCapture();
	float STATIC_GetUISoundVolume();
	ETslInputModes STATIC_GetTslInputMode(EInputModeSettingActions eAction);
	EUiShowType STATIC_GetTpsWeaponIconShowType();
	TArray<struct FScreenResolution> STATIC_GetSupportedScreenResolutions();
	TArray<struct FSurportQualityLevel> STATIC_GetSupportedQualityLevels();
	bool STATIC_GetSupportedKillcam();
	float STATIC_GetSupportedFpsCameraFovRangeMin();
	float STATIC_GetSupportedFpsCameraFovRangeMax();
	bool STATIC_GetSupportedClientReplay();
	int STATIC_GetSelectMiniMapTypeIndex();
	float STATIC_GetScreenScale();
	struct FScreenResolution STATIC_GetScreenResolution();
	bool STATIC_GetReplayOptionEditable();
	int STATIC_GetQualityLevel(EQualityType Quality);
	int STATIC_GetOverallScalabilityLevel();
	struct FString STATIC_GetNativeName(const struct FString& InCultureName);
	struct FString STATIC_GetNativeLanguage(const struct FString& InCultureName);
	float STATIC_GetMouseSensitivity(const struct FName& InMouseSensitiveName);
	TArray<struct FUiType> STATIC_GetMiniMapTypes();
	float STATIC_GetMasterSoundVolume();
	struct FText STATIC_GetKeyName(const struct FTslInputKey& Key);
	TArray<struct FKeyInputModeName> STATIC_GetKeyInputModeNames();
	float STATIC_GetGamma();
	float STATIC_GetGamePadSensitivity(const struct FName& InGamePadSensitiveName);
	float STATIC_GetGamePadDeadZone();
	TEnumAsByte<EWindowMode> STATIC_GetFullscreenMode();
	float STATIC_GetFpsCameraFov();
	EUiShowType STATIC_GetFppWeaponIconShowType();
	EUiShowType STATIC_GetFppEquipableItemIconShowType();
	float STATIC_GetEffectSoundVolume();
	ETslInputModes STATIC_GetDefaultInputModeSetting(EInputModeSettingActions eAction);
	struct FString STATIC_GetDefaultCultureName();
	struct FString STATIC_GetCurrentProvider();
	struct FString STATIC_GetCurrentCultureName();
	struct FString STATIC_GetCurrentCrosshairColorStr();
	EColorBlindType STATIC_GetCurrentColorBlindKey();
	TArray<struct FPresetColor> STATIC_GetCrosshairColors();
	float STATIC_GetConvertedMouseSensitivity(const struct FName& InMouseSensitiveName);
	float STATIC_GetConvertedGamePadSensitivity(const struct FName& InGamePadSensitiveName);
	TArray<struct FColorBlindType> STATIC_GetColorBlindTypes();
	float STATIC_GetBGMSoundVolume();
	TArray<struct FTslInputKey> STATIC_GetAxisKeys(const struct FName& AxisName, float Scale, bool bDefault);
	struct FTslInputKey STATIC_GetAxisKey(const struct FName& AxisName, float Scale, bool bGamepad, bool bDefault, bool bWantAnyKey, EKeyBindingSlot eKeySlot);
	TArray<struct FString> STATIC_GetAvailableProviderNames();
	TArray<struct FText> STATIC_GetAvailableProviderDisplayNames();
	TArray<struct FQualityLevelInfo> STATIC_GetAutoQualityLevels(int WorkScale, float CPUMultiplier, float GPUMultiplier);
	TArray<struct FTslInputKey> STATIC_GetActionKeys(const struct FName& ActionName, bool bDefault);
	struct FTslInputKey STATIC_GetActionKey(const struct FName& ActionName, bool bGamepad, bool bDefault, bool bWantAnyKey, EKeyBindingSlot eKeySlot);
	float STATIC_DefaultGamePadInnerDeadZone();
	TArray<struct FCustomizableMouseSensitiveName> STATIC_CustomizableMouseSensitiveNames();
	TArray<struct FCustomizableGamePadSensitiveName> STATIC_CustomizableGamePadSensitiveNames();
	TArray<struct FTslGame_FCustomizableCategoryData> STATIC_CustomizableCategoryData();
	TArray<struct FTslGame_FCustomizableAxisName> STATIC_CustomizableAxisName();
	TArray<struct FCustomizableActionName> STATIC_CustomizableActionNames();
	TArray<struct FString> STATIC_CultureNames();
	ETslInputModes STATIC_CastTslInputModeFromName(const struct FName& InputModeName);
	void STATIC_ApplyMouseSensitivity();
	void STATIC_ApplyGameUserSettings(bool bCheckForCommandLineOverrides);
	void STATIC_ApplyGamePadSensitivity();
	void STATIC_ApplyGamePadDeadZone();
	void STATIC_ApplyAutoQualitySetting();
};


// Class TslGame.TslGameSession
// 0x0318 (0x06E0 - 0x03C8)
class ATslGameSession : public AGameSession
{
public:
	unsigned char                                      UnknownData00[0x318];                                     // 0x03C8(0x0318) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x15775c11);
		return ptr;
	}

};


// Class TslGame.TslGameState
// 0x00C8 (0x04D8 - 0x0410)
class ATslGameState : public AGameState
{
public:
	struct FString                                     MatchId;                                                  // 0x0410(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	struct FString                                     MatchShortGuid;                                           // 0x0420(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	bool                                               bIsCustomGame;                                            // 0x0430(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsWinnerZombieTeam;                                      // 0x0431(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0432(0x0002) MISSED OFFSET
	int                                                NumTeams;                                                 // 0x0434(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                RemainingTime;                                            // 0x0438(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                MatchElapsedMinutes;                                      // 0x043C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bTimerPaused;                                             // 0x0440(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0441(0x0003) MISSED OFFSET
	int                                                NumJoinPlayers;                                           // 0x0444(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumAlivePlayers;                                          // 0x0448(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumAliveZombiePlayers;                                    // 0x044C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumAliveTeams;                                            // 0x0450(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumStartPlayers;                                          // 0x0454(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumStartTeams;                                            // 0x0458(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     SafetyZonePosition;                                       // 0x045C(0x000C) (BlueprintVisible, Net, Transient, IsPlainOldData)
	float                                              SafetyZoneRadius;                                         // 0x0468(0x0004) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     PoisonGasWarningPosition;                                 // 0x046C(0x000C) (BlueprintVisible, Net, Transient, IsPlainOldData)
	float                                              PoisonGasWarningRadius;                                   // 0x0478(0x0004) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     RedZonePosition;                                          // 0x047C(0x000C) (BlueprintVisible, Net, Transient, IsPlainOldData)
	float                                              RedZoneRadius;                                            // 0x0488(0x0004) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              TotalReleaseDuration;                                     // 0x048C(0x0004) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ElapsedReleaseDuration;                                   // 0x0490(0x0004) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              TotalWarningDuration;                                     // 0x0494(0x0004) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ElapsedWarningDuration;                                   // 0x0498(0x0004) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsGasRelease;                                            // 0x049C(0x0001) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsTeamMatch;                                             // 0x049D(0x0001) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsZombieMode;                                            // 0x049E(0x0001) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x049F(0x0001) MISSED OFFSET
	float                                              ElapsedGasReleaseDuration;                                // 0x04A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     LerpSafetyZonePosition;                                   // 0x04A4(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	float                                              LerpSafetyZoneRadius;                                     // 0x04B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     SafetyZoneBeginPosition;                                  // 0x04B4(0x000C) (BlueprintVisible, Net, Transient, IsPlainOldData)
	float                                              SafetyZoneBeginRadius;                                    // 0x04C0(0x0004) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	EMatchStartType                                    MatchStartType;                                           // 0x04C4(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04C5(0x0003) MISSED OFFSET
	class ALevelAttribute*                             LevelAttribute;                                           // 0x04C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x04D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xeae441be);
		return ptr;
	}


	void UpdateWorldTimeSecondsDelta(float DeltaSeconds);
	void ShowPlayerStateList();
	void OnStartGasRelease(bool InbIsGasRelease);
	void OnRep_NumAlivePlayers();
	void OnRep_MatchShortGuid();
	void OnRep_MatchId();
	void OnRep_GasRelease(bool bLastIsGasRelease);
	bool IsMatchInProgressBP();
	class ALevelAttribute* GetLevelAttribute();
};


// Class TslGame.TslGameViewportClient
// 0x0050 (0x0660 - 0x0610)
class UTslGameViewportClient : public UGameViewportClient
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0610(0x0030) MISSED OFFSET
	class UTslConfirmationDialogWidget*                DialogUMGWidget;                                          // 0x0640(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0648(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb11ab0f0);
		return ptr;
	}

};


// Class TslGame.TslGlassWindowComponent
// 0x0040 (0x0A20 - 0x09E0)
class UTslGlassWindowComponent : public UStaticMeshComponent
{
public:
	class UDestructibleMesh*                           DestructibleMesh;                                         // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DestroyDelayAfterDestructed;                              // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09EC(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               DestructSound;                                            // 0x09F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DestructSoundOcclusionRefreshInterval;                    // 0x09F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x09FC(0x0004) MISSED OFFSET
	class UDestructibleComponent*                      DestructibleComponent;                                    // 0x0A00(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bReplicatedOnClient : 1;                                  // 0x0A08(0x0001) (Net)
	unsigned char                                      bDestroyed : 1;                                           // 0x0A08(0x0001) (Net)
	unsigned char                                      UnknownData02[0x17];                                      // 0x0A09(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xe2dec544);
		return ptr;
	}


	void OnRep_ReplicatedOnClient(bool bLastReplicatedOnClient);
	void OnRep_Destroyed(bool bLastDestroyed);
	void ClientNotifyHit(bool bBlockingHit, const struct FVector_NetQuantize& Location, const struct FVector_NetQuantizeNormal& ImpactNormal);
};


// Class TslGame.TslGunAnimInstance
// 0x00D8 (0x0450 - 0x0378)
class UTslGunAnimInstance : public UAnimInstance
{
public:
	struct FScriptMulticastDelegate                    WeaponFire;                                               // 0x0378(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    WeaponFireCycle;                                          // 0x0388(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TriggerOn;                                                // 0x0398(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TriggerOff;                                               // 0x03A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Reload1;                                                  // 0x03B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Reload2;                                                  // 0x03C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadByOneStart;                                         // 0x03D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadByOneSingle;                                        // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadByOneEnd;                                           // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    WeaponCharge;                                             // 0x0408(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FireSelect;                                               // 0x0418(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CancelReload;                                             // 0x0428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FName                                       Name_FireMode_Semi;                                       // 0x0438(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Name_FireMode_Burst;                                      // 0x0440(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Name_FireMode_Fullauto;                                   // 0x0448(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd61b04db);
		return ptr;
	}


	void HandleFiremodeMontage(class UAnimMontage* FireModeMontage);
};


// Class TslGame.TslHealthGaugeData
// 0x0020 (0x0050 - 0x0030)
class UTslHealthGaugeData : public UDataAsset
{
public:
	TArray<struct FHealthColorData>                    HealthGaugeColors;                                        // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FFloatInterval                              WarningRage;                                              // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UCurveLinearColor*                           GroggyColorCurve;                                         // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x86bb53b0);
		return ptr;
	}


	struct FLinearColor GetGaugeColor(float HealthPercent);
};


// Class TslGame.TslHornComponent
// 0x0040 (0x0220 - 0x01E0)
class UTslHornComponent : public UActorComponent
{
public:
	float                                              LongHornStartingTime;                                     // 0x01E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrHornKeyPressedTime;                                   // 0x01E4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHornKeyDown;                                             // 0x01E8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPlayingLongHorn;                                         // 0x01E9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01EA(0x0002) MISSED OFFSET
	struct FHornPlayInfo                               HornPlayInfo;                                             // 0x01EC(0x0008) (Net, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01F4(0x0004) MISSED OFFSET
	struct FHornSoundInfo                              HornSounds_Local;                                         // 0x01F8(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FHornSoundInfo                              HornSounds_Remote;                                        // 0x0208(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0218(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb3ce391b);
		return ptr;
	}


	void TickHorn(float DeltaSeconds);
	void ServerSetHorn(const struct FHornPlayInfo& InHornPlayInfo);
	void PlayInstantHorn();
	void PlayHorn(bool bIsLocalPlay, EHornSoundType InHornSoundType);
	void OnRep_SetHornPlayInfo();
	void OnPostDriverLeave();
	void OnHornKeyUp();
	void OnHornKeyDown();
	void OnHornEnd();
	void MulticastSetInstantHorn(const struct FHornPlayInfo& InHornPlayInfo);
};


// Class TslGame.TslImpactEffect
// 0x0250 (0x0600 - 0x03B0)
class ATslImpactEffect : public AActor
{
public:
	class UParticleSystem*                             DefaultFX;                                                // 0x03B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ConcreteFX;                                               // 0x03B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DirtFX;                                                   // 0x03C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WaterFX;                                                  // 0x03C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MetalFX;                                                  // 0x03D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WoodFX;                                                   // 0x03D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             GlassFX;                                                  // 0x03E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             GrassFX;                                                  // 0x03E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FleshFX;                                                  // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               AkSound;                                                  // 0x03F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDecalEffectDataSet                         DecalEffectDataSet;                                       // 0x0400(0x0168) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHitResult                                  SurfaceHit;                                               // 0x0568(0x0088) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleCom;                                              // 0x05F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                AKCom;                                                    // 0x05F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x0da03748);
		return ptr;
	}

};


// Class TslGame.TslInstancedGlassWindowComponent
// 0x0130 (0x0D10 - 0x0BE0)
class UTslInstancedGlassWindowComponent : public UGridInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0BE0(0x0008) MISSED OFFSET
	class UDestructibleMesh*                           DestructibleMesh;                                         // 0x0BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DestroyDelayAfterDestructed;                              // 0x0BF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0BF4(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               DestructSound;                                            // 0x0BF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DestructSoundOcclusionRefreshInterval;                    // 0x0C00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bReplicatedOnClient : 1;                                  // 0x0C04(0x0001) (Net)
	unsigned char                                      UnknownData02[0x13];                                      // 0x0C05(0x0013) MISSED OFFSET
	TArray<int>                                        DestroyedInstances;                                       // 0x0C18(0x0010) (Net, ZeroConstructor)
	TArray<int>                                        PendingDestroyInstances;                                  // 0x0C28(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData03[0xD8];                                      // 0x0C38(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb4d08509);
		return ptr;
	}


	void OnRep_ReplicatedOnClient(bool bLastReplicatedOnClient);
	void OnRep_PendingDestroy();
	void OnRep_Destroyed();
	void ClientNotifyHit(bool bBlockingHit, const struct FVector_NetQuantize& Location, const struct FVector_NetQuantizeNormal& ImpactNormal, int InstanceIndex);
};


// Class TslGame.TslInstancedReactionComponent
// 0x01F0 (0x0DD0 - 0x0BE0)
class UTslInstancedReactionComponent : public UGridInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0BE0(0x0008) MISSED OFFSET
	TArray<int>                                        PendingDestroyInstances;                                  // 0x0BE8(0x0010) (Net, ZeroConstructor)
	class UTslReactionData*                            ReactionData;                                             // 0x0BF8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDestructibleMesh*                           ReactionDM;                                               // 0x0C00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0C08(0x0080) MISSED OFFSET
	TMap<int, class UDestructibleComponent*>           ReactionDestructibles;                                    // 0x0C88(0x0050) (ExportObject, ZeroConstructor)
	TMap<int, class UStaticMeshComponent*>             ReactionStaticMeshComponents;                             // 0x0CD8(0x0050) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData02[0xA8];                                      // 0x0D28(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x86f1453e);
		return ptr;
	}


	void OnRep_PendingDestroy();
	void Client_ReactByVehicle(int InstanceIndex, const struct FVector& Impact, const struct FVector& ImpulseDir, const struct FVector& Velocity);
	void Client_ReactByRadialDamage(int InstanceIndex, float DamageAmount, const struct FVector& Origin, const struct FVector& Impact, const struct FVector& ImpulseDir, float OuterRadius);
	void Client_ReactByPointDamage(int InstanceIndex, float DamageAmount, const struct FVector& Impact, const struct FVector& ImpulseDir);
};


// Class TslGame.TslLevelScriptActor
// 0x00A8 (0x0460 - 0x03B8)
class ATslLevelScriptActor : public ALevelScriptActor
{
public:
	TArray<struct FWeatherLevelInfo>                   WeatherLevelInfos;                                        // 0x03B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UMaterialParameterCollection*                GlobalMPC;                                                // 0x03C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SelectedWeatherLevelIndex;                                // 0x03D0(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8C];                                      // 0x03D4(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd2a141cf);
		return ptr;
	}


	void RequestReplayALevelWeatherEvent(const struct FString& EventID);
	void RecordWeatherAsCustomEvent();
	void OnRep_SelectedWeatherIndex();
	void EnumerateReplayLevelEvents();
};


// Class TslGame.TslLobbyLevelScriptActor
// 0x0010 (0x03C8 - 0x03B8)
class ATslLobbyLevelScriptActor : public ALevelScriptActor
{
public:
	struct FName                                       MainMenuStreamingLevelName;                               // 0x03B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CustomizationStreamingLevelName;                          // 0x03C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xbd2e561d);
		return ptr;
	}


	void LatentLoadCustomizationLevel();
};


// Class TslGame.TslPersistentUser
// 0x0030 (0x0058 - 0x0028)
class UTslPersistentUser : public USaveGame
{
public:
	float                                              Gamma;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AimSensitivity;                                           // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bInvertedYAxis;                                           // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              ScreenScalePercentage;                                    // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf0fd784b);
		return ptr;
	}

};


// Class TslGame.TslLocalPlayer
// 0x0008 (0x01D0 - 0x01C8)
class UTslLocalPlayer : public ULocalPlayer
{
public:
	class UTslPersistentUser*                          PersistentUser;                                           // 0x01C8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xcbe4cd69);
		return ptr;
	}

};


// Class TslGame.TslMenuItemWidgetStyle
// 0x01B8 (0x01E8 - 0x0030)
class UTslMenuItemWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTslMenuItemStyle                           MenuItemStyle;                                            // 0x0030(0x01B8) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x98bfdbec);
		return ptr;
	}

};


// Class TslGame.TslMenuSoundsWidgetStyle
// 0x0038 (0x0068 - 0x0030)
class UTslMenuSoundsWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTslMenuSoundsStyle                         SoundsStyle;                                              // 0x0030(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa59dd723);
		return ptr;
	}

};


// Class TslGame.TslMenuWidgetStyle
// 0x0218 (0x0248 - 0x0030)
class UTslMenuWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTslMenuStyle                               MenuStyle;                                                // 0x0030(0x0218) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x9f39a77f);
		return ptr;
	}

};


// Class TslGame.TslModularBuilding
// 0x0100 (0x04B0 - 0x03B0)
class ATslModularBuilding : public AActor
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x03B0(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xafb9228d);
		return ptr;
	}


	void PassSeparatedFloors(TArray<class UChildActorComponent*> Floors);
	TArray<class UStaticMeshComponent*> GetMeshOnSapartedFloor(int SepartedFloor, const struct FString& Keyword);
	TArray<class UStaticMeshComponent*> GetBuildingModuleFromTable(const struct FString& Keyword);
	TArray<class UStaticMeshComponent*> GetAttachmentsFromTable(const struct FString& Keyword);
	void ClearBuildingModuleTable();
	void ClearAttachmentTable();
	void AddBuildingModuleToTable(const struct FString& Keyword, class UStaticMeshComponent* Building);
	void AddAttachmentToTable(const struct FString& Keyword, class UStaticMeshComponent* Attachment);
};


// Class TslGame.TslParticle
// 0x0058 (0x0408 - 0x03B0)
class ATslParticle : public AActor
{
public:
	bool                                               bAutoDestroyOnParticleFinish;                             // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoPlaySound;                                           // 0x03B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03B2(0x0006) MISSED OFFSET
	TArray<struct FParticleParameter>                  DefaultParameters;                                        // 0x03B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EAttachParent                                      AttachParentType;                                         // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	struct FName                                       AttachSocketName;                                         // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    AttachLocationRule;                                       // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    AttachRotationRule;                                       // 0x03D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    AttachScaleRule;                                          // 0x03DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x03DB(0x0005) MISSED OFFSET
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x03E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAkComponent*                                AkSound;                                                  // 0x03E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x03F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x17380bdf);
		return ptr;
	}


	void SetParticleParameter(const struct FString& Name, float Value, bool bEnableRTPC);
	void OnParticleFinish(class UParticleSystemComponent* PSystem);
	void OnParticleCollide(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat);
	void OnParameterUpdated();
	float GetParticleParamter(const struct FString& Name, float DefaultValue);
	float STATIC_GetEmitterGlobalSpawnRateScale();
	void ForceSpawn(int emitterIndex, const struct FVector& InLocation);
	void AttachToParent();
};


// Class TslGame.TslParticleBulletTrail
// 0x0020 (0x0428 - 0x0408)
class ATslParticleBulletTrail : public ATslParticle
{
public:
	struct FVector                                     TargetDestanation;                                        // 0x0408(0x000C) (Edit, IsPlainOldData)
	float                                              BulletSpeed;                                              // 0x0414(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          UnderWaterMaterialOverride;                               // 0x0418(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0420(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa0403bed);
		return ptr;
	}

};


// Class TslGame.TslParticleEnvironment
// 0x0020 (0x0428 - 0x0408)
class ATslParticleEnvironment : public ATslParticle
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0408(0x0010) MISSED OFFSET
	float                                              AutoParticleActivateDistance;                             // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoPlayDistance;                                         // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0420(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa831692e);
		return ptr;
	}

};


// Class TslGame.TslPassArea
// 0x0010 (0x03C0 - 0x03B0)
class ATslPassArea : public AActor
{
public:
	class USphereComponent*                            SphereComponent;                                          // 0x03B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Radius;                                                   // 0x03B8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xcc2487f1);
		return ptr;
	}

};


// Class TslGame.TslPassBluezoneArea
// 0x0000 (0x03C0 - 0x03C0)
class ATslPassBluezoneArea : public ATslPassArea
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x4e5ad8e3);
		return ptr;
	}

};


// Class TslGame.TslPassCarePackageArea
// 0x0000 (0x03C0 - 0x03C0)
class ATslPassCarePackageArea : public ATslPassArea
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x4b06360c);
		return ptr;
	}

};


// Class TslGame.TslPassAreaRectangle
// 0x0010 (0x03C0 - 0x03B0)
class ATslPassAreaRectangle : public AActor
{
public:
	class UBoxComponent*                               BoxComponent;                                             // 0x03B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Width;                                                    // 0x03B8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              Height;                                                   // 0x03BC(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x8daa7900);
		return ptr;
	}

};


// Class TslGame.TslPassBlueZoneAreaRectangle
// 0x0000 (0x03C0 - 0x03C0)
class ATslPassBlueZoneAreaRectangle : public ATslPassAreaRectangle
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x11e7c776);
		return ptr;
	}

};


// Class TslGame.TslPassCarePackageAreaRectangle
// 0x0000 (0x03C0 - 0x03C0)
class ATslPassCarePackageAreaRectangle : public ATslPassAreaRectangle
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x6c366113);
		return ptr;
	}

};


// Class TslGame.TslPawnInputBindingComponent
// 0x0020 (0x0200 - 0x01E0)
class UTslPawnInputBindingComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnOwnerPossessed;                                         // 0x01E0(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnOwnerUnPossessed;                                       // 0x01F0(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xc391b3e5);
		return ptr;
	}


	void NotifyOwnerUnPossessed(class ATslPlayerController* InController);
	void NotifyOwnerPossessed(class ATslPlayerController* InController);
	void MoveVehicleNextSeat_Gamepad();
	void MoveVehicleDriverSeat_Gamepad();
};


// Class TslGame.TslPhysicsVolume
// 0x0038 (0x0430 - 0x03F8)
class ATslPhysicsVolume : public APhysicsVolume
{
public:
	class AOceanManager*                               OceanManager;                                             // 0x03F8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UClass*                                      DefaultWaterSplash;                                       // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      VehicleWaterSplash;                                       // 0x0408(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              WaterSplashMuteTypes;                                     // 0x0410(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0420(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xfb5dfa76);
		return ptr;
	}

};


// Class TslGame.TslPlayerCameraManager
// 0x0020 (0x1BD0 - 0x1BB0)
class ATslPlayerCameraManager : public APlayerCameraManager
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x1BB0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x0dfc04d8);
		return ptr;
	}

};


// Class TslGame.TslPlayerDamageConfig
// 0x0050 (0x0080 - 0x0030)
class UTslPlayerDamageConfig : public UDataAsset
{
public:
	TMap<EDamageZoneType, struct FPlayerDamageZoneDesc> DamageZones;                                              // 0x0030(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x62c42e4f);
		return ptr;
	}

};


// Class TslGame.TslPlayerState
// 0x0268 (0x06B0 - 0x0448)
class ATslPlayerState : public APlayerState
{
public:
	int                                                Ranking;                                                  // 0x0448(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x044C(0x0004) MISSED OFFSET
	struct FString                                     AccountId;                                                // 0x0450(0x0010) (Net, ZeroConstructor)
	unsigned char                                      bKilled : 1;                                              // 0x0460(0x0001)
	bool                                               bShowMapMarker;                                           // 0x0461(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0462(0x0002) MISSED OFFSET
	struct FVector2D                                   MapMarkerPosition;                                        // 0x0464(0x0008) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	TArray<struct FReplicatedCastableItem>             ReplicatedCastableItems;                                  // 0x0470(0x0010) (Net, ZeroConstructor, Transient)
	bool                                               bEmptyReplicatedCastableItems;                            // 0x0480(0x0001) (ZeroConstructor, IsPlainOldData)
	EObserverAuthorityType                             ObserverAuthorityType;                                    // 0x0481(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0482(0x0002) MISSED OFFSET
	int                                                TeamNumber;                                               // 0x0484(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bIsZombie : 1;                                            // 0x0488(0x0001) (Net, Transient)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0489(0x0007) MISSED OFFSET
	struct FTslPlayerScores                            PlayerScores;                                             // 0x0490(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	struct FTslPlayerStatistics                        PlayerStatistics;                                         // 0x04A0(0x0004) (Net, Transient)
	struct FTslPlayerStatisticsForOwner                PlayerStatisticsForOwner;                                 // 0x04A4(0x0010) (Net, Transient)
	unsigned char                                      UnknownData05[0xB4];                                      // 0x04B4(0x00B4) MISSED OFFSET
	TArray<struct FReplicatedEquipableItem>            ReplicatedEquipableItems;                                 // 0x0568(0x0010) (Net, ZeroConstructor, Transient)
	unsigned char                                      UnknownData06[0x1C];                                      // 0x0578(0x001C) MISSED OFFSET
	unsigned char                                      bQuitter : 1;                                             // 0x0594(0x0001)
	unsigned char                                      UnknownData07[0x107];                                     // 0x0595(0x0107) MISSED OFFSET
	float                                              LastHitTime;                                              // 0x069C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	struct FString                                     CurrentAttackerPlayerNetId;                               // 0x06A0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xca25c8fd);
		return ptr;
	}


	void OnRep_Ranking(int OldRanking);
	void OnRep_PlayerStatistics(const struct FTslPlayerStatistics& OldPlayerStatistics);
	void OnRep_LastHitTime();
	bool IsZombie();
	bool IsQuitter();
	bool IsObserver();
	void InformAboutKill(EDamageReason DamageReason);
	float GetTotalScore();
	int GetTeamNum();
	struct FString GetShortPlayerName();
	float GetScoreByRanking();
	float GetScoreByKill();
	float GetScoreByDamage();
	struct FTslPlayerScores GetPlayerScores();
	float GetPing();
	class ATslPlayerController* GetOwningTslPlayerController();
	EObserverAuthorityType GetObserverAuthorityType();
	int GetKills();
	void ClientUpdateRankingOnlineEvent(int InRanking);
	void BroadcastDeath(class ATslPlayerState* KillerPlayerState, class ATslPlayerState* GroggyPlayerInstigator, class UDamageType* KillerDamageType, EDamageReason DamageReason, const struct FText& DamageCauserName, class UClass* DamageCauserClass, int AlivePlayerNum, int AliveTeamNum, bool InbIsStealKilled);
};


// Class TslGame.TslPostProcessEffect
// 0x0050 (0x0400 - 0x03B0)
class ATslPostProcessEffect : public AActor
{
public:
	struct FName                                       TargetPostProcessVolumeName;                              // 0x03B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FPostProcessMaterial>                PostProcessMaterials;                                     // 0x03B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPostProcessEffectParameter>         DefaultPostProcessEffectParameter;                        // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPostProcessEffectDynamicMaterialState> PostProcessEffectDynamicMaterialStates;                   // 0x03D8(0x0010) (ZeroConstructor, Transient)
	class APostProcessVolume*                          PostProcessVolume;                                        // 0x03E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x03F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x6267d40d);
		return ptr;
	}


	bool SetMaterialVectorParameter(int idx, const struct FName& ParameterName, const struct FLinearColor& Value);
	bool SetMaterialParameter(int idx, const struct FName& ParameterName, float Value);
	bool SetMaterialBlendWeight(int idx, float Value);
	bool SetEffectParameter(const struct FString& ParameterName, float Value);
	bool SetDepthOfFieldFarBlurSize(float NewBlurSize);
	void OnSetEffectParameter(const struct FString& ParameterName, float Value);
	float GetEffectParameter(const struct FString& ParameterName, float DefaultValue);
	float GetDepthOfFieldFarBlurSize();
};


// Class TslGame.TslWeapon_Projectile
// 0x0008 (0x0AF0 - 0x0AE8)
class ATslWeapon_Projectile : public ATslWeapon_Gun
{
public:
	struct FProjectileWeaponData                       ProjectileConfig;                                         // 0x0AE8(0x0008) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x544c6021);
		return ptr;
	}


	void ServerFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir);
};


// Class TslGame.TslWeapon_Throwable
// 0x00E8 (0x08C0 - 0x07D8)
class ATslWeapon_Throwable : public ATslWeapon
{
public:
	struct FThrowableWeaponData                        ThrowableConfig;                                          // 0x07D8(0x00A0) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0878(0x0018) MISSED OFFSET
	EThrowableState                                    ThrowableState;                                           // 0x0890(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0891(0x0007) MISSED OFFSET
	struct FName                                       ThrowWeaponSocketName;                                    // 0x0898(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PawnMotionContributionMultiplier;                         // 0x08A0(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x08AC(0x0004) MISSED OFFSET
	class ATslParticle*                                CookingEffect;                                            // 0x08B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      RingAttachment;                                           // 0x08B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x0a4a0cf4);
		return ptr;
	}


	void ServerStartPinOff();
	void ServerStartCooking();
	void ServerRequestCancelThrow();
	void ServerFireProjectile(const struct FVector& RelativeLocation, const struct FVector& AimDirection);
	void OnRep_ThrowableState(EThrowableState LastThrowableState);
	void OnAnimationNotify(const struct FName& NotifyName);
	EThrowableState GetThrowableState();
	int GetThrowableCountInInventory();
	int GetThrowableCount();
	void ClientNotifyReset();
	struct FVector CalculateFinalThrowVelocity(const struct FVector& AimDirection);
};


// Class TslGame.TslProjectile
// 0x0138 (0x04E8 - 0x03B0)
class ATslProjectile : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET
	class UProjectileMovementComponent*                MovementComp;                                             // 0x03B8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            CollisionComp;                                            // 0x03C0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleComp;                                             // 0x03C8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MeshComp;                                                 // 0x03D0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UPhysicsConstraintComponent*                 MeshConstraint;                                           // 0x03D8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	struct FVector                                     MeshInitialRotationRate;                                  // 0x03E0(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSyncServerAndClientRotation;                             // 0x03EC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x03ED(0x000B) MISSED OFFSET
	bool                                               HideMeshAtExplosion;                                      // 0x03F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ExplosionInWater;                                         // 0x03F9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EProjectileExplosionRotationType                   ExplosionRotationType;                                    // 0x03FA(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x03FB(0x0005) MISSED OFFSET
	struct FName                                       ParticleToMeshAttachPointName;                            // 0x0400(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0408(0x0008) MISSED OFFSET
	class UClass*                                      ExplosionTemplate;                                        // 0x0410(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ExplosionTemplateInAir;                                   // 0x0418(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ExplosionTemplateInWater;                                 // 0x0420(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               ImpactSound;                                              // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                AkComp;                                                   // 0x0430(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0438(0x0008) MISSED OFFSET
	EProjectileExplodeState                            ExplodeState;                                             // 0x0440(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bActiveParticle : 1;                                      // 0x0441(0x0001) (Net, Transient)
	unsigned char                                      bDoTick : 1;                                              // 0x0441(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0442(0x0002) MISSED OFFSET
	struct FRotator                                    ClientMeshRotation;                                       // 0x0444(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    ServerMeshRotation;                                       // 0x0450(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, Transient, IsPlainOldData)
	float                                              VelocityStopStepDistance;                                 // 0x045C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastStepLocation;                                         // 0x0460(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	int                                                StepBuffer;                                               // 0x046C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FinalInterpSpeed;                                         // 0x0470(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bConstantInterpStep;                                      // 0x0474(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0475(0x0003) MISSED OFFSET
	float                                              VelocityCheckTimerTick;                                   // 0x0478(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPropagateEffectActor;                                    // 0x047C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x047D(0x0003) MISSED OFFSET
	struct FProjectileData                             ProjectileConfig;                                         // 0x0480(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      ReplicatedEffectActor;                                    // 0x04B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x30];                                      // 0x04B8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xbac07138);
		return ptr;
	}


	void SetMeshRotationFromServer();
	void PropagateEffectActor_BP();
	void PropagateEffectActor();
	void OnRep_Exploded();
	void OnRep_ClientActivate();
	void OnRep_ActiveParticle();
	void OnImpact(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void OnHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExplodeBP(const struct FVector& Location, const struct FRotator& Rotation, const struct FHitResult& Impact, float Radius);
	void CheckVelocityForStart();
};


// Class TslGame.TslProjectileMolotov
// 0x0050 (0x0538 - 0x04E8)
class ATslProjectileMolotov : public ATslProjectile
{
public:
	EMolotovSimulationType                             MolotovSimulation;                                        // 0x04E8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04E9(0x0007) MISSED OFFSET
	class UClass*                                      DamageFieldContainerTemplate;                             // 0x04F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageFieldContainerInWallTemplate;                       // 0x04F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageFieldTemplate;                                      // 0x0500(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageFieldTemplateInWall;                                // 0x0508(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FragmentProjectileClass;                                  // 0x0510(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ImpactMaxCount;                                           // 0x0518(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x051C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa5296d06);
		return ptr;
	}

};


// Class TslGame.TslProjectileRedZone
// 0x0020 (0x0508 - 0x04E8)
class ATslProjectileRedZone : public ATslProjectile
{
public:
	class UAkAudioEvent*                               CreateSound;                                              // 0x04E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x04F0(0x0018) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x6f2e3347);
		return ptr;
	}

};


// Class TslGame.TslProjectile_Flare
// 0x0010 (0x03C0 - 0x03B0)
class ATslProjectile_Flare : public AActor
{
public:
	float                                              DamageRadius;                                             // 0x03B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	class UClass*                                      DebuffTemplate;                                           // 0x03B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd1452265);
		return ptr;
	}


	void Server_SpawnCarePackageCustom(const struct FVector& InLocation);
	void ApplyBurn(const struct FVector& InLocation);
};


// Class TslGame.TslReactionDoorComponent
// 0x0060 (0x0A40 - 0x09E0)
class UTslReactionDoorComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x09E0(0x0008) MISSED OFFSET
	class UTslReactionDoorData*                        ReactionDoorData;                                         // 0x09E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDestructibleMesh*                           DoorDestructibleMesh;                                     // 0x09F0(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                HLODChildIndex;                                           // 0x09F8(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDoorBreakingState                          DoorBreakingState;                                        // 0x09FC(0x0001) (Net)
	unsigned char                                      UnknownData01[0x43];                                      // 0x09FD(0x0043) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa79ec295);
		return ptr;
	}


	void OnRep_DoorBreakingState();
	void ClientTakeDamage(float Damage, const struct FVector_NetQuantize& HitLocation, float DamageRadius, float Impulse);
};


// Class TslGame.TslReactionBoxComponent
// 0x0000 (0x0880 - 0x0880)
class UTslReactionBoxComponent : public UBoxComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x36fdff24);
		return ptr;
	}

};


// Class TslGame.TslReactionClientComponent
// 0x0000 (0x09E0 - 0x09E0)
class UTslReactionClientComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x5eb04e36);
		return ptr;
	}

};


// Class TslGame.TslReplayData
// 0x0000 (0x0028 - 0x0028)
class UTslReplayData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf50764e4);
		return ptr;
	}

};


// Class TslGame.TslSceneCaptureComponent2D
// 0x0010 (0x0A40 - 0x0A30)
class UTslSceneCaptureComponent2D : public USceneCaptureComponent2D
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0A30(0x0008) MISSED OFFSET
	class UWorld*                                      World;                                                    // 0x0A38(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf06c3a92);
		return ptr;
	}


	void CaptureScene();
};


// Class TslGame.TslSceneCaptureWorld
// 0x0078 (0x00A0 - 0x0028)
class UTslSceneCaptureWorld : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
	class UWorld*                                      World;                                                    // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0058(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x87cb5279);
		return ptr;
	}


	void InitWorld(class UGameInstance* GameInstance, const struct FString& SceneCapturePackageName);
	void DestroyWorld();
};


// Class TslGame.TslServerParticle
// 0x0028 (0x03D8 - 0x03B0)
class ATslServerParticle : public AActor
{
public:
	bool                                               bAutoDestroyOnParticleFinish;                             // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoPlaySound;                                           // 0x03B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03B2(0x0006) MISSED OFFSET
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x03B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAkComponent*                                AkSound;                                                  // 0x03C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb3756d06);
		return ptr;
	}


	void StopParticleMulticast();
	void OnParticleFinish(class UParticleSystemComponent* PSystem);
};


// Class TslGame.TslSingleton
// 0x0118 (0x0140 - 0x0028)
class UTslSingleton : public UObject
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0028(0x0110) MISSED OFFSET
	class UWeaponsPenetrationConfig*                   WeaponsPenetrationConfig;                                 // 0x0138(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x331c17b0);
		return ptr;
	}

};


// Class TslGame.TslSmokeParticleSystemComponent
// 0x0000 (0x0AD0 - 0x0AD0)
class UTslSmokeParticleSystemComponent : public UParticleSystemComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x07d6216e);
		return ptr;
	}


	void ForceSpawn(int InEmitterIndex, const struct FVector& InLocation, const struct FVector& InVelocity);
};


// Class TslGame.TslSmokePropagationComponent
// 0x0100 (0x04F0 - 0x03F0)
class UTslSmokePropagationComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03F0(0x0008) MISSED OFFSET
	class UTslSmokeParticleSystemComponent*            SmokeParticle;                                            // 0x03F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x19];                                      // 0x0400(0x0019) MISSED OFFSET
	bool                                               bSystemActivated;                                         // 0x0419(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x041A(0x0006) MISSED OFFSET
	class UClass*                                      BlockingActorTemplate;                                    // 0x0420(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HalfHeightGlobal;                                         // 0x0428(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HalfHeightLocalScalar;                                    // 0x042C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlobalRadius;                                             // 0x0430(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlobalAngle;                                              // 0x0434(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RadialTryCount;                                           // 0x0438(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LoopCount;                                                // 0x043C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastWorkerIndex;                                          // 0x0440(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDistanceFromHost;                                      // 0x0444(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CeilingTraceDistance;                                     // 0x0448(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MainParticleVelocityScale_First;                          // 0x044C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MainParticleVelocityScale_Second;                         // 0x0458(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MainParticleVelocityScale_Third;                          // 0x0464(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalRayTraceOffset;                                 // 0x0470(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalRayRadiusScalar;                                // 0x0474(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalRayPropagateOffset;                             // 0x0478(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockerGroundTraceOffset;                                 // 0x047C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LowChildVelocityStaticVector;                             // 0x0480(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HighChildVelocityStaticVector;                            // 0x048C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   LowChildVelocityInMap;                                    // 0x0498(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   LowChildVelocityOutMap;                                   // 0x04A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   HighChildVelocityInMap;                                   // 0x04A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   HighChildVelocityOutMap;                                  // 0x04B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentRadialRay;                                         // 0x04B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentSpawnedChildCount;                                 // 0x04BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxTicksAllowed;                                          // 0x04C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxChildrenAllowed;                                       // 0x04C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CustomTickInterval;                                       // 0x04C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartDelay;                                               // 0x04CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugPropagation;                                        // 0x04D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugTick;                                               // 0x04D1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x04D2(0x0002) MISSED OFFSET
	float                                              ParticleLifetime;                                         // 0x04D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ParticleLifetimeRandomOffset;                             // 0x04D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              ParticleToObjectLifeScale;                                // 0x04E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ParticleAllocationCount;                                  // 0x04E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x04E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xab3e346b);
		return ptr;
	}


	void InitScan();
};


// Class TslGame.TslSpectatorPawn
// 0x01B8 (0x05F0 - 0x0438)
class ATslSpectatorPawn : public ASpectatorPawn
{
public:
	class UClass*                                      ReplayHUD;                                                // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LevelAttribute_BattleRoyalRule;                           // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LevelAttribute_Erangel;                                   // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LevelAttribute_Desert;                                    // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerInfoMinDistance;                                    // 0x0458(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayerInfoMaxDistance;                                    // 0x045C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsShowHeaderGun;                                          // 0x0460(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0461(0x0007) MISSED OFFSET
	class USpringArmComponent*                         FreeCameraSpringArmComponent;                             // 0x0468(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            FreeCameraComponent;                                      // 0x0470(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         FollowCameraSpringArmComponent;                           // 0x0478(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            FollowCameraComponent;                                    // 0x0480(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             AudioListener;                                            // 0x0488(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0490(0x0008) MISSED OFFSET
	class UTslDeathCameraComponent*                    DeathCameraComponent;                                     // 0x0498(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              LocationUpdateIntervalSeconds;                            // 0x04A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04A4(0x0004) MISSED OFFSET
	float                                              LimitMinFreeCamFov;                                       // 0x04A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LimitMaxFreeCamFov;                                       // 0x04AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x20];                                      // 0x04B0(0x0020) MISSED OFFSET
	float                                              FollowCameraZoomSpeed;                                    // 0x04D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LimitTargetArmLength;                                     // 0x04D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpectatableCheckLength;                                   // 0x04D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpectatableCheckScreenRatio;                              // 0x04DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x18];                                      // 0x04E0(0x0018) MISSED OFFSET
	class UClass*                                      OutlineEffectClass;                                       // 0x04F8(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	class ATslPostProcessEffect*                       OutlineEffect;                                            // 0x0500(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FSavedObPos>                         ArrObPos_Erangel;                                         // 0x0508(0x0010) (ZeroConstructor, Config)
	TArray<struct FSavedObPos>                         ArrObPos_Desert;                                          // 0x0518(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData05[0x48];                                      // 0x0528(0x0048) MISSED OFFSET
	class UClass*                                      ReplayZoneEffectClass;                                    // 0x0570(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ReplayZoneAreaClass;                                      // 0x0578(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ATslPostProcessEffect*                       ReplayZoneEffect;                                         // 0x0580(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ReplayZoneArea;                                           // 0x0588(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPlayerInfoDistanceDelegate;                             // 0x0590(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData06[0x50];                                      // 0x05A0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x80257f16);
		return ptr;
	}


	void TickMonitoring();
	void SetShowPlayerInfoDistance(float Distance);
	void SetPlayerCamera(class AActor* NewViewTarget);
	void SetObserverCameraMode(EObserverCameraMode NewCameraMode, class AActor* NewViewTarget);
	bool SetKillerOrVictimCamera(const struct FString& strKillerID, const struct FString& strKillerName, const struct FString& strVictimID, const struct FString& strVictimName);
	void SetFreeCamBattleLocation(const struct FVector& HitterLoc, const struct FVector& AttackedLoc);
	bool RestoreTargetCharacter();
	void OnViewTargetUpdate(class AActor* NewViewTarget);
	void OnToggleShowObseverTagWeapon();
	void OnToggleObseverTagWidget();
	void OnSwitchCameraSpectator();
	void OnSwitchCameraFollow();
	void OnStopSlowMove();
	void OnStopFastMove();
	void OnStartSlowMove();
	void OnStartFastMove();
	void OnSetLocation(unsigned char idx);
	void OnSetFree();
	void OnSetCharacterSpec(unsigned char idx);
	void OnSetCharacter(unsigned char idx);
	void OnSaveLocation(unsigned char idx);
	void OnSaveCharacter(unsigned char idx);
	void OnPlayerInfoDistanceUpHold();
	void OnPlayerInfoDistanceUp();
	void OnPlayerInfoDistanceDownHold();
	void OnPlayerInfoDistanceDown();
	void OnGotoTimelineDone();
	bool IsObserverTagWeaponShow();
	void HandleClipboard();
	class ATslCharacter* GetSpectatableCharacter();
	class ACarePackageItem* GetSpectableCarePackageItem();
	float GetShowPlayerInfoDistance();
	bool GetObserverTagShow();
	class ATslCharacter* GetLastSpectatedCharacter();
	EObserverCameraMode GetCameraMode();
	void BackupTargetCharacter(class AActor* ViewTarget);
};


// Class TslGame.TslSpectatorPawnMovement
// 0x0030 (0x02B0 - 0x0280)
class UTslSpectatorPawnMovement : public USpectatorPawnMovement
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0280(0x0004) MISSED OFFSET
	float                                              FastMoveModifier;                                         // 0x0284(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlowMoveModifier;                                         // 0x0288(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinFreeMoveSpeed;                                         // 0x028C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxFreeMoveSpeed;                                         // 0x0290(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinFreeMoveSpeedHeight;                                   // 0x0294(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxFreeMoveSpeedHeight;                                   // 0x0298(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AbsoluteMinZ;                                             // 0x029C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AbsoluteMaxZ;                                             // 0x02A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x02A4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x05592aa9);
		return ptr;
	}

};


// Class TslGame.TslStatics
// 0x0000 (0x0028 - 0x0028)
class UTslStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x6388dae2);
		return ptr;
	}


	void STATIC_UseHighPrecisionMouseMovement(class APlayerController* PlayerController);
	void STATIC_UnloadTextureByPtr(TAssetPtr<class UTexture> TexturePtr);
	void STATIC_SetWorldOriginByDistance(class APlayerController* Controller, float XYDistanceToShift);
	void STATIC_SetWorldOrigin(class APlayerController* Controller);
	void STATIC_SetReportUserInfo(class UObject* WorldContextObject, ESubjectToReport Key, const struct FTslReportUserInfo& UserInfo);
	void STATIC_SetAnimationAkSwitch(class ACharacter* Character, const struct FString& SwitchGroup, const struct FString& SwitchState);
	void STATIC_SetAnimationAkRTPC(class ACharacter* Character, const struct FString& RTPCName, float RTPCValue);
	struct FVector STATIC_ServerPositionToLocal(class UObject* WorldContextObject, const struct FVector& Server);
	int STATIC_SafeDivide_IntInt(int A, int B, int DivideByZeroValue);
	float STATIC_SafeDivide_FloatFloat(float A, float B, float DivideByZeroValue);
	void STATIC_ReleaseMouseCaptureFromPlayerController(class APlayerController* PlayerController);
	struct FVector STATIC_ProjectPointToFloor(class UObject* WorldContextObject, const struct FVector& Origin, float Length, bool* bOutHit);
	struct FVector STATIC_ProjectPointsToHighFloor(class UObject* WorldContextObject, const struct FVector& Origin, float AroundLength, float RayLength, bool* bOutHit);
	bool STATIC_PredictProjectilePathBox(class UObject* WorldContextObject, const struct FVector& StartPos, const struct FVector& LaunchVelocity, bool bTracePath, const struct FVector& ProjectileBox, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ, struct FHitResult* OutHit, TArray<struct FVector>* OutPathPositions, struct FVector* OutLastTraceDestination);
	struct FTslReportUserInfo STATIC_PlayerStateToReportReportUserInfo(class ATslPlayerState* TslPlayerState);
	struct FString STATIC_PhysicalSurfaceToString(TEnumAsByte<EPhysicalSurface> Type);
	struct FName STATIC_PhysicalSurfaceToName(TEnumAsByte<EPhysicalSurface> Type);
	struct FVector STATIC_LocalPositionToServer(class UObject* WorldContextObject, const struct FVector& Local);
	class UTexture* STATIC_LoadTextureByPtr(TAssetPtr<class UTexture> TexturePtr);
	bool STATIC_LineSphereIntersection(const struct FVector& Center, const struct FVector& Origion, const struct FVector& Direction, float Radius, struct FVector* Intersection1, struct FVector* Intersection2);
	bool STATIC_IsUsingGappLobby();
	bool STATIC_IsShipping();
	bool STATIC_IsServerActor(class AActor* Actor);
	bool STATIC_IsReportUserValid(class UObject* WorldContextObject, ESubjectToReport Key);
	bool STATIC_IsReportUserApplied(class UObject* WorldContextObject, ESubjectToReport Key);
	bool STATIC_IsPIE(class UObject* WorldContextObject);
	bool STATIC_IsNextPlayzoneOnTheMap(class UUserWidget* Widget);
	bool STATIC_IsMapFullyLoaded(class UWorld* World);
	bool STATIC_IsLastInputGamepad(class UObject* WorldContextObject);
	bool STATIC_IsKoreaRegion(class UObject* WorldContextObject);
	bool STATIC_IsGamepadConnected();
	bool STATIC_IsForKoreanRating();
	bool STATIC_IsForChineseLicensing();
	bool STATIC_IsESports();
	bool STATIC_IsEditor();
	bool STATIC_IsClientActor(class AActor* Actor);
	class APhysicsVolume* STATIC_GetWaterVolumeAtLocation(class UObject* WorldContextObject, const struct FVector& Point);
	float STATIC_GetWaterSurfaceHeight(class APhysicsVolume* PhysicsVolume, const struct FVector& CurLocation);
	class UTslVehicleSeatComponent* STATIC_GetVehicleSeatComponent(class AActor* Actor);
	class UTslVehicleCommonComponent* STATIC_GetVehicleCommonComponent(class AActor* Actor);
	class ATslPlayerController* STATIC_GetTslPlayerController(class APawn* Pawn);
	struct FString STATIC_GetTslPlatformName();
	class ATslGameState* STATIC_GetTslGameState(class UObject* WorldContextObject);
	class ATslCharacter* STATIC_GetTslCharacter(class UObject* WorldContextObject);
	class UPhysicalMaterial* STATIC_GetSimplePhysicalMaterial(class UPrimitiveComponent* PrimitiveComponent);
	struct FVector STATIC_GetServerLocation(class UObject* ActorOrComponent);
	struct FTslReportUserInfo STATIC_GetReportUserInfo(class UObject* WorldContextObject, ESubjectToReport Key);
	float STATIC_GetRecoilControlScale();
	float STATIC_GetRecoilAnimScale();
	float STATIC_GetNextPlayzoneRadius(class UObject* WorldContextObject);
	struct FVector STATIC_GetNextPlayzonePosition(class UObject* WorldContextObject);
	float STATIC_GetMOAScale();
	struct FString STATIC_GetGappLobbyUrl();
	struct FString STATIC_GetGameVersion();
	float STATIC_GetGamepadTabMaximumDelay(class ATslPlayerController* TslPlayerController);
	struct FString STATIC_GetFullGameVersion();
	bool STATIC_GetConsoleValue(const struct FString& ConsloeName, float* OutValueFloat, int* OutValueInt, struct FString* OutValueString);
	float STATIC_GetBluezoneRadius(class UObject* WorldContextObject);
	struct FVector STATIC_GetBluezonePosition(class UObject* WorldContextObject);
	float STATIC_GetBallisticDropScale();
	float STATIC_GetBallisticDragScale();
	bool STATIC_ConeVolumeLineTraceSingle(class UObject* WorldContextObject, const struct FVector& Origin, float HalfConeAngle, float RayLength, struct FVector* OutHitPoint);
	int STATIC_ConeVolumeLineTraceMulti(class UObject* WorldContextObject, const struct FVector& Origin, int SamplingNum, float HalfConeAngle, float RayLength, TArray<struct FVector>* OutHitPoints);
	bool STATIC_CanVehicleSeatInteraction(class ATslCharacter* InTslCharacter);
	bool STATIC_CanCancelCasting(class ATslCharacter* InTslCharacter);
	bool STATIC_ApplyRadialDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, const struct FAttackId& AttackId, bool bIsTargetDestructible, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, bool bExplode);
	bool STATIC_ApplyRadialDamageWithCurve(class UObject* WorldContextObject, float BaseDamage, const struct FVector& Origin, float DamageRadius, class UCurveFloat* DamageCurve, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, const struct FAttackId& AttackId, bool bIsTargetDestructible, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, bool bExplode);
	bool STATIC_ApplyRadialDamage(class UObject* WorldContextObject, float BaseDamage, const struct FVector& Origin, float DamageRadius, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, const struct FAttackId& AttackId, bool bIsTargetDestructible, class AActor* DamageCauser, class AController* InstigatedByController, bool bDoFullDamage, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, bool bExplode);
	void STATIC_ApplyDamage(class AActor* DamagedActor, float BaseDamage, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass, const struct FAttackId& AttackId);
};


// Class TslGame.TslStreamer
// 0x0020 (0x0048 - 0x0028)
class UTslStreamer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x1f3065e0);
		return ptr;
	}


	void OnOriginShiftedInternal(class UWorld* InWorld, const struct FIntVector& From, const struct FIntVector& To);
	void OnLevelChangedInternal();
};


// Class TslGame.FoliageCollisionStreamer
// 0x0068 (0x00B0 - 0x0048)
class UFoliageCollisionStreamer : public UTslStreamer
{
public:
	bool                                               bEnabled;                                                 // 0x0048(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              MinDistance;                                              // 0x004C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxQueryDistance;                                         // 0x0050(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxSimulationDistance;                                    // 0x0054(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseOnlyQueryAndPhysics;                                  // 0x0058(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x57];                                      // 0x0059(0x0057) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xbba5ab5a);
		return ptr;
	}

};


// Class TslGame.LODActorStreamer
// 0x0038 (0x0080 - 0x0048)
class ULODActorStreamer : public UTslStreamer
{
public:
	bool                                               bEnabled;                                                 // 0x0048(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              PreLoadDistance;                                          // 0x004C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PerFrameShowCount;                                        // 0x0050(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PerFrameShowCountLimit;                                   // 0x0054(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FFloatRange>                         MinDrawDistanceOverride;                                  // 0x0058(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x2a953841);
		return ptr;
	}

};


// Class TslGame.ParticleEnvrionmentStreamer
// 0x0018 (0x0060 - 0x0048)
class UParticleEnvrionmentStreamer : public UTslStreamer
{
public:
	bool                                               bEnabled;                                                 // 0x0048(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              ToleranceDeactiveDistance;                                // 0x004C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x18f2a842);
		return ptr;
	}

};


// Class TslGame.TslStreamerManager
// 0x0028 (0x03D8 - 0x03B0)
class ATslStreamerManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET
	TArray<class UClass*>                              StreamerClasses;                                          // 0x03B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UTslStreamer*>                        TslStreamers;                                             // 0x03C8(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xcadab1ed);
		return ptr;
	}

};


// Class TslGame.TslThrowableTrajectoryViewComponent
// 0x00D0 (0x0A00 - 0x0930)
class UTslThrowableTrajectoryViewComponent : public USplineComponent
{
public:
	class UStaticMesh*                                 SplineSegmentMesh;                                        // 0x0930(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          SplineSegmentMeshMaterial;                                // 0x0938(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SegmentMeshScale;                                         // 0x0940(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 ImpactMesh;                                               // 0x0948(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          ImpactMeshMaterial;                                       // 0x0950(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ImpactMeshScale;                                          // 0x0958(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0964(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x0964(0x0050) UNKNOWN PROPERTY: SetProperty TslGame.TslThrowableTrajectoryViewComponent.TraceObjectTypes
	float                                              PredictionTime;                                           // 0x09B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceScaleFactor;                                      // 0x09BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MaterialParam_NearDepthFadeOrigin;                        // 0x09C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MaterialParam_FarDepthFadeOrigin;                         // 0x09C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SplineGenerationAngThresholdDeg;                          // 0x09D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x09D4(0x000C) MISSED OFFSET
	class UStaticMeshComponent*                        ImpactMeshComponent;                                      // 0x09E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class USplineMeshComponent*>                SplineMeshArray;                                          // 0x09E8(0x0010) (ExportObject, ZeroConstructor)
	class UMaterialInstanceDynamic*                    SplineSegmentMeshMaterialDynamic;                         // 0x09F8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xbe574df4);
		return ptr;
	}


	void AttachToThrowable(class ATslWeapon_Throwable* ThrowableIn);
};


// Class TslGame.TslUserWidget
// 0x0020 (0x0260 - 0x0240)
class UTslUserWidget : public UUserWidget
{
public:
	class UInputComponent*                             InputComponentAxis;                                       // 0x0240(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	class ATslCharacter*                               CachedTslCharacter;                                       // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ATslGameState*                               CachedTslGameState;                                       // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ATslCharacter*                               CachedViewTargetTslCharacter;                             // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x9c724fac);
		return ptr;
	}


	struct FEventReply STATIC_TransferUserFocusThroughReply(const struct FFocusEvent& AcceptedFocusEvent, class UWidget* FocusWidget, bool bInAllUsers, struct FEventReply* Reply);
	void StopListeningForAllInputAxises();
	bool STATIC_NavigateUserFocus(class ULocalPlayer* Player, class UWidget* Widget);
	void ListenForInputAxis(const struct FName& AxisName, float Scale, bool bConsume, const struct FScriptDelegate& Callback);
	bool IsReplaying();
	float GetRawKeyValue(const struct FKey& InKey);
	class ATslPlayerState* GetDemoPlayerState(bool IsForMatchResult);
	class ATslCharacter* GetCachedViewTargetTslCharacter();
	class ATslGameState* GetCachedGameState();
	class ATslCharacter* GetCachedCharacter();
	bool STATIC_ContainUserFocus(class ULocalPlayer* Player, class UWidget* Widget);
	bool ContainOwnerUserFocus();
	void STATIC_ClearUserFocus(class ULocalPlayer* Player);
};


// Class TslGame.BlockInputUserWidget
// 0x0030 (0x0290 - 0x0260)
class UBlockInputUserWidget : public UTslUserWidget
{
public:
	bool                                               bWhiteList;                                               // 0x0260(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	TArray<struct FBlockAction>                        BlockActions;                                             // 0x0268(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               BlockAxises;                                              // 0x0278(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bGenerateEventOnOpen;                                     // 0x0288(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLockMouseCursorInViewport;                               // 0x0289(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x028A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd0fa1050);
		return ptr;
	}

};


// Class TslGame.UmgBaseWidget
// 0x0068 (0x02C8 - 0x0260)
class UUmgBaseWidget : public UTslUserWidget
{
public:
	unsigned char                                      bUseEmergingAnimation : 1;                                // 0x0260(0x0001) (Edit)
	unsigned char                                      bUseVanishingAnimation : 1;                               // 0x0260(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	struct FUmgWidgetBinder_Animation                  EmergingAnimationBinder;                                  // 0x0268(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FUmgWidgetBinder_Animation                  VanishingAnimationBinder;                                 // 0x0288(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET
	ESlateVisibility                                   PendingVisibility;                                        // 0x02C0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02C1(0x0003) MISSED OFFSET
	float                                              VanishingStartTime;                                       // 0x02C4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf1d678ee);
		return ptr;
	}


	bool IsMouseOn();
	void HandleMainPrepass(class UWidget* Widget);
};


// Class TslGame.TslXboxTeamManageWidget
// 0x0020 (0x02B0 - 0x0290)
class UTslXboxTeamManageWidget : public UBlockInputUserWidget
{
public:
	struct FUmgWidgetBinder_Gerneral                   TeamMemberVerticalBox_Binder;                             // 0x0290(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x20b83714);
		return ptr;
	}


	void ToggleVoiceChat(int MemberNumber);
	void TeamMemberMuteChanged(const struct FString& PlayerId, const struct FString& ChannelId, bool bIsMuted);
	void ShowGamerCard(int MemberNumber);
	class UTslXboxTeamManageInfoWidget* GetTeamManageInfoWidgetBySlot(int SlotIndex);
	class UTslXboxTeamManageInfoWidget* GetTeamManageInfoWidgetByMemberNum(int MemberNum);
};


// Class TslGame.BluezoneGpsBaseWidget
// 0x0378 (0x0640 - 0x02C8)
class UBluezoneGpsBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_Image                      BluezoneGaugeImageBinder;                                 // 0x02C8(0x0028) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  BluezoneTimeTextBinder;                                   // 0x02F0(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Image                      PlayerIconImageBinder;                                    // 0x0310(0x0028) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  MovingAnimationBinder;                                    // 0x0338(0x0020) (Edit, BlueprintVisible)
	TArray<struct FUmgWidgetBinder_Animation>          WarningAnimationList;                                     // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FUmgWidgetBinder_Animation>          ReleasingTextAnimationList;                               // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FUmgWidgetBinder_Animation                  EnterNextPlayzoneAnimBinder;                              // 0x0378(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  LeaveNextPlayzoneAnimBinder;                              // 0x0398(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  WidgetEmergingAnimBinder;                                 // 0x03B8(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  WidgetVanishingAminBinder;                                // 0x03D8(0x0020) (Edit, BlueprintVisible)
	struct FName                                       PlayZoneStartParmName;                                    // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BluezoneEndParamName;                                     // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ColorMultiplyParmName;                                    // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                InNextPlayzoneColorMultiply;                              // 0x0410(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FText                                       WarningTimeTextFormat;                                    // 0x0420(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ReleaseTimeText;                                          // 0x0438(0x0018) (Edit, BlueprintVisible)
	struct FSequence_Float                             BluezoneResetSequence;                                    // 0x0450(0x00A0) (Edit, BlueprintVisible)
	struct FSequence_Float                             PlayzoneResetSequence;                                    // 0x04F0(0x00A0) (Edit, BlueprintVisible)
	struct FSequence_Float                             PlayerIconResetSequence;                                  // 0x0590(0x00A0) (Edit, BlueprintVisible)
	float                                              PlayerIconPositionX_Start;                                // 0x0630(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayerIconPositionX_End;                                  // 0x0634(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0638(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xcad3204d);
		return ptr;
	}


	void UpdateBluezoneGpsWidget();
	void OnNotifyNextGasIn(const struct FVector& PoisonGasWarningPosition, float PoisonGasWarningRadius);
};


// Class TslGame.CharacterStanceBaseWidget
// 0x0030 (0x02F8 - 0x02C8)
class UCharacterStanceBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_Image                      StanceIconImageBinder;                                    // 0x02C8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FName                                       IconStateParamName;                                       // 0x02F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x29c73546);
		return ptr;
	}

};


// Class TslGame.EquipableItemIconBaseWidget
// 0x00B0 (0x0378 - 0x02C8)
class UEquipableItemIconBaseWidget : public UUmgBaseWidget
{
public:
	EEquipSlotID                                       EquipSlotID;                                              // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	struct FDurabilityColorSet                         DurabilityColorSet;                                       // 0x02D0(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      bUseWrning : 1;                                           // 0x02E0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	struct FFloatInterval                              WarningRange;                                             // 0x02E4(0x0008) (Edit, BlueprintVisible)
	EEquipableItemIconVisibility                       IconVisibilityType;                                       // 0x02EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02ED(0x0003) MISSED OFFSET
	struct FUmgWidgetBinder_Image                      IconImageBinder;                                          // 0x02F0(0x0028) (Edit, BlueprintVisible)
	struct FName                                       IconTexParamName;                                         // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       IconColorParamName;                                       // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DefaultColor;                                             // 0x0328(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FUmgWidgetBinder_Animation                  WarningAnimBinder;                                        // 0x0338(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  NoBagSpaceAnimBinder;                                     // 0x0358(0x0020) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x8540affd);
		return ptr;
	}


	void OnNoBagSpaceEvent();
};


// Class TslGame.EquipableItemIconHudBaseWidget
// 0x0000 (0x02C8 - 0x02C8)
class UEquipableItemIconHudBaseWidget : public UUmgBaseWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x8a277742);
		return ptr;
	}

};


// Class TslGame.EquipableItemIconHud_Observer
// 0x0000 (0x02C8 - 0x02C8)
class UEquipableItemIconHud_Observer : public UEquipableItemIconHudBaseWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x0f6cf5c6);
		return ptr;
	}

};


// Class TslGame.FppWeaponSlotHudBaseWidget
// 0x0000 (0x02C8 - 0x02C8)
class UFppWeaponSlotHudBaseWidget : public UUmgBaseWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x30f22536);
		return ptr;
	}

};


// Class TslGame.HudMainBaseWidget
// 0x0010 (0x02D8 - 0x02C8)
class UHudMainBaseWidget : public UUmgBaseWidget
{
public:
	TArray<struct FHudUiConfig>                        GeneralUiConfigs;                                         // 0x02C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd313cb4b);
		return ptr;
	}


	bool OnInit_Widget(class ATslBaseHUD* TslBaseHUD);
	bool OnInit_Replay(class ATslBaseHUD* TslBaseHUD);
	bool OnInit_Input(class ATslBaseHUD* TslBaseHUD);
	bool OnInit_Delegate(class ATslBaseHUD* TslBaseHUD);
};


// Class TslGame.InteractionBaseWidget
// 0x02D0 (0x0598 - 0x02C8)
class UInteractionBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_Border                     MainLayer;                                                // 0x02C8(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  InteractionMessageTextBinder;                             // 0x02E8(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Border                     InteractionMessageTextBgBinder;                           // 0x0308(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  AdditionalTextBinder;                                     // 0x0328(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Image                      SuitableWeaponImageBinder;                                // 0x0348(0x0028) (Edit, BlueprintVisible)
	float                                              SuitableWeaponImageHeight;                                // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	struct FUmgWidgetBinder_Image                      KeyImageBinder;                                           // 0x0378(0x0028) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  InteractionKeyTextBinder;                                 // 0x03A0(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Border                     InteractionKeyTextBorder_Binder;                          // 0x03C0(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Image                      InteractionKeyImage_Left_Binder;                          // 0x03E0(0x0028) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Image                      InteractionKeyImage_Right_Binder;                         // 0x0408(0x0028) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  AdditionalMessageBlinkingBinder;                          // 0x0430(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  AdditionalMessageNormalBinder;                            // 0x0450(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  ShowAnimationBinder;                                      // 0x0470(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  HiddenAnimationBinder;                                    // 0x0490(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  SwitchAnimationBinder;                                    // 0x04B0(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  SwitchAnimationResetBinder;                               // 0x04D0(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_WidgetSwitcher             InteractionInputMethodSwitcherBinder;                     // 0x04F0(0x0020) (Edit, BlueprintVisible)
	struct FName                                       InteractionKeyName;                                       // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FUmgWidgetBinder_Image                      ProgressCircle_Binder;                                    // 0x0518(0x0028) (Edit, BlueprintVisible)
	struct FLinearColor                                InteractionTextColor_Interactable;                        // 0x0540(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                InteractionTextShadowColor_Interactable;                  // 0x0550(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                InteractionTextColor_NotInteractable;                     // 0x0560(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                InteractionTextShadowColor_NotInteractable;               // 0x0570(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0580(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x5bbbd7af);
		return ptr;
	}


	void OnNotifyInteractionItemChanged(bool bIsInteractEnable);
};


// Class TslGame.KillCountBaseWidget
// 0x0050 (0x0318 - 0x02C8)
class UKillCountBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_TextBlock                  KillCountTextBinder;                                      // 0x02C8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FUmgWidgetBinder_Animation                  IncreasingAnimBinder;                                     // 0x02E8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              IncreasingKillCountDisplayTime;                           // 0x0308(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LastKillCount;                                            // 0x030C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLastWantShow;                                            // 0x0310(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0311(0x0003) MISSED OFFSET
	float                                              IncreasingKillCountDisplayStartTime;                      // 0x0314(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x584354f2);
		return ptr;
	}


	int GetLastKillCount();
};


// Class TslGame.LifeGaugeBaseWidget
// 0x0120 (0x03E8 - 0x02C8)
class ULifeGaugeBaseWidget : public UUmgBaseWidget
{
public:
	class UTslHealthGaugeData*                         LifeGaugeColorData;                                       // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FUmgWidgetBinder_Image                      LifeGaugeImageBinder;                                     // 0x02D0(0x0028) (Edit, BlueprintVisible)
	struct FName                                       LifeGaugeRatioValueParamName;                             // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LifeGaugeColorParamName;                                  // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FUmgWidgetBinder_Image                      HealAmountImageBinder;                                    // 0x0308(0x0028) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Overlay                    HitEffectLayer;                                           // 0x0330(0x0020) (Edit, BlueprintVisible)
	struct FName                                       HealAmountRatioValueParamName;                            // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       HealAmountRatioSartParamName;                             // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       HealAmountRatioEndParamName;                              // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       HealAmountColorParamName;                                 // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 HealEffectTimeCurve;                                      // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      HitEffectClass;                                           // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Item_Heal_FirstAid;                                       // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Item_Heal_MedKit;                                         // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FUmgWidgetBinder_Animation                  WarningAnimationBinder;                                   // 0x0390(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  GroggyAnimationBinder;                                    // 0x03B0(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x18];                                      // 0x03D0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x5696a728);
		return ptr;
	}


	void OnNotifyHit(float Damage, EDamageTypeCategory DamageType);
	void OnNotifyHeal(float StartHealth, float GoalHealth, float MaxHealth);
};


// Class TslGame.LifeGaugeEffectBaseWidget
// 0x00B8 (0x0380 - 0x02C8)
class ULifeGaugeEffectBaseWidget : public UUmgBaseWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02C8(0x0010) MISSED OFFSET
	struct FName                                       OldLifeRatioParamName;                                    // 0x02D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CurrentLifeRatioParamName;                                // 0x02E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FUmgWidgetBinder_Image                      LifeEffectBinder;                                         // 0x02E8(0x0028) (Edit, DisableEditOnInstance)
	TArray<struct FUiEffectAnimation_FloatCurve>       LifeEffectAnimationFloatCurveList;                        // 0x0310(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FUiEffectAnimation_VectorCurve>      LifeEffectAnimationVectorCurveList;                       // 0x0320(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      LifeEffectBackgroundBinder;                               // 0x0330(0x0028) (Edit, DisableEditOnInstance)
	TArray<struct FUiEffectAnimation_FloatCurve>       LifeEffectBgAnimationFloatCurveList;                      // 0x0358(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FUiEffectAnimation_VectorCurve>      LifeEffectBgAnimationVectorCurveList;                     // 0x0368(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bAutoDestroyOnEffectPlayFinish;                           // 0x0378(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0379(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xe4e2690f);
		return ptr;
	}

};


// Class TslGame.LifeGaugeHitEffectBaseWidget
// 0x0098 (0x0360 - 0x02C8)
class ULifeGaugeHitEffectBaseWidget : public UUmgBaseWidget
{
public:
	TArray<struct FGaugeAlphaCurveType>                AlphaCurveList;                                           // 0x02C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FUmgWidgetBinder_Image                      HitEffectImage;                                           // 0x02D8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FName                                       BaseColorParamName;                                       // 0x0300(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ColorLerpParamName;                                       // 0x0308(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       BrightAlphaParamName;                                     // 0x0310(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       HitEffectAlphaParamName;                                  // 0x0318(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       HitEffectStartParamName;                                  // 0x0320(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       HitEffectEndParamName;                                    // 0x0328(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0330(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x59f2b946);
		return ptr;
	}

};


// Class TslGame.LifeGaugeTemplateBaseWidget
// 0x0130 (0x03F8 - 0x02C8)
class ULifeGaugeTemplateBaseWidget : public UUmgBaseWidget
{
public:
	class UTslHealthGaugeData*                         LifeGaugeColorData;                                       // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FUmgWidgetBinder_Image                      LifeGaugeImageBinder;                                     // 0x02D0(0x0028) (Edit, BlueprintVisible)
	struct FName                                       LifeGaugeRatioValueParamName;                             // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LifeGaugeColorParamName;                                  // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FUmgWidgetBinder_Animation                  WarningAnimationBinder;                                   // 0x0308(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Image                      BackgroundImageBinder;                                    // 0x0328(0x0028) (Edit, BlueprintVisible)
	bool                                               bOverrideLifeGaugeMaterial;                               // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	class UMaterialInterface*                          OverrideLifeGaugeMaterial;                                // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideBackgroundMaterial;                              // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0361(0x0007) MISSED OFFSET
	class UMaterialInterface*                          OverrideBackgroundMaterial;                               // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseEffect;                                               // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	class UClass*                                      DamageEffectClass;                                        // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      HealEffectClass;                                          // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      HealAmountEffectClass;                                    // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FUmgWidgetBinder_Overlay                    EffectLayerBinder;                                        // 0x0390(0x0020) (Edit, BlueprintVisible)
	int                                                DamageEffectMax;                                          // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HealEffectMax;                                            // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x03B8(0x0018) MISSED OFFSET
	TArray<class ULifeGaugeEffectBaseWidget*>          DamageEffects;                                            // 0x03D0(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class ULifeGaugeEffectBaseWidget*>          HealEffects;                                              // 0x03E0(0x0010) (ExportObject, ZeroConstructor, Transient)
	class ULifeGaugeEffectBaseWidget*                  HealAmountEffect;                                         // 0x03F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xda3f408a);
		return ptr;
	}


	void Update(float Life, float MaxLife, bool bIsGroggy, float HealAmount, bool bDisableEffect);
	void OnDestoryHealEffect(class ULifeGaugeEffectBaseWidget* HealEffect);
	void OnDestoryDamageEffect(class ULifeGaugeEffectBaseWidget* DamageEffect);
};


// Class TslGame.MapCarePackageItemIconBaseWidget
// 0x0070 (0x0338 - 0x02C8)
class UMapCarePackageItemIconBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_Border                     IconImageBorderBinder;                                    // 0x02C8(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Image                      IconImageBinder;                                          // 0x02E8(0x0028) (Edit, BlueprintVisible)
	struct FName                                       IconStateParamName;                                       // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       IconColorParamName;                                       // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0320(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xdb0698f6);
		return ptr;
	}


	struct FEventReply OnButtonDown(const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent);
};


// Class TslGame.MapCharacterIconBaseWidget
// 0x02C0 (0x0588 - 0x02C8)
class UMapCharacterIconBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_Border                     IconImageBorderBinder;                                    // 0x02C8(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Image                      IconImageBinder;                                          // 0x02E8(0x0028) (Edit, BlueprintVisible)
	struct FName                                       IconStateParamName;                                       // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       IconRotationParamName;                                    // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       IconColorParamName;                                       // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FUmgWidgetBinder_Border                     PlayerNameBoderBinder;                                    // 0x0328(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  PlayerNameBinder;                                         // 0x0348(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Border                     ObserverMuzzleFlashBoderBinder;                           // 0x0368(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_UserWidget                 ObserverMuzzleFlashWidgetBinder;                          // 0x0388(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Border                     LifeGaugeBorderBinder;                                    // 0x03A8(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_UserWidget                 LifeGaugeWidgetBinder;                                    // 0x03C8(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  AttackedAnimBinder;                                       // 0x03E8(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  HittedAnimBinder;                                         // 0x0408(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  GroggyAnimBinder;                                         // 0x0428(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  FadeOutAnimBinder;                                        // 0x0448(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Border                     ButtonBInder;                                             // 0x0468(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0488(0x0010) MISSED OFFSET
	bool                                               bTeamNumber;                                              // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0499(0x0007) MISSED OFFSET
	struct FUmgWidgetBinder_TextBlock                  TeamNumberText;                                           // 0x04A0(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Overlay                    RiderLayerBinder;                                         // 0x04C0(0x0020) (Edit, BlueprintVisible)
	class UClass*                                      RiderIconClass;                                           // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayNameFormatWithOtherPlayer;                         // 0x04E8(0x0018) (Edit, BlueprintVisible)
	class UTexture*                                    MyDirectionIcon;                                          // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    TeamDirectionIcon;                                        // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FUmgWidgetBinder_Border                     SpectatedIconBorder;                                      // 0x0510(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Image                      NameTagColorImageBinder;                                  // 0x0530(0x0028) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0558(0x0018) MISSED OFFSET
	class UMaterialInterface*                          PendingIconMaterial;                                      // 0x0570(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class URiderIconWidget*>                    RiderIconList;                                            // 0x0578(0x0010) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd1df967b);
		return ptr;
	}


	struct FEventReply OnButtonDown(const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent);
};


// Class TslGame.MapGridWidget
// 0x0428 (0x06F0 - 0x02C8)
class UMapGridWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_Image                      MapImageBinder;                                           // 0x02C8(0x0028) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_CanvasPanel                MyMarkerLayerBinder;                                      // 0x02F0(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_CanvasPanel                TeamMarkerLayerBinder;                                    // 0x0310(0x0020) (Edit, BlueprintVisible)
	class UClass*                                      MapMarkerClass;                                           // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FUmgWidgetBinder_CanvasPanel                MyMapIconLayerBinder;                                     // 0x0338(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_CanvasPanel                OtherMapIconLayerBinder;                                  // 0x0358(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_CanvasPanel                CarePackageItemIconLayerBinder;                           // 0x0378(0x0020) (Edit, BlueprintVisible)
	class UClass*                                      MapCharacterIconClass;                                    // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MapCarePackageItemIconClass;                              // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ObserverPlayerIconHitEffectClass;                         // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowName;                                                // 0x03B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMinimap;                                               // 0x03B1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03B2(0x0006) MISSED OFFSET
	struct FUmgWidgetBinder_Image                      RedzoneImageBinder;                                       // 0x03B8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FName                                       RedzoneColorParamName;                                    // 0x03E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FColorBlindColorSet                         RedzoneColorSet;                                          // 0x03E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FUmgWidgetBinder_Image                      ReplayzoneImageBinder;                                    // 0x03F8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FUmgWidgetBinder_SizeBox                    ImageSizeBoxBinder;                                       // 0x0420(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FColorBlindColorSet                         BluezoneColorSet;                                         // 0x0440(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              Desaturation;                                             // 0x0450(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Contrast;                                                 // 0x0454(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0458(0x0014) MISSED OFFSET
	float                                              ZoomLevel;                                                // 0x046C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShowGridZoomLevel;                                        // 0x0470(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	class UCurveFloat*                                 ViewRatioCurve;                                           // 0x0478(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRectangleViewMode;                                       // 0x0480(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0481(0x0007) MISSED OFFSET
	class UFont*                                       GridFont;                                                 // 0x0488(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FontTypeFace;                                             // 0x0490(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             GridTextHorizentalArray;                                  // 0x0498(0x0010) (Edit, ZeroConstructor)
	TArray<struct FString>                             GridTextVerticalArray;                                    // 0x04A8(0x0010) (Edit, ZeroConstructor)
	struct FLinearColor                                ColorLargeGrid;                                           // 0x04B8(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                ColorSmallGrid;                                           // 0x04C8(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                ColorText;                                                // 0x04D8(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                ColorSafetyZone;                                          // 0x04E8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ThicknessLargeGrid;                                       // 0x04F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThicknessSmallGrid;                                       // 0x04FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorPoisonGasWarning;                                    // 0x0500(0x0010) (Edit, IsPlainOldData)
	bool                                               bDrawGridLine;                                            // 0x0510(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawGridText;                                            // 0x0511(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawNextPlayzoneGuideLine;                               // 0x0512(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseZOrderSort;                                           // 0x0513(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTeamMemberColor;                                      // 0x0514(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveDeadIcon;                                          // 0x0515(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0516(0x0002) MISSED OFFSET
	struct FLinearColor                                DefaultIconNameTagColor;                                  // 0x0518(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0528(0x0010) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MatInst;                                                  // 0x0538(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x18];                                      // 0x0540(0x0018) MISSED OFFSET
	class UMapMarkerBaseWidget*                        MyMapMarker;                                              // 0x0558(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TMap<class ATeam*, class UMapMarkerBaseWidget*>    TeamPlayerMarkers;                                        // 0x0560(0x0050) (ExportObject, ZeroConstructor, Transient)
	class UMapCharacterIconBaseWidget*                 MyCharacterMapIcon;                                       // 0x05B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TMap<class AActor*, class UMapCharacterIconBaseWidget*> OtherCharacterMapIcons;                                   // 0x05B8(0x0050) (ExportObject, ZeroConstructor, Transient)
	TMap<class ACarePackageItem*, class UMapCarePackageItemIconBaseWidget*> MapCarePackageItemIcons;                                  // 0x0608(0x0050) (ExportObject, ZeroConstructor, Transient)
	struct FTimerHandle                                ReplicatedCharacterListUpdateTimer;                       // 0x0658(0x0008) (Transient)
	struct FTimerHandle                                ReplicatedCarePackageItemListUpdateTimer;                 // 0x0660(0x0008) (Transient)
	TArray<class ATslCharacter*>                       ReplicatedCharacterList;                                  // 0x0668(0x0010) (ZeroConstructor, Transient)
	TArray<class ACarePackageItem*>                    ReplicatedCarePackageItemList;                            // 0x0678(0x0010) (ZeroConstructor, Transient)
	TArray<class ATeam*>                               ShowMarkerOnwerList;                                      // 0x0688(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData07[0x28];                                      // 0x0698(0x0028) MISSED OFFSET
	class UMaterialInstance*                           MyOrTeamIconMaterial;                                     // 0x06C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           OtherCharacterIconMaterial;                               // 0x06C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    CloseMySelf;                                              // 0x06D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHideOwner;                                              // 0x06E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x9fea3a2e);
		return ptr;
	}


	void UpdateZoomAndWidgetSize(float Zoom, const struct FVector2D& WidgetSize);
	void UpdateWidgetSize_UC(const struct FVector2D& WidgetSize);
	void UpdateReplicatedCharacterList();
	void UpdateReplicatedCarePackageItemList();
	void UpdateRectangleViewByWidgetSize(const struct FVector2D& WidgetSize);
	void UpdateRectangleView();
	struct FVector2D UCtoMC(const struct FVector2D& UC);
	void SetZoomLevel(float NewZoomLevel);
	void SetImageBrush(class UMaterialInstanceDynamic* NewMatInst);
	void SetCharacterIconPositionAndRotation_UC(const struct FVector2D& Pos_UC, float Angle);
	void SetCenter_MC(const struct FVector2D& Center);
	void OnMapIconClicked(class UMapCharacterIconBaseWidget* MapIconWidget);
	void OnMapCarePackageItemIconClicked(class UMapCarePackageItemIconBaseWidget* MapIconWidget);
	void OnGotoTimelineDone();
	struct FVector2D MCtoUC(const struct FVector2D& MapCoord);
	bool IsMouseInMarker();
	float GetZoomLevel();
	struct FVector2D GetWidgetSize();
	struct FVector2D GetWidgetPosition();
	struct FVector2D GetScreenOffset();
	void GetMapImageWigetSizeAndImageOffset(struct FVector2D* WidgetSize, struct FVector2D* ImageOffset);
	struct FVector2D GetLocalMousePosition();
	struct FString GetCharacterGridVertical();
	struct FString GetCharacterGridTextHorizental();
	struct FVector2D GetAlignment();
	void DrawRedZone_UC(const struct FVector2D& Center_UC, float Radius_UC);
	void DrawMarker_UC(const struct FVector2D& MarkerCenter_UC);
	void CursorUCtoCenterMC(const struct FVector2D& UC, struct FVector2D* Offest_MC, bool* bUpdate);
	struct FVector2D ClampPositionByWidgetSize_UC(const struct FVector2D& Positon, const struct FVector2D& WidgetSize);
	struct FVector2D ClampPosition_UC(const struct FVector2D& Positon);
	void AddCenter_UC(const struct FVector2D& Offset_UC);
};


// Class TslGame.MapMarkerBaseWidget
// 0x0060 (0x0328 - 0x02C8)
class UMapMarkerBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_Image                      MarkerImageBinder;                                        // 0x02C8(0x0028) (Edit, BlueprintVisible)
	struct FName                                       MarkerColorParmName;                                      // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FUmgWidgetBinder_Animation                  MarkerEmergingAnimBinder;                                 // 0x02F8(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0318(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x13c1b65b);
		return ptr;
	}

};


// Class TslGame.MiniMapBaseWidget
// 0x0028 (0x02F0 - 0x02C8)
class UMiniMapBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_UserWidget                 MapWidgetBinder;                                          // 0x02C8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x7662f6c2);
		return ptr;
	}

};


// Class TslGame.NetworkProblemBaseWidget
// 0x0028 (0x02F0 - 0x02C8)
class UNetworkProblemBaseWidget : public UUmgBaseWidget
{
public:
	int                                                CheckElapsedTime;                                         // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
	struct FUmgWidgetBinder_Animation                  IconBlinkingAnimBinder;                                   // 0x02D0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x29e1d26c);
		return ptr;
	}

};


// Class TslGame.ReplayProblemBaseWidget
// 0x0080 (0x0348 - 0x02C8)
class UReplayProblemBaseWidget : public UUmgBaseWidget
{
public:
	int                                                CheckElapsedTime;                                         // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
	struct FUmgWidgetBinder_Animation                  IconBlinkingAnimBinder;                                   // 0x02D0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FUmgWidgetBinder_TextBlock                  DisplayTextBlock;                                         // 0x02F0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       DefaultFailureText;                                       // 0x0310(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       KillcamUnusualMovementText;                               // 0x0328(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0340(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xca0cbbc9);
		return ptr;
	}

};


// Class TslGame.RiderIconWidget
// 0x0028 (0x02F0 - 0x02C8)
class URiderIconWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_Image                      RiderIcon;                                                // 0x02C8(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x90d778fb);
		return ptr;
	}

};


// Class TslGame.TeamMarkWidget
// 0x0260 (0x0528 - 0x02C8)
class UTeamMarkWidget : public UUmgBaseWidget
{
public:
	class ATeam*                                       TeamMember;                                               // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OffsetZ;                                                  // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeadMarkInvisibleTime;                                    // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeadMarkInvisibleDistance;                                // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   OffScreenEdgeSize;                                        // 0x02DC(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   OffScreenImageEdgeSize;                                   // 0x02E4(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              AnimationMaxPercent;                                      // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimationMaxDistance;                                     // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET
	struct FUmgWidgetBinder_Gerneral                   StateSwitcherBinder;                                      // 0x02F8(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_TextBlock                  PlayerNameTextBinder;                                     // 0x0318(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      OutLineImageBinder;                                       // 0x0338(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      DirectionImageBinder;                                     // 0x0360(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      NormalImageBinder;                                        // 0x0388(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      GroggyImageBinder;                                        // 0x03B0(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      DeadImageBinder;                                          // 0x03D8(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      VehicleImageBinder;                                       // 0x0400(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      ParachuteImageBinder;                                     // 0x0428(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      QuitterImageBinder;                                       // 0x0450(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  OpacityByRadiusPercentAnim;                               // 0x0478(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  ScaleByDistanceAnim;                                      // 0x0498(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Border                     ImageMarkBorderBinder;                                    // 0x04B8(0x0020) (Edit, DisableEditOnInstance)
	float                                              AmingImageAlpha;                                          // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScopingImageAlpha;                                        // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmingTextAlpha;                                           // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScopingTextAlpha;                                         // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    OutScreenImage;                                           // 0x04E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    GroggyImage;                                              // 0x04F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    VehicleImage;                                             // 0x04F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    ParachuteImage;                                           // 0x0500(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0508(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xe0a597e8);
		return ptr;
	}


	void InitializeTeamMarkGrid();
};


// Class TslGame.TeamOverallKillCountBaseWidget
// 0x0028 (0x02F0 - 0x02C8)
class UTeamOverallKillCountBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_TextBlock                  TeamOverallKillCountTextBinder;                           // 0x02C8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                LastTeamOverallKillCount;                                 // 0x02E8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLastWantShow;                                            // 0x02EC(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02ED(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x258c1e30);
		return ptr;
	}


	int GetLastTeamOverallKillCount();
};


// Class TslGame.TslAdaptiveCrosshairWidget
// 0x03C8 (0x0690 - 0x02C8)
class UTslAdaptiveCrosshairWidget : public UUmgBaseWidget
{
public:
	EWeaponClass                                       WeaponClass;                                              // 0x02C8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsShowWidget;                                            // 0x02C9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x02CA(0x0006) MISSED OFFSET
	struct FColorBlindColorSet                         ColorBlindColors;                                         // 0x02D0(0x0010) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      AdaptiveCrosshair_Binder;                                 // 0x02E0(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_CanvasPanel                CanvasBase_Binder;                                        // 0x0308(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_CanvasPanel                CenterCenter_Binder;                                      // 0x0328(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_CanvasPanel                CenterCrosshair_Binder;                                   // 0x0348(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_CanvasPanel                CenterD_Binder;                                           // 0x0368(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      CenterDOT_Binder;                                         // 0x0388(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_CanvasPanel                CenterL_Binder;                                           // 0x03B0(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_CanvasPanel                CenterR_Binder;                                           // 0x03D0(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_CanvasPanel                CenterU_Binder;                                           // 0x03F0(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Pistol_C_Binder;                                          // 0x0410(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Pistol_C_Gradient_Binder;                                 // 0x0438(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Pistol_L_Binder;                                          // 0x0460(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Pistol_R_Binder;                                          // 0x0488(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Rifle_D_Binder;                                           // 0x04B0(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Rifle_D_Arrow_Binder;                                     // 0x04D8(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Rifle_L_Binder;                                           // 0x0500(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Rifle_L_Arrow_Binder;                                     // 0x0528(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Rifle_R_Binder;                                           // 0x0550(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Rifle_R_Arrow_Binder;                                     // 0x0578(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Rifle_U_Binder;                                           // 0x05A0(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Rifle_U_Arrow_Binder;                                     // 0x05C8(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Shotgun_D_Binder;                                         // 0x05F0(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Shotgun_L_Binder;                                         // 0x0618(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Shotgun_R_Binder;                                         // 0x0640(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Shotgun_U_Binder;                                         // 0x0668(0x0028) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd74a0be9);
		return ptr;
	}


	void SetShowCrosshairWidget(bool bShow);
	void SetCenterCrosshairVisibility(bool bVisible);
	void SetCenterCrosshairDeviation(float InDeviation);
	void SetCenterCrosshairClass(EWeaponClass InWeaponClass, bool bHasWeapon);
	void SetAdaptiveCrosshairVisibility(bool bVisible);
	void SetAdaptiveCrosshairPosition(const struct FVector2D& ScreenPosition, float Distance);
	void HandleGameUserSettingApplied();
	void DecideAdaptiveCrosshairColor();
};


// Class TslGame.TslAlivePlayerInfoWidget
// 0x00F8 (0x03C0 - 0x02C8)
class UTslAlivePlayerInfoWidget : public UUmgBaseWidget
{
public:
	class ATslGameState*                               CachedTslGS;                                              // 0x02C8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FUmgWidgetBinder_Border                     ColorOverlay_Binder;                                      // 0x02D0(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  Warning_Binder;                                           // 0x02F0(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  Increasing_Binder;                                        // 0x0310(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  Decreasing_Binder;                                        // 0x0330(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  Default_Binder;                                           // 0x0350(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_TextBlock                  AdditionalInfo_Binder;                                    // 0x0370(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_TextBlock                  SurvivorCount_Binder;                                     // 0x0390(0x0020) (Edit, DisableEditOnInstance)
	bool                                               bIsReplaying;                                             // 0x03B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHidden;                                                // 0x03B1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03B2(0x0002) MISSED OFFSET
	int                                                CurrentCount;                                             // 0x03B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DisplayCount;                                             // 0x03B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WhileAnimCount;                                           // 0x03BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x729871c3);
		return ptr;
	}

};


// Class TslGame.AliveHumansInfoWidget
// 0x0000 (0x03C0 - 0x03C0)
class UAliveHumansInfoWidget : public UTslAlivePlayerInfoWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd11cc129);
		return ptr;
	}

};


// Class TslGame.AliveZombiesInfoWidget
// 0x0000 (0x03C0 - 0x03C0)
class UAliveZombiesInfoWidget : public UTslAlivePlayerInfoWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x81847868);
		return ptr;
	}

};


// Class TslGame.TslBaseOptionWidget
// 0x0000 (0x02C8 - 0x02C8)
class UTslBaseOptionWidget : public UUmgBaseWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xfba901d1);
		return ptr;
	}


	void OnReset();
	void OnDefault();
	void OnApply();
	bool IsKeyUp();
	bool IsEnableApply();
	bool IsChanged();
};


// Class TslGame.TslKeyDisplayWidget
// 0x0060 (0x0328 - 0x02C8)
class UTslKeyDisplayWidget : public UTslBaseOptionWidget
{
public:
	struct FScriptMulticastDelegate                    OnKeyInputed;                                             // 0x02C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class UTslKeyReceiverWidget*>               KeyReceiverWidgets;                                       // 0x02D8(0x0010) (ExportObject, ZeroConstructor)
	TArray<struct FUmgWidgetBinder_UserWidget>         KeyReceiverWidgetBinders;                                 // 0x02E8(0x0010) (Edit, ZeroConstructor)
	struct FName                                       InputName;                                                // 0x02F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       CategoryName;                                             // 0x0300(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayText;                                              // 0x0308(0x0018) (BlueprintVisible)
	bool                                               bGamepad;                                                 // 0x0320(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAxisInput;                                               // 0x0321(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0322(0x0002) MISSED OFFSET
	float                                              AxisScale;                                                // 0x0324(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xbe2f3c3c);
		return ptr;
	}


	void TransferInputEvent(const struct FTslInputKey& TslInputKey);
	void SetupKeyDisplayWidget(const struct FName& InInputName, const struct FText& InDisplayName, const struct FName& InCategoryName, bool InbAxisInput, float InAxisScale, bool InbGamepad);
	void InitializeKeyDisplayWidget(bool bDefault);
	void ApplyKey();
};


// Class TslGame.TslKeyOptionWidget
// 0x0068 (0x0330 - 0x02C8)
class UTslKeyOptionWidget : public UTslBaseOptionWidget
{
public:
	struct FUmgWidgetBinder_Gerneral                   ScrollBox_Binder;                                         // 0x02C8(0x0020) (Edit)
	TArray<class UTslKeySettingWidget*>                KeySettingWidgets;                                        // 0x02E8(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor)
	class UClass*                                      MouseSettingWidgetClass;                                  // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTslBaseOptionWidget*                        MouseSettingWidget;                                       // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      KeySettingWidgetClass;                                    // 0x0308(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GamePadSettingWidgetClass;                                // 0x0310(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTslBaseOptionWidget*                        GamePadSettingWidget;                                     // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               CategoryOrder;                                            // 0x0320(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x98773d3d);
		return ptr;
	}


	void OnKeyChanged(class UTslKeyDisplayWidget* InKeyDisplayWidget, const struct FTslInputKey& InInputedKey);
	void InitializeKeyAndMouseSetting();
};


// Class TslGame.TslKeySettingWidget
// 0x0068 (0x0330 - 0x02C8)
class UTslKeySettingWidget : public UTslBaseOptionWidget
{
public:
	struct FScriptMulticastDelegate                    OnKeyChanged;                                             // 0x02C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UClass*                                      KeyDisplayWidgetClass;                                    // 0x02D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FUmgWidgetBinder_Gerneral                   KeyScrollBoxBinder;                                       // 0x02E0(0x0020) (Edit)
	TArray<class UTslKeyDisplayWidget*>                KeyDisplayWidgets;                                        // 0x0300(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor)
	struct FText                                       DisplayText;                                              // 0x0310(0x0018) (BlueprintVisible)
	struct FName                                       CategoryName;                                             // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xc2c8ffc6);
		return ptr;
	}


	void TransferInputEvent(class UTslKeyDisplayWidget* KeyDisplayWidget, const struct FTslInputKey& TslInputKey);
	void StartupKeySettingWidget(const struct FName& InCategoryName, const struct FText& InDisplayText);
	void SetToDefault();
	void InitializeKeySettingWidget();
};


// Class TslGame.TslBoostGaugeWidget
// 0x0108 (0x03D0 - 0x02C8)
class UTslBoostGaugeWidget : public UUmgBaseWidget
{
public:
	class UMaterialInstanceDynamic*                    MID_Gauge0_21;                                            // 0x02C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Gauge20_61;                                           // 0x02D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Gauge60_91;                                           // 0x02D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Gauge90_101;                                          // 0x02E0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FUmgWidgetBinder_Animation                  VanishingAnimBinder;                                      // 0x02E8(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  WarningAnimBinder;                                        // 0x0308(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  EmergingAnimBinder;                                       // 0x0328(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Gerneral                   Boost0_20ImageBinder;                                     // 0x0348(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Gerneral                   Boost20_60ImageBinder;                                    // 0x0368(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Gerneral                   Boost60_90ImageBinder;                                    // 0x0388(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Gerneral                   Boost90_100ImageBinder;                                   // 0x03A8(0x0020) (Edit, DisableEditOnInstance)
	float                                              DisplayingBoost;                                          // 0x03C8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsWarning;                                               // 0x03CC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsVanished;                                              // 0x03CD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03CE(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa46b7f0f);
		return ptr;
	}

};


// Class TslGame.TslBreatheBarWidget
// 0x0140 (0x0408 - 0x02C8)
class UTslBreatheBarWidget : public UUmgBaseWidget
{
public:
	class ATslHUD*                                     TslHudCached;                                             // 0x02C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATslPlayerController*                        TslPlayerControllerCached;                                // 0x02D0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FUmgWidgetBinder_Gerneral                   BreathGaugeLayer_Binder;                                  // 0x02D8(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      BreathGaugeBG_Binder;                                     // 0x02F8(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  Breathing_Binder;                                         // 0x0320(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  Drowning_Binder;                                          // 0x0340(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  Vanishing_Binder;                                         // 0x0360(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  Emerging_Binder;                                          // 0x0380(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  Cooldown_Binder;                                          // 0x03A0(0x0020) (Edit, DisableEditOnInstance)
	float                                              BreathRatioDisplay;                                       // 0x03C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BreathRatio;                                              // 0x03C4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LerpTolerance;                                            // 0x03C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LerpTime;                                                 // 0x03CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BreathImgColor_Less_101;                                  // 0x03D0(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BreathImgColor_Less_51;                                   // 0x03E0(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BreathImgColor_Less_11;                                   // 0x03F0(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsVanishing;                                             // 0x0400(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bEventBound;                                              // 0x0401(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsCooldown;                                              // 0x0402(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0403(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x80e6c4ef);
		return ptr;
	}


	void OnStartBuff(const struct FName& BuffName, bool bStart);
};


// Class TslGame.TslBuffIconListWidget
// 0x00A0 (0x0368 - 0x02C8)
class UTslBuffIconListWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_SizeBox                    RunBuffIconBlock_Binder;                                  // 0x02C8(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      RunBuffIcon_Binder;                                       // 0x02E8(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_SizeBox                    HealBuffIconBlock_Binder;                                 // 0x0310(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      HealBuffIcon_Binder;                                      // 0x0330(0x0028) (Edit, DisableEditOnInstance)
	class UTexture*                                    HealBuffIconTex;                                          // 0x0358(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    RunBuffIconTex;                                           // 0x0360(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xe1e35961);
		return ptr;
	}


	void UpdateRunBuffIconVisibility(float InBoostPercentage);
	void UpdateRunBuffIcon(float InBoostPercentage);
	void UpdateHealBuffIconVisibility(float InBoostPercentage);
	void UpdateHealBuffIcon(float InBoostPercentage);
	struct FLinearColor GetRunBuffIconOpacity(float InBoostPercentage);
	struct FLinearColor GetHealBuffIconOpacity(float InBoostPercentage);
};


// Class TslGame.TslCastableItemIconHudWidget
// 0x0000 (0x02C8 - 0x02C8)
class UTslCastableItemIconHudWidget : public UUmgBaseWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x6e0e9875);
		return ptr;
	}

};


// Class TslGame.TslCastableItemIconWidget
// 0x00B8 (0x0380 - 0x02C8)
class UTslCastableItemIconWidget : public UUmgBaseWidget
{
public:
	ECastableItemType                                  CastableItemType;                                         // 0x02C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	class UTexture*                                    ItemIcon;                                                 // 0x02D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ItemIconRatio;                                            // 0x02D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                NormalColor;                                              // 0x02DC(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                NoItemColor;                                              // 0x02EC(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02FC(0x0004) MISSED OFFSET
	struct FUmgWidgetBinder_Gerneral                   Icon_Binder;                                              // 0x0300(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_TextBlock                  ItemCountText_Binder;                                     // 0x0320(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Border                     WidgetBorder_Binder;                                      // 0x0340(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_SizeBox                    IconSizeBox_Binder;                                       // 0x0360(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa7f9ee7a);
		return ptr;
	}


	int GetCastableItemCount(ECastableItemType InItemType);
};


// Class TslGame.TslCompassMarkerWidget
// 0x0038 (0x0300 - 0x02C8)
class UTslCompassMarkerWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_Image                      CompassMarkerImageBinder;                                 // 0x02C8(0x0028) (Edit, DisableEditOnInstance)
	int                                                MarkerNumber;                                             // 0x02F0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              XViewSize;                                                // 0x02F4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bShow;                                                    // 0x02F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x6b0d59f9);
		return ptr;
	}

};


// Class TslGame.TslCompassWidget
// 0x0160 (0x0428 - 0x02C8)
class UTslCompassWidget : public UUmgBaseWidget
{
public:
	class UMaterialInterface*                          MI_Compass;                                               // 0x02C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Compass;                                              // 0x02D0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FUmgWidgetBinder_Image                      CompassImageBinder;                                       // 0x02D8(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      MarkerImageBinder;                                        // 0x0300(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Overlay                    MyOverlayBinder;                                          // 0x0328(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Overlay                    TeamOverlayBinder;                                        // 0x0348(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_TextBlock                  DirectionTextBlockBinder;                                 // 0x0368(0x0020) (Edit, DisableEditOnInstance)
	class UClass*                                      CompassMarkerWidgetClass;                                 // 0x0388(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTslCompassMarkerWidget*                     MyCompassMarkerWidget;                                    // 0x0390(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UTslCompassMarkerWidget*>             TeamMarkerWidgetOfTeam;                                   // 0x0398(0x0010) (ExportObject, ZeroConstructor)
	float                                              DivisionLevel;                                            // 0x03A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // 0x03AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bClockwise;                                               // 0x03B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	TMap<int, struct FDirectionTextData>               OverrideDirectionTextDatas;                               // 0x03B8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FLinearColor                                DefaultDirectionTextColor;                                // 0x0408(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	int                                                BearingUnit;                                              // 0x0418(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // 0x041C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsInitilzed;                                             // 0x0420(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0421(0x0003) MISSED OFFSET
	float                                              CompassYaw;                                               // 0x0424(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x325510ab);
		return ptr;
	}

};


// Class TslGame.TslConfirmationDialogWidget
// 0x00E8 (0x03B0 - 0x02C8)
class UTslConfirmationDialogWidget : public UUmgBaseWidget
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x02C8(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x037e4b6e);
		return ptr;
	}


	void OnButtonClick(EPopupButtonID ButtonID);
};


// Class TslGame.TslGroggyCircleWidget
// 0x0060 (0x0328 - 0x02C8)
class UTslGroggyCircleWidget : public UUmgBaseWidget
{
public:
	class UMaterialInstanceDynamic*                    MID_ProgressCircle;                                       // 0x02C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MI_ProgressCircle;                                        // 0x02D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FUmgWidgetBinder_Image                      CircleImageBinder;                                        // 0x02D8(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      CrossImageBinder;                                         // 0x0300(0x0028) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x4b23583c);
		return ptr;
	}

};


// Class TslGame.TslHealItemSelectorWidget
// 0x0068 (0x0330 - 0x02C8)
class UTslHealItemSelectorWidget : public UUmgBaseWidget
{
public:
	class AInventory*                                  InventoryCached;                                          // 0x02C8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                HealItemSelectorTimer;                                    // 0x02D0(0x0008)
	struct FTimerHandle                                WidgetHideTimer;                                          // 0x02D8(0x0008)
	ECastableItemType                                  LastSelectedHealItemType;                                 // 0x02E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02E1(0x0007) MISSED OFFSET
	TArray<struct FHealItemSelectorData>               HealItemDatas;                                            // 0x02E8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      ItemIcon_Binder;                                          // 0x02F8(0x0028) (Edit, DisableEditOnInstance)
	struct FVector2D                                   InitialPosition;                                          // 0x0320(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   OffsetWhenTpsWeaponIconEnabled;                           // 0x0328(0x0008) (Edit, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x34687c0d);
		return ptr;
	}


	void OnTapAction();
	void OnHoldAction();
	void OnHideWidget();
	void NotifyHealItemSelectorInput(bool bPressed);
};


// Class TslGame.TslInventoryCapacityWidget
// 0x0010 (0x02D8 - 0x02C8)
class UTslInventoryCapacityWidget : public UUmgBaseWidget
{
public:
	float                                              GameMaxSpace;                                             // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
	class AInventory*                                  InventoryCached;                                          // 0x02D0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x1bb73ad3);
		return ptr;
	}


	class AInventory* GetInventoryCached();
	void GetFeedbackParamsFromVicinityItem(float CurrMaxSpace, float CurrSpace, float ItemSpace, float* OutFeedbackStart, float* OutFeedbackEnd, bool* OutIsPositive);
	void GetFeedbackParamsFromVicinityEquipment(float CurrMaxSpace, float CurrSpace, class UEquipableItem* EquipableItem, float* OutFeedbackStart, float* OutFeedbackEnd, bool* OutIsPositive);
	void GetFeedbackParamsFromInventoryItem(float CurrMaxSpace, float CurrSpace, float ItemSpace, float* OutFeedbackStart, float* OutFeedbackEnd, bool* OutIsPositive);
	void GetFeedbackParamsFromEquipmentSlot(float CurrMaxSpace, float CurrSpace, class UEquipableItem* EquipableItem, float* OutFeedbackStart, float* OutFeedbackEnd, bool* OutIsPositive);
	void GetCapacityParams(float CurrMaxSpace, float CurrSpace, float* OutCurrMaxSpaceStart, float* OutCurrSpaceStart);
};


// Class TslGame.TslKeyGuideWidget
// 0x0078 (0x0340 - 0x02C8)
class UTslKeyGuideWidget : public UUmgBaseWidget
{
public:
	struct FTimerHandle                                TimerHandle_HideWidget;                                   // 0x02C8(0x0008)
	int                                                XButtonImageIndex;                                        // 0x02D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BButtonImageIndex;                                        // 0x02D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FUmgWidgetBinder_WidgetSwitcher             ButtonImageSwitcher_Binder;                               // 0x02D8(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      ProgressBarImage_Binder;                                  // 0x02F8(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_TextBlock                  KeyGuideText_Binder;                                      // 0x0320(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x76f41f8a);
		return ptr;
	}


	void ShowKeyGuideWidget(EKeyGuideShowCases eShowCase);
	void HideKeyGuideWidget();
};


// Class TslGame.TslKeyReceiverWidget
// 0x00A0 (0x0368 - 0x02C8)
class UTslKeyReceiverWidget : public UUmgBaseWidget
{
public:
	struct FScriptMulticastDelegate                    OnKeyReceived;                                            // 0x02C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FTslInputKey                                OriginKey;                                                // 0x02D8(0x0020) (BlueprintVisible)
	struct FKey                                        FirstDownKey;                                             // 0x02F8(0x0018) (BlueprintVisible)
	struct FTslInputKey                                CurrentDownKey;                                           // 0x0310(0x0020) (BlueprintVisible)
	struct FTslInputKey                                LastDownedKey;                                            // 0x0330(0x0020) (BlueprintVisible)
	bool                                               bFocused;                                                 // 0x0350(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableInput;                                             // 0x0351(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsKeyUp;                                                 // 0x0352(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAxisInput;                                               // 0x0353(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AxisScale;                                                // 0x0354(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FKey>                                MouseButtons;                                             // 0x0358(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x27a18985);
		return ptr;
	}


	void UpdateKeyUp(const struct FKey& InKey);
	void UpdateKeyDown(const struct FKey& InKey);
	void KeyUp(const struct FKey& InKey);
	void KeyDown(const struct FKey& InKey);
	bool IsInputKeyDown();
	struct FText GetLastDownedKeyName();
};


// Class TslGame.TslKillMessageListWidget
// 0x0020 (0x02E8 - 0x02C8)
class UTslKillMessageListWidget : public UUmgBaseWidget
{
public:
	class UClass*                                      KillMessageWidgetClass;                                   // 0x02C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UTslKillMessageWidget*>               KillMessageWidgetArray;                                   // 0x02D0(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	float                                              FadeoutStartTime;                                         // 0x02E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xcb3201f6);
		return ptr;
	}


	void UpdateMessageListWidget();
	void OnVanishAnimationFinished(class UWidget* Widget);
	void EnqueueDeathMessage(const struct FDeathMessage& DeathMessage);
	void DequeueDeathMessage(class UWidget* Widget);
};


// Class TslGame.TslKillMessageWidget
// 0x0050 (0x0318 - 0x02C8)
class UTslKillMessageWidget : public UUmgBaseWidget
{
public:
	struct FScriptMulticastDelegate                    OnVanishAnimationFinished;                                // 0x02C8(0x0010) (ZeroConstructor, InstancedReference)
	struct FUmgWidgetBinder_Animation                  Vanish_Binder;                                            // 0x02D8(0x0020) (Edit, DisableEditOnInstance)
	TArray<struct FCauseOfDeathData>                   CauseOfDeathDatas;                                        // 0x02F8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FConditionOfDeathData>               ConditionOfDeathDatas;                                    // 0x0308(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x081ba27a);
		return ptr;
	}


	void SetVanishTimer(float TimeDelay);
	void SetDeathMessage(const struct FDeathMessage& InDeathMessage);
	void PlayVanishAnimation();
	void GetTextureFromDamageTypeCategory(EDamageTypeCategory InDamageTypeCategory, class UTexture** OutTexture, float* OutRatio);
	void GetTextureFromConditionOfDeathCategory(EConditionOfDeath InConditionOfDeathCategory, class UTexture** OutTexture, float* OutRatio);
};


// Class TslGame.TslLobbyNameTagWidget
// 0x00D0 (0x0398 - 0x02C8)
class UTslLobbyNameTagWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_TextBlock                  NickName_Binder;                                          // 0x02C8(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      HostImage_Binder;                                         // 0x02E8(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      ReadyImage_Binder;                                        // 0x0310(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      VoiceImage_Binder;                                        // 0x0338(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Border                     BackgroundBorder_Binder;                                  // 0x0360(0x0020) (Edit, DisableEditOnInstance)
	bool                                               bTestAlwaysShowIcons;                                     // 0x0380(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0381(0x0003) MISSED OFFSET
	int                                                SlotIndex;                                                // 0x0384(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NameTagOffsetTranslation;                                 // 0x0388(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bIsHost;                                                  // 0x0394(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsReady;                                                 // 0x0395(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSpeaking;                                              // 0x0396(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0397(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x1c6f094a);
		return ptr;
	}


	void UpdateWidgetsVisibilities();
	void SetSpeaking(bool InbSpeaking);
	void SetReady(bool InbReady);
	void SetNickName(const struct FString& InNickName);
	void SetHost(bool InbHost);
	void SetBinding();
	void OnVoiceChatUpdated(const struct FString& InUniqueId, bool InbTeamChannel, bool InbSpeaking, float InEnergy);
	bool IsAlone();
	void InitWidget(const struct FString& InNickName);
};


// Class TslGame.TslObserverPlayerInfoWidget
// 0x0198 (0x0460 - 0x02C8)
class UTslObserverPlayerInfoWidget : public UUmgBaseWidget
{
public:
	TArray<struct FLinearColor>                        TeamColorsCached;                                         // 0x02C8(0x0010) (ZeroConstructor)
	class UTexture*                                    UnArmedIcon;                                              // 0x02D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnArmedIconRatio;                                         // 0x02E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
	class ATslCharacter*                               CachedCharacter;                                          // 0x02E8(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                OldAmmoCount;                                             // 0x02F0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET
	struct FUmgWidgetBinder_Animation                  AmmoIncreasingAnimBinder;                                 // 0x02F8(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  AmmoDecreasingAnimBinder;                                 // 0x0318(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  UserNameText_Binder;                                      // 0x0338(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_TextBlock                  TeamNumberText_Binder;                                    // 0x0358(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_TextBlock                  AmmoCountText_Binder;                                     // 0x0378(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_TextBlock                  KillCountText_Binder;                                     // 0x0398(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_UserWidget                 LifeGaugeTemplateWidget_Binder;                           // 0x03B8(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      WeaponIconImageBinder;                                    // 0x03D8(0x0028) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_SizeBox                    WeaponIconImageSizeBoxBinder;                             // 0x0400(0x0020) (Edit, BlueprintVisible)
	struct FName                                       WeaponIconTextureParmName;                                // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       WeaponIconColorParmName;                                  // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                WeaponColor_Armed;                                        // 0x0430(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                WeaponColor_Normal;                                       // 0x0440(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FColorBlindColorSet                         WeaponColorSet_NoReload;                                  // 0x0450(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x27d90ae8);
		return ptr;
	}

};


// Class TslGame.TslTeamInfoListWidget
// 0x0038 (0x0300 - 0x02C8)
class UTslTeamInfoListWidget : public UUmgBaseWidget
{
public:
	TArray<class UTslTeamInfoWidget*>                  TeamInfoWidgetList;                                       // 0x02C8(0x0010) (ExportObject, ZeroConstructor)
	class UClass*                                      TeamInfoWidgetClass;                                      // 0x02D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FUmgWidgetBinder_VerticalBox                VerticalBoxBinder;                                        // 0x02E0(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x1fa164de);
		return ptr;
	}

};


// Class TslGame.TslTeamInfoWidget
// 0x0208 (0x04D0 - 0x02C8)
class UTslTeamInfoWidget : public UUmgBaseWidget
{
public:
	bool                                               bBindVoiceChatEvent;                                      // 0x02C8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSpeaking;                                                // 0x02C9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bMute : 1;                                                // 0x02CA(0x0001)
	unsigned char                                      bIsRestricted : 1;                                        // 0x02CA(0x0001)
	unsigned char                                      UnknownData00[0x5];                                       // 0x02CB(0x0005) MISSED OFFSET
	struct FUmgWidgetBinder_HorizontalBox              TeamHpAreaBinder;                                         // 0x02D0(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Border                     TeamInfoAreaBinder;                                       // 0x02F0(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Border                     InfoIconBorderBinder;                                     // 0x0310(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      InfoIconBinder;                                           // 0x0330(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      SpeakingImageBinder;                                      // 0x0358(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Border                     MarkerIconBorderBinder;                                   // 0x0380(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      MarkerImageBinder;                                        // 0x03A0(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      BoostImageBinder;                                         // 0x03C8(0x0028) (Edit, DisableEditOnInstance)
	bool                                               bUdateTeamNameColor;                                      // 0x03F0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET
	struct FUmgWidgetBinder_TextBlock                  TeamNameBinder;                                           // 0x03F8(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  OnSpeakAnimBinder;                                        // 0x0418(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_UserWidget                 HealthGaugeWidgetBinder;                                  // 0x0438(0x0020) (Edit, DisableEditOnInstance)
	struct FColorBlindColorSet                         ColorBlindColorSet;                                       // 0x0458(0x0010) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      TeamMemberColorBinder;                                    // 0x0468(0x0028) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      PlayerIconImageBinder;                                    // 0x0490(0x0028) (Edit, DisableEditOnInstance)
	class ATeam*                                       Team;                                                     // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                QuitColor;                                                // 0x04C0(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb9639c22);
		return ptr;
	}


	void UpdateVoiceImage();
	void UpdateVivoxChat(const struct FString& UniqueId, bool bIsTeamChannel, bool InbSpeaking, float InMeterEnergy);
	void UpdateTeamMemberName();
	void UpdateTeamMemberIcon();
	void UpdateTeamMemberColor();
	void UpdateTeamMarkerBorder();
	void UpdateTeamMarker();
	void UpdateTeamInfoIcon();
	void UpdateTeamInfoArea();
	void UpdatePlayerIcon();
	void UpdateHealthGaugeAndVisibility();
	void UpdateBoostGauge();
	void SetTeam(class ATeam* InTeam);
	void OnVoiceChat(bool InbSpeaking, float InMeterEnergy);
	void OnParticipantRestrictionChanged(class ATeam* Team, const struct FString& UniqueId, bool bIsRestricted);
	void OnParticipantMuteChanged(class ATeam* Team, const struct FString& ParticipantId, const struct FString& ChannelId, bool bIsMuted);
	void OnNativeParticipantRestrictionChanged(const struct FString& UniqueId, bool bIsRestricted);
	void OnNativeParticipantMuteChanged(const struct FString& ParticipantId, const struct FString& ChannelId, bool bIsMuted);
	void DecideTeamNameColor();
	void BindVoiceChatIfNeed();
};


// Class TslGame.TslTeamWidget
// 0x0038 (0x0300 - 0x02C8)
class UTslTeamWidget : public UUmgBaseWidget
{
public:
	TArray<class UTeamMarkWidget*>                     TeamMarkWidgets;                                          // 0x02C8(0x0010) (ExportObject, ZeroConstructor)
	class UClass*                                      TeamMarkWidgetClass;                                      // 0x02D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FUmgWidgetBinder_CanvasPanel                TeamMarkerLayerBinder;                                    // 0x02E0(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf7dd68aa);
		return ptr;
	}

};


// Class TslGame.TslXboxTeamManageInfoWidget
// 0x0028 (0x02F0 - 0x02C8)
class UTslXboxTeamManageInfoWidget : public UUmgBaseWidget
{
public:
	int                                                MemberNumber;                                             // 0x02C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
	struct FName                                       UserName;                                                 // 0x02D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsVoiceMute;                                             // 0x02D8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x02D9(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x1bace710);
		return ptr;
	}


	void UpdateVoiceIcon(bool InbVoiceMute);
	void UpdateUserNameText(const struct FName& InUserName);
};


// Class TslGame.VehicleFuelBaseWidget
// 0x00C0 (0x0388 - 0x02C8)
class UVehicleFuelBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_Image                      OilGaugeImageBinder;                                      // 0x02C8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FUmgWidgetBinder_Image                      OilGaugeBgImageBinder;                                    // 0x02F0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FUmgWidgetBinder_Image                      OilArrowImageBinder;                                      // 0x0318(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FUmgWidgetBinder_Overlay                    GaugeBodyBinder;                                          // 0x0340(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                NormalColor;                                              // 0x0360(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                FuelEmptyColor;                                           // 0x0370(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FName                                       GaugePramName;                                            // 0x0380(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x637730a3);
		return ptr;
	}

};


// Class TslGame.VehicleSeatInfoBaseWidget
// 0x0048 (0x0310 - 0x02C8)
class UVehicleSeatInfoBaseWidget : public UUmgBaseWidget
{
public:
	int                                                SeatIndex;                                                // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
	struct FName                                       StateParamName;                                           // 0x02D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FUmgWidgetBinder_Image                      SeatImageBinder;                                          // 0x02D8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	class APawn*                                       CachedVehiclePawn;                                        // 0x0300(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTslVehicleSeatComponent*                    CachedSeatComponent;                                      // 0x0308(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x8414c220);
		return ptr;
	}

};


// Class TslGame.VehicleStanceBaseWidget
// 0x0090 (0x0358 - 0x02C8)
class UVehicleStanceBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_VerticalBox                VehicleIconAreaBinder;                                    // 0x02C8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FUmgWidgetBinder_TextBlock                  SpeedTextBinder;                                          // 0x02E8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FUmgWidgetBinder_UserWidget                 LifeGaugeWidgetBinder;                                    // 0x0308(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FUmgWidgetBinder_UserWidget                 FuelGaugeWidgetBinder;                                    // 0x0328(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	class APawn*                                       CachedVehiclePawn;                                        // 0x0348(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UUserWidget*                                 CachedVehicleIconWidget;                                  // 0x0350(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x8c2fb9f7);
		return ptr;
	}

};


// Class TslGame.VehicleWheelInfoBaseWidget
// 0x0068 (0x0330 - 0x02C8)
class UVehicleWheelInfoBaseWidget : public UUmgBaseWidget
{
public:
	int                                                WheelIndex;                                               // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
	struct FUmgWidgetBinder_Image                      WheelImageBinder;                                         // 0x02D0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FUmgWidgetBinder_Image                      PunctureImageBinder;                                      // 0x02F8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	class ATslWheeledVehicle*                          CachedVehiclePawn;                                        // 0x0320(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTslWheeledVehicleMovement*                  CachedVehicleMovement;                                    // 0x0328(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x95b72a66);
		return ptr;
	}

};


// Class TslGame.VersionInfoBaseWidget
// 0x0050 (0x0318 - 0x02C8)
class UVersionInfoBaseWidget : public UUmgBaseWidget
{
public:
	struct FText                                       WithNickNameFormat;                                       // 0x02C8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       WithOutNickNameFormat;                                    // 0x02E0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FUmgWidgetBinder_TextBlock                  VersionInfoTextBinder;                                    // 0x02F8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x2af7fe47);
		return ptr;
	}

};


// Class TslGame.WeaponSlotBaseWidget
// 0x03D0 (0x0698 - 0x02C8)
class UWeaponSlotBaseWidget : public UUmgBaseWidget
{
public:
	unsigned char                                      bListInSlot : 1;                                          // 0x02C8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02C9(0x0003) MISSED OFFSET
	int                                                WeaponIndex;                                              // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ENoReloadGuideType                                 ListSlotNoReloadGuideType;                                // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseWeaponIcon : 1;                                       // 0x02D1(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x6];                                       // 0x02D2(0x0006) MISSED OFFSET
	struct FUmgWidgetBinder_Image                      WeaponIconImageBinder;                                    // 0x02D8(0x0028) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_SizeBox                    WeaponIconImageSizeBoxBinder;                             // 0x0300(0x0020) (Edit, BlueprintVisible)
	float                                              WeaponIconImageSizeBoxHeight;                             // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0324(0x0004) MISSED OFFSET
	struct FName                                       WeaponIconTextureParmName;                                // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       WeaponIconColorParmName;                                  // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                WeaponColor_Armed;                                        // 0x0338(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                WeaponColor_Normal;                                       // 0x0348(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                WeaponColor_Unarmed;                                      // 0x0358(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FUmgWidgetBinder_Animation                  ScaleUpAnimBinder;                                        // 0x0368(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  ScaleDownAnimBinder;                                      // 0x0388(0x0020) (Edit, BlueprintVisible)
	struct FColorBlindColorSet                         WeaponColorSet_NoReload;                                  // 0x03A8(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      bUseAmmoTextAndIcon : 1;                                  // 0x03B8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	struct FUmgWidgetBinder_TextBlock                  WeaponHandsOnLoadedAmmoCountTextBinder;                   // 0x03C0(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  WeaponListLoadedAmmoCountTextBinder;                      // 0x03E0(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  AmmoIncreasingAnimBinder;                                 // 0x0400(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  AmmoDecreasingAnimBinder;                                 // 0x0420(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  WeaponHandsOnUnloadedAmmoCountTextBinder;                 // 0x0440(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  UnloadedAmmoIncreasingAnimBinder;                         // 0x0460(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  UnloadedAmmoDecreasingAnimBinder;                         // 0x0480(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Image                      WeaponHandsOnAmmoIconBinder;                              // 0x04A0(0x0028) (Edit, BlueprintVisible)
	struct FName                                       AmmoTexParamName;                                         // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseWeaponFiringModeTextBinder : 1;                       // 0x04D0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData04[0x7];                                       // 0x04D1(0x0007) MISSED OFFSET
	struct FUmgWidgetBinder_TextBlock                  WeaponFiringModeTextBinder;                               // 0x04D8(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      bZeroingDistancebUseText : 1;                             // 0x04F8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData05[0x7];                                       // 0x04F9(0x0007) MISSED OFFSET
	struct FUmgWidgetBinder_VerticalBox                ZeroingDistanceBlockBinder;                               // 0x0500(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  ZeroingdistanceTextBinder;                                // 0x0520(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  ZeroDistIncreasingAnimBinder;                             // 0x0540(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  ZeroDistDecreasingAnimBinder;                             // 0x0560(0x0020) (Edit, BlueprintVisible)
	struct FText                                       ZeroingTextFormat;                                        // 0x0580(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ZeroingNA;                                                // 0x0598(0x0018) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Border                     WeaponIconBackground;                                     // 0x05B0(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Border                     AmmoAndFringModeBackground;                               // 0x05D0(0x0020) (Edit, BlueprintVisible)
	float                                              SlotBackgroundAlpha_Armed;                                // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlotBackgroundAlpha_Unarmed;                              // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlotBackgroundAlpha_Normal;                               // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x05FC(0x0004) MISSED OFFSET
	struct FUmgWidgetBinder_Animation                  FadeInWeaponSlotAnimBinder;                               // 0x0600(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  FadeOutWeaponSlotAnimBinder;                              // 0x0620(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  FadeInUnarmedWeaponSlotAminBinder;                        // 0x0640(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  FadeOutUnarmedWeaponSlotAminBinder;                       // 0x0660(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData07[0x18];                                      // 0x0680(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x2abc294f);
		return ptr;
	}

};


// Class TslGame.WeaponSlotHudBaseWidget
// 0x0178 (0x0440 - 0x02C8)
class UWeaponSlotHudBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_UserWidget                 CurrentWeaponSlotWidgetBinder;                            // 0x02C8(0x0020) (Edit, BlueprintVisible)
	TArray<struct FUmgWidgetBinder_UserWidget>         WeaponSlotWidgetBinderList;                               // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FUmgWidgetBinder_Border                     WeaponSlotListBorderBinder;                               // 0x02F8(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  FadeInSlotListAminBinder;                                 // 0x0318(0x0020) (Edit, BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  FadeOutSlotListAminBinder;                                // 0x0338(0x0020) (Edit, BlueprintVisible)
	float                                              SlotOffsetMultiply;                                       // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlotPadding;                                              // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSequence_Float                             MovingSequence;                                           // 0x0360(0x00A0) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0400(0x0030) MISSED OFFSET
	struct FTimerHandle                                FinishTimer;                                              // 0x0430(0x0008) (Transient)
	class AWeaponProcessor*                            CachedWeaponProcessor;                                    // 0x0438(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xec8748a8);
		return ptr;
	}


	void OnNotifyWeaponUnarm(bool bIsUnarmed);
	void OnNotifyWeaponChange(int WeaponIndex, float Duration);
	void OnNotifyWeaponArmed();
	void OnMovingStarted();
	void OnMovingFinished();
};


// Class TslGame.TslVehicleAnimInstance
// 0x0080 (0x0910 - 0x0890)
class UTslVehicleAnimInstance : public UVehicleAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0890(0x0004) MISSED OFFSET
	struct FRotator                                    Rot_Steering_Right;                                       // 0x0894(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Rot_Steering_Final;                                       // 0x08A0(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Rot_Speed_Left;                                           // 0x08AC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Rot_Speed_Right;                                          // 0x08B8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedMax;                                                 // 0x08C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Rot_Speed_Final;                                          // 0x08C8(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Rot_RPM_Left;                                             // 0x08D4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Rot_RPM_Right;                                            // 0x08E0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              RPMMax;                                                   // 0x08EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTickIndicators;                                          // 0x08F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAbsoluteSteeringRotation;                             // 0x08F1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x08F2(0x0002) MISSED OFFSET
	struct FRotator                                    Rot_RPM_Final;                                            // 0x08F4(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class ATslWheeledVehicle*                          VehicleRef;                                               // 0x0900(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTslWheeledVehicleMovement*                  VehicleMovementRef;                                       // 0x0908(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x4adb9c4d);
		return ptr;
	}

};


// Class TslGame.TslVehicleCommonComponent
// 0x00B0 (0x0290 - 0x01E0)
class UTslVehicleCommonComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRepair;                                                 // 0x01E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDeath;                                                  // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHealthChange;                                           // 0x0208(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFuelChange;                                             // 0x0218(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FName                                       SimpleBodyBoneName;                                       // 0x0228(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               ComplexBodyBoneNames;                                     // 0x0230(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       MainComplexBodyBoneName;                                  // 0x0240(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ComplexCollisionProfileName;                              // 0x0248(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsDying : 1;                                             // 0x0250(0x0001) (Edit, Net, EditConst)
	unsigned char                                      bIsBroken : 1;                                            // 0x0250(0x0001) (Edit, Net, EditConst)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0251(0x0003) MISSED OFFSET
	float                                              Health;                                                   // 0x0254(0x0004) (Edit, Net, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              HealthMax;                                                // 0x0258(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Fuel;                                                     // 0x025C(0x0004) (Edit, Net, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              FuelMax;                                                  // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0264(0x0004) MISSED OFFSET
	class UClass*                                      VehicleExplosionDamageType;                               // 0x0268(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<EDamageTypeCategory>                        CharacterDamageIgnores;                                   // 0x0270(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      VehicleUI;                                                // 0x0280(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0288(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa940e91d);
		return ptr;
	}


	void SetVehicleHealth(float NewHealth);
	void SetVehicleFuelPercent(float Percent);
	void SetVehicleFuel(float NewFuel);
	void Repair();
	void OnRep_Health(float LastHealth);
	void OnRep_Fuel(float LastFuel);
	void OnRep_Dying();
	void OnRep_Broken();
	bool IsDying();
	bool IsBroken();
	class UClass* GetVehicleUI();
	float GetVehicleHealthPercent();
	float GetVehicleHealth();
	float GetVehicleFuelPercent();
	float GetVehicleFuel();
	float GetVehicleBaseHealth();
	float GetVehicleBaseFuel();
	bool CanIgnoreCharacterDamage(EDamageTypeCategory DamageTypeCategory);
	void Break();
	void AddVehicleFuel(float Delta);
};


// Class TslGame.VehicleSurfaceAudioData
// 0x0010 (0x0040 - 0x0030)
class UVehicleSurfaceAudioData : public UDataAsset
{
public:
	class UAkAudioEvent*                               EventIn;                                                  // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               EventOut;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf3265185);
		return ptr;
	}

};


// Class TslGame.TslVehicleEffectComponent
// 0x03B0 (0x0590 - 0x01E0)
class UTslVehicleEffectComponent : public UActorComponent
{
public:
	class UMeshComponent*                              MeshComponent;                                            // 0x01E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAkComponent*                                EngineSoundComponent;                                     // 0x01E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FVehicleEffectInfo                          VehicleEffectInfo;                                        // 0x01F0(0x00F0) (Edit, DisableEditOnInstance)
	class ATslParticle*                                MufflerEffect;                                            // 0x02E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ATslParticle*                                Muffler2Effect;                                           // 0x02E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ATslParticle*                                BoostEffect;                                              // 0x02F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ATslParticle*                                Boost2Effect;                                             // 0x02F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ATslParticle*                                DamagedEffect;                                            // 0x0300(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ATslParticle*                                ExplosionEffect;                                          // 0x0308(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ATslParticle*                                FrontTrailEffect;                                         // 0x0310(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ATslParticle*                                RearTrailEffect;                                          // 0x0318(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ATslParticle*                                ThrusterEffect;                                           // 0x0320(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ATslParticle*                                Thruster2Effect;                                          // 0x0328(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ATslParticle*                                FrontFoamLeftEffect;                                      // 0x0330(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ATslParticle*                                FrontFoamRightEffect;                                     // 0x0338(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0340(0x001C) MISSED OFFSET
	float                                              TrailSpeedThreshold;                                      // 0x035C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FrontFoamSpawnThreshold;                                  // 0x0360(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRPMOverride;                                             // 0x0364(0x0001) (Edit, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x13];                                      // 0x0365(0x0013) MISSED OFFSET
	bool                                               bUseNewChassisAudio;                                      // 0x0378(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	class UCurveFloat*                                 Curve_EngineAudio;                                        // 0x0380(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseDopplerEffect;                                        // 0x0388(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	TMap<ESurfaceEffect, class UVehicleSurfaceAudioData*> SurfaceAudioMap;                                          // 0x0390(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bUseNewSurfaceAudio;                                      // 0x03E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	TArray<int>                                        MeasuredWheelIndices;                                     // 0x03E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        MeasuredWheelIndicesSlip;                                 // 0x03F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        MeasuredWheelIndicesSpin;                                 // 0x0408(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        MeasuredWheelIndicesBrake;                                // 0x0418(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              SuspenionOffsetForContact;                                // 0x0428(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SurfaceActivationValue;                                   // 0x042C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SurfaceDeactivationValue;                                 // 0x0430(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DT_Multiplier;                                            // 0x0434(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinVelocityForSurfaceCheck;                               // 0x0438(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinRotationSpeedForSurfaceCheck;                          // 0x043C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSlip;                                                  // 0x0440(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSpin;                                                  // 0x0444(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinVelocityForBreak;                                      // 0x0448(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BrakeNoDriverMultiplier;                                  // 0x044C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                VelocityInterpSpeed;                                      // 0x0450(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SlipInterpSpeed;                                          // 0x0454(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SpinInterpSpeed;                                          // 0x0458(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BreakInterpSpeed;                                         // 0x045C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugVisualizedMeasuredWheels;                           // 0x0460(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0461(0x0003) MISSED OFFSET
	float                                              AngularVelocityCoefficient;                               // 0x0464(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LateralVelocityCoeffictient;                              // 0x0468(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LateralVelocityClamp;                                     // 0x046C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bProcessShiftStart;                                       // 0x0470(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bProcessShiftEnd;                                         // 0x0471(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bProcessReverse;                                          // 0x0472(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x5];                                       // 0x0473(0x0005) MISSED OFFSET
	class UAkAudioEvent*                               GearUpSound_Start;                                        // 0x0478(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               GearDownSound_Start;                                      // 0x0480(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               GearUpSound_End;                                          // 0x0488(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               GearDownSound_End;                                        // 0x0490(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               GearReverseSound;                                         // 0x0498(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x90];                                      // 0x04A0(0x0090) MISSED OFFSET
	TMap<int, class UMaterialInterface*>               DestroyedMaterialMap;                                     // 0x0530(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              ApplyDestroyedMaterialDelay;                              // 0x0580(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0xC];                                       // 0x0584(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x77d7814d);
		return ptr;
	}


	void SetVehicleMaterialsToDestroyed();
	void SetEngineSoundRTPC(const struct FString& RTPC, float Value);
	void OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnHealthChange(float CurrentHealth, float LastHealth, float HealthMax, bool bIsDying);
	void OnDestroyedImpactEffect(class AActor* DestroyedActor);
	void OnDeath(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser);
	class UAkComponent* GetEngineSoundComponent();
	void ApplyDestoyedMaterialWithDelay();
};


// Class TslGame.TslVehicleHitComponent
// 0x0140 (0x0320 - 0x01E0)
class UTslVehicleHitComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E0(0x0008) MISSED OFFSET
	class UMeshComponent*                              MeshComponent;                                            // 0x01E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              HitCharacterDuration;                                     // 0x01F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x54];                                      // 0x01F4(0x0054) MISSED OFFSET
	float                                              LeaveCharacterIgnoreDuration;                             // 0x0248(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharacterHitMinimumVehicleSpeed;                          // 0x024C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharacterDamageVelocityUnitMultiplier;                    // 0x0250(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharacterDamageMassUnitMultiplier;                        // 0x0254(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 CharacterDamageSpeedCurve;                                // 0x0258(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 CharacterDamageMassCurve;                                 // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumCharacterDamage;                                   // 0x0268(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharacterLaunchSpeedMultiplier;                           // 0x026C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumCharacterLaunchSpeed;                              // 0x0270(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PhysicsImpulseMultiplier;                                 // 0x0274(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPhysicalMaterial*                           VoidPhysicalMaterial;                                     // 0x0278(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PhysicsImpactModifier;                                    // 0x0280(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PhysicsImpactModifierUpsideDown;                          // 0x0284(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PhysicsImpactAbsorption;                                  // 0x0288(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PhysicsImpactAbsorptionUpsideDown;                        // 0x028C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PhysicsImpactAbsorptionRider;                             // 0x0290(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PhysicsImpactAbsorptionRiderUpsideDown;                   // 0x0294(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PhysicsImpactVehicleDamageMultiplier;                     // 0x0298(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PhysicsImpactRiderDamageMultiplier;                       // 0x029C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      VehicleHitDamageType;                                     // 0x02A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02A8(0x0004) MISSED OFFSET
	float                                              ExplosionBaseDamage;                                      // 0x02AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionMinimumDamage;                                   // 0x02B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionRadiusInner;                                     // 0x02B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionRadiusOuter;                                     // 0x02B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionDamageFalloff;                                   // 0x02BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ExplosionDamageType;                                      // 0x02C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     ExplosionDamagePreventionChannel;                         // 0x02C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF];                                       // 0x02C9(0x000F) MISSED OFFSET
	float                                              ImpulseLimitationSpeedThreshold;                          // 0x02D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CollectTime;                                              // 0x02DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x02E0(0x0010) MISSED OFFSET
	TArray<struct FVehicleDebugHit>                    DebugHitHistory;                                          // 0x02F0(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0300(0x0008) MISSED OFFSET
	TArray<class UClass*>                              HitAbsorberTypes;                                         // 0x0308(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0318(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xc6e64e77);
		return ptr;
	}


	void OnSyncHit(const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnDeath(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser);
};


// Class TslGame.TslVehicleReactionInterface
// 0x0000 (0x0028 - 0x0028)
class UTslVehicleReactionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x370ba3bf);
		return ptr;
	}


	void OnImpactedByVehicle(const struct FHitResult& Hit, const struct FVector& Velocity);
};


// Class TslGame.TslVehicleSeatComponent
// 0x0100 (0x02E0 - 0x01E0)
class UTslVehicleSeatComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLeave;                                                  // 0x01E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDriverRide;                                             // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDriverLeave;                                            // 0x0208(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPostDriverRide;                                         // 0x0218(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPostDriverLeave;                                        // 0x0228(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FVehicleSeatInfo>                    SeatInfos;                                                // 0x0238(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UVehicleSeatInteractionComponent*>    Seats;                                                    // 0x0248(0x0010) (ExportObject, ZeroConstructor, Transient)
	bool                                               bUseSeatCamera;                                           // 0x0258(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDoFlipCheck;                                             // 0x0259(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x025A(0x0002) MISSED OFFSET
	float                                              FlipForce;                                                // 0x025C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDoEntryAngleCheck;                                       // 0x0260(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0261(0x0003) MISSED OFFSET
	float                                              MinEntryAngle;                                            // 0x0264(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDampenPlayerVelocityOnLeave;                             // 0x0268(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0269(0x0003) MISSED OFFSET
	float                                              OnLeaveVelocityMultiplier;                                // 0x026C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseActiveStabilize;                                      // 0x0270(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRiderChangeSeat;                                         // 0x0271(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0272(0x0002) MISSED OFFSET
	TWeakObjectPtr<class ATslCharacter>                LastDriver;                                               // 0x0274(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x64];                                      // 0x027C(0x0064) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x4948f5e1);
		return ptr;
	}


	void TryToStabilize();
	void TryToRide(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat);
	void TryToLeave(class ATslCharacter* Rider, bool bForce);
	void TryToFlip();
	void Ride(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat);
	void PostDriverRide();
	void PostDriverLeave();
	void OnFuelChange(float CurrentFuel, float LastFuel, float FuelMax);
	void Leave(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat, bool bForce);
	void KillAllRiders(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser);
	int GetVehicleSeatIndex(class UVehicleSeatInteractionComponent* Seat);
	TArray<class UVehicleSeatInteractionComponent*> GetSeats();
	class UVehicleSeatInteractionComponent* GetSeat(int SeatIndex);
	TArray<class ATslCharacter*> GetRiders();
	class ATslCharacter* GetLastDriver(float LastDuration);
	class ATslCharacter* GetDriver();
};


// Class TslGame.TslVehicleSyncComponent
// 0x0050 (0x0230 - 0x01E0)
class UTslVehicleSyncComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x01E0(0x000C) MISSED OFFSET
	float                                              MinCorrectionInterval;                                    // 0x01EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01F0(0x0004) MISSED OFFSET
	float                                              SendingToServerIntervalAtClient;                          // 0x01F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x01F8(0x0008) MISSED OFFSET
	float                                              SendingReliableHitToServerIntervalAtClient;               // 0x0200(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0204(0x0004) MISSED OFFSET
	float                                              AllowedMaxDistanceSqAtServer;                             // 0x0208(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StationaryCorrectionIntervalAtClient;                     // 0x020C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0210(0x0004) MISSED OFFSET
	float                                              StationaryCorrectionSpeedThresholdSq;                     // 0x0214(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StationaryCorrectionThresholdDistanceSq;                  // 0x0218(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x14];                                      // 0x021C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd7ac907f);
		return ptr;
	}


	void SendServerMoveToClient(int InCorrectionId, const struct FVector_NetQuantize100& ServerLocation, const struct FVector_NetQuantize100& ServerLinearVelocity, const struct FVector_NetQuantizeNormal& ServerRotator, const struct FVector_NetQuantize100& ServerAngularVelocity, bool bIsSnap);
	void SendClientMoveToServerUnreliably(int InCorrectionId, const struct FVector_NetQuantize100& ClientLocation, const struct FVector_NetQuantize100& ClientLinearVelocity, const struct FVector_NetQuantizeNormal& ClientRotator, const struct FVector_NetQuantize100& ClientAngularVelocity);
	void SendClientMoveToServerReliably(int InCorrectionId, const struct FVector_NetQuantize100& ClientLocation, const struct FVector_NetQuantize100& ClientLinearVelocity, const struct FVector_NetQuantizeNormal& ClientRotator, const struct FVector_NetQuantize100& ClientAngularVelocity);
	void SendClientHitToServerUnreliably(int InCorrectionId, const struct FVector_NetQuantize100& ClientLocation, const struct FVector_NetQuantize100& ClientLinearVelocity, const struct FVector_NetQuantizeNormal& ClientRotator, const struct FVector_NetQuantize100& ClientAngularVelocity, const struct FVector_NetQuantize100& NormalImpulse, const struct FHitResult& Hit);
	void SendClientHitToServerReliably(int InCorrectionId, const struct FVector_NetQuantize100& ClientLocation, const struct FVector_NetQuantize100& ClientLinearVelocity, const struct FVector_NetQuantizeNormal& ClientRotator, const struct FVector_NetQuantize100& ClientAngularVelocity, const struct FVector_NetQuantize100& NormalImpulse, const struct FHitResult& Hit);
	void OnHitAtServer(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnHitAtClient(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnDriverRide();
};


// Class TslGame.TslVehicleTempComponent
// 0x0000 (0x01E0 - 0x01E0)
class UTslVehicleTempComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x06fe561a);
		return ptr;
	}

};


// Class TslGame.TslViewTargetTempComponent
// 0x0010 (0x01F0 - 0x01E0)
class UTslViewTargetTempComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x0a3b46fc);
		return ptr;
	}


	void AddTempComponentWithDelegate(class USceneComponent* TempComponent, const struct FScriptDelegate& DelegateToCall);
	void AddTempComponent(class USceneComponent* TempComponent);
};


// Class TslGame.TslWeapon_Gun_Projectile
// 0x0000 (0x0AE8 - 0x0AE8)
class ATslWeapon_Gun_Projectile : public ATslWeapon_Gun
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x75add628);
		return ptr;
	}


	void SimulateFire_BP();
};


// Class TslGame.TslWeapon_Trajectory
// 0x01E8 (0x0CD0 - 0x0AE8)
class ATslWeapon_Trajectory : public ATslWeapon_Gun
{
public:
	float                                              TrajectoryGravityZ;                                       // 0x0AE8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              RecoilSpreadScale;                                        // 0x0AEC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               FireAtViewPoint;                                          // 0x0AF0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0AF1(0x0003) MISSED OFFSET
	float                                              DefaultTimerFrequency;                                    // 0x0AF4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              CrouchSpreadModifier;                                     // 0x0AF8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              ProneSpreadModifier;                                      // 0x0AFC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              WalkSpread;                                               // 0x0B00(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              RunSpread;                                                // 0x0B04(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              JumpSpread;                                               // 0x0B08(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B0C(0x0004) MISSED OFFSET
	struct FTrajectoryWeaponData                       TrajectoryConfig;                                         // 0x0B10(0x0080) (Edit, DisableEditOnInstance)
	struct FRecoilInfo                                 RecoilInfo;                                               // 0x0B90(0x0068) (Edit, DisableEditOnInstance)
	class UClass*                                      ImpactTemplate;                                           // 0x0BF8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TrailFX;                                                  // 0x0C00(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<float, class UClass*>                         UnderWaterTrailFXClassPerLength;                          // 0x0C08(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       TrailTargetParam;                                         // 0x0C58(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0C60(0x0018) MISSED OFFSET
	float                                              WeaponSpread;                                             // 0x0C78(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x54];                                      // 0x0C7C(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x98242c3f);
		return ptr;
	}


	void SimulateUnderwaterTrail(const struct FVector& SurfaceImpactPoint, const struct FVector& ShootDirection, float TravelDistance);
	void SimulateUnderwaterHit(const struct FVector& UnderwaterImpactPoint, const struct FVector& ShootOrigin);
	void SimulateHit_UnReliable(const struct FHitResult& Impact, const struct FVector& RelLocation);
	void SimulateHit_Reliable(const struct FHitResult& Impact, const struct FVector& RelLocation);
	void Simulate_CreateAmmoInstance(const struct FVector& ServerStartTrace, const struct FVector& Dir, const struct FAttackId& AttackId);
	void ServerWallCheckTest(const struct FVector& TraceStart, const struct FVector& TraceEnd);
	void ServerNotifyHit(const struct FVector& ClientImpactLocation, const struct FVector& RelativeImpact, float HandOffsetValue, const struct FHitResult& Impact, TArray<uint32_t> Checksums, const struct FVector_NetQuantize& Origin, const struct FVector& TraceStart, const struct FVector& PreLocation, const struct FVector_NetQuantizeNormal& ShootDir, float TravelDistance, const struct FAttackId& AttackId, uint32_t HitSeq, const struct FVector& RelLocation, float SpeedLoss);
	void ServerNotifyCrack(class ATslCharacter* TargetCharacter, const struct FVector_NetQuantize& LocationRelative, float BulletVelocity);
	void ServerNotifyAmmoSpawned(const struct FVector& ServerStartTrace, const struct FVector& Dir, const struct FAttackId& AttackId);
	void ServerChecksumTest(const struct FVector& Location, TArray<uint32_t> ClientChecksums);
	void OnRep_WeaponSpread(float LastWeaponSpread);
	bool IsBulletInAir();
	struct FTrajectoryWeaponData GetTrajectoryConfig();
	struct FRecoilInfo GetRecoilInfo();
	float GetCurrentStabilityVar();
	float GetCurrentReoveryTarget();
	float GetCurrentRecoilValue();
	struct FVector2D GetCurrentRecoilTarget();
	struct FRotator GetBulletRotation();
	struct FVector GetBulletLocation();
	void ClientWallCheckFail(const struct FVector& TraceStart, const struct FVector& TraceEnd, const struct FVector& Impact);
};


// Class TslGame.TslWeapon_Melee
// 0x00B8 (0x0890 - 0x07D8)
class ATslWeapon_Melee : public ATslWeapon
{
public:
	class UAkAudioEvent*                               AttackSoundAk;                                            // 0x07D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FMeleeWeaponAnim>                    AttackAnims;                                              // 0x07E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              Damage;                                                   // 0x07F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponImpact;                                             // 0x07F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x07F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EHitCheckType                                      HitCheckType;                                             // 0x0800(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0801(0x0003) MISSED OFFSET
	float                                              AllowedHitRangeLeeway;                                    // 0x0804(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ImpactTemplate;                                           // 0x0808(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCapsuleComponent*                           HitCapsuleComponent;                                      // 0x0810(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x78];                                      // 0x0818(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x4065c538);
		return ptr;
	}


	void ServerNotifyHit(TArray<float> AimSpeeds, TArray<struct FHitResult> Impacts, const struct FAttackId& AttackId, uint32_t HitSeq);
	void ServerAttack(int AnimIndex);
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnAnimationNotify(const struct FName& NotifyName);
	void ClientHit_Confirmed(const struct FHitResult& Impact);
	void ClientAttack(int AnimIndex);
};


// Class TslGame.TslWebPopupInterface
// 0x0000 (0x0028 - 0x0028)
class UTslWebPopupInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x31adc7de);
		return ptr;
	}


	void ShowWebPopup(const struct FWebPopupParam& Param);
};


// Class TslGame.TslMotorbikeVehicle
// 0x0200 (0x09E0 - 0x07E0)
class ATslMotorbikeVehicle : public ATslWheeledVehicle
{
public:
	bool                                               bStabilizeOnServer;                                       // 0x07E0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStabilizeOnRemoteClient;                                 // 0x07E1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x07E2(0x0002) MISSED OFFSET
	float                                              KickstandStabAngularDamp;                                 // 0x07E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KickstandMAV;                                             // 0x07E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultAngularDamping_Client;                             // 0x07EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultAngularDamping_Server;                             // 0x07F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoDriverAngularDamping_Client;                            // 0x07F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoDriverAngularDamping_Server;                            // 0x07F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KickstandStabilizeTorqueScalar;                           // 0x07FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KickstandStabilizeRollScalar;                             // 0x0800(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KickstandStabilizeRollMinRange;                           // 0x0804(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinVelocityForStabilizeOverride;                          // 0x0808(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KickstandStabLinearDamp;                                  // 0x080C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       StabilizeBone_Low;                                        // 0x0810(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       StabilizeBone_High;                                       // 0x0818(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_Roll;                                               // 0x0820(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_RollReturn;                                         // 0x0828(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_Steer;                                              // 0x0830(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_Yaw;                                                // 0x0838(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_Torque;                                             // 0x0840(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StabStaticVector;                                         // 0x0848(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StabStaticVectorKickstand;                                // 0x0854(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StabNoDriverVector;                                       // 0x0860(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   StabX_Velocity_In;                                        // 0x086C(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   StabX_Velocity_Out;                                       // 0x0874(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   StabX_Pitch_In;                                           // 0x087C(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   StabX_Pitch_Out;                                          // 0x0884(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   StabZ_Velocity_In;                                        // 0x088C(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   StabZ_Velocity_Out;                                       // 0x0894(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   StabZ_Roll_In;                                            // 0x089C(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   StabZ_Roll_Out;                                           // 0x08A4(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   StabZ_Pitch_In;                                           // 0x08AC(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   StabZ_Pitch_Out;                                          // 0x08B4(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   StabTorque_In;                                            // 0x08BC(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   StabTorque_Out;                                           // 0x08C4(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              StabTorque_ForceScalar;                                   // 0x08CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   StabTorque_Pitch_In;                                      // 0x08D0(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   StabTorque_Pitch_Out;                                     // 0x08D8(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFlipping;                                             // 0x08E0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08E1(0x0003) MISSED OFFSET
	float                                              FlippingForce;                                            // 0x08E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialFlipTimer;                                         // 0x08E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinVelocityForFlipping;                                   // 0x08EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x08F0(0x0004) MISSED OFFSET
	float                                              DefaultLinearDamp;                                        // 0x08F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultAngularDamp;                                       // 0x08F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultMAV;                                               // 0x08FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ContactAlpha_RiseRate;                                    // 0x0900(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ContactAlpha_FallRate;                                    // 0x0904(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ContactAlpha_LowerClamp;                                  // 0x0908(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ContactAlpha_MapPitchIn;                                  // 0x090C(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ContactAlpha_MapRollIn;                                   // 0x0914(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              ContactAlphaRemoteMultiplier;                             // 0x091C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   AirControlF_VelMap;                                       // 0x0920(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   AirControlB_VelMap;                                       // 0x0928(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   AirControlL_VelMap;                                       // 0x0930(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   AirControlR_VelMap;                                       // 0x0938(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   AirControlQ_VelMap;                                       // 0x0940(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   AirControlE_VelMap;                                       // 0x0948(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              AirControl_FB_Torque;                                     // 0x0950(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AirControl_LR_Torque;                                     // 0x0954(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AirControl_QE_Torque;                                     // 0x0958(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStabilizeInAir;                                          // 0x095C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x095D(0x0003) MISSED OFFSET
	float                                              StabilizeAirPercentage;                                   // 0x0960(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FC_PitchUp;                                               // 0x0964(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FC_PitchDown;                                             // 0x0968(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAnchoring;                                            // 0x096C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x096D(0x0003) MISSED OFFSET
	float                                              MinImpulseForAnchorRelease;                               // 0x0970(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DriverVelocityAngularDampingInMap;                        // 0x0974(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DriverVelocityAngularDampingOutMap;                       // 0x097C(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	bool                                               bProcessCounterSteering;                                  // 0x0984(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bProcessCounterSteerOnRemote;                             // 0x0985(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0986(0x0002) MISSED OFFSET
	float                                              CounterSteerAngularSpeedScalar;                           // 0x0988(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CounterSteerScalar_Default;                               // 0x098C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CounterSteerScalar_NoThrottle;                            // 0x0990(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CounterSteerScalar_Brake;                                 // 0x0994(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x40];                                      // 0x0998(0x0040) MISSED OFFSET
	bool                                               bKickstandStabilizeActive;                                // 0x09D8(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x09D9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb3fdd71d);
		return ptr;
	}


	bool VehicleHasDriver();
	void SetAirControlR(float inFloat);
	void SetAirControlQ(float inFloat);
	void SetAirControlL(float inFloat);
	void SetAirControlF(float inFloat);
	void SetAirControlE(float inFloat);
	void SetAirControlB(float inFloat);
	void ProcessFlipAndStabilize();
	void OnVehicleEjected();
	void OnPostDriverRide();
	void OnPostDriverLeave();
	void OnMeshHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	bool IsUsingActiveStabilize();
	bool IsKickstandActive();
	bool IsFlippingEnabled();
	bool HasContact();
	float GetCOMSteerOffset();
};


// Class TslGame.TslMotorbikeVehicle_Sidecar
// 0x0020 (0x0A00 - 0x09E0)
class ATslMotorbikeVehicle_Sidecar : public ATslMotorbikeVehicle
{
public:
	float                                              Sidecar_COM_Y_Left;                                       // 0x09E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Sidecar_COM_Y_Right;                                      // 0x09E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Sidecar_StabilizerHigh_StaticCOM;                         // 0x09E8(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x09F4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x93b601e1);
		return ptr;
	}

};


// Class TslGame.TslMotorbikeVehicle_Standalone
// 0x0000 (0x09E0 - 0x09E0)
class ATslMotorbikeVehicle_Standalone : public ATslMotorbikeVehicle
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x7c297405);
		return ptr;
	}

};


// Class TslGame.TslWheelEffectType
// 0x0080 (0x00B0 - 0x0030)
class UTslWheelEffectType : public UDataAsset
{
public:
	class UAkAudioEvent*                               Sound;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DefaultFxClass;                                           // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ConcreteFxClass;                                          // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DirtFxClass;                                              // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WaterFxClass;                                             // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MetalFxClass;                                             // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WoodFxClass;                                              // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GrassFxClass;                                             // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GlassFxClass;                                             // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      RockFxClass;                                              // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SandFxClass;                                              // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultMinSpeed;                                          // 0x0088(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ConcreteMinSpeed;                                         // 0x008C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DirtMinSpeed;                                             // 0x0090(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterMinSpeed;                                            // 0x0094(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MetalMinSpeed;                                            // 0x0098(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WoodMinSpeed;                                             // 0x009C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrassMinSpeed;                                            // 0x00A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlassMinSpeed;                                            // 0x00A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RockMinSpeed;                                             // 0x00A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SandMinSpeed;                                             // 0x00AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa6eedfcd);
		return ptr;
	}

};


// Class TslGame.UiHelperFunctions
// 0x0000 (0x0028 - 0x0028)
class UUiHelperFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x5af8ea29);
		return ptr;
	}


	void STATIC_WidgetShow(class UUserWidget* Widget, const struct FString& WidgetName, EWidgetShowType WidgetShowType, class UObject* OptionalParam);
	TArray<class UWidget*> STATIC_SortWidgetFormPositionY(TArray<class UWidget*> Widgets, bool bDescendingOrder);
	TArray<class UWidget*> STATIC_SortWidgetFormPositionX(TArray<class UWidget*> Widgets, bool bDescendingOrder);
	TArray<struct FTslPlayerMatchResultInfo> STATIC_SortPlayerMatchResultInfosByRanking(TArray<struct FTslPlayerMatchResultInfo> PlayerMatchResultInfos);
	TArray<TScriptInterface<class USlotInterface>> STATIC_SortItem(TArray<TScriptInterface<class USlotInterface>> InItemList);
	void STATIC_SetTslBlur(class UObject* WorldContextObject, float BlurLevel, float DepthBlurBlackPoint, float DepthBlurWhitePoint);
	bool STATIC_IsWarning(class UUserWidget* Widget);
	bool STATIC_IsThereAnyPlayingAnimation(class UUserWidget* Widget, TArray<class UWidgetAnimation*> AnimationArray);
	bool STATIC_IsReplayingKillcam(class UUserWidget* Widget);
	bool STATIC_IsReplaying(class UUserWidget* Widget);
	bool STATIC_IsObserverSpectating(class UUserWidget* Widget);
	bool STATIC_IsNavigateKey(const struct FKey& InKey);
	bool STATIC_IsLastSpectatorTeam(class UUserWidget* Widget, class ATslCharacter* Character);
	bool STATIC_IsLastSpectatedCharacter(class UUserWidget* Widget, class ATslCharacter* Character);
	bool STATIC_IsKickEnableCharacter(class ATslCharacter* Character);
	bool STATIC_IsInNextPlayzone(class UUserWidget* Widget);
	bool STATIC_IsHitted(int State);
	bool STATIC_IsGroggyByTeam(class ATeam* Team);
	bool STATIC_IsGamepadY(const struct FKey& InKey);
	bool STATIC_IsGamepadX(const struct FKey& InKey);
	bool STATIC_IsGamepadUp(const struct FKey& InKey);
	bool STATIC_IsGamepadRight(const struct FKey& InKey);
	bool STATIC_IsGamepadLeft(const struct FKey& InKey);
	bool STATIC_IsGamepadDown(const struct FKey& InKey);
	bool STATIC_IsGamepadB(const struct FKey& InKey);
	bool STATIC_IsGamepadA(const struct FKey& InKey);
	bool STATIC_IsBluezoneGpsReset(class UUserWidget* Widget);
	bool STATIC_IsAttacked(int State);
	bool STATIC_HaveDurability(const TScriptInterface<class USlotInterface>& ItemSlot);
	class AWeaponProcessor* STATIC_GetWeaponProcessor(class UUserWidget* Widget);
	class ATslCharacter* STATIC_GetViewTargetTslCharacter(class UUserWidget* Widget);
	class UClass* STATIC_GetVehicleUI(class APawn* VehiclePawn);
	class UWidget* STATIC_GetUpWidgetByTslFocusableWidget(class UWidget* Widget);
	class ATslSpectatorPawn* STATIC_GetTslSpectatorPawn(class UUserWidget* Widget);
	class ATslPlayerState* STATIC_GetTslPlayerState(class ATslCharacter* Character);
	class ATslHUD* STATIC_GetTslHUD(class UUserWidget* Widget);
	class ATslCharacter* STATIC_GetTslCharacterByNetId(class UUserWidget* Widget, const struct FString& NetId);
	int STATIC_GetTeamId(class ATslCharacter* Character);
	TArray<struct FLinearColor> STATIC_GetTeamColors(int TeamCount);
	struct FLinearColor STATIC_GetTeamColor(class ATslCharacter* TslCharacter);
	ESubjectToReport STATIC_GetSubjectToReportType(class UUserWidget* Widget);
	TArray<struct FSubjectToReport> STATIC_GetSubjectToReport();
	TArray<class ATslCharacter*> STATIC_GetSortedReplicateCharactersBySpectatorPawnDistance(class UUserWidget* Widget);
	TArray<class ATslCharacter*> STATIC_GetSortedReplicateCharactersByLastHitTime(class UUserWidget* Widget);
	class UWidget* STATIC_GetRightWidgetByTslFocusableWidget(class UWidget* Widget);
	TArray<struct FReportCauseData> STATIC_GetReportCauses(class UUserWidget* Widget);
	struct FString STATIC_GetPlayerNetID(class ATslCharacter* Character);
	struct FString STATIC_GetPlayerName(class ATslCharacter* Character);
	class UTexture* STATIC_GetPlayerIcon(int MarkerNum);
	class ATslPlayerController* STATIC_GetOwningTslPlayerController(class UUserWidget* Widget);
	class ATslCharacter* STATIC_GetOwningTslCharacter(class UUserWidget* Widget);
	float STATIC_GetNextPlayzoneRadius_BluezoneGPS(class UUserWidget* Widget);
	struct FVector STATIC_GetNextPlayzonePosition_BluezoneGPS(class UUserWidget* Widget);
	struct FString STATIC_GetNetIdByControllerId(class UObject* WorldContextObject, int ControllerId);
	class UTexture* STATIC_GetMarkerIcon(int MarkerNum);
	struct FLinearColor STATIC_GetMarkerColor(int MarkerNum);
	class UTexture* STATIC_GetMapDeathIcon(int MarkerNum);
	class UWidget* STATIC_GetLeftWidgetByTslFocusableWidget(class UWidget* Widget);
	class ATslCharacter* STATIC_GetLastSpectatedCharacter(class UUserWidget* Widget);
	class AInventoryFacade* STATIC_GetInventoryFacade(class UUserWidget* Widget);
	class AInventory* STATIC_GetInventory(class UUserWidget* Widget);
	class UTexture* STATIC_GetIndicatorIcon(int MarkerNum);
	float STATIC_GetHealthRatioByTeam(class ATeam* Team);
	float STATIC_GetHealLimit(class UUserWidget* Widget);
	float STATIC_GetGroggyHealthRatioByTeam(class ATeam* Team);
	class AEquipment* STATIC_GetEquipment(class UUserWidget* Widget);
	float STATIC_GetDurabilityRatio(const TScriptInterface<class USlotInterface>& ItemSlot);
	class UWidget* STATIC_GetDownWidgetByTslFocusableWidget(class UWidget* Widget);
	float STATIC_GetDistanceFromSpectatorPawn(class UUserWidget* Widget, class ATslCharacter* Character);
	TArray<struct FReportDetailCauseTypeDescription> STATIC_GetDetailCauseTypeDescriptionList(EReportCause ReportCause);
	float STATIC_GetCurrentPlayzoneRadius_BluezoneGPS(class UUserWidget* Widget);
	struct FVector STATIC_GetCurrentPlayzonePosition_BluezoneGPS(class UUserWidget* Widget);
	class UTexture* STATIC_GetCompassIcon(int MarkerNum);
	TArray<class UWidget*> STATIC_GetChildrenOfPanel(class UPanelWidget* PanelWidget);
	int STATIC_GetCharacterStateByTeam(class ATeam* Team);
	float STATIC_GetBluezoneWarningTime(class UUserWidget* Widget);
	float STATIC_GetBluezoneReleaseTime(class UUserWidget* Widget);
	int STATIC_GetBluezoneGpsState(class UUserWidget* Widget);
	int STATIC_FindNextWidgetIndexInPanel(class UPanelWidget* PanelWidget, class UWidget* StartWidget, bool bReverseDir);
	void STATIC_DrawDottedLine(const struct FBox2D& Rect, const struct FVector2D& PositionA, const struct FVector2D& PositionB, float DottedLength, float DottedInterval, const struct FLinearColor& Tint, bool bAntiAlias, struct FPaintContext* Context);
	class UWeaponItem* STATIC_CastWeaponItem(const TScriptInterface<class USlotInterface>& ItemSlot);
	class UEquipableItem* STATIC_CastEquipableItem(const TScriptInterface<class USlotInterface>& ItemSlot);
	class UAttachableItem* STATIC_CastAttachableItem(const TScriptInterface<class USlotInterface>& ItemSlot);
	void STATIC_CalculateWeightGaugeUpParamsByItem(float TotalMaxSpace, float CurrMaxSpace, float CurrSpace, float FocusedItemWeight, float* OutCurrMaxSpaceStart, float* OutCurrSpaceStart, float* OutFeedbackStart, bool* OutIsPositive);
	TArray<class UWidget*> STATIC_BuildFocusableWidgetList(class UPanelWidget* Panel, TArray<class UWidget*> FocusableWidgetList);
};


// Class TslGame.VehicleRiderComponent
// 0x0050 (0x0230 - 0x01E0)
class UVehicleRiderComponent : public UActorComponent
{
public:
	int                                                SeatIndex;                                                // 0x01E0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x01E4(0x003C) MISSED OFFSET
	class APawn*                                       LastVehiclePawn;                                          // 0x0220(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0228(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xab152e7d);
		return ptr;
	}

};


// Class TslGame.ParachuteVehicleSeatActor
// 0x0000 (0x0438 - 0x0438)
class AParachuteVehicleSeatActor : public AVehicleSeatActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x97212af7);
		return ptr;
	}

};


// Class TslGame.TslVehicleSeatActor
// 0x0008 (0x0440 - 0x0438)
class ATslVehicleSeatActor : public AVehicleSeatActor
{
public:
	ERiderType                                         RiderType;                                                // 0x0438(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0439(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf6a83eef);
		return ptr;
	}

};


// Class TslGame.TslMotoSeatActor
// 0x0000 (0x0440 - 0x0440)
class ATslMotoSeatActor : public ATslVehicleSeatActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa6795f8c);
		return ptr;
	}


	bool IsEntryAllowed();
	void HandleFlipAndKickstand();
};


// Class TslGame.VivoxResponse
// 0x0070 (0x0098 - 0x0028)
class UVivoxResponse : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x3da83677);
		return ptr;
	}

};


// Class TslGame.SignInResponse
// 0x0030 (0x00C8 - 0x0098)
class USignInResponse : public UVivoxResponse
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0098(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa9af0317);
		return ptr;
	}

};


// Class TslGame.ChannelResponse
// 0x0050 (0x00E8 - 0x0098)
class UChannelResponse : public UVivoxResponse
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0098(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x038e1250);
		return ptr;
	}

};


// Class TslGame.KeyRevokeResponse
// 0x0020 (0x00B8 - 0x0098)
class UKeyRevokeResponse : public UVivoxResponse
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0098(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x98623282);
		return ptr;
	}

};


// Class TslGame.KeyAddResponse
// 0x0030 (0x00C8 - 0x0098)
class UKeyAddResponse : public UVivoxResponse
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0098(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x0e0c4bcf);
		return ptr;
	}

};


// Class TslGame.VivoxBaseComponent
// 0x00B0 (0x0290 - 0x01E0)
class UVivoxBaseComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnParticipantMuteChanged;                                 // 0x01E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnParticipantRestrictionChanged;                          // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0208(0x0008) MISSED OFFSET
	struct FVivoxConnectionInfo                        ConnectionInfo;                                           // 0x0210(0x0020) (Net)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0230(0x0008) MISSED OFFSET
	struct FString                                     TeamChannelUrl;                                           // 0x0238(0x0010) (Net, ZeroConstructor)
	struct FString                                     GlobalChannelUrl;                                         // 0x0248(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0258(0x0004) MISSED OFFSET
	float                                              ResetFailureDelaySeconds;                                 // 0x025C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x18];                                      // 0x0260(0x0018) MISSED OFFSET
	float                                              UpdatePositionIntervalSeconds;                            // 0x0278(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0xC];                                       // 0x027C(0x000C) MISSED OFFSET
	float                                              UserInputVolumeModifier;                                  // 0x0288(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              UserOutputVolumeModifier;                                 // 0x028C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x8ef3b556);
		return ptr;
	}


	void UpdatePosition();
	void SetVoiceChannelType(EVivoxChannelType ChannelType);
	void SetParticipantMute(const struct FString& TargetUniqueId, bool bIsMuted);
	void SetLocalVoiceOutputVolume(int UserSettingVolume);
	void SetLocalVoiceOutputMuted(bool bIsMuted);
	void SetLocalVoiceInputVolume(int UserSettingVolume);
	void SetLocalVoiceInputMuted(bool bIsMuted);
	void ServerLogin();
	void ServerJoinTeamChannel();
	void ServerJoinGlobalChannel();
	void ResetTeamChannelJoinState();
	void ResetLoginState();
	void ResetGlobalChannelJoinState();
	void ResetConnectionState();
	void RefreshDevices();
	EVivoxChannelType GetVoiceChannelType();
	int GetLocalVoiceOutputVolume();
	bool GetLocalVoiceOutputMuted();
	int GetLocalVoiceInputVolume();
	bool GetLocalVoiceInputMuted();
	void ClientLogin(const struct FString& AccessToken);
	void ClientLeaveTeamChannel();
	void ClientLeaveGlobalChannel();
	void ClientJoinTeamChannel(const struct FString& AccessToken);
	void ClientJoinGlobalChannel(const struct FString& AccessToken);
	float CalculateOutputVolumeFromModifiers();
	float CalculateInputVolumeFromModifiers();
};


// Class TslGame.VivoxComponent
// 0x0050 (0x02E0 - 0x0290)
class UVivoxComponent : public UVivoxBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0290(0x002C) MISSED OFFSET
	float                                              SuddenMovementDistance;                                   // 0x02BC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              SuddenMovementModifier;                                   // 0x02C0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              SuddenMovementModifierDuration;                           // 0x02C4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              SuddenMovementModifierRestoreDuration;                    // 0x02C8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
	bool                                               bEnableObserverTeamChat;                                  // 0x02D0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x02D1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x8ac53a9b);
		return ptr;
	}


	void ServerTestAccessToken();
	void ServerSetObserverTeamNum(int NewTeamNum);
	void ApplyTimedVolumeModifier(EVivoxChannelType ChannelType, float NewModifier, float Duration, float RestoreDuration);
};


// Class TslGame.VivoxLobbyComponent
// 0x0040 (0x02D0 - 0x0290)
class UVivoxLobbyComponent : public UVivoxBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0290(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd6d98b2b);
		return ptr;
	}

};


// Class TslGame.VivoxManager
// 0x00F0 (0x0118 - 0x0028)
class UVivoxManager : public UObject
{
public:
	class UWorld*                                      World;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	struct FVivoxConnectionInfo                        ConnectionInfo;                                           // 0x0038(0x0020)
	bool                                               bUseEphmeralChannel;                                      // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FString                                     AuthId;                                                   // 0x0060(0x0010) (ZeroConstructor)
	struct FString                                     AuthPwd;                                                  // 0x0070(0x0010) (ZeroConstructor)
	int64_t                                            AccessTokenExpirationTime;                                // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Issuer;                                                   // 0x0088(0x0010) (ZeroConstructor)
	struct FString                                     Key;                                                      // 0x0098(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET
	class USignInResponse*                             SignIn;                                                   // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UKeyAddResponse*                             KeyAdd;                                                   // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UKeyRevokeResponse*                          KeyRevoke;                                                // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UChannelResponse*>                    Channels;                                                 // 0x00D0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET
	TArray<class ATslPlayerController*>                PlayerControllers;                                        // 0x00F0(0x0010) (ZeroConstructor, Transient)
	int                                                ProximalMaxRange;                                         // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ProximalClampingDistance;                                 // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ProximalDistanceModel;                                    // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x010C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x509d00f3);
		return ptr;
	}


	void OnRevokeKeySuccess(class UVivoxResponse* Response);
	void OnRevokeKeyFail(class UVivoxResponse* Response);
	void OnChannelSuccess(class UVivoxResponse* Response);
	void OnChannelFail(class UVivoxResponse* Response);
	void OnAddKeySuccess(class UVivoxResponse* Response);
	void OnAddKeyFail(class UVivoxResponse* Response);
};


// Class TslGame.WeaponAnimInfoComponent
// 0x0060 (0x0240 - 0x01E0)
class UWeaponAnimInfoComponent : public UActorComponent
{
public:
	struct FName                                       WeaponAttachPointRifle;                                   // 0x01E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       WeaponAttachPointThrowable;                               // 0x01E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       WeaponAttachPointMelee;                                   // 0x01F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComponent;                                            // 0x01F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Primary;                               // 0x0200(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Secondary;                             // 0x0208(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Sidearm;                               // 0x0210(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Melee;                                 // 0x0218(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Thrown;                                // 0x0220(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FName                                       WeaponLeftHandIKAttachPoint;                              // 0x0228(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0230(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa863acac);
		return ptr;
	}


	void SetAccessorySlot(class UTslAccessoryComponent* NewAccessoryComponent, EAccessorySlot Slot);
	bool HasWeaponLeftHandIKSocket(class ATslWeapon* Weapon);
	struct FTransform GetWeaponLeftHandIKTransform(class ATslWeapon* Weapon);
	struct FTransform GetWeaponHandIK_Right(class ATslWeapon* Weapon);
	struct FTransform GetWeaponHandIK_Left(class ATslWeapon* Weapon);
	class ATslWeapon* GetCurrentWeapon();
	class UTslAccessoryComponent* GetAccessorySlot(EAccessorySlot Slot);
};


// Class TslGame.CharacterWeaponAnimInfoComponent
// 0x0030 (0x0270 - 0x0240)
class UCharacterWeaponAnimInfoComponent : public UWeaponAnimInfoComponent
{
public:
	struct FName                                       WeaponAttachPointPistolSitting;                           // 0x0240(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       WeaponAttachPointRifleDriving;                            // 0x0248(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       WeaponAttachPointRifleSitting;                            // 0x0250(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       WeaponAttachPointRifleAim;                                // 0x0258(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       WeaponAttachPointThrowableDriving;                        // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       WeaponAttachPointMeleeDriving;                            // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x00079377);
		return ptr;
	}

};


// Class TslGame.WeaponClone
// 0x0018 (0x0040 - 0x0028)
class UWeaponClone : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	class ATslWeapon*                                  ClonedWeapon;                                             // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x6eb1e9e3);
		return ptr;
	}


	void Update();
};


// Class TslGame.WeaponsPenetrationConfig
// 0x01A8 (0x01D8 - 0x0030)
class UWeaponsPenetrationConfig : public UDataAsset
{
public:
	TMap<TEnumAsByte<EPhysicalSurface>, struct FPhysicalMaterialPenetrationConfig> DefaultMaterialConfigs;                                   // 0x0030(0x0050) (Edit, ZeroConstructor)
	TMap<class UPhysicalMaterial*, struct FPhysicalMaterialPenetrationConfig> MaterialConfigOverrides;                                  // 0x0080(0x0050) (Edit, ZeroConstructor)
	TMap<EWeaponClass, struct FWeaponPenetrationConfig> WeaponClassConfigs;                                       // 0x00D0(0x0050) (Edit, ZeroConstructor)
	TMap<class UClass*, struct FWeaponPenetrationConfig> WeaponConfigOverrides;                                    // 0x0120(0x0050) (Edit, ZeroConstructor)
	TMap<TEnumAsByte<EPhysicalSurface>, class UCurveFloat*> PenetrationPowerCurves;                                   // 0x0170(0x0050) (Edit, ZeroConstructor)
	float                                              DeflectionRange;                                          // 0x01C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxSurfacesNum;                                           // 0x01C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinImpactAngleDeg;                                        // 0x01C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDetectableHollowSize;                                  // 0x01CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinOutSpeed;                                              // 0x01D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinWaterSpeed;                                            // 0x01D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xaf67277c);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
