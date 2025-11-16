// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Shadow : ModuleRules
{
	public Shadow(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"Shadow",
			"Shadow/Variant_Platforming",
			"Shadow/Variant_Platforming/Animation",
			"Shadow/Variant_Combat",
			"Shadow/Variant_Combat/AI",
			"Shadow/Variant_Combat/Animation",
			"Shadow/Variant_Combat/Gameplay",
			"Shadow/Variant_Combat/Interfaces",
			"Shadow/Variant_Combat/UI",
			"Shadow/Variant_SideScrolling",
			"Shadow/Variant_SideScrolling/AI",
			"Shadow/Variant_SideScrolling/Gameplay",
			"Shadow/Variant_SideScrolling/Interfaces",
			"Shadow/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
