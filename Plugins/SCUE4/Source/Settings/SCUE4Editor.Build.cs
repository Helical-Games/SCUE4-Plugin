using UnrealBuildTool;

public class SCUE4Editor : ModuleRules {
	public SCUE4Editor(TargetInfo Target) {
		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"SCUE4",
				"Core",
				"Engine",
				"Projects",
				"UnrealEd",
				"CoreUObject",
				"LevelEditor",
				"SlateCore",
				"Slate"
			}
		);
		//
		PrivateIncludePaths.AddRange(new string[] {"Settings/Private"});
		PublicIncludePaths.AddRange(new string[] {"Settings/Public"});
	}
}