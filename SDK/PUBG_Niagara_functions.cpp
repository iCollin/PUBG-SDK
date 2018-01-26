// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Niagara_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Niagara.NiagaraComponent.SetRenderingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInRenderingEnabled            (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetRenderingEnabled(bool bInRenderingEnabled)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(30259);

	UNiagaraComponent_SetRenderingEnabled_Params params;
	params.bInRenderingEnabled = bInRenderingEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FVector4                InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UNiagaraComponent::SetNiagaraVariableVec4(const struct FString& InVariableName, const struct FVector4& InValue)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(30256);

	UNiagaraComponent_SetNiagaraVariableVec4_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FVector                 InValue                        (Parm, IsPlainOldData)

void UNiagaraComponent::SetNiagaraVariableVec3(const struct FString& InVariableName, const struct FVector& InValue)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(30253);

	UNiagaraComponent_SetNiagaraVariableVec3_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FVector2D               InValue                        (Parm, IsPlainOldData)

void UNiagaraComponent::SetNiagaraVariableVec2(const struct FString& InVariableName, const struct FVector2D& InValue)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(30250);

	UNiagaraComponent_SetNiagaraVariableVec2_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetNiagaraVariableFloat(const struct FString& InVariableName, float InValue)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(30247);

	UNiagaraComponent_SetNiagaraVariableFloat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetNiagaraVariableBool(const struct FString& InVariableName, bool InValue)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(30244);

	UNiagaraComponent_SetNiagaraVariableBool_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraStaticMeshDataInterfaceActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// class AActor*                  InSource                       (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetNiagaraStaticMeshDataInterfaceActor(const struct FString& InVariableName, class AActor* InSource)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(30241);

	UNiagaraComponent_SetNiagaraStaticMeshDataInterfaceActor_Params params;
	params.InVariableName = InVariableName;
	params.InSource = InSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraEmitterSpawnRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InEmitterName                  (Parm, ZeroConstructor)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetNiagaraEmitterSpawnRate(const struct FString& InEmitterName, float InValue)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(30238);

	UNiagaraComponent_SetNiagaraEmitterSpawnRate_Params params;
	params.InEmitterName = InEmitterName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.ResetEffect
// (Final, Native, Public, BlueprintCallable)

void UNiagaraComponent::ResetEffect()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(30237);

	UNiagaraComponent_ResetEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.ReinitializeEffect
// (Final, Native, Public, BlueprintCallable)

void UNiagaraComponent::ReinitializeEffect()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(30236);

	UNiagaraComponent_ReinitializeEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraFunctionLibrary.SpawnEffectAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraEffect*          EffectTemplate                 (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// class UNiagaraComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UNiagaraComponent* UNiagaraFunctionLibrary::STATIC_SpawnEffectAttached(class UNiagaraEffect* EffectTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(30346);

	UNiagaraFunctionLibrary_SpawnEffectAttached_Params params;
	params.EffectTemplate = EffectTemplate;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraFunctionLibrary.SpawnEffectAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UNiagaraEffect*          EffectTemplate                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// class UNiagaraComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UNiagaraComponent* UNiagaraFunctionLibrary::STATIC_SpawnEffectAtLocation(class UObject* WorldContextObject, class UNiagaraEffect* EffectTemplate, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(30339);

	UNiagaraFunctionLibrary_SpawnEffectAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.EffectTemplate = EffectTemplate;
	params.Location = Location;
	params.Rotation = Rotation;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
