// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UdemySection3 : ModuleRules
{
	public UdemySection3(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
