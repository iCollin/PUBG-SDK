#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes {
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// BlueprintGeneratedClass Dacia.Dacia_C
	// 0x0044 (0x08D0 - 0x088C)
	class ADacia_C {
	public:
		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xde0ee0b5);
			return ptr;
		}
	};

	// BlueprintGeneratedClass Uaz.Uaz_C
	// 0x0054 (0x08E0 - 0x088C)
	class AUaz_C {
	public:
		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xa28ff6b1);
			return ptr;
		}
	};

	// BlueprintGeneratedClass Buggy.Buggy_C
	// 0x002C (0x08B8 - 0x088C)
	class ABuggy_C {
	public:
		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x4d1f828d);
			return ptr;
		}
	};

}

#ifdef _MSC_VER
#pragma pack(pop)
#endif