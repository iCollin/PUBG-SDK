#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ReplayList_BP_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ReplayList_BP.ReplayList_BP_C
// 0x0070 (0x0420 - 0x03B0)
class AReplayList_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTslGameInstance*                            TslGameInstance;                                          // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUiReplayList_C*                             UiReplayList;                                             // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     IsLive;                                                   // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       NewVar_1;                                                 // 0x03E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     RegionOrLocal;                                            // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                PageSize;                                                 // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PageCount;                                                // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              prev_Percent;                                             // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	class UWidget*                                     CurrentItemWidget;                                        // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xc2f99a35);
		return ptr;
	}


	void OnUpdateItem(const struct FReplayItem& inReplayItem);
	void UpdateReplayList(const struct FString& inRegionOrLocal);
	void CheckReplayBusyStatus(bool* bIsReplayBusy);
	void OnGoPageBtn();
	void OnNextPageBtn();
	void OnPrevPageBtn();
	void ClearReplayList();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CreateReplayListEvent();
	void PrevPageEvent();
	void NextPageEvent();
	void GoPageEvent();
	void OnItemClicked(const struct FString& RegionOrLocal, const struct FReplayItem& inReplayItem);
	void ExecuteUbergraph_ReplayList_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
