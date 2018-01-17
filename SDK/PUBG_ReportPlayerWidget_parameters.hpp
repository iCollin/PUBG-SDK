#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ReportPlayerWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ReportPlayerWidget.ReportPlayerWidget_C.OnChangeCauser
struct UReportPlayerWidget_C_OnChangeCauser_Params
{
	struct FString                                     SelectCauser;                                             // (Parm, ZeroConstructor)
};

// Function ReportPlayerWidget.ReportPlayerWidget_C.InitPlayerNameSetting
struct UReportPlayerWidget_C_InitPlayerNameSetting_Params
{
	ESubjectToReport                                   Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ReportPlayerWidget.ReportPlayerWidget_C.InitComboboxSetting
struct UReportPlayerWidget_C_InitComboboxSetting_Params
{
};

// Function ReportPlayerWidget.ReportPlayerWidget_C.InitSubjectToReport
struct UReportPlayerWidget_C_InitSubjectToReport_Params
{
	ESubjectToReport                                   SubjectToReportType;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReportPlayerWidget.ReportPlayerWidget_C.GetbIsEnabled_1
struct UReportPlayerWidget_C_GetbIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ReportPlayerWidget.ReportPlayerWidget_C.Construct
struct UReportPlayerWidget_C_Construct_Params
{
};

// Function ReportPlayerWidget.ReportPlayerWidget_C.BndEvt__ReportCausesComboBox_K2Node_ComponentBoundEvent_59_OnSelectionChangedEvent__DelegateSignature
struct UReportPlayerWidget_C_BndEvt__ReportCausesComboBox_K2Node_ComponentBoundEvent_59_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReportPlayerWidget.ReportPlayerWidget_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct UReportPlayerWidget_C_BndEvt__ButtonClose_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ReportPlayerWidget.ReportPlayerWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
struct UReportPlayerWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ReportPlayerWidget.ReportPlayerWidget_C.UpdateSubjectToReportType
struct UReportPlayerWidget_C_UpdateSubjectToReportType_Params
{
	ESubjectToReport                                   SubjectToReportType;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReportPlayerWidget.ReportPlayerWidget_C.ExecuteUbergraph_ReportPlayerWidget
struct UReportPlayerWidget_C_ExecuteUbergraph_ReportPlayerWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
