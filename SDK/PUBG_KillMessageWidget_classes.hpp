#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_KillMessageWidget_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass KillMessageWidget.KillMessageWidget_C
// 0x0350 (0x0638 - 0x02E8)
class UKillMessageWidget_C : public UNewSystemMessageWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            KillMsgVanishing;                                         // 0x02F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            KillMsgEmerging;                                          // 0x02F8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  AlivePlayer;                                              // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     Border_2;                                                 // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              HorizontalBox_1;                                          // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Image_1;                                                  // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOverlay*                                    KillCountLayer;                                           // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  KillMsgBlock;                                             // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  MyKills;                                                  // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                VerticalBox_1;                                            // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDeathMessage                               DeathMessage;                                             // 0x0340(0x0098) (Edit, BlueprintVisible)
	struct FSlateColor                                 teamColor;                                                // 0x03D8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 ImportantColor;                                           // 0x0400(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 NormalColor;                                              // 0x0428(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       KillerNameText;                                           // 0x0450(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       ReasonText;                                               // 0x0468(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       VictimNameText;                                           // 0x0480(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       WhatHappenedText;                                         // 0x0498(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       OptionText;                                               // 0x04B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       MethodText;                                               // 0x04C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bNotDisplayKiller;                                        // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04E1(0x0003) MISSED OFFSET
	int                                                tmpInt;                                                   // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       MyKillMsg;                                                // 0x04E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       KillMsgText;                                              // 0x0500(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 TeamKillerColor;                                          // 0x0518(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 TeamKillerDBNOColor;                                      // 0x0540(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 TeamVictimColor;                                          // 0x0568(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 TeamVictimDBNOColor;                                      // 0x0590(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 MyMsgColor;                                               // 0x05B8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 NormalDBNOColor;                                          // 0x05E0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bIsStealFriendlyFire;                                     // 0x0608(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDetailKillMessage;                                       // 0x0609(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x060A(0x0006) MISSED OFFSET
	struct FSlateColor                                 MyKillLogColor;                                           // 0x0610(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x031fbd85);
		return ptr;
	}


	void UpdateDeathMessage(const struct FDeathMessage& NewDeathMessage);
	void SetKillMessageFont();
	void OnPrepass_1(class UWidget* BoundWidget);
	void SetKillMessageText();
	void GetNumStartTeam(int* NumStartTeam);
	void On_AlivePlayer_Prepass_1(class UWidget* BoundWidget);
	void On_MyKills_Prepass_1(class UWidget* BoundWidget);
	struct FLinearColor GetBrushColor_1();
	void GetTeamAlive(int* Alive);
	struct FText Get_AlivePlayer_Text_1();
	void GetAlivePlayerNum(int* AlivePlayer);
	void GetKillNum(int* KillNum);
	ESlateVisibility Get_Killer_Visibility_1();
	ESlateVisibility Get_Insert2_Visibility_1();
	ESlateVisibility Get_Insert_Visibility_1();
	void GetFadeInAnimation(class UWidgetAnimation** Animation);
	void GetFadeOutAnimation(class UWidgetAnimation** Animation);
	void InitializeKillMessageText();
	void IsVictimTeam(bool* IsTeam);
	void IsKillerTeam(bool* IsTeam);
	void Construct();
	void ExecuteUbergraph_KillMessageWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
