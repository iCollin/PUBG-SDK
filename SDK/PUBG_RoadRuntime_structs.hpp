#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Basic.hpp"
#include "PUBG_Engine_classes.hpp"
#include "PUBG_CoreUObject_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct RoadRuntime.CrossActorManager
// 0x0018
struct FCrossActorManager
{
	class UClass*                                      Prototype;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      SideActor;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SocketIndex;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct RoadRuntime.CrossMeshManager
// 0x0020
struct FCrossMeshManager
{
	class UStaticMesh*                                 Prototype;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Owner;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SideMesh;                                                 // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SocketIndex;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct RoadRuntime.SideActorManager
// 0x0020
struct FSideActorManager
{
	class UClass*                                      Prototype;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              SideActors;                                               // 0x0008(0x0010) (ZeroConstructor)
	int                                                SocketIndex;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct RoadRuntime.SideMeshManager
// 0x0020
struct FSideMeshManager
{
	class UStaticMesh*                                 Prototype;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Owner;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UHierarchicalInstancedStaticMeshComponent*   SideMeshes;                                               // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SocketIndex;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct RoadRuntime.CurbsManager
// 0x0088
struct FCurbsManager
{
	class AActor*                                      Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Prototype;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 StartPrototype;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 EndPrototype;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class USplineMeshComponent*>                CurbsComp;                                                // 0x0020(0x0010) (ExportObject, ZeroConstructor)
	class USplineComponent*                            Spline;                                                   // 0x0030(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	int                                                SplineIndex;                                              // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                SocketIndex;                                              // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Segmentation;                                             // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StepGeneration;                                           // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x0048(0x000C) (IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0054(0x000C) (IsPlainOldData)
	bool                                               CurbEnable;                                               // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               StartEnable;                                              // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               EndEnable;                                                // 0x0062(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0063(0x0005) MISSED OFFSET
	struct FInterpCurveVector                          SplineInfo;                                               // 0x0068(0x0018)
	float                                              StartRoll;                                                // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndRoll;                                                  // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
