// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CrimeFactory : ModuleRules
{
	public CrimeFactory(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		bLegacyPublicIncludePaths = false;

		PublicDependencyModuleNames.AddRange(new[] {
			"Core",
			"CoreUObject",
			"Engine",
		});
		
		PrivateDependencyModuleNames.AddRange(new[] {
			"Json",
			"Projects",
			"InputCore",
			"UnrealEd",
			"LevelEditor",
			"Slate",
			"SlateCore",
			"ExternalImagePicker",
			"EditorStyle",
			"EditorFramework",
			"RenderCore",
			"ImageCore",
			"RHI",
			"PluginBrowser",
			"UATHelper",
			"DesktopPlatform",
			"AssetRegistry",
			"AssetTools",
			"EditorScriptingUtilities",
			"ApplicationCore",
			"PluginUtils",
			"ContentBrowser",
			"ToolMenus",
			"Settings",
			"DeveloperSettings"
		});
	}
}
