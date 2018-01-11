// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_DetailReportCauseManagerWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DetailReportCauseManagerWidget.DetailReportCauseManagerWidget_C.OnPrepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UDetailReportCauseManagerWidget_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(92450);

	UDetailReportCauseManagerWidget_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DetailReportCauseManagerWidget.DetailReportCauseManagerWidget_C.GetSelectedDetailReportCauseList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<EReportDetailCauseType> DetailCauseTypes               (Parm, OutParm, ZeroConstructor)

void UDetailReportCauseManagerWidget_C::GetSelectedDetailReportCauseList(TArray<EReportDetailCauseType>* DetailCauseTypes)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(92431);

	UDetailReportCauseManagerWidget_C_GetSelectedDetailReportCauseList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DetailCauseTypes != nullptr)
		*DetailCauseTypes = params.DetailCauseTypes;
}


// Function DetailReportCauseManagerWidget.DetailReportCauseManagerWidget_C.Clear
// (Private, BlueprintCallable, BlueprintEvent)

void UDetailReportCauseManagerWidget_C::Clear()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(92430);

	UDetailReportCauseManagerWidget_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DetailReportCauseManagerWidget.DetailReportCauseManagerWidget_C.CreateCheckBox
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FReportDetailCauseTypeDescription DetailCauseData                (Parm)
// class UDetailReportCauseCheckBoxWidget_C* ReportDetailCause              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDetailReportCauseManagerWidget_C::CreateCheckBox(const struct FReportDetailCauseTypeDescription& DetailCauseData, class UDetailReportCauseCheckBoxWidget_C** ReportDetailCause)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(92425);

	UDetailReportCauseManagerWidget_C_CreateCheckBox_Params params;
	params.DetailCauseData = DetailCauseData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReportDetailCause != nullptr)
		*ReportDetailCause = params.ReportDetailCause;
}


// Function DetailReportCauseManagerWidget.DetailReportCauseManagerWidget_C.UpdateDetailCause
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EReportCause                   Cause                          (Parm, ZeroConstructor, IsPlainOldData)

void UDetailReportCauseManagerWidget_C::UpdateDetailCause(EReportCause Cause)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(92412);

	UDetailReportCauseManagerWidget_C_UpdateDetailCause_Params params;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
