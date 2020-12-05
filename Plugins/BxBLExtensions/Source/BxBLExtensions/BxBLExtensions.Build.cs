using UnrealBuildTool;
using System.IO;

public class BxBLExtensions : ModuleRules {
	public BxBLExtensions(ReadOnlyTargetRules Target) : base(Target) {
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		PrivatePCHHeaderFile = "Private/BxBLExtensionsPrivatePCH.h";
		bEnforceIWYU = true;
		//
		PublicDependencyModuleNames.AddRange(
			new string[] {
				"Core",
				"Engine",
				"CoreUObject"
			}
		);
		//
		PrivateIncludePaths.Add(Path.Combine(ModuleDirectory,"Private"));
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory,"Public"));
	}
}