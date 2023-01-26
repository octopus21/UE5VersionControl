// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5VersionControl : ModuleRules
{
	public UE5VersionControl(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
