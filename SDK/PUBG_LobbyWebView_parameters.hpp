#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyWebView_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LobbyWebView.LobbyWebView_C.WebViewBroadcast
struct ULobbyWebView_C_WebViewBroadcast_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	struct FString                                     Parameter;                                                // (Parm, ZeroConstructor)
};

// Function LobbyWebView.LobbyWebView_C.WebViewUnload
struct ULobbyWebView_C_WebViewUnload_Params
{
	int                                                ViewIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyWebView.LobbyWebView_C.WebViewShow
struct ULobbyWebView_C_WebViewShow_Params
{
	int                                                VeiwIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyWebView.LobbyWebView_C.HandleEventFromWeb
struct ULobbyWebView_C_HandleEventFromWeb_Params
{
	class UCoherentUIGTJSPayload*                      payload;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyWebView.LobbyWebView_C.WebViewInputFocus
struct ULobbyWebView_C_WebViewInputFocus_Params
{
	int                                                ViewIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyWebView.LobbyWebView_C.WebViewLoad
struct ULobbyWebView_C_WebViewLoad_Params
{
	int                                                ViewIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
};

// Function LobbyWebView.LobbyWebView_C.Construct
struct ULobbyWebView_C_Construct_Params
{
};

// Function LobbyWebView.LobbyWebView_C.Tick
struct ULobbyWebView_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyWebView.LobbyWebView_C.Destruct
struct ULobbyWebView_C_Destruct_Params
{
};

// Function LobbyWebView.LobbyWebView_C.J_1
struct ULobbyWebView_C_J_1_Params
{
	class UCoherentUIGTJSPayload*                      payload;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyWebView.LobbyWebView_C.BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_383_UIGTReadyForBindingsSignature__DelegateSignature
struct ULobbyWebView_C_BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_383_UIGTReadyForBindingsSignature__DelegateSignature_Params
{
};

// Function LobbyWebView.LobbyWebView_C.PressAKey
struct ULobbyWebView_C_PressAKey_Params
{
};

// Function LobbyWebView.LobbyWebView_C.PressBKey
struct ULobbyWebView_C_PressBKey_Params
{
};

// Function LobbyWebView.LobbyWebView_C.ExecuteUbergraph_LobbyWebView
struct ULobbyWebView_C_ExecuteUbergraph_LobbyWebView_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
