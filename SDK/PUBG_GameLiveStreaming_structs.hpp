#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Basic.hpp"
#include "PUBG_Engine_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameLiveStreaming.BlueprintLiveStreamInfo
// 0x0030
struct FBlueprintLiveStreamInfo
{
	struct FString                                     GameName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     StreamName;                                               // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FString                                     URL;                                                      // 0x0020(0x0010) (Edit, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
