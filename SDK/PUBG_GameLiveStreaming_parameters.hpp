#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GameLiveStreaming_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopWebCam
struct UGameLiveStreamingFunctionLibrary_StopWebCam_Params
{
};

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame
struct UGameLiveStreamingFunctionLibrary_StopBroadcastingGame_Params
{
};

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartWebCam
struct UGameLiveStreamingFunctionLibrary_StartWebCam_Params
{
	int                                                DesiredWebCamWidth;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DesiredWebCamHeight;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMirrorWebCamImage;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawSimpleWebCamVideo;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame
struct UGameLiveStreamingFunctionLibrary_StartBroadcastingGame_Params
{
	struct FString                                     LoginUserName;                                            // (Parm, ZeroConstructor)
	struct FString                                     LoginPassword;                                            // (Parm, ZeroConstructor)
	int                                                FrameRate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenScaling;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStartWebCam;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DesiredWebCamWidth;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DesiredWebCamHeight;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMirrorWebCamImage;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawSimpleWebCamVideo;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCaptureAudioFromComputer;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCaptureAudioFromMicrophone;                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  CoverUpImage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsWebCamEnabled
struct UGameLiveStreamingFunctionLibrary_IsWebCamEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame
struct UGameLiveStreamingFunctionLibrary_IsBroadcastingGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams
struct UQueryLiveStreamsCallbackProxy_QueryLiveStreams_Params
{
	struct FString                                     GameName;                                                 // (Parm, ZeroConstructor)
	class UQueryLiveStreamsCallbackProxy*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
