// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_SystemMessageWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SystemMessageWidget.SystemMessageWidget_C.AddMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMessageWidget_C*        Message                        (Parm, ZeroConstructor, IsPlainOldData)

void USystemMessageWidget_C::AddMessage(class UMessageWidget_C* Message)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73805);

	USystemMessageWidget_C_AddMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SystemMessageWidget.SystemMessageWidget_C.DisplaySystemMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESystemMessageType             MessageType                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Message                        (Parm)

void USystemMessageWidget_C::DisplaySystemMessage(ESystemMessageType MessageType, const struct FText& Message)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(73793);

	USystemMessageWidget_C_DisplaySystemMessage_Params params;
	params.MessageType = MessageType;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
