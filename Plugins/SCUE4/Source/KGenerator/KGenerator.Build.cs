using UnrealBuildTool;

public class KGenerator : ModuleRules {
	public KGenerator(TargetInfo Target) {
		PublicIncludePaths.AddRange(
			new string[] {
				"KGenerator/Public"
			}
		);
		PrivateIncludePaths.AddRange(
			new string[] {
				"KGenerator/Private"
			}
		);
		PublicDependencyModuleNames.AddRange(
			new string[] {
				"Core"
			}
		);
		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"Projects",
				"InputCore",
				"UnrealEd",
				"LevelEditor",
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
			}
		);
	}
}