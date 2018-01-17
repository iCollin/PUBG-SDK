#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ObserverTeamInfoList_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ObserverTeamInfoList.ObserverTeamInfoList_C
// 0x0030 (0x0270 - 0x0240)
class UObserverTeamInfoList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (Transient, DuplicateTransient)
	class UVerticalBox*                                TeamList;                                                 // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class ATslCharacter*>                       RefreshedPlayerLIst;                                      // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class USquadPlayerInfoWidget_C*>            SquadPlayerInfoPool;                                      // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x7f963713);
		return ptr;
	}


	void On_TeamList_Prepass_2(class UWidget* BoundWidget);
	void CollapseAllSquadPlayerInfos();
	void SetSquadPlayerInfo(int Index, class ATslCharacter* TslCharacter, class USquadPlayerInfoWidget_C** SquadPlayerInfo);
	void DestructSquadPlayerInfoPool();
	void ConstructSquadPlayerInfoPool();
	void On_TeamList_Prepass_1(class UWidget* BoundWidget);
	void IsSameTeam(class ATslCharacter* Character1, class ATslCharacter* Character2, bool* retVal);
	void FindSpectateOrFollowCharacter(class ATslCharacter** TslCharacter);
	void UpdateTeamList();
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void CustomTick();
	void TimerCheckUpdateList();
	void Destruct();
	void ExecuteUbergraph_ObserverTeamInfoList(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
