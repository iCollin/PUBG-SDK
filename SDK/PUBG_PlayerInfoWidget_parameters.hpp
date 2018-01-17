#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PlayerInfoWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerInfoWidget.PlayerInfoWidget_C.SetPlayerInfoData
struct UPlayerInfoWidget_C_SetPlayerInfoData_Params
{
	class ATslCharacter*                               TslCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.UpdateHealthPrepass_Hori
struct UPlayerInfoWidget_C_UpdateHealthPrepass_Hori_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.On_TextTeamNumber_Prepass_1
struct UPlayerInfoWidget_C_On_TextTeamNumber_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.On_TextShortcut_Prepass_1
struct UPlayerInfoWidget_C_On_TextShortcut_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.OnPrepass_2
struct UPlayerInfoWidget_C_OnPrepass_2_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.On_HPGaugeSizeBox_Hori_Prepass_1
struct UPlayerInfoWidget_C_On_HPGaugeSizeBox_Hori_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.On_HPGaugeSizeBox_Vert_Prepass_1
struct UPlayerInfoWidget_C_On_HPGaugeSizeBox_Vert_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.On_ObserverCameraLayer_Prepass_1
struct UPlayerInfoWidget_C_On_ObserverCameraLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.SetCameraMode_Free
struct UPlayerInfoWidget_C_SetCameraMode_Free_Params
{
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.SetCameraMode_Follow
struct UPlayerInfoWidget_C_SetCameraMode_Follow_Params
{
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.SetCameraMode_Spectator
struct UPlayerInfoWidget_C_SetCameraMode_Spectator_Params
{
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.OnKeyDown
struct UPlayerInfoWidget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.OnMouseButtonDown_1
struct UPlayerInfoWidget_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.On_KickButtonLayer_Prepass_1
struct UPlayerInfoWidget_C_On_KickButtonLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.OnPrepass_1
struct UPlayerInfoWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.On_PlayerName_Prepass_1
struct UPlayerInfoWidget_C_On_PlayerName_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.On_IconLayer_Prepass_1
struct UPlayerInfoWidget_C_On_IconLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.On_IconImage_Prepass_1
struct UPlayerInfoWidget_C_On_IconImage_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.On_KillCount_Prepass_1
struct UPlayerInfoWidget_C_On_KillCount_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.On_InfoLayer_Prepass_1
struct UPlayerInfoWidget_C_On_InfoLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.UpdateHealthPrepass_Vert
struct UPlayerInfoWidget_C_UpdateHealthPrepass_Vert_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
struct UPlayerInfoWidget_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.OnMouseEnter
struct UPlayerInfoWidget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.OnMouseLeave
struct UPlayerInfoWidget_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.Tick
struct UPlayerInfoWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.CustomEvent_1
struct UPlayerInfoWidget_C_CustomEvent_1_Params
{
	EPopupButtonID                                     ButtonID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.Construct
struct UPlayerInfoWidget_C_Construct_Params
{
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.CustomEvent_3
struct UPlayerInfoWidget_C_CustomEvent_3_Params
{
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.CustomEvent_2
struct UPlayerInfoWidget_C_CustomEvent_2_Params
{
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.Destruct
struct UPlayerInfoWidget_C_Destruct_Params
{
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
struct UPlayerInfoWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_57_OnButtonHoverEvent__DelegateSignature
struct UPlayerInfoWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_57_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
struct UPlayerInfoWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerInfoWidget.PlayerInfoWidget_C.ExecuteUbergraph_PlayerInfoWidget
struct UPlayerInfoWidget_C_ExecuteUbergraph_PlayerInfoWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
