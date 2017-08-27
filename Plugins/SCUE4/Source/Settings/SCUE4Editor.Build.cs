using UnrealBuildTool;

public class SCUE4Editor : ModuleRules {
	public SCUE4Editor(ReadOnlyTargetRules Target) : base(Target) {
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		bEnforceIWYU = true;
		//
		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"Core",
				"Slate",
				"SCUE4",
				"Engine",
				"Projects",
				"UnrealEd",
				"SlateCore",
				"InputCore",
				"EditorStyle",
				"LevelEditor",
				"CoreUObject",
				"PropertyEditor"
			}
		);
		//
		PrivateIncludePaths.AddRange(new string[] {"Settings/Private"});
		PublicIncludePaths.AddRange(new string[] {"Settings/Public"});
	}
}