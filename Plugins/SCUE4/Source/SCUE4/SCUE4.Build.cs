using UnrealBuildTool;
using System.IO;

public class SCUE4 : ModuleRules {
	public SCUE4(TargetInfo Target) {
		PublicDependencyModuleNames.AddRange(
			new string[] {
				"SCUE4X",
				"Core",
				"Engine",
				"Projects",
				"CoreUObject"
			}
		);
		//
		Definitions.Add("WITH_ANTI_CHEAT");
	}
}