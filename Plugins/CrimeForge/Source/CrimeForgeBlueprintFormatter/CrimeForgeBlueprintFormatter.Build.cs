using UnrealBuildTool;

public class CrimeForgeBlueprintFormatter : ModuleRules
{
    public CrimeForgeBlueprintFormatter(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        CppStandard = CppStandardVersion.Cpp20;

        PublicDependencyModuleNames.AddRange(new[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "Slate",
            "SlateCore",
            "GraphEditor",
            "BlueprintGraph"
        });

        PrivateDependencyModuleNames.AddRange(new[]
        {
            "UnrealEd",
            "EditorSubsystem",
            "Kismet",
            "KismetCompiler",
            "ApplicationCore",
            "InputCore",
            "Projects"
        });
    }
}
