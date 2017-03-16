using UnrealBuildTool;
using System.IO;

public class SCUE4 : ModuleRules {
	public SCUE4(TargetInfo Target) {
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		bEnforceIWYU = true;
		//
		PublicDependencyModuleNames.AddRange(
			new string[] {
				"Core",
				"Engine",
				"SCUE4X",
				"Projects",
				"CoreUObject"
			}
		);
		//
		Definitions.Add("WITH_ANTI_CHEAT");
		PrivateIncludePaths.Add(Path.Combine(ModuleDirectory,"Private"));
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory,"Public"));
	}
}