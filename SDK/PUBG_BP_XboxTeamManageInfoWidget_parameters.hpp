#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_XboxTeamManageInfoWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.OnKeyDown
struct UBP_XboxTeamManageInfoWidget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.OnFocusReceived
struct UBP_XboxTeamManageInfoWidget_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.Construct
struct UBP_XboxTeamManageInfoWidget_C_Construct_Params
{
};

// Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.OnFocusLost
struct UBP_XboxTeamManageInfoWidget_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
};

// Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.UpdateUserNameText
struct UBP_XboxTeamManageInfoWidget_C_UpdateUserNameText_Params
{
	struct FName*                                      InUserName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.UpdateVoiceIcon
struct UBP_XboxTeamManageInfoWidget_C_UpdateVoiceIcon_Params
{
	bool*                                              InbVoiceMute;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.ExecuteUbergraph_BP_XboxTeamManageInfoWidget
struct UBP_XboxTeamManageInfoWidget_C_ExecuteUbergraph_BP_XboxTeamManageInfoWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.OnGamepadX__DelegateSignature
struct UBP_XboxTeamManageInfoWidget_C_OnGamepadX__DelegateSignature_Params
{
};

// Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.OnGamepadB__DelegateSignature
struct UBP_XboxTeamManageInfoWidget_C_OnGamepadB__DelegateSignature_Params
{
};

// Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.OnGamepadA__DelegateSignature
struct UBP_XboxTeamManageInfoWidget_C_OnGamepadA__DelegateSignature_Params
{
};

// Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.OnGamepadNavigateKeyDown__DelegateSignature
struct UBP_XboxTeamManageInfoWidget_C_OnGamepadNavigateKeyDown__DelegateSignature_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
