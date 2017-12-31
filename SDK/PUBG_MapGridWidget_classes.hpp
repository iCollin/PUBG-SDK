#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MapGridWidget_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MapGridWidget.MapGridWidget_C
// 0x0000 (0x06F0 - 0x06F0)
class UMapGridWidget_C : public UMapGridWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x0ae6af85);
		return ptr;
	}


	struct FSlateBrush Get_Replayzone_Brush_2();
	struct FSlateBrush Get_Replayzone_Brush_1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
