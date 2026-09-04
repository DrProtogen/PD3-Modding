using UnrealBuildTool;

public class AkInitBankAssetCreator : ModuleRules
{
    public AkInitBankAssetCreator(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine"
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "AssetRegistry",
                "UnrealEd",
                "AkAudio"
            }
        );
    }
}
