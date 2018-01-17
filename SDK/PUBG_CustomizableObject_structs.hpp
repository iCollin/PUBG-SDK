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
//Enums
//---------------------------------------------------------------------------

// Enum CustomizableObject.EMutableParameterType
enum class EMutableParameterType : uint8_t
{
	EMutableParameterType__None    = 0,
	EMutableParameterType__Bool    = 1,
	EMutableParameterType__Int     = 2,
	EMutableParameterType__Float   = 3,
	EMutableParameterType__Color   = 4,
	EMutableParameterType__Projector = 5,
	EMutableParameterType__EMutableParameterType_MAX = 6
};


// Enum CustomizableObject.ECustomizableObjectRelevancy
enum class ECustomizableObjectRelevancy : uint8_t
{
	ECustomizableObjectRelevancy__All = 0,
	ECustomizableObjectRelevancy__ClientOnly = 1,
	ECustomizableObjectRelevancy__ECustomizableObjectRelevancy_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CustomizableObject.CustomizableObjectBoolParameterValue
// 0x0018
struct FCustomizableObjectBoolParameterValue
{
	struct FString                                     ParameterName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	bool                                               ParameterValue;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct CustomizableObject.CustomizableObjectIntParameterValue
// 0x0028
struct FCustomizableObjectIntParameterValue
{
	struct FString                                     ParameterName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	int                                                ParameterValue;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     ParameterValueName;                                       // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomizableObject.CustomizableObjectFloatParameterValue
// 0x0018
struct FCustomizableObjectFloatParameterValue
{
	struct FString                                     ParameterName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	float                                              ParameterValue;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct CustomizableObject.CustomizableObjectVectorParameterValue
// 0x0020
struct FCustomizableObjectVectorParameterValue
{
	struct FString                                     ParameterName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FLinearColor                                ParameterValue;                                           // 0x0010(0x0010) (Edit, EditConst, IsPlainOldData)
};

// ScriptStruct CustomizableObject.CustomizableObjectProjector
// 0x002C
struct FCustomizableObjectProjector
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x000C(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Up;                                                       // 0x0018(0x000C) (Edit, IsPlainOldData)
	struct FVector2D                                   Scale;                                                    // 0x0024(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct CustomizableObject.CustomizableObjectProjectorParameterValue
// 0x0040
struct FCustomizableObjectProjectorParameterValue
{
	struct FString                                     ParameterName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FCustomizableObjectProjector                Value;                                                    // 0x0010(0x002C) (Edit, EditConst)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct CustomizableObject.GeneratedTexture
// 0x0028
struct FGeneratedTexture
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
	class UTexture2D*                                  Texture;                                                  // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct CustomizableObject.GeneratedMaterial
// 0x0020
struct FGeneratedMaterial
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FGeneratedTexture>                   Textures;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct CustomizableObject.GeneratedMesh
// 0x0010
struct FGeneratedMesh
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UStaticMesh*                                 Mesh;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomizableObject.MutableModelImageProperties
// 0x0028
struct FMutableModelImageProperties
{
	struct FString                                     TextureParameterName;                                     // 0x0000(0x0010) (ZeroConstructor)
	TEnumAsByte<ETextureCompressionSettings>           CompressionSettings;                                      // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureFilter>                        Filter;                                                   // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	unsigned char                                      SRGB : 1;                                                 // 0x0014(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                LODBias;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureMipGenSettings>                MipGenSettings;                                           // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	unsigned char                                      bDitherMipMapAlpha : 1;                                   // 0x0020(0x0001)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct CustomizableObject.CustomizableObjectIdPair
// 0x0020
struct FCustomizableObjectIdPair
{
	struct FString                                     CustomizableObjectGroupName;                              // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     CustomizableObjectName;                                   // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct CustomizableObject.CompilationOptions
// 0x0018
struct FCompilationOptions
{
	bool                                               bLocal;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                OptimizationLevel;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct CustomizableObject.MutableModelParameterValue
// 0x0018
struct FMutableModelParameterValue
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	int                                                Value;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct CustomizableObject.MutableModelParameterProperties
// 0x0028
struct FMutableModelParameterProperties
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	EMutableParameterType                              Type;                                                     // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                ImageDescriptionCount;                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FMutableModelParameterValue>         PossibleValues;                                           // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomizableObject.PendingReleaseSkeletalMeshInfo
// 0x0010
struct FPendingReleaseSkeletalMeshInfo
{
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             Timestamp;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomizableObject.CustomizedMaterialTexture2D
// 0x0010
struct FCustomizedMaterialTexture2D
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomizableObject.CustomizableObjectIdentifier
// 0x0030
struct FCustomizableObjectIdentifier
{
	struct FString                                     CustomizableObjectGroupName;                              // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     CustomizableObjectName;                                   // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     Guid;                                                     // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
