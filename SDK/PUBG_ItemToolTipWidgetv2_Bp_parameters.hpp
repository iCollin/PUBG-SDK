#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ItemToolTipWidgetv2_Bp_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.GetItemDetailedName
struct UItemToolTipWidgetv2_Bp_C_GetItemDetailedName_Params
{
	class UEquipableItem*                              NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (Parm, OutParm)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.On_MagazineIcon_Prepass_1
struct UItemToolTipWidgetv2_Bp_C_On_MagazineIcon_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.GetFiringRate
struct UItemToolTipWidgetv2_Bp_C_GetFiringRate_Params
{
	class ATslWeapon_Trajectory*                       ShooterWeapon_Trajectory;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoClip;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FullReloadingTime;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FringRate;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.GetShooterWeapon
struct UItemToolTipWidgetv2_Bp_C_GetShooterWeapon_Params
{
	class UEquipableItem*                              EquipableItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ATslWeapon*                                  ShooterWeapon;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ATslWeapon_Trajectory*                       ShooterWeapon_Trajectory;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.OnUpdateEquipmentSlotItemToolTip
struct UItemToolTipWidgetv2_Bp_C_OnUpdateEquipmentSlotItemToolTip_Params
{
	class UEquipableItem*                              EquipableItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.OnUpdateVicinityOrInventorySlotItemToolTip
struct UItemToolTipWidgetv2_Bp_C_OnUpdateVicinityOrInventorySlotItemToolTip_Params
{
	class UEquipableItem*                              EquipableItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UEquipableItem*                              EquipmentSlotItem;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.Clear
struct UItemToolTipWidgetv2_Bp_C_Clear_Params
{
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.GetAttachedAmmo
struct UItemToolTipWidgetv2_Bp_C_GetAttachedAmmo_Params
{
	class UWeaponItem*                                 WeaponItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoClip;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.GetAmmo
struct UItemToolTipWidgetv2_Bp_C_GetAmmo_Params
{
	class UWeaponItem*                                 WeaponItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoClip;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.GetAttachedStability
struct UItemToolTipWidgetv2_Bp_C_GetAttachedStability_Params
{
	class ATslWeapon_Trajectory*                       ShooterWeapon_Trajectory;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Accuracy;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.GetStability
struct UItemToolTipWidgetv2_Bp_C_GetStability_Params
{
	class ATslWeapon_Trajectory*                       ShooterWeapon_Trajectory;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Accuracy;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.GetWeaponEffectiveRange
struct UItemToolTipWidgetv2_Bp_C_GetWeaponEffectiveRange_Params
{
	class ATslWeapon_Trajectory*                       ShooterWeapon_Trajectory;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EffectRange;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.GetWeaponPower
struct UItemToolTipWidgetv2_Bp_C_GetWeaponPower_Params
{
	class ATslWeapon*                                  ShooterWeapon;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.FadeIn
struct UItemToolTipWidgetv2_Bp_C_FadeIn_Params
{
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.UpdateDefaultInfo
struct UItemToolTipWidgetv2_Bp_C_UpdateDefaultInfo_Params
{
	TScriptInterface<class USlotInterface>             Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.SetItemByInterface
struct UItemToolTipWidgetv2_Bp_C_SetItemByInterface_Params
{
	TScriptInterface<class USlotInterface>             Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.UpdateItemDetailInfo
struct UItemToolTipWidgetv2_Bp_C_UpdateItemDetailInfo_Params
{
	class UItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.Construct
struct UItemToolTipWidgetv2_Bp_C_Construct_Params
{
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.UpdateSlotInfo
struct UItemToolTipWidgetv2_Bp_C_UpdateSlotInfo_Params
{
	TScriptInterface<class USlotInterface>*            SlotInterface;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.UpdateEquipmentSlotItemToolTip
struct UItemToolTipWidgetv2_Bp_C_UpdateEquipmentSlotItemToolTip_Params
{
	class UEquipableItem**                             EquipableItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.UpdateVicinityOrInventorySlotItemToolTip
struct UItemToolTipWidgetv2_Bp_C_UpdateVicinityOrInventorySlotItemToolTip_Params
{
	class UEquipableItem**                             EquipableItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UEquipableItem**                             EquipmentSlotItem;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv2_Bp.ItemToolTipWidgetv2_Bp_C.ExecuteUbergraph_ItemToolTipWidgetv2_Bp
struct UItemToolTipWidgetv2_Bp_C_ExecuteUbergraph_ItemToolTipWidgetv2_Bp_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
