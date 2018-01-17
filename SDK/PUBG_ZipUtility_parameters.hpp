#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ZipUtility_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ZipUtility.ZipUtilityInterface.OnStartProcess
struct UZipUtilityInterface_OnStartProcess_Params
{
	struct FString                                     archive;                                                  // (Parm, ZeroConstructor)
	int                                                bytes;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZipUtility.ZipUtilityInterface.OnProgress
struct UZipUtilityInterface_OnProgress_Params
{
	struct FString                                     archive;                                                  // (Parm, ZeroConstructor)
	float                                              percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                bytes;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZipUtility.ZipUtilityInterface.OnFileFound
struct UZipUtilityInterface_OnFileFound_Params
{
	struct FString                                     archive;                                                  // (Parm, ZeroConstructor)
	struct FString                                     file;                                                     // (Parm, ZeroConstructor)
	int                                                Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZipUtility.ZipUtilityInterface.OnFileDone
struct UZipUtilityInterface_OnFileDone_Params
{
	struct FString                                     archive;                                                  // (Parm, ZeroConstructor)
	struct FString                                     file;                                                     // (Parm, ZeroConstructor)
};

// Function ZipUtility.ZipUtilityInterface.OnDone
struct UZipUtilityInterface_OnDone_Params
{
	struct FString                                     archive;                                                  // (Parm, ZeroConstructor)
	TEnumAsByte<EZipUtilityCompletionState>            CompletionState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZipUtility.ZipFileFunctionLibrary.Zip
struct UZipFileFunctionLibrary_Zip_Params
{
	struct FString                                     FileOrFolderPath;                                         // (Parm, ZeroConstructor)
	class UObject*                                     ZipUtilityInterfaceDelegate;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>          Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionLevel>           Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ZipUtility.ZipFileFunctionLibrary.UnzipTo
struct UZipFileFunctionLibrary_UnzipTo_Params
{
	struct FString                                     ArchivePath;                                              // (Parm, ZeroConstructor)
	struct FString                                     destinationPath;                                          // (Parm, ZeroConstructor)
	class UObject*                                     ZipUtilityInterfaceDelegate;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>          Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ZipUtility.ZipFileFunctionLibrary.UnzipFilesTo
struct UZipFileFunctionLibrary_UnzipFilesTo_Params
{
	TArray<int>                                        fileIndices;                                              // (ConstParm, Parm, ZeroConstructor)
	struct FString                                     ArchivePath;                                              // (Parm, ZeroConstructor)
	struct FString                                     destinationPath;                                          // (Parm, ZeroConstructor)
	class UObject*                                     ZipUtilityInterfaceDelegate;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>          Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ZipUtility.ZipFileFunctionLibrary.UnzipFiles
struct UZipFileFunctionLibrary_UnzipFiles_Params
{
	TArray<int>                                        fileIndices;                                              // (ConstParm, Parm, ZeroConstructor)
	struct FString                                     ArchivePath;                                              // (Parm, ZeroConstructor)
	class UObject*                                     ZipUtilityInterfaceDelegate;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>          Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamedTo
struct UZipFileFunctionLibrary_UnzipFileNamedTo_Params
{
	struct FString                                     ArchivePath;                                              // (Parm, ZeroConstructor)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     destinationPath;                                          // (Parm, ZeroConstructor)
	class UObject*                                     ZipUtilityInterfaceDelegate;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>          Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamed
struct UZipFileFunctionLibrary_UnzipFileNamed_Params
{
	struct FString                                     ArchivePath;                                              // (Parm, ZeroConstructor)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UObject*                                     ZipUtilityInterfaceDelegate;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>          Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ZipUtility.ZipFileFunctionLibrary.Unzip
struct UZipFileFunctionLibrary_Unzip_Params
{
	struct FString                                     ArchivePath;                                              // (Parm, ZeroConstructor)
	class UObject*                                     ZipUtilityInterfaceDelegate;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>          Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ZipUtility.ZipFileFunctionLibrary.ListFilesInArchive
struct UZipFileFunctionLibrary_ListFilesInArchive_Params
{
	struct FString                                     ArchivePath;                                              // (Parm, ZeroConstructor)
	class UObject*                                     ZipUtilityInterfaceDelegate;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZipUtilityCompressionFormat>          Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
