#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_OndemandImageWidget_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OndemandImageWidget.OnDemandImageWidget_C.UnloadAndHideImage
struct UOnDemandImageWidget_C_UnloadAndHideImage_Params
{
};

// Function OndemandImageWidget.OnDemandImageWidget_C.LoadAndShowImage
struct UOnDemandImageWidget_C_LoadAndShowImage_Params
{
};

// Function OndemandImageWidget.OnDemandImageWidget_C.UpdateVisibility
struct UOnDemandImageWidget_C_UpdateVisibility_Params
{
};

// Function OndemandImageWidget.OnDemandImageWidget_C.SetImagePath
struct UOnDemandImageWidget_C_SetImagePath_Params
{
	TAssetPtr<class UTexture>                          TextureAsset;                                             // (Parm)
};

// Function OndemandImageWidget.OnDemandImageWidget_C.Construct
struct UOnDemandImageWidget_C_Construct_Params
{
};

// Function OndemandImageWidget.OnDemandImageWidget_C.Tick
struct UOnDemandImageWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OndemandImageWidget.OnDemandImageWidget_C.Destruct
struct UOnDemandImageWidget_C_Destruct_Params
{
};

// Function OndemandImageWidget.OnDemandImageWidget_C.ExecuteUbergraph_OnDemandImageWidget
struct UOnDemandImageWidget_C_ExecuteUbergraph_OnDemandImageWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
