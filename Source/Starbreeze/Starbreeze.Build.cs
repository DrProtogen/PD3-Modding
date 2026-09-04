using System.IO;
using UnrealBuildTool;

public class Starbreeze : ModuleRules {
    public Starbreeze(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;

        // Compatibility shims for GameplayAbilities/ReplicationGraph headers that were consolidated
        // or renamed since the version this reconstructed source was originally written against
        // (e.g. GameplayAbility.h -> Abilities/GameplayAbility.h, GameplayEffectContext.h -> merged
        // into GameplayEffectTypes.h). See Public/EngineCompat/*.h.
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public", "EngineCompat"));

        // The reconstructed Starbreeze headers were generated from a UHT reflection dump and are
        // missing most of their original #include lines (see Public/EngineCompat/StarbreezeForceIncludes.h
        // for the full explanation). Force-include the small set of engine headers that covers every
        // base class / member type referenced across the module without its own #include.
        ForceIncludeFiles.Add(Path.Combine(ModuleDirectory, "Public", "EngineCompat", "StarbreezeForceIncludes.h"));

        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "AnimGraphRuntime",
            "AnimationBudgetAllocator",
            "BinkMediaPlayer",
            "CableComponent",
            "ChaosVehicles",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "JsonUtilities",
            "LevelSequence",
            "NavigationSystem",
            "NetCore",
            "Niagara",
            "NiagaraAnimNotifies",
            "OnlineSubsystemUtils",
            "Paper2D",
            "PhysicsCore",
            "ReplicationGraph",
            "SBZBackend",
            "SBZStateMachineBase",
            "SBZUtilityPlugin",
            "SBZWorldRuntime",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
