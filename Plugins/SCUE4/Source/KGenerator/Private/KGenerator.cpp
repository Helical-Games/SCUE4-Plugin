#include "KGeneratorPrivatePCH.h"

#include "SlateBasics.h"
#include "SlateExtras.h"

#include "KGeneratorStyle.h"
#include "KGeneratorCommands.h"

#include "LevelEditor.h"

static const FName KGeneratorTabName("KGenerator");

static FProcHandle FPGenerator;

#define LOCTEXT_NAMESPACE "FKGeneratorModule"

void FKGeneratorModule::StartupModule() {
	FKGeneratorStyle::Initialize();
	FKGeneratorStyle::ReloadTextures();
	FKGeneratorCommands::Register();
	PluginCommands = MakeShareable(new FUICommandList);
	//
	PluginCommands->MapAction(
		FKGeneratorCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FKGeneratorModule::PluginButtonClicked),
		FCanExecuteAction());
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	{
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuExtension("WindowLayout", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FKGeneratorModule::AddMenuExtension));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}
	{
		TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
		ToolbarExtender->AddToolBarExtension("Settings", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FKGeneratorModule::AddToolbarExtension));
		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	}
}

void FKGeneratorModule::ShutdownModule() {
	FKGeneratorStyle::Shutdown();
	FKGeneratorCommands::Unregister();
}

void FKGeneratorModule::AddMenuExtension(FMenuBuilder& Builder) {
	Builder.AddMenuEntry(FKGeneratorCommands::Get().PluginAction);
}

void FKGeneratorModule::AddToolbarExtension(FToolBarBuilder& Builder) {
	Builder.AddToolBarButton(FKGeneratorCommands::Get().PluginAction);
}

void FKGeneratorModule::PluginButtonClicked() {
	if (!FPGenerator.IsValid() || !FPlatformProcess::IsProcRunning(FPGenerator)) {
		FString KGenPath = FPaths::Combine(*IPluginManager::Get().FindPlugin("SCUE4")->GetBaseDir(),TEXT("Source/ThirdParty/SCUE4_Key-Generator.exe"));
		FPGenerator = FPlatformProcess::CreateProc(*KGenPath,nullptr,false,false,false,nullptr,0,nullptr,nullptr);
	}
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FKGeneratorModule,KGenerator);