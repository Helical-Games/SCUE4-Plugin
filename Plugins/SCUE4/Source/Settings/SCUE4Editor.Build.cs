using UnrealBuildTool;
using System.IO;

public class SCUE4Editor : ModuleRules {
	public SCUE4Editor(ReadOnlyTargetRules Target) : base(Target) {
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		PrivatePCHHeaderFile = "Private/SCUE4EditorPrivatePCH.h";
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
			}///
		);//
		//
		PrivateIncludePaths.Add(Path.Combine(ModuleDirectory,"Private"));
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory,"Public"));
	}///
}