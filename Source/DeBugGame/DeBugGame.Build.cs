// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DeBugGame : ModuleRules
{
	public DeBugGame(ReadOnlyTargetRules Target) : base(Target)
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
			"DeBugGame",
			"DeBugGame/Variant_Platforming",
			"DeBugGame/Variant_Platforming/Animation",
			"DeBugGame/Variant_Combat",
			"DeBugGame/Variant_Combat/AI",
			"DeBugGame/Variant_Combat/Animation",
			"DeBugGame/Variant_Combat/Gameplay",
			"DeBugGame/Variant_Combat/Interfaces",
			"DeBugGame/Variant_Combat/UI",
			"DeBugGame/Variant_SideScrolling",
			"DeBugGame/Variant_SideScrolling/AI",
			"DeBugGame/Variant_SideScrolling/Gameplay",
			"DeBugGame/Variant_SideScrolling/Interfaces",
			"DeBugGame/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
