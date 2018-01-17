#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Niagara_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Niagara.NiagaraActor
// 0x0008 (0x03B8 - 0x03B0)
class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                           NiagaraComponent;                                         // 0x03B0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x336d3996);
		return ptr;
	}

};


// Class Niagara.NiagaraComponent
// 0x0050 (0x08A0 - 0x0850)
class UNiagaraComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0850(0x0010) MISSED OFFSET
	TArray<struct FNiagaraVariable>                    EffectParameterLocalOverrides;                            // 0x0860(0x0010) (Edit, ZeroConstructor)
	TArray<struct FNiagaraScriptDataInterfaceInfo>     EffectDataInterfaceLocalOverrides;                        // 0x0870(0x0010) (Edit, ZeroConstructor)
	TArray<class UNiagaraDataInterface*>               InstanceDataInterfaces;                                   // 0x0880(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bRenderingEnabled;                                        // 0x0890(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0891(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x33599188);
		return ptr;
	}


	void SetRenderingEnabled(bool bInRenderingEnabled);
	void SetNiagaraVariableVec4(const struct FString& InVariableName, const struct FVector4& InValue);
	void SetNiagaraVariableVec3(const struct FString& InVariableName, const struct FVector& InValue);
	void SetNiagaraVariableVec2(const struct FString& InVariableName, const struct FVector2D& InValue);
	void SetNiagaraVariableFloat(const struct FString& InVariableName, float InValue);
	void SetNiagaraVariableBool(const struct FString& InVariableName, bool InValue);
	void SetNiagaraStaticMeshDataInterfaceActor(const struct FString& InVariableName, class AActor* InSource);
	void SetNiagaraEmitterSpawnRate(const struct FString& InEmitterName, float InValue);
	void ResetEffect();
	void ReinitializeEffect();
};


// Class Niagara.NiagaraDataInterface
// 0x0000 (0x0028 - 0x0028)
class UNiagaraDataInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xba7402c8);
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurveBase
// 0x0000 (0x0028 - 0x0028)
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x5b39906a);
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurve
// 0x0070 (0x0098 - 0x0028)
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  Curve;                                                    // 0x0028(0x0070) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x644559d9);
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVectorCurve
// 0x0150 (0x0178 - 0x0028)
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   // 0x0028(0x0070) (Edit)
	struct FRichCurve                                  YCurve;                                                   // 0x0098(0x0070) (Edit)
	struct FRichCurve                                  ZCurve;                                                   // 0x0108(0x0070) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xefa5c622);
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceColorCurve
// 0x01C0 (0x01E8 - 0x0028)
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  RedCurve;                                                 // 0x0028(0x0070) (Edit)
	struct FRichCurve                                  GreenCurve;                                               // 0x0098(0x0070) (Edit)
	struct FRichCurve                                  BlueCurve;                                                // 0x0108(0x0070) (Edit)
	struct FRichCurve                                  AlphaCurve;                                               // 0x0178(0x0070) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x824b82ba);
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurlNoise
// 0x0000 (0x0028 - 0x0028)
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa60a0f14);
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceSpline
// 0x0098 (0x00C0 - 0x0028)
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
public:
	class AActor*                                      Source;                                                   // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0030(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x0458157b);
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceStaticMesh
// 0x01C8 (0x01F0 - 0x0028)
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
public:
	class UStaticMesh*                                 DefaultMesh;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Source;                                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNDIStaticMeshSectionFilter                 SectionFilter;                                            // 0x0038(0x0068) (Edit)
	bool                                               bEnableVertexColorRangeSorting;                           // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14F];                                     // 0x00A1(0x014F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x43c2e895);
		return ptr;
	}

};


// Class Niagara.NiagaraEffect
// 0x0048 (0x0070 - 0x0028)
class UNiagaraEffect : public UObject
{
public:
	TArray<struct FNiagaraEmitterHandle>               EmitterHandles;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	class UNiagaraScript*                              EffectScript;                                             // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraParameterBinding>            ParameterBindings;                                        // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraParameterBinding>            DataInterfaceBindings;                                    // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraEmitterInternalVariableBinding> InternalEmitterVariableBindings;                          // 0x0060(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xaccf3b84);
		return ptr;
	}

};


// Class Niagara.NiagaraEffectRendererProperties
// 0x0000 (0x0028 - 0x0028)
class UNiagaraEffectRendererProperties : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x2fc528c6);
		return ptr;
	}

};


// Class Niagara.NiagaraLightRendererProperties
// 0x0010 (0x0038 - 0x0028)
class UNiagaraLightRendererProperties : public UNiagaraEffectRendererProperties
{
public:
	float                                              RadiusScale;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ColorAdd;                                                 // 0x002C(0x000C) (Edit, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xdc8e3097);
		return ptr;
	}

};


// Class Niagara.NiagaraMeshRendererProperties
// 0x0008 (0x0030 - 0x0028)
class UNiagaraMeshRendererProperties : public UNiagaraEffectRendererProperties
{
public:
	class UStaticMesh*                                 ParticleMesh;                                             // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xca95578e);
		return ptr;
	}

};


// Class Niagara.NiagaraRibbonRendererProperties
// 0x0000 (0x0028 - 0x0028)
class UNiagaraRibbonRendererProperties : public UNiagaraEffectRendererProperties
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xc73b793d);
		return ptr;
	}

};


// Class Niagara.NiagaraSpriteRendererProperties
// 0x0020 (0x0048 - 0x0028)
class UNiagaraSpriteRendererProperties : public UNiagaraEffectRendererProperties
{
public:
	struct FVector2D                                   SubImageSize;                                             // 0x0028(0x0008) (Edit, IsPlainOldData)
	ENiagaraSpriteAlignment                            Alignment;                                                // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraSpriteFacingMode                           FacingMode;                                               // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	struct FVector                                     CustomFacingVectorMask;                                   // 0x0034(0x000C) (Edit, IsPlainOldData)
	ENiagaraSortMode                                   SortMode;                                                 // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x66e8689e);
		return ptr;
	}

};


// Class Niagara.NiagaraScript
// 0x00C0 (0x00E8 - 0x0028)
class UNiagaraScript : public UObject
{
public:
	TArray<unsigned char>                              ByteCode;                                                 // 0x0028(0x0010) (ZeroConstructor)
	struct FNiagaraParameters                          Parameters;                                               // 0x0038(0x0010)
	struct FNiagaraParameters                          InternalParameters;                                       // 0x0048(0x0010)
	TArray<struct FNiagaraVariable>                    Attributes;                                               // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraDataSetProperties>           EventReceivers;                                           // 0x0068(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraDataSetProperties>           EventGenerators;                                          // 0x0078(0x0010) (ZeroConstructor)
	struct FNiagaraScriptDataUsageInfo                 DataUsage;                                                // 0x0088(0x0001)
	ENiagaraScriptUsage                                Usage;                                                    // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x008A(0x0006) MISSED OFFSET
	TArray<struct FNiagaraScriptDataInterfaceInfo>     DataInterfaceInfo;                                        // 0x0090(0x0010) (ZeroConstructor)
	TArray<struct FVMExternalFunctionBindingInfo>      CalledVMExternalFunctions;                                // 0x00A0(0x0010) (ZeroConstructor)
	ENiagaraNumericOutputTypeSelectionMode             NumericOutputTypeSelectionMode;                           // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x27];                                      // 0x00B1(0x0027) MISSED OFFSET
	TArray<struct FNiagaraStatScope>                   StatScopes;                                               // 0x00D8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x5fafd116);
		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction
// 0x0000 (0x0028 - 0x0028)
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x3792e9e6);
		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// 0x0008 (0x0030 - 0x0028)
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32_t                                           NumParticles;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x3f0fcb27);
		return ptr;
	}

};


// Class Niagara.NiagaraEmitterProperties
// 0x00E0 (0x0108 - 0x0028)
class UNiagaraEmitterProperties : public UObject
{
public:
	float                                              SpawnRate;                                                // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLocalSpace;                                              // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	class UMaterial*                                   Material;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraCollisionMode                              CollisionMode;                                            // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	class UNiagaraEffectRendererProperties*            RendererProperties;                                       // 0x0048(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FNiagaraEmitterScriptProperties             UpdateScriptProps;                                        // 0x0050(0x0028)
	struct FNiagaraEmitterScriptProperties             SpawnScriptProps;                                         // 0x0078(0x0028)
	struct FNiagaraEventScriptProperties               EventHandlerScriptProps;                                  // 0x00A0(0x0050) (Edit)
	TArray<struct FNiagaraEmitterBurst>                Bursts;                                                   // 0x00F0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bInterpolatedSpawning : 1;                                // 0x0100(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0101(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x719a54a4);
		return ptr;
	}

};


// Class Niagara.NiagaraFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x0b88dae4);
		return ptr;
	}


	class UNiagaraComponent* STATIC_SpawnEffectAttached(class UNiagaraEffect* EffectTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy);
	class UNiagaraComponent* STATIC_SpawnEffectAtLocation(class UObject* WorldContextObject, class UNiagaraEffect* EffectTemplate, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy);
};


// Class Niagara.NiagaraScriptSourceBase
// 0x0020 (0x0048 - 0x0028)
class UNiagaraScriptSourceBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x2d12dd56);
		return ptr;
	}

};


// Class Niagara.NiagaraSettings
// 0x0050 (0x0088 - 0x0038)
class UNiagaraSettings : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       DefaultEffect;                                            // 0x0038(0x0010) (Edit, Config)
	struct FStringAssetReference                       DefaultEmitter;                                           // 0x0048(0x0010) (Edit, Config)
	struct FStringAssetReference                       DefaultScript;                                            // 0x0058(0x0010) (Edit, Config)
	TArray<struct FStringAssetReference>               AdditionalParameterTypes;                                 // 0x0068(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               AdditionalPayloadTypes;                                   // 0x0078(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x93e88ea0);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
