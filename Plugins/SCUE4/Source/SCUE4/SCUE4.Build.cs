using UnrealBuildTool;
using System.IO;

public class SCUE4 : ModuleRules {
	public SCUE4(ReadOnlyTargetRules Target) : base(Target) {
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		PrivatePCHHeaderFile = "Private/SCUE4PrivatePCH.h";
		bEnforceIWYU = true;
		//
		PublicDependencyModuleNames.AddRange(
			new string[] {
				"Core",
				"Engine",
				"SCUE4X",
				"Projects",
				"CoreUObject"
			}///
		);//
		//
		PublicDefinitions.Add("WITH_ANTI_CHEAT");
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory,"Public"));
		PrivateIncludePaths.Add(Path.Combine(ModuleDirectory,"Private"));
	}///
}