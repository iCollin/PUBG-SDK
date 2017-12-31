#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GamepadHelpInterface_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GamepadHelpInterface.GamepadHelpInterface_C
// 0x0000 (0x0028 - 0x0028)
class UGamepadHelpInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xaf31717f);
		return ptr;
	}


	void GetGamePadHelpWidgetClass(class UClass** GuideClass);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
