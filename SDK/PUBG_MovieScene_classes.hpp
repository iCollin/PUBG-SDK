#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MovieScene_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MovieScene.MovieSceneSignedObject
// 0x0088 (0x00B0 - 0x0028)
class UMovieSceneSignedObject : public UObject
{
public:
	struct FGuid                                       Signature;                                                // 0x0028(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0038(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x081542ba);
		return ptr;
	}

};


// Class MovieScene.MovieScene
// 0x0080 (0x0130 - 0x00B0)
class UMovieScene : public UMovieSceneSignedObject
{
public:
	TArray<struct FMovieSceneSpawnable>                Spawnables;                                               // 0x00B0(0x0010) (ZeroConstructor)
	TArray<struct FMovieScenePossessable>              Possessables;                                             // 0x00C0(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneBinding>                  ObjectBindings;                                           // 0x00D0(0x0010) (ZeroConstructor)
	TArray<class UMovieSceneTrack*>                    MasterTracks;                                             // 0x00E0(0x0010) (ExportObject, ZeroConstructor)
	class UMovieSceneTrack*                            CameraCutTrack;                                           // 0x00F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FFloatRange                                 SelectionRange;                                           // 0x00F8(0x0010)
	struct FFloatRange                                 PlaybackRange;                                            // 0x0108(0x0010)
	bool                                               bForceFixedFrameIntervalPlayback;                         // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	float                                              FixedFrameInterval;                                       // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InTime;                                                   // 0x0120(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              OutTime;                                                  // 0x0124(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              StartTime;                                                // 0x0128(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              EndTime;                                                  // 0x012C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xad0d0963);
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOverridesInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneBindingOverridesInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x9cb7061a);
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOverrides
// 0x0070 (0x0098 - 0x0028)
class UMovieSceneBindingOverrides : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FMovieSceneBindingOverrideData>      BindingData;                                              // 0x0030(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x6d52760d);
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneBindingOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x7f76072c);
		return ptr;
	}

};


// Class MovieScene.MovieSceneFolder
// 0x0048 (0x0070 - 0x0028)
class UMovieSceneFolder : public UObject
{
public:
	struct FName                                       FolderName;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UMovieSceneFolder*>                   ChildFolders;                                             // 0x0030(0x0010) (ZeroConstructor)
	TArray<class UMovieSceneTrack*>                    ChildMasterTracks;                                        // 0x0040(0x0010) (ExportObject, ZeroConstructor)
	TArray<struct FString>                             ChildObjectBindingStrings;                                // 0x0050(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x18373ba3);
		return ptr;
	}

};


// Class MovieScene.MovieSceneSequencePlayer
// 0x06D8 (0x0700 - 0x0028)
class UMovieSceneSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x348];                                     // 0x0028(0x0348) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlay;                                                   // 0x0370(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStop;                                                   // 0x0380(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPause;                                                  // 0x0390(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bIsPlaying : 1;                                           // 0x03A0(0x0001)
	unsigned char                                      bReversePlayback : 1;                                     // 0x03A0(0x0001)
	unsigned char                                      bPendingFirstUpdate : 1;                                  // 0x03A0(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	class UMovieSceneSequence*                         Sequence;                                                 // 0x03A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeCursorPosition;                                       // 0x03B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x03B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentNumLoops;                                          // 0x03BC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x03C0(0x0010) MISSED OFFSET
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x03D0(0x0028)
	unsigned char                                      UnknownData03[0x308];                                     // 0x03F8(0x0308) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x6ddc4b43);
		return ptr;
	}


	void Stop();
	void StartPlayingNextTick();
	void SetPlayRate(float PlayRate);
	void SetPlaybackRange(float NewStartTime, float NewEndTime);
	void SetPlaybackPosition(float NewPlaybackPosition);
	void PlayReverse();
	void PlayLooping(int NumLoops);
	void Play();
	void Pause();
	bool IsPlaying();
	float GetPlayRate();
	float GetPlaybackStart();
	float GetPlaybackPosition();
	float GetPlaybackEnd();
	float GetLength();
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	void ChangePlaybackDirection();
};


// Class MovieScene.MovieSceneSection
// 0x0020 (0x00D0 - 0x00B0)
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions               EvalOptions;                                              // 0x00B0(0x0002) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00B2(0x0002) MISSED OFFSET
	float                                              StartTime;                                                // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RowIndex;                                                 // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OverlapPriority;                                          // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsActive : 1;                                            // 0x00C4(0x0001) (Edit)
	unsigned char                                      bIsLocked : 1;                                            // 0x00C4(0x0001) (Edit)
	unsigned char                                      bIsInfinite : 1;                                          // 0x00C4(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	float                                              PrerollTime;                                              // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PostrollTime;                                             // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xccefd5d0);
		return ptr;
	}

};


// Class MovieScene.MovieSceneTrack
// 0x0010 (0x00C0 - 0x00B0)
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions                 EvalOptions;                                              // 0x00B0(0x0004) (Edit)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00B4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x72a9e938);
		return ptr;
	}

};


// Class MovieScene.MovieSceneSegmentCompilerTestTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneSegmentCompilerTestTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  SectionArray;                                             // 0x00C0(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb155ff32);
		return ptr;
	}

};


// Class MovieScene.MovieSceneSegmentCompilerTestSection
// 0x0000 (0x00D0 - 0x00D0)
class UMovieSceneSegmentCompilerTestSection : public UMovieSceneSection
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x630e7c96);
		return ptr;
	}

};


// Class MovieScene.MovieSceneSequence
// 0x0280 (0x0330 - 0x00B0)
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	struct FCachedMovieSceneEvaluationTemplate         EvaluationTemplate;                                       // 0x00B0(0x0220)
	struct FMovieSceneTrackCompilationParams           TemplateParameters;                                       // 0x02D0(0x0002)
	unsigned char                                      UnknownData00[0x6];                                       // 0x02D2(0x0006) MISSED OFFSET
	TMap<class UObject*, struct FCachedMovieSceneEvaluationTemplate> InstancedSubSequenceEvaluationTemplates;                  // 0x02D8(0x0050) (ZeroConstructor)
	bool                                               bParentContextsAreSignificant;                            // 0x0328(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0329(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xdca4ab94);
		return ptr;
	}

};


// Class MovieScene.MovieSceneNameableTrack
// 0x0000 (0x00C0 - 0x00C0)
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x1adf3ae7);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
