#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ReplayListItem_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ReplayListItem.ReplayListItem_C.SetSeverRecording
struct UReplayListItem_C_SetSeverRecording_Params
{
	bool                                               bIsServerRecording;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.SetActionMessageDownloadPercent
struct UReplayListItem_C_SetActionMessageDownloadPercent_Params
{
	float                                              fPercent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.ShowDownloadPercent
struct UReplayListItem_C_ShowDownloadPercent_Params
{
	struct FString                                     strFileName;                                              // (Parm, ZeroConstructor)
	int                                                nReceived;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nTotal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.DisableDownload
struct UReplayListItem_C_DisableDownload_Params
{
};

// Function ReplayListItem.ReplayListItem_C.SetArchived
struct UReplayListItem_C_SetArchived_Params
{
	bool                                               IsArchived;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.SetRegionOrLocal
struct UReplayListItem_C_SetRegionOrLocal_Params
{
	struct FString                                     inRegionOrLocal;                                          // (Parm, ZeroConstructor)
};

// Function ReplayListItem.ReplayListItem_C.SetShouldKeep
struct UReplayListItem_C_SetShouldKeep_Params
{
	bool                                               bShouldKeep;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.SetCorrupt
struct UReplayListItem_C_SetCorrupt_Params
{
	bool                                               bIsCorrupt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.SetInComplete
struct UReplayListItem_C_SetInComplete_Params
{
	bool                                               bIncomplete;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.SetVersionCompatible
struct UReplayListItem_C_SetVersionCompatible_Params
{
	bool                                               bIsVersionCompatible;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.SetMode
struct UReplayListItem_C_SetMode_Params
{
	struct FString                                     Mode;                                                     // (Parm, ZeroConstructor)
};

// Function ReplayListItem.ReplayListItem_C.SetLength
struct UReplayListItem_C_SetLength_Params
{
	int                                                LengthInMS;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.SetActionMessageSimple
struct UReplayListItem_C_SetActionMessageSimple_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function ReplayListItem.ReplayListItem_C.SetActionMessageDecompressPercent
struct UReplayListItem_C_SetActionMessageDecompressPercent_Params
{
	float                                              fPercent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.SetActionMessage
struct UReplayListItem_C_SetActionMessage_Params
{
	bool                                               bIsDownloading;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUnzipping;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.SetDownloadCancelBtns
struct UReplayListItem_C_SetDownloadCancelBtns_Params
{
	bool                                               bIsDownloading;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUnzipping;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.SetDate
struct UReplayListItem_C_SetDate_Params
{
	struct FDateTime                                   Date;                                                     // (Parm)
};

// Function ReplayListItem.ReplayListItem_C.SetLive
struct UReplayListItem_C_SetLive_Params
{
	bool                                               IsLive;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.SetSize
struct UReplayListItem_C_SetSize_Params
{
	int                                                SizeInBytes;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.SetFriendlyName
struct UReplayListItem_C_SetFriendlyName_Params
{
	struct FString                                     FriendlyName;                                             // (Parm, ZeroConstructor)
};

// Function ReplayListItem.ReplayListItem_C.SetReplayItem
struct UReplayListItem_C_SetReplayItem_Params
{
	struct FReplayItem                                 ReplayItem;                                               // (Parm)
};

// Function ReplayListItem.ReplayListItem_C.SetSessionName
struct UReplayListItem_C_SetSessionName_Params
{
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
};

// Function ReplayListItem.ReplayListItem_C.OnProgress
struct UReplayListItem_C_OnProgress_Params
{
	struct FString                                     archive;                                                  // (Parm, ZeroConstructor)
	float                                              percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                bytes;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.OnFileDone
struct UReplayListItem_C_OnFileDone_Params
{
	struct FString                                     archive;                                                  // (Parm, ZeroConstructor)
	struct FString                                     file;                                                     // (Parm, ZeroConstructor)
};

// Function ReplayListItem.ReplayListItem_C.OnDone
struct UReplayListItem_C_OnDone_Params
{
	struct FString                                     archive;                                                  // (Parm, ZeroConstructor)
	TEnumAsByte<EZipUtilityCompletionState>            CompletionState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature
struct UReplayListItem_C_BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ReplayListItem.ReplayListItem_C.BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature
struct UReplayListItem_C_BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.UnzipEvent
struct UReplayListItem_C_UnzipEvent_Params
{
	struct FString                                     strFullPath;                                              // (Parm, ZeroConstructor)
	struct FString                                     strToExtract;                                             // (Parm, ZeroConstructor)
};

// Function ReplayListItem.ReplayListItem_C.ShowUnzipPercent
struct UReplayListItem_C_ShowUnzipPercent_Params
{
	struct FString                                     archive;                                                  // (Parm, ZeroConstructor)
	float                                              percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                bytes;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UReplayListItem_C_BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ReplayListItem.ReplayListItem_C.OnStartProcess
struct UReplayListItem_C_OnStartProcess_Params
{
	struct FString                                     archive;                                                  // (Parm, ZeroConstructor)
	int                                                bytes;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.OnFileFound
struct UReplayListItem_C_OnFileFound_Params
{
	struct FString                                     archive;                                                  // (Parm, ZeroConstructor)
	struct FString                                     file;                                                     // (Parm, ZeroConstructor)
	int                                                Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.ShowUnZipFileDone
struct UReplayListItem_C_ShowUnZipFileDone_Params
{
	struct FString                                     archive;                                                  // (Parm, ZeroConstructor)
	struct FString                                     file;                                                     // (Parm, ZeroConstructor)
};

// Function ReplayListItem.ReplayListItem_C.ShowUnzipDone
struct UReplayListItem_C_ShowUnzipDone_Params
{
	struct FString                                     archive;                                                  // (Parm, ZeroConstructor)
	TEnumAsByte<EZipUtilityCompletionState>            CompletionState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
struct UReplayListItem_C_BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ReplayListItem.ReplayListItem_C.Construct
struct UReplayListItem_C_Construct_Params
{
};

// Function ReplayListItem.ReplayListItem_C.ExecuteUbergraph_ReplayListItem
struct UReplayListItem_C_ExecuteUbergraph_ReplayListItem_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.EventOnUpdateItem__DelegateSignature
struct UReplayListItem_C_EventOnUpdateItem__DelegateSignature_Params
{
	struct FReplayItem                                 inReplayItem;                                             // (Parm)
};

// Function ReplayListItem.ReplayListItem_C.EventOnUpdateShouldKeep__DelegateSignature
struct UReplayListItem_C_EventOnUpdateShouldKeep__DelegateSignature_Params
{
	struct FString                                     RegionOrLocal;                                            // (Parm, ZeroConstructor)
	struct FReplayItem                                 inReplayItem;                                             // (Parm)
	struct FReplayItem                                 bShoudUpdate;                                             // (Parm)
};

// Function ReplayListItem.ReplayListItem_C.EventOnCancelDownloading__DelegateSignature
struct UReplayListItem_C_EventOnCancelDownloading__DelegateSignature_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.EventOnDownload__DelegateSignature
struct UReplayListItem_C_EventOnDownload__DelegateSignature_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.EventOnItemClicked__DelegateSignature
struct UReplayListItem_C_EventOnItemClicked__DelegateSignature_Params
{
	struct FString                                     inRegionOrLocal;                                          // (Parm, ZeroConstructor)
	struct FReplayItem                                 inReplayItem;                                             // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
