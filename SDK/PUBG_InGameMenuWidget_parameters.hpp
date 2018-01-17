#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_InGameMenuWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function InGameMenuWidget.InGameMenuWidget_C.IsPCOnly
struct UInGameMenuWidget_C_IsPCOnly_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InGameMenuWidget.InGameMenuWidget_C.IsGamepadOnly
struct UInGameMenuWidget_C_IsGamepadOnly_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InGameMenuWidget.InGameMenuWidget_C.GetVersionText_1
struct UInGameMenuWidget_C_GetVersionText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function InGameMenuWidget.InGameMenuWidget_C.QuitGame
struct UInGameMenuWidget_C_QuitGame_Params
{
	EPopupButtonID                                     ButtonID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InGameMenuWidget.InGameMenuWidget_C.GoToLobby
struct UInGameMenuWidget_C_GoToLobby_Params
{
	EPopupButtonID                                     ButtonID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__Resume_K2Node_ComponentBoundEvent_195_OnClickedEventDispatcher__DelegateSignature
struct UInGameMenuWidget_C_BndEvt__Resume_K2Node_ComponentBoundEvent_195_OnClickedEventDispatcher__DelegateSignature_Params
{
};

// Function InGameMenuWidget.InGameMenuWidget_C.Construct
struct UInGameMenuWidget_C_Construct_Params
{
};

// Function InGameMenuWidget.InGameMenuWidget_C.OnHiddenWidget
struct UInGameMenuWidget_C_OnHiddenWidget_Params
{
};

// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__OptionButton_K2Node_ComponentBoundEvent_107_OnClickedEventDispatcher__DelegateSignature
struct UInGameMenuWidget_C_BndEvt__OptionButton_K2Node_ComponentBoundEvent_107_OnClickedEventDispatcher__DelegateSignature_Params
{
};

// Function InGameMenuWidget.InGameMenuWidget_C.CustomEvent_1
struct UInGameMenuWidget_C_CustomEvent_1_Params
{
};

// Function InGameMenuWidget.InGameMenuWidget_C.CustomEvent_2
struct UInGameMenuWidget_C_CustomEvent_2_Params
{
};

// Function InGameMenuWidget.InGameMenuWidget_C.Tick
struct UInGameMenuWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__ButtonWidget_108_K2Node_ComponentBoundEvent_96_OnClickedEventDispatcher__DelegateSignature
struct UInGameMenuWidget_C_BndEvt__ButtonWidget_108_K2Node_ComponentBoundEvent_96_OnClickedEventDispatcher__DelegateSignature_Params
{
};

// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnClickedEventDispatcher__DelegateSignature
struct UInGameMenuWidget_C_BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnClickedEventDispatcher__DelegateSignature_Params
{
};

// Function InGameMenuWidget.InGameMenuWidget_C.OpenGamepadOption
struct UInGameMenuWidget_C_OpenGamepadOption_Params
{
};

// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_123_OnClickedEventDispatcher__DelegateSignature
struct UInGameMenuWidget_C_BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_123_OnClickedEventDispatcher__DelegateSignature_Params
{
};

// Function InGameMenuWidget.InGameMenuWidget_C.ExecuteUbergraph_InGameMenuWidget
struct UInGameMenuWidget_C_ExecuteUbergraph_InGameMenuWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InGameMenuWidget.InGameMenuWidget_C.TestDispatcher__DelegateSignature
struct UInGameMenuWidget_C_TestDispatcher__DelegateSignature_Params
{
	bool                                               NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
