using System.IO;
using UnrealBuildTool;

public class AkAudio : ModuleRules {
    public AkAudio(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;

        // See Public/EngineCompat/AkAudioForceIncludes.h: this reconstructed source is missing
        // most of its original #include lines (UHT-dump reconstruction only captures reflected
        // declarations, not #includes).
        ForceIncludeFiles.Add(Path.Combine(ModuleDirectory, "Public", "EngineCompat", "AkAudioForceIncludes.h"));

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "MovieScene",
            "PhysicsCore",
            "SlateCore",
            "UMG",
            "WwiseObjectUtils",
            "WwiseResourceLoader",
        });
    }
}
