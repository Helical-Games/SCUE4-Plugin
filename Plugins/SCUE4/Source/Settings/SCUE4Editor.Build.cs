using UnrealBuildTool;

public class SCUE4Editor : ModuleRules {
	public SCUE4Editor(TargetInfo Target) {
		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"Core",
				"SCUE4",
				"Slate",
				"Engine",
				"Projects",
				"UnrealEd",
				"SlateCore",
				"InputCore",
				"CoreUObject",
				"LevelEditor",
				"EditorStyle",
				"PropertyEditor"
			}
		);
		//
		PrivateIncludePaths.AddRange(new string[] {"Settings/Private"});
		PublicIncludePaths.AddRange(new string[] {"Settings/Public"});
	}
}