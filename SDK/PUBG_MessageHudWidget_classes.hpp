#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MessageHudWidget_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MessageHudWidget.MessageHudWidget_C
// 0x0044 (0x0284 - 0x0240)
class UMessageHudWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (Transient, DuplicateTransient)
	class UBP_KillMessageListWidget_C*                 IconOtherKillMessage;                                     // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UNewMessageBorderWidget_C*                   ImportantMessageBox;                                      // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UNewMessageBorderWidget_C*                   MyKillMessageBox;                                         // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UNewMessageBorderWidget_C*                   OtherKillMessage;                                         // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UNewMessageBorderWidget_C*                   SystemMessageBox;                                         // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UKillMessageWidget_C*>                KillMessagePool;                                          // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MessageIndex;                                             // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x8b298825);
		return ptr;
	}


	void Icon_DisplayKilledMessage(const struct FDeathMessage& Input);
	void Normal_DisplayKilledMessage(const struct FDeathMessage& InputPin);
	void CreateGamePlayMessage(const struct FText& Message, TEnumAsByte<ETextJustify> TextAlignment, int TextSize, float Duration, bool bUseFade_In, class UAkAudioEvent* Sound, class UNewSystemMessageWidget_C** MessageWidget);
	void OnDisplayMessage(ESystemMessageType MessageType, const struct FText& Message, float Duration, class UAkAudioEvent* Sound);
	void CreateKillMessage(const struct FDeathMessage& DeathMessage, TEnumAsByte<ETextJustify> TextAlignment, const struct FSlateColor& TextColor, int TextSize, float Duration, bool bUseFade_In, bool bShowMyKillCount, bool bUseMessagePool, class UNewSystemMessageWidget_C** MessageWidget);
	void CreateSystemMessage(const struct FText& Message, TEnumAsByte<ETextJustify> TextAlignment, const struct FSlateColor& TextColor, int TextSize, float Duration, bool bUseFade_In, class UAkAudioEvent* Sound, class UNewSystemMessageWidget_C** MessageWidget);
	void OnDisplayKilledMessage(const struct FDeathMessage& DeathMessage);
	void OnDisplaySystemMessage(ESystemMessageType MessageType, const struct FText& Message);
	void InitializeMessageHUD();
	void Construct();
	void ExecuteUbergraph_MessageHudWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
