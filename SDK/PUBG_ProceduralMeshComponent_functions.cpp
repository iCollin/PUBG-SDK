// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ProceduralMeshComponent_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UV0                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FLinearColor>    VertexColors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FProcMeshTangent> Tangents                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UProceduralMeshComponent::UpdateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40471);

	UProceduralMeshComponent_UpdateMeshSection_LinearColor_Params params;
	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Normals = Normals;
	params.UV0 = UV0;
	params.VertexColors = VertexColors;
	params.Tangents = Tangents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UV0                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FColor>          VertexColors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FProcMeshTangent> Tangents                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UProceduralMeshComponent::UpdateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40459);

	UProceduralMeshComponent_UpdateMeshSection_Params params;
	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Normals = Normals;
	params.UV0 = UV0;
	params.VertexColors = VertexColors;
	params.Tangents = Tangents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNewVisibility                 (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralMeshComponent::SetMeshSectionVisible(int SectionIndex, bool bNewVisibility)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40456);

	UProceduralMeshComponent_SetMeshSectionVisible_Params params;
	params.SectionIndex = SectionIndex;
	params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UProceduralMeshComponent::IsMeshSectionVisible(int SectionIndex)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40453);

	UProceduralMeshComponent_IsMeshSectionVisible_Params params;
	params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UProceduralMeshComponent::GetNumSections()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40451);

	UProceduralMeshComponent_GetNumSections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UV0                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FLinearColor>    VertexColors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FProcMeshTangent> Tangents                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bCreateCollision               (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralMeshComponent::CreateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40436);

	UProceduralMeshComponent_CreateMeshSection_LinearColor_Params params;
	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.UV0 = UV0;
	params.VertexColors = VertexColors;
	params.Tangents = Tangents;
	params.bCreateCollision = bCreateCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UV0                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FColor>          VertexColors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FProcMeshTangent> Tangents                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bCreateCollision               (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralMeshComponent::CreateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40421);

	UProceduralMeshComponent_CreateMeshSection_Params params;
	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.UV0 = UV0;
	params.VertexColors = VertexColors;
	params.Tangents = Tangents;
	params.bCreateCollision = bCreateCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralMeshComponent::ClearMeshSection(int SectionIndex)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40419);

	UProceduralMeshComponent_ClearMeshSection_Params params;
	params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
// (Final, Native, Public, BlueprintCallable)

void UProceduralMeshComponent::ClearCollisionConvexMeshes()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40418);

	UProceduralMeshComponent_ClearCollisionConvexMeshes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
// (Final, Native, Public, BlueprintCallable)

void UProceduralMeshComponent::ClearAllMeshSections()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40417);

	UProceduralMeshComponent_ClearAllMeshSections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FVector>         ConvexVerts                    (Parm, ZeroConstructor)

void UProceduralMeshComponent::AddCollisionConvexMesh(TArray<struct FVector> ConvexVerts)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40414);

	UProceduralMeshComponent_AddCollisionConvexMesh_Params params;
	params.ConvexVerts = ConvexVerts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UProceduralMeshComponent* InProcMesh                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 PlanePosition                  (Parm, IsPlainOldData)
// struct FVector                 PlaneNormal                    (Parm, IsPlainOldData)
// bool                           bCreateOtherHalf               (Parm, ZeroConstructor, IsPlainOldData)
// class UProceduralMeshComponent* OutOtherHalfProcMesh           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EProcMeshSliceCapOption        CapOption                      (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      CapMaterial                    (Parm, ZeroConstructor, IsPlainOldData)

void UKismetProceduralMeshLibrary::STATIC_SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, const struct FVector& PlanePosition, const struct FVector& PlaneNormal, bool bCreateOtherHalf, EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial, class UProceduralMeshComponent** OutOtherHalfProcMesh)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40545);

	UKismetProceduralMeshLibrary_SliceProceduralMesh_Params params;
	params.InProcMesh = InProcMesh;
	params.PlanePosition = PlanePosition;
	params.PlaneNormal = PlaneNormal;
	params.bCreateOtherHalf = bCreateOtherHalf;
	params.CapOption = CapOption;
	params.CapMaterial = CapMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOtherHalfProcMesh != nullptr)
		*OutOtherHalfProcMesh = params.OutOtherHalfProcMesh;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UStaticMesh*             InMesh                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            LodIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Vertices                       (Parm, OutParm, ZeroConstructor)
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         Normals                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector2D>       UVs                            (Parm, OutParm, ZeroConstructor)
// TArray<struct FProcMeshTangent> Tangents                       (Parm, OutParm, ZeroConstructor)

void UKismetProceduralMeshLibrary::STATIC_GetSectionFromStaticMesh(class UStaticMesh* InMesh, int LodIndex, int SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40531);

	UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Params params;
	params.InMesh = InMesh;
	params.LodIndex = LodIndex;
	params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Vertices != nullptr)
		*Vertices = params.Vertices;
	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Normals != nullptr)
		*Normals = params.Normals;
	if (UVs != nullptr)
		*UVs = params.UVs;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 BoxRadius                      (Parm, IsPlainOldData)
// TArray<struct FVector>         Vertices                       (Parm, OutParm, ZeroConstructor)
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         Normals                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector2D>       UVs                            (Parm, OutParm, ZeroConstructor)
// TArray<struct FProcMeshTangent> Tangents                       (Parm, OutParm, ZeroConstructor)

void UKismetProceduralMeshLibrary::STATIC_GenerateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40519);

	UKismetProceduralMeshLibrary_GenerateBoxMesh_Params params;
	params.BoxRadius = BoxRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Vertices != nullptr)
		*Vertices = params.Vertices;
	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Normals != nullptr)
		*Normals = params.Normals;
	if (UVs != nullptr)
		*UVs = params.UVs;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            NumX                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumY                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWinding                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor)

void UKismetProceduralMeshLibrary::STATIC_CreateGridMeshTriangles(int NumX, int NumY, bool bWinding, TArray<int>* Triangles)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40513);

	UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Params params;
	params.NumX = NumX;
	params.NumY = NumY;
	params.bWinding = bWinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Triangles != nullptr)
		*Triangles = params.Triangles;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStaticMeshComponent*    StaticMeshComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            LodIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// class UProceduralMeshComponent* ProcMeshComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bCreateCollision               (Parm, ZeroConstructor, IsPlainOldData)

void UKismetProceduralMeshLibrary::STATIC_CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int LodIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40508);

	UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Params params;
	params.StaticMeshComponent = StaticMeshComponent;
	params.LodIndex = LodIndex;
	params.ProcMeshComponent = ProcMeshComponent;
	params.bCreateCollision = bCreateCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Vert0                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Vert1                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Vert2                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Vert3                          (Parm, ZeroConstructor, IsPlainOldData)

void UKismetProceduralMeshLibrary::STATIC_ConvertQuadToTriangles(int Vert0, int Vert1, int Vert2, int Vert3, TArray<int>* Triangles)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40501);

	UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Params params;
	params.Vert0 = Vert0;
	params.Vert1 = Vert1;
	params.Vert2 = Vert2;
	params.Vert3 = Vert3;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Triangles != nullptr)
		*Triangles = params.Triangles;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UVs                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Normals                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FProcMeshTangent> Tangents                       (Parm, OutParm, ZeroConstructor)

void UKismetProceduralMeshLibrary::STATIC_CalculateTangentsForMesh(TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector2D> UVs, TArray<struct FVector>* Normals, TArray<struct FProcMeshTangent>* Tangents)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(40490);

	UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Params params;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.UVs = UVs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Normals != nullptr)
		*Normals = params.Normals;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
