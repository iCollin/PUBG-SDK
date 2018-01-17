#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ReplayTimelineDBNOEventItem_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ReplayTimelineDBNOEventItem.ReplayTimelineDBNOEventItem_C.OnPrepass_1
struct UReplayTimelineDBNOEventItem_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayTimelineDBNOEventItem.ReplayTimelineDBNOEventItem_C.OnMouseButtonDown_1
struct UReplayTimelineDBNOEventItem_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ReplayTimelineDBNOEventItem.ReplayTimelineDBNOEventItem_C.GetToolTipText
struct UReplayTimelineDBNOEventItem_C_GetToolTipText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
