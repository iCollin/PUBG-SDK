#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_DetailReportCauseCheckBoxWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DetailReportCauseCheckBoxWidget.DetailReportCauseCheckBoxWidget_C.GetDetailCauseType
struct UDetailReportCauseCheckBoxWidget_C_GetDetailCauseType_Params
{
	EReportDetailCauseType                             ReportDetailCause;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DetailReportCauseCheckBoxWidget.DetailReportCauseCheckBoxWidget_C.IsChecked
struct UDetailReportCauseCheckBoxWidget_C_IsChecked_Params
{
	bool                                               bSelected;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DetailReportCauseCheckBoxWidget.DetailReportCauseCheckBoxWidget_C.SetDetailCauseData
struct UDetailReportCauseCheckBoxWidget_C_SetDetailCauseData_Params
{
	struct FReportDetailCauseTypeDescription           CauseData;                                                // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
