#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BattleListWidget_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BattleListWidget.BattleListWidget_C
// 0x0054 (0x0294 - 0x0240)
class UBattleListWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (Transient, DuplicateTransient)
	class UScrollBox*                                  BattleListScrollBox;                                      // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     BGBOX;                                                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class ATslCharacter*>                       RefreshedPlayerLIst;                                      // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               IsShow;                                                   // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	TArray<class UPlayerInfoWidget_C*>                 PlayerInfoPool;                                           // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UBattleListSubTitle_C*>               BattleListSubTitlePool;                                   // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                IndexCount;                                               // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x257083b1);
		return ptr;
	}


	void SetBattleListSubTitle(int Index, const struct FString& SubTitle);
	void ClearBattleList();
	void CollapseAllPlayerInfos();
	void SetPlayerInfo(class ATslCharacter* TslCharacter, class UPlayerInfoWidget_C** PlayerInfo);
	void DestructPlayerInfoPool();
	void ConstructPlayerInfoPool();
	void FindCharacterByShortcutNum(int ShortcutNum, class ATslCharacter** Character);
	void AddSubTitle(const struct FString& SubTitle);
	void IsSameTeam(class ATslCharacter* Character1, class ATslCharacter* Character2, bool* retVal);
	void SetNearbyPlayerIndex(int Index);
	void BattleListSetCharacter10();
	void BattleListSetCharacter9();
	void BattleListSetCharacter8();
	void BattleListSetCharacter7();
	void BattleListSetCharacter6();
	void BattleListSetCharacter5();
	void BattleListSetCharacter4();
	void BattleListSetCharacter3();
	void BattleListSetCharacter2();
	void BattleListSetCharacter1();
	void BindKeyBattleList();
	void UpdateEngagedEnemiesList();
	void FindSpectateOrFollowCharacter(class ATslCharacter** TslCharacter);
	void UpdateNearbyPlayersList();
	void FindCharacterByPlayerState(class APlayerState* PlayerState, class ATslCharacter** Character);
	void UpdateOtherEngagementsList();
	void RefreshPlayerList();
	void Construct();
	void CustomTick();
	void TimerCheckUpdateList();
	void Destruct();
	void ExecuteUbergraph_BattleListWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
