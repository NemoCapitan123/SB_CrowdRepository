// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SB_Crowd : ModuleRules
{
	public SB_Crowd(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
