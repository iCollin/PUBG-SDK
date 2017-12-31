#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_QualitySettingsWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function QualitySettingsWidget.QualitySettingsWidget_C.GetbIsEnabled_1
struct UQualitySettingsWidget_C_GetbIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.SettingDefautl
struct UQualitySettingsWidget_C_SettingDefautl_Params
{
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.UpdateOtionStringByUserStting
struct UQualitySettingsWidget_C_UpdateOtionStringByUserStting_Params
{
	EQualityType                                       Selection;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.UpdateMainOptionStringByComboBox
struct UQualitySettingsWidget_C_UpdateMainOptionStringByComboBox_Params
{
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.GetComboBox
struct UQualitySettingsWidget_C_GetComboBox_Params
{
	EQualityType                                       Selection;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UQualityComboBox_C*                          ComboBox;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.SetQualityLevelByComboBox
struct UQualitySettingsWidget_C_SetQualityLevelByComboBox_Params
{
	EQualityType                                       QualityType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.GetQualityLevelByComboBox
struct UQualitySettingsWidget_C_GetQualityLevelByComboBox_Params
{
	EQualityType                                       QualityType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                QualityLevel;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.IsChanged
struct UQualitySettingsWidget_C_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.GetScreenScaleValue_Slider
struct UQualitySettingsWidget_C_GetScreenScaleValue_Slider_Params
{
	float                                              ScreenScale;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.InitQualitySettingsWidget
struct UQualitySettingsWidget_C_InitQualitySettingsWidget_Params
{
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.OnApply
struct UQualitySettingsWidget_C_OnApply_Params
{
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__MainQualityComboBox_K2Node_ComponentBoundEvent_663_OnSelectionChanged__DelegateSignature
struct UQualitySettingsWidget_C_BndEvt__MainQualityComboBox_K2Node_ComponentBoundEvent_663_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.Construct
struct UQualitySettingsWidget_C_Construct_Params
{
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_2029_OnSelectionChanged__DelegateSignature
struct UQualitySettingsWidget_C_BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_2029_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__AnitiAliasingComboBox_K2Node_ComponentBoundEvent_2255_OnSelectionChanged__DelegateSignature
struct UQualitySettingsWidget_C_BndEvt__AnitiAliasingComboBox_K2Node_ComponentBoundEvent_2255_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__PostProcessComboBox_K2Node_ComponentBoundEvent_2259_OnSelectionChanged__DelegateSignature
struct UQualitySettingsWidget_C_BndEvt__PostProcessComboBox_K2Node_ComponentBoundEvent_2259_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_2264_OnSelectionChanged__DelegateSignature
struct UQualitySettingsWidget_C_BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_2264_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__TextureComboBox_K2Node_ComponentBoundEvent_2270_OnSelectionChanged__DelegateSignature
struct UQualitySettingsWidget_C_BndEvt__TextureComboBox_K2Node_ComponentBoundEvent_2270_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__EffectComboBox_K2Node_ComponentBoundEvent_2277_OnSelectionChanged__DelegateSignature
struct UQualitySettingsWidget_C_BndEvt__EffectComboBox_K2Node_ComponentBoundEvent_2277_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__FoliageComboBox_K2Node_ComponentBoundEvent_2285_OnSelectionChanged__DelegateSignature
struct UQualitySettingsWidget_C_BndEvt__FoliageComboBox_K2Node_ComponentBoundEvent_2285_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.OnReset
struct UQualitySettingsWidget_C_OnReset_Params
{
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.OnDefault
struct UQualitySettingsWidget_C_OnDefault_Params
{
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.ExecuteUbergraph_QualitySettingsWidget
struct UQualitySettingsWidget_C_ExecuteUbergraph_QualitySettingsWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
