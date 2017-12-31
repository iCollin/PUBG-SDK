#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_UiHelperFunctionsBp_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.IsSelfputMode_Gamepad
struct UUiHelperFunctionsBp_C_IsSelfputMode_Gamepad_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSelfPut;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetSelfPutAttachment
struct UUiHelperFunctionsBp_C_GetSelfPutAttachment_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAttachableItem*                             GamepadadSelectedAttachableItem;                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.CancelSelfAttachmentPutMode
struct UUiHelperFunctionsBp_C_CancelSelfAttachmentPutMode_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.IsSelfAttachmentPutMode
struct UUiHelperFunctionsBp_C_IsSelfAttachmentPutMode_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetInventoryWidget
struct UUiHelperFunctionsBp_C_GetInventoryWidget_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryWidget_C*                          InventoryWidget;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.InventoryFocusingColor
struct UUiHelperFunctionsBp_C_InventoryFocusingColor_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                NewParam;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.IsXBoxOnePlatform
struct UUiHelperFunctionsBp_C_IsXBoxOnePlatform_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetCharacterLook
struct UUiHelperFunctionsBp_C_GetCharacterLook_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Look;                                                     // (Parm, OutParm, IsPlainOldData)
};

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetCharacterPosititon
struct UUiHelperFunctionsBp_C_GetCharacterPosititon_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetCharacterAngle
struct UUiHelperFunctionsBp_C_GetCharacterAngle_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetBluezoneWarningTimeBp
struct UUiHelperFunctionsBp_C_GetBluezoneWarningTimeBp_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WarningTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetBluezoneReleaseTimeBp
struct UUiHelperFunctionsBp_C_GetBluezoneReleaseTimeBp_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReleaseTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetDistanceColor
struct UUiHelperFunctionsBp_C_GetDistanceColor_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.IsLastSpectatorTeam
struct UUiHelperFunctionsBp_C_IsLastSpectatorTeam_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ATslCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTeam;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetTeamColor
struct UUiHelperFunctionsBp_C_GetTeamColor_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.IsSpectatorTeam
struct UUiHelperFunctionsBp_C_IsSpectatorTeam_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ATslCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTeam;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetStateByTeam
struct UUiHelperFunctionsBp_C_GetStateByTeam_Params
{
	class ATeam*                                       Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetStateByCharacter
struct UUiHelperFunctionsBp_C_GetStateByCharacter_Params
{
	class ATslCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutState;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetSpectatorColor
struct UUiHelperFunctionsBp_C_GetSpectatorColor_Params
{
	bool                                               bISpectator;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetCharacterStateIcon
struct UUiHelperFunctionsBp_C_GetCharacterStateIcon_Params
{
	int                                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetTslCharacters_Bp
struct UUiHelperFunctionsBp_C_GetTslCharacters_Bp_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ATslCharacter*>                       OutActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.NotifyWidgetShowed
struct UUiHelperFunctionsBp_C_NotifyWidgetShowed_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     WidgetName;                                               // (Parm, ZeroConstructor)
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetTeamMarkerColor
struct UUiHelperFunctionsBp_C_GetTeamMarkerColor_Params
{
	int                                                MemberNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                NewParam;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.CreateAndSetMaterial
struct UUiHelperFunctionsBp_C_CreateAndSetMaterial_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetDynamicMaterial
struct UUiHelperFunctionsBp_C_GetDynamicMaterial_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.SortItemBp
struct UUiHelperFunctionsBp_C_SortItemBp_Params
{
	TArray<TScriptInterface<class USlotInterface>>     InItemList;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bSort;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TScriptInterface<class USlotInterface>>     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
