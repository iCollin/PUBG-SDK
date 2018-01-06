// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ReplayTimeline_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReplayTimeline.ReplayTimeline_C.UnBindOnGotoTimelineDoneToFindCharacter
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::UnBindOnGotoTimelineDoneToFindCharacter()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72906);

	UReplayTimeline_C_UnBindOnGotoTimelineDoneToFindCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BindOnGotoTimelineDoneToFindCharacter
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::BindOnGotoTimelineDoneToFindCharacter()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72901);

	UReplayTimeline_C_BindOnGotoTimelineDoneToFindCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.UnBindOnGotoTimelineDoneToFindKillerOrVictim
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::UnBindOnGotoTimelineDoneToFindKillerOrVictim()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72896);

	UReplayTimeline_C_UnBindOnGotoTimelineDoneToFindKillerOrVictim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BindOnGotoTimelineDoneToFindKillerOrVictim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 strKillerID                    (Parm, ZeroConstructor)
// struct FString                 strKillerName                  (Parm, ZeroConstructor)
// struct FString                 strVictimID                    (Parm, ZeroConstructor)
// struct FString                 strVictimName                  (Parm, ZeroConstructor)

void UReplayTimeline_C::BindOnGotoTimelineDoneToFindKillerOrVictim(const struct FString& strKillerID, const struct FString& strKillerName, const struct FString& strVictimID, const struct FString& strVictimName)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72887);

	UReplayTimeline_C_BindOnGotoTimelineDoneToFindKillerOrVictim_Params params;
	params.strKillerID = strKillerID;
	params.strKillerName = strKillerName;
	params.strVictimID = strVictimID;
	params.strVictimName = strVictimName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.CheckVideoCapture
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::CheckVideoCapture()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72884);

	UReplayTimeline_C_CheckVideoCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.OnToggleReplayTimeline
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::OnToggleReplayTimeline()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72879);

	UReplayTimeline_C_OnToggleReplayTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.SetTimelineMaximize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::SetTimelineMaximize()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72858);

	UReplayTimeline_C_SetTimelineMaximize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.SetTimelineMinimize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::SetTimelineMinimize()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72834);

	UReplayTimeline_C_SetTimelineMinimize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.CreateGetGroggyEventsTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::CreateGetGroggyEventsTimer()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72830);

	UReplayTimeline_C_CreateGetGroggyEventsTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.ClearDBNOEventItems
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::ClearDBNOEventItems()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72821);

	UReplayTimeline_C_ClearDBNOEventItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.HideDBNOEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::HideDBNOEvents()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72812);

	UReplayTimeline_C_HideDBNOEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.ShowDBNOEvents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::ShowDBNOEvents()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72782);

	UReplayTimeline_C_ShowDBNOEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.ClearKillEventItems
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::ClearKillEventItems()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72773);

	UReplayTimeline_C_ClearKillEventItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.CreateGetKillEventsTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::CreateGetKillEventsTimer()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72769);

	UReplayTimeline_C_CreateGetKillEventsTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.UpdatePlayPauseBtns
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::UpdatePlayPauseBtns()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72768);

	UReplayTimeline_C_UpdatePlayPauseBtns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.SetVisibleCtrls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void UReplayTimeline_C::SetVisibleCtrls(bool bVisible)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72766);

	UReplayTimeline_C_SetVisibleCtrls_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.OnSpeedDown
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::OnSpeedDown()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72762);

	UReplayTimeline_C_OnSpeedDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.OnSpeedUp
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::OnSpeedUp()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72758);

	UReplayTimeline_C_OnSpeedUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.OnPlay
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::OnPlay()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72756);

	UReplayTimeline_C_OnPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.OnPause
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::OnPause()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72754);

	UReplayTimeline_C_OnPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.OnTogglePause
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::OnTogglePause()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72745);

	UReplayTimeline_C_OnTogglePause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.SetEnableUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)

void UReplayTimeline_C::SetEnableUI(bool IsEnable)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72743);

	UReplayTimeline_C_SetEnableUI_Params params;
	params.IsEnable = IsEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.HideKillEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::HideKillEvents()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72734);

	UReplayTimeline_C_HideKillEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.ShowKillEvents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::ShowKillEvents()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72703);

	UReplayTimeline_C_ShowKillEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.SetCurTimeSpeed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::SetCurTimeSpeed()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72698);

	UReplayTimeline_C_SetCurTimeSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.FloatToSeconds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InputTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   TextTime                       (Parm, OutParm)

void UReplayTimeline_C::FloatToSeconds(float InputTime, struct FText* TextTime)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72692);

	UReplayTimeline_C_FloatToSeconds_Params params;
	params.InputTime = InputTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextTime != nullptr)
		*TextTime = params.TextTime;
}


// Function ReplayTimeline.ReplayTimeline_C.UpdateTimeline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::UpdateTimeline()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72683);

	UReplayTimeline_C_UpdateTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UReplayTimeline_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72682);

	UReplayTimeline_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UReplayTimeline_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72679);

	UReplayTimeline_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BndEvt__TimelineSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UReplayTimeline_C::BndEvt__TimelineSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72677);

	UReplayTimeline_C_BndEvt__TimelineSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnPause_K2Node_ComponentBoundEvent_234_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UReplayTimeline_C::BndEvt__BtnPause_K2Node_ComponentBoundEvent_234_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72676);

	UReplayTimeline_C_BndEvt__BtnPause_K2Node_ComponentBoundEvent_234_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnPlay_K2Node_ComponentBoundEvent_257_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UReplayTimeline_C::BndEvt__BtnPlay_K2Node_ComponentBoundEvent_257_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72675);

	UReplayTimeline_C_BndEvt__BtnPlay_K2Node_ComponentBoundEvent_257_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnSpeedUp_K2Node_ComponentBoundEvent_317_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UReplayTimeline_C::BndEvt__BtnSpeedUp_K2Node_ComponentBoundEvent_317_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72674);

	UReplayTimeline_C_BndEvt__BtnSpeedUp_K2Node_ComponentBoundEvent_317_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnSpeedDown_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UReplayTimeline_C::BndEvt__BtnSpeedDown_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72673);

	UReplayTimeline_C_BndEvt__BtnSpeedDown_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.GetKillEventsDone
// (BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::GetKillEventsDone()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72672);

	UReplayTimeline_C_GetKillEventsDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BndEvt__CheckBoxKills_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (Parm, ZeroConstructor, IsPlainOldData)

void UReplayTimeline_C::BndEvt__CheckBoxKills_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72670);

	UReplayTimeline_C_BndEvt__CheckBoxKills_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.GetKillEvents
// (BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::GetKillEvents()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72669);

	UReplayTimeline_C_GetKillEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UReplayTimeline_C::Destruct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72668);

	UReplayTimeline_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.GetGroggyEvents
// (BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::GetGroggyEvents()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72667);

	UReplayTimeline_C_GetGroggyEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.GetGroggyEventsDone
// (BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::GetGroggyEventsDone()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72666);

	UReplayTimeline_C_GetGroggyEventsDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BndEvt__CheckBoxGroggys_K2Node_ComponentBoundEvent_86_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (Parm, ZeroConstructor, IsPlainOldData)

void UReplayTimeline_C::BndEvt__CheckBoxGroggys_K2Node_ComponentBoundEvent_86_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72664);

	UReplayTimeline_C_BndEvt__CheckBoxGroggys_K2Node_ComponentBoundEvent_86_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnRec_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UReplayTimeline_C::BndEvt__BtnRec_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72663);

	UReplayTimeline_C_BndEvt__BtnRec_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnStop_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UReplayTimeline_C::BndEvt__BtnStop_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72662);

	UReplayTimeline_C_BndEvt__BtnStop_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.OnGoToTimelineDoneToFindKillerOrVictim
// (BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::OnGoToTimelineDoneToFindKillerOrVictim()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72661);

	UReplayTimeline_C_OnGoToTimelineDoneToFindKillerOrVictim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.OnGoToTimelineDoneToFindCharacter
// (BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::OnGoToTimelineDoneToFindCharacter()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72660);

	UReplayTimeline_C_OnGoToTimelineDoneToFindCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.O_1
// (BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::O_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72659);

	UReplayTimeline_C_O_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.ExecuteUbergraph_ReplayTimeline
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UReplayTimeline_C::ExecuteUbergraph_ReplayTimeline(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(72598);

	UReplayTimeline_C_ExecuteUbergraph_ReplayTimeline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
