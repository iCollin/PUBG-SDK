#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TslGame_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.TslPopupInterface.SetPopup
struct UTslPopupInterface_SetPopup_Params
{
	EPopupStyle                                        PopupStyle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             PressedDelegate;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TslGame.TslBaseHUD.WidgetToggle
struct ATslBaseHUD_WidgetToggle_Params
{
	struct FString                                     WidgetName;                                               // (Parm, ZeroConstructor)
};

// Function TslGame.TslBaseHUD.WidgetShow
struct ATslBaseHUD_WidgetShow_Params
{
	struct FString                                     WidgetName;                                               // (Parm, ZeroConstructor)
	EWidgetShowType                                    ShowType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalParam;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslBaseHUD.WidgetCreate
struct ATslBaseHUD_WidgetCreate_Params
{
	struct FString                                     WidgetName;                                               // (Parm, ZeroConstructor)
	struct FTslWidgetConfig                            Config;                                                   // (Parm)
};

// Function TslGame.TslBaseHUD.UpdateKillcamDisplayCode
struct ATslBaseHUD_UpdateKillcamDisplayCode_Params
{
	EKillcamDisplayCode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslBaseHUD.UnbindActionKeyDelegateEvent
struct ATslBaseHUD_UnbindActionKeyDelegateEvent_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslBaseHUD.ShowPopupDialog
struct ATslBaseHUD_ShowPopupDialog_Params
{
	struct FString                                     PopupWidgetName;                                          // (Parm, ZeroConstructor)
	EPopupStyle                                        PopupStyle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (Parm)
	struct FScriptDelegate                             PressedDelegate;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TslGame.TslBaseHUD.OnClickedKillcamPlay
struct ATslBaseHUD_OnClickedKillcamPlay_Params
{
};

// Function TslGame.TslBaseHUD.IsWidgetShow
struct ATslBaseHUD_IsWidgetShow_Params
{
	struct FString                                     WidgetName;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslBaseHUD.IsMouseUse
struct ATslBaseHUD_IsMouseUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslBaseHUD.HideWidgetByEscape
struct ATslBaseHUD_HideWidgetByEscape_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslBaseHUD.HidePopupDialog
struct ATslBaseHUD_HidePopupDialog_Params
{
	struct FString                                     PopupWidgetName;                                          // (Parm, ZeroConstructor)
};

// Function TslGame.TslBaseHUD.GetWidget
struct ATslBaseHUD_GetWidget_Params
{
	struct FString                                     WidgetName;                                               // (Parm, ZeroConstructor)
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslBaseHUD.GetMainUMGHud
struct ATslBaseHUD_GetMainUMGHud_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslBaseHUD.GetLastKillcamDisplayCode
struct ATslBaseHUD_GetLastKillcamDisplayCode_Params
{
	EKillcamDisplayCode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslBaseHUD.GetKillcamCountingText
struct ATslBaseHUD_GetKillcamCountingText_Params
{
	struct FText                                       InCountingTextFormat;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslBaseHUD.DestroyAllWidgets
struct ATslBaseHUD_DestroyAllWidgets_Params
{
};

// Function TslGame.TslBaseHUD.BindActionKeyDelegateEvent
struct ATslBaseHUD_BindActionKeyDelegateEvent_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ActionKeyDelegate;                                        // (Parm, ZeroConstructor)
};

// Function TslGame.AnimDB.GetBlendSpaceRelaxed
struct UAnimDB_GetBlendSpaceRelaxed_Params
{
	TEnumAsByte<EAnimStanceType>                       AnimStance;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFPP;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.AnimDB.GetBlendSpace
struct UAnimDB_GetBlendSpace_Params
{
	TEnumAsByte<EAnimStanceType>                       AnimStance;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFPP;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.AnimDB.GetAnimSpeed
struct UAnimDB_GetAnimSpeed_Params
{
	TEnumAsByte<EAnimStanceType>                       AnimStance;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InSpeed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              SprintAlpha;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.AsyncStaticMeshComponent.SetStaticMeshAsset
struct UAsyncStaticMeshComponent_SetStaticMeshAsset_Params
{
	TAssetPtr<class UStaticMesh>                       Asset;                                                    // (Parm)
};

// Function TslGame.AsyncStaticMeshComponent.IsSameMesh
struct UAsyncStaticMeshComponent_IsSameMesh_Params
{
	TAssetPtr<class UStaticMesh>                       Asset;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.AsyncStaticMeshComponent.GetStaticMeshAsset
struct UAsyncStaticMeshComponent_GetStaticMeshAsset_Params
{
	TAssetPtr<class UStaticMesh>                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.AsyncStaticMeshComponent.ClearStaticMeshAsset
struct UAsyncStaticMeshComponent_ClearStaticMeshAsset_Params
{
};

// Function TslGame.TslBuff.TickBuff
struct ATslBuff_TickBuff_Params
{
};

// Function TslGame.TslBuff.StopBuffBlueprint
struct ATslBuff_StopBuffBlueprint_Params
{
	bool                                               bCanceled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslBuff.StartBuffBlueprint
struct ATslBuff_StartBuffBlueprint_Params
{
};

// Function TslGame.TslBuff.GetOwnerPawn
struct ATslBuff_GetOwnerPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslBuff.GetOwnerCharacter
struct ATslBuff_GetOwnerCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslBuff.GetAttackId
struct ATslBuff_GetAttackId_Params
{
	struct FAttackId                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslBuff.CanApplyBuff
struct ATslBuff_CanApplyBuff_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.BuffComponet.RemoveBuff
struct UBuffComponet_RemoveBuff_Params
{
	struct FName                                       OverlapId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.BuffComponet.FindBuffWithOverlapId
struct UBuffComponet_FindBuffWithOverlapId_Params
{
	struct FName                                       BuffOverlapId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ATslBuff*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.BuffComponet.AddBuff
struct UBuffComponet_AddBuff_Params
{
	class UClass*                                      TslBuffClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ATslBuff*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CastableInterface.IsCastable
struct UCastableInterface_IsCastable_Params
{
	class ATslCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CastableInterface.GetCastFailMessage
struct UCastableInterface_GetCastFailMessage_Params
{
	class ATslCharacter*                               Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.CastableInterface.GetCastConfig
struct UCastableInterface_GetCastConfig_Params
{
	struct FCastConfig                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.CastComponent.StartCast
struct UCastComponent_StartCast_Params
{
	TScriptInterface<class UCastableInterface>         CastableInterface;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CastComponent.GetTotalCastTime
struct UCastComponent_GetTotalCastTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CastComponent.GetElapsedCastTime
struct UCastComponent_GetElapsedCastTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CastComponent.GetCastPriority
struct UCastComponent_GetCastPriority_Params
{
	ECastPriority                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CastComponent.GetCastObject
struct UCastComponent_GetCastObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CastComponent.GetCastName
struct UCastComponent_GetCastName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.CastComponent.GetCastLevel
struct UCastComponent_GetCastLevel_Params
{
	ECastLevel                                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CastComponent.GetCastAnim
struct UCastComponent_GetCastAnim_Params
{
	ECastAnim                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CastComponent.CancelCast
struct UCastComponent_CancelCast_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CharacterBreathComponent.OnRep_Breath
struct UCharacterBreathComponent_OnRep_Breath_Params
{
	float                                              LastBreath;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.CharacterBreathComponent.IsInApnea
struct UCharacterBreathComponent_IsInApnea_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CharacterBreathComponent.IsConsuming
struct UCharacterBreathComponent_IsConsuming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CharacterBreathComponent.GetBreathRatio
struct UCharacterBreathComponent_GetBreathRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CharacterBreathComponent.GetBreathMax
struct UCharacterBreathComponent_GetBreathMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CharacterBreathComponent.GetBreath
struct UCharacterBreathComponent_GetBreath_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CharacterBreathComponent.CanStartSprinting
struct UCharacterBreathComponent_CanStartSprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CharacterBreathComponent.CanStartHoldingBreath
struct UCharacterBreathComponent_CanStartHoldingBreath_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CharacterBreathComponent.AddBreath
struct UCharacterBreathComponent_AddBreath_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.CharacterStudio.Update
struct ACharacterStudio_Update_Params
{
};

// Function TslGame.CharacterStudio.SetSceneCaptureMaterial
struct ACharacterStudio_SetSceneCaptureMaterial_Params
{
	class UMaterialInstanceDynamic*                    Mid;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.CharacterStudio.SetCharacter
struct ACharacterStudio_SetCharacter_Params
{
	class ATslCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.CharacterStudio.IsUsingDynamicResolution
struct ACharacterStudio_IsUsingDynamicResolution_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CharacterStudio.IsCharacterValid
struct ACharacterStudio_IsCharacterValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CharacterStudio.GetSceneCaptureMaterial
struct ACharacterStudio_GetSceneCaptureMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CharacterStudio.GetCharacter
struct ACharacterStudio_GetCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CharacterStudio.AddYaw
struct ACharacterStudio_AddYaw_Params
{
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.CoherentCommonBinder.Test
struct UCoherentCommonBinder_Test_Params
{
};

// Function TslGame.CoherentCommonBinder.OnWebPageOnPlatformFailed
struct UCoherentCommonBinder_OnWebPageOnPlatformFailed_Params
{
};

// Function TslGame.CoherentCommonBinder.BindUI
struct UCoherentCommonBinder_BindUI_Params
{
};

// Function TslGame.CoherentCommonBinder.BindDelegate
struct UCoherentCommonBinder_BindDelegate_Params
{
};

// Function TslGame.TslBasePlayerController.Server_SetBPFactor
struct ATslBasePlayerController_Server_SetBPFactor_Params
{
	float                                              factor;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslBasePlayerController.HandleClipboard
struct ATslBasePlayerController_HandleClipboard_Params
{
};

// Function TslGame.TslPlayerController.UnreliablePong
struct ATslPlayerController_UnreliablePong_Params
{
	int                                                SeqID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            DateTimeTickFromServer;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.UnreliablePing
struct ATslPlayerController_UnreliablePing_Params
{
	int                                                SeqID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            DateTimeTick;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ToggleInventory
struct ATslPlayerController_ToggleInventory_Params
{
};

// Function TslGame.TslPlayerController.Suicide
struct ATslPlayerController_Suicide_Params
{
};

// Function TslGame.TslPlayerController.SimulateInputKey
struct ATslPlayerController_SimulateInputKey_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	bool                                               bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ShowTslDebugInfomation
struct ATslPlayerController_ShowTslDebugInfomation_Params
{
};

// Function TslGame.TslPlayerController.ShowTeamDeathPopup
struct ATslPlayerController_ShowTeamDeathPopup_Params
{
};

// Function TslGame.TslPlayerController.ShowPlayerControllerBindActions_Admin
struct ATslPlayerController_ShowPlayerControllerBindActions_Admin_Params
{
};

// Function TslGame.TslPlayerController.ShowMatchResult
struct ATslPlayerController_ShowMatchResult_Params
{
};

// Function TslGame.TslPlayerController.ShowInGameMenu_Gamepad
struct ATslPlayerController_ShowInGameMenu_Gamepad_Params
{
};

// Function TslGame.TslPlayerController.ShowInGameMenu
struct ATslPlayerController_ShowInGameMenu_Params
{
};

// Function TslGame.TslPlayerController.ShowGotoLobbyPopUp
struct ATslPlayerController_ShowGotoLobbyPopUp_Params
{
	EPopupButtonID                                     ButtonID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.SetDefaultFOV
struct ATslPlayerController_SetDefaultFOV_Params
{
	float                                              NewFOV;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.SetCustomDepth
struct ATslPlayerController_SetCustomDepth_Params
{
	bool                                               bOn;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.SetCanSeeTerrainThroughFogInTheAir
struct ATslPlayerController_SetCanSeeTerrainThroughFogInTheAir_Params
{
	bool                                               bCanSee;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerViewTargetReplicateUpdate
struct ATslPlayerController_ServerViewTargetReplicateUpdate_Params
{
};

// Function TslGame.TslPlayerController.ServerTryInteractByComponent
struct ATslPlayerController_ServerTryInteractByComponent_Params
{
	class UActorComponent*                             TargetComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerTryInteract
struct ATslPlayerController_ServerTryInteract_Params
{
	class AActor*                                      TargetObject;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerSystemInfo
struct ATslPlayerController_ServerSystemInfo_Params
{
	struct FString                                     OsLanguage;                                               // (Parm, ZeroConstructor)
	struct FString                                     GameLanguage;                                             // (Parm, ZeroConstructor)
	struct FString                                     OsVersion;                                                // (Parm, ZeroConstructor)
	struct FString                                     CpuName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     GpuName;                                                  // (Parm, ZeroConstructor)
	uint32_t                                           RamInGB;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerSuicide
struct ATslPlayerController_ServerSuicide_Params
{
};

// Function TslGame.TslPlayerController.ServerStopHoldRotation
struct ATslPlayerController_ServerStopHoldRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            // (Parm, IsPlainOldData)
	bool                                               bUseInterp;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerStat
struct ATslPlayerController_ServerStat_Params
{
	TEnumAsByte<EServerStatType>                       StatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Password;                                                 // (Parm, ZeroConstructor)
};

// Function TslGame.TslPlayerController.ServerStartInteractionByComponent
struct ATslPlayerController_ServerStartInteractionByComponent_Params
{
	class UActorComponent*                             InteractionComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerStartInteraction
struct ATslPlayerController_ServerStartInteraction_Params
{
	class UInteractionComponent*                       InteractionComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerStartHoldRotation
struct ATslPlayerController_ServerStartHoldRotation_Params
{
	struct FRotator                                    Current;                                                  // (Parm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerSpawnVehicle
struct ATslPlayerController_ServerSpawnVehicle_Params
{
};

// Function TslGame.TslPlayerController.ServerSetViewTarget
struct ATslPlayerController_ServerSetViewTarget_Params
{
	class AActor*                                      NewViewTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerSetThirdPerson
struct ATslPlayerController_ServerSetThirdPerson_Params
{
	bool                                               bNewThirdPerson;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerSetIsReviving
struct ATslPlayerController_ServerSetIsReviving_Params
{
	bool                                               InbIsReviving;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerSetControlRotation
struct ATslPlayerController_ServerSetControlRotation_Params
{
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerSetClientFps
struct ATslPlayerController_ServerSetClientFps_Params
{
	float                                              Fps;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerSetAccumViewRotation
struct ATslPlayerController_ServerSetAccumViewRotation_Params
{
	struct FVector_NetQuantizeNormal                   InAccumViewRotation;                                      // (ConstParm, Parm, ReferenceParm)
};

// Function TslGame.TslPlayerController.ServerSendTPPacketReliable
struct ATslPlayerController_ServerSendTPPacketReliable_Params
{
	TArray<unsigned char>                              Packet;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function TslGame.TslPlayerController.ServerSendPacketUnreliable
struct ATslPlayerController_ServerSendPacketUnreliable_Params
{
	TArray<unsigned char>                              Packet;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function TslGame.TslPlayerController.ServerSendPacketReliable
struct ATslPlayerController_ServerSendPacketReliable_Params
{
	TArray<unsigned char>                              Packet;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function TslGame.TslPlayerController.ServerSay
struct ATslPlayerController_ServerSay_Params
{
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
};

// Function TslGame.TslPlayerController.ServerPickUpItemFromPackage
struct ATslPlayerController_ServerPickUpItemFromPackage_Params
{
	class UItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AItemPackage*                                Package;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetContainer;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
};

// Function TslGame.TslPlayerController.ServerPickUpDroppedItem
struct ATslPlayerController_ServerPickUpDroppedItem_Params
{
	class UObject*                                     DroppedItemObject;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetContainer;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
};

// Function TslGame.TslPlayerController.ServerNotifyHitToGlassWindowInst
struct ATslPlayerController_ServerNotifyHitToGlassWindowInst_Params
{
	class UTslInstancedGlassWindowComponent*           GlassWindowInstComponent;                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerNotifyHitToGlassWindow
struct ATslPlayerController_ServerNotifyHitToGlassWindow_Params
{
	class UTslGlassWindowComponent*                    GlassWindowComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerNextSetViewTarget
struct ATslPlayerController_ServerNextSetViewTarget_Params
{
	bool                                               bIsPrev;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerMoveToVehicleSeat
struct ATslPlayerController_ServerMoveToVehicleSeat_Params
{
	int                                                SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerMapLoadFinishedOnClient
struct ATslPlayerController_ServerMapLoadFinishedOnClient_Params
{
};

// Function TslGame.TslPlayerController.ServerLeaveMatchIntentionally
struct ATslPlayerController_ServerLeaveMatchIntentionally_Params
{
};

// Function TslGame.TslPlayerController.ServerKickCharacter
struct ATslPlayerController_ServerKickCharacter_Params
{
	class ATslCharacter*                               TslCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Reason;                                                   // (ConstParm, Parm, ReferenceParm)
};

// Function TslGame.TslPlayerController.ServerCheat
struct ATslPlayerController_ServerCheat_Params
{
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
};

// Function TslGame.TslPlayerController.ServerCancelInteraction
struct ATslPlayerController_ServerCancelInteraction_Params
{
	class UActorComponent*                             InteractionComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerBroadCastUpdateCameraInfo
struct ATslPlayerController_ServerBroadCastUpdateCameraInfo_Params
{
	bool                                               InbFirstPerson;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InbIsInVehicle;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InbIsScoping;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerBroadCastCastingBar
struct ATslPlayerController_ServerBroadCastCastingBar_Params
{
	float                                              CastTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       CastName;                                                 // (ConstParm, Parm, ReferenceParm)
	bool                                               OnOff;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerBEServerCommand
struct ATslPlayerController_ServerBEServerCommand_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Arg0;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Arg1;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Arg2;                                                     // (Parm, ZeroConstructor)
};

// Function TslGame.TslPlayerController.ServerAdmin
struct ATslPlayerController_ServerAdmin_Params
{
	struct FString                                     AdminCommand;                                             // (Parm, ZeroConstructor)
};

// Function TslGame.TslPlayerController.SendSystemMessage
struct ATslPlayerController_SendSystemMessage_Params
{
	ESystemMessageType                                 MessageType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (ConstParm, Parm, ReferenceParm)
	float                                              MessageDuration;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.Say
struct ATslPlayerController_Say_Params
{
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
};

// Function TslGame.TslPlayerController.SaveGearProfile
struct ATslPlayerController_SaveGearProfile_Params
{
	int                                                ProfileIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              inArray;                                                  // (Parm, ZeroConstructor)
};

// Function TslGame.TslPlayerController.ReliablePong
struct ATslPlayerController_ReliablePong_Params
{
	int                                                SeqID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            DateTimeTickFromServer;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ReliablePing
struct ATslPlayerController_ReliablePing_Params
{
	int                                                SeqID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            DateTimeTick;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.OnShowCastingBarWidget
struct ATslPlayerController_OnShowCastingBarWidget_Params
{
	float                                              CastTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       CastName;                                                 // (Parm)
	bool                                               OnOff;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.OnRep_Team
struct ATslPlayerController_OnRep_Team_Params
{
};

// Function TslGame.TslPlayerController.OnRep_CameraViewBehaviour
struct ATslPlayerController_OnRep_CameraViewBehaviour_Params
{
};

// Function TslGame.TslPlayerController.OnRep_bUseTPAntibotClient
struct ATslPlayerController_OnRep_bUseTPAntibotClient_Params
{
};

// Function TslGame.TslPlayerController.OnMoveToVehicleSeat
struct ATslPlayerController_OnMoveToVehicleSeat_Params
{
	unsigned char                                      idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.OnItemStackCountHandlingMode
struct ATslPlayerController_OnItemStackCountHandlingMode_Params
{
};

// Function TslGame.TslPlayerController.OnFinishInteractionCast
struct ATslPlayerController_OnFinishInteractionCast_Params
{
	class UObject*                                     CastObject;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.OnExecuteExitCommand
struct ATslPlayerController_OnExecuteExitCommand_Params
{
};

// Function TslGame.TslPlayerController.OnClickedReportButton
struct ATslPlayerController_OnClickedReportButton_Params
{
	EReportCause                                       ReportCause;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ESubjectToReport                                   SubjectToReport;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<EReportDetailCauseType>                     ReportDetailCauseTypeList;                                // (Parm, ZeroConstructor)
};

// Function TslGame.TslPlayerController.OnCancelInteractionCast
struct ATslPlayerController_OnCancelInteractionCast_Params
{
	class UObject*                                     CastObject;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.OffItemStackCountHandlingMode
struct ATslPlayerController_OffItemStackCountHandlingMode_Params
{
};

// Function TslGame.TslPlayerController.ObserverTeleportTo
struct ATslPlayerController_ObserverTeleportTo_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.NextSetViewTarget
struct ATslPlayerController_NextSetViewTarget_Params
{
};

// Function TslGame.TslPlayerController.KickCharacter
struct ATslPlayerController_KickCharacter_Params
{
	class ATslCharacter*                               TslCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Reason;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function TslGame.TslPlayerController.IsSpectatorState
struct ATslPlayerController_IsSpectatorState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.IsSpectating
struct ATslPlayerController_IsSpectating_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.IsSameObservingCameraMode
struct ATslPlayerController_IsSameObservingCameraMode_Params
{
	EObserverCameraMode                                CameraType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.IsReplayingKillcam
struct ATslPlayerController_IsReplayingKillcam_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.IsReplaying
struct ATslPlayerController_IsReplaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.IsObserving
struct ATslPlayerController_IsObserving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.IsItemStackCountHandlingMode
struct ATslPlayerController_IsItemStackCountHandlingMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.IsHighPing
struct ATslPlayerController_IsHighPing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.IsGroggying
struct ATslPlayerController_IsGroggying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.IsGamepadHoldProcessing
struct ATslPlayerController_IsGamepadHoldProcessing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.IsGameInputAllowed
struct ATslPlayerController_IsGameInputAllowed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.HideTslDebugInfomation
struct ATslPlayerController_HideTslDebugInfomation_Params
{
};

// Function TslGame.TslPlayerController.HideMatchResult
struct ATslPlayerController_HideMatchResult_Params
{
};

// Function TslGame.TslPlayerController.GetVivoxComponent
struct ATslPlayerController_GetVivoxComponent_Params
{
	class UVivoxComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslPlayerController.GetViewTargetTslCharacter
struct ATslPlayerController_GetViewTargetTslCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.GetViewTargetTeam
struct ATslPlayerController_GetViewTargetTeam_Params
{
	class ATeam*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.GetTslZombieMatchResultInfos
struct ATslPlayerController_GetTslZombieMatchResultInfos_Params
{
	TArray<struct FTslPlayerMatchResultInfo>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslPlayerController.GetTslPlayerMatchResultInfos
struct ATslPlayerController_GetTslPlayerMatchResultInfos_Params
{
	TArray<struct FTslPlayerMatchResultInfo>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslPlayerController.GetTslHumanMatchResultInfos
struct ATslPlayerController_GetTslHumanMatchResultInfos_Params
{
	TArray<struct FTslPlayerMatchResultInfo>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslPlayerController.GetTslCharacter
struct ATslPlayerController_GetTslCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.GetTeamOverallKillCountAtObserving
struct ATslPlayerController_GetTeamOverallKillCountAtObserving_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.GetTeamMemberCount
struct ATslPlayerController_GetTeamMemberCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.GetTargetViewRotation
struct ATslPlayerController_GetTargetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.GetSpectatingPlayerName
struct ATslPlayerController_GetSpectatingPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslPlayerController.GetReplicateTeamMembers
struct ATslPlayerController_GetReplicateTeamMembers_Params
{
	TArray<class ATslCharacter*>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslPlayerController.GetReplicateCharacters
struct ATslPlayerController_GetReplicateCharacters_Params
{
	TArray<class ATslCharacter*>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslPlayerController.GetReplicateCarePackageItems
struct ATslPlayerController_GetReplicateCarePackageItems_Params
{
	TArray<class ACarePackageItem*>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslPlayerController.GetOtherElapsedCastTime
struct ATslPlayerController_GetOtherElapsedCastTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.GetOtherCastTime
struct ATslPlayerController_GetOtherCastTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.GetOtherCastingName
struct ATslPlayerController_GetOtherCastingName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslPlayerController.GetObserverCameraMode
struct ATslPlayerController_GetObserverCameraMode_Params
{
	EObserverCameraMode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.GetObserverAuthorityType
struct ATslPlayerController_GetObserverAuthorityType_Params
{
	EObserverAuthorityType                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.GetKillerName
struct ATslPlayerController_GetKillerName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslPlayerController.GetHudDebugText
struct ATslPlayerController_GetHudDebugText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslPlayerController.GetGearProfile
struct ATslPlayerController_GetGearProfile_Params
{
	int                                                ProfileIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslPlayerController.GetCurrentHoldProgressRate
struct ATslPlayerController_GetCurrentHoldProgressRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.GetClientTeam
struct ATslPlayerController_GetClientTeam_Params
{
	bool                                               IncludeSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ATeam*>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslPlayerController.GetCanAllSpectate
struct ATslPlayerController_GetCanAllSpectate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.GetAliveTeamMemberCount
struct ATslPlayerController_GetAliveTeamMemberCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.DumpActorDetailByRaycast
struct ATslPlayerController_DumpActorDetailByRaycast_Params
{
};

// Function TslGame.TslPlayerController.DropItem
struct ATslPlayerController_DropItem_Params
{
	struct FString                                     ItemTypeName;                                             // (Parm, ZeroConstructor)
};

// Function TslGame.TslPlayerController.CompleteReportKiller
struct ATslPlayerController_CompleteReportKiller_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientWasWarnedTobeKicked
struct ATslPlayerController_ClientWasWarnedTobeKicked_Params
{
	struct FText                                       KickReason;                                               // (ConstParm, Parm, ReferenceParm)
};

// Function TslGame.TslPlayerController.ClientWasKickedAndExit
struct ATslPlayerController_ClientWasKickedAndExit_Params
{
	struct FText                                       KickReason;                                               // (ConstParm, Parm, ReferenceParm)
};

// Function TslGame.TslPlayerController.ClientUpdateSpectatorCameraMode
struct ATslPlayerController_ClientUpdateSpectatorCameraMode_Params
{
	struct FName                                       InCameraName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InbFirstPerson;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InbIsInVehicle;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InbIsScoping;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientStartOnlineGame
struct ATslPlayerController_ClientStartOnlineGame_Params
{
};

// Function TslGame.TslPlayerController.ClientShowMatchResult
struct ATslPlayerController_ClientShowMatchResult_Params
{
};

// Function TslGame.TslPlayerController.ClientShowCastingBar
struct ATslPlayerController_ClientShowCastingBar_Params
{
	float                                              CastTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       CastName;                                                 // (ConstParm, Parm, ReferenceParm)
	bool                                               OnOff;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientSetTslPlayerMatchResultInfos
struct ATslPlayerController_ClientSetTslPlayerMatchResultInfos_Params
{
	TArray<struct FTslPlayerMatchResultInfo>           InTslPlayerMatchResultInfos;                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function TslGame.TslPlayerController.ClientSetCanAllSpectate
struct ATslPlayerController_ClientSetCanAllSpectate_Params
{
	bool                                               InbCanSpectate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientSendTPPacketReliable
struct ATslPlayerController_ClientSendTPPacketReliable_Params
{
	TArray<unsigned char>                              Packet;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function TslGame.TslPlayerController.ClientSendRoundEndEvent
struct ATslPlayerController_ClientSendRoundEndEvent_Params
{
	bool                                               bIsWinner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ExpendedTimeInSeconds;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientSendPacketUnreliable
struct ATslPlayerController_ClientSendPacketUnreliable_Params
{
	TArray<unsigned char>                              Packet;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function TslGame.TslPlayerController.ClientSendPacketReliable
struct ATslPlayerController_ClientSendPacketReliable_Params
{
	TArray<unsigned char>                              Packet;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function TslGame.TslPlayerController.ClientOnCharacterRestart
struct ATslPlayerController_ClientOnCharacterRestart_Params
{
};

// Function TslGame.TslPlayerController.ClientOnCharacterDeath
struct ATslPlayerController_ClientOnCharacterDeath_Params
{
	bool                                               bIsTeamMatch;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasAliveTeamMember;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTslReportUserInfo                          InKillerInfo;                                             // (Parm)
	bool                                               InbCanReport;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientNotifyStartBuff
struct ATslPlayerController_ClientNotifyStartBuff_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStart;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientNotifySpeedBoost
struct ATslPlayerController_ClientNotifySpeedBoost_Params
{
	float                                              Boost;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientNotifyRestrictingPlayArea
struct ATslPlayerController_ClientNotifyRestrictingPlayArea_Params
{
};

// Function TslGame.TslPlayerController.ClientNotifyPlayerEndWithoutHitInfo
struct ATslPlayerController_ClientNotifyPlayerEndWithoutHitInfo_Params
{
	int                                                Ranking;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTslPlayerStatistics                        Statistics;                                               // (Parm)
	struct FTslPlayerStatisticsForOwner                StatisticsForOwner;                                       // (Parm)
};

// Function TslGame.TslPlayerController.ClientNotifyPlayerEnd
struct ATslPlayerController_ClientNotifyPlayerEnd_Params
{
	int                                                Ranking;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTslPlayerStatistics                        Statistics;                                               // (Parm)
	struct FTslPlayerStatisticsForOwner                StatisticsForOwner;                                       // (Parm)
	struct FTakeHitInfo                                LastTakeHitInfo;                                          // (Parm)
};

// Function TslGame.TslPlayerController.ClientNotifyNextGasIn
struct ATslPlayerController_ClientNotifyNextGasIn_Params
{
	struct FVector_NetQuantize                         PoisonGasWarningPosition;                                 // (Parm)
	float                                              PoisonGasWarningRadius;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientNotifyHealAmount_Unreliable
struct ATslPlayerController_ClientNotifyHealAmount_Unreliable_Params
{
	float                                              Heal;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientNotifyHealAmount_Reliable
struct ATslPlayerController_ClientNotifyHealAmount_Reliable_Params
{
	float                                              Heal;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientNotifyHealAmount
struct ATslPlayerController_ClientNotifyHealAmount_Params
{
	float                                              Heal;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientNotifyHeal_Unreliable
struct ATslPlayerController_ClientNotifyHeal_Unreliable_Params
{
	float                                              HealthStart;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxHealth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientNotifyHeal_Reliable
struct ATslPlayerController_ClientNotifyHeal_Reliable_Params
{
	float                                              HealthStart;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxHealth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientNotifyHeal
struct ATslPlayerController_ClientNotifyHeal_Params
{
	float                                              HealthStart;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxHealth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientInteractByComponent
struct ATslPlayerController_ClientInteractByComponent_Params
{
	class UActorComponent*                             TargetComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientInteract
struct ATslPlayerController_ClientInteract_Params
{
	class AActor*                                      TargetObject;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientGameStarted
struct ATslPlayerController_ClientGameStarted_Params
{
};

// Function TslGame.TslPlayerController.ClientEndOnlineGame
struct ATslPlayerController_ClientEndOnlineGame_Params
{
};

// Function TslGame.TslPlayerController.ClientAdminCopyString
struct ATslPlayerController_ClientAdminCopyString_Params
{
	struct FString                                     inString;                                                 // (Parm, ZeroConstructor)
};

// Function TslGame.TslPlayerController.Cheat_ServerSpawnVehicle
struct ATslPlayerController_Cheat_ServerSpawnVehicle_Params
{
	int                                                VehicleIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.CanSeeTerrainThroughFogInTheAir
struct ATslPlayerController_CanSeeTerrainThroughFogInTheAir_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.CanReport
struct ATslPlayerController_CanReport_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerController.BP_Test_SpawnVehicle
struct ATslPlayerController_BP_Test_SpawnVehicle_Params
{
	int                                                VehicleIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerController.BEServer
struct ATslPlayerController_BEServer_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Arg0;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Arg1;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Arg2;                                                     // (Parm, ZeroConstructor)
};

// Function TslGame.TslPlayerController.BEClient
struct ATslPlayerController_BEClient_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
};

// Function TslGame.TslPlayerController.Admin
struct ATslPlayerController_Admin_Params
{
	struct FString                                     ServerAdminCommand;                                       // (Parm, ZeroConstructor)
};

// Function TslGame.ConsoleCommandExecutor.ExecuteConsoleCommands
struct AConsoleCommandExecutor_ExecuteConsoleCommands_Params
{
	TArray<struct FString>                             Commands;                                                 // (Parm, ZeroConstructor)
};

// Function TslGame.SlotInterface.IsWeapon
struct USlotInterface_IsWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SlotInterface.IsStackable
struct USlotInterface_IsStackable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SlotInterface.IsPackageItem
struct USlotInterface_IsPackageItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SlotInterface.IsEquipable
struct USlotInterface_IsEquipable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SlotInterface.IsCastableItem
struct USlotInterface_IsCastableItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SlotInterface.IsAttachment
struct USlotInterface_IsAttachment_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SlotInterface.GetUnitSpace
struct USlotInterface_GetUnitSpace_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SlotInterface.GetToolTipIconTexture
struct USlotInterface_GetToolTipIconTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SlotInterface.GetToolTipIconSizeRatio
struct USlotInterface_GetToolTipIconSizeRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SlotInterface.GetStackCountMax
struct USlotInterface_GetStackCountMax_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SlotInterface.GetStackCount
struct USlotInterface_GetStackCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SlotInterface.GetSpace
struct USlotInterface_GetSpace_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SlotInterface.GetSortPriority
struct USlotInterface_GetSortPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SlotInterface.GetSlotName
struct USlotInterface_GetSlotName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.SlotInterface.GetSlotDetailedName
struct USlotInterface_GetSlotDetailedName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.SlotInterface.GetSlotDescription
struct USlotInterface_GetSlotDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.SlotInterface.GetSlotCategory
struct USlotInterface_GetSlotCategory_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.SlotInterface.GetIconTexture
struct USlotInterface_GetIconTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SlotInterface.GetIconSizeRatio
struct USlotInterface_GetIconSizeRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SlotInterface.GetDropSound
struct USlotInterface_GetDropSound_Params
{
	class UAkAudioEvent*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SlotContainerInterface.ShowSlotContextMenu
struct USlotContainerInterface_ShowSlotContextMenu_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.SlotContainerInterface.IsEnableAction
struct USlotContainerInterface_IsEnableAction_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    OtherContainer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SlotContainerInterface.HideSlotContextMenu
struct USlotContainerInterface_HideSlotContextMenu_Params
{
};

// Function TslGame.SlotContainerInterface.GetSlotContext
struct USlotContainerInterface_GetSlotContext_Params
{
	TScriptInterface<class USlotInterface>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SlotContainerInterface.GetSlotContainerOwner
struct USlotContainerInterface_GetSlotContainerOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SlotContainerInterface.GetSlotContainerName
struct USlotContainerInterface_GetSlotContainerName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SlotContainerInterface.GetDefaultActionName
struct USlotContainerInterface_GetDefaultActionName_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SlotContainerInterface.GetAvailableSlotActions
struct USlotContainerInterface_GetAvailableSlotActions_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.SlotContainerInterface.GetAllSlots
struct USlotContainerInterface_GetAllSlots_Params
{
	TArray<TScriptInterface<class USlotInterface>>     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.SlotContainerInterface.GetActionName
struct USlotContainerInterface_GetActionName_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    OtherContainer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SlotContainerInterface.DropSlotOnOtherContainer
struct USlotContainerInterface_DropSlotOnOtherContainer_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    OtherContainer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
};

// Function TslGame.SlotContainerInterface.DoSlotActionDefault
struct USlotContainerInterface_DoSlotActionDefault_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.SlotContainerInterface.DoSlotAction
struct USlotContainerInterface_DoSlotAction_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
};

// Function TslGame.SlotContainerInterface.DoActionWithSlot
struct USlotContainerInterface_DoActionWithSlot_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
};

// Function TslGame.ItemExplorerInterface.UpdateItemList
struct UItemExplorerInterface_UpdateItemList_Params
{
};

// Function TslGame.ItemExplorerInterface.GetExplorableItemSlotList
struct UItemExplorerInterface_GetExplorableItemSlotList_Params
{
	TArray<TScriptInterface<class USlotInterface>>     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.ExplorableItemInterface.IsValidExplorableItem
struct UExplorableItemInterface_IsValidExplorableItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ExplorableItemInterface.GetInteractiveActionName
struct UExplorableItemInterface_GetInteractiveActionName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ExplorableItemInterface.GetExplorationDistance
struct UExplorableItemInterface_GetExplorationDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Item.UseBy
struct UItem_UseBy_Params
{
	class ATslCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Item.PickUpBy
struct UItem_PickUpBy_Params
{
	class ATslCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetContainer;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Item.IsWeapon
struct UItem_IsWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Item.IsToy
struct UItem_IsToy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Item.IsPackageItem
struct UItem_IsPackageItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Item.IsEquipable
struct UItem_IsEquipable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Item.IsCastableItem
struct UItem_IsCastableItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Item.IsAttachment
struct UItem_IsAttachment_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Item.GetIconTexture
struct UItem_GetIconTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ItemPackage.Items_RepNotify
struct AItemPackage_Items_RepNotify_Params
{
};

// Function TslGame.ItemPackage.IsOpenedBy
struct AItemPackage_IsOpenedBy_Params
{
	class ATslCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ItemPackage.ClientOnInteractBy
struct AItemPackage_ClientOnInteractBy_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.ItemPackage.AllowInteract
struct AItemPackage_AllowInteract_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.DoorFrameComponent.GetDoorStaticMesh
struct UDoorFrameComponent_GetDoorStaticMesh_Params
{
	class UStaticMesh*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.DoorFrameComponent.DisableSubComponents
struct UDoorFrameComponent_DisableSubComponents_Params
{
	bool                                               bDisable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.DroppedItem.Item_RepNotify
struct ADroppedItem_Item_RepNotify_Params
{
};

// Function TslGame.DroppedItemGroup.OnItemEndPlay
struct ADroppedItemGroup_OnItemEndPlay_Params
{
};

// Function TslGame.DroppedItemGroup.OnItemBeginPlay
struct ADroppedItemGroup_OnItemBeginPlay_Params
{
};

// Function TslGame.DroppedItemGroup.AddItem
struct ADroppedItemGroup_AddItem_Params
{
	class UItem*                                       NewItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewWorldLocation;                                         // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.DroppedItemInterface.GetDroppedItem
struct UDroppedItemInterface_GetDroppedItem_Params
{
	class UItem*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.FlashBangCaptureActor.CaptureScreen
struct AFlashBangCaptureActor_CaptureScreen_Params
{
};

// Function TslGame.FlashBangCaptureActor.CaptureINIT
struct AFlashBangCaptureActor_CaptureINIT_Params
{
	bool                                               bDoDelay;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CaptureDelay;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       PlayerRef;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTexture;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPostProcessSettings                        PP_Settings;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bHidePawn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.GeneralItemSpawner.CreateItems
struct UGeneralItemSpawner_CreateItems_Params
{
	TArray<class UItem*>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.GeneralItemSpawner.CreateItemInitiators
struct UGeneralItemSpawner_CreateItemInitiators_Params
{
	TArray<struct FItemInitiator>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.HackReporterComponent.ServerOnWallHackDetected
struct UHackReporterComponent_ServerOnWallHackDetected_Params
{
	class ATslCharacter*                               Victim;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.HighlightSession.RecordRemainEvents
struct UHighlightSession_RecordRemainEvents_Params
{
};

// Function TslGame.HighlightSession.MatchEnded
struct UHighlightSession_MatchEnded_Params
{
};

// Function TslGame.HighlightSession.KillOtherPlayer
struct UHighlightSession_KillOtherPlayer_Params
{
	bool                                               bGroggy;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.HighlightSession.Die
struct UHighlightSession_Die_Params
{
	bool                                               bGroggy;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.HighlightSession.DeathCamFinished
struct UHighlightSession_DeathCamFinished_Params
{
	float                                              DeathCamRunningTime;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.InteractionInterface.GetInteractiveObjectName
struct UInteractionInterface_GetInteractiveObjectName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.InteractionInterface.GetInteractionVerb
struct UInteractionInterface_GetInteractionVerb_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.InteractionInterface.AllowInteractBy
struct UInteractionInterface_AllowInteractBy_Params
{
	class ATslCharacter*                               Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.InteractionComponent.GetInteractiveObjectName
struct UInteractionComponent_GetInteractiveObjectName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.InteractionComponent.GetInteractionVerb
struct UInteractionComponent_GetInteractionVerb_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.InteractionComponent.AllowInteractBy
struct UInteractionComponent_AllowInteractBy_Params
{
	class ATslCharacter*                               Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.DroppedItemActorComponent.OnInteractDelegate
struct UDroppedItemActorComponent_OnInteractDelegate_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.DroppedItemActorComponent.AllowInteractDelegate
struct UDroppedItemActorComponent_AllowInteractDelegate_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.AttachableItem.GetAttachmentSlotID
struct UAttachableItem_GetAttachmentSlotID_Params
{
	struct FName                                       WeaponTag;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EWeaponAttachmentSlotID                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.AttachableItem.GetAttachmentData
struct UAttachableItem_GetAttachmentData_Params
{
	struct FName                                       WeaponTag;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponAttachmentData                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.HealItem.GetHealLimit
struct UHealItem_GetHealLimit_Params
{
	class ATslCharacter*                               TslCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SkinItem.CheckSkin
struct USkinItem_CheckSkin_Params
{
	TScriptInterface<class USkinnableInterface>        SkinnableInterface;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SkinItem.ApplySkin
struct USkinItem_ApplySkin_Params
{
	TScriptInterface<class USkinnableInterface>        SkinnableInterface;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.EquipableItem.UnequipBy
struct UEquipableItem_UnequipBy_Params
{
	class ATslCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.EquipableItem.EquipBy
struct UEquipableItem_EquipBy_Params
{
	class ATslCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEquipPosition                              Position;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.EquipableItem.CanEquipTo
struct UEquipableItem_CanEquipTo_Params
{
	class ATslCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CustomEquipableItem.GetOffset_Thrown
struct UCustomEquipableItem_GetOffset_Thrown_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.CustomEquipableItem.GetOffset_SideArm
struct UCustomEquipableItem_GetOffset_SideArm_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.CustomEquipableItem.GetOffset_Secondary
struct UCustomEquipableItem_GetOffset_Secondary_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.CustomEquipableItem.GetOffset_Primary
struct UCustomEquipableItem_GetOffset_Primary_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.CustomEquipableItem.GetOffset_Melee
struct UCustomEquipableItem_GetOffset_Melee_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.CustomEquipableItem.GetItemLevel
struct UCustomEquipableItem_GetItemLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ThrowableItem.GetEquippedWeapon
struct UThrowableItem_GetEquippedWeapon_Params
{
	class ATslWeapon*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ThrowableItem.GetDefaultWeaponObject
struct UThrowableItem_GetDefaultWeaponObject_Params
{
	class ATslWeapon*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SkinnableInterface.HasSkin
struct USkinnableInterface_HasSkin_Params
{
	struct FSkinData                                   InSkinData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.SkinnableInterface.ClearSkin
struct USkinnableInterface_ClearSkin_Params
{
};

// Function TslGame.TslWeapon.Weapon_AttachShoulder
struct ATslWeapon_Weapon_AttachShoulder_Params
{
};

// Function TslGame.TslWeapon.Weapon_AttachHand
struct ATslWeapon_Weapon_AttachHand_Params
{
};

// Function TslGame.TslWeapon.SimulatePhysicalBodyHit
struct ATslWeapon_SimulatePhysicalBodyHit_Params
{
	struct FHitResult                                  Impact;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ShotDirection;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslWeapon.ServerLogFireWeapon
struct ATslWeapon_ServerLogFireWeapon_Params
{
	struct FAttackId                                   AttackId;                                                 // (Parm)
};

// Function TslGame.TslWeapon.OnRep_SkinData
struct ATslWeapon_OnRep_SkinData_Params
{
};

// Function TslGame.TslWeapon.OnRep_MyPawn
struct ATslWeapon_OnRep_MyPawn_Params
{
};

// Function TslGame.TslWeapon.OnRep_AttachedItemClasses
struct ATslWeapon_OnRep_AttachedItemClasses_Params
{
	TArray<class UClass*>                              OldVal;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TslGame.TslWeapon.OnAnimationNotify
struct ATslWeapon_OnAnimationNotify_Params
{
	struct FName                                       NotifyName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslWeapon.IsWeaponAttachedToShoulder
struct ATslWeapon_IsWeaponAttachedToShoulder_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon.IsCustomSightAttached
struct ATslWeapon_IsCustomSightAttached_Params
{
	EWeaponAttachmentSlotID                            SlotID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon.GetWeaponReadyDuration
struct ATslWeapon_GetWeaponReadyDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon.GetWeaponMesh
struct ATslWeapon_GetWeaponMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslWeapon.GetWeaponGripTypeLeft
struct ATslWeapon_GetWeaponGripTypeLeft_Params
{
	EWeaponGripLeftHand                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon.GetWeaponEquipDuration
struct ATslWeapon_GetWeaponEquipDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon.GetWeaponDamage
struct ATslWeapon_GetWeaponDamage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon.GetWeaponConfig
struct ATslWeapon_GetWeaponConfig_Params
{
	struct FWeaponData                                 ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function TslGame.TslWeapon.GetWeaponClassEnum
struct ATslWeapon_GetWeaponClassEnum_Params
{
	EWeaponClass                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon.GetWeaponAttachmentPoint
struct ATslWeapon_GetWeaponAttachmentPoint_Params
{
	EWeaponAttachmentSlotID                            SlotID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon.GetWeaponAttachmentData
struct ATslWeapon_GetWeaponAttachmentData_Params
{
	EWeaponAttachmentSlotID                            SlotID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponAttachmentData                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function TslGame.TslWeapon.GetWeaponAttachmentAssetDatas
struct ATslWeapon_GetWeaponAttachmentAssetDatas_Params
{
	TArray<struct FWeaponAttachmentAssetData>          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslWeapon.GetWeaponAttachmentAsset
struct ATslWeapon_GetWeaponAttachmentAsset_Params
{
	EWeaponAttachmentSlotID                            SlotID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponAttachmentAssetData                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function TslGame.TslWeapon.GetWeaponAnimationKick
struct ATslWeapon_GetWeaponAnimationKick_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon.GetThrownType
struct ATslWeapon_GetThrownType_Params
{
	EThrownWeaponType                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon.GetSwayModifier
struct ATslWeapon_GetSwayModifier_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon.GetStanceSwayModifier
struct ATslWeapon_GetStanceSwayModifier_Params
{
	EAnimStance                                        Stance;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon.GetRecoilMontage
struct ATslWeapon_GetRecoilMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon.GetPawnOwner
struct ATslWeapon_GetPawnOwner_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon.GetLowerRailOffset
struct ATslWeapon_GetLowerRailOffset_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon.GetItemName
struct ATslWeapon_GetItemName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslWeapon.GetDoGripPose
struct ATslWeapon_GetDoGripPose_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon.GetAttachedMesh
struct ATslWeapon_GetAttachedMesh_Params
{
	TArray<class UAsyncStaticMeshComponent*>           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslWeapon.GetAnimWeaponType
struct ATslWeapon_GetAnimWeaponType_Params
{
	EAnimWeaponType                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon.GetAllWeaponAttachmentData
struct ATslWeapon_GetAllWeaponAttachmentData_Params
{
	TArray<struct FWeaponAttachmentData>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslWeapon.GetAllWeaponAttachmentAssets
struct ATslWeapon_GetAllWeaponAttachmentAssets_Params
{
	TArray<struct FWeaponAttachmentAssetData>          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslWeapon.ClientInitByReconnection
struct ATslWeapon_ClientInitByReconnection_Params
{
	bool                                               bIsArmed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon.AttachWeaponToSlot
struct ATslWeapon_AttachWeaponToSlot_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon.AttachWeaponToMesh
struct ATslWeapon_AttachWeaponToMesh_Params
{
};

// Function TslGame.WeaponItem.SetFiringMode
struct UWeaponItem_SetFiringMode_Params
{
	EFiringMode                                        fMode;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.WeaponItem.IsAttachable
struct UWeaponItem_IsAttachable_Params
{
	class UAttachableItem*                             Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.WeaponItem.HasAttachmentSlot
struct UWeaponItem_HasAttachmentSlot_Params
{
	EWeaponAttachmentSlotID                            SlotID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.WeaponItem.GetFiringMode
struct UWeaponItem_GetFiringMode_Params
{
	EFiringMode                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.WeaponItem.GetEquippedWeapon
struct UWeaponItem_GetEquippedWeapon_Params
{
	class ATslWeapon*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.WeaponItem.GetDefaultWeaponObject
struct UWeaponItem_GetDefaultWeaponObject_Params
{
	class ATslWeapon*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.WeaponItem.GetAttachedItem
struct UWeaponItem_GetAttachedItem_Params
{
	EWeaponAttachmentSlotID                            SlotID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAttachableItem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.WeaponItem.GetAttachableItemCount
struct UWeaponItem_GetAttachableItemCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.WeaponItem.GetAllAttachedItems
struct UWeaponItem_GetAllAttachedItems_Params
{
	TArray<class UAttachableItem*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.WeaponItem.DetachItem
struct UWeaponItem_DetachItem_Params
{
	EWeaponAttachmentSlotID                            SlotID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAttachableItem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.WeaponItem.AttachItem
struct UWeaponItem_AttachItem_Params
{
	class UAttachableItem*                             Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ItemSpawnProcessor.ProcessSpawnItem
struct UItemSpawnProcessor_ProcessSpawnItem_Params
{
	class UItemSpotGroupComponent*                     Spawner;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.ItemSpawnProcessor.ProcessGroup
struct UItemSpawnProcessor_ProcessGroup_Params
{
	class UItemSpotGroupComponent*                     SpotGroup;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UItemSpotComponent*>                  Spots;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TslGame.ItemSpawnProcessor.CheckItemGroup
struct UItemSpawnProcessor_CheckItemGroup_Params
{
	class UItemSpotGroupComponent*                     SpotGroup;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ItemStudio.UpdateComponentToWorld
struct AItemStudio_UpdateComponentToWorld_Params
{
	class UMeshComponent*                              Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.ItemStudio.SetTextureRenderTarget
struct AItemStudio_SetTextureRenderTarget_Params
{
	class UTextureRenderTarget2D*                      NewTextureTarget;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.ItemStudio.SetItem
struct AItemStudio_SetItem_Params
{
	class UItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.ItemStudio.AddYaw
struct AItemStudio_AddYaw_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.ItemToolTipWidget.UpdateVicinityOrInventorySlotItemToolTip
struct UItemToolTipWidget_UpdateVicinityOrInventorySlotItemToolTip_Params
{
	class UEquipableItem*                              EquipableItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UEquipableItem*                              EquipmentSlotItem;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.ItemToolTipWidget.UpdateToolTipBySlotInterface
struct UItemToolTipWidget_UpdateToolTipBySlotInterface_Params
{
	TScriptInterface<class USlotInterface>             SlotInterface;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    Container;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.ItemToolTipWidget.UpdateSlotInfo
struct UItemToolTipWidget_UpdateSlotInfo_Params
{
	TScriptInterface<class USlotInterface>             SlotInterface;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function TslGame.ItemToolTipWidget.UpdateEquipmentSlotItemToolTip
struct UItemToolTipWidget_UpdateEquipmentSlotItemToolTip_Params
{
	class UEquipableItem*                              EquipableItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyWidget.GameStateChanging
struct ULobbyWidget_GameStateChanging_Params
{
	struct FName                                       NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.MatchPreparer.TimerGameStartCountDown
struct UMatchPreparer_TimerGameStartCountDown_Params
{
};

// Function TslGame.AirborneMatchPreparer.AllowDealDamage
struct UAirborneMatchPreparer_AllowDealDamage_Params
{
};

// Function TslGame.ModeController.SendSystemMessageToAll
struct AModeController_SendSystemMessageToAll_Params
{
	ESystemMessageType                                 MessageType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (Parm)
	float                                              MessageDuration;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.ModeController.IsPlayInEditor
struct AModeController_IsPlayInEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ModeController.HandleServerAdminBlueprint
struct AModeController_HandleServerAdminBlueprint_Params
{
	struct FString                                     AdminCommand;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ModeController.GetGameState
struct AModeController_GetGameState_Params
{
	class ATslGameState*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ModeController.GetGameMode
struct AModeController_GetGameMode_Params
{
	class ATslGameMode*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ModeController.CanDealDamage
struct AModeController_CanDealDamage_Params
{
	class ATslPlayerState*                             DamageInstigator;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ATslPlayerState*                             DamagedPlayer;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.BattleRoyaleModeController.SetNextGasInBlackboard
struct ABattleRoyaleModeController_SetNextGasInBlackboard_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.BattleRoyaleModeController.InitRadius
struct ABattleRoyaleModeController_InitRadius_Params
{
};

// Function TslGame.BattleRoyaleModeController.GetPoisonGasDamagePerSecond
struct ABattleRoyaleModeController_GetPoisonGasDamagePerSecond_Params
{
	float                                              CharaterToCenterDistance;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SafetyZoneRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PoisonGasWarningRadius;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.BattleRoyaleModeController.GetMaxPhaseCount
struct ABattleRoyaleModeController_GetMaxPhaseCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CarePackageController.SpawnAircraftCarePackageCustom
struct ACarePackageController_SpawnAircraftCarePackageCustom_Params
{
	struct FVector                                     DropLocation;                                             // (Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.CarePackageController.SpawnAircraftCarePackage
struct ACarePackageController_SpawnAircraftCarePackage_Params
{
	bool                                               CopyIntersectionInfo;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.CarePackageController.SetNextCarePackageInBlackboard
struct ACarePackageController_SetNextCarePackageInBlackboard_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CarePackageController.InitCarePackageSetting
struct ACarePackageController_InitCarePackageSetting_Params
{
};

// Function TslGame.CarePackageController.GetSpawnInterval
struct ACarePackageController_GetSpawnInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.RedZoneController.SpawnBombProjectile
struct ARedZoneController_SpawnBombProjectile_Params
{
};

// Function TslGame.RedZoneController.SetNextRedZoneInBlackboard
struct ARedZoneController_SetNextRedZoneInBlackboard_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.RedZoneController.OnBombingStart
struct ARedZoneController_OnBombingStart_Params
{
	struct FVector                                     RedZonePosition;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.RedZoneController.InitRedZoneSetting
struct ARedZoneController_InitRedZoneSetting_Params
{
};

// Function TslGame.RedZoneController.GetRandomBombingInterval
struct ARedZoneController_GetRandomBombingInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.MutableCharacter.UpdateAppearence
struct AMutableCharacter_UpdateAppearence_Params
{
};

// Function TslGame.MutableCharacter.OnRep_InstanceDescriptor
struct AMutableCharacter_OnRep_InstanceDescriptor_Params
{
};

// Function TslGame.MutableCharacter.GetGender
struct AMutableCharacter_GetGender_Params
{
	EGender                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.GetSlotId
struct ALobbyCharacter_GetSlotId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.GetNickName
struct ALobbyCharacter_GetNickName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.LobbyCharacter.GetNetId
struct ALobbyCharacter_GetNetId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslVaultingHelper.GetActorAttachScene
struct ATslVaultingHelper_GetActorAttachScene_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.WeaponCycleDone
struct ATslWeapon_Gun_WeaponCycleDone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.StopReloadAnimByOne
struct ATslWeapon_Gun_StopReloadAnimByOne_Params
{
};

// Function TslGame.TslWeapon_Gun.StartManualFireCycle
struct ATslWeapon_Gun_StartManualFireCycle_Params
{
};

// Function TslGame.TslWeapon_Gun.SimulateWeaponReload
struct ATslWeapon_Gun_SimulateWeaponReload_Params
{
	EWeaponReloadAnimExec                              ReloadAnimExec;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.SetWeaponReloadInterrupted
struct ATslWeapon_Gun_SetWeaponReloadInterrupted_Params
{
	bool                                               bIsInterrupted;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.SetSpawnBulletFromBarrel
struct ATslWeapon_Gun_SetSpawnBulletFromBarrel_Params
{
	bool                                               DoSpawnBulletFromBarrel;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.SetFiringMode
struct ATslWeapon_Gun_SetFiringMode_Params
{
	EFiringMode                                        FiringMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.ServerStopReload
struct ATslWeapon_Gun_ServerStopReload_Params
{
};

// Function TslGame.TslWeapon_Gun.ServerStopFire
struct ATslWeapon_Gun_ServerStopFire_Params
{
};

// Function TslGame.TslWeapon_Gun.ServerStartReload
struct ATslWeapon_Gun_ServerStartReload_Params
{
};

// Function TslGame.TslWeapon_Gun.ServerStartFire
struct ATslWeapon_Gun_ServerStartFire_Params
{
};

// Function TslGame.TslWeapon_Gun.ServerSetHip
struct ATslWeapon_Gun_ServerSetHip_Params
{
	bool                                               bNewIsHipped;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.ServerSetCurrentZeroLevel
struct ATslWeapon_Gun_ServerSetCurrentZeroLevel_Params
{
	int                                                ZeroLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.ServerHandleFiring
struct ATslWeapon_Gun_ServerHandleFiring_Params
{
	struct FHitResult                                  ExceptTrajectoryHitResult;                                // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.ServerCancelReload
struct ATslWeapon_Gun_ServerCancelReload_Params
{
};

// Function TslGame.TslWeapon_Gun.Server_StartManualFireCycle
struct ATslWeapon_Gun_Server_StartManualFireCycle_Params
{
};

// Function TslGame.TslWeapon_Gun.ProcessBoltAction
struct ATslWeapon_Gun_ProcessBoltAction_Params
{
};

// Function TslGame.TslWeapon_Gun.PlayWeaponCycleCameraAnim
struct ATslWeapon_Gun_PlayWeaponCycleCameraAnim_Params
{
};

// Function TslGame.TslWeapon_Gun.PlayLongTailSound
struct ATslWeapon_Gun_PlayLongTailSound_Params
{
};

// Function TslGame.TslWeapon_Gun.OnRep_TimeBetweenShots
struct ATslWeapon_Gun_OnRep_TimeBetweenShots_Params
{
	float                                              LastTimeBetweenShots;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.OnRep_MyPawn
struct ATslWeapon_Gun_OnRep_MyPawn_Params
{
};

// Function TslGame.TslWeapon_Gun.OnRep_FiringModeIndex
struct ATslWeapon_Gun_OnRep_FiringModeIndex_Params
{
};

// Function TslGame.TslWeapon_Gun.OnRep_CurrentZeroLevel
struct ATslWeapon_Gun_OnRep_CurrentZeroLevel_Params
{
	int                                                LastCurrentZeroLevel;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.OnRep_AttachedItemClasses
struct ATslWeapon_Gun_OnRep_AttachedItemClasses_Params
{
	TArray<class UClass*>                              OldVal;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TslGame.TslWeapon_Gun.OnRep_AmmoCount
struct ATslWeapon_Gun_OnRep_AmmoCount_Params
{
	int                                                LastCurrentAmmoInClip;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.OnInventoryUpdated
struct ATslWeapon_Gun_OnInventoryUpdated_Params
{
};

// Function TslGame.TslWeapon_Gun.OnAttachmentScopeLoaded
struct ATslWeapon_Gun_OnAttachmentScopeLoaded_Params
{
};

// Function TslGame.TslWeapon_Gun.OnAnimationNotify
struct ATslWeapon_Gun_OnAnimationNotify_Params
{
	struct FName                                       NotifyName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.ManualFireCycleFinished
struct ATslWeapon_Gun_ManualFireCycleFinished_Params
{
};

// Function TslGame.TslWeapon_Gun.IsWeaponCycleInProgress
struct ATslWeapon_Gun_IsWeaponCycleInProgress_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.IsReloadInterrupted
struct ATslWeapon_Gun_IsReloadInterrupted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.IsReloading
struct ATslWeapon_Gun_IsReloading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetWeaponTacticalReload
struct ATslWeapon_Gun_GetWeaponTacticalReload_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetWeaponPostprocessSettings
struct ATslWeapon_Gun_GetWeaponPostprocessSettings_Params
{
	struct FWeaponPPSettings                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslWeapon_Gun.GetWeaponOrScopePostprocessSettings
struct ATslWeapon_Gun_GetWeaponOrScopePostprocessSettings_Params
{
	struct FWeaponPPSettings                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslWeapon_Gun.GetWeaponHandOffsetFPP
struct ATslWeapon_Gun_GetWeaponHandOffsetFPP_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetWeaponHandOffset
struct ATslWeapon_Gun_GetWeaponHandOffset_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetWeaponGunConfig
struct ATslWeapon_Gun_GetWeaponGunConfig_Params
{
	struct FWeaponGunData                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslWeapon_Gun.GetWeaponGunAnimConfig
struct ATslWeapon_Gun_GetWeaponGunAnimConfig_Params
{
	struct FWeaponGunAnim                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslWeapon_Gun.GetWeaponFullReloadTime
struct ATslWeapon_Gun_GetWeaponFullReloadTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetWeaponFullRealoadTimeWithAttachments
struct ATslWeapon_Gun_GetWeaponFullRealoadTimeWithAttachments_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetWeaponCurrentRecoilValue
struct ATslWeapon_Gun_GetWeaponCurrentRecoilValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetWeaponCurrentDeviationValue
struct ATslWeapon_Gun_GetWeaponCurrentDeviationValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetWeaponChargeReload
struct ATslWeapon_Gun_GetWeaponChargeReload_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetReloadAnimationPlayRate
struct ATslWeapon_Gun_GetReloadAnimationPlayRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetRecoilADSSocketOffsetScale
struct ATslWeapon_Gun_GetRecoilADSSocketOffsetScale_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetNumOfFiringMode
struct ATslWeapon_Gun_GetNumOfFiringMode_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetMovementModifierScope
struct ATslWeapon_Gun_GetMovementModifierScope_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetMovementModifierAim
struct ATslWeapon_Gun_GetMovementModifierAim_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetMaxAmmo
struct ATslWeapon_Gun_GetMaxAmmo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetMagOutDuration
struct ATslWeapon_Gun_GetMagOutDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetMagDropLinearVelocity
struct ATslWeapon_Gun_GetMagDropLinearVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetMagDropAngularVelocity
struct ATslWeapon_Gun_GetMagDropAngularVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetGripTypeIndex
struct ATslWeapon_Gun_GetGripTypeIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetFiringMode
struct ATslWeapon_Gun_GetFiringMode_Params
{
	EFiringMode                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetDefaultAmmoObject
struct ATslWeapon_Gun_GetDefaultAmmoObject_Params
{
	class UAmmoItem*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCurrentDeviation
struct ATslWeapon_Gun_GetCurrentDeviation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCurrentAmmoInInventory
struct ATslWeapon_Gun_GetCurrentAmmoInInventory_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCurrentAmmoInClip
struct ATslWeapon_Gun_GetCurrentAmmoInClip_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCurrentAmmo
struct ATslWeapon_Gun_GetCurrentAmmo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCharacterTacticalReloadFromAttach
struct ATslWeapon_Gun_GetCharacterTacticalReloadFromAttach_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCharacterReloadTacticalMontage
struct ATslWeapon_Gun_GetCharacterReloadTacticalMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCharacterReloadChargeMontage
struct ATslWeapon_Gun_GetCharacterReloadChargeMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCharacterReloadByOneStopMontage
struct ATslWeapon_Gun_GetCharacterReloadByOneStopMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCharacterReloadByOneStartMontage
struct ATslWeapon_Gun_GetCharacterReloadByOneStartMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCharacterReloadByOneSingleMontage
struct ATslWeapon_Gun_GetCharacterReloadByOneSingleMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCharacterLHGripBlendspace
struct ATslWeapon_Gun_GetCharacterLHGripBlendspace_Params
{
	class UBlendSpaceBase*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCharacterGripBlendspace
struct ATslWeapon_Gun_GetCharacterGripBlendspace_Params
{
	class UBlendSpace1D*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCharacterFireSelectorMontage
struct ATslWeapon_Gun_GetCharacterFireSelectorMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCharacterFireMontage
struct ATslWeapon_Gun_GetCharacterFireMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCharacterFireCycle
struct ATslWeapon_Gun_GetCharacterFireCycle_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCharacterChargeReloadFromAttach
struct ATslWeapon_Gun_GetCharacterChargeReloadFromAttach_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetAmmoPerClip
struct ATslWeapon_Gun_GetAmmoPerClip_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetAmmoItemClass
struct ATslWeapon_Gun_GetAmmoItemClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetADSRecoilKick
struct ATslWeapon_Gun_GetADSRecoilKick_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.ClientStopSimulatingWeaponFire
struct ATslWeapon_Gun_ClientStopSimulatingWeaponFire_Params
{
};

// Function TslGame.TslWeapon_Gun.ClientSimulateWeaponFire
struct ATslWeapon_Gun_ClientSimulateWeaponFire_Params
{
	struct FHitResult                                  ExceptTrajectoryHitResult;                                // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.ClientSetFiringMode
struct ATslWeapon_Gun_ClientSetFiringMode_Params
{
	EFiringMode                                        FiringMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.ClientNotifyStopReloadByOne
struct ATslWeapon_Gun_ClientNotifyStopReloadByOne_Params
{
};

// Function TslGame.TslWeapon_Gun.ClientNotifyOutOfAmmo
struct ATslWeapon_Gun_ClientNotifyOutOfAmmo_Params
{
};

// Function TslGame.TslWeapon_Gun.ClientNotifyAmmo
struct ATslWeapon_Gun_ClientNotifyAmmo_Params
{
	int                                                InCurrentAmmoInClip;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.ClientCancelReload
struct ATslWeapon_Gun_ClientCancelReload_Params
{
};

// Function TslGame.TslWeapon_Gun.Client_StartManualFireCycle
struct ATslWeapon_Gun_Client_StartManualFireCycle_Params
{
};

// Function TslGame.TslWeapon_Gun.CheckMiddlePointCollision
struct ATslWeapon_Gun_CheckMiddlePointCollision_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.CancelReloadImpl
struct ATslWeapon_Gun_CancelReloadImpl_Params
{
};

// Function TslGame.TslWeapon_Gun.BroadcastOutOfAmmo
struct ATslWeapon_Gun_BroadcastOutOfAmmo_Params
{
};

// Function TslGame.TslWeapon_Gun.AnimCall_ToggleFireMode
struct ATslWeapon_Gun_AnimCall_ToggleFireMode_Params
{
};

// Function TslGame.TslWeapon_Gun.AnimCall_ReloadTacticalWeapon
struct ATslWeapon_Gun_AnimCall_ReloadTacticalWeapon_Params
{
};

// Function TslGame.TslWeapon_Gun.AnimCall_ReloadChargeWeapon
struct ATslWeapon_Gun_AnimCall_ReloadChargeWeapon_Params
{
};

// Function TslGame.TslWeapon_Gun.AnimCall_ReloadByOneStop
struct ATslWeapon_Gun_AnimCall_ReloadByOneStop_Params
{
};

// Function TslGame.TslWeapon_Gun.AnimCall_FireWeaponCycle
struct ATslWeapon_Gun_AnimCall_FireWeaponCycle_Params
{
};

// Function TslGame.TslWeapon_Gun.AnimCall_FireWeapon
struct ATslWeapon_Gun_AnimCall_FireWeapon_Params
{
};

// Function TslGame.VehicleSeatActor.OnRep_Rider
struct AVehicleSeatActor_OnRep_Rider_Params
{
};

// Function TslGame.VehicleSeatActor.IsWeaponClassAllowed
struct AVehicleSeatActor_IsWeaponClassAllowed_Params
{
	EWeaponClass                                       InClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.IsEntryAllowedByVelocity
struct AVehicleSeatActor_IsEntryAllowedByVelocity_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetVehicleSeatComponent
struct AVehicleSeatActor_GetVehicleSeatComponent_Params
{
	class UTslVehicleSeatComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetVehiclePawn
struct AVehicleSeatActor_GetVehiclePawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetVehicleInterface
struct AVehicleSeatActor_GetVehicleInterface_Params
{
	TScriptInterface<class UTslVehicleInterface>       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetVehicleAnimType
struct AVehicleSeatActor_GetVehicleAnimType_Params
{
	EVehicleAnimType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetTransitionOutBlendspace
struct AVehicleSeatActor_GetTransitionOutBlendspace_Params
{
	class UBlendSpaceBase*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetTransitionInBlendspace
struct AVehicleSeatActor_GetTransitionInBlendspace_Params
{
	class UBlendSpaceBase*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetSeatIdleAO
struct AVehicleSeatActor_GetSeatIdleAO_Params
{
	class UAimOffsetBlendSpace*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetSeatIdleAnimation
struct AVehicleSeatActor_GetSeatIdleAnimation_Params
{
	class UAnimSequenceBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetSeatAimingBlendspace
struct AVehicleSeatActor_GetSeatAimingBlendspace_Params
{
	class UBlendSpaceBase*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetRider
struct AVehicleSeatActor_GetRider_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetMinPitchByYaw
struct AVehicleSeatActor_GetMinPitchByYaw_Params
{
	float                                              CurrentYaw;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetMaxPitchByYaw
struct AVehicleSeatActor_GetMaxPitchByYaw_Params
{
	float                                              CurrentYaw;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetCanFireOnlyWhileAimed
struct AVehicleSeatActor_GetCanFireOnlyWhileAimed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetAdditionalMessage
struct AVehicleSeatActor_GetAdditionalMessage_Params
{
	class ATslCharacter*                               Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.VehicleSeatActor.AllowInteract
struct AVehicleSeatActor_AllowInteract_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.WeaponProcessor.SimulateUnArmWeapon
struct AWeaponProcessor_SimulateUnArmWeapon_Params
{
	int                                                WeaponIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedAnimation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.WeaponProcessor.SimulateArmWeapon
struct AWeaponProcessor_SimulateArmWeapon_Params
{
	int                                                WeaponIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedAnimation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.WeaponProcessor.ServerUnarmCurrentWeapon
struct AWeaponProcessor_ServerUnarmCurrentWeapon_Params
{
	bool                                               bNeedAnimation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.WeaponProcessor.ServerArmWeapon
struct AWeaponProcessor_ServerArmWeapon_Params
{
	int                                                WeaponIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedAnimation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.WeaponProcessor.OnRep_EquippedWeapons
struct AWeaponProcessor_OnRep_EquippedWeapons_Params
{
	TArray<class ATslWeapon*>                          LastEquippedWeapons;                                      // (Parm, ZeroConstructor)
};

// Function TslGame.WeaponProcessor.OnRep_CurrentWeaponIndex
struct AWeaponProcessor_OnRep_CurrentWeaponIndex_Params
{
};

// Function TslGame.WeaponProcessor.NotifyWeaponUpdate
struct AWeaponProcessor_NotifyWeaponUpdate_Params
{
};

// Function TslGame.WeaponProcessor.IsUnarmedWeapon
struct AWeaponProcessor_IsUnarmedWeapon_Params
{
	int                                                WeaponIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.WeaponProcessor.IsUnarmed
struct AWeaponProcessor_IsUnarmed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.WeaponProcessor.GetWeaponThrowable
struct AWeaponProcessor_GetWeaponThrowable_Params
{
	class ATslWeapon_Throwable*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.WeaponProcessor.GetWeaponIndex
struct AWeaponProcessor_GetWeaponIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.WeaponProcessor.GetWeaponGun
struct AWeaponProcessor_GetWeaponGun_Params
{
	class ATslWeapon_Gun*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.WeaponProcessor.GetWeaponByIndex
struct AWeaponProcessor_GetWeaponByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ATslWeapon*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.WeaponProcessor.GetWeapon
struct AWeaponProcessor_GetWeapon_Params
{
	class ATslWeapon*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.WeaponProcessor.GetUnarmedWeaponIndex
struct AWeaponProcessor_GetUnarmedWeaponIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.WeaponProcessor.GetCurrentWeapon
struct AWeaponProcessor_GetCurrentWeapon_Params
{
	class ATslWeapon*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.WeaponProcessor.FindWeapon
struct AWeaponProcessor_FindWeapon_Params
{
	class UClass*                                      WeaponClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ATslWeapon*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.WeaponProcessor.ClientSetWeaponIndex
struct AWeaponProcessor_ClientSetWeaponIndex_Params
{
	int                                                WeaponIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.WeaponProcessor.ClientInitByReconnection
struct AWeaponProcessor_ClientInitByReconnection_Params
{
	int                                                InitWeaponIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.WeaponProcessor.ClientForceRemoveWeapon
struct AWeaponProcessor_ClientForceRemoveWeapon_Params
{
	int                                                WeaponIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.VaultingData.GetVaultAnimation
struct UVaultingData_GetVaultAnimation_Params
{
	bool                                               bHasRifle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VaultingData.GetBlendSpeedByDistance
struct UVaultingData_GetBlendSpeedByDistance_Params
{
	float                                              InDistance;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VaultingData.GetAnimationLength
struct UVaultingData_GetAnimationLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VaultingData.GetAnimationCurve
struct UVaultingData_GetAnimationCurve_Params
{
	class UCurveFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.UpdateWeaponAttachPoint
struct ATslCharacter_UpdateWeaponAttachPoint_Params
{
};

// Function TslGame.TslCharacter.UnBindCallbackToHUD
struct ATslCharacter_UnBindCallbackToHUD_Params
{
	class ATslPlayerController*                        InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.ToggleInvincibility
struct ATslCharacter_ToggleInvincibility_Params
{
};

// Function TslGame.TslCharacter.ToggleFreeMode
struct ATslCharacter_ToggleFreeMode_Params
{
};

// Function TslGame.TslCharacter.ToggleAnimDynamics
struct ATslCharacter_ToggleAnimDynamics_Params
{
};

// Function TslGame.TslCharacter.TickOptimization_ShouldRunMovementUpdate
struct ATslCharacter_TickOptimization_ShouldRunMovementUpdate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.TickOptimization_ShouldRunAnimUpdate
struct ATslCharacter_TickOptimization_ShouldRunAnimUpdate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.TickOptimization_IsOverMinimumDistance
struct ATslCharacter_TickOptimization_IsOverMinimumDistance_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.TickOptimization_Eval
struct ATslCharacter_TickOptimization_Eval_Params
{
};

// Function TslGame.TslCharacter.StopAllAnimMontages
struct ATslCharacter_StopAllAnimMontages_Params
{
};

// Function TslGame.TslCharacter.STAT_TickEnd
struct ATslCharacter_STAT_TickEnd_Params
{
};

// Function TslGame.TslCharacter.STAT_TickBegin
struct ATslCharacter_STAT_TickBegin_Params
{
};

// Function TslGame.TslCharacter.SpawnPunchImpact_Reliable
struct ATslCharacter_SpawnPunchImpact_Reliable_Params
{
	struct FVector                                     InLocation;                                               // (Parm, IsPlainOldData)
	struct FRotator                                    InRotation;                                               // (Parm, IsPlainOldData)
};

// Function TslGame.TslCharacter.SpawnPunchImpact
struct ATslCharacter_SpawnPunchImpact_Params
{
	struct FVector                                     InLocation;                                               // (Parm, IsPlainOldData)
	struct FRotator                                    InRotation;                                               // (Parm, IsPlainOldData)
};

// Function TslGame.TslCharacter.SpawnBulletPassByEffect
struct ATslCharacter_SpawnBulletPassByEffect_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	float                                              BulletVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.SimulatePhysicalHitRecovery
struct ATslCharacter_SimulatePhysicalHitRecovery_Params
{
};

// Function TslGame.TslCharacter.SimulateHeadShot
struct ATslCharacter_SimulateHeadShot_Params
{
	struct FTransform                                  SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  ImpactTransform;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.ShowDynamicCrosshair
struct ATslCharacter_ShowDynamicCrosshair_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.ShowCharacterInformation
struct ATslCharacter_ShowCharacterInformation_Params
{
	bool                                               bFullInfo;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetWorldTransformIdentity
struct ATslCharacter_SetWorldTransformIdentity_Params
{
};

// Function TslGame.TslCharacter.SetWeaponInertia
struct ATslCharacter_SetWeaponInertia_Params
{
	struct FRotator                                    InInertia;                                                // (Parm, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetupWeaponBlueprint
struct ATslCharacter_SetupWeaponBlueprint_Params
{
};

// Function TslGame.TslCharacter.SetTPPSpringarmOffset
struct ATslCharacter_SetTPPSpringarmOffset_Params
{
	float                                              VerticalOffset;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetTickOptimization_Movement
struct ATslCharacter_SetTickOptimization_Movement_Params
{
	bool                                               bActivate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetTickOptimization_Anim
struct ATslCharacter_SetTickOptimization_Anim_Params
{
	bool                                               bActivate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetTickOptimization_Actor
struct ATslCharacter_SetTickOptimization_Actor_Params
{
	bool                                               bActivate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetSwayDebuffParameters
struct ATslCharacter_SetSwayDebuffParameters_Params
{
	float                                              SwaySpeed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SwayVerticalMultiplier;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SwayHorizontalMultiplier;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetServerVaultFinished
struct ATslCharacter_SetServerVaultFinished_Params
{
	bool                                               InFinished;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetParachuteLandingAssist
struct ATslCharacter_SetParachuteLandingAssist_Params
{
	bool                                               bAssistActive;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetMovementEnabled
struct ATslCharacter_SetMovementEnabled_Params
{
	bool                                               IsEnabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetLaunchEvent
struct ATslCharacter_SetLaunchEvent_Params
{
	struct FAttackId                                   AttackId;                                                 // (Parm)
	class ATslPlayerState*                             InPlayerState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetJumpStartLocationAndFallheight
struct ATslCharacter_SetJumpStartLocationAndFallheight_Params
{
	struct FVector                                     JumpStartLoc;                                             // (Parm, IsPlainOldData)
	float                                              FallHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetCustomDepth
struct ATslCharacter_SetCustomDepth_Params
{
	bool                                               bOn;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetCharacterVaultingData
struct ATslCharacter_SetCharacterVaultingData_Params
{
	float                                              InVaultTimer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InIsVaulting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InIsClimbing;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InEndVaultToFall;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InDirection;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetCanGroggyDamage
struct ATslCharacter_SetCanGroggyDamage_Params
{
	bool                                               bInCanGroggyDamage;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetBulletSpawnOverride
struct ATslCharacter_SetBulletSpawnOverride_Params
{
	bool                                               InOverride;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetBuffFinalSpreadFactor
struct ATslCharacter_SetBuffFinalSpreadFactor_Params
{
	float                                              FinalSpreadFactor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetBoostGauge
struct ATslCharacter_SetBoostGauge_Params
{
	float                                              NewBoostGauge;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetAnimationAkSwitch
struct ATslCharacter_SetAnimationAkSwitch_Params
{
	struct FString                                     SwitchGroup;                                              // (Parm, ZeroConstructor)
	struct FString                                     SwitchState;                                              // (Parm, ZeroConstructor)
};

// Function TslGame.TslCharacter.SetAnimationAkRTPC
struct ATslCharacter_SetAnimationAkRTPC_Params
{
	struct FString                                     RTPCName;                                                 // (Parm, ZeroConstructor)
	float                                              RTPCValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetAimStateActive
struct ATslCharacter_SetAimStateActive_Params
{
	bool                                               IsActive;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetADSSocketOffset
struct ATslCharacter_SetADSSocketOffset_Params
{
	struct FVector                                     NewOffset;                                                // (Parm, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetActiveRagdoll
struct ATslCharacter_SetActiveRagdoll_Params
{
	bool                                               bIsActive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetAccessorySlot_Thrown
struct ATslCharacter_SetAccessorySlot_Thrown_Params
{
	class UTslAccessoryComponent*                      AccessoryComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetAccessorySlot_SideArm
struct ATslCharacter_SetAccessorySlot_SideArm_Params
{
	class UTslAccessoryComponent*                      AccessoryComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetAccessorySlot_Secondary
struct ATslCharacter_SetAccessorySlot_Secondary_Params
{
	class UTslAccessoryComponent*                      AccessoryComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetAccessorySlot_Primary
struct ATslCharacter_SetAccessorySlot_Primary_Params
{
	class UTslAccessoryComponent*                      AccessoryComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetAccessorySlot_Melee
struct ATslCharacter_SetAccessorySlot_Melee_Params
{
	class UTslAccessoryComponent*                      AccessoryComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslCharacter.SetAccessorySlot
struct ATslCharacter_SetAccessorySlot_Params
{
	class UTslAccessoryComponent*                      AccessoryComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EAccessorySlot                                     Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.ServerSetVariableZoomLevel
struct ATslCharacter_ServerSetVariableZoomLevel_Params
{
	int                                                ZoomLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.ServerSetTargeting
struct ATslCharacter_ServerSetTargeting_Params
{
	ETargetingType                                     NewTargetingType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.ServerSetSprintingAuto
struct ATslCharacter_ServerSetSprintingAuto_Params
{
	bool                                               bNewSprintingAuto;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.ServerSetSprinting
struct ATslCharacter_ServerSetSprinting_Params
{
	bool                                               bNewSprinting;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.ServerSetRunning
struct ATslCharacter_ServerSetRunning_Params
{
	bool                                               bNewRunning;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.ServerSetRolling
struct ATslCharacter_ServerSetRolling_Params
{
	bool                                               bNewRolling;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLeft;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.ServerSetPeekRight
struct ATslCharacter_ServerSetPeekRight_Params
{
	bool                                               bNewPeekRight;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InbUseRightShoulderAiming;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.ServerSetPeekLeft
struct ATslCharacter_ServerSetPeekLeft_Params
{
	bool                                               bNewPeekLeft;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InbUseRightShoulderAiming;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.ServerSetHoldingBreath
struct ATslCharacter_ServerSetHoldingBreath_Params
{
	bool                                               bNewHoldingBreath;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.ServerSetGunDirectionSway
struct ATslCharacter_ServerSetGunDirectionSway_Params
{
	struct FRotator                                    InGunDirectionSway;                                       // (Parm, IsPlainOldData)
};

// Function TslGame.TslCharacter.ServerSetAimOffsets
struct ATslCharacter_ServerSetAimOffsets_Params
{
	struct FVector_NetQuantizeNormal                   NewAimOffsets;                                            // (Parm)
};

// Function TslGame.TslCharacter.ServerBroadCastAimingRemote
struct ATslCharacter_ServerBroadCastAimingRemote_Params
{
	bool                                               InbIsAming;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.Server_UnarmedHitNotify
struct ATslCharacter_Server_UnarmedHitNotify_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm, IsPlainOldData)
	TEnumAsByte<EPunchDamageType>                      PunchDamageType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      AimSpeeds;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	uint32_t                                           HitSeq;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.Server_SetWeaponObstruction
struct ATslCharacter_Server_SetWeaponObstruction_Params
{
	bool                                               bNewObstruction;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.Server_SetVaultCancel
struct ATslCharacter_Server_SetVaultCancel_Params
{
	bool                                               InCancel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.Server_SetThrowMode
struct ATslCharacter_Server_SetThrowMode_Params
{
	bool                                               bNewVal;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.Server_SetParachuteLandingAssist
struct ATslCharacter_Server_SetParachuteLandingAssist_Params
{
	bool                                               bAssistActive;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.Server_SetFiringMode
struct ATslCharacter_Server_SetFiringMode_Params
{
	EFiringMode                                        fMode;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.Server_SetCoatEquipped
struct ATslCharacter_Server_SetCoatEquipped_Params
{
	bool                                               IsEquipped;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.Server_SetCastAnim
struct ATslCharacter_Server_SetCastAnim_Params
{
	ECastAnim                                          InCastAnim;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.Server_SetCanGroggyDamage
struct ATslCharacter_Server_SetCanGroggyDamage_Params
{
	bool                                               bInCanGroggyDamage;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.Server_SetAimState
struct ATslCharacter_Server_SetAimState_Params
{
	bool                                               IsActive;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.Server_PlayUnarmedAttack
struct ATslCharacter_Server_PlayUnarmedAttack_Params
{
	int                                                AnimationIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.Server_CastFinishNotify
struct ATslCharacter_Server_CastFinishNotify_Params
{
};

// Function TslGame.TslCharacter.Server_CastCancelNotify
struct ATslCharacter_Server_CastCancelNotify_Params
{
};

// Function TslGame.TslCharacter.SendSystemMessage
struct ATslCharacter_SendSystemMessage_Params
{
	ESystemMessageType                                 MessageType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function TslGame.TslCharacter.RunVaultCheck_BP
struct ATslCharacter_RunVaultCheck_BP_Params
{
};

// Function TslGame.TslCharacter.ResetUnarmedAttack
struct ATslCharacter_ResetUnarmedAttack_Params
{
};

// Function TslGame.TslCharacter.ResetParachute
struct ATslCharacter_ResetParachute_Params
{
};

// Function TslGame.TslCharacter.RemoveCrosshair
struct ATslCharacter_RemoveCrosshair_Params
{
};

// Function TslGame.TslCharacter.ReevaluaeTargetingState
struct ATslCharacter_ReevaluaeTargetingState_Params
{
};

// Function TslGame.TslCharacter.PunchStart
struct ATslCharacter_PunchStart_Params
{
	TEnumAsByte<EPunchDamageType>                      PunchDamageType;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              PunchDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PunchRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      InAimSpeeds;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TslGame.TslCharacter.ProcessRevive
struct ATslCharacter_ProcessRevive_Params
{
	float                                              RemainGroggyHealthPercent;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.ProcessDBNO
struct ATslCharacter_ProcessDBNO_Params
{
	float                                              GroggyHealthPercent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.PrepareParachute
struct ATslCharacter_PrepareParachute_Params
{
	class UClass*                                      ParachuteType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.PlayCameraAnim
struct ATslCharacter_PlayCameraAnim_Params
{
	class UCameraAnim*                                 CameraAnim;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.PickUpItem
struct ATslCharacter_PickUpItem_Params
{
	class UItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetContainer;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.OnWeaponChanged
struct ATslCharacter_OnWeaponChanged_Params
{
};

// Function TslGame.TslCharacter.OnWeapon_6
struct ATslCharacter_OnWeapon_6_Params
{
};

// Function TslGame.TslCharacter.OnWeapon_5
struct ATslCharacter_OnWeapon_5_Params
{
};

// Function TslGame.TslCharacter.OnWeapon_4
struct ATslCharacter_OnWeapon_4_Params
{
};

// Function TslGame.TslCharacter.OnWeapon_3
struct ATslCharacter_OnWeapon_3_Params
{
};

// Function TslGame.TslCharacter.OnWeapon_2
struct ATslCharacter_OnWeapon_2_Params
{
};

// Function TslGame.TslCharacter.OnUnarmPad
struct ATslCharacter_OnUnarmPad_Params
{
};

// Function TslGame.TslCharacter.OnUnarm
struct ATslCharacter_OnUnarm_Params
{
};

// Function TslGame.TslCharacter.OnThrowWeaponPad
struct ATslCharacter_OnThrowWeaponPad_Params
{
};

// Function TslGame.TslCharacter.OnTest_SetupWeapon
struct ATslCharacter_OnTest_SetupWeapon_Params
{
};

// Function TslGame.TslCharacter.OnTest_InspectObject
struct ATslCharacter_OnTest_InspectObject_Params
{
};

// Function TslGame.TslCharacter.OnStopTargeting
struct ATslCharacter_OnStopTargeting_Params
{
};

// Function TslGame.TslCharacter.OnStopFire
struct ATslCharacter_OnStopFire_Params
{
};

// Function TslGame.TslCharacter.OnStartInteractBy
struct ATslCharacter_OnStartInteractBy_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.OnShowDynamicCrosshair
struct ATslCharacter_OnShowDynamicCrosshair_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.OnRep_WeaponProcessor
struct ATslCharacter_OnRep_WeaponProcessor_Params
{
};

// Function TslGame.TslCharacter.OnRep_VariableZoomLevel
struct ATslCharacter_OnRep_VariableZoomLevel_Params
{
};

// Function TslGame.TslCharacter.OnRep_TargetingType
struct ATslCharacter_OnRep_TargetingType_Params
{
};

// Function TslGame.TslCharacter.OnRep_ShoesSoundType
struct ATslCharacter_OnRep_ShoesSoundType_Params
{
};

// Function TslGame.TslCharacter.OnRep_ReviveCastingTime
struct ATslCharacter_OnRep_ReviveCastingTime_Params
{
};

// Function TslGame.TslCharacter.OnRep_LastTakeHitInfo
struct ATslCharacter_OnRep_LastTakeHitInfo_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsWeaponObstructed
struct ATslCharacter_OnRep_IsWeaponObstructed_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsThrowHigh
struct ATslCharacter_OnRep_IsThrowHigh_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsThirdPerson
struct ATslCharacter_OnRep_IsThirdPerson_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsScopingRemote
struct ATslCharacter_OnRep_IsScopingRemote_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsReviving
struct ATslCharacter_OnRep_IsReviving_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsPeekRight
struct ATslCharacter_OnRep_IsPeekRight_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsPeekLeft
struct ATslCharacter_OnRep_IsPeekLeft_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsInVehicleRemote
struct ATslCharacter_OnRep_IsInVehicleRemote_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsGroggying
struct ATslCharacter_OnRep_IsGroggying_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsFirstPersonRemote
struct ATslCharacter_OnRep_IsFirstPersonRemote_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsDemoVaulting
struct ATslCharacter_OnRep_IsDemoVaulting_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsCrouched
struct ATslCharacter_OnRep_IsCrouched_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsCoatEquipped
struct ATslCharacter_OnRep_IsCoatEquipped_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsAimingRemote
struct ATslCharacter_OnRep_IsAimingRemote_Params
{
};

// Function TslGame.TslCharacter.OnRep_IgnoreRotation
struct ATslCharacter_OnRep_IgnoreRotation_Params
{
};

// Function TslGame.TslCharacter.OnRep_Health
struct ATslCharacter_OnRep_Health_Params
{
	float                                              LastHealth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.OnRep_GroggyHealth
struct ATslCharacter_OnRep_GroggyHealth_Params
{
	float                                              LastGroggyHealth;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.OnRep_CharacterState
struct ATslCharacter_OnRep_CharacterState_Params
{
};

// Function TslGame.TslCharacter.OnRep_CastAnim
struct ATslCharacter_OnRep_CastAnim_Params
{
};

// Function TslGame.TslCharacter.OnRep_BoostGauge
struct ATslCharacter_OnRep_BoostGauge_Params
{
	float                                              LastBoostGauge;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.OnRep_AimStateActive
struct ATslCharacter_OnRep_AimStateActive_Params
{
};

// Function TslGame.TslCharacter.OnRep_AimOffsets
struct ATslCharacter_OnRep_AimOffsets_Params
{
	struct FVector_NetQuantizeNormal                   PrevAimOffsets;                                           // (Parm)
};

// Function TslGame.TslCharacter.OnReloadGamepad
struct ATslCharacter_OnReloadGamepad_Params
{
};

// Function TslGame.TslCharacter.OnMeleeWeaponPad
struct ATslCharacter_OnMeleeWeaponPad_Params
{
};

// Function TslGame.TslCharacter.OnInvulnerable
struct ATslCharacter_OnInvulnerable_Params
{
};

// Function TslGame.TslCharacter.OnInteractBy
struct ATslCharacter_OnInteractBy_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.OnIncreaseMaxFlyAccerleration
struct ATslCharacter_OnIncreaseMaxFlyAccerleration_Params
{
};

// Function TslGame.TslCharacter.OnFreeMoveMode
struct ATslCharacter_OnFreeMoveMode_Params
{
};

// Function TslGame.TslCharacter.OnDecreaseMaxFlyAccerleration
struct ATslCharacter_OnDecreaseMaxFlyAccerleration_Params
{
};

// Function TslGame.TslCharacter.OnChangeBreath
struct ATslCharacter_OnChangeBreath_Params
{
	float                                              Breath;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LastBreath;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BreathMax;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.OnCancelInteractBy
struct ATslCharacter_OnCancelInteractBy_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.OnBlockingWidgetOpened
struct ATslCharacter_OnBlockingWidgetOpened_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslCharacter.NotHaveThrowItemNotifyMessage
struct ATslCharacter_NotHaveThrowItemNotifyMessage_Params
{
	struct FText                                       ItemName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function TslGame.TslCharacter.NotHaveHealItemNotifyMessage
struct ATslCharacter_NotHaveHealItemNotifyMessage_Params
{
	struct FText                                       ItemName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function TslGame.TslCharacter.NotHaveBoostItemNotifyMessage
struct ATslCharacter_NotHaveBoostItemNotifyMessage_Params
{
};

// Function TslGame.TslCharacter.NativeOnWeaponChanged
struct ATslCharacter_NativeOnWeaponChanged_Params
{
};

// Function TslGame.TslCharacter.LocalMagazineDrop
struct ATslCharacter_LocalMagazineDrop_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, IsPlainOldData)
};

// Function TslGame.TslCharacter.LocalHandleVault_CP
struct ATslCharacter_LocalHandleVault_CP_Params
{
	struct FVector                                     V_Start;                                                  // (Parm, IsPlainOldData)
	struct FVector                                     V_Apex;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     V_ApexAdditive;                                           // (Parm, IsPlainOldData)
	struct FVector                                     V_End;                                                    // (Parm, IsPlainOldData)
	bool                                               bIsClimb;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EVaultAnimType                                     InVaultType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEndToFall;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayerVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFromObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsZooming
struct ATslCharacter_IsZooming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsZombie
struct ATslCharacter_IsZombie_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsWeaponUsingHighMagnificationScope
struct ATslCharacter_IsWeaponUsingHighMagnificationScope_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsVehiclePassenger
struct ATslCharacter_IsVehiclePassenger_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsVehicleDriver
struct ATslCharacter_IsVehicleDriver_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsVaultingEnabled
struct ATslCharacter_IsVaultingEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsVaultingDebugEnabled
struct ATslCharacter_IsVaultingDebugEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsVaulting
struct ATslCharacter_IsVaulting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsVaultCancelled
struct ATslCharacter_IsVaultCancelled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsUsingRightShoulderAiming
struct ATslCharacter_IsUsingRightShoulderAiming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsUpperCollision
struct ATslCharacter_IsUpperCollision_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsUnderwater
struct ATslCharacter_IsUnderwater_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsUnderRoof
struct ATslCharacter_IsUnderRoof_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsTeamMatch
struct ATslCharacter_IsTeamMatch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsTargeting
struct ATslCharacter_IsTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsSwimming
struct ATslCharacter_IsSwimming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsSprinting
struct ATslCharacter_IsSprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsSpectatingCharacter
struct ATslCharacter_IsSpectatingCharacter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsSitting
struct ATslCharacter_IsSitting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsScoping
struct ATslCharacter_IsScoping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsRunning
struct ATslCharacter_IsRunning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsRolling
struct ATslCharacter_IsRolling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsReviving
struct ATslCharacter_IsReviving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsQuitter
struct ATslCharacter_IsQuitter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsQuickThrowHigh
struct ATslCharacter_IsQuickThrowHigh_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsPlayingPickUpAnimation
struct ATslCharacter_IsPlayingPickUpAnimation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsPeekRight
struct ATslCharacter_IsPeekRight_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsPeekLeft
struct ATslCharacter_IsPeekLeft_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsParachuting
struct ATslCharacter_IsParachuting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsMoving
struct ATslCharacter_IsMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsMouseUse
struct ATslCharacter_IsMouseUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsMeleeAttacking
struct ATslCharacter_IsMeleeAttacking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsMagazineHandAttached
struct ATslCharacter_IsMagazineHandAttached_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsMagazineGunAttached
struct ATslCharacter_IsMagazineGunAttached_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsLocalOrSpectating
struct ATslCharacter_IsLocalOrSpectating_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsInWaterVolume
struct ATslCharacter_IsInWaterVolume_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsInVehicle
struct ATslCharacter_IsInVehicle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsInteracting
struct ATslCharacter_IsInteracting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsIndoor
struct ATslCharacter_IsIndoor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsInAircraft
struct ATslCharacter_IsInAircraft_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsHoldingBreath
struct ATslCharacter_IsHoldingBreath_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsHitted
struct ATslCharacter_IsHitted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsHipped
struct ATslCharacter_IsHipped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsGroggying
struct ATslCharacter_IsGroggying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsFreelooking
struct ATslCharacter_IsFreelooking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsForcingFall
struct ATslCharacter_IsForcingFall_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsForceRotation
struct ATslCharacter_IsForceRotation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsForcedProneAfterFall
struct ATslCharacter_IsForcedProneAfterFall_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsFollowingCharacter
struct ATslCharacter_IsFollowingCharacter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsFloating
struct ATslCharacter_IsFloating_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsFirstPerson
struct ATslCharacter_IsFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsFiring
struct ATslCharacter_IsFiring_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsFallingWithParachute
struct ATslCharacter_IsFallingWithParachute_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsFallingFromHighAltitude
struct ATslCharacter_IsFallingFromHighAltitude_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsDying
struct ATslCharacter_IsDying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsCycleInProgress
struct ATslCharacter_IsCycleInProgress_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsCoatEquipped
struct ATslCharacter_IsCoatEquipped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsCasting
struct ATslCharacter_IsCasting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsCameraUnderwater
struct ATslCharacter_IsCameraUnderwater_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsAudioTestEnabled
struct ATslCharacter_IsAudioTestEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsAttacked
struct ATslCharacter_IsAttacked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsAnimDynamicsEnabled
struct ATslCharacter_IsAnimDynamicsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsAlive
struct ATslCharacter_IsAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.IsActiveRagdoll
struct ATslCharacter_IsActiveRagdoll_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.HaveNotAnyHealItemNotifyMessage
struct ATslCharacter_HaveNotAnyHealItemNotifyMessage_Params
{
};

// Function TslGame.TslCharacter.HasWeaponLeftHandIKSocket
struct ATslCharacter_HasWeaponLeftHandIKSocket_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.HasWeapon
struct ATslCharacter_HasWeapon_Params
{
	class UClass*                                      WeaponClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.HasAnimatableObject
struct ATslCharacter_HasAnimatableObject_Params
{
	EAnimatableCustomizableTypes                       InParamType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.HandleVaulting_BP
struct ATslCharacter_HandleVaulting_BP_Params
{
	struct FVector                                     ImpactLocation;                                           // (Parm, IsPlainOldData)
	struct FVector                                     CapsulePredictedLocation;                                 // (Parm, IsPlainOldData)
	struct FVector                                     Normal2D;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     DirectionVecotor;                                         // (Parm, IsPlainOldData)
	bool                                               bForceVault;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              JumpDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockVault;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockClimb;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.HandleVaultEnd_CP
struct ATslCharacter_HandleVaultEnd_CP_Params
{
	struct FVector                                     InVaultEndVelocity;                                       // (Parm, IsPlainOldData)
};

// Function TslGame.TslCharacter.HandleCapsuleCollision
struct ATslCharacter_HandleCapsuleCollision_Params
{
};

// Function TslGame.TslCharacter.GiveWeapon
struct ATslCharacter_GiveWeapon_Params
{
	class UClass*                                      WeaponClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponThrowable
struct ATslCharacter_GetWeaponThrowable_Params
{
	class ATslWeapon_Throwable*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponReloadPlayRate
struct ATslCharacter_GetWeaponReloadPlayRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponProcessor
struct ATslCharacter_GetWeaponProcessor_Params
{
	class AWeaponProcessor*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponObstructionRemote
struct ATslCharacter_GetWeaponObstructionRemote_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponMovementModifierScope
struct ATslCharacter_GetWeaponMovementModifierScope_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponMovementModifierAim
struct ATslCharacter_GetWeaponMovementModifierAim_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponLeftHandIKTransform
struct ATslCharacter_GetWeaponLeftHandIKTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponInertia
struct ATslCharacter_GetWeaponInertia_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponHandIK_Right
struct ATslCharacter_GetWeaponHandIK_Right_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponHandIK_Left
struct ATslCharacter_GetWeaponHandIK_Left_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponGunCollisionAlpha
struct ATslCharacter_GetWeaponGunCollisionAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponGun
struct ATslCharacter_GetWeaponGun_Params
{
	class ATslWeapon_Gun*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponADSTimeModifier
struct ATslCharacter_GetWeaponADSTimeModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeapon
struct ATslCharacter_GetWeapon_Params
{
	class ATslWeapon*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWantsToJump
struct ATslCharacter_GetWantsToJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetVehicleSeatComponent
struct ATslCharacter_GetVehicleSeatComponent_Params
{
	class UTslVehicleSeatComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetVehicleSeat
struct ATslCharacter_GetVehicleSeat_Params
{
	class UVehicleSeatInteractionComponent*            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetVehicleRiderComponent
struct ATslCharacter_GetVehicleRiderComponent_Params
{
	class UVehicleRiderComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetVehiclePawn
struct ATslCharacter_GetVehiclePawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetVehicleInterface
struct ATslCharacter_GetVehicleInterface_Params
{
	TScriptInterface<class UTslVehicleInterface>       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetVaultTimer
struct ATslCharacter_GetVaultTimer_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetVaultingDirection
struct ATslCharacter_GetVaultingDirection_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetVaultingDebugType
struct ATslCharacter_GetVaultingDebugType_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetVaultingDataByEnum
struct ATslCharacter_GetVaultingDataByEnum_Params
{
	EVaultAnimType                                     InVaultType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UVaultingData*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetTslPlayerState
struct ATslCharacter_GetTslPlayerState_Params
{
	class ATslPlayerState*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetTslPlayerController
struct ATslCharacter_GetTslPlayerController_Params
{
	class ATslPlayerController*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetTslCharacterMovement
struct ATslCharacter_GetTslCharacterMovement_Params
{
	class UTslCharacterMovement*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetTPPSpringarmOffset
struct ATslCharacter_GetTPPSpringarmOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetTPPCameraCurve
struct ATslCharacter_GetTPPCameraCurve_Params
{
	class UCurveFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetTeam
struct ATslCharacter_GetTeam_Params
{
	class ATeam*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetTargetingSpeedModifier
struct ATslCharacter_GetTargetingSpeedModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetStance
struct ATslCharacter_GetStance_Params
{
	TEnumAsByte<EStanceMode>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetSprintingSpeedModifier_Stand
struct ATslCharacter_GetSprintingSpeedModifier_Stand_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetSprintingSpeedModifier_Prone
struct ATslCharacter_GetSprintingSpeedModifier_Prone_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetSprintingSpeedModifier_Crouch
struct ATslCharacter_GetSprintingSpeedModifier_Crouch_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetSprintCurrentValue
struct ATslCharacter_GetSprintCurrentValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetSpeedModifierByWeaponClass
struct ATslCharacter_GetSpeedModifierByWeaponClass_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetSpeedKmPerHour2D
struct ATslCharacter_GetSpeedKmPerHour2D_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetShortPlayerName
struct ATslCharacter_GetShortPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslCharacter.GetServerVaultFinished
struct ATslCharacter_GetServerVaultFinished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetRunningSpeedModifier_Stand
struct ATslCharacter_GetRunningSpeedModifier_Stand_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetRunningSpeedModifier_Prone
struct ATslCharacter_GetRunningSpeedModifier_Prone_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetRunningSpeedModifier_Crouch
struct ATslCharacter_GetRunningSpeedModifier_Crouch_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetReactionBone
struct ATslCharacter_GetReactionBone_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetPlayerName
struct ATslCharacter_GetPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslCharacter.GetParachuteLandingAssist
struct ATslCharacter_GetParachuteLandingAssist_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetParachute
struct ATslCharacter_GetParachute_Params
{
	class AParachuteVehicle*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetObjectCanInteract
struct ATslCharacter_GetObjectCanInteract_Params
{
	TScriptInterface<class UInteractionInterface>      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetMaxSprintSpeed
struct ATslCharacter_GetMaxSprintSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetMaxGroundSpeedOnSlope
struct ATslCharacter_GetMaxGroundSpeedOnSlope_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetLocationString
struct ATslCharacter_GetLocationString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslCharacter.GetLeanRightAlpha
struct ATslCharacter_GetLeanRightAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetLeanLeftAlpha
struct ATslCharacter_GetLeanLeftAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetLastMoveRotation
struct ATslCharacter_GetLastMoveRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetInventoryFacade
struct ATslCharacter_GetInventoryFacade_Params
{
	class AInventoryFacade*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetInteractObjectLocation
struct ATslCharacter_GetInteractObjectLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetInteractionString
struct ATslCharacter_GetInteractionString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslCharacter.GetIndoorFactor
struct ATslCharacter_GetIndoorFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetFreelookSavedRotation
struct ATslCharacter_GetFreelookSavedRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetFreelookDeltaRotation
struct ATslCharacter_GetFreelookDeltaRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetDynamicCrosshairHidden
struct ATslCharacter_GetDynamicCrosshairHidden_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetDropPackageType
struct ATslCharacter_GetDropPackageType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetDirectionString
struct ATslCharacter_GetDirectionString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslCharacter.GetDirectionalSpeedModifier
struct ATslCharacter_GetDirectionalSpeedModifier_Params
{
	TEnumAsByte<EMovementType>                         StanceType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetDesiredRotation
struct ATslCharacter_GetDesiredRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetCurrentWeapon
struct ATslCharacter_GetCurrentWeapon_Params
{
	class ATslWeapon*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetCurrentWaterSurfaceZ
struct ATslCharacter_GetCurrentWaterSurfaceZ_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetCurrentWaterSurfaceBaseZ
struct ATslCharacter_GetCurrentWaterSurfaceBaseZ_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetCurrentWaterDepth
struct ATslCharacter_GetCurrentWaterDepth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetCurrentSway
struct ATslCharacter_GetCurrentSway_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetCurrentMagazineMesh
struct ATslCharacter_GetCurrentMagazineMesh_Params
{
	class UStaticMesh*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetCurrentMagazineLocation
struct ATslCharacter_GetCurrentMagazineLocation_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetCurrentHeightFromWaterFloor
struct ATslCharacter_GetCurrentHeightFromWaterFloor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetCtrlShortCutOnOff
struct ATslCharacter_GetCtrlShortCutOnOff_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetComponentCanInteract
struct ATslCharacter_GetComponentCanInteract_Params
{
	TScriptInterface<class UInteractionInterface>      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetClientTslPlayerState
struct ATslCharacter_GetClientTslPlayerState_Params
{
	class ATslPlayerState*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetCharacterNetId
struct ATslCharacter_GetCharacterNetId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslCharacter.GetCastObject
struct ATslCharacter_GetCastObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetCameraDOF
struct ATslCharacter_GetCameraDOF_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetCameraAnimOverrideAlpha
struct ATslCharacter_GetCameraAnimOverrideAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetBulletSpawnOverride
struct ATslCharacter_GetBulletSpawnOverride_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetBuffComponent
struct ATslCharacter_GetBuffComponent_Params
{
	class UBuffComponet*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetBreathComponent
struct ATslCharacter_GetBreathComponent_Params
{
	class UCharacterBreathComponent*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetAnimWeaponType
struct ATslCharacter_GetAnimWeaponType_Params
{
	EAnimWeaponType                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetAnimStance
struct ATslCharacter_GetAnimStance_Params
{
	EAnimStance                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetAimStateTimer
struct ATslCharacter_GetAimStateTimer_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetAimStateAlpha
struct ATslCharacter_GetAimStateAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetAimOffsets
struct ATslCharacter_GetAimOffsets_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetADSSocketOffset
struct ATslCharacter_GetADSSocketOffset_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetActorCanInteract
struct ATslCharacter_GetActorCanInteract_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetActiveCamera
struct ATslCharacter_GetActiveCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslCharacter.GetAccessorySlot
struct ATslCharacter_GetAccessorySlot_Params
{
	EAccessorySlot                                     Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UTslAccessoryComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslCharacter.FixupCamera
struct ATslCharacter_FixupCamera_Params
{
};

// Function TslGame.TslCharacter.FindWeapon
struct ATslCharacter_FindWeapon_Params
{
	class UClass*                                      WeaponClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ATslWeapon*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.EnableScopeOutsideBlur
struct ATslCharacter_EnableScopeOutsideBlur_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.EnableAudioTest
struct ATslCharacter_EnableAudioTest_Params
{
};

// Function TslGame.TslCharacter.DisableCollision
struct ATslCharacter_DisableCollision_Params
{
};

// Function TslGame.TslCharacter.DelayedFire
struct ATslCharacter_DelayedFire_Params
{
};

// Function TslGame.TslCharacter.ClientSoundPlayMulticast
struct ATslCharacter_ClientSoundPlayMulticast_Params
{
	class UAkAudioEvent*                               SoundAk;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.ClientSoundPlay
struct ATslCharacter_ClientSoundPlay_Params
{
	class UAkAudioEvent*                               SoundAk;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.ClientSimulationArmorDestruction
struct ATslCharacter_ClientSimulationArmorDestruction_Params
{
	EEquipSlotID                                       SlotID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Impact;                                                   // (Parm, IsPlainOldData)
};

// Function TslGame.TslCharacter.ClientSetTargeting
struct ATslCharacter_ClientSetTargeting_Params
{
	ETargetingType                                     NewTargetingType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.ClientSendGroggyMessage
struct ATslCharacter_ClientSendGroggyMessage_Params
{
	class ATslPlayerState*                             GroggyCauserPlayerState;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class ATslPlayerState*                             VictimPlayerState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 GroggyCauserDamageType;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EDamageReason                                      DamageReason;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DamageCauserName;                                         // (ConstParm, Parm, ReferenceParm)
	class UClass*                                      DamageCauserClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.ClientRevivedCastingWidgetShow
struct ATslCharacter_ClientRevivedCastingWidgetShow_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.ClientProcessRevive
struct ATslCharacter_ClientProcessRevive_Params
{
	float                                              RemainGroggyHealth;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.ClientPlayPickUpAnimation
struct ATslCharacter_ClientPlayPickUpAnimation_Params
{
	struct FVector_NetQuantize                         InteractionObject;                                        // (ConstParm, Parm)
};

// Function TslGame.TslCharacter.ClientNotifyCrack
struct ATslCharacter_ClientNotifyCrack_Params
{
	struct FVector_NetQuantize                         LocationRelative;                                         // (Parm)
	float                                              BulletVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.ClientMyCharacterPlayPickUpAnimation
struct ATslCharacter_ClientMyCharacterPlayPickUpAnimation_Params
{
	struct FVector_NetQuantize                         InteractionObject;                                        // (ConstParm, Parm)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.ClientForceInitStance
struct ATslCharacter_ClientForceInitStance_Params
{
	TEnumAsByte<EStanceMode>                           ToStance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.ClientDrawDamageInfo
struct ATslCharacter_ClientDrawDamageInfo_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UTslDamageType*                              DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.Client_PlayUnarmedAttack
struct ATslCharacter_Client_PlayUnarmedAttack_Params
{
	int                                                AnimationIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.Client_CastFinishNotify
struct ATslCharacter_Client_CastFinishNotify_Params
{
};

// Function TslGame.TslCharacter.Client_CastCancelNotify
struct ATslCharacter_Client_CastCancelNotify_Params
{
};

// Function TslGame.TslCharacter.CheckScopePP
struct ATslCharacter_CheckScopePP_Params
{
};

// Function TslGame.TslCharacter.CheckMuzzleCollision
struct ATslCharacter_CheckMuzzleCollision_Params
{
};

// Function TslGame.TslCharacter.CheckMuzzleBulletSpawn
struct ATslCharacter_CheckMuzzleBulletSpawn_Params
{
};

// Function TslGame.TslCharacter.CheckJumpAndVault
struct ATslCharacter_CheckJumpAndVault_Params
{
	bool                                               bForceVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InForcedVelocity;                                         // (Parm, IsPlainOldData)
};

// Function TslGame.TslCharacter.CheckForCoat
struct ATslCharacter_CheckForCoat_Params
{
};

// Function TslGame.TslCharacter.CheckEquipmentSlot
struct ATslCharacter_CheckEquipmentSlot_Params
{
	struct FEquipPosition                              InSlotData;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.CanSwim
struct ATslCharacter_CanSwim_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.Camera_AimoffsetFix_TppToFpp
struct ATslCharacter_Camera_AimoffsetFix_TppToFpp_Params
{
};

// Function TslGame.TslCharacter.Camera_AimoffsetFix_FppToTpp
struct ATslCharacter_Camera_AimoffsetFix_FppToTpp_Params
{
};

// Function TslGame.TslCharacter.BindCallbackToHUD
struct ATslCharacter_BindCallbackToHUD_Params
{
	class ATslPlayerController*                        InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.ApplyRagdollPhysicsForce
struct ATslCharacter_ApplyRagdollPhysicsForce_Params
{
};

// Function TslGame.TslCharacter.Anim_MagazineShow
struct ATslCharacter_Anim_MagazineShow_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.Anim_MagazineHandAttach
struct ATslCharacter_Anim_MagazineHandAttach_Params
{
	bool                                               bAttach;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacter.Anim_IsMagazineVisible
struct ATslCharacter_Anim_IsMagazineVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.AllowInteract
struct ATslCharacter_AllowInteract_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacter.AdminSetUpWeapon
struct ATslCharacter_AdminSetUpWeapon_Params
{
};

// Function TslGame.TslCharacter.AdminInvulnerable
struct ATslCharacter_AdminInvulnerable_Params
{
};

// Function TslGame.TslCharacter.AdminFreeMoveMode
struct ATslCharacter_AdminFreeMoveMode_Params
{
};

// Function TslGame.TslCharacter.AddBuffMoveSpeedFactor
struct ATslCharacter_AddBuffMoveSpeedFactor_Params
{
	float                                              MoveSpeedFactor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.ObserverTagWidget.UpdateWeaponIcon_Imp
struct UObserverTagWidget_UpdateWeaponIcon_Imp_Params
{
	class USizeBox*                                    weaponBox;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      weaponImage;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.ObserverTagWidget.UpdateWeaponIcon
struct UObserverTagWidget_UpdateWeaponIcon_Params
{
};

// Function TslGame.ObserverTagWidget.SetTeamNumber
struct UObserverTagWidget_SetTeamNumber_Params
{
	int                                                TeamNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                teamColor;                                                // (Parm, IsPlainOldData)
};

// Function TslGame.ObserverTagWidget.SetPlayerNameTag
struct UObserverTagWidget_SetPlayerNameTag_Params
{
	struct FName                                       PlayerName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.ObserverTagWidget.SetIndicatorColor
struct UObserverTagWidget_SetIndicatorColor_Params
{
	struct FLinearColor                                teamColor;                                                // (Parm, IsPlainOldData)
};

// Function TslGame.ObserverTagWidget.SetCharacterIconPosition_UC
struct UObserverTagWidget_SetCharacterIconPosition_UC_Params
{
	struct FVector2D                                   Pos_UC;                                                   // (Parm, IsPlainOldData)
	bool                                               IsHidden;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.ObserverTagWidget.OnUpdateWidgetTransform
struct UObserverTagWidget_OnUpdateWidgetTransform_Params
{
	class UWidget*                                     CharacterNameWidget;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     IndicatorWidget;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   Pos_UC;                                                   // (Parm, IsPlainOldData)
	bool                                               IsHidden;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.ObserverTagWidget.IsTeamMember
struct UObserverTagWidget_IsTeamMember_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ObserverTagWidget.IsLastSpectatedCharacter
struct UObserverTagWidget_IsLastSpectatedCharacter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ObserverTagWidget.HandleWidgetPrepass
struct UObserverTagWidget_HandleWidgetPrepass_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.ObserverTagWidget.HandleWeaponImagePrepass
struct UObserverTagWidget_HandleWeaponImagePrepass_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.ObserverTagWidget.HandleTeamNumberPrepass
struct UObserverTagWidget_HandleTeamNumberPrepass_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.ObserverTagWidget.GetTeamId
struct UObserverTagWidget_GetTeamId_Params
{
	class ATslCharacter*                               TslCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ObserverTagWidget.GetTeamColor
struct UObserverTagWidget_GetTeamColor_Params
{
	class ATslCharacter*                               TslCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.ObserverTagManagerBaseWidget.UpdateReplicateCharacter
struct UObserverTagManagerBaseWidget_UpdateReplicateCharacter_Params
{
};

// Function TslGame.ObserverTagManagerBaseWidget.RemoveReplicateCharacter
struct UObserverTagManagerBaseWidget_RemoveReplicateCharacter_Params
{
	TArray<class ATslCharacter*>                       Characters;                                               // (Parm, ZeroConstructor)
};

// Function TslGame.ObserverTagManagerBaseWidget.AddReplicateCharacter
struct UObserverTagManagerBaseWidget_AddReplicateCharacter_Params
{
	TArray<class ATslCharacter*>                       Characters;                                               // (Parm, ZeroConstructor)
};

// Function TslGame.TslVehicleInterface.GetVehicleMeshComponent
struct UTslVehicleInterface_GetVehicleMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslVehicleInterface.GetTslPlayerController
struct UTslVehicleInterface_GetTslPlayerController_Params
{
	class ATslPlayerController*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ParachuteVehicle.ServerRelease
struct AParachuteVehicle_ServerRelease_Params
{
};

// Function TslGame.ParachuteVehicle.PhysicsVolumeChanged
struct AParachuteVehicle_PhysicsVolumeChanged_Params
{
	class APhysicsVolume*                              NewVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.ParachuteVehicle.OnSecondInteractBy
struct AParachuteVehicle_OnSecondInteractBy_Params
{
	class ATslCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.ParachuteVehicle.OnRide
struct AParachuteVehicle_OnRide_Params
{
	class ATslCharacter*                               Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.ParachuteVehicle.OnRep_SkinData
struct AParachuteVehicle_OnRep_SkinData_Params
{
};

// Function TslGame.ParachuteVehicle.OnRep_IsReleased
struct AParachuteVehicle_OnRep_IsReleased_Params
{
};

// Function TslGame.ParachuteVehicle.OnRep_IsDriven
struct AParachuteVehicle_OnRep_IsDriven_Params
{
};

// Function TslGame.ParachuteVehicle.OnPostDriverLeave
struct AParachuteVehicle_OnPostDriverLeave_Params
{
};

// Function TslGame.ParachuteVehicle.OnInteractBy
struct AParachuteVehicle_OnInteractBy_Params
{
	class ATslCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.ParachuteVehicle.OnDriverRide
struct AParachuteVehicle_OnDriverRide_Params
{
};

// Function TslGame.ParachuteVehicle.OnDriverLeave
struct AParachuteVehicle_OnDriverLeave_Params
{
};

// Function TslGame.ParachuteVehicle.Land
struct AParachuteVehicle_Land_Params
{
};

// Function TslGame.ParachuteVehicle.IsStuck
struct AParachuteVehicle_IsStuck_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ParachuteVehicle.IsReleased
struct AParachuteVehicle_IsReleased_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ParachuteVehicle.IsDriven
struct AParachuteVehicle_IsDriven_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ParachuteVehicle.GetAltitudeFromFloor
struct AParachuteVehicle_GetAltitudeFromFloor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ParachuteVehicle.CanReleaseByInput
struct AParachuteVehicle_CanReleaseByInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ParachuteVehicle.CanRelease
struct AParachuteVehicle_CanRelease_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ParachuteVehicle.AllowSecondInteractBy
struct AParachuteVehicle_AllowSecondInteractBy_Params
{
	class ATslCharacter*                               Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ParachuteVehicle.AllowInteractBy
struct AParachuteVehicle_AllowInteractBy_Params
{
	class ATslCharacter*                               Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ReplicationTrigger.EnableReplicationGroup
struct AReplicationTrigger_EnableReplicationGroup_Params
{
};

// Function TslGame.SceneInteractionComponent.GetInteractiveObjectName
struct USceneInteractionComponent_GetInteractiveObjectName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.SceneInteractionComponent.GetInteractionVerb
struct USceneInteractionComponent_GetInteractionVerb_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.SceneInteractionComponent.AllowInteractBy
struct USceneInteractionComponent_AllowInteractBy_Params
{
	class ATslCharacter*                               Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.DoorInteractionComponent.OnRep_DoorState
struct UDoorInteractionComponent_OnRep_DoorState_Params
{
	EDoorState                                         PrevDoorState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.DoorInteractionComponent.AllowInteract
struct UDoorInteractionComponent_AllowInteract_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.DroppedItemInteractionComponent.OnRep_Item
struct UDroppedItemInteractionComponent_OnRep_Item_Params
{
};

// Function TslGame.DroppedItemInteractionComponent.AllowInteractBy
struct UDroppedItemInteractionComponent_AllowInteractBy_Params
{
	class ATslCharacter*                               Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.OnRep_Rider
struct UVehicleSeatInteractionComponent_OnRep_Rider_Params
{
};

// Function TslGame.VehicleSeatInteractionComponent.OnInteractDelegate
struct UVehicleSeatInteractionComponent_OnInteractDelegate_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.IsWeaponClassAllowed
struct UVehicleSeatInteractionComponent_IsWeaponClassAllowed_Params
{
	EWeaponClass                                       InClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.IsEntryAllowedByVelocity
struct UVehicleSeatInteractionComponent_IsEntryAllowedByVelocity_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetVehicleSeatComponent
struct UVehicleSeatInteractionComponent_GetVehicleSeatComponent_Params
{
	class UTslVehicleSeatComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetVehiclePawn
struct UVehicleSeatInteractionComponent_GetVehiclePawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetVehicleInterface
struct UVehicleSeatInteractionComponent_GetVehicleInterface_Params
{
	TScriptInterface<class UTslVehicleInterface>       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetVehicleAnimType
struct UVehicleSeatInteractionComponent_GetVehicleAnimType_Params
{
	EVehicleAnimType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetTransitionOutBlendspace
struct UVehicleSeatInteractionComponent_GetTransitionOutBlendspace_Params
{
	class UBlendSpaceBase*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetTransitionInBlendspace
struct UVehicleSeatInteractionComponent_GetTransitionInBlendspace_Params
{
	class UBlendSpaceBase*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetSeatIdleAO
struct UVehicleSeatInteractionComponent_GetSeatIdleAO_Params
{
	class UAimOffsetBlendSpace*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetSeatIdleAnimation_Unarmed
struct UVehicleSeatInteractionComponent_GetSeatIdleAnimation_Unarmed_Params
{
	class UAnimSequenceBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetSeatIdleAnimation_Rifle
struct UVehicleSeatInteractionComponent_GetSeatIdleAnimation_Rifle_Params
{
	class UAnimSequenceBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetSeatIdleAnimation_Melee
struct UVehicleSeatInteractionComponent_GetSeatIdleAnimation_Melee_Params
{
	class UAnimSequenceBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetSeatIdleAnimation_Grenade
struct UVehicleSeatInteractionComponent_GetSeatIdleAnimation_Grenade_Params
{
	class UAnimSequenceBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetSeatAimingFPPBlendspace
struct UVehicleSeatInteractionComponent_GetSeatAimingFPPBlendspace_Params
{
	class UBlendSpaceBase*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetSeatAimingBlendspace
struct UVehicleSeatInteractionComponent_GetSeatAimingBlendspace_Params
{
	class UBlendSpaceBase*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetRider
struct UVehicleSeatInteractionComponent_GetRider_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetMinPitchByYaw
struct UVehicleSeatInteractionComponent_GetMinPitchByYaw_Params
{
	float                                              CurrentYaw;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetMaxPitchByYaw
struct UVehicleSeatInteractionComponent_GetMaxPitchByYaw_Params
{
	float                                              CurrentYaw;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetCanFireOnlyWhileAimed
struct UVehicleSeatInteractionComponent_GetCanFireOnlyWhileAimed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetAdditionalMessage
struct UVehicleSeatInteractionComponent_GetAdditionalMessage_Params
{
	class ATslCharacter*                               Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.VehicleSeatInteractionComponent.AllowInteractDelegate
struct UVehicleSeatInteractionComponent_AllowInteractDelegate_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.MotorbikeVehicleSeatInteraction.IsEntryAllowed
struct UMotorbikeVehicleSeatInteraction_IsEntryAllowed_Params
{
	class ATslCharacter*                               InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.MotorbikeVehicleSeatInteraction.HandleFlipAndKickstand
struct UMotorbikeVehicleSeatInteraction_HandleFlipAndKickstand_Params
{
};

// Function TslGame.FreeFallMovement.ServerUpdateInput
struct UFreeFallMovement_ServerUpdateInput_Params
{
	float                                              InForwardInput;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRightInput;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InDesiredPitchRotation;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InDesiredYawRotation;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.FreeFallMovement.GetRightInput
struct UFreeFallMovement_GetRightInput_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.FreeFallMovement.GetForwardInput
struct UFreeFallMovement_GetForwardInput_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ParachuteVehicleMovement.ServerUpdateInput
struct UParachuteVehicleMovement_ServerUpdateInput_Params
{
	float                                              InForwardInput;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRotationInput;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.ParachuteVehicleMovement.GetRotationYawRate
struct UParachuteVehicleMovement_GetRotationYawRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ParachuteVehicleMovement.GetRotationInput
struct UParachuteVehicleMovement_GetRotationInput_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ParachuteVehicleMovement.GetForwardInput
struct UParachuteVehicleMovement_GetForwardInput_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.ParachuteVehicleMovement.GetClientRotation
struct UParachuteVehicleMovement_GetClientRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.StanceComponent.ServerForceInitStance
struct UStanceComponent_ServerForceInitStance_Params
{
};

// Function TslGame.StanceComponent.ServerChangeStance
struct UStanceComponent_ServerChangeStance_Params
{
	TEnumAsByte<EStanceMode>                           ToStance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.StanceComponent.OnRep_CurrentStance
struct UStanceComponent_OnRep_CurrentStance_Params
{
	TEnumAsByte<EStanceMode>                           OldCurrentStand;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.StanceComponent.ClientInitByReconnection
struct UStanceComponent_ClientInitByReconnection_Params
{
	TEnumAsByte<EStanceMode>                           InitStance;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerStart.GetRandomStartYawRotation
struct ATslPlayerStart_GetRandomStartYawRotation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerStart.GetRandomStartLocation
struct ATslPlayerStart_GetRandomStartLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.InventoryFacade.IsAutoSwappable
struct AInventoryFacade_IsAutoSwappable_Params
{
	EEquipSlotID                                       SlotID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.InventoryFacade.HasItemByClass
struct AInventoryFacade_HasItemByClass_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.InventoryFacade.GiveItem_Admin
struct AInventoryFacade_GiveItem_Admin_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.InventoryFacade.GetOwnerCharacter
struct AInventoryFacade_GetOwnerCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.InventoryFacade.GetInventory
struct AInventoryFacade_GetInventory_Params
{
	class AInventory*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.InventoryFacade.GetEquipment
struct AInventoryFacade_GetEquipment_Params
{
	class AEquipment*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Equipment.WeaponIndexToEquipPosition
struct AEquipment_WeaponIndexToEquipPosition_Params
{
	int                                                WeaponIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEquipPosition                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.Equipment.WeaponAttachmentSwap
struct AEquipment_WeaponAttachmentSwap_Params
{
	struct FEquipPosition                              SourceWeapon;                                             // (Parm)
	struct FEquipPosition                              TargetWeapon;                                             // (Parm)
	struct FName                                       ItemClassForVerify;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EWeaponAttachmentSlotID                            AttachmentSlotID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSoundPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.Equipment.UnequipItem
struct AEquipment_UnequipItem_Params
{
	struct FEquipPosition                              Position;                                                 // (Parm)
	struct FName                                       ItemClassForVerify;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSoundPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.Equipment.TryEquipItem
struct AEquipment_TryEquipItem_Params
{
	class UItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSoundPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSwap;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Equipment.PrimaryWeaponSwap
struct AEquipment_PrimaryWeaponSwap_Params
{
	struct FEquipPosition                              EquipPosition;                                            // (Parm)
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
};

// Function TslGame.Equipment.Items_RepNotify
struct AEquipment_Items_RepNotify_Params
{
};

// Function TslGame.Equipment.IsSwapablePrimaryWeapon
struct AEquipment_IsSwapablePrimaryWeapon_Params
{
	struct FEquipPosition                              EquipPosition;                                            // (Parm)
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Equipment.IsAttachableToWeapon
struct AEquipment_IsAttachableToWeapon_Params
{
	int                                                WeaponIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAttachableItem*                             AttachableItem;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyFree;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Equipment.GetOwnerCharacter
struct AEquipment_GetOwnerCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Equipment.GetItemCountByClass
struct AEquipment_GetItemCountByClass_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Equipment.GetItem
struct AEquipment_GetItem_Params
{
	struct FEquipPosition                              Position;                                                 // (Parm)
	class UEquipableItem*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Equipment.GetInventoryFacade
struct AEquipment_GetInventoryFacade_Params
{
	class AInventoryFacade*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Equipment.FindPosition
struct AEquipment_FindPosition_Params
{
	class UItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEquipPosition                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.Equipment.FindEquipPosition
struct AEquipment_FindEquipPosition_Params
{
	EEquipSlotID                                       SlotID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyFree;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEquipPosition                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.Equipment.FindEquipableWeaponPosition
struct AEquipment_FindEquipableWeaponPosition_Params
{
	class UEquipableItem*                              EquipableItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
	struct FEquipPosition                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.Equipment.FindAttachableWeaponIndex
struct AEquipment_FindAttachableWeaponIndex_Params
{
	class UAttachableItem*                             AttachableItem;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Equipment.EquipPositionToWeaponIndex
struct AEquipment_EquipPositionToWeaponIndex_Params
{
	struct FEquipPosition                              Position;                                                 // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Equipment.EquipItem
struct AEquipment_EquipItem_Params
{
	struct FEquipPosition                              Position;                                                 // (Parm)
	class UEquipableItem*                              Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckViaCanEquipTo;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSoundPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Equipment.DropItem
struct AEquipment_DropItem_Params
{
	struct FEquipPosition                              Position;                                                 // (Parm)
	struct FName                                       ItemClassForVerify;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsForce;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSoundPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.Equipment.DropAttachedItemAll
struct AEquipment_DropAttachedItemAll_Params
{
	struct FEquipPosition                              EquipPosition;                                            // (Parm)
	struct FName                                       ItemClassForVerify;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSoundPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.Equipment.DropAttachedItem
struct AEquipment_DropAttachedItem_Params
{
	struct FEquipPosition                              EquipPosition;                                            // (Parm)
	struct FName                                       ItemClassForVerify;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EWeaponAttachmentSlotID                            SlotID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSoundPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.Equipment.DetachItemAll
struct AEquipment_DetachItemAll_Params
{
	struct FEquipPosition                              EquipPosition;                                            // (Parm)
	struct FName                                       ItemClassForVerify;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSoundPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.Equipment.DetachItem
struct AEquipment_DetachItem_Params
{
	struct FEquipPosition                              EquipPosition;                                            // (Parm)
	struct FName                                       ItemClassForVerify;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EWeaponAttachmentSlotID                            SlotID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSoundPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.Inventory.UseItem
struct AInventory_UseItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemClassForVerify;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.Inventory.OnFinishUseCast
struct AInventory_OnFinishUseCast_Params
{
	class UObject*                                     CastObject;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.Inventory.Items_RepNotify
struct AInventory_Items_RepNotify_Params
{
};

// Function TslGame.Inventory.GetOwnerCharacter
struct AInventory_GetOwnerCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Inventory.GetMaxSpace
struct AInventory_GetMaxSpace_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Inventory.GetItemCountByClass
struct AInventory_GetItemCountByClass_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Inventory.GetItemCount
struct AInventory_GetItemCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Inventory.GetInventoryFacade
struct AInventory_GetInventoryFacade_Params
{
	class AInventoryFacade*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Inventory.GetCurrentSpace
struct AInventory_GetCurrentSpace_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Inventory.GetAllItemsByType
struct AInventory_GetAllItemsByType_Params
{
	class UClass*                                      ItemSuperClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FInventoryItem>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.Inventory.GetAllItems
struct AInventory_GetAllItems_Params
{
	TArray<struct FInventoryItem>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.Inventory.GetAdditionalMaxCount
struct AInventory_GetAdditionalMaxCount_Params
{
	class UItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Inventory.FindItemIndex
struct AInventory_FindItemIndex_Params
{
	class UItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Inventory.FindItemHasMinStack
struct AInventory_FindItemHasMinStack_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UItem*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Inventory.FindItem
struct AInventory_FindItem_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UItem*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Inventory.EquipOrDropItem
struct AInventory_EquipOrDropItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemClassForVerify;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSoundPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.Inventory.EquipItem
struct AInventory_EquipItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemClassForVerify;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSoundPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.Inventory.DropItem
struct AInventory_DropItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemClassForVerify;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
	bool                                               bSoundPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.Inventory.ConsumeItemByClass
struct AInventory_ConsumeItemByClass_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Inventory.ClientBroadcastNoBagSpaceEvent
struct AInventory_ClientBroadcastNoBagSpaceEvent_Params
{
};

// Function TslGame.Inventory.AttachOrDropItem
struct AInventory_AttachOrDropItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemClassForVerify;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSoundPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.Inventory.AttachItem
struct AInventory_AttachItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemClassForVerify;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEquipPosition                              EquipPosition;                                            // (Parm)
	bool                                               bSoundPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.ItemExplorerProxy.PropagateUpdateItemList
struct AItemExplorerProxy_PropagateUpdateItemList_Params
{
};

// Function TslGame.ItemExplorerProxy.PropagateDestroyContextMenuWidget
struct AItemExplorerProxy_PropagateDestroyContextMenuWidget_Params
{
};

// Function TslGame.ItemExplorerProxy.PropagateCreateAndShowContextMenuWidget
struct AItemExplorerProxy_PropagateCreateAndShowContextMenuWidget_Params
{
	TScriptInterface<class USlotContainerInterface>    Param;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.ItemExplorerProxy.Pop
struct AItemExplorerProxy_Pop_Params
{
};

// Function TslGame.ItemExplorerProxy.IsBaseExplorer
struct AItemExplorerProxy_IsBaseExplorer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CarePackageItem.IsPickupedItem
struct ACarePackageItem_IsPickupedItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CarePackageItem.IsFalling
struct ACarePackageItem_IsFalling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Team.ServerSetShowMapMarker
struct ATeam_ServerSetShowMapMarker_Params
{
	bool                                               bNewShowMapMarker;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.Team.ServerSetMapMarkerPosition
struct ATeam_ServerSetMapMarkerPosition_Params
{
	struct FVector2D                                   NewMapMarkerPosition;                                     // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.Team.OnRep_Dying
struct ATeam_OnRep_Dying_Params
{
	bool                                               bLastDying;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.Team.IsShowMapMarker
struct ATeam_IsShowMapMarker_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Team.IsQuitter
struct ATeam_IsQuitter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Team.IsGroggying
struct ATeam_IsGroggying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Team.IsDying
struct ATeam_IsDying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Team.GetTslCharacter
struct ATeam_GetTslCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Team.GetRideVehicle
struct ATeam_GetRideVehicle_Params
{
	ETeamVehicleType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Team.GetPlayerUniqueId
struct ATeam_GetPlayerUniqueId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.Team.GetPlayerRotation
struct ATeam_GetPlayerRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.Team.GetPlayerName
struct ATeam_GetPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.Team.GetPlayerLocation
struct ATeam_GetPlayerLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.Team.GetMemberNumber
struct ATeam_GetMemberNumber_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Team.GetMapMarkerPosition
struct ATeam_GetMapMarkerPosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.Team.GetHealthMax
struct ATeam_GetHealthMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Team.GetHealth
struct ATeam_GetHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Team.GetGroggyHealthMax
struct ATeam_GetGroggyHealthMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.Team.GetGroggyHealth
struct ATeam_GetGroggyHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslAccessoryComponent.SetPhysicsSimulation
struct UTslAccessoryComponent_SetPhysicsSimulation_Params
{
	bool                                               bSimulatePhysics;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslAccessoryComponent.InitSetupComponent
struct UTslAccessoryComponent_InitSetupComponent_Params
{
	bool                                               bSimulatePhysics;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslAIController.ShootEnemy
struct ATslAIController_ShootEnemy_Params
{
};

// Function TslGame.TslAIController.FindClosestEnemyWithLOS
struct ATslAIController_FindClosestEnemyWithLOS_Params
{
	class ATslCharacter*                               ExcludeEnemy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslAIController.FindClosestEnemy
struct ATslAIController_FindClosestEnemy_Params
{
};

// Function TslGame.AircraftCarePackage.IsPlayInEditor
struct AAircraftCarePackage_IsPlayInEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TransportAircraftVehicle.OnRide
struct ATransportAircraftVehicle_OnRide_Params
{
	class ATslCharacter*                               Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TransportAircraftVehicle.OnRep_IsVisible
struct ATransportAircraftVehicle_OnRep_IsVisible_Params
{
};

// Function TslGame.TransportAircraftVehicle.OnLocalPlayerRide
struct ATransportAircraftVehicle_OnLocalPlayerRide_Params
{
};

// Function TslGame.TransportAircraftVehicle.OnLocalPlayerLeave
struct ATransportAircraftVehicle_OnLocalPlayerLeave_Params
{
};

// Function TslGame.TransportAircraftVehicle.OnLeave
struct ATransportAircraftVehicle_OnLeave_Params
{
	class ATslCharacter*                               Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TransportAircraftVehicle.OnInteractBy
struct ATransportAircraftVehicle_OnInteractBy_Params
{
	class ATslCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TransportAircraftVehicle.IsInEjectionArea
struct ATransportAircraftVehicle_IsInEjectionArea_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TransportAircraftVehicle.EnterAtEjectionArea
struct ATransportAircraftVehicle_EnterAtEjectionArea_Params
{
};

// Function TslGame.TransportAircraftVehicle.EjectAll
struct ATransportAircraftVehicle_EjectAll_Params
{
};

// Function TslGame.TransportAircraftVehicle.AllowInteractBy
struct ATransportAircraftVehicle_AllowInteractBy_Params
{
	class ATslCharacter*                               Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.UpdateWheelSound
struct ATslWheeledVehicle_UpdateWheelSound_Params
{
};

// Function TslGame.TslWheeledVehicle.UpdateWheelCaching
struct ATslWheeledVehicle_UpdateWheelCaching_Params
{
};

// Function TslGame.TslWheeledVehicle.UpdateBasicInfoCaching
struct ATslWheeledVehicle_UpdateBasicInfoCaching_Params
{
};

// Function TslGame.TslWheeledVehicle.UnBindCallbackToHUD
struct ATslWheeledVehicle_UnBindCallbackToHUD_Params
{
	class ATslPlayerController*                        InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.SetAirControlPitchInput
struct ATslWheeledVehicle_SetAirControlPitchInput_Params
{
	float                                              InInput;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.ServerSetBoosting
struct ATslWheeledVehicle_ServerSetBoosting_Params
{
	bool                                               bNewBoosting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.OnVehicleEjected
struct ATslWheeledVehicle_OnVehicleEjected_Params
{
};

// Function TslGame.TslWheeledVehicle.OnRide
struct ATslWheeledVehicle_OnRide_Params
{
	class ATslCharacter*                               Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.OnPostDriverRide
struct ATslWheeledVehicle_OnPostDriverRide_Params
{
};

// Function TslGame.TslWheeledVehicle.OnPostDriverLeave
struct ATslWheeledVehicle_OnPostDriverLeave_Params
{
};

// Function TslGame.TslWheeledVehicle.OnLeave
struct ATslWheeledVehicle_OnLeave_Params
{
	class ATslCharacter*                               Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.OnCharacterHit
struct ATslWheeledVehicle_OnCharacterHit_Params
{
	class ATslCharacter*                               HitCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HitDamage;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.OnBreak
struct ATslWheeledVehicle_OnBreak_Params
{
};

// Function TslGame.TslWheeledVehicle.OnBlockingWidgetOpened
struct ATslWheeledVehicle_OnBlockingWidgetOpened_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.MulticastCharacterHitEffects
struct ATslWheeledVehicle_MulticastCharacterHitEffects_Params
{
	class ATslCharacter*                               CharacterHit;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HitDamage;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.IsSunken
struct ATslWheeledVehicle_IsSunken_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.IsStablizeOverrideActive
struct ATslWheeledVehicle_IsStablizeOverrideActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.IsStabilizeOverrideEnabled
struct ATslWheeledVehicle_IsStabilizeOverrideEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.IsInWaterVolume
struct ATslWheeledVehicle_IsInWaterVolume_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.IsEnabledOptimizeTick
struct ATslWheeledVehicle_IsEnabledOptimizeTick_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.IsBoosting
struct ATslWheeledVehicle_IsBoosting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.GetTslVehicleMovement
struct ATslWheeledVehicle_GetTslVehicleMovement_Params
{
	class UTslWheeledVehicleMovement*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.GetSteeringInput
struct ATslWheeledVehicle_GetSteeringInput_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.GetCurrentWaterSurfaceZ
struct ATslWheeledVehicle_GetCurrentWaterSurfaceZ_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.GetBuffComponent
struct ATslWheeledVehicle_GetBuffComponent_Params
{
	class UBuffComponet*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.GetAirControlPitchInput
struct ATslWheeledVehicle_GetAirControlPitchInput_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.BindCallbackToHUD
struct ATslWheeledVehicle_BindCallbackToHUD_Params
{
	class ATslPlayerController*                        InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.ActivationTriggerEndOverlap
struct ATslWheeledVehicle_ActivationTriggerEndOverlap_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.ActivationTriggerBeginOverlap
struct ATslWheeledVehicle_ActivationTriggerBeginOverlap_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OverlapInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslFloatingVehicle.UnBindCallbackToHUD
struct ATslFloatingVehicle_UnBindCallbackToHUD_Params
{
	class ATslPlayerController*                        InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslFloatingVehicle.OnRide
struct ATslFloatingVehicle_OnRide_Params
{
	class ATslCharacter*                               Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslFloatingVehicle.OnPostDriverRide
struct ATslFloatingVehicle_OnPostDriverRide_Params
{
};

// Function TslGame.TslFloatingVehicle.OnPostDriverLeave
struct ATslFloatingVehicle_OnPostDriverLeave_Params
{
};

// Function TslGame.TslFloatingVehicle.OnLeave
struct ATslFloatingVehicle_OnLeave_Params
{
	class ATslCharacter*                               Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslFloatingVehicle.OnBlockingWidgetOpened
struct ATslFloatingVehicle_OnBlockingWidgetOpened_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslFloatingVehicle.IsBoosting
struct ATslFloatingVehicle_IsBoosting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslFloatingVehicle.GetVehicleEngineImmersionDepth
struct ATslFloatingVehicle_GetVehicleEngineImmersionDepth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslFloatingVehicle.GetVehicleAcceleration
struct ATslFloatingVehicle_GetVehicleAcceleration_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslFloatingVehicle.GetSteerYawAngle
struct ATslFloatingVehicle_GetSteerYawAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslFloatingVehicle.GetMaxSteerYawAngle
struct ATslFloatingVehicle_GetMaxSteerYawAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslFloatingVehicle.BindCallbackToHUD
struct ATslFloatingVehicle_BindCallbackToHUD_Params
{
	class ATslPlayerController*                        InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.SetSimulateVehicle
struct UTslWheeledVehicleMovement_SetSimulateVehicle_Params
{
	bool                                               bSimulate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.ServerUpdateAdditionalState
struct UTslWheeledVehicleMovement_ServerUpdateAdditionalState_Params
{
	int                                                TargetGear;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.Server_SetMovementParameters
struct UTslWheeledVehicleMovement_Server_SetMovementParameters_Params
{
	float                                              InThrottle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InSteer;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InBreak;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InHandbrake;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Gear;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.ProcessCustomTransmission
struct UTslWheeledVehicleMovement_ProcessCustomTransmission_Params
{
	float                                              InVelocity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.OnDriverRide
struct UTslWheeledVehicleMovement_OnDriverRide_Params
{
};

// Function TslGame.TslWheeledVehicleMovement.OnDriverLeave
struct UTslWheeledVehicleMovement_OnDriverLeave_Params
{
};

// Function TslGame.TslWheeledVehicleMovement.OnBreak
struct UTslWheeledVehicleMovement_OnBreak_Params
{
};

// Function TslGame.TslWheeledVehicleMovement.IsSimulatingVehicle
struct UTslWheeledVehicleMovement_IsSimulatingVehicle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.GetWheelWaterDepth
struct UTslWheeledVehicleMovement_GetWheelWaterDepth_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.GetWheelSuspensionMaxRaise
struct UTslWheeledVehicleMovement_GetWheelSuspensionMaxRaise_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.GetWheelSuspensionMaxDrop
struct UTslWheeledVehicleMovement_GetWheelSuspensionMaxDrop_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.GetWheelRotationSpeed
struct UTslWheeledVehicleMovement_GetWheelRotationSpeed_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.GetWheelHealthPercentages
struct UTslWheeledVehicleMovement_GetWheelHealthPercentages_Params
{
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslWheeledVehicleMovement.GetWheelContactType
struct UTslWheeledVehicleMovement_GetWheelContactType_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinVelocity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinSkid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinSpin;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SuspOffsetForContact;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWheelContactType>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.GetWheelContactSurfaceMaterial
struct UTslWheeledVehicleMovement_GetWheelContactSurfaceMaterial_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.GetWheelContactData
struct UTslWheeledVehicleMovement_GetWheelContactData_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinVelocity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinSkid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinSpin;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SuspOffsetForContact;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinBrake;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinRotationSpeed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWheelContactData                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslWheeledVehicleMovement.GetThrottleInput
struct UTslWheeledVehicleMovement_GetThrottleInput_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.GetSteeringInputClamped
struct UTslWheeledVehicleMovement_GetSteeringInputClamped_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.GetSteeringInput
struct UTslWheeledVehicleMovement_GetSteeringInput_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.GetHandbrakeInput
struct UTslWheeledVehicleMovement_GetHandbrakeInput_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.GetBrakeInput
struct UTslWheeledVehicleMovement_GetBrakeInput_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.ClientPunctureTire
struct UTslWheeledVehicleMovement_ClientPunctureTire_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslFloatingVehicleMovement.ServerUpdateInput
struct UTslFloatingVehicleMovement_ServerUpdateInput_Params
{
	float                                              InForwardInput;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRotationInput;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInIsBoosting;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslFloatingVehicleMovement.OnDriverLeave
struct UTslFloatingVehicleMovement_OnDriverLeave_Params
{
};

// Function TslGame.TslFloatingVehicleMovement.IsBoosting
struct UTslFloatingVehicleMovement_IsBoosting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslFloatingVehicleMovement.GetRotationYawAngle
struct UTslFloatingVehicleMovement_GetRotationYawAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslFloatingVehicleMovement.GetMaxRotationYawAngle
struct UTslFloatingVehicleMovement_GetMaxRotationYawAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslFloatingVehicleMovement.GetMaxAcceleration
struct UTslFloatingVehicleMovement_GetMaxAcceleration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslFloatingVehicleMovement.GetCalculatedAcceleration
struct UTslFloatingVehicleMovement_GetCalculatedAcceleration_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslFloatingVehicleMovement.GetAcceleration
struct UTslFloatingVehicleMovement_GetAcceleration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.TraceSphereForVaulting
struct UTslCharacterMovement_TraceSphereForVaulting_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FLinearColor                                TraceColor;                                               // (Parm, IsPlainOldData)
	struct FLinearColor                                TraceHitColor;                                            // (Parm, IsPlainOldData)
	float                                              DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.TraceLineForVaulting
struct UTslCharacterMovement_TraceLineForVaulting_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FLinearColor                                TraceColor;                                               // (Parm, IsPlainOldData)
	struct FLinearColor                                TraceHitColor;                                            // (Parm, IsPlainOldData)
	float                                              DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.TraceCapsuleForVaulting
struct UTslCharacterMovement_TraceCapsuleForVaulting_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FLinearColor                                TraceColor;                                               // (Parm, IsPlainOldData)
	struct FLinearColor                                TraceHitColor;                                            // (Parm, IsPlainOldData)
	float                                              DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.StartVaultingTask
struct UTslCharacterMovement_StartVaultingTask_Params
{
	struct FVaultingTask                               InVaultTask;                                              // (Parm)
};

// Function TslGame.TslCharacterMovement.PredictCapsulePathForVaulting
struct UTslCharacterMovement_PredictCapsulePathForVaulting_Params
{
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	TArray<struct FVector>                             OutPathPositions;                                         // (Parm, OutParm, ZeroConstructor)
	struct FVector                                     OutLastTraceDestination;                                  // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     StartPos;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     LaunchVelocity;                                           // (Parm, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DrawDebugTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CapsuleRadiusOverride;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CapsuleHalfHeightOverride;                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SimFrequency;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxSimTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.LocalHandleVault_CP
struct UTslCharacterMovement_LocalHandleVault_CP_Params
{
	struct FVector                                     VaultStart;                                               // (Parm, IsPlainOldData)
	struct FVector                                     VaultApex;                                                // (Parm, IsPlainOldData)
	struct FVector                                     VaultApexAdditive;                                        // (Parm, IsPlainOldData)
	struct FVector                                     VaultEnd;                                                 // (Parm, IsPlainOldData)
	bool                                               bIsClimb;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EVaultAnimType                                     VaultAnimType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEndToFall;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayerVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFromObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.IsVaulting
struct UTslCharacterMovement_IsVaulting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.HandleVaultPreEvaluation
struct UTslCharacterMovement_HandleVaultPreEvaluation_Params
{
	bool                                               bForceVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InForcedVelocity;                                         // (Parm, IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.HandleVaulting
struct UTslCharacterMovement_HandleVaulting_Params
{
	struct FVaultingHandleInput                        Input;                                                    // (Parm)
	struct FVaultingHandleResult                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslCharacterMovement.GetVTimer
struct UTslCharacterMovement_GetVTimer_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.GetVaultingDataFromAnim
struct UTslCharacterMovement_GetVaultingDataFromAnim_Params
{
	EVaultAnimType                                     InVaultType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UVaultingData*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.GetMaxVaultDistanceBySpeed
struct UTslCharacterMovement_GetMaxVaultDistanceBySpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.GetGlobalVaultingSpeedMultiplier
struct UTslCharacterMovement_GetGlobalVaultingSpeedMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.GetCurrentVaultType
struct UTslCharacterMovement_GetCurrentVaultType_Params
{
	EVaultAnimType                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.EvaluateVaultAnimType
struct UTslCharacterMovement_EvaluateVaultAnimType_Params
{
	int                                                FirstRow;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ApexAdditiveStepCounter;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AverageCellCount;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceVault;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceClimb;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CharVelocity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EVaultAnimType                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.EndCurrentTaskToFall
struct UTslCharacterMovement_EndCurrentTaskToFall_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslAnimInstance.SetWeaponStatesEvaluationCooldown
struct UTslAnimInstance_SetWeaponStatesEvaluationCooldown_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslAnimInstance.SetLandPredictionVector
struct UTslAnimInstance_SetLandPredictionVector_Params
{
	struct FVector                                     newLandVector;                                            // (Parm, IsPlainOldData)
};

// Function TslGame.TslAnimInstance.SetJumpStartLocation
struct UTslAnimInstance_SetJumpStartLocation_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, IsPlainOldData)
	float                                              DefaultFallHeight;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslAnimInstance.ResetRecoilRoll
struct UTslAnimInstance_ResetRecoilRoll_Params
{
};

// Function TslGame.TslAnimInstance.ResetIdle
struct UTslAnimInstance_ResetIdle_Params
{
};

// Function TslGame.TslAnimInstance.RandomizeIdleIndex_CP
struct UTslAnimInstance_RandomizeIdleIndex_CP_Params
{
	bool                                               ExludeLastIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslAnimInstance.ProcessCodePaths
struct UTslAnimInstance_ProcessCodePaths_Params
{
};

// Function TslGame.TslAnimInstance.PreEvaluatePawnState
struct UTslAnimInstance_PreEvaluatePawnState_Params
{
};

// Function TslGame.TslAnimInstance.OnHitReaction
struct UTslAnimInstance_OnHitReaction_Params
{
	EAnimWeaponType                                    WeaponType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, IsPlainOldData)
};

// Function TslGame.TslAnimInstance.HandleSpeedAndDirection_CP
struct UTslAnimInstance_HandleSpeedAndDirection_CP_Params
{
};

// Function TslGame.TslAnimInstance.HandleItemOffsets_CP
struct UTslAnimInstance_HandleItemOffsets_CP_Params
{
};

// Function TslGame.TslAnimInstance.HandleCardinalDirection90
struct UTslAnimInstance_HandleCardinalDirection90_Params
{
	float                                              InDirection;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslAnimInstance.HandleAnimCurves
struct UTslAnimInstance_HandleAnimCurves_Params
{
};

// Function TslGame.TslAnimInstance.HandleADSSocketOffset
struct UTslAnimInstance_HandleADSSocketOffset_Params
{
};

// Function TslGame.TslAnimInstance.GetVehicleAO
struct UTslAnimInstance_GetVehicleAO_Params
{
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslAnimInstance.GetBlendSpaceRelaxed_TS
struct UTslAnimInstance_GetBlendSpaceRelaxed_TS_Params
{
	TEnumAsByte<EAnimStanceType>                       AnimStance;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFPP;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimDB*                                     InAnimDB;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslAnimInstance.GetBlendSpace_TS
struct UTslAnimInstance_GetBlendSpace_TS_Params
{
	TEnumAsByte<EAnimStanceType>                       AnimStance;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFPP;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimDB*                                     InAnimDB;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslAnimInstance.GetAnimSpeed_TS
struct UTslAnimInstance_GetAnimSpeed_TS_Params
{
	TEnumAsByte<EAnimStanceType>                       AnimStance;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InSpeed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              SprintAlpha;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimDB*                                     InAnimDB;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSprinting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslAnimInstance.GetAbsActorToBaseRotation
struct UTslAnimInstance_GetAbsActorToBaseRotation_Params
{
	bool                                               bInUseMin;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InAngle;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslAnimInstance.FindPositionFromDistanceCurve
struct UTslAnimInstance_FindPositionFromDistanceCurve_Params
{
	float                                              Distance;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UAnimSequenceBase*                           InAnimSequence;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslAnimInstance.EvaluateWeaponStates
struct UTslAnimInstance_EvaluateWeaponStates_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateWeaponStability
struct UTslAnimInstance_EvaluateWeaponStability_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateWeaponInertia
struct UTslAnimInstance_EvaluateWeaponInertia_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateWeaponCollision
struct UTslAnimInstance_EvaluateWeaponCollision_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateVehicle
struct UTslAnimInstance_EvaluateVehicle_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateVaulting
struct UTslAnimInstance_EvaluateVaulting_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateSwimming
struct UTslAnimInstance_EvaluateSwimming_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateRotations
struct UTslAnimInstance_EvaluateRotations_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateRecoilRoll
struct UTslAnimInstance_EvaluateRecoilRoll_Params
{
};

// Function TslGame.TslAnimInstance.EvaluatePawnStates
struct UTslAnimInstance_EvaluatePawnStates_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateMeleeAttack
struct UTslAnimInstance_EvaluateMeleeAttack_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateLocalPawnStates
struct UTslAnimInstance_EvaluateLocalPawnStates_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateLeaning
struct UTslAnimInstance_EvaluateLeaning_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateJumping
struct UTslAnimInstance_EvaluateJumping_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateJumpCamera
struct UTslAnimInstance_EvaluateJumpCamera_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateItemOffsets
struct UTslAnimInstance_EvaluateItemOffsets_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateIdle
struct UTslAnimInstance_EvaluateIdle_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateFreelook
struct UTslAnimInstance_EvaluateFreelook_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateFreefallAndParachute
struct UTslAnimInstance_EvaluateFreefallAndParachute_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateFallingAndLanding
struct UTslAnimInstance_EvaluateFallingAndLanding_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateCoatExternalForce
struct UTslAnimInstance_EvaluateCoatExternalForce_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateCharacterStates
struct UTslAnimInstance_EvaluateCharacterStates_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateCasting
struct UTslAnimInstance_EvaluateCasting_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateAnimDynamics
struct UTslAnimInstance_EvaluateAnimDynamics_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateAimStates
struct UTslAnimInstance_EvaluateAimStates_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateAimOffsets
struct UTslAnimInstance_EvaluateAimOffsets_Params
{
};

// Function TslGame.TslAnimInstance.CacheCharacterReference
struct UTslAnimInstance_CacheCharacterReference_Params
{
	class ATslCharacter*                               InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslHUD.TestSendSystemMessage
struct ATslHUD_TestSendSystemMessage_Params
{
	struct FText                                       Message;                                                  // (Parm)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslHUD.TestSendImportantMessage
struct ATslHUD_TestSendImportantMessage_Params
{
	struct FText                                       Message;                                                  // (Parm)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslHUD.TestKillMessage
struct ATslHUD_TestKillMessage_Params
{
	struct FString                                     KillerName;                                               // (Parm, ZeroConstructor)
	struct FString                                     VictimName;                                               // (Parm, ZeroConstructor)
	bool                                               bKillerIsOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVictimIsOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslHUD.TestGameEvent_MatchEnded
struct ATslHUD_TestGameEvent_MatchEnded_Params
{
};

// Function TslGame.TslHUD.TestGameEvent_KillOtherPlayer
struct ATslHUD_TestGameEvent_KillOtherPlayer_Params
{
	bool                                               bGroggy;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslHUD.TestGameEvent_Die
struct ATslHUD_TestGameEvent_Die_Params
{
	bool                                               bGroggy;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslHUD.SpawnActorInSceneCaptureWorld
struct ATslHUD_SpawnActorInSceneCaptureWorld_Params
{
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // (ConstParm, Parm, IsPlainOldData)
	struct FScriptDelegate                             DelegateToCall;                                           // (Parm, ZeroConstructor)
};

// Function TslGame.TslHUD.SetHighlightProvider
struct ATslHUD_SetHighlightProvider_Params
{
	struct FString                                     Provider;                                                 // (Parm, ZeroConstructor)
};

// Function TslGame.TslHUD.RecordReplayHighlightSession
struct ATslHUD_RecordReplayHighlightSession_Params
{
	float                                              timeLength;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslHUD.NotifyDropSlotOnOtherContainer
struct ATslHUD_NotifyDropSlotOnOtherContainer_Params
{
	TScriptInterface<class USlotContainerInterface>    Container;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    OtherContainer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslHUD.IsGameEnded
struct ATslHUD_IsGameEnded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslHUD.InitCaptureWorld
struct ATslHUD_InitCaptureWorld_Params
{
};

// Function TslGame.TslHUD.GoToLobby
struct ATslHUD_GoToLobby_Params
{
};

// Function TslGame.TslHUD.GetPossessPawn
struct ATslHUD_GetPossessPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslHUD.GetPossessCharacter
struct ATslHUD_GetPossessCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslHUD.GetHealAmount
struct ATslHUD_GetHealAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslSettings.SetCharacterStudioRenderTarget
struct UTslSettings_SetCharacterStudioRenderTarget_Params
{
	class UTextureRenderTarget2D*                      rt;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslSettings.IsUsingGappLobby
struct UTslSettings_IsUsingGappLobby_Params
{
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslSettings.IsForKoreanRating
struct UTslSettings_IsForKoreanRating_Params
{
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslSettings.IsForKakaoTest
struct UTslSettings_IsForKakaoTest_Params
{
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslSettings.IsForKakao
struct UTslSettings_IsForKakao_Params
{
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslSettings.IsForChineseLicensing
struct UTslSettings_IsForChineseLicensing_Params
{
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslSettings.IsESports
struct UTslSettings_IsESports_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslSettings.GetTslSettings
struct UTslSettings_GetTslSettings_Params
{
	class UTslSettings*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslSettings.GetNotifyMaxDistanceByName
struct UTslSettings_GetNotifyMaxDistanceByName_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslSettings.GetGappLobbyUrl
struct UTslSettings_GetGappLobbyUrl_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslSettings.GetCharacterStudioRenderTarget
struct UTslSettings_GetCharacterStudioRenderTarget_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.UseLobbyWidget
struct UTslGameInstance_UseLobbyWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.UpdateReplayShouldKeepBP
struct UTslGameInstance_UpdateReplayShouldKeepBP_Params
{
	struct FString                                     RegionOrLocal;                                            // (Parm, ZeroConstructor)
	struct FString                                     SessionName;                                              // (Parm, ZeroConstructor)
	bool                                               bShouldKeep;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.UpdateReplayAllDeadOrWinBP
struct UTslGameInstance_UpdateReplayAllDeadOrWinBP_Params
{
	struct FString                                     RegionOrLocal;                                            // (Parm, ZeroConstructor)
	struct FString                                     SessionName;                                              // (Parm, ZeroConstructor)
	bool                                               bAllDeadOrWin;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.UnPause
struct UTslGameInstance_UnPause_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.StopStat
struct UTslGameInstance_StopStat_Params
{
	TEnumAsByte<EServerStatType>                       StatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameInstance.StopIfReplaying
struct UTslGameInstance_StopIfReplaying_Params
{
};

// Function TslGame.TslGameInstance.StartStat
struct UTslGameInstance_StartStat_Params
{
	TEnumAsByte<EServerStatType>                       StatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.ShowYesNoMessage
struct UTslGameInstance_ShowYesNoMessage_Params
{
	struct FString                                     strTitle;                                                 // (Parm, ZeroConstructor)
	struct FString                                     strMsg;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.ShowSystemMessage
struct UTslGameInstance_ShowSystemMessage_Params
{
	struct FString                                     strTitle;                                                 // (Parm, ZeroConstructor)
	struct FString                                     strMsg;                                                   // (Parm, ZeroConstructor)
};

// Function TslGame.TslGameInstance.ShowOkCancelMessage
struct UTslGameInstance_ShowOkCancelMessage_Params
{
	struct FString                                     strTitle;                                                 // (Parm, ZeroConstructor)
	struct FString                                     strMsg;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.ShowLoadingScreen
struct UTslGameInstance_ShowLoadingScreen_Params
{
};

// Function TslGame.TslGameInstance.SetStartedFromReplayListMap
struct UTslGameInstance_SetStartedFromReplayListMap_Params
{
	bool                                               bSet;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameInstance.SetReplayTimeSpeed
struct UTslGameInstance_SetReplayTimeSpeed_Params
{
	float                                              TimeSpeed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameInstance.SetReplayBusy
struct UTslGameInstance_SetReplayBusy_Params
{
	bool                                               bBusy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameInstance.SetMaxReplaysForNullStreamer
struct UTslGameInstance_SetMaxReplaysForNullStreamer_Params
{
};

// Function TslGame.TslGameInstance.ResetReplayStreamer
struct UTslGameInstance_ResetReplayStreamer_Params
{
};

// Function TslGame.TslGameInstance.RequestReplayAKillEvent
struct UTslGameInstance_RequestReplayAKillEvent_Params
{
	struct FString                                     EventID;                                                  // (Parm, ZeroConstructor)
};

// Function TslGame.TslGameInstance.RequestReplayAGroggyEvent
struct UTslGameInstance_RequestReplayAGroggyEvent_Params
{
	struct FString                                     EventID;                                                  // (Parm, ZeroConstructor)
};

// DelegateFunction TslGame.TslGameInstance.ReplayProblemDelegate__DelegateSignature
struct UTslGameInstance_ReplayProblemDelegate__DelegateSignature_Params
{
};

// Function TslGame.TslGameInstance.ReplayJumpInt
struct UTslGameInstance_ReplayJumpInt_Params
{
	int                                                second;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameInstance.ReplayJump
struct UTslGameInstance_ReplayJump_Params
{
	float                                              TimelinePercentage;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameInstance.RemoveAllKillEvents
struct UTslGameInstance_RemoveAllKillEvents_Params
{
};

// Function TslGame.TslGameInstance.RemoveAllGroggyEvents
struct UTslGameInstance_RemoveAllGroggyEvents_Params
{
};

// DelegateFunction TslGame.TslGameInstance.RecordStartedDelegate__DelegateSignature
struct UTslGameInstance_RecordStartedDelegate__DelegateSignature_Params
{
};

// Function TslGame.TslGameInstance.QuitApplication
struct UTslGameInstance_QuitApplication_Params
{
	bool                                               bShowMessage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameInstance.PlayReplayCommand
struct UTslGameInstance_PlayReplayCommand_Params
{
	struct FString                                     RegionOrLocal;                                            // (Parm, ZeroConstructor)
	struct FString                                     SessionName;                                              // (Parm, ZeroConstructor)
};

// Function TslGame.TslGameInstance.PlayReplayBPByRegionOrLocal
struct UTslGameInstance_PlayReplayBPByRegionOrLocal_Params
{
	struct FString                                     Region;                                                   // (Parm, ZeroConstructor)
	struct FString                                     SessionName;                                              // (Parm, ZeroConstructor)
};

// Function TslGame.TslGameInstance.PlayReplayBP
struct UTslGameInstance_PlayReplayBP_Params
{
	struct FString                                     SessionName;                                              // (Parm, ZeroConstructor)
};

// Function TslGame.TslGameInstance.Pause
struct UTslGameInstance_Pause_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.OnPressedPopupConfirmInvite
struct UTslGameInstance_OnPressedPopupConfirmInvite_Params
{
	EPopupButtonID                                     ButtonID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameInstance.OnPressedPopupCommon
struct UTslGameInstance_OnPressedPopupCommon_Params
{
	EPopupButtonID                                     ButtonID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameInstance.KeepMaxReplaysAndDeleteOldestReplaysForNullStreamer
struct UTslGameInstance_KeepMaxReplaysAndDeleteOldestReplaysForNullStreamer_Params
{
};

// Function TslGame.TslGameInstance.KeepAndDeleteOldestReplaysForNullStreamer
struct UTslGameInstance_KeepAndDeleteOldestReplaysForNullStreamer_Params
{
	int                                                nReplaysToKeep;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction TslGame.TslGameInstance.KeepAndDeleteOldestReplaysDoneDelegate__DelegateSignature
struct UTslGameInstance_KeepAndDeleteOldestReplaysDoneDelegate__DelegateSignature_Params
{
	int                                                nRemains;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameInstance.IsReplaying
struct UTslGameInstance_IsReplaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.IsReplayError
struct UTslGameInstance_IsReplayError_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.IsRecording
struct UTslGameInstance_IsRecording_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.IsPaused
struct UTslGameInstance_IsPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.IsLive
struct UTslGameInstance_IsLive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.IsKillcamPlayback
struct UTslGameInstance_IsKillcamPlayback_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction TslGame.TslGameInstance.GotoTimelineDoneDelegate__DelegateSignature
struct UTslGameInstance_GotoTimelineDoneDelegate__DelegateSignature_Params
{
};

// Function TslGame.TslGameInstance.GotoReplayList
struct UTslGameInstance_GotoReplayList_Params
{
};

// Function TslGame.TslGameInstance.GetStartParameterStringValue
struct UTslGameInstance_GetStartParameterStringValue_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     NotFoundValue;                                            // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameInstance.GetStartParameter
struct UTslGameInstance_GetStartParameter_Params
{
	struct FTslStartParameter                          ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function TslGame.TslGameInstance.GetStartedFromReplayListMap
struct UTslGameInstance_GetStartedFromReplayListMap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.GetReplayTotalTime
struct UTslGameInstance_GetReplayTotalTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction TslGame.TslGameInstance.GetReplaySummaryDoneDelegate__DelegateSignature
struct UTslGameInstance_GetReplaySummaryDoneDelegate__DelegateSignature_Params
{
	struct FTslReplaySummary                           aTslReplaySummary;                                        // (Parm)
};

// Function TslGame.TslGameInstance.GetReplaySummary
struct UTslGameInstance_GetReplaySummary_Params
{
	struct FString                                     RegionOrLocal;                                            // (ConstParm, Parm, ZeroConstructor)
	struct FString                                     SessionName;                                              // (ConstParm, Parm, ZeroConstructor)
};

// Function TslGame.TslGameInstance.GetReplayListLocal
struct UTslGameInstance_GetReplayListLocal_Params
{
	int                                                PageIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PageSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction TslGame.TslGameInstance.GetReplayListDoneDelegate__DelegateSignature
struct UTslGameInstance_GetReplayListDoneDelegate__DelegateSignature_Params
{
};

// Function TslGame.TslGameInstance.GetReplayListByRegionOrLocal
struct UTslGameInstance_GetReplayListByRegionOrLocal_Params
{
	struct FString                                     RegionOrLocal;                                            // (Parm, ZeroConstructor)
	int                                                PageIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PageSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameInstance.GetReplayList
struct UTslGameInstance_GetReplayList_Params
{
};

// DelegateFunction TslGame.TslGameInstance.GetReplayKill__DelegateSignature
struct UTslGameInstance_GetReplayKill__DelegateSignature_Params
{
};

// Function TslGame.TslGameInstance.GetReplayCurrentTime
struct UTslGameInstance_GetReplayCurrentTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.GetReplayBusy
struct UTslGameInstance_GetReplayBusy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.GetRecordUserFromReplaySummary
struct UTslGameInstance_GetRecordUserFromReplaySummary_Params
{
	struct FTslReplaySummary                           inReplaySummary;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTslPlayerStateSummary                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslGameInstance.GetRecorderTeamMembersFromReplaySummary
struct UTslGameInstance_GetRecorderTeamMembersFromReplaySummary_Params
{
	struct FTslReplaySummary                           inReplaySummary;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FTslPlayerStateSummary>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameInstance.GetNumTotalReplays
struct UTslGameInstance_GetNumTotalReplays_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.GetNumReplaysForNullStreamer
struct UTslGameInstance_GetNumReplaysForNullStreamer_Params
{
};

// Function TslGame.TslGameInstance.GetGameEventObserver
struct UTslGameInstance_GetGameEventObserver_Params
{
	class UGameEventObserver*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.GetDemoDiskFreeSpace
struct UTslGameInstance_GetDemoDiskFreeSpace_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.GetCurrentGameState
struct UTslGameInstance_GetCurrentGameState_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.FindRecorderCharacterForPlayback
struct UTslGameInstance_FindRecorderCharacterForPlayback_Params
{
	TArray<class ATslCharacter*>                       ReplicatedCharacterList;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.EnumerateReplayKillEvents
struct UTslGameInstance_EnumerateReplayKillEvents_Params
{
};

// Function TslGame.TslGameInstance.EnumerateReplayGroggyEvents
struct UTslGameInstance_EnumerateReplayGroggyEvents_Params
{
};

// DelegateFunction TslGame.TslGameInstance.DownloadZippedReplayProgressDelegate__DelegateSignature
struct UTslGameInstance_DownloadZippedReplayProgressDelegate__DelegateSignature_Params
{
	struct FString                                     strFileName;                                              // (Parm, ZeroConstructor)
	int                                                nReceived;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nTotal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction TslGame.TslGameInstance.DownloadZippedReplayCompleteDelegate__DelegateSignature
struct UTslGameInstance_DownloadZippedReplayCompleteDelegate__DelegateSignature_Params
{
	struct FString                                     strFullPath;                                              // (Parm, ZeroConstructor)
	struct FString                                     strDirToExtract;                                          // (Parm, ZeroConstructor)
};

// Function TslGame.TslGameInstance.DownloadZippedReplayBPByRegion
struct UTslGameInstance_DownloadZippedReplayBPByRegion_Params
{
	struct FString                                     Region;                                                   // (Parm, ZeroConstructor)
	struct FString                                     SessionName;                                              // (Parm, ZeroConstructor)
	int                                                nTotalSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.DeleteZippedReplayBP
struct UTslGameInstance_DeleteZippedReplayBP_Params
{
	struct FString                                     ArchiveName;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.DeleteReplayBPByRegionOrLocal
struct UTslGameInstance_DeleteReplayBPByRegionOrLocal_Params
{
	struct FString                                     RegionOrLocal;                                            // (Parm, ZeroConstructor)
	struct FString                                     SessionName;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.CancelDownloadingZippedReplay
struct UTslGameInstance_CancelDownloadingZippedReplay_Params
{
	struct FString                                     SessionName;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameInstance.AddPlayerStateToReplaySummary
struct UTslGameInstance_AddPlayerStateToReplaySummary_Params
{
	struct FTslReplaySummary                           inReplaySummary;                                          // (Parm, OutParm)
	class ATslPlayerState*                             pPlayerState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyHUD.TickFadeInOutEffect
struct ALobbyHUD_TickFadeInOutEffect_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyHUD.TickCameraTransition
struct ALobbyHUD_TickCameraTransition_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyHUD.TestLobbyCharacterReady
struct ALobbyHUD_TestLobbyCharacterReady_Params
{
	uint32_t                                           SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReady;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyHUD.TestLobbyCharacterHost
struct ALobbyHUD_TestLobbyCharacterHost_Params
{
	uint32_t                                           SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyHUD.TestLobbyCharacterAddAngle
struct ALobbyHUD_TestLobbyCharacterAddAngle_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InYawInDegree;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyHUD.TestLobbyCamera_TeleportTo
struct ALobbyHUD_TestLobbyCamera_TeleportTo_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyHUD.TestLobbyCamera_StartTransitionTo
struct ALobbyHUD_TestLobbyCamera_StartTransitionTo_Params
{
	int                                                ToIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyHUD.TestLobbyCamera_StartTransitionFromTo
struct ALobbyHUD_TestLobbyCamera_StartTransitionFromTo_Params
{
	int                                                FromIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ToIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyHUD.TestLobbyCamera_SpawnCharacters
struct ALobbyHUD_TestLobbyCamera_SpawnCharacters_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyHUD.TestLobbyCamera_Init
struct ALobbyHUD_TestLobbyCamera_Init_Params
{
};

// Function TslGame.LobbyHUD.TeleportCameraTo
struct ALobbyHUD_TeleportCameraTo_Params
{
	ELobbyCameraStates                                 InCameraState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyHUD.StopFadeInOutEffect
struct ALobbyHUD_StopFadeInOutEffect_Params
{
};

// Function TslGame.LobbyHUD.StopCameraTransition
struct ALobbyHUD_StopCameraTransition_Params
{
};

// Function TslGame.LobbyHUD.StartFadeInOutEffect
struct ALobbyHUD_StartFadeInOutEffect_Params
{
};

// Function TslGame.LobbyHUD.StartCameraTransitionTo
struct ALobbyHUD_StartCameraTransitionTo_Params
{
	ELobbyCameraStates                                 InToCameraState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyHUD.StartCameraTransitionFromTo
struct ALobbyHUD_StartCameraTransitionFromTo_Params
{
	ELobbyCameraStates                                 InFromCameraState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	ELobbyCameraStates                                 InToCameraState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyHUD.SetWidgetForBinding
struct ALobbyHUD_SetWidgetForBinding_Params
{
	int                                                ViewIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCoherentUIGTWidget*                         Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.LobbyHUD.SetLobbyCharacterHiddenInGame
struct ALobbyHUD_SetLobbyCharacterHiddenInGame_Params
{
	uint32_t                                           SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyHUD.RequestSystemMenu
struct ALobbyHUD_RequestSystemMenu_Params
{
};

// Function TslGame.LobbyHUD.OnReplaySummary
struct ALobbyHUD_OnReplaySummary_Params
{
	struct FTslReplaySummary                           ReplaySummary;                                            // (Parm)
};

// Function TslGame.LobbyHUD.OnReplayList
struct ALobbyHUD_OnReplayList_Params
{
};

// Function TslGame.LobbyHUD.OnDeleteOldReplays
struct ALobbyHUD_OnDeleteOldReplays_Params
{
	int                                                RemainedReplayNum;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyHUD.NotifyLobbySceneChanged
struct ALobbyHUD_NotifyLobbySceneChanged_Params
{
	bool                                               bIsCustomizationScene;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyHUD.NotifyLobbyCharacterCreated
struct ALobbyHUD_NotifyLobbyCharacterCreated_Params
{
	int                                                InSlotIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyHUD.LeaveCustomizationMenu
struct ALobbyHUD_LeaveCustomizationMenu_Params
{
	ELobbyCameraStates                                 InFromCameraState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	ELobbyCameraStates                                 InToCameraState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyHUD.IsCameraHasBlurEffect
struct ALobbyHUD_IsCameraHasBlurEffect_Params
{
	ELobbyCameraStates                                 InLobbyCameraState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyHUD.InitLobbyTransition
struct ALobbyHUD_InitLobbyTransition_Params
{
};

// Function TslGame.LobbyHUD.InitFadeInOutEffect
struct ALobbyHUD_InitFadeInOutEffect_Params
{
};

// Function TslGame.LobbyHUD.InitCameraTransition
struct ALobbyHUD_InitCameraTransition_Params
{
};

// Function TslGame.LobbyHUD.GetStartUrl
struct ALobbyHUD_GetStartUrl_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.LobbyHUD.GetLobbyCharacterNum
struct ALobbyHUD_GetLobbyCharacterNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyHUD.GetLobbyCharacter
struct ALobbyHUD_GetLobbyCharacter_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ALobbyCharacter*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyHUD.GetLobbyCameraState
struct ALobbyHUD_GetLobbyCameraState_Params
{
	ELobbyCameraStates                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyHUD.GetLobbyCamera
struct ALobbyHUD_GetLobbyCamera_Params
{
	ELobbyCameraStates                                 InLobbyCameraState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyHUD.GetCurveDuration
struct ALobbyHUD_GetCurveDuration_Params
{
	class UCurveFloat*                                 InCurve;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyHUD.EnterCustomizationMenu
struct ALobbyHUD_EnterCustomizationMenu_Params
{
	ELobbyCameraStates                                 InFromCameraState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	ELobbyCameraStates                                 InToCameraState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyHUD.DecideBlurChangingState
struct ALobbyHUD_DecideBlurChangingState_Params
{
	ELobbyCameraStates                                 InFromState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ELobbyCameraStates                                 InToState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ELobbyBlurChangingStates                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyHUD.ClearAllWidget
struct ALobbyHUD_ClearAllWidget_Params
{
};

// Function TslGame.LobbyHUD.CacheSubLevelNames
struct ALobbyHUD_CacheSubLevelNames_Params
{
};

// Function TslGame.LobbyHUD.CachePostProcessEffectFromLevel
struct ALobbyHUD_CachePostProcessEffectFromLevel_Params
{
};

// Function TslGame.LobbyHUD.CacheMainCameraFromLevel
struct ALobbyHUD_CacheMainCameraFromLevel_Params
{
};

// Function TslGame.LobbyHUD.CacheLobbyCharacterTransforms
struct ALobbyHUD_CacheLobbyCharacterTransforms_Params
{
};

// Function TslGame.LobbyHUD.CacheLobbyCamarasFromLevel
struct ALobbyHUD_CacheLobbyCamarasFromLevel_Params
{
};

// Function TslGame.LobbyHUD.AddLobbyCharacterAngle
struct ALobbyHUD_AddLobbyCharacterAngle_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleInDegree;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWelcomeBaseHUD.OnPressedPopupCommon
struct ATslWelcomeBaseHUD_OnPressedPopupCommon_Params
{
	EPopupButtonID                                     ButtonID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslEntryPlayerController.LoadReplay
struct ATslEntryPlayerController_LoadReplay_Params
{
	struct FString                                     SessionName;                                              // (Parm, ZeroConstructor)
};

// Function TslGame.TslEntryPlayerController.HandleLobbySystemMenu
struct ATslEntryPlayerController_HandleLobbySystemMenu_Params
{
};

// Function TslGame.PerfBotPlayerController.ServerMoveToLocation
struct APerfBotPlayerController_ServerMoveToLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function TslGame.PerfBotPlayerController.ClientQuit
struct APerfBotPlayerController_ClientQuit_Params
{
};

// Function TslGame.CharacterBreathBuff.GetCharacter
struct ACharacterBreathBuff_GetCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.CharacterBreathBuff.GetBreathComponent
struct ACharacterBreathBuff_GetBreathComponent_Params
{
	class UCharacterBreathComponent*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslCharacterProxy.UpdateEquippedWeapons
struct ATslCharacterProxy_UpdateEquippedWeapons_Params
{
};

// Function TslGame.TslCharacterProxy.UpdateCharacterAppearance
struct ATslCharacterProxy_UpdateCharacterAppearance_Params
{
};

// Function TslGame.TslCharacterProxy.UpdateArmedWeapons
struct ATslCharacterProxy_UpdateArmedWeapons_Params
{
};

// Function TslGame.TslCharacterProxy.SetAccessorySlot
struct ATslCharacterProxy_SetAccessorySlot_Params
{
	class UTslAccessoryComponent*                      AccessoryComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EAccessorySlot                                     Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCharacterProxy.GetAccessorySlot
struct ATslCharacterProxy_GetAccessorySlot_Params
{
	EAccessorySlot                                     Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UTslAccessoryComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslCheatManager.ToggleVisibilityOfDestructibleComponents
struct UTslCheatManager_ToggleVisibilityOfDestructibleComponents_Params
{
};

// Function TslGame.TslCheatManager.ToggleMatchTimer
struct UTslCheatManager_ToggleMatchTimer_Params
{
};

// Function TslGame.TslCheatManager.ToggleII
struct UTslCheatManager_ToggleII_Params
{
	float                                              Interval;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCheatManager.ToggleFreeMode
struct UTslCheatManager_ToggleFreeMode_Params
{
};

// Function TslGame.TslCheatManager.ToggleCollisionOfDestructibleComponents
struct UTslCheatManager_ToggleCollisionOfDestructibleComponents_Params
{
};

// Function TslGame.TslCheatManager.TestVoiceAccessToken
struct UTslCheatManager_TestVoiceAccessToken_Params
{
};

// Function TslGame.TslCheatManager.SpawnBot
struct UTslCheatManager_SpawnBot_Params
{
};

// Function TslGame.TslCheatManager.SetVehicleRepRotCorrection
struct UTslCheatManager_SetVehicleRepRotCorrection_Params
{
	float                                              AngularDeltaThreshold;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngularInterpAlpha;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngularRecipFixTime;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCheatManager.SetVehicleRepPosCorrection
struct UTslCheatManager_SetVehicleRepPosCorrection_Params
{
	float                                              LinearDeltaThresholdSq;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LinearInterpAlpha;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LinearRecipFixTime;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BodySpeedThresholdSq;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCheatManager.SetSpectatorYawAndPitch
struct UTslCheatManager_SetSpectatorYawAndPitch_Params
{
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RevertSmoothSpeed;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCheatManager.SetClientConnectionTimeout
struct UTslCheatManager_SetClientConnectionTimeout_Params
{
	float                                              TimeoutSeconds;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCheatManager.SetBPFactor
struct UTslCheatManager_SetBPFactor_Params
{
	float                                              factor;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCheatManager.ReturnLookAt
struct UTslCheatManager_ReturnLookAt_Params
{
};

// Function TslGame.TslCheatManager.OnInteract
struct UTslCheatManager_OnInteract_Params
{
};

// Function TslGame.TslCheatManager.OnFullMapSequenceStop
struct UTslCheatManager_OnFullMapSequenceStop_Params
{
};

// Function TslGame.TslCheatManager.MoveVehicleOnClient
struct UTslCheatManager_MoveVehicleOnClient_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCheatManager.LookAt
struct UTslCheatManager_LookAt_Params
{
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Roll;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCheatManager.InsertCrashMeCommand
struct UTslCheatManager_InsertCrashMeCommand_Params
{
};

// Function TslGame.TslCheatManager.ForceMatchStart
struct UTslCheatManager_ForceMatchStart_Params
{
};

// Function TslGame.TslCheatManager.DumpVoiceDevices
struct UTslCheatManager_DumpVoiceDevices_Params
{
};

// Function TslGame.TslCheatManager.DumpReplicatedItems
struct UTslCheatManager_DumpReplicatedItems_Params
{
};

// Function TslGame.TslCheatManager.DumpDestructibleComponents
struct UTslCheatManager_DumpDestructibleComponents_Params
{
};

// Function TslGame.TslCheatManager.DrawVehicleCenterOfMass
struct UTslCheatManager_DrawVehicleCenterOfMass_Params
{
};

// Function TslGame.TslCheatManager.DelayCrash
struct UTslCheatManager_DelayCrash_Params
{
	float                                              DelaySeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCheatManager.CtrlShortCutOnOff
struct UTslCheatManager_CtrlShortCutOnOff_Params
{
	bool                                               OnOff;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCheatManager.CopyDebugInfoRotation
struct UTslCheatManager_CopyDebugInfoRotation_Params
{
};

// Function TslGame.TslCheatManager.CopyDebugInfoLocation
struct UTslCheatManager_CopyDebugInfoLocation_Params
{
};

// Function TslGame.TslCheatManager.CopyDebugInfo
struct UTslCheatManager_CopyDebugInfo_Params
{
};

// Function TslGame.TslCheatManager.Cheat
struct UTslCheatManager_Cheat_Params
{
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
};

// Function TslGame.TslCheatManager.ChangeTeam
struct UTslCheatManager_ChangeTeam_Params
{
	int                                                NewTeamNumber;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslCheatManager.ActivatePakOrderingMode
struct UTslCheatManager_ActivatePakOrderingMode_Params
{
};

// Function TslGame.TslCoherentWidget.GoBack
struct UTslCoherentWidget_GoBack_Params
{
};

// Function TslGame.TslDestructibleComponent.ClientReceiveComponentDamage
struct UTslDestructibleComponent_ClientReceiveComponentDamage_Params
{
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslDestructibleContainer.OnRep_Flag
struct ATslDestructibleContainer_OnRep_Flag_Params
{
};

// Function TslGame.TslDoor.OnRep_DoorOpened
struct ATslDoor_OnRep_DoorOpened_Params
{
};

// Function TslGame.TslDoor.OnRep_DoorBreakingState
struct ATslDoor_OnRep_DoorBreakingState_Params
{
};

// Function TslGame.TslDoor.OnInteractBy
struct ATslDoor_OnInteractBy_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslDoor.ClientTakeDamage
struct ATslDoor_ClientTakeDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         HitLocation;                                              // (ConstParm, Parm, ReferenceParm)
	float                                              DamageRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslExplosionEffect.OnParticleCollide
struct ATslExplosionEffect_OnParticleCollide_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParticleTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslExplosionReactionInterface.OnExplode
struct UTslExplosionReactionInterface_OnExplode_Params
{
	float                                              DamageAmout;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TArray<struct FHitResult>                          ComponentHits;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslFence.GetSplineComponent
struct ATslFence_GetSplineComponent_Params
{
	class USplineComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslReactionComponent.OnRep_PendingDestroy
struct UTslReactionComponent_OnRep_PendingDestroy_Params
{
	bool                                               PrevPendingDestroy;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslReactionComponent.Client_ReactByVehicle
struct UTslReactionComponent_Client_ReactByVehicle_Params
{
	struct FVector                                     Impact;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpulseDir;                                               // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslReactionComponent.Client_ReactByRadialDamage
struct UTslReactionComponent_Client_ReactByRadialDamage_Params
{
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Impact;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpulseDir;                                               // (ConstParm, Parm, IsPlainOldData)
	float                                              OuterRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslReactionComponent.Client_ReactByPointDamage
struct UTslReactionComponent_Client_ReactByPointDamage_Params
{
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Impact;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpulseDir;                                               // (ConstParm, Parm, IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.Up
struct UTslFocusableWidgetInterface_Up_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.SetFocus
struct UTslFocusableWidgetInterface_SetFocus_Params
{
	bool                                               NewFocus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.Right
struct UTslFocusableWidgetInterface_Right_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.Left
struct UTslFocusableWidgetInterface_Left_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.IsFocusable
struct UTslFocusableWidgetInterface_IsFocusable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.IsFocus
struct UTslFocusableWidgetInterface_IsFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.InputY
struct UTslFocusableWidgetInterface_InputY_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.InputX
struct UTslFocusableWidgetInterface_InputX_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.InputRT
struct UTslFocusableWidgetInterface_InputRT_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.InputRB
struct UTslFocusableWidgetInterface_InputRB_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.InputLT
struct UTslFocusableWidgetInterface_InputLT_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.InputLB
struct UTslFocusableWidgetInterface_InputLB_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.InputB
struct UTslFocusableWidgetInterface_InputB_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.InputA
struct UTslFocusableWidgetInterface_InputA_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.GetUpWidget
struct UTslFocusableWidgetInterface_GetUpWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.GetRightWidget
struct UTslFocusableWidgetInterface_GetRightWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.GetLeftWidget
struct UTslFocusableWidgetInterface_GetLeftWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.GetFocusingChildWidget
struct UTslFocusableWidgetInterface_GetFocusingChildWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.GetDownWidget
struct UTslFocusableWidgetInterface_GetDownWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.Down
struct UTslFocusableWidgetInterface_Down_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameMode.SendSystemMessageToAll
struct ATslGameMode_SendSystemMessageToAll_Params
{
	ESystemMessageType                                 MessageType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (Parm)
	float                                              MessageDuration;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameMode.NotifyRestrictingPlayAreaToAll
struct ATslGameMode_NotifyRestrictingPlayAreaToAll_Params
{
};

// Function TslGame.TslGameMode.NotifyNextGasInToAll
struct ATslGameMode_NotifyNextGasInToAll_Params
{
	struct FVector                                     PoisonGasWarningPosition;                                 // (Parm, IsPlainOldData)
	float                                              PoisonGasWarningRadius;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameMode.IsPreventFinishMatch
struct ATslGameMode_IsPreventFinishMatch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameMode.IsPlayInEditor
struct ATslGameMode_IsPlayInEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameMode.GetVivoxManager
struct ATslGameMode_GetVivoxManager_Params
{
	class UVivoxManager*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameMode.GetThingSpawnProcessor
struct ATslGameMode_GetThingSpawnProcessor_Params
{
	class UThingSpawnProcessor*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameMode.GetLobbyLink
struct ATslGameMode_GetLobbyLink_Params
{
	class ULobbyLink*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameMode.GetItemSpawnProcessor
struct ATslGameMode_GetItemSpawnProcessor_Params
{
	class UItemSpawnProcessor*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameMode.GetAllPawns
struct ATslGameMode_GetAllPawns_Params
{
	TArray<class APawn*>                               OutPawns;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function TslGame.TslGameMode.FinishMatch
struct ATslGameMode_FinishMatch_Params
{
};

// Function TslGame.TslGameMode.FindCharacterByPlayerState
struct ATslGameMode_FindCharacterByPlayerState_Params
{
	class APlayerState*                                State;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameMode.CanDealDamage
struct ATslGameMode_CanDealDamage_Params
{
	class ATslPlayerState*                             DamageInstigator;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ATslPlayerState*                             DamagedPlayer;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameMode.BroadcastGameModeEvent
struct ATslGameMode_BroadcastGameModeEvent_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Parameter;                                                // (Parm, ZeroConstructor)
};

// Function TslGame.TslGameMode.BenchmarkFinished
struct ATslGameMode_BenchmarkFinished_Params
{
};

// Function TslGame.TslGameOption.WheelAxisNameToWheelActionName
struct UTslGameOption_WheelAxisNameToWheelActionName_Params
{
	struct FTslInputKey                                Key;                                                      // (Parm)
	float                                              InAxisScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslGameOption.SetWorldMapZoomLevel
struct UTslGameOption_SetWorldMapZoomLevel_Params
{
	int                                                NewZoomLevel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetVSyncEnabled
struct UTslGameOption_SetVSyncEnabled_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetVoiceOutputVolume
struct UTslGameOption_SetVoiceOutputVolume_Params
{
	int                                                Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetVoiceOutputMute
struct UTslGameOption_SetVoiceOutputMute_Params
{
	bool                                               bIsMute;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetVoiceInputVolume
struct UTslGameOption_SetVoiceInputVolume_Params
{
	int                                                Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetVoiceInputMute
struct UTslGameOption_SetVoiceInputMute_Params
{
	bool                                               bIsMute;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetUseTeamVoice
struct UTslGameOption_SetUseTeamVoice_Params
{
	bool                                               bUse;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetUsePushToTalk
struct UTslGameOption_SetUsePushToTalk_Params
{
	bool                                               bUse;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetUseGlobalVoice
struct UTslGameOption_SetUseGlobalVoice_Params
{
	bool                                               bUse;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetUseCharacterCapture
struct UTslGameOption_SetUseCharacterCapture_Params
{
	bool                                               bUseCharacterCapture;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetUISoundVolume
struct UTslGameOption_SetUISoundVolume_Params
{
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetUISoundMute
struct UTslGameOption_SetUISoundMute_Params
{
	bool                                               bIsMute;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetTslInputMode
struct UTslGameOption_SetTslInputMode_Params
{
	EInputModeSettingActions                           eAction;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	ETslInputModes                                     eTslInputMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetTpsWeaponIconShowType
struct UTslGameOption_SetTpsWeaponIconShowType_Params
{
	EUiShowType                                        NewShowType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetSelectMinimapTypeIndex
struct UTslGameOption_SetSelectMinimapTypeIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetScreenScale
struct UTslGameOption_SetScreenScale_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetScreenResoultion
struct UTslGameOption_SetScreenResoultion_Params
{
	struct FScreenResolution                           ScreenResolution;                                         // (Parm)
};

// Function TslGame.TslGameOption.SetQualityLevel
struct UTslGameOption_SetQualityLevel_Params
{
	EQualityType                                       Quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                QualityLevel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetOverallScalabilityLevel
struct UTslGameOption_SetOverallScalabilityLevel_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetMouseSensitivity
struct UTslGameOption_SetMouseSensitivity_Params
{
	struct FName                                       InMouseSensitiveName;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InMouseSensitivity;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetMotionBlur
struct UTslGameOption_SetMotionBlur_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetMasterSoundVolume
struct UTslGameOption_SetMasterSoundVolume_Params
{
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetMasterSoundMute
struct UTslGameOption_SetMasterSoundMute_Params
{
	bool                                               bIsMute;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetInvertMouse
struct UTslGameOption_SetInvertMouse_Params
{
	bool                                               bInvert;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetInvertGamePadY
struct UTslGameOption_SetInvertGamePadY_Params
{
	bool                                               bInvert;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetInvertGamePadX
struct UTslGameOption_SetInvertGamePadX_Params
{
	bool                                               bInvert;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetInputKey_Internal
struct UTslGameOption_SetInputKey_Internal_Params
{
	TArray<struct FTslInputKey>                        OutKeyList;                                               // (Parm, OutParm, ZeroConstructor)
	struct FTslInputKey                                NewKey;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	EKeyBindingSlot                                    InKeyBindingSlot;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bGamepad;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetIconKillfeedEnabled
struct UTslGameOption_SetIconKillfeedEnabled_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetGamma
struct UTslGameOption_SetGamma_Params
{
	float                                              Gamma;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetGamePadSensitivity
struct UTslGameOption_SetGamePadSensitivity_Params
{
	struct FName                                       InGamePadSensitiveName;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InGamePadSensitivity;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetGamePadDeadZone
struct UTslGameOption_SetGamePadDeadZone_Params
{
	float                                              InGamePadDeadZone;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetFullScreen
struct UTslGameOption_SetFullScreen_Params
{
	TEnumAsByte<EWindowMode>                           InFullscreenMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetFpsWeaponSlotShow
struct UTslGameOption_SetFpsWeaponSlotShow_Params
{
	bool                                               bNewShow;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetFpsCameraFov
struct UTslGameOption_SetFpsCameraFov_Params
{
	float                                              NewFovValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetFppWeaponIconShowType
struct UTslGameOption_SetFppWeaponIconShowType_Params
{
	EUiShowType                                        NewShowType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetFppEquipableItemIconShowType
struct UTslGameOption_SetFppEquipableItemIconShowType_Params
{
	EUiShowType                                        NewShowType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetForceFeedbackEffectEnabled
struct UTslGameOption_SetForceFeedbackEffectEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetEquipableIteIconShow
struct UTslGameOption_SetEquipableIteIconShow_Params
{
	bool                                               bNewShow;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetEnablePreloadingMap
struct UTslGameOption_SetEnablePreloadingMap_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetEnableFunctionality
struct UTslGameOption_SetEnableFunctionality_Params
{
	EGameplayFunctionalities                           eAction;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetEnableClientReplay
struct UTslGameOption_SetEnableClientReplay_Params
{
	EGameplayClientReplay                              eAction;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetEffectSoundVolume
struct UTslGameOption_SetEffectSoundVolume_Params
{
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetEffectSoundMute
struct UTslGameOption_SetEffectSoundMute_Params
{
	bool                                               bIsMute;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetCurrentProvider
struct UTslGameOption_SetCurrentProvider_Params
{
	struct FString                                     ProviderName;                                             // (Parm, ZeroConstructor)
};

// Function TslGame.TslGameOption.SetCurrentCultureName
struct UTslGameOption_SetCurrentCultureName_Params
{
	struct FString                                     InCultureName;                                            // (Parm, ZeroConstructor)
};

// Function TslGame.TslGameOption.SetCurrentCrosshairColorString
struct UTslGameOption_SetCurrentCrosshairColorString_Params
{
	struct FString                                     CrosshairColorStr;                                        // (Parm, ZeroConstructor)
};

// Function TslGame.TslGameOption.SetCurrentColorBlindKeyByInt
struct UTslGameOption_SetCurrentColorBlindKeyByInt_Params
{
	int                                                ColorBlindKey;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetCurrentColorBlindKey
struct UTslGameOption_SetCurrentColorBlindKey_Params
{
	EColorBlindType                                    ColorBlindKey;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetBGMSoundVolume
struct UTslGameOption_SetBGMSoundVolume_Params
{
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetBGMSoundMute
struct UTslGameOption_SetBGMSoundMute_Params
{
	bool                                               bIsMute;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetAxisKeysToDefault
struct UTslGameOption_SetAxisKeysToDefault_Params
{
	struct FName                                       AxisName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetAxisKeys
struct UTslGameOption_SetAxisKeys_Params
{
	struct FName                                       AxisName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTslInputKey>                        NewKeys;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TslGame.TslGameOption.SetAxisKey
struct UTslGameOption_SetAxisKey_Params
{
	struct FName                                       AxisName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTslInputKey                                NewKey;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	EKeyBindingSlot                                    InKeyBindingSlot;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bGamepad;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetActionKeysToDefault
struct UTslGameOption_SetActionKeysToDefault_Params
{
	struct FName                                       ActionName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.SetActionKeys
struct UTslGameOption_SetActionKeys_Params
{
	struct FName                                       ActionName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FTslInputKey>                        NewKeys;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TslGame.TslGameOption.SetActionKey
struct UTslGameOption_SetActionKey_Params
{
	struct FName                                       ActionName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FTslInputKey                                NewKey;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	EKeyBindingSlot                                    InKeyBindingSlot;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bGamepad;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.NotDuplicateCategoryNames
struct UTslGameOption_NotDuplicateCategoryNames_Params
{
	struct FName                                       CatecoryName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameOption.IsVSyncEnabled
struct UTslGameOption_IsVSyncEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.IsVoiceOutputMute
struct UTslGameOption_IsVoiceOutputMute_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.IsVoiceInputMute
struct UTslGameOption_IsVoiceInputMute_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.IsUISoundMute
struct UTslGameOption_IsUISoundMute_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.IsMouseWheelInput
struct UTslGameOption_IsMouseWheelInput_Params
{
	struct FTslInputKey                                InInputedKey;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.IsModifierKey
struct UTslGameOption_IsModifierKey_Params
{
	struct FTslInputKey                                Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.IsMasterSoundMute
struct UTslGameOption_IsMasterSoundMute_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.IsKeyValid
struct UTslGameOption_IsKeyValid_Params
{
	struct FTslInputKey                                Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.IsKeyUsed
struct UTslGameOption_IsKeyUsed_Params
{
	struct FTslInputKey                                Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.IsInvertMouse
struct UTslGameOption_IsInvertMouse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.IsInvertGamePadY
struct UTslGameOption_IsInvertGamePadY_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.IsInvertGamePadX
struct UTslGameOption_IsInvertGamePadX_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.IsIconKillfeedEnabled
struct UTslGameOption_IsIconKillfeedEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.IsGamepadKey
struct UTslGameOption_IsGamepadKey_Params
{
	struct FTslInputKey                                Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.IsFunctionalityEnabled
struct UTslGameOption_IsFunctionalityEnabled_Params
{
	EGameplayFunctionalities                           eAction;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.IsForceFeedbackEffectEnabled
struct UTslGameOption_IsForceFeedbackEffectEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.IsEnabledPreloadingMap
struct UTslGameOption_IsEnabledPreloadingMap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.IsEnabledMotionBlur
struct UTslGameOption_IsEnabledMotionBlur_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.IsEffectSoundMute
struct UTslGameOption_IsEffectSoundMute_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.IsDoubleTapSupported
struct UTslGameOption_IsDoubleTapSupported_Params
{
	EInputModeSettingActions                           eAction;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.IsDefaultFunctionalityEnabled
struct UTslGameOption_IsDefaultFunctionalityEnabled_Params
{
	EGameplayFunctionalities                           eAction;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.IsDefaultClientReplayEnabled
struct UTslGameOption_IsDefaultClientReplayEnabled_Params
{
	EGameplayClientReplay                              eAction;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.IsClientReplayEnabled
struct UTslGameOption_IsClientReplayEnabled_Params
{
	EGameplayClientReplay                              eAction;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.IsBGMSoundMute
struct UTslGameOption_IsBGMSoundMute_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetWorldMapZoomSpeedLevel
struct UTslGameOption_GetWorldMapZoomSpeedLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetVoiceOutputVolume
struct UTslGameOption_GetVoiceOutputVolume_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetVoiceInputVolume
struct UTslGameOption_GetVoiceInputVolume_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetUseTeamVoice
struct UTslGameOption_GetUseTeamVoice_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetUsePushToTalk
struct UTslGameOption_GetUsePushToTalk_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetUseGlobalVoice
struct UTslGameOption_GetUseGlobalVoice_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetUseCharacterCapture
struct UTslGameOption_GetUseCharacterCapture_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetUISoundVolume
struct UTslGameOption_GetUISoundVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetTslInputMode
struct UTslGameOption_GetTslInputMode_Params
{
	EInputModeSettingActions                           eAction;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	ETslInputModes                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetTpsWeaponIconShowType
struct UTslGameOption_GetTpsWeaponIconShowType_Params
{
	EUiShowType                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetSupportedScreenResolutions
struct UTslGameOption_GetSupportedScreenResolutions_Params
{
	TArray<struct FScreenResolution>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameOption.GetSupportedQualityLevels
struct UTslGameOption_GetSupportedQualityLevels_Params
{
	TArray<struct FSurportQualityLevel>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameOption.GetSupportedKillcam
struct UTslGameOption_GetSupportedKillcam_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetSupportedFpsCameraFovRangeMin
struct UTslGameOption_GetSupportedFpsCameraFovRangeMin_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetSupportedFpsCameraFovRangeMax
struct UTslGameOption_GetSupportedFpsCameraFovRangeMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetSupportedClientReplay
struct UTslGameOption_GetSupportedClientReplay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetSelectMiniMapTypeIndex
struct UTslGameOption_GetSelectMiniMapTypeIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetScreenScale
struct UTslGameOption_GetScreenScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetScreenResolution
struct UTslGameOption_GetScreenResolution_Params
{
	struct FScreenResolution                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslGameOption.GetReplayOptionEditable
struct UTslGameOption_GetReplayOptionEditable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetQualityLevel
struct UTslGameOption_GetQualityLevel_Params
{
	EQualityType                                       Quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetOverallScalabilityLevel
struct UTslGameOption_GetOverallScalabilityLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetNativeName
struct UTslGameOption_GetNativeName_Params
{
	struct FString                                     InCultureName;                                            // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameOption.GetNativeLanguage
struct UTslGameOption_GetNativeLanguage_Params
{
	struct FString                                     InCultureName;                                            // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameOption.GetMouseSensitivity
struct UTslGameOption_GetMouseSensitivity_Params
{
	struct FName                                       InMouseSensitiveName;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetMiniMapTypes
struct UTslGameOption_GetMiniMapTypes_Params
{
	TArray<struct FUiType>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameOption.GetMasterSoundVolume
struct UTslGameOption_GetMasterSoundVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetKeyName
struct UTslGameOption_GetKeyName_Params
{
	struct FTslInputKey                                Key;                                                      // (Parm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslGameOption.GetKeyInputModeNames
struct UTslGameOption_GetKeyInputModeNames_Params
{
	TArray<struct FKeyInputModeName>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameOption.GetGamma
struct UTslGameOption_GetGamma_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetGamePadSensitivity
struct UTslGameOption_GetGamePadSensitivity_Params
{
	struct FName                                       InGamePadSensitiveName;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetGamePadDeadZone
struct UTslGameOption_GetGamePadDeadZone_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetFullscreenMode
struct UTslGameOption_GetFullscreenMode_Params
{
	TEnumAsByte<EWindowMode>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetFpsCameraFov
struct UTslGameOption_GetFpsCameraFov_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetFppWeaponIconShowType
struct UTslGameOption_GetFppWeaponIconShowType_Params
{
	EUiShowType                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetFppEquipableItemIconShowType
struct UTslGameOption_GetFppEquipableItemIconShowType_Params
{
	EUiShowType                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetEffectSoundVolume
struct UTslGameOption_GetEffectSoundVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetDefaultInputModeSetting
struct UTslGameOption_GetDefaultInputModeSetting_Params
{
	EInputModeSettingActions                           eAction;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	ETslInputModes                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetDefaultCultureName
struct UTslGameOption_GetDefaultCultureName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameOption.GetCurrentProvider
struct UTslGameOption_GetCurrentProvider_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameOption.GetCurrentCultureName
struct UTslGameOption_GetCurrentCultureName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameOption.GetCurrentCrosshairColorStr
struct UTslGameOption_GetCurrentCrosshairColorStr_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameOption.GetCurrentColorBlindKey
struct UTslGameOption_GetCurrentColorBlindKey_Params
{
	EColorBlindType                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetCrosshairColors
struct UTslGameOption_GetCrosshairColors_Params
{
	TArray<struct FPresetColor>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameOption.GetConvertedMouseSensitivity
struct UTslGameOption_GetConvertedMouseSensitivity_Params
{
	struct FName                                       InMouseSensitiveName;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetConvertedGamePadSensitivity
struct UTslGameOption_GetConvertedGamePadSensitivity_Params
{
	struct FName                                       InGamePadSensitiveName;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetColorBlindTypes
struct UTslGameOption_GetColorBlindTypes_Params
{
	TArray<struct FColorBlindType>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameOption.GetBGMSoundVolume
struct UTslGameOption_GetBGMSoundVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.GetAxisKeys
struct UTslGameOption_GetAxisKeys_Params
{
	struct FName                                       AxisName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDefault;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTslInputKey>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameOption.GetAxisKey
struct UTslGameOption_GetAxisKey_Params
{
	struct FName                                       AxisName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bGamepad;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDefault;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWantAnyKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EKeyBindingSlot                                    eKeySlot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTslInputKey                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslGameOption.GetAvailableProviderNames
struct UTslGameOption_GetAvailableProviderNames_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameOption.GetAvailableProviderDisplayNames
struct UTslGameOption_GetAvailableProviderDisplayNames_Params
{
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameOption.GetAutoQualityLevels
struct UTslGameOption_GetAutoQualityLevels_Params
{
	int                                                WorkScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CPUMultiplier;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GPUMultiplier;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FQualityLevelInfo>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameOption.GetActionKeys
struct UTslGameOption_GetActionKeys_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDefault;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTslInputKey>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameOption.GetActionKey
struct UTslGameOption_GetActionKey_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bGamepad;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDefault;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWantAnyKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EKeyBindingSlot                                    eKeySlot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTslInputKey                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslGameOption.DefaultGamePadInnerDeadZone
struct UTslGameOption_DefaultGamePadInnerDeadZone_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.CustomizableMouseSensitiveNames
struct UTslGameOption_CustomizableMouseSensitiveNames_Params
{
	TArray<struct FCustomizableMouseSensitiveName>     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameOption.CustomizableGamePadSensitiveNames
struct UTslGameOption_CustomizableGamePadSensitiveNames_Params
{
	TArray<struct FCustomizableGamePadSensitiveName>   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameOption.CustomizableCategoryData
struct UTslGameOption_CustomizableCategoryData_Params
{
	TArray<struct FTslGame_FCustomizableCategoryData>  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameOption.CustomizableAxisName
struct UTslGameOption_CustomizableAxisName_Params
{
	TArray<struct FTslGame_FCustomizableAxisName>      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameOption.CustomizableActionNames
struct UTslGameOption_CustomizableActionNames_Params
{
	TArray<struct FCustomizableActionName>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameOption.CultureNames
struct UTslGameOption_CultureNames_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslGameOption.CastTslInputModeFromName
struct UTslGameOption_CastTslInputModeFromName_Params
{
	struct FName                                       InputModeName;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	ETslInputModes                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameOption.ApplyMouseSensitivity
struct UTslGameOption_ApplyMouseSensitivity_Params
{
};

// Function TslGame.TslGameOption.ApplyGameUserSettings
struct UTslGameOption_ApplyGameUserSettings_Params
{
	bool                                               bCheckForCommandLineOverrides;                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOption.ApplyGamePadSensitivity
struct UTslGameOption_ApplyGamePadSensitivity_Params
{
};

// Function TslGame.TslGameOption.ApplyGamePadDeadZone
struct UTslGameOption_ApplyGamePadDeadZone_Params
{
};

// Function TslGame.TslGameOption.ApplyAutoQualitySetting
struct UTslGameOption_ApplyAutoQualitySetting_Params
{
};

// Function TslGame.TslGameState.UpdateWorldTimeSecondsDelta
struct ATslGameState_UpdateWorldTimeSecondsDelta_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameState.ShowPlayerStateList
struct ATslGameState_ShowPlayerStateList_Params
{
};

// Function TslGame.TslGameState.OnStartGasRelease
struct ATslGameState_OnStartGasRelease_Params
{
	bool                                               InbIsGasRelease;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameState.OnRep_NumAlivePlayers
struct ATslGameState_OnRep_NumAlivePlayers_Params
{
};

// Function TslGame.TslGameState.OnRep_MatchShortGuid
struct ATslGameState_OnRep_MatchShortGuid_Params
{
};

// Function TslGame.TslGameState.OnRep_MatchId
struct ATslGameState_OnRep_MatchId_Params
{
};

// Function TslGame.TslGameState.OnRep_GasRelease
struct ATslGameState_OnRep_GasRelease_Params
{
	bool                                               bLastIsGasRelease;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameState.IsMatchInProgressBP
struct ATslGameState_IsMatchInProgressBP_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGameState.GetLevelAttribute
struct ATslGameState_GetLevelAttribute_Params
{
	class ALevelAttribute*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslGlassWindowComponent.OnRep_ReplicatedOnClient
struct UTslGlassWindowComponent_OnRep_ReplicatedOnClient_Params
{
	bool                                               bLastReplicatedOnClient;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGlassWindowComponent.OnRep_Destroyed
struct UTslGlassWindowComponent_OnRep_Destroyed_Params
{
	bool                                               bLastDestroyed;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGlassWindowComponent.ClientNotifyHit
struct UTslGlassWindowComponent_ClientNotifyHit_Params
{
	bool                                               bBlockingHit;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         Location;                                                 // (ConstParm, Parm, ReferenceParm)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                             // (ConstParm, Parm, ReferenceParm)
};

// Function TslGame.TslGunAnimInstance.HandleFiremodeMontage
struct UTslGunAnimInstance_HandleFiremodeMontage_Params
{
	class UAnimMontage*                                FireModeMontage;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslHealthGaugeData.GetGaugeColor
struct UTslHealthGaugeData_GetGaugeColor_Params
{
	float                                              HealthPercent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslHornComponent.TickHorn
struct UTslHornComponent_TickHorn_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslHornComponent.ServerSetHorn
struct UTslHornComponent_ServerSetHorn_Params
{
	struct FHornPlayInfo                               InHornPlayInfo;                                           // (Parm, IsPlainOldData)
};

// Function TslGame.TslHornComponent.PlayInstantHorn
struct UTslHornComponent_PlayInstantHorn_Params
{
};

// Function TslGame.TslHornComponent.PlayHorn
struct UTslHornComponent_PlayHorn_Params
{
	bool                                               bIsLocalPlay;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EHornSoundType                                     InHornSoundType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslHornComponent.OnRep_SetHornPlayInfo
struct UTslHornComponent_OnRep_SetHornPlayInfo_Params
{
};

// Function TslGame.TslHornComponent.OnPostDriverLeave
struct UTslHornComponent_OnPostDriverLeave_Params
{
};

// Function TslGame.TslHornComponent.OnHornKeyUp
struct UTslHornComponent_OnHornKeyUp_Params
{
};

// Function TslGame.TslHornComponent.OnHornKeyDown
struct UTslHornComponent_OnHornKeyDown_Params
{
};

// Function TslGame.TslHornComponent.OnHornEnd
struct UTslHornComponent_OnHornEnd_Params
{
};

// Function TslGame.TslHornComponent.MulticastSetInstantHorn
struct UTslHornComponent_MulticastSetInstantHorn_Params
{
	struct FHornPlayInfo                               InHornPlayInfo;                                           // (Parm, IsPlainOldData)
};

// Function TslGame.TslInstancedGlassWindowComponent.OnRep_ReplicatedOnClient
struct UTslInstancedGlassWindowComponent_OnRep_ReplicatedOnClient_Params
{
	bool                                               bLastReplicatedOnClient;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslInstancedGlassWindowComponent.OnRep_PendingDestroy
struct UTslInstancedGlassWindowComponent_OnRep_PendingDestroy_Params
{
};

// Function TslGame.TslInstancedGlassWindowComponent.OnRep_Destroyed
struct UTslInstancedGlassWindowComponent_OnRep_Destroyed_Params
{
};

// Function TslGame.TslInstancedGlassWindowComponent.ClientNotifyHit
struct UTslInstancedGlassWindowComponent_ClientNotifyHit_Params
{
	bool                                               bBlockingHit;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         Location;                                                 // (ConstParm, Parm, ReferenceParm)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                             // (ConstParm, Parm, ReferenceParm)
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslInstancedReactionComponent.OnRep_PendingDestroy
struct UTslInstancedReactionComponent_OnRep_PendingDestroy_Params
{
};

// Function TslGame.TslInstancedReactionComponent.Client_ReactByVehicle
struct UTslInstancedReactionComponent_Client_ReactByVehicle_Params
{
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Impact;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpulseDir;                                               // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslInstancedReactionComponent.Client_ReactByRadialDamage
struct UTslInstancedReactionComponent_Client_ReactByRadialDamage_Params
{
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Impact;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpulseDir;                                               // (ConstParm, Parm, IsPlainOldData)
	float                                              OuterRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslInstancedReactionComponent.Client_ReactByPointDamage
struct UTslInstancedReactionComponent_Client_ReactByPointDamage_Params
{
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Impact;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpulseDir;                                               // (ConstParm, Parm, IsPlainOldData)
};

// Function TslGame.TslLevelScriptActor.RequestReplayALevelWeatherEvent
struct ATslLevelScriptActor_RequestReplayALevelWeatherEvent_Params
{
	struct FString                                     EventID;                                                  // (Parm, ZeroConstructor)
};

// Function TslGame.TslLevelScriptActor.RecordWeatherAsCustomEvent
struct ATslLevelScriptActor_RecordWeatherAsCustomEvent_Params
{
};

// Function TslGame.TslLevelScriptActor.OnRep_SelectedWeatherIndex
struct ATslLevelScriptActor_OnRep_SelectedWeatherIndex_Params
{
};

// Function TslGame.TslLevelScriptActor.EnumerateReplayLevelEvents
struct ATslLevelScriptActor_EnumerateReplayLevelEvents_Params
{
};

// Function TslGame.TslLobbyLevelScriptActor.LatentLoadCustomizationLevel
struct ATslLobbyLevelScriptActor_LatentLoadCustomizationLevel_Params
{
};

// Function TslGame.TslModularBuilding.PassSeparatedFloors
struct ATslModularBuilding_PassSeparatedFloors_Params
{
	TArray<class UChildActorComponent*>                Floors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TslGame.TslModularBuilding.GetMeshOnSapartedFloor
struct ATslModularBuilding_GetMeshOnSapartedFloor_Params
{
	int                                                SepartedFloor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Keyword;                                                  // (Parm, ZeroConstructor)
	TArray<class UStaticMeshComponent*>                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslModularBuilding.GetBuildingModuleFromTable
struct ATslModularBuilding_GetBuildingModuleFromTable_Params
{
	struct FString                                     Keyword;                                                  // (Parm, ZeroConstructor)
	TArray<class UStaticMeshComponent*>                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslModularBuilding.GetAttachmentsFromTable
struct ATslModularBuilding_GetAttachmentsFromTable_Params
{
	struct FString                                     Keyword;                                                  // (Parm, ZeroConstructor)
	TArray<class UStaticMeshComponent*>                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslModularBuilding.ClearBuildingModuleTable
struct ATslModularBuilding_ClearBuildingModuleTable_Params
{
};

// Function TslGame.TslModularBuilding.ClearAttachmentTable
struct ATslModularBuilding_ClearAttachmentTable_Params
{
};

// Function TslGame.TslModularBuilding.AddBuildingModuleToTable
struct ATslModularBuilding_AddBuildingModuleToTable_Params
{
	struct FString                                     Keyword;                                                  // (Parm, ZeroConstructor)
	class UStaticMeshComponent*                        Building;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslModularBuilding.AddAttachmentToTable
struct ATslModularBuilding_AddAttachmentToTable_Params
{
	struct FString                                     Keyword;                                                  // (Parm, ZeroConstructor)
	class UStaticMeshComponent*                        Attachment;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslParticle.SetParticleParameter
struct ATslParticle_SetParticleParameter_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableRTPC;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslParticle.OnParticleFinish
struct ATslParticle_OnParticleFinish_Params
{
	class UParticleSystemComponent*                    PSystem;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslParticle.OnParticleCollide
struct ATslParticle_OnParticleCollide_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParticleTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslParticle.OnParameterUpdated
struct ATslParticle_OnParameterUpdated_Params
{
};

// Function TslGame.TslParticle.GetParticleParamter
struct ATslParticle_GetParticleParamter_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	float                                              DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslParticle.GetEmitterGlobalSpawnRateScale
struct ATslParticle_GetEmitterGlobalSpawnRateScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslParticle.ForceSpawn
struct ATslParticle_ForceSpawn_Params
{
	int                                                emitterIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InLocation;                                               // (ConstParm, Parm, IsPlainOldData)
};

// Function TslGame.TslParticle.AttachToParent
struct ATslParticle_AttachToParent_Params
{
};

// Function TslGame.TslPawnInputBindingComponent.NotifyOwnerUnPossessed
struct UTslPawnInputBindingComponent_NotifyOwnerUnPossessed_Params
{
	class ATslPlayerController*                        InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPawnInputBindingComponent.NotifyOwnerPossessed
struct UTslPawnInputBindingComponent_NotifyOwnerPossessed_Params
{
	class ATslPlayerController*                        InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPawnInputBindingComponent.MoveVehicleNextSeat_Gamepad
struct UTslPawnInputBindingComponent_MoveVehicleNextSeat_Gamepad_Params
{
};

// Function TslGame.TslPawnInputBindingComponent.MoveVehicleDriverSeat_Gamepad
struct UTslPawnInputBindingComponent_MoveVehicleDriverSeat_Gamepad_Params
{
};

// Function TslGame.TslPlayerState.OnRep_Ranking
struct ATslPlayerState_OnRep_Ranking_Params
{
	int                                                OldRanking;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerState.OnRep_PlayerStatistics
struct ATslPlayerState_OnRep_PlayerStatistics_Params
{
	struct FTslPlayerStatistics                        OldPlayerStatistics;                                      // (Parm)
};

// Function TslGame.TslPlayerState.OnRep_LastHitTime
struct ATslPlayerState_OnRep_LastHitTime_Params
{
};

// Function TslGame.TslPlayerState.IsZombie
struct ATslPlayerState_IsZombie_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerState.IsQuitter
struct ATslPlayerState_IsQuitter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerState.IsObserver
struct ATslPlayerState_IsObserver_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerState.InformAboutKill
struct ATslPlayerState_InformAboutKill_Params
{
	EDamageReason                                      DamageReason;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerState.GetTotalScore
struct ATslPlayerState_GetTotalScore_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerState.GetTeamNum
struct ATslPlayerState_GetTeamNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerState.GetShortPlayerName
struct ATslPlayerState_GetShortPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslPlayerState.GetScoreByRanking
struct ATslPlayerState_GetScoreByRanking_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerState.GetScoreByKill
struct ATslPlayerState_GetScoreByKill_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerState.GetScoreByDamage
struct ATslPlayerState_GetScoreByDamage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerState.GetPlayerScores
struct ATslPlayerState_GetPlayerScores_Params
{
	struct FTslPlayerScores                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslPlayerState.GetPing
struct ATslPlayerState_GetPing_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerState.GetOwningTslPlayerController
struct ATslPlayerState_GetOwningTslPlayerController_Params
{
	class ATslPlayerController*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerState.GetObserverAuthorityType
struct ATslPlayerState_GetObserverAuthorityType_Params
{
	EObserverAuthorityType                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerState.GetKills
struct ATslPlayerState_GetKills_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPlayerState.ClientUpdateRankingOnlineEvent
struct ATslPlayerState_ClientUpdateRankingOnlineEvent_Params
{
	int                                                InRanking;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPlayerState.BroadcastDeath
struct ATslPlayerState_BroadcastDeath_Params
{
	class ATslPlayerState*                             KillerPlayerState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class ATslPlayerState*                             GroggyPlayerInstigator;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 KillerDamageType;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EDamageReason                                      DamageReason;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DamageCauserName;                                         // (ConstParm, Parm, ReferenceParm)
	class UClass*                                      DamageCauserClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AlivePlayerNum;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AliveTeamNum;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InbIsStealKilled;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPostProcessEffect.SetMaterialVectorParameter
struct ATslPostProcessEffect_SetMaterialVectorParameter_Params
{
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Value;                                                    // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPostProcessEffect.SetMaterialParameter
struct ATslPostProcessEffect_SetMaterialParameter_Params
{
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPostProcessEffect.SetMaterialBlendWeight
struct ATslPostProcessEffect_SetMaterialBlendWeight_Params
{
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPostProcessEffect.SetEffectParameter
struct ATslPostProcessEffect_SetEffectParameter_Params
{
	struct FString                                     ParameterName;                                            // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPostProcessEffect.SetDepthOfFieldFarBlurSize
struct ATslPostProcessEffect_SetDepthOfFieldFarBlurSize_Params
{
	float                                              NewBlurSize;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPostProcessEffect.OnSetEffectParameter
struct ATslPostProcessEffect_OnSetEffectParameter_Params
{
	struct FString                                     ParameterName;                                            // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslPostProcessEffect.GetEffectParameter
struct ATslPostProcessEffect_GetEffectParameter_Params
{
	struct FString                                     ParameterName;                                            // (Parm, ZeroConstructor)
	float                                              DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslPostProcessEffect.GetDepthOfFieldFarBlurSize
struct ATslPostProcessEffect_GetDepthOfFieldFarBlurSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Projectile.ServerFireProjectile
struct ATslWeapon_Projectile_ServerFireProjectile_Params
{
	struct FVector                                     Origin;                                                   // (Parm, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ShootDir;                                                 // (Parm)
};

// Function TslGame.TslWeapon_Throwable.ServerStartPinOff
struct ATslWeapon_Throwable_ServerStartPinOff_Params
{
};

// Function TslGame.TslWeapon_Throwable.ServerStartCooking
struct ATslWeapon_Throwable_ServerStartCooking_Params
{
};

// Function TslGame.TslWeapon_Throwable.ServerRequestCancelThrow
struct ATslWeapon_Throwable_ServerRequestCancelThrow_Params
{
};

// Function TslGame.TslWeapon_Throwable.ServerFireProjectile
struct ATslWeapon_Throwable_ServerFireProjectile_Params
{
	struct FVector                                     RelativeLocation;                                         // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     AimDirection;                                             // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Throwable.OnRep_ThrowableState
struct ATslWeapon_Throwable_OnRep_ThrowableState_Params
{
	EThrowableState                                    LastThrowableState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Throwable.OnAnimationNotify
struct ATslWeapon_Throwable_OnAnimationNotify_Params
{
	struct FName                                       NotifyName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Throwable.GetThrowableState
struct ATslWeapon_Throwable_GetThrowableState_Params
{
	EThrowableState                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Throwable.GetThrowableCountInInventory
struct ATslWeapon_Throwable_GetThrowableCountInInventory_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Throwable.GetThrowableCount
struct ATslWeapon_Throwable_GetThrowableCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Throwable.ClientNotifyReset
struct ATslWeapon_Throwable_ClientNotifyReset_Params
{
};

// Function TslGame.TslWeapon_Throwable.CalculateFinalThrowVelocity
struct ATslWeapon_Throwable_CalculateFinalThrowVelocity_Params
{
	struct FVector                                     AimDirection;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslProjectile.SetMeshRotationFromServer
struct ATslProjectile_SetMeshRotationFromServer_Params
{
};

// Function TslGame.TslProjectile.PropagateEffectActor_BP
struct ATslProjectile_PropagateEffectActor_BP_Params
{
};

// Function TslGame.TslProjectile.PropagateEffectActor
struct ATslProjectile_PropagateEffectActor_Params
{
};

// Function TslGame.TslProjectile.OnRep_Exploded
struct ATslProjectile_OnRep_Exploded_Params
{
};

// Function TslGame.TslProjectile.OnRep_ClientActivate
struct ATslProjectile_OnRep_ClientActivate_Params
{
};

// Function TslGame.TslProjectile.OnRep_ActiveParticle
struct ATslProjectile_OnRep_ActiveParticle_Params
{
};

// Function TslGame.TslProjectile.OnImpact
struct ATslProjectile_OnImpact_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslProjectile.OnHit
struct ATslProjectile_OnHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslProjectile.ExplodeBP
struct ATslProjectile_ExplodeBP_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult                                  Impact;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslProjectile.CheckVelocityForStart
struct ATslProjectile_CheckVelocityForStart_Params
{
};

// Function TslGame.TslProjectile_Flare.Server_SpawnCarePackageCustom
struct ATslProjectile_Flare_Server_SpawnCarePackageCustom_Params
{
	struct FVector                                     InLocation;                                               // (Parm, IsPlainOldData)
};

// Function TslGame.TslProjectile_Flare.ApplyBurn
struct ATslProjectile_Flare_ApplyBurn_Params
{
	struct FVector                                     InLocation;                                               // (Parm, IsPlainOldData)
};

// Function TslGame.TslReactionDoorComponent.OnRep_DoorBreakingState
struct UTslReactionDoorComponent_OnRep_DoorBreakingState_Params
{
};

// Function TslGame.TslReactionDoorComponent.ClientTakeDamage
struct UTslReactionDoorComponent_ClientTakeDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         HitLocation;                                              // (ConstParm, Parm, ReferenceParm)
	float                                              DamageRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslSceneCaptureComponent2D.CaptureScene
struct UTslSceneCaptureComponent2D_CaptureScene_Params
{
};

// Function TslGame.TslSceneCaptureWorld.InitWorld
struct UTslSceneCaptureWorld_InitWorld_Params
{
	class UGameInstance*                               GameInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SceneCapturePackageName;                                  // (Parm, ZeroConstructor)
};

// Function TslGame.TslSceneCaptureWorld.DestroyWorld
struct UTslSceneCaptureWorld_DestroyWorld_Params
{
};

// Function TslGame.TslServerParticle.StopParticleMulticast
struct ATslServerParticle_StopParticleMulticast_Params
{
};

// Function TslGame.TslServerParticle.OnParticleFinish
struct ATslServerParticle_OnParticleFinish_Params
{
	class UParticleSystemComponent*                    PSystem;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslSmokeParticleSystemComponent.ForceSpawn
struct UTslSmokeParticleSystemComponent_ForceSpawn_Params
{
	int                                                InEmitterIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InLocation;                                               // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     InVelocity;                                               // (ConstParm, Parm, IsPlainOldData)
};

// Function TslGame.TslSmokePropagationComponent.InitScan
struct UTslSmokePropagationComponent_InitScan_Params
{
};

// Function TslGame.TslSpectatorPawn.TickMonitoring
struct ATslSpectatorPawn_TickMonitoring_Params
{
};

// Function TslGame.TslSpectatorPawn.SetShowPlayerInfoDistance
struct ATslSpectatorPawn_SetShowPlayerInfoDistance_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.SetPlayerCamera
struct ATslSpectatorPawn_SetPlayerCamera_Params
{
	class AActor*                                      NewViewTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.SetObserverCameraMode
struct ATslSpectatorPawn_SetObserverCameraMode_Params
{
	EObserverCameraMode                                NewCameraMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NewViewTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.SetKillerOrVictimCamera
struct ATslSpectatorPawn_SetKillerOrVictimCamera_Params
{
	struct FString                                     strKillerID;                                              // (Parm, ZeroConstructor)
	struct FString                                     strKillerName;                                            // (Parm, ZeroConstructor)
	struct FString                                     strVictimID;                                              // (Parm, ZeroConstructor)
	struct FString                                     strVictimName;                                            // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.SetFreeCamBattleLocation
struct ATslSpectatorPawn_SetFreeCamBattleLocation_Params
{
	struct FVector                                     HitterLoc;                                                // (Parm, IsPlainOldData)
	struct FVector                                     AttackedLoc;                                              // (Parm, IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.RestoreTargetCharacter
struct ATslSpectatorPawn_RestoreTargetCharacter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.OnViewTargetUpdate
struct ATslSpectatorPawn_OnViewTargetUpdate_Params
{
	class AActor*                                      NewViewTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.OnToggleShowObseverTagWeapon
struct ATslSpectatorPawn_OnToggleShowObseverTagWeapon_Params
{
};

// Function TslGame.TslSpectatorPawn.OnToggleObseverTagWidget
struct ATslSpectatorPawn_OnToggleObseverTagWidget_Params
{
};

// Function TslGame.TslSpectatorPawn.OnSwitchCameraSpectator
struct ATslSpectatorPawn_OnSwitchCameraSpectator_Params
{
};

// Function TslGame.TslSpectatorPawn.OnSwitchCameraFollow
struct ATslSpectatorPawn_OnSwitchCameraFollow_Params
{
};

// Function TslGame.TslSpectatorPawn.OnStopSlowMove
struct ATslSpectatorPawn_OnStopSlowMove_Params
{
};

// Function TslGame.TslSpectatorPawn.OnStopFastMove
struct ATslSpectatorPawn_OnStopFastMove_Params
{
};

// Function TslGame.TslSpectatorPawn.OnStartSlowMove
struct ATslSpectatorPawn_OnStartSlowMove_Params
{
};

// Function TslGame.TslSpectatorPawn.OnStartFastMove
struct ATslSpectatorPawn_OnStartFastMove_Params
{
};

// Function TslGame.TslSpectatorPawn.OnSetLocation
struct ATslSpectatorPawn_OnSetLocation_Params
{
	unsigned char                                      idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.OnSetFree
struct ATslSpectatorPawn_OnSetFree_Params
{
};

// Function TslGame.TslSpectatorPawn.OnSetCharacterSpec
struct ATslSpectatorPawn_OnSetCharacterSpec_Params
{
	unsigned char                                      idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.OnSetCharacter
struct ATslSpectatorPawn_OnSetCharacter_Params
{
	unsigned char                                      idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.OnSaveLocation
struct ATslSpectatorPawn_OnSaveLocation_Params
{
	unsigned char                                      idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.OnSaveCharacter
struct ATslSpectatorPawn_OnSaveCharacter_Params
{
	unsigned char                                      idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.OnPlayerInfoDistanceUpHold
struct ATslSpectatorPawn_OnPlayerInfoDistanceUpHold_Params
{
};

// Function TslGame.TslSpectatorPawn.OnPlayerInfoDistanceUp
struct ATslSpectatorPawn_OnPlayerInfoDistanceUp_Params
{
};

// Function TslGame.TslSpectatorPawn.OnPlayerInfoDistanceDownHold
struct ATslSpectatorPawn_OnPlayerInfoDistanceDownHold_Params
{
};

// Function TslGame.TslSpectatorPawn.OnPlayerInfoDistanceDown
struct ATslSpectatorPawn_OnPlayerInfoDistanceDown_Params
{
};

// Function TslGame.TslSpectatorPawn.OnGotoTimelineDone
struct ATslSpectatorPawn_OnGotoTimelineDone_Params
{
};

// Function TslGame.TslSpectatorPawn.IsObserverTagWeaponShow
struct ATslSpectatorPawn_IsObserverTagWeaponShow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.HandleClipboard
struct ATslSpectatorPawn_HandleClipboard_Params
{
};

// Function TslGame.TslSpectatorPawn.GetSpectatableCharacter
struct ATslSpectatorPawn_GetSpectatableCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.GetSpectableCarePackageItem
struct ATslSpectatorPawn_GetSpectableCarePackageItem_Params
{
	class ACarePackageItem*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.GetShowPlayerInfoDistance
struct ATslSpectatorPawn_GetShowPlayerInfoDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.GetObserverTagShow
struct ATslSpectatorPawn_GetObserverTagShow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.GetLastSpectatedCharacter
struct ATslSpectatorPawn_GetLastSpectatedCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.GetCameraMode
struct ATslSpectatorPawn_GetCameraMode_Params
{
	EObserverCameraMode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.BackupTargetCharacter
struct ATslSpectatorPawn_BackupTargetCharacter_Params
{
	class AActor*                                      ViewTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslStatics.UseHighPrecisionMouseMovement
struct UTslStatics_UseHighPrecisionMouseMovement_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslStatics.UnloadTextureByPtr
struct UTslStatics_UnloadTextureByPtr_Params
{
	TAssetPtr<class UTexture>                          TexturePtr;                                               // (Parm)
};

// Function TslGame.TslStatics.SetWorldOriginByDistance
struct UTslStatics_SetWorldOriginByDistance_Params
{
	class APlayerController*                           Controller;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              XYDistanceToShift;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslStatics.SetWorldOrigin
struct UTslStatics_SetWorldOrigin_Params
{
	class APlayerController*                           Controller;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslStatics.SetReportUserInfo
struct UTslStatics_SetReportUserInfo_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	ESubjectToReport                                   Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FTslReportUserInfo                          UserInfo;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function TslGame.TslStatics.SetAnimationAkSwitch
struct UTslStatics_SetAnimationAkSwitch_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SwitchGroup;                                              // (Parm, ZeroConstructor)
	struct FString                                     SwitchState;                                              // (Parm, ZeroConstructor)
};

// Function TslGame.TslStatics.SetAnimationAkRTPC
struct UTslStatics_SetAnimationAkRTPC_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     RTPCName;                                                 // (Parm, ZeroConstructor)
	float                                              RTPCValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslStatics.ServerPositionToLocal
struct UTslStatics_ServerPositionToLocal_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Server;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.SafeDivide_IntInt
struct UTslStatics_SafeDivide_IntInt_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DivideByZeroValue;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.SafeDivide_FloatFloat
struct UTslStatics_SafeDivide_FloatFloat_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DivideByZeroValue;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.ReleaseMouseCaptureFromPlayerController
struct UTslStatics_ReleaseMouseCaptureFromPlayerController_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslStatics.ProjectPointToFloor
struct UTslStatics_ProjectPointToFloor_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bOutHit;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.ProjectPointsToHighFloor
struct UTslStatics_ProjectPointsToHighFloor_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bOutHit;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AroundLength;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RayLength;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.PredictProjectilePathBox
struct UTslStatics_PredictProjectilePathBox_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	TArray<struct FVector>                             OutPathPositions;                                         // (Parm, OutParm, ZeroConstructor)
	struct FVector                                     OutLastTraceDestination;                                  // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     StartPos;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     LaunchVelocity;                                           // (Parm, IsPlainOldData)
	bool                                               bTracePath;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ProjectileBox;                                            // (Parm, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DrawDebugTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SimFrequency;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxSimTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideGravityZ;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.PlayerStateToReportReportUserInfo
struct UTslStatics_PlayerStateToReportReportUserInfo_Params
{
	class ATslPlayerState*                             TslPlayerState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTslReportUserInfo                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslStatics.PhysicalSurfaceToString
struct UTslStatics_PhysicalSurfaceToString_Params
{
	TEnumAsByte<EPhysicalSurface>                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslStatics.PhysicalSurfaceToName
struct UTslStatics_PhysicalSurfaceToName_Params
{
	TEnumAsByte<EPhysicalSurface>                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.LocalPositionToServer
struct UTslStatics_LocalPositionToServer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Local;                                                    // (Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.LoadTextureByPtr
struct UTslStatics_LoadTextureByPtr_Params
{
	TAssetPtr<class UTexture>                          TexturePtr;                                               // (Parm)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.LineSphereIntersection
struct UTslStatics_LineSphereIntersection_Params
{
	struct FVector                                     Intersection1;                                            // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     Intersection2;                                            // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     Center;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Origion;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.IsUsingGappLobby
struct UTslStatics_IsUsingGappLobby_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.IsShipping
struct UTslStatics_IsShipping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.IsServerActor
struct UTslStatics_IsServerActor_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.IsReportUserValid
struct UTslStatics_IsReportUserValid_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	ESubjectToReport                                   Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.IsReportUserApplied
struct UTslStatics_IsReportUserApplied_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	ESubjectToReport                                   Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.IsPIE
struct UTslStatics_IsPIE_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.IsNextPlayzoneOnTheMap
struct UTslStatics_IsNextPlayzoneOnTheMap_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.IsMapFullyLoaded
struct UTslStatics_IsMapFullyLoaded_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.IsLastInputGamepad
struct UTslStatics_IsLastInputGamepad_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.IsKoreaRegion
struct UTslStatics_IsKoreaRegion_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.IsGamepadConnected
struct UTslStatics_IsGamepadConnected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.IsForKoreanRating
struct UTslStatics_IsForKoreanRating_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.IsForChineseLicensing
struct UTslStatics_IsForChineseLicensing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.IsESports
struct UTslStatics_IsESports_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.IsEditor
struct UTslStatics_IsEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.IsClientActor
struct UTslStatics_IsClientActor_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.GetWaterVolumeAtLocation
struct UTslStatics_GetWaterVolumeAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class APhysicsVolume*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.GetWaterSurfaceHeight
struct UTslStatics_GetWaterSurfaceHeight_Params
{
	class APhysicsVolume*                              PhysicsVolume;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurLocation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.GetVehicleSeatComponent
struct UTslStatics_GetVehicleSeatComponent_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTslVehicleSeatComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslStatics.GetVehicleCommonComponent
struct UTslStatics_GetVehicleCommonComponent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTslVehicleCommonComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslStatics.GetTslPlayerController
struct UTslStatics_GetTslPlayerController_Params
{
	class APawn*                                       Pawn;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ATslPlayerController*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.GetTslPlatformName
struct UTslStatics_GetTslPlatformName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslStatics.GetTslGameState
struct UTslStatics_GetTslGameState_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ATslGameState*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.GetTslCharacter
struct UTslStatics_GetTslCharacter_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.GetSimplePhysicalMaterial
struct UTslStatics_GetSimplePhysicalMaterial_Params
{
	class UPrimitiveComponent*                         PrimitiveComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPhysicalMaterial*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.GetServerLocation
struct UTslStatics_GetServerLocation_Params
{
	class UObject*                                     ActorOrComponent;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.GetReportUserInfo
struct UTslStatics_GetReportUserInfo_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	ESubjectToReport                                   Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FTslReportUserInfo                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslStatics.GetRecoilControlScale
struct UTslStatics_GetRecoilControlScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.GetRecoilAnimScale
struct UTslStatics_GetRecoilAnimScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.GetNextPlayzoneRadius
struct UTslStatics_GetNextPlayzoneRadius_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.GetNextPlayzonePosition
struct UTslStatics_GetNextPlayzonePosition_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.GetMOAScale
struct UTslStatics_GetMOAScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.GetGappLobbyUrl
struct UTslStatics_GetGappLobbyUrl_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslStatics.GetGameVersion
struct UTslStatics_GetGameVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslStatics.GetGamepadTabMaximumDelay
struct UTslStatics_GetGamepadTabMaximumDelay_Params
{
	class ATslPlayerController*                        TslPlayerController;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.GetFullGameVersion
struct UTslStatics_GetFullGameVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslStatics.GetConsoleValue
struct UTslStatics_GetConsoleValue_Params
{
	struct FString                                     ConsloeName;                                              // (Parm, ZeroConstructor)
	float                                              OutValueFloat;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutValueInt;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutValueString;                                           // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.GetBluezoneRadius
struct UTslStatics_GetBluezoneRadius_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.GetBluezonePosition
struct UTslStatics_GetBluezonePosition_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.GetBallisticDropScale
struct UTslStatics_GetBallisticDropScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.GetBallisticDragScale
struct UTslStatics_GetBallisticDragScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.ConeVolumeLineTraceSingle
struct UTslStatics_ConeVolumeLineTraceSingle_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutHitPoint;                                              // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              HalfConeAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RayLength;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.ConeVolumeLineTraceMulti
struct UTslStatics_ConeVolumeLineTraceMulti_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             OutHitPoints;                                             // (Parm, OutParm, ZeroConstructor)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                SamplingNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfConeAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RayLength;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.CanVehicleSeatInteraction
struct UTslStatics_CanVehicleSeatInteraction_Params
{
	class ATslCharacter*                               InTslCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.CanCancelCasting
struct UTslStatics_CanCancelCasting_Params
{
	class ATslCharacter*                               InTslCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.ApplyRadialDamageWithFalloff
struct UTslStatics_ApplyRadialDamageWithFalloff_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinimumDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              DamageInnerRadius;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageOuterRadius;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageFalloff;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FAttackId                                   AttackId;                                                 // (Parm)
	bool                                               bIsTargetDestructible;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedByController;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     DamagePreventionChannel;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bExplode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.ApplyRadialDamageWithCurve
struct UTslStatics_ApplyRadialDamageWithCurve_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              DamageRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DamageCurve;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FAttackId                                   AttackId;                                                 // (Parm)
	bool                                               bIsTargetDestructible;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedByController;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     DamagePreventionChannel;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bExplode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.ApplyRadialDamage
struct UTslStatics_ApplyRadialDamage_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              DamageRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FAttackId                                   AttackId;                                                 // (Parm)
	bool                                               bIsTargetDestructible;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedByController;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDoFullDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     DamagePreventionChannel;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bExplode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslStatics.ApplyDamage
struct UTslStatics_ApplyDamage_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAttackId                                   AttackId;                                                 // (Parm)
};

// Function TslGame.TslStreamer.OnOriginShiftedInternal
struct UTslStreamer_OnOriginShiftedInternal_Params
{
	class UWorld*                                      InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FIntVector                                  From;                                                     // (Parm, IsPlainOldData)
	struct FIntVector                                  To;                                                       // (Parm, IsPlainOldData)
};

// Function TslGame.TslStreamer.OnLevelChangedInternal
struct UTslStreamer_OnLevelChangedInternal_Params
{
};

// Function TslGame.TslThrowableTrajectoryViewComponent.AttachToThrowable
struct UTslThrowableTrajectoryViewComponent_AttachToThrowable_Params
{
	class ATslWeapon_Throwable*                        ThrowableIn;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslUserWidget.TransferUserFocusThroughReply
struct UTslUserWidget_TransferUserFocusThroughReply_Params
{
	struct FFocusEvent                                 AcceptedFocusEvent;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 Reply;                                                    // (Parm, OutParm, ReferenceParm)
	class UWidget*                                     FocusWidget;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bInAllUsers;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslUserWidget.StopListeningForAllInputAxises
struct UTslUserWidget_StopListeningForAllInputAxises_Params
{
};

// Function TslGame.TslUserWidget.NavigateUserFocus
struct UTslUserWidget_NavigateUserFocus_Params
{
	class ULocalPlayer*                                Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslUserWidget.ListenForInputAxis
struct UTslUserWidget_ListenForInputAxis_Params
{
	struct FName                                       AxisName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bConsume;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Callback;                                                 // (Parm, ZeroConstructor)
};

// Function TslGame.TslUserWidget.IsReplaying
struct UTslUserWidget_IsReplaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslUserWidget.GetRawKeyValue
struct UTslUserWidget_GetRawKeyValue_Params
{
	struct FKey                                        InKey;                                                    // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslUserWidget.GetDemoPlayerState
struct UTslUserWidget_GetDemoPlayerState_Params
{
	bool                                               IsForMatchResult;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class ATslPlayerState*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslUserWidget.GetCachedViewTargetTslCharacter
struct UTslUserWidget_GetCachedViewTargetTslCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslUserWidget.GetCachedGameState
struct UTslUserWidget_GetCachedGameState_Params
{
	class ATslGameState*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslUserWidget.GetCachedCharacter
struct UTslUserWidget_GetCachedCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslUserWidget.ContainUserFocus
struct UTslUserWidget_ContainUserFocus_Params
{
	class ULocalPlayer*                                Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslUserWidget.ContainOwnerUserFocus
struct UTslUserWidget_ContainOwnerUserFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslUserWidget.ClearUserFocus
struct UTslUserWidget_ClearUserFocus_Params
{
	class ULocalPlayer*                                Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.UmgBaseWidget.IsMouseOn
struct UUmgBaseWidget_IsMouseOn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UmgBaseWidget.HandleMainPrepass
struct UUmgBaseWidget_HandleMainPrepass_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslXboxTeamManageWidget.ToggleVoiceChat
struct UTslXboxTeamManageWidget_ToggleVoiceChat_Params
{
	int                                                MemberNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslXboxTeamManageWidget.TeamMemberMuteChanged
struct UTslXboxTeamManageWidget_TeamMemberMuteChanged_Params
{
	struct FString                                     PlayerId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     ChannelId;                                                // (Parm, ZeroConstructor)
	bool                                               bIsMuted;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslXboxTeamManageWidget.ShowGamerCard
struct UTslXboxTeamManageWidget_ShowGamerCard_Params
{
	int                                                MemberNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslXboxTeamManageWidget.GetTeamManageInfoWidgetBySlot
struct UTslXboxTeamManageWidget_GetTeamManageInfoWidgetBySlot_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTslXboxTeamManageInfoWidget*                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslXboxTeamManageWidget.GetTeamManageInfoWidgetByMemberNum
struct UTslXboxTeamManageWidget_GetTeamManageInfoWidgetByMemberNum_Params
{
	int                                                MemberNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTslXboxTeamManageInfoWidget*                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.BluezoneGpsBaseWidget.UpdateBluezoneGpsWidget
struct UBluezoneGpsBaseWidget_UpdateBluezoneGpsWidget_Params
{
};

// Function TslGame.BluezoneGpsBaseWidget.OnNotifyNextGasIn
struct UBluezoneGpsBaseWidget_OnNotifyNextGasIn_Params
{
	struct FVector                                     PoisonGasWarningPosition;                                 // (Parm, IsPlainOldData)
	float                                              PoisonGasWarningRadius;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.EquipableItemIconBaseWidget.OnNoBagSpaceEvent
struct UEquipableItemIconBaseWidget_OnNoBagSpaceEvent_Params
{
};

// Function TslGame.HudMainBaseWidget.OnInit_Widget
struct UHudMainBaseWidget_OnInit_Widget_Params
{
	class ATslBaseHUD*                                 TslBaseHUD;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.HudMainBaseWidget.OnInit_Replay
struct UHudMainBaseWidget_OnInit_Replay_Params
{
	class ATslBaseHUD*                                 TslBaseHUD;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.HudMainBaseWidget.OnInit_Input
struct UHudMainBaseWidget_OnInit_Input_Params
{
	class ATslBaseHUD*                                 TslBaseHUD;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.HudMainBaseWidget.OnInit_Delegate
struct UHudMainBaseWidget_OnInit_Delegate_Params
{
	class ATslBaseHUD*                                 TslBaseHUD;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.InteractionBaseWidget.OnNotifyInteractionItemChanged
struct UInteractionBaseWidget_OnNotifyInteractionItemChanged_Params
{
	bool                                               bIsInteractEnable;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.KillCountBaseWidget.GetLastKillCount
struct UKillCountBaseWidget_GetLastKillCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LifeGaugeBaseWidget.OnNotifyHit
struct ULifeGaugeBaseWidget_OnNotifyHit_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EDamageTypeCategory                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LifeGaugeBaseWidget.OnNotifyHeal
struct ULifeGaugeBaseWidget_OnNotifyHeal_Params
{
	float                                              StartHealth;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GoalHealth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxHealth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LifeGaugeTemplateBaseWidget.Update
struct ULifeGaugeTemplateBaseWidget_Update_Params
{
	float                                              Life;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxLife;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsGroggy;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HealAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableEffect;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LifeGaugeTemplateBaseWidget.OnDestoryHealEffect
struct ULifeGaugeTemplateBaseWidget_OnDestoryHealEffect_Params
{
	class ULifeGaugeEffectBaseWidget*                  HealEffect;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.LifeGaugeTemplateBaseWidget.OnDestoryDamageEffect
struct ULifeGaugeTemplateBaseWidget_OnDestoryDamageEffect_Params
{
	class ULifeGaugeEffectBaseWidget*                  DamageEffect;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.MapCarePackageItemIconBaseWidget.OnButtonDown
struct UMapCarePackageItemIconBaseWidget_OnButtonDown_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.MapCharacterIconBaseWidget.OnButtonDown
struct UMapCharacterIconBaseWidget_OnButtonDown_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.MapGridWidget.UpdateZoomAndWidgetSize
struct UMapGridWidget_UpdateZoomAndWidgetSize_Params
{
	float                                              Zoom;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   WidgetSize;                                               // (Parm, IsPlainOldData)
};

// Function TslGame.MapGridWidget.UpdateWidgetSize_UC
struct UMapGridWidget_UpdateWidgetSize_UC_Params
{
	struct FVector2D                                   WidgetSize;                                               // (Parm, IsPlainOldData)
};

// Function TslGame.MapGridWidget.UpdateReplicatedCharacterList
struct UMapGridWidget_UpdateReplicatedCharacterList_Params
{
};

// Function TslGame.MapGridWidget.UpdateReplicatedCarePackageItemList
struct UMapGridWidget_UpdateReplicatedCarePackageItemList_Params
{
};

// Function TslGame.MapGridWidget.UpdateRectangleViewByWidgetSize
struct UMapGridWidget_UpdateRectangleViewByWidgetSize_Params
{
	struct FVector2D                                   WidgetSize;                                               // (Parm, IsPlainOldData)
};

// Function TslGame.MapGridWidget.UpdateRectangleView
struct UMapGridWidget_UpdateRectangleView_Params
{
};

// Function TslGame.MapGridWidget.UCtoMC
struct UMapGridWidget_UCtoMC_Params
{
	struct FVector2D                                   UC;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.MapGridWidget.SetZoomLevel
struct UMapGridWidget_SetZoomLevel_Params
{
	float                                              NewZoomLevel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.MapGridWidget.SetImageBrush
struct UMapGridWidget_SetImageBrush_Params
{
	class UMaterialInstanceDynamic*                    NewMatInst;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.MapGridWidget.SetCharacterIconPositionAndRotation_UC
struct UMapGridWidget_SetCharacterIconPositionAndRotation_UC_Params
{
	struct FVector2D                                   Pos_UC;                                                   // (Parm, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.MapGridWidget.SetCenter_MC
struct UMapGridWidget_SetCenter_MC_Params
{
	struct FVector2D                                   Center;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.MapGridWidget.OnMapIconClicked
struct UMapGridWidget_OnMapIconClicked_Params
{
	class UMapCharacterIconBaseWidget*                 MapIconWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.MapGridWidget.OnMapCarePackageItemIconClicked
struct UMapGridWidget_OnMapCarePackageItemIconClicked_Params
{
	class UMapCarePackageItemIconBaseWidget*           MapIconWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.MapGridWidget.OnGotoTimelineDone
struct UMapGridWidget_OnGotoTimelineDone_Params
{
};

// Function TslGame.MapGridWidget.MCtoUC
struct UMapGridWidget_MCtoUC_Params
{
	struct FVector2D                                   MapCoord;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.MapGridWidget.IsMouseInMarker
struct UMapGridWidget_IsMouseInMarker_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.MapGridWidget.GetZoomLevel
struct UMapGridWidget_GetZoomLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.MapGridWidget.GetWidgetSize
struct UMapGridWidget_GetWidgetSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.MapGridWidget.GetWidgetPosition
struct UMapGridWidget_GetWidgetPosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.MapGridWidget.GetScreenOffset
struct UMapGridWidget_GetScreenOffset_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.MapGridWidget.GetMapImageWigetSizeAndImageOffset
struct UMapGridWidget_GetMapImageWigetSizeAndImageOffset_Params
{
	struct FVector2D                                   WidgetSize;                                               // (Parm, OutParm, IsPlainOldData)
	struct FVector2D                                   ImageOffset;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function TslGame.MapGridWidget.GetLocalMousePosition
struct UMapGridWidget_GetLocalMousePosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.MapGridWidget.GetCharacterGridVertical
struct UMapGridWidget_GetCharacterGridVertical_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.MapGridWidget.GetCharacterGridTextHorizental
struct UMapGridWidget_GetCharacterGridTextHorizental_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.MapGridWidget.GetAlignment
struct UMapGridWidget_GetAlignment_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.MapGridWidget.DrawRedZone_UC
struct UMapGridWidget_DrawRedZone_UC_Params
{
	struct FVector2D                                   Center_UC;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Radius_UC;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.MapGridWidget.DrawMarker_UC
struct UMapGridWidget_DrawMarker_UC_Params
{
	struct FVector2D                                   MarkerCenter_UC;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.MapGridWidget.CursorUCtoCenterMC
struct UMapGridWidget_CursorUCtoCenterMC_Params
{
	struct FVector2D                                   UC;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   Offest_MC;                                                // (Parm, OutParm, IsPlainOldData)
	bool                                               bUpdate;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.MapGridWidget.ClampPositionByWidgetSize_UC
struct UMapGridWidget_ClampPositionByWidgetSize_UC_Params
{
	struct FVector2D                                   Positon;                                                  // (Parm, IsPlainOldData)
	struct FVector2D                                   WidgetSize;                                               // (Parm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.MapGridWidget.ClampPosition_UC
struct UMapGridWidget_ClampPosition_UC_Params
{
	struct FVector2D                                   Positon;                                                  // (Parm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.MapGridWidget.AddCenter_UC
struct UMapGridWidget_AddCenter_UC_Params
{
	struct FVector2D                                   Offset_UC;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TeamMarkWidget.InitializeTeamMarkGrid
struct UTeamMarkWidget_InitializeTeamMarkGrid_Params
{
};

// Function TslGame.TeamOverallKillCountBaseWidget.GetLastTeamOverallKillCount
struct UTeamOverallKillCountBaseWidget_GetLastTeamOverallKillCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslAdaptiveCrosshairWidget.SetShowCrosshairWidget
struct UTslAdaptiveCrosshairWidget_SetShowCrosshairWidget_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslAdaptiveCrosshairWidget.SetCenterCrosshairVisibility
struct UTslAdaptiveCrosshairWidget_SetCenterCrosshairVisibility_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslAdaptiveCrosshairWidget.SetCenterCrosshairDeviation
struct UTslAdaptiveCrosshairWidget_SetCenterCrosshairDeviation_Params
{
	float                                              InDeviation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslAdaptiveCrosshairWidget.SetCenterCrosshairClass
struct UTslAdaptiveCrosshairWidget_SetCenterCrosshairClass_Params
{
	EWeaponClass                                       InWeaponClass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasWeapon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslAdaptiveCrosshairWidget.SetAdaptiveCrosshairVisibility
struct UTslAdaptiveCrosshairWidget_SetAdaptiveCrosshairVisibility_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslAdaptiveCrosshairWidget.SetAdaptiveCrosshairPosition
struct UTslAdaptiveCrosshairWidget_SetAdaptiveCrosshairPosition_Params
{
	struct FVector2D                                   ScreenPosition;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslAdaptiveCrosshairWidget.HandleGameUserSettingApplied
struct UTslAdaptiveCrosshairWidget_HandleGameUserSettingApplied_Params
{
};

// Function TslGame.TslAdaptiveCrosshairWidget.DecideAdaptiveCrosshairColor
struct UTslAdaptiveCrosshairWidget_DecideAdaptiveCrosshairColor_Params
{
};

// Function TslGame.TslBaseOptionWidget.OnReset
struct UTslBaseOptionWidget_OnReset_Params
{
};

// Function TslGame.TslBaseOptionWidget.OnDefault
struct UTslBaseOptionWidget_OnDefault_Params
{
};

// Function TslGame.TslBaseOptionWidget.OnApply
struct UTslBaseOptionWidget_OnApply_Params
{
};

// Function TslGame.TslBaseOptionWidget.IsKeyUp
struct UTslBaseOptionWidget_IsKeyUp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslBaseOptionWidget.IsEnableApply
struct UTslBaseOptionWidget_IsEnableApply_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslBaseOptionWidget.IsChanged
struct UTslBaseOptionWidget_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslKeyDisplayWidget.TransferInputEvent
struct UTslKeyDisplayWidget_TransferInputEvent_Params
{
	struct FTslInputKey                                TslInputKey;                                              // (Parm)
};

// Function TslGame.TslKeyDisplayWidget.SetupKeyDisplayWidget
struct UTslKeyDisplayWidget_SetupKeyDisplayWidget_Params
{
	struct FName                                       InInputName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FText                                       InDisplayName;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       InCategoryName;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               InbAxisInput;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InAxisScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InbGamepad;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslKeyDisplayWidget.InitializeKeyDisplayWidget
struct UTslKeyDisplayWidget_InitializeKeyDisplayWidget_Params
{
	bool                                               bDefault;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslKeyDisplayWidget.ApplyKey
struct UTslKeyDisplayWidget_ApplyKey_Params
{
};

// Function TslGame.TslKeyOptionWidget.OnKeyChanged
struct UTslKeyOptionWidget_OnKeyChanged_Params
{
	class UTslKeyDisplayWidget*                        InKeyDisplayWidget;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTslInputKey                                InInputedKey;                                             // (Parm)
};

// Function TslGame.TslKeyOptionWidget.InitializeKeyAndMouseSetting
struct UTslKeyOptionWidget_InitializeKeyAndMouseSetting_Params
{
};

// Function TslGame.TslKeySettingWidget.TransferInputEvent
struct UTslKeySettingWidget_TransferInputEvent_Params
{
	class UTslKeyDisplayWidget*                        KeyDisplayWidget;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTslInputKey                                TslInputKey;                                              // (Parm)
};

// Function TslGame.TslKeySettingWidget.StartupKeySettingWidget
struct UTslKeySettingWidget_StartupKeySettingWidget_Params
{
	struct FName                                       InCategoryName;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FText                                       InDisplayText;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function TslGame.TslKeySettingWidget.SetToDefault
struct UTslKeySettingWidget_SetToDefault_Params
{
};

// Function TslGame.TslKeySettingWidget.InitializeKeySettingWidget
struct UTslKeySettingWidget_InitializeKeySettingWidget_Params
{
};

// Function TslGame.TslBreatheBarWidget.OnStartBuff
struct UTslBreatheBarWidget_OnStartBuff_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStart;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslBuffIconListWidget.UpdateRunBuffIconVisibility
struct UTslBuffIconListWidget_UpdateRunBuffIconVisibility_Params
{
	float                                              InBoostPercentage;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslBuffIconListWidget.UpdateRunBuffIcon
struct UTslBuffIconListWidget_UpdateRunBuffIcon_Params
{
	float                                              InBoostPercentage;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslBuffIconListWidget.UpdateHealBuffIconVisibility
struct UTslBuffIconListWidget_UpdateHealBuffIconVisibility_Params
{
	float                                              InBoostPercentage;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslBuffIconListWidget.UpdateHealBuffIcon
struct UTslBuffIconListWidget_UpdateHealBuffIcon_Params
{
	float                                              InBoostPercentage;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslBuffIconListWidget.GetRunBuffIconOpacity
struct UTslBuffIconListWidget_GetRunBuffIconOpacity_Params
{
	float                                              InBoostPercentage;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslBuffIconListWidget.GetHealBuffIconOpacity
struct UTslBuffIconListWidget_GetHealBuffIconOpacity_Params
{
	float                                              InBoostPercentage;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslCastableItemIconWidget.GetCastableItemCount
struct UTslCastableItemIconWidget_GetCastableItemCount_Params
{
	ECastableItemType                                  InItemType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslConfirmationDialogWidget.OnButtonClick
struct UTslConfirmationDialogWidget_OnButtonClick_Params
{
	EPopupButtonID                                     ButtonID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslHealItemSelectorWidget.OnTapAction
struct UTslHealItemSelectorWidget_OnTapAction_Params
{
};

// Function TslGame.TslHealItemSelectorWidget.OnHoldAction
struct UTslHealItemSelectorWidget_OnHoldAction_Params
{
};

// Function TslGame.TslHealItemSelectorWidget.OnHideWidget
struct UTslHealItemSelectorWidget_OnHideWidget_Params
{
};

// Function TslGame.TslHealItemSelectorWidget.NotifyHealItemSelectorInput
struct UTslHealItemSelectorWidget_NotifyHealItemSelectorInput_Params
{
	bool                                               bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslInventoryCapacityWidget.GetInventoryCached
struct UTslInventoryCapacityWidget_GetInventoryCached_Params
{
	class AInventory*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslInventoryCapacityWidget.GetFeedbackParamsFromVicinityItem
struct UTslInventoryCapacityWidget_GetFeedbackParamsFromVicinityItem_Params
{
	float                                              CurrMaxSpace;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrSpace;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ItemSpace;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutFeedbackStart;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutFeedbackEnd;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsPositive;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslInventoryCapacityWidget.GetFeedbackParamsFromVicinityEquipment
struct UTslInventoryCapacityWidget_GetFeedbackParamsFromVicinityEquipment_Params
{
	float                                              CurrMaxSpace;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrSpace;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UEquipableItem*                              EquipableItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutFeedbackStart;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutFeedbackEnd;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsPositive;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslInventoryCapacityWidget.GetFeedbackParamsFromInventoryItem
struct UTslInventoryCapacityWidget_GetFeedbackParamsFromInventoryItem_Params
{
	float                                              CurrMaxSpace;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrSpace;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ItemSpace;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutFeedbackStart;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutFeedbackEnd;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsPositive;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslInventoryCapacityWidget.GetFeedbackParamsFromEquipmentSlot
struct UTslInventoryCapacityWidget_GetFeedbackParamsFromEquipmentSlot_Params
{
	float                                              CurrMaxSpace;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrSpace;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UEquipableItem*                              EquipableItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutFeedbackStart;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutFeedbackEnd;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsPositive;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslInventoryCapacityWidget.GetCapacityParams
struct UTslInventoryCapacityWidget_GetCapacityParams_Params
{
	float                                              CurrMaxSpace;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrSpace;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutCurrMaxSpaceStart;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutCurrSpaceStart;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslKeyGuideWidget.ShowKeyGuideWidget
struct UTslKeyGuideWidget_ShowKeyGuideWidget_Params
{
	EKeyGuideShowCases                                 eShowCase;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslKeyGuideWidget.HideKeyGuideWidget
struct UTslKeyGuideWidget_HideKeyGuideWidget_Params
{
};

// Function TslGame.TslKeyReceiverWidget.UpdateKeyUp
struct UTslKeyReceiverWidget_UpdateKeyUp_Params
{
	struct FKey                                        InKey;                                                    // (Parm)
};

// Function TslGame.TslKeyReceiverWidget.UpdateKeyDown
struct UTslKeyReceiverWidget_UpdateKeyDown_Params
{
	struct FKey                                        InKey;                                                    // (Parm)
};

// Function TslGame.TslKeyReceiverWidget.KeyUp
struct UTslKeyReceiverWidget_KeyUp_Params
{
	struct FKey                                        InKey;                                                    // (Parm)
};

// Function TslGame.TslKeyReceiverWidget.KeyDown
struct UTslKeyReceiverWidget_KeyDown_Params
{
	struct FKey                                        InKey;                                                    // (Parm)
};

// Function TslGame.TslKeyReceiverWidget.IsInputKeyDown
struct UTslKeyReceiverWidget_IsInputKeyDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslKeyReceiverWidget.GetLastDownedKeyName
struct UTslKeyReceiverWidget_GetLastDownedKeyName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslKillMessageListWidget.UpdateMessageListWidget
struct UTslKillMessageListWidget_UpdateMessageListWidget_Params
{
};

// Function TslGame.TslKillMessageListWidget.OnVanishAnimationFinished
struct UTslKillMessageListWidget_OnVanishAnimationFinished_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslKillMessageListWidget.EnqueueDeathMessage
struct UTslKillMessageListWidget_EnqueueDeathMessage_Params
{
	struct FDeathMessage                               DeathMessage;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function TslGame.TslKillMessageListWidget.DequeueDeathMessage
struct UTslKillMessageListWidget_DequeueDeathMessage_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslKillMessageWidget.SetVanishTimer
struct UTslKillMessageWidget_SetVanishTimer_Params
{
	float                                              TimeDelay;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslKillMessageWidget.SetDeathMessage
struct UTslKillMessageWidget_SetDeathMessage_Params
{
	struct FDeathMessage                               InDeathMessage;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function TslGame.TslKillMessageWidget.PlayVanishAnimation
struct UTslKillMessageWidget_PlayVanishAnimation_Params
{
};

// Function TslGame.TslKillMessageWidget.GetTextureFromDamageTypeCategory
struct UTslKillMessageWidget_GetTextureFromDamageTypeCategory_Params
{
	EDamageTypeCategory                                InDamageTypeCategory;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    OutTexture;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutRatio;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslKillMessageWidget.GetTextureFromConditionOfDeathCategory
struct UTslKillMessageWidget_GetTextureFromConditionOfDeathCategory_Params
{
	EConditionOfDeath                                  InConditionOfDeathCategory;                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    OutTexture;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutRatio;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslLobbyNameTagWidget.UpdateWidgetsVisibilities
struct UTslLobbyNameTagWidget_UpdateWidgetsVisibilities_Params
{
};

// Function TslGame.TslLobbyNameTagWidget.SetSpeaking
struct UTslLobbyNameTagWidget_SetSpeaking_Params
{
	bool                                               InbSpeaking;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslLobbyNameTagWidget.SetReady
struct UTslLobbyNameTagWidget_SetReady_Params
{
	bool                                               InbReady;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslLobbyNameTagWidget.SetNickName
struct UTslLobbyNameTagWidget_SetNickName_Params
{
	struct FString                                     InNickName;                                               // (Parm, ZeroConstructor)
};

// Function TslGame.TslLobbyNameTagWidget.SetHost
struct UTslLobbyNameTagWidget_SetHost_Params
{
	bool                                               InbHost;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslLobbyNameTagWidget.SetBinding
struct UTslLobbyNameTagWidget_SetBinding_Params
{
};

// Function TslGame.TslLobbyNameTagWidget.OnVoiceChatUpdated
struct UTslLobbyNameTagWidget_OnVoiceChatUpdated_Params
{
	struct FString                                     InUniqueId;                                               // (Parm, ZeroConstructor)
	bool                                               InbTeamChannel;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InbSpeaking;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InEnergy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslLobbyNameTagWidget.IsAlone
struct UTslLobbyNameTagWidget_IsAlone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslLobbyNameTagWidget.InitWidget
struct UTslLobbyNameTagWidget_InitWidget_Params
{
	struct FString                                     InNickName;                                               // (Parm, ZeroConstructor)
};

// Function TslGame.TslTeamInfoWidget.UpdateVoiceImage
struct UTslTeamInfoWidget_UpdateVoiceImage_Params
{
};

// Function TslGame.TslTeamInfoWidget.UpdateVivoxChat
struct UTslTeamInfoWidget_UpdateVivoxChat_Params
{
	struct FString                                     UniqueId;                                                 // (Parm, ZeroConstructor)
	bool                                               bIsTeamChannel;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InbSpeaking;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InMeterEnergy;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslTeamInfoWidget.UpdateTeamMemberName
struct UTslTeamInfoWidget_UpdateTeamMemberName_Params
{
};

// Function TslGame.TslTeamInfoWidget.UpdateTeamMemberIcon
struct UTslTeamInfoWidget_UpdateTeamMemberIcon_Params
{
};

// Function TslGame.TslTeamInfoWidget.UpdateTeamMemberColor
struct UTslTeamInfoWidget_UpdateTeamMemberColor_Params
{
};

// Function TslGame.TslTeamInfoWidget.UpdateTeamMarkerBorder
struct UTslTeamInfoWidget_UpdateTeamMarkerBorder_Params
{
};

// Function TslGame.TslTeamInfoWidget.UpdateTeamMarker
struct UTslTeamInfoWidget_UpdateTeamMarker_Params
{
};

// Function TslGame.TslTeamInfoWidget.UpdateTeamInfoIcon
struct UTslTeamInfoWidget_UpdateTeamInfoIcon_Params
{
};

// Function TslGame.TslTeamInfoWidget.UpdateTeamInfoArea
struct UTslTeamInfoWidget_UpdateTeamInfoArea_Params
{
};

// Function TslGame.TslTeamInfoWidget.UpdatePlayerIcon
struct UTslTeamInfoWidget_UpdatePlayerIcon_Params
{
};

// Function TslGame.TslTeamInfoWidget.UpdateHealthGaugeAndVisibility
struct UTslTeamInfoWidget_UpdateHealthGaugeAndVisibility_Params
{
};

// Function TslGame.TslTeamInfoWidget.UpdateBoostGauge
struct UTslTeamInfoWidget_UpdateBoostGauge_Params
{
};

// Function TslGame.TslTeamInfoWidget.SetTeam
struct UTslTeamInfoWidget_SetTeam_Params
{
	class ATeam*                                       InTeam;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslTeamInfoWidget.OnVoiceChat
struct UTslTeamInfoWidget_OnVoiceChat_Params
{
	bool                                               InbSpeaking;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InMeterEnergy;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslTeamInfoWidget.OnParticipantRestrictionChanged
struct UTslTeamInfoWidget_OnParticipantRestrictionChanged_Params
{
	class ATeam*                                       Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UniqueId;                                                 // (Parm, ZeroConstructor)
	bool                                               bIsRestricted;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslTeamInfoWidget.OnParticipantMuteChanged
struct UTslTeamInfoWidget_OnParticipantMuteChanged_Params
{
	class ATeam*                                       Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ParticipantId;                                            // (Parm, ZeroConstructor)
	struct FString                                     ChannelId;                                                // (Parm, ZeroConstructor)
	bool                                               bIsMuted;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslTeamInfoWidget.OnNativeParticipantRestrictionChanged
struct UTslTeamInfoWidget_OnNativeParticipantRestrictionChanged_Params
{
	struct FString                                     UniqueId;                                                 // (Parm, ZeroConstructor)
	bool                                               bIsRestricted;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslTeamInfoWidget.OnNativeParticipantMuteChanged
struct UTslTeamInfoWidget_OnNativeParticipantMuteChanged_Params
{
	struct FString                                     ParticipantId;                                            // (Parm, ZeroConstructor)
	struct FString                                     ChannelId;                                                // (Parm, ZeroConstructor)
	bool                                               bIsMuted;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslTeamInfoWidget.DecideTeamNameColor
struct UTslTeamInfoWidget_DecideTeamNameColor_Params
{
};

// Function TslGame.TslTeamInfoWidget.BindVoiceChatIfNeed
struct UTslTeamInfoWidget_BindVoiceChatIfNeed_Params
{
};

// Function TslGame.TslXboxTeamManageInfoWidget.UpdateVoiceIcon
struct UTslXboxTeamManageInfoWidget_UpdateVoiceIcon_Params
{
	bool                                               InbVoiceMute;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslXboxTeamManageInfoWidget.UpdateUserNameText
struct UTslXboxTeamManageInfoWidget_UpdateUserNameText_Params
{
	struct FName                                       InUserName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.WeaponSlotHudBaseWidget.OnNotifyWeaponUnarm
struct UWeaponSlotHudBaseWidget_OnNotifyWeaponUnarm_Params
{
	bool                                               bIsUnarmed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.WeaponSlotHudBaseWidget.OnNotifyWeaponChange
struct UWeaponSlotHudBaseWidget_OnNotifyWeaponChange_Params
{
	int                                                WeaponIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.WeaponSlotHudBaseWidget.OnNotifyWeaponArmed
struct UWeaponSlotHudBaseWidget_OnNotifyWeaponArmed_Params
{
};

// Function TslGame.WeaponSlotHudBaseWidget.OnMovingStarted
struct UWeaponSlotHudBaseWidget_OnMovingStarted_Params
{
};

// Function TslGame.WeaponSlotHudBaseWidget.OnMovingFinished
struct UWeaponSlotHudBaseWidget_OnMovingFinished_Params
{
};

// Function TslGame.TslVehicleCommonComponent.SetVehicleHealth
struct UTslVehicleCommonComponent_SetVehicleHealth_Params
{
	float                                              NewHealth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.SetVehicleFuelPercent
struct UTslVehicleCommonComponent_SetVehicleFuelPercent_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.SetVehicleFuel
struct UTslVehicleCommonComponent_SetVehicleFuel_Params
{
	float                                              NewFuel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.Repair
struct UTslVehicleCommonComponent_Repair_Params
{
};

// Function TslGame.TslVehicleCommonComponent.OnRep_Health
struct UTslVehicleCommonComponent_OnRep_Health_Params
{
	float                                              LastHealth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.OnRep_Fuel
struct UTslVehicleCommonComponent_OnRep_Fuel_Params
{
	float                                              LastFuel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.OnRep_Dying
struct UTslVehicleCommonComponent_OnRep_Dying_Params
{
};

// Function TslGame.TslVehicleCommonComponent.OnRep_Broken
struct UTslVehicleCommonComponent_OnRep_Broken_Params
{
};

// Function TslGame.TslVehicleCommonComponent.IsDying
struct UTslVehicleCommonComponent_IsDying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.IsBroken
struct UTslVehicleCommonComponent_IsBroken_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.GetVehicleUI
struct UTslVehicleCommonComponent_GetVehicleUI_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.GetVehicleHealthPercent
struct UTslVehicleCommonComponent_GetVehicleHealthPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.GetVehicleHealth
struct UTslVehicleCommonComponent_GetVehicleHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.GetVehicleFuelPercent
struct UTslVehicleCommonComponent_GetVehicleFuelPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.GetVehicleFuel
struct UTslVehicleCommonComponent_GetVehicleFuel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.GetVehicleBaseHealth
struct UTslVehicleCommonComponent_GetVehicleBaseHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.GetVehicleBaseFuel
struct UTslVehicleCommonComponent_GetVehicleBaseFuel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.CanIgnoreCharacterDamage
struct UTslVehicleCommonComponent_CanIgnoreCharacterDamage_Params
{
	EDamageTypeCategory                                DamageTypeCategory;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.Break
struct UTslVehicleCommonComponent_Break_Params
{
};

// Function TslGame.TslVehicleCommonComponent.AddVehicleFuel
struct UTslVehicleCommonComponent_AddVehicleFuel_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslVehicleEffectComponent.SetVehicleMaterialsToDestroyed
struct UTslVehicleEffectComponent_SetVehicleMaterialsToDestroyed_Params
{
};

// Function TslGame.TslVehicleEffectComponent.SetEngineSoundRTPC
struct UTslVehicleEffectComponent_SetEngineSoundRTPC_Params
{
	struct FString                                     RTPC;                                                     // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslVehicleEffectComponent.OnHit
struct UTslVehicleEffectComponent_OnHit_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslVehicleEffectComponent.OnHealthChange
struct UTslVehicleEffectComponent_OnHealthChange_Params
{
	float                                              CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LastHealth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HealthMax;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDying;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslVehicleEffectComponent.OnDestroyedImpactEffect
struct UTslVehicleEffectComponent_OnDestroyedImpactEffect_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslVehicleEffectComponent.OnDeath
struct UTslVehicleEffectComponent_OnDeath_Params
{
	float                                              KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class ATslPlayerState*                             PlayerInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslVehicleEffectComponent.GetEngineSoundComponent
struct UTslVehicleEffectComponent_GetEngineSoundComponent_Params
{
	class UAkComponent*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslVehicleEffectComponent.ApplyDestoyedMaterialWithDelay
struct UTslVehicleEffectComponent_ApplyDestoyedMaterialWithDelay_Params
{
};

// Function TslGame.TslVehicleHitComponent.OnSyncHit
struct UTslVehicleHitComponent_OnSyncHit_Params
{
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslVehicleHitComponent.OnHit
struct UTslVehicleHitComponent_OnHit_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslVehicleHitComponent.OnDeath
struct UTslVehicleHitComponent_OnDeath_Params
{
	float                                              KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class ATslPlayerState*                             PlayerInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslVehicleReactionInterface.OnImpactedByVehicle
struct UTslVehicleReactionInterface_OnImpactedByVehicle_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslVehicleSeatComponent.TryToStabilize
struct UTslVehicleSeatComponent_TryToStabilize_Params
{
};

// Function TslGame.TslVehicleSeatComponent.TryToRide
struct UTslVehicleSeatComponent_TryToRide_Params
{
	class ATslCharacter*                               Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslVehicleSeatComponent.TryToLeave
struct UTslVehicleSeatComponent_TryToLeave_Params
{
	class ATslCharacter*                               Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslVehicleSeatComponent.TryToFlip
struct UTslVehicleSeatComponent_TryToFlip_Params
{
};

// Function TslGame.TslVehicleSeatComponent.Ride
struct UTslVehicleSeatComponent_Ride_Params
{
	class ATslCharacter*                               Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslVehicleSeatComponent.PostDriverRide
struct UTslVehicleSeatComponent_PostDriverRide_Params
{
};

// Function TslGame.TslVehicleSeatComponent.PostDriverLeave
struct UTslVehicleSeatComponent_PostDriverLeave_Params
{
};

// Function TslGame.TslVehicleSeatComponent.OnFuelChange
struct UTslVehicleSeatComponent_OnFuelChange_Params
{
	float                                              CurrentFuel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LastFuel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FuelMax;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslVehicleSeatComponent.Leave
struct UTslVehicleSeatComponent_Leave_Params
{
	class ATslCharacter*                               Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslVehicleSeatComponent.KillAllRiders
struct UTslVehicleSeatComponent_KillAllRiders_Params
{
	float                                              KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class ATslPlayerState*                             PlayerInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslVehicleSeatComponent.GetVehicleSeatIndex
struct UTslVehicleSeatComponent_GetVehicleSeatIndex_Params
{
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslVehicleSeatComponent.GetSeats
struct UTslVehicleSeatComponent_GetSeats_Params
{
	TArray<class UVehicleSeatInteractionComponent*>    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslVehicleSeatComponent.GetSeat
struct UTslVehicleSeatComponent_GetSeat_Params
{
	int                                                SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslVehicleSeatComponent.GetRiders
struct UTslVehicleSeatComponent_GetRiders_Params
{
	TArray<class ATslCharacter*>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslVehicleSeatComponent.GetLastDriver
struct UTslVehicleSeatComponent_GetLastDriver_Params
{
	float                                              LastDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslVehicleSeatComponent.GetDriver
struct UTslVehicleSeatComponent_GetDriver_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslVehicleSyncComponent.SendServerMoveToClient
struct UTslVehicleSyncComponent_SendServerMoveToClient_Params
{
	int                                                InCorrectionId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      ServerLocation;                                           // (Parm)
	struct FVector_NetQuantize100                      ServerLinearVelocity;                                     // (Parm)
	struct FVector_NetQuantizeNormal                   ServerRotator;                                            // (Parm)
	struct FVector_NetQuantize100                      ServerAngularVelocity;                                    // (Parm)
	bool                                               bIsSnap;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslVehicleSyncComponent.SendClientMoveToServerUnreliably
struct UTslVehicleSyncComponent_SendClientMoveToServerUnreliably_Params
{
	int                                                InCorrectionId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      ClientLocation;                                           // (Parm)
	struct FVector_NetQuantize100                      ClientLinearVelocity;                                     // (Parm)
	struct FVector_NetQuantizeNormal                   ClientRotator;                                            // (Parm)
	struct FVector_NetQuantize100                      ClientAngularVelocity;                                    // (Parm)
};

// Function TslGame.TslVehicleSyncComponent.SendClientMoveToServerReliably
struct UTslVehicleSyncComponent_SendClientMoveToServerReliably_Params
{
	int                                                InCorrectionId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      ClientLocation;                                           // (Parm)
	struct FVector_NetQuantize100                      ClientLinearVelocity;                                     // (Parm)
	struct FVector_NetQuantizeNormal                   ClientRotator;                                            // (Parm)
	struct FVector_NetQuantize100                      ClientAngularVelocity;                                    // (Parm)
};

// Function TslGame.TslVehicleSyncComponent.SendClientHitToServerUnreliably
struct UTslVehicleSyncComponent_SendClientHitToServerUnreliably_Params
{
	int                                                InCorrectionId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      ClientLocation;                                           // (Parm)
	struct FVector_NetQuantize100                      ClientLinearVelocity;                                     // (Parm)
	struct FVector_NetQuantizeNormal                   ClientRotator;                                            // (Parm)
	struct FVector_NetQuantize100                      ClientAngularVelocity;                                    // (Parm)
	struct FVector_NetQuantize100                      NormalImpulse;                                            // (Parm)
	struct FHitResult                                  Hit;                                                      // (Parm, IsPlainOldData)
};

// Function TslGame.TslVehicleSyncComponent.SendClientHitToServerReliably
struct UTslVehicleSyncComponent_SendClientHitToServerReliably_Params
{
	int                                                InCorrectionId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      ClientLocation;                                           // (Parm)
	struct FVector_NetQuantize100                      ClientLinearVelocity;                                     // (Parm)
	struct FVector_NetQuantizeNormal                   ClientRotator;                                            // (Parm)
	struct FVector_NetQuantize100                      ClientAngularVelocity;                                    // (Parm)
	struct FVector_NetQuantize100                      NormalImpulse;                                            // (Parm)
	struct FHitResult                                  Hit;                                                      // (Parm, IsPlainOldData)
};

// Function TslGame.TslVehicleSyncComponent.OnHitAtServer
struct UTslVehicleSyncComponent_OnHitAtServer_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslVehicleSyncComponent.OnHitAtClient
struct UTslVehicleSyncComponent_OnHitAtClient_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslVehicleSyncComponent.OnDriverRide
struct UTslVehicleSyncComponent_OnDriverRide_Params
{
};

// Function TslGame.TslViewTargetTempComponent.AddTempComponentWithDelegate
struct UTslViewTargetTempComponent_AddTempComponentWithDelegate_Params
{
	class USceneComponent*                             TempComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             DelegateToCall;                                           // (Parm, ZeroConstructor)
};

// Function TslGame.TslViewTargetTempComponent.AddTempComponent
struct UTslViewTargetTempComponent_AddTempComponent_Params
{
	class USceneComponent*                             TempComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun_Projectile.SimulateFire_BP
struct ATslWeapon_Gun_Projectile_SimulateFire_BP_Params
{
};

// Function TslGame.TslWeapon_Trajectory.SimulateUnderwaterTrail
struct ATslWeapon_Trajectory_SimulateUnderwaterTrail_Params
{
	struct FVector                                     SurfaceImpactPoint;                                       // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ShootDirection;                                           // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	float                                              TravelDistance;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.SimulateUnderwaterHit
struct ATslWeapon_Trajectory_SimulateUnderwaterHit_Params
{
	struct FVector                                     UnderwaterImpactPoint;                                    // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ShootOrigin;                                              // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.SimulateHit_UnReliable
struct ATslWeapon_Trajectory_SimulateHit_UnReliable_Params
{
	struct FHitResult                                  Impact;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     RelLocation;                                              // (ConstParm, Parm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.SimulateHit_Reliable
struct ATslWeapon_Trajectory_SimulateHit_Reliable_Params
{
	struct FHitResult                                  Impact;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     RelLocation;                                              // (ConstParm, Parm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.Simulate_CreateAmmoInstance
struct ATslWeapon_Trajectory_Simulate_CreateAmmoInstance_Params
{
	struct FVector                                     ServerStartTrace;                                         // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Dir;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FAttackId                                   AttackId;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function TslGame.TslWeapon_Trajectory.ServerWallCheckTest
struct ATslWeapon_Trajectory_ServerWallCheckTest_Params
{
	struct FVector                                     TraceStart;                                               // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.ServerNotifyHit
struct ATslWeapon_Trajectory_ServerNotifyHit_Params
{
	struct FVector                                     ClientImpactLocation;                                     // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     RelativeImpact;                                           // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	float                                              HandOffsetValue;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Impact;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	TArray<uint32_t>                                   Checksums;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	struct FVector_NetQuantize                         Origin;                                                   // (ConstParm, Parm, ReferenceParm)
	struct FVector                                     TraceStart;                                               // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     PreLocation;                                              // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ShootDir;                                                 // (Parm)
	float                                              TravelDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAttackId                                   AttackId;                                                 // (Parm)
	uint32_t                                           HitSeq;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelLocation;                                              // (ConstParm, Parm, IsPlainOldData)
	float                                              SpeedLoss;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.ServerNotifyCrack
struct ATslWeapon_Trajectory_ServerNotifyCrack_Params
{
	class ATslCharacter*                               TargetCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         LocationRelative;                                         // (Parm)
	float                                              BulletVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.ServerNotifyAmmoSpawned
struct ATslWeapon_Trajectory_ServerNotifyAmmoSpawned_Params
{
	struct FVector                                     ServerStartTrace;                                         // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Dir;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FAttackId                                   AttackId;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function TslGame.TslWeapon_Trajectory.ServerChecksumTest
struct ATslWeapon_Trajectory_ServerChecksumTest_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	TArray<uint32_t>                                   ClientChecksums;                                          // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function TslGame.TslWeapon_Trajectory.OnRep_WeaponSpread
struct ATslWeapon_Trajectory_OnRep_WeaponSpread_Params
{
	float                                              LastWeaponSpread;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.IsBulletInAir
struct ATslWeapon_Trajectory_IsBulletInAir_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetTrajectoryConfig
struct ATslWeapon_Trajectory_GetTrajectoryConfig_Params
{
	struct FTrajectoryWeaponData                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslWeapon_Trajectory.GetRecoilInfo
struct ATslWeapon_Trajectory_GetRecoilInfo_Params
{
	struct FRecoilInfo                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslWeapon_Trajectory.GetCurrentStabilityVar
struct ATslWeapon_Trajectory_GetCurrentStabilityVar_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetCurrentReoveryTarget
struct ATslWeapon_Trajectory_GetCurrentReoveryTarget_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetCurrentRecoilValue
struct ATslWeapon_Trajectory_GetCurrentRecoilValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetCurrentRecoilTarget
struct ATslWeapon_Trajectory_GetCurrentRecoilTarget_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetBulletRotation
struct ATslWeapon_Trajectory_GetBulletRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetBulletLocation
struct ATslWeapon_Trajectory_GetBulletLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.ClientWallCheckFail
struct ATslWeapon_Trajectory_ClientWallCheckFail_Params
{
	struct FVector                                     TraceStart;                                               // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Impact;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Melee.ServerNotifyHit
struct ATslWeapon_Melee_ServerNotifyHit_Params
{
	TArray<float>                                      AimSpeeds;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                          Impacts;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	struct FAttackId                                   AttackId;                                                 // (Parm)
	uint32_t                                           HitSeq;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Melee.ServerAttack
struct ATslWeapon_Melee_ServerAttack_Params
{
	int                                                AnimIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Melee.OnMontageEnded
struct ATslWeapon_Melee_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Melee.OnAnimationNotify
struct ATslWeapon_Melee_OnAnimationNotify_Params
{
	struct FName                                       NotifyName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Melee.ClientHit_Confirmed
struct ATslWeapon_Melee_ClientHit_Confirmed_Params
{
	struct FHitResult                                  Impact;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Melee.ClientAttack
struct ATslWeapon_Melee_ClientAttack_Params
{
	int                                                AnimIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWebPopupInterface.ShowWebPopup
struct UTslWebPopupInterface_ShowWebPopup_Params
{
	struct FWebPopupParam                              Param;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function TslGame.TslMotorbikeVehicle.VehicleHasDriver
struct ATslMotorbikeVehicle_VehicleHasDriver_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslMotorbikeVehicle.SetAirControlR
struct ATslMotorbikeVehicle_SetAirControlR_Params
{
	float                                              inFloat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslMotorbikeVehicle.SetAirControlQ
struct ATslMotorbikeVehicle_SetAirControlQ_Params
{
	float                                              inFloat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslMotorbikeVehicle.SetAirControlL
struct ATslMotorbikeVehicle_SetAirControlL_Params
{
	float                                              inFloat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslMotorbikeVehicle.SetAirControlF
struct ATslMotorbikeVehicle_SetAirControlF_Params
{
	float                                              inFloat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslMotorbikeVehicle.SetAirControlE
struct ATslMotorbikeVehicle_SetAirControlE_Params
{
	float                                              inFloat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslMotorbikeVehicle.SetAirControlB
struct ATslMotorbikeVehicle_SetAirControlB_Params
{
	float                                              inFloat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslMotorbikeVehicle.ProcessFlipAndStabilize
struct ATslMotorbikeVehicle_ProcessFlipAndStabilize_Params
{
};

// Function TslGame.TslMotorbikeVehicle.OnVehicleEjected
struct ATslMotorbikeVehicle_OnVehicleEjected_Params
{
};

// Function TslGame.TslMotorbikeVehicle.OnPostDriverRide
struct ATslMotorbikeVehicle_OnPostDriverRide_Params
{
};

// Function TslGame.TslMotorbikeVehicle.OnPostDriverLeave
struct ATslMotorbikeVehicle_OnPostDriverLeave_Params
{
};

// Function TslGame.TslMotorbikeVehicle.OnMeshHit
struct ATslMotorbikeVehicle_OnMeshHit_Params
{
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslMotorbikeVehicle.IsUsingActiveStabilize
struct ATslMotorbikeVehicle_IsUsingActiveStabilize_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslMotorbikeVehicle.IsKickstandActive
struct ATslMotorbikeVehicle_IsKickstandActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslMotorbikeVehicle.IsFlippingEnabled
struct ATslMotorbikeVehicle_IsFlippingEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslMotorbikeVehicle.HasContact
struct ATslMotorbikeVehicle_HasContact_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslMotorbikeVehicle.GetCOMSteerOffset
struct ATslMotorbikeVehicle_GetCOMSteerOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.WidgetShow
struct UUiHelperFunctions_WidgetShow_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     WidgetName;                                               // (Parm, ZeroConstructor)
	EWidgetShowType                                    WidgetShowType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalParam;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.SortWidgetFormPositionY
struct UUiHelperFunctions_SortWidgetFormPositionY_Params
{
	TArray<class UWidget*>                             Widgets;                                                  // (Parm, ZeroConstructor)
	bool                                               bDescendingOrder;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UWidget*>                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.UiHelperFunctions.SortWidgetFormPositionX
struct UUiHelperFunctions_SortWidgetFormPositionX_Params
{
	TArray<class UWidget*>                             Widgets;                                                  // (Parm, ZeroConstructor)
	bool                                               bDescendingOrder;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UWidget*>                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.UiHelperFunctions.SortPlayerMatchResultInfosByRanking
struct UUiHelperFunctions_SortPlayerMatchResultInfosByRanking_Params
{
	TArray<struct FTslPlayerMatchResultInfo>           PlayerMatchResultInfos;                                   // (Parm, ZeroConstructor)
	TArray<struct FTslPlayerMatchResultInfo>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.UiHelperFunctions.SortItem
struct UUiHelperFunctions_SortItem_Params
{
	TArray<TScriptInterface<class USlotInterface>>     InItemList;                                               // (Parm, ZeroConstructor)
	TArray<TScriptInterface<class USlotInterface>>     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.UiHelperFunctions.SetTslBlur
struct UUiHelperFunctions_SetTslBlur_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlurLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DepthBlurBlackPoint;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DepthBlurWhitePoint;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsWarning
struct UUiHelperFunctions_IsWarning_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsThereAnyPlayingAnimation
struct UUiHelperFunctions_IsThereAnyPlayingAnimation_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UWidgetAnimation*>                    AnimationArray;                                           // (ConstParm, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsReplayingKillcam
struct UUiHelperFunctions_IsReplayingKillcam_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsReplaying
struct UUiHelperFunctions_IsReplaying_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsObserverSpectating
struct UUiHelperFunctions_IsObserverSpectating_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsNavigateKey
struct UUiHelperFunctions_IsNavigateKey_Params
{
	struct FKey                                        InKey;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsLastSpectatorTeam
struct UUiHelperFunctions_IsLastSpectatorTeam_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ATslCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsLastSpectatedCharacter
struct UUiHelperFunctions_IsLastSpectatedCharacter_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ATslCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsKickEnableCharacter
struct UUiHelperFunctions_IsKickEnableCharacter_Params
{
	class ATslCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsInNextPlayzone
struct UUiHelperFunctions_IsInNextPlayzone_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsHitted
struct UUiHelperFunctions_IsHitted_Params
{
	int                                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsGroggyByTeam
struct UUiHelperFunctions_IsGroggyByTeam_Params
{
	class ATeam*                                       Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsGamepadY
struct UUiHelperFunctions_IsGamepadY_Params
{
	struct FKey                                        InKey;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsGamepadX
struct UUiHelperFunctions_IsGamepadX_Params
{
	struct FKey                                        InKey;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsGamepadUp
struct UUiHelperFunctions_IsGamepadUp_Params
{
	struct FKey                                        InKey;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsGamepadRight
struct UUiHelperFunctions_IsGamepadRight_Params
{
	struct FKey                                        InKey;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsGamepadLeft
struct UUiHelperFunctions_IsGamepadLeft_Params
{
	struct FKey                                        InKey;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsGamepadDown
struct UUiHelperFunctions_IsGamepadDown_Params
{
	struct FKey                                        InKey;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsGamepadB
struct UUiHelperFunctions_IsGamepadB_Params
{
	struct FKey                                        InKey;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsGamepadA
struct UUiHelperFunctions_IsGamepadA_Params
{
	struct FKey                                        InKey;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsBluezoneGpsReset
struct UUiHelperFunctions_IsBluezoneGpsReset_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsAttacked
struct UUiHelperFunctions_IsAttacked_Params
{
	int                                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.HaveDurability
struct UUiHelperFunctions_HaveDurability_Params
{
	TScriptInterface<class USlotInterface>             ItemSlot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetWeaponProcessor
struct UUiHelperFunctions_GetWeaponProcessor_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AWeaponProcessor*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetViewTargetTslCharacter
struct UUiHelperFunctions_GetViewTargetTslCharacter_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetVehicleUI
struct UUiHelperFunctions_GetVehicleUI_Params
{
	class APawn*                                       VehiclePawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetUpWidgetByTslFocusableWidget
struct UUiHelperFunctions_GetUpWidgetByTslFocusableWidget_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetTslSpectatorPawn
struct UUiHelperFunctions_GetTslSpectatorPawn_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ATslSpectatorPawn*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetTslPlayerState
struct UUiHelperFunctions_GetTslPlayerState_Params
{
	class ATslCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ATslPlayerState*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetTslHUD
struct UUiHelperFunctions_GetTslHUD_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ATslHUD*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetTslCharacterByNetId
struct UUiHelperFunctions_GetTslCharacterByNetId_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     NetId;                                                    // (Parm, ZeroConstructor)
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetTeamId
struct UUiHelperFunctions_GetTeamId_Params
{
	class ATslCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetTeamColors
struct UUiHelperFunctions_GetTeamColors_Params
{
	int                                                TeamCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FLinearColor>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.UiHelperFunctions.GetTeamColor
struct UUiHelperFunctions_GetTeamColor_Params
{
	class ATslCharacter*                               TslCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetSubjectToReportType
struct UUiHelperFunctions_GetSubjectToReportType_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ESubjectToReport                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetSubjectToReport
struct UUiHelperFunctions_GetSubjectToReport_Params
{
	TArray<struct FSubjectToReport>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.UiHelperFunctions.GetSortedReplicateCharactersBySpectatorPawnDistance
struct UUiHelperFunctions_GetSortedReplicateCharactersBySpectatorPawnDistance_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ATslCharacter*>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.UiHelperFunctions.GetSortedReplicateCharactersByLastHitTime
struct UUiHelperFunctions_GetSortedReplicateCharactersByLastHitTime_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ATslCharacter*>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.UiHelperFunctions.GetRightWidgetByTslFocusableWidget
struct UUiHelperFunctions_GetRightWidgetByTslFocusableWidget_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetReportCauses
struct UUiHelperFunctions_GetReportCauses_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FReportCauseData>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.UiHelperFunctions.GetPlayerNetID
struct UUiHelperFunctions_GetPlayerNetID_Params
{
	class ATslCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.UiHelperFunctions.GetPlayerName
struct UUiHelperFunctions_GetPlayerName_Params
{
	class ATslCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.UiHelperFunctions.GetPlayerIcon
struct UUiHelperFunctions_GetPlayerIcon_Params
{
	int                                                MarkerNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetOwningTslPlayerController
struct UUiHelperFunctions_GetOwningTslPlayerController_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ATslPlayerController*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetOwningTslCharacter
struct UUiHelperFunctions_GetOwningTslCharacter_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetNextPlayzoneRadius_BluezoneGPS
struct UUiHelperFunctions_GetNextPlayzoneRadius_BluezoneGPS_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetNextPlayzonePosition_BluezoneGPS
struct UUiHelperFunctions_GetNextPlayzonePosition_BluezoneGPS_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetNetIdByControllerId
struct UUiHelperFunctions_GetNetIdByControllerId_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControllerId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.UiHelperFunctions.GetMarkerIcon
struct UUiHelperFunctions_GetMarkerIcon_Params
{
	int                                                MarkerNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetMarkerColor
struct UUiHelperFunctions_GetMarkerColor_Params
{
	int                                                MarkerNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetMapDeathIcon
struct UUiHelperFunctions_GetMapDeathIcon_Params
{
	int                                                MarkerNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetLeftWidgetByTslFocusableWidget
struct UUiHelperFunctions_GetLeftWidgetByTslFocusableWidget_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetLastSpectatedCharacter
struct UUiHelperFunctions_GetLastSpectatedCharacter_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ATslCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetInventoryFacade
struct UUiHelperFunctions_GetInventoryFacade_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AInventoryFacade*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetInventory
struct UUiHelperFunctions_GetInventory_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AInventory*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetIndicatorIcon
struct UUiHelperFunctions_GetIndicatorIcon_Params
{
	int                                                MarkerNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetHealthRatioByTeam
struct UUiHelperFunctions_GetHealthRatioByTeam_Params
{
	class ATeam*                                       Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetHealLimit
struct UUiHelperFunctions_GetHealLimit_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetGroggyHealthRatioByTeam
struct UUiHelperFunctions_GetGroggyHealthRatioByTeam_Params
{
	class ATeam*                                       Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetEquipment
struct UUiHelperFunctions_GetEquipment_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AEquipment*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetDurabilityRatio
struct UUiHelperFunctions_GetDurabilityRatio_Params
{
	TScriptInterface<class USlotInterface>             ItemSlot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetDownWidgetByTslFocusableWidget
struct UUiHelperFunctions_GetDownWidgetByTslFocusableWidget_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetDistanceFromSpectatorPawn
struct UUiHelperFunctions_GetDistanceFromSpectatorPawn_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ATslCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetDetailCauseTypeDescriptionList
struct UUiHelperFunctions_GetDetailCauseTypeDescriptionList_Params
{
	EReportCause                                       ReportCause;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FReportDetailCauseTypeDescription>   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.UiHelperFunctions.GetCurrentPlayzoneRadius_BluezoneGPS
struct UUiHelperFunctions_GetCurrentPlayzoneRadius_BluezoneGPS_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetCurrentPlayzonePosition_BluezoneGPS
struct UUiHelperFunctions_GetCurrentPlayzonePosition_BluezoneGPS_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetCompassIcon
struct UUiHelperFunctions_GetCompassIcon_Params
{
	int                                                MarkerNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetChildrenOfPanel
struct UUiHelperFunctions_GetChildrenOfPanel_Params
{
	class UPanelWidget*                                PanelWidget;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UWidget*>                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.UiHelperFunctions.GetCharacterStateByTeam
struct UUiHelperFunctions_GetCharacterStateByTeam_Params
{
	class ATeam*                                       Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetBluezoneWarningTime
struct UUiHelperFunctions_GetBluezoneWarningTime_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetBluezoneReleaseTime
struct UUiHelperFunctions_GetBluezoneReleaseTime_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetBluezoneGpsState
struct UUiHelperFunctions_GetBluezoneGpsState_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.FindNextWidgetIndexInPanel
struct UUiHelperFunctions_FindNextWidgetIndexInPanel_Params
{
	class UPanelWidget*                                PanelWidget;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     StartWidget;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bReverseDir;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.DrawDottedLine
struct UUiHelperFunctions_DrawDottedLine_Params
{
	struct FPaintContext                               Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FBox2D                                      Rect;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector2D                                   PositionA;                                                // (Parm, IsPlainOldData)
	struct FVector2D                                   PositionB;                                                // (Parm, IsPlainOldData)
	float                                              DottedLength;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DottedInterval;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Tint;                                                     // (Parm, IsPlainOldData)
	bool                                               bAntiAlias;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.CastWeaponItem
struct UUiHelperFunctions_CastWeaponItem_Params
{
	TScriptInterface<class USlotInterface>             ItemSlot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UWeaponItem*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.CastEquipableItem
struct UUiHelperFunctions_CastEquipableItem_Params
{
	TScriptInterface<class USlotInterface>             ItemSlot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UEquipableItem*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.CastAttachableItem
struct UUiHelperFunctions_CastAttachableItem_Params
{
	TScriptInterface<class USlotInterface>             ItemSlot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAttachableItem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.CalculateWeightGaugeUpParamsByItem
struct UUiHelperFunctions_CalculateWeightGaugeUpParamsByItem_Params
{
	float                                              TotalMaxSpace;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrMaxSpace;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrSpace;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FocusedItemWeight;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutCurrMaxSpaceStart;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutCurrSpaceStart;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutFeedbackStart;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsPositive;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.BuildFocusableWidgetList
struct UUiHelperFunctions_BuildFocusableWidgetList_Params
{
	class UPanelWidget*                                Panel;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UWidget*>                             FocusableWidgetList;                                      // (Parm, ZeroConstructor)
	TArray<class UWidget*>                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.TslMotoSeatActor.IsEntryAllowed
struct ATslMotoSeatActor_IsEntryAllowed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslMotoSeatActor.HandleFlipAndKickstand
struct ATslMotoSeatActor_HandleFlipAndKickstand_Params
{
};

// Function TslGame.VivoxBaseComponent.UpdatePosition
struct UVivoxBaseComponent_UpdatePosition_Params
{
};

// Function TslGame.VivoxBaseComponent.SetVoiceChannelType
struct UVivoxBaseComponent_SetVoiceChannelType_Params
{
	EVivoxChannelType                                  ChannelType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.VivoxBaseComponent.SetParticipantMute
struct UVivoxBaseComponent_SetParticipantMute_Params
{
	struct FString                                     TargetUniqueId;                                           // (Parm, ZeroConstructor)
	bool                                               bIsMuted;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.VivoxBaseComponent.SetLocalVoiceOutputVolume
struct UVivoxBaseComponent_SetLocalVoiceOutputVolume_Params
{
	int                                                UserSettingVolume;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.VivoxBaseComponent.SetLocalVoiceOutputMuted
struct UVivoxBaseComponent_SetLocalVoiceOutputMuted_Params
{
	bool                                               bIsMuted;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.VivoxBaseComponent.SetLocalVoiceInputVolume
struct UVivoxBaseComponent_SetLocalVoiceInputVolume_Params
{
	int                                                UserSettingVolume;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.VivoxBaseComponent.SetLocalVoiceInputMuted
struct UVivoxBaseComponent_SetLocalVoiceInputMuted_Params
{
	bool                                               bIsMuted;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.VivoxBaseComponent.ServerLogin
struct UVivoxBaseComponent_ServerLogin_Params
{
};

// Function TslGame.VivoxBaseComponent.ServerJoinTeamChannel
struct UVivoxBaseComponent_ServerJoinTeamChannel_Params
{
};

// Function TslGame.VivoxBaseComponent.ServerJoinGlobalChannel
struct UVivoxBaseComponent_ServerJoinGlobalChannel_Params
{
};

// Function TslGame.VivoxBaseComponent.ResetTeamChannelJoinState
struct UVivoxBaseComponent_ResetTeamChannelJoinState_Params
{
};

// Function TslGame.VivoxBaseComponent.ResetLoginState
struct UVivoxBaseComponent_ResetLoginState_Params
{
};

// Function TslGame.VivoxBaseComponent.ResetGlobalChannelJoinState
struct UVivoxBaseComponent_ResetGlobalChannelJoinState_Params
{
};

// Function TslGame.VivoxBaseComponent.ResetConnectionState
struct UVivoxBaseComponent_ResetConnectionState_Params
{
};

// Function TslGame.VivoxBaseComponent.RefreshDevices
struct UVivoxBaseComponent_RefreshDevices_Params
{
};

// Function TslGame.VivoxBaseComponent.GetVoiceChannelType
struct UVivoxBaseComponent_GetVoiceChannelType_Params
{
	EVivoxChannelType                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VivoxBaseComponent.GetLocalVoiceOutputVolume
struct UVivoxBaseComponent_GetLocalVoiceOutputVolume_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VivoxBaseComponent.GetLocalVoiceOutputMuted
struct UVivoxBaseComponent_GetLocalVoiceOutputMuted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VivoxBaseComponent.GetLocalVoiceInputVolume
struct UVivoxBaseComponent_GetLocalVoiceInputVolume_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VivoxBaseComponent.GetLocalVoiceInputMuted
struct UVivoxBaseComponent_GetLocalVoiceInputMuted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VivoxBaseComponent.ClientLogin
struct UVivoxBaseComponent_ClientLogin_Params
{
	struct FString                                     AccessToken;                                              // (Parm, ZeroConstructor)
};

// Function TslGame.VivoxBaseComponent.ClientLeaveTeamChannel
struct UVivoxBaseComponent_ClientLeaveTeamChannel_Params
{
};

// Function TslGame.VivoxBaseComponent.ClientLeaveGlobalChannel
struct UVivoxBaseComponent_ClientLeaveGlobalChannel_Params
{
};

// Function TslGame.VivoxBaseComponent.ClientJoinTeamChannel
struct UVivoxBaseComponent_ClientJoinTeamChannel_Params
{
	struct FString                                     AccessToken;                                              // (Parm, ZeroConstructor)
};

// Function TslGame.VivoxBaseComponent.ClientJoinGlobalChannel
struct UVivoxBaseComponent_ClientJoinGlobalChannel_Params
{
	struct FString                                     AccessToken;                                              // (Parm, ZeroConstructor)
};

// Function TslGame.VivoxBaseComponent.CalculateOutputVolumeFromModifiers
struct UVivoxBaseComponent_CalculateOutputVolumeFromModifiers_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VivoxBaseComponent.CalculateInputVolumeFromModifiers
struct UVivoxBaseComponent_CalculateInputVolumeFromModifiers_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.VivoxComponent.ServerTestAccessToken
struct UVivoxComponent_ServerTestAccessToken_Params
{
};

// Function TslGame.VivoxComponent.ServerSetObserverTeamNum
struct UVivoxComponent_ServerSetObserverTeamNum_Params
{
	int                                                NewTeamNum;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.VivoxComponent.ApplyTimedVolumeModifier
struct UVivoxComponent_ApplyTimedVolumeModifier_Params
{
	EVivoxChannelType                                  ChannelType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewModifier;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RestoreDuration;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.VivoxManager.OnRevokeKeySuccess
struct UVivoxManager_OnRevokeKeySuccess_Params
{
	class UVivoxResponse*                              Response;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.VivoxManager.OnRevokeKeyFail
struct UVivoxManager_OnRevokeKeyFail_Params
{
	class UVivoxResponse*                              Response;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.VivoxManager.OnChannelSuccess
struct UVivoxManager_OnChannelSuccess_Params
{
	class UVivoxResponse*                              Response;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.VivoxManager.OnChannelFail
struct UVivoxManager_OnChannelFail_Params
{
	class UVivoxResponse*                              Response;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.VivoxManager.OnAddKeySuccess
struct UVivoxManager_OnAddKeySuccess_Params
{
	class UVivoxResponse*                              Response;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.VivoxManager.OnAddKeyFail
struct UVivoxManager_OnAddKeyFail_Params
{
	class UVivoxResponse*                              Response;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.WeaponAnimInfoComponent.SetAccessorySlot
struct UWeaponAnimInfoComponent_SetAccessorySlot_Params
{
	class UTslAccessoryComponent*                      NewAccessoryComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EAccessorySlot                                     Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.WeaponAnimInfoComponent.HasWeaponLeftHandIKSocket
struct UWeaponAnimInfoComponent_HasWeaponLeftHandIKSocket_Params
{
	class ATslWeapon*                                  Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.WeaponAnimInfoComponent.GetWeaponLeftHandIKTransform
struct UWeaponAnimInfoComponent_GetWeaponLeftHandIKTransform_Params
{
	class ATslWeapon*                                  Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.WeaponAnimInfoComponent.GetWeaponHandIK_Right
struct UWeaponAnimInfoComponent_GetWeaponHandIK_Right_Params
{
	class ATslWeapon*                                  Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.WeaponAnimInfoComponent.GetWeaponHandIK_Left
struct UWeaponAnimInfoComponent_GetWeaponHandIK_Left_Params
{
	class ATslWeapon*                                  Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.WeaponAnimInfoComponent.GetCurrentWeapon
struct UWeaponAnimInfoComponent_GetCurrentWeapon_Params
{
	class ATslWeapon*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.WeaponAnimInfoComponent.GetAccessorySlot
struct UWeaponAnimInfoComponent_GetAccessorySlot_Params
{
	EAccessorySlot                                     Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UTslAccessoryComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TslGame.WeaponClone.Update
struct UWeaponClone_Update_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
