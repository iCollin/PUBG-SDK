#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_InventorySlotBaseWidget_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass InventorySlotBaseWidget.InventorySlotBaseWidget_C
// 0x00F8 (0x0348 - 0x0250)
class UInventorySlotBaseWidget_C : public USlotBaseWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (Transient, DuplicateTransient)
	EEquipSlotID                                       EquipSlotID;                                              // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0259(0x0003) MISSED OFFSET
	int                                                WeaponSlotIndex;                                          // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    SlotBackground_NormalEmpty;                               // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    SlotBackground_Normal;                                    // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    SlotBackground_On;                                        // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    SlotBackGround_SubOn;                                     // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    SlotBackground_Over;                                      // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGamepadFocus;                                            // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMouseOver;                                               // 0x0289(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x028A(0x0006) MISSED OFFSET
	class UMaterialInstanceDynamic*                    SlotDynamicMaterial;                                      // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TexParm;                                                  // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      ItemIcon;                                                 // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IconSize;                                                 // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02AC(0x0004) MISSED OFFSET
	class AEquipment*                                  Equipment;                                                // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AWeaponProcessor*                            WeaponProcessor;                                          // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UItem*                                       Item;                                                     // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTslItemDragDropOperation_C*                 TslItemDragDropOperation;                                 // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ToolTipShowDelaytime;                                     // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	class UInventoryWidget_C*                          InventoryWidget;                                          // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    RefreshFocus;                                             // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TScriptInterface<class USlotInterface>             FocusItemSlot;                                            // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnChildFocusSlotID;                                       // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UItemToolTipWidget_Bp_C*                     SaveToolTip;                                              // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnEnterSlot;                                              // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLeaveSlot;                                              // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDoSlotAction;                                           // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x24f7dcdd);
		return ptr;
	}


	bool IsFocusable();
	bool Down();
	class UUserWidget* GetDownWidget();
	class UUserWidget* GetFocusingChildWidget();
	class UUserWidget* GetLeftWidget();
	class UUserWidget* GetRightWidget();
	class UUserWidget* GetUpWidget();
	bool InputA();
	bool InputB();
	bool InputLB();
	bool InputLT();
	bool InputRB();
	bool InputRT();
	bool InputX();
	bool InputY();
	bool IsFocus();
	bool Left();
	bool Right();
	bool SetFocus(bool NewFocus);
	bool Up();
	void RaiseEnterEvent();
	void RaiseLeaveEvent();
	void GetBackgroundState(float* State);
	void GetInventoryWidget(class UInventoryWidget_C** InventoryWidget);
	void GetOperationSpawnValue_Bp(class UItem** Item, class UEquipableItem** EquipableItem, class UWeaponItem** WeaponItem, class UThrowableItem** ThrowableItem, class UAttachableItem** AttachmentItem, TScriptInterface<class USlotInterface>* SlotItem, TScriptInterface<class USlotContainerInterface>* Container);
	void GetOptions_Bp(struct FString* Options);
	void CreateTslDragDropOperation_Bp(class UTslItemDragDropOperation_C** OutOperation);
	void GetItem_Bp(class UItem** Item);
	void UpdateItem_Bp(class UWidget* BoundWidget);
	struct FSlateBrush GetIcon_Bp();
	void UpdateItemIcon_Bp(class UWidget* BoundWidget);
	void UpdateIconVisibility_Bp(class UWidget* BoundWidget);
	void IsSlotMouseOver_Bp(bool* IsMouseOver);
	void UpdateSlotBackground_Bp(class UWidget* BoundWidget);
	void GetTslItemDragDropOperation_Bp(class UTslItemDragDropOperation_C** TslItemDragDropOperation);
	void IsSlotSubOn_Bp(bool* SubOn);
	void IsSlotOn_Bp(bool* IsOn);
	void GetBackgroundTexture_Bp(class UTexture** BackgroundTexture);
	void ShowToolTip();
	void UpdateDragDropObject(class UTslItemDragDropOperation_C* DragDropObject);
	void SetInventory(class UInventoryWidget_C* InventoryWidget);
	void Construct();
	void UI_Gamepad_B();
	void OnWidgetInputX();
	void OnInputWidgetInputB();
	void Destruct();
	void OnUpdateItem(class UItem* Item);
	void OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	void OnDragEnter(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	void OnMouseLeave(struct FPointerEvent* MouseEvent);
	void OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void UpdateDragDroppingItem(class UItem* DroppingItem);
	void ExecuteUbergraph_InventorySlotBaseWidget(int EntryPoint);
	void OnDoSlotAction__DelegateSignature();
	void OnLeaveSlot__DelegateSignature(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& SlotContainer);
	void OnEnterSlot__DelegateSignature(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& SlotContainer);
	void OnChildFocusSlotID__DelegateSignature(EEquipSlotID FocusSlotID);
	void RefreshFocus__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
