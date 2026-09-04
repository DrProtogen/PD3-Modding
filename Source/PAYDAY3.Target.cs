using UnrealBuildTool;

public class PAYDAY3Target : TargetRules {
	public PAYDAY3Target(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_5;
		CppStandard = CppStandardVersion.Cpp20;
		
		ExtraModuleNames.AddRange(new string[] {
			"PAYDAY3",
			"SBZWorldRuntime",
			"Starbreeze",
		});
	}
}
