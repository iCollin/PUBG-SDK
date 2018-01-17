#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WebPopup_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WebPopup.WebPopup_C.SetPopupData
struct UWebPopup_C_SetPopupData_Params
{
	struct FString                                     PopupId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Uri;                                                      // (Parm, ZeroConstructor)
	bool                                               UseBackgroundColor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // (Parm, IsPlainOldData)
};

// Function WebPopup.WebPopup_C.Tick
struct UWebPopup_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WebPopup.WebPopup_C.Destruct
struct UWebPopup_C_Destruct_Params
{
};

// Function WebPopup.WebPopup_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWebPopup_C_BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WebPopup.WebPopup_C.BndEvt__Button_Reload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
struct UWebPopup_C_BndEvt__Button_Reload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WebPopup.WebPopup_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature
struct UWebPopup_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WebPopup.WebPopup_C.ExecuteUbergraph_WebPopup
struct UWebPopup_C_ExecuteUbergraph_WebPopup_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WebPopup.WebPopup_C.OnClosePopup__DelegateSignature
struct UWebPopup_C_OnClosePopup__DelegateSignature_Params
{
	class UWebPopup_C*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
