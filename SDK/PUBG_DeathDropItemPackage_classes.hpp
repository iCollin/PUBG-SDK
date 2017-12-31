#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_DeathDropItemPackage_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DeathDropItemPackage.DeathDropItemPackage_C
// 0x0008 (0x0530 - 0x0528)
class ADeathDropItemPackage_C : public AFloorSnapItemPackage
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0528(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x70d2c535);
		return ptr;
	}


	void GetCategory(struct FText* Category);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_DeathDropItemPackage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
