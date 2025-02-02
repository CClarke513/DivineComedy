// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TheDivineComedy : ModuleRules
{
	public TheDivineComedy(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
