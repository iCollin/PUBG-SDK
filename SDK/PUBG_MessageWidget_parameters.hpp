#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MessageWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MessageWidget.MessageWidget_C.ClearMessage
struct UMessageWidget_C_ClearMessage_Params
{
};

// Function MessageWidget.MessageWidget_C.Construct
struct UMessageWidget_C_Construct_Params
{
};

// Function MessageWidget.MessageWidget_C.O_1
struct UMessageWidget_C_O_1_Params
{
};

// Function MessageWidget.MessageWidget_C.ExecuteUbergraph_MessageWidget
struct UMessageWidget_C_ExecuteUbergraph_MessageWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageWidget.MessageWidget_C.MessageEnd__DelegateSignature
struct UMessageWidget_C_MessageEnd__DelegateSignature_Params
{
	class UMessageWidget_C*                            Message;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
