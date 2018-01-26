// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_NewWorldMapWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NewWorldMapWidget.NewWorldMapWidget_C.CheckObserverStatus
// (Public, BlueprintCallable, BlueprintEvent)

void UNewWorldMapWidget_C::CheckObserverStatus()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78440);

	UNewWorldMapWidget_C_CheckObserverStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnInteract
// (Public, BlueprintCallable, BlueprintEvent)

void UNewWorldMapWidget_C::OnInteract()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78439);

	UNewWorldMapWidget_C_OnInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.GetZoomMultiplier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Multiplier                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewWorldMapWidget_C::GetZoomMultiplier(float* Multiplier)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78433);

	UNewWorldMapWidget_C_GetZoomMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Multiplier != nullptr)
		*Multiplier = params.Multiplier;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.GetMoveMapGridViewCenterToMyIconCenterDir
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UNewWorldMapWidget_C::GetMoveMapGridViewCenterToMyIconCenterDir()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78405);

	UNewWorldMapWidget_C_GetMoveMapGridViewCenterToMyIconCenterDir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMoveMapGridViewCenterToMyIconCenter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewWorldMapWidget_C::OnMoveMapGridViewCenterToMyIconCenter()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78403);

	UNewWorldMapWidget_C_OnMoveMapGridViewCenterToMyIconCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.SetMapGridPositoin
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Position                       (Parm, IsPlainOldData)

void UNewWorldMapWidget_C::SetMapGridPositoin(const struct FVector2D& Position)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78379);

	UNewWorldMapWidget_C_SetMapGridPositoin_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnHideWorldMap
// (Public, BlueprintCallable, BlueprintEvent)

void UNewWorldMapWidget_C::OnHideWorldMap()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78376);

	UNewWorldMapWidget_C_OnHideWorldMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.CheckReplayStatus
// (Public, BlueprintCallable, BlueprintEvent)

void UNewWorldMapWidget_C::CheckReplayStatus()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78372);

	UNewWorldMapWidget_C_CheckReplayStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.PadGuideMoveRight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Add                            (Parm, ZeroConstructor, IsPlainOldData)

void UNewWorldMapWidget_C::PadGuideMoveRight(float Add)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78327);

	UNewWorldMapWidget_C_PadGuideMoveRight_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.PadGuideMoveUp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Add                            (Parm, ZeroConstructor, IsPlainOldData)

void UNewWorldMapWidget_C::PadGuideMoveUp(float Add)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78281);

	UNewWorldMapWidget_C_PadGuideMoveUp_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnPadGuideMoveingReayReleased
// (Public, BlueprintCallable, BlueprintEvent)

void UNewWorldMapWidget_C::OnPadGuideMoveingReayReleased()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78280);

	UNewWorldMapWidget_C_OnPadGuideMoveingReayReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnPadGuideMoveingReayPressed
// (Public, BlueprintCallable, BlueprintEvent)

void UNewWorldMapWidget_C::OnPadGuideMoveingReayPressed()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78279);

	UNewWorldMapWidget_C_OnPadGuideMoveingReayPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.IsInPadGuideInMap
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bIsIn                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewWorldMapWidget_C::IsInPadGuideInMap(bool* bIsIn)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78238);

	UNewWorldMapWidget_C_IsInPadGuideInMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsIn != nullptr)
		*bIsIn = params.bIsIn;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.MapZoomPad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AdditaionalZoom                (Parm, ZeroConstructor, IsPlainOldData)

void UNewWorldMapWidget_C::MapZoomPad(float AdditaionalZoom)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78230);

	UNewWorldMapWidget_C_MapZoomPad_Params params;
	params.AdditaionalZoom = AdditaionalZoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnPutMarkerPad
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewWorldMapWidget_C::OnPutMarkerPad()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78215);

	UNewWorldMapWidget_C_OnPutMarkerPad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.GetPadGuidePos_MC
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UNewWorldMapWidget_C::GetPadGuidePos_MC()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78211);

	UNewWorldMapWidget_C_GetPadGuidePos_MC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.GetPadGuidePos_UC
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UNewWorldMapWidget_C::GetPadGuidePos_UC()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78192);

	UNewWorldMapWidget_C_GetPadGuidePos_UC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMarkerDelete
// (Public, BlueprintCallable, BlueprintEvent)

void UNewWorldMapWidget_C::OnMarkerDelete()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78182);

	UNewWorldMapWidget_C_OnMarkerDelete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnPrepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UNewWorldMapWidget_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78170);

	UNewWorldMapWidget_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.MapMoveGamepadY
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UNewWorldMapWidget_C::MapMoveGamepadY(float Value)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78166);

	UNewWorldMapWidget_C_MapMoveGamepadY_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.MapMoveGamepadX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UNewWorldMapWidget_C::MapMoveGamepadX(float Value)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78162);

	UNewWorldMapWidget_C_MapMoveGamepadX_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.ComputeServerToLocalPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Server                         (Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UNewWorldMapWidget_C::ComputeServerToLocalPosition(const struct FVector& Server)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78158);

	UNewWorldMapWidget_C_ComputeServerToLocalPosition_Params params;
	params.Server = Server;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.MapZoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AdditaionalZoom                (Parm, ZeroConstructor, IsPlainOldData)

void UNewWorldMapWidget_C::MapZoom(float AdditaionalZoom)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78149);

	UNewWorldMapWidget_C_MapZoom_Params params;
	params.AdditaionalZoom = AdditaionalZoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.MapMoveY
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UNewWorldMapWidget_C::MapMoveY(float Value)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78141);

	UNewWorldMapWidget_C_MapMoveY_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.MapMoveX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UNewWorldMapWidget_C::MapMoveX(float Value)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78137);

	UNewWorldMapWidget_C_MapMoveX_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OffMapMove
// (Public, BlueprintCallable, BlueprintEvent)

void UNewWorldMapWidget_C::OffMapMove()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78130);

	UNewWorldMapWidget_C_OffMapMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMapMove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewWorldMapWidget_C::OnMapMove()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78124);

	UNewWorldMapWidget_C_OnMapMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.MoveMapGrid
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               AdditionalPos                  (Parm, IsPlainOldData)

void UNewWorldMapWidget_C::MoveMapGrid(const struct FVector2D& AdditionalPos)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78099);

	UNewWorldMapWidget_C_MoveMapGrid_Params params;
	params.AdditionalPos = AdditionalPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMarker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewWorldMapWidget_C::OnMarker()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78045);

	UNewWorldMapWidget_C_OnMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.DestoryNewWorldMapWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UNewWorldMapWidget_C::DestoryNewWorldMapWidget()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78044);

	UNewWorldMapWidget_C_DestoryNewWorldMapWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.InitNewWorldMapWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UNewWorldMapWidget_C::InitNewWorldMapWidget()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(78018);

	UNewWorldMapWidget_C_InitNewWorldMapWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.GetMapWidgetScreenLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Position                       (Parm, IsPlainOldData)
// struct FVector2D               LeftTop                        (Parm, OutParm, IsPlainOldData)
// struct FVector2D               RightBottom                    (Parm, OutParm, IsPlainOldData)

void UNewWorldMapWidget_C::GetMapWidgetScreenLocation(const struct FVector2D& Position, struct FVector2D* LeftTop, struct FVector2D* RightBottom)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77988);

	UNewWorldMapWidget_C_GetMapWidgetScreenLocation_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LeftTop != nullptr)
		*LeftTop = params.LeftTop;
	if (RightBottom != nullptr)
		*RightBottom = params.RightBottom;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.GetWheelUpAlignment
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D               Alignment                      (Parm, OutParm, IsPlainOldData)

void UNewWorldMapWidget_C::GetWheelUpAlignment(struct FVector2D* Alignment)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77948);

	UNewWorldMapWidget_C_GetWheelUpAlignment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Alignment != nullptr)
		*Alignment = params.Alignment;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.TestClear
// (Public, BlueprintCallable, BlueprintEvent)

void UNewWorldMapWidget_C::TestClear()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77946);

	UNewWorldMapWidget_C_TestClear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.UpdateMapAlignment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Aligment                       (Parm, IsPlainOldData)
// struct FVector2D               Size                           (Parm, IsPlainOldData)

void UNewWorldMapWidget_C::UpdateMapAlignment(const struct FVector2D& Aligment, const struct FVector2D& Size)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77926);

	UNewWorldMapWidget_C_UpdateMapAlignment_Params params;
	params.Aligment = Aligment;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.PlayFadeInAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Playback_Speed                 (Parm, ZeroConstructor, IsPlainOldData)

void UNewWorldMapWidget_C::PlayFadeInAnim(float Playback_Speed)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77924);

	UNewWorldMapWidget_C_PlayFadeInAnim_Params params;
	params.Playback_Speed = Playback_Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.TickMapPositionMove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UNewWorldMapWidget_C::TickMapPositionMove(float DeltaTime)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77846);

	UNewWorldMapWidget_C_TickMapPositionMove_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.IsInMapWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Position                       (Parm, IsPlainOldData)
// bool                           IsIn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewWorldMapWidget_C::IsInMapWidget(const struct FVector2D& Position, bool* IsIn)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77843);

	UNewWorldMapWidget_C_IsInMapWidget_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsIn != nullptr)
		*IsIn = params.IsIn;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.ClampPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Position                       (Parm, IsPlainOldData)
// struct FVector2D               ConvertedPosition              (Parm, OutParm, IsPlainOldData)

void UNewWorldMapWidget_C::ClampPosition(const struct FVector2D& Position, struct FVector2D* ConvertedPosition)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77838);

	UNewWorldMapWidget_C_ClampPosition_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConvertedPosition != nullptr)
		*ConvertedPosition = params.ConvertedPosition;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.TickChangeMapSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UNewWorldMapWidget_C::TickChangeMapSize(float DeltaTime)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77761);

	UNewWorldMapWidget_C_TickChangeMapSize_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.GetZoomRange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ZoomMin                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ZoomMax                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewWorldMapWidget_C::GetZoomRange(float* ZoomMin, float* ZoomMax)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77749);

	UNewWorldMapWidget_C_GetZoomRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ZoomMin != nullptr)
		*ZoomMin = params.ZoomMin;
	if (ZoomMax != nullptr)
		*ZoomMax = params.ZoomMax;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UNewWorldMapWidget_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77744);

	UNewWorldMapWidget_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UNewWorldMapWidget_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77739);

	UNewWorldMapWidget_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UNewWorldMapWidget_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77734);

	UNewWorldMapWidget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.InitializeWorldMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewWorldMapWidget_C::InitializeWorldMap()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77731);

	UNewWorldMapWidget_C_InitializeWorldMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.UpdateMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               MapSize                        (Parm, IsPlainOldData)

void UNewWorldMapWidget_C::UpdateMap(const struct FVector2D& MapSize)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77720);

	UNewWorldMapWidget_C_UpdateMap_Params params;
	params.MapSize = MapSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.GetMapSize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Zoom                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               MapSize                        (Parm, OutParm, IsPlainOldData)

void UNewWorldMapWidget_C::GetMapSize(float Zoom, struct FVector2D* MapSize)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77713);

	UNewWorldMapWidget_C_GetMapSize_Params params;
	params.Zoom = Zoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapSize != nullptr)
		*MapSize = params.MapSize;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UNewWorldMapWidget_C::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77708);

	UNewWorldMapWidget_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.UpdateZoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ZoomOffset                     (Parm, ZeroConstructor, IsPlainOldData)

void UNewWorldMapWidget_C::UpdateZoom(float ZoomOffset)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77701);

	UNewWorldMapWidget_C_UpdateZoom_Params params;
	params.ZoomOffset = ZoomOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnMarkerForReplay
// (BlueprintCallable, BlueprintEvent)

void UNewWorldMapWidget_C::OnMarkerForReplay()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77700);

	UNewWorldMapWidget_C_OnMarkerForReplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UNewWorldMapWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77697);

	UNewWorldMapWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.StartChangeMapSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsPad                         (Parm, ZeroConstructor, IsPlainOldData)

void UNewWorldMapWidget_C::StartChangeMapSize(bool bIsPad)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77695);

	UNewWorldMapWidget_C_StartChangeMapSize_Params params;
	params.bIsPad = bIsPad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.BndEvt__Button_77_K2Node_ComponentBoundEvent_240_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewWorldMapWidget_C::BndEvt__Button_77_K2Node_ComponentBoundEvent_240_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77694);

	UNewWorldMapWidget_C_BndEvt__Button_77_K2Node_ComponentBoundEvent_240_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.BndEvt__MinimizeHelpButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewWorldMapWidget_C::BndEvt__MinimizeHelpButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77693);

	UNewWorldMapWidget_C_BndEvt__MinimizeHelpButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.BndEvt__RestoreHelpButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewWorldMapWidget_C::BndEvt__RestoreHelpButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77692);

	UNewWorldMapWidget_C_BndEvt__RestoreHelpButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.MovePosition
// (BlueprintCallable, BlueprintEvent)

void UNewWorldMapWidget_C::MovePosition()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77691);

	UNewWorldMapWidget_C_MovePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNewWorldMapWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77690);

	UNewWorldMapWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNewWorldMapWidget_C::Destruct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77689);

	UNewWorldMapWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnInputAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void UNewWorldMapWidget_C::OnInputAxis(float* Scale)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77687);

	UNewWorldMapWidget_C_OnInputAxis_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.ExecuteUbergraph_NewWorldMapWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UNewWorldMapWidget_C::ExecuteUbergraph_NewWorldMapWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77580);

	UNewWorldMapWidget_C_ExecuteUbergraph_NewWorldMapWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWorldMapWidget.NewWorldMapWidget_C.OnHideMyself__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UNewWorldMapWidget_C::OnHideMyself__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(77579);

	UNewWorldMapWidget_C_OnHideMyself__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
