// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class Chess : ModuleRules
{
    private string ModulePath
    {
        get { return ModuleDirectory; }
    }


    public Chess(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Sockets", "Networking", "Libprotobuf"  });

		PrivateDependencyModuleNames.AddRange(new string[] { "SlateCore" });

        PublicIncludePaths.AddRange(new string[] {
			// ... add public include paths required here ...

			Path.Combine(ModuleDirectory, "proto")
        });

        System.Console.WriteLine("-------------" + ModuleDirectory);
    }
}
