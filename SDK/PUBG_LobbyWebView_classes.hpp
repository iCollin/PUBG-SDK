#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyWebView_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass LobbyWebView.LobbyWebView_C
// 0x0024 (0x0264 - 0x0240)
class ULobbyWebView_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (Transient, DuplicateTransient)
	class UCoherentUIGTWidget*                         WebView_1;                                                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UCoherentUIGTWidget*>                 ViewArray;                                                // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                TickForWebViewVisibilityChange;                           // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xca647597);
		return ptr;
	}


	void WebViewBroadcast(const struct FString& EventName, const struct FString& Parameter);
	void WebViewUnload(int ViewIndex);
	void WebViewShow(int VeiwIndex, bool Visible);
	void HandleEventFromWeb(class UCoherentUIGTJSPayload* payload);
	void WebViewInputFocus(int ViewIndex);
	void WebViewLoad(int ViewIndex, const struct FString& URL);
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void Destruct();
	void J_1(class UCoherentUIGTJSPayload* payload);
	void BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_383_UIGTReadyForBindingsSignature__DelegateSignature();
	void PressAKey();
	void PressBKey();
	void ExecuteUbergraph_LobbyWebView(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
