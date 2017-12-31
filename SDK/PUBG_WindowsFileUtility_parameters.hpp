#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WindowsFileUtility_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WindowsFileUtility.WFUFileListInterface.OnListFileFound
struct UWFUFileListInterface_OnListFileFound_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	int                                                ByteCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
};

// Function WindowsFileUtility.WFUFileListInterface.OnListDone
struct UWFUFileListInterface_OnListDone_Params
{
	struct FString                                     DirectoryPath;                                            // (Parm, ZeroConstructor)
	TArray<struct FString>                             Files;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             Folders;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WindowsFileUtility.WFUFileListInterface.OnListDirectoryFound
struct UWFUFileListInterface_OnListDirectoryFound_Params
{
	struct FString                                     DirectoryName;                                            // (Parm, ZeroConstructor)
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
};

// Function WindowsFileUtility.WFUFolderWatchInterface.OnFileChanged
struct UWFUFolderWatchInterface_OnFileChanged_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
};

// Function WindowsFileUtility.WFUFolderWatchInterface.OnDirectoryChanged
struct UWFUFolderWatchInterface_OnDirectoryChanged_Params
{
	struct FString                                     DirectoryName;                                            // (Parm, ZeroConstructor)
	struct FString                                     DirectoryPath;                                            // (Parm, ZeroConstructor)
};

// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.WatchFolder
struct UWindowsFileUtilityFunctionLibrary_WatchFolder_Params
{
	struct FString                                     FullPath;                                                 // (Parm, ZeroConstructor)
	class UObject*                                     WatcherDelegate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.StopWatchingFolder
struct UWindowsFileUtilityFunctionLibrary_StopWatchingFolder_Params
{
	struct FString                                     FullPath;                                                 // (Parm, ZeroConstructor)
	class UObject*                                     WatcherDelegate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.MoveFileTo
struct UWindowsFileUtilityFunctionLibrary_MoveFileTo_Params
{
	struct FString                                     From;                                                     // (Parm, ZeroConstructor)
	struct FString                                     To;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.ListContentsOfFolder
struct UWindowsFileUtilityFunctionLibrary_ListContentsOfFolder_Params
{
	struct FString                                     FullPath;                                                 // (Parm, ZeroConstructor)
	class UObject*                                     ListDelegate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteFolderRecursively
struct UWindowsFileUtilityFunctionLibrary_DeleteFolderRecursively_Params
{
	struct FString                                     FullPath;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteFileAt
struct UWindowsFileUtilityFunctionLibrary_DeleteFileAt_Params
{
	struct FString                                     FullPath;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteEmptyFolder
struct UWindowsFileUtilityFunctionLibrary_DeleteEmptyFolder_Params
{
	struct FString                                     FullPath;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.CreateDirectoryAt
struct UWindowsFileUtilityFunctionLibrary_CreateDirectoryAt_Params
{
	struct FString                                     FullPath;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
