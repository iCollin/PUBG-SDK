#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_InventoryBaseWidget_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass InventoryBaseWidget.InventoryBaseWidget_C
// 0x0018 (0x0278 - 0x0260)
class UInventoryBaseWidget_C : public UTslUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    RefreshFocus;                                             // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x1dd4f965);
		return ptr;
	}


	void UpdateDragDragDroppingItem(class UItem* DroppingItem);
	void SetInventoryWidget(class UInventoryWidget_C* Inventory);
	void ExecuteUbergraph_InventoryBaseWidget(int EntryPoint);
	void RefreshFocus__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
