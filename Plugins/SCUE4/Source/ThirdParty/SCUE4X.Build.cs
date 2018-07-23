using UnrealBuildTool;
using System.IO;

public class SCUE4X : ModuleRules {
    public SCUE4X(ReadOnlyTargetRules Target) : base(Target) {
        Type = ModuleType.External;
        //
        string DIRx86 = Path.Combine(ModuleDirectory,"x86");
        string DIRx64 = Path.Combine(ModuleDirectory,"x64");
        //
        if ((Target.Platform == UnrealTargetPlatform.Win32) || (Target.Platform == UnrealTargetPlatform.Win64)) {
            if (Target.Platform == UnrealTargetPlatform.Win32) { RuntimeDependencies.Add(Path.Combine(DIRx86,"SCUE4x86.exe")); } else
            if (Target.Platform == UnrealTargetPlatform.Win64) { RuntimeDependencies.Add(Path.Combine(DIRx64,"SCUE4x64.exe")); }
        }
    }
}