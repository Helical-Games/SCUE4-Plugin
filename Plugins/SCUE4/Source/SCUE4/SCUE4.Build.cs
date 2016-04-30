using UnrealBuildTool;
using System.IO;

public class SCUE4 : ModuleRules {
	public SCUE4(TargetInfo Target) {
		PublicDependencyModuleNames.AddRange(
			new string[] {
				"SCUE4X",
				"Core",
				"Engine",
				"CoreUObject"
			}
		);
		//
		//
		string DIRx86 = Path.Combine(ModuleDirectory,"../ThirdParty","x86");
		string DIRx64 = Path.Combine(ModuleDirectory,"../ThirdParty","x64");
	}
}