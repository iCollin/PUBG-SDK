#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PresetColorComboBoxWidget_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass PresetColorComboBoxWidget.PresetColorComboBoxWidget_C
// 0x0000 (0x0298 - 0x0298)
class UPresetColorComboBoxWidget_C : public UQualityComboBox_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x2f86559d);
		return ptr;
	}


	class UWidget* On_ComboBox_GenerateWidget_1(struct FString* Item);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
