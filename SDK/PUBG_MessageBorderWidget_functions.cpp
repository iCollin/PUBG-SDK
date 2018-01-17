// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MessageBorderWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MessageBorderWidget.MessageBorderWidget_C.RemoveMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMessageWidget_C*        DeleteMessage                  (Parm, ZeroConstructor, IsPlainOldData)

void UMessageBorderWidget_C::RemoveMessage(class UMessageWidget_C* DeleteMessage)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(70631);

	UMessageBorderWidget_C_RemoveMessage_Params params;
	params.DeleteMessage = DeleteMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBorderWidget.MessageBorderWidget_C.AddMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMessageWidget_C*        Message                        (Parm, ZeroConstructor, IsPlainOldData)

void UMessageBorderWidget_C::AddMessage(class UMessageWidget_C* Message)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(70623);

	UMessageBorderWidget_C_AddMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBorderWidget.MessageBorderWidget_C.DisplayKilledMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDeathMessage           DeathMessage                   (Parm)

void UMessageBorderWidget_C::DisplayKilledMessage(const struct FDeathMessage& DeathMessage)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(70614);

	UMessageBorderWidget_C_DisplayKilledMessage_Params params;
	params.DeathMessage = DeathMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
