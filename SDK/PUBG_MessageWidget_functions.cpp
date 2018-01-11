// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MessageWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MessageWidget.MessageWidget_C.ClearMessage
// (Public, BlueprintCallable, BlueprintEvent)

void UMessageWidget_C::ClearMessage()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99614);

	UMessageWidget_C_ClearMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageWidget.MessageWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMessageWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99613);

	UMessageWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageWidget.MessageWidget_C.O_1
// (BlueprintCallable, BlueprintEvent)

void UMessageWidget_C::O_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99612);

	UMessageWidget_C_O_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageWidget.MessageWidget_C.ExecuteUbergraph_MessageWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMessageWidget_C::ExecuteUbergraph_MessageWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99608);

	UMessageWidget_C_ExecuteUbergraph_MessageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageWidget.MessageWidget_C.MessageEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMessageWidget_C*        Message                        (Parm, ZeroConstructor, IsPlainOldData)

void UMessageWidget_C::MessageEnd__DelegateSignature(class UMessageWidget_C* Message)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(99606);

	UMessageWidget_C_MessageEnd__DelegateSignature_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
