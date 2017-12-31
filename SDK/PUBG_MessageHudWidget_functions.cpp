// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MessageHudWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MessageHudWidget.MessageHudWidget_C.Icon_DisplayKilledMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDeathMessage           Input                          (Parm)

void UMessageHudWidget_C::Icon_DisplayKilledMessage(const struct FDeathMessage& Input)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(75332);

	UMessageHudWidget_C_Icon_DisplayKilledMessage_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageHudWidget.MessageHudWidget_C.Normal_DisplayKilledMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDeathMessage           InputPin                       (Parm)

void UMessageHudWidget_C::Normal_DisplayKilledMessage(const struct FDeathMessage& InputPin)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(75287);

	UMessageHudWidget_C_Normal_DisplayKilledMessage_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageHudWidget.MessageHudWidget_C.CreateGamePlayMessage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (Parm)
// TEnumAsByte<ETextJustify>      TextAlignment                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            TextSize                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseFade_In                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// class UNewSystemMessageWidget_C* MessageWidget                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMessageHudWidget_C::CreateGamePlayMessage(const struct FText& Message, TEnumAsByte<ETextJustify> TextAlignment, int TextSize, float Duration, bool bUseFade_In, class UAkAudioEvent* Sound, class UNewSystemMessageWidget_C** MessageWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(75278);

	UMessageHudWidget_C_CreateGamePlayMessage_Params params;
	params.Message = Message;
	params.TextAlignment = TextAlignment;
	params.TextSize = TextSize;
	params.Duration = Duration;
	params.bUseFade_In = bUseFade_In;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageWidget != nullptr)
		*MessageWidget = params.MessageWidget;
}


// Function MessageHudWidget.MessageHudWidget_C.OnDisplayMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESystemMessageType             MessageType                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Message                        (Parm)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           Sound                          (Parm, ZeroConstructor, IsPlainOldData)

void UMessageHudWidget_C::OnDisplayMessage(ESystemMessageType MessageType, const struct FText& Message, float Duration, class UAkAudioEvent* Sound)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(75268);

	UMessageHudWidget_C_OnDisplayMessage_Params params;
	params.MessageType = MessageType;
	params.Message = Message;
	params.Duration = Duration;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageHudWidget.MessageHudWidget_C.CreateKillMessage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDeathMessage           DeathMessage                   (Parm)
// TEnumAsByte<ETextJustify>      TextAlignment                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             TextColor                      (Parm)
// int                            TextSize                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseFade_In                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowMyKillCount               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseMessagePool                (Parm, ZeroConstructor, IsPlainOldData)
// class UNewSystemMessageWidget_C* MessageWidget                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMessageHudWidget_C::CreateKillMessage(const struct FDeathMessage& DeathMessage, TEnumAsByte<ETextJustify> TextAlignment, const struct FSlateColor& TextColor, int TextSize, float Duration, bool bUseFade_In, bool bShowMyKillCount, bool bUseMessagePool, class UNewSystemMessageWidget_C** MessageWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(75250);

	UMessageHudWidget_C_CreateKillMessage_Params params;
	params.DeathMessage = DeathMessage;
	params.TextAlignment = TextAlignment;
	params.TextColor = TextColor;
	params.TextSize = TextSize;
	params.Duration = Duration;
	params.bUseFade_In = bUseFade_In;
	params.bShowMyKillCount = bShowMyKillCount;
	params.bUseMessagePool = bUseMessagePool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageWidget != nullptr)
		*MessageWidget = params.MessageWidget;
}


// Function MessageHudWidget.MessageHudWidget_C.CreateSystemMessage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (Parm)
// TEnumAsByte<ETextJustify>      TextAlignment                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             TextColor                      (Parm)
// int                            TextSize                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseFade_In                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// class UNewSystemMessageWidget_C* MessageWidget                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMessageHudWidget_C::CreateSystemMessage(const struct FText& Message, TEnumAsByte<ETextJustify> TextAlignment, const struct FSlateColor& TextColor, int TextSize, float Duration, bool bUseFade_In, class UAkAudioEvent* Sound, class UNewSystemMessageWidget_C** MessageWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(75240);

	UMessageHudWidget_C_CreateSystemMessage_Params params;
	params.Message = Message;
	params.TextAlignment = TextAlignment;
	params.TextColor = TextColor;
	params.TextSize = TextSize;
	params.Duration = Duration;
	params.bUseFade_In = bUseFade_In;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageWidget != nullptr)
		*MessageWidget = params.MessageWidget;
}


// Function MessageHudWidget.MessageHudWidget_C.OnDisplayKilledMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDeathMessage           DeathMessage                   (Parm)

void UMessageHudWidget_C::OnDisplayKilledMessage(const struct FDeathMessage& DeathMessage)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(75236);

	UMessageHudWidget_C_OnDisplayKilledMessage_Params params;
	params.DeathMessage = DeathMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageHudWidget.MessageHudWidget_C.OnDisplaySystemMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESystemMessageType             MessageType                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Message                        (Parm)

void UMessageHudWidget_C::OnDisplaySystemMessage(ESystemMessageType MessageType, const struct FText& Message)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(75223);

	UMessageHudWidget_C_OnDisplaySystemMessage_Params params;
	params.MessageType = MessageType;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageHudWidget.MessageHudWidget_C.InitializeMessageHUD
// (Public, BlueprintCallable, BlueprintEvent)

void UMessageHudWidget_C::InitializeMessageHUD()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(75216);

	UMessageHudWidget_C_InitializeMessageHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageHudWidget.MessageHudWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMessageHudWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(75215);

	UMessageHudWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageHudWidget.MessageHudWidget_C.ExecuteUbergraph_MessageHudWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMessageHudWidget_C::ExecuteUbergraph_MessageHudWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(75213);

	UMessageHudWidget_C_ExecuteUbergraph_MessageHudWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
