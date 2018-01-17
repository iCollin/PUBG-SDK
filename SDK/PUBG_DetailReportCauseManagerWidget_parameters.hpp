#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_DetailReportCauseManagerWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DetailReportCauseManagerWidget.DetailReportCauseManagerWidget_C.OnPrepass_1
struct UDetailReportCauseManagerWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DetailReportCauseManagerWidget.DetailReportCauseManagerWidget_C.GetSelectedDetailReportCauseList
struct UDetailReportCauseManagerWidget_C_GetSelectedDetailReportCauseList_Params
{
	TArray<EReportDetailCauseType>                     DetailCauseTypes;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function DetailReportCauseManagerWidget.DetailReportCauseManagerWidget_C.Clear
struct UDetailReportCauseManagerWidget_C_Clear_Params
{
};

// Function DetailReportCauseManagerWidget.DetailReportCauseManagerWidget_C.CreateCheckBox
struct UDetailReportCauseManagerWidget_C_CreateCheckBox_Params
{
	struct FReportDetailCauseTypeDescription           DetailCauseData;                                          // (Parm)
	class UDetailReportCauseCheckBoxWidget_C*          ReportDetailCause;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DetailReportCauseManagerWidget.DetailReportCauseManagerWidget_C.UpdateDetailCause
struct UDetailReportCauseManagerWidget_C_UpdateDetailCause_Params
{
	EReportCause                                       Cause;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
