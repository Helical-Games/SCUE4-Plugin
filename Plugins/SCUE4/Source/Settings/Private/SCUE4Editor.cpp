/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//			Copyright 2016 (C) Bruno Xavier Leite			//
//////////////////////////////////////////////////////////////
/*
	BY EXECUTING, READING, EDITING, COPYING OR KEEPING FILES FROM THIS SOFTWARE SOURCE CODE,
	YOU AGREE TO THE FOLLOWING TERMS IN ADDITION TO EPIC GAMES MARKETPLACE EULA:
	- YOU HAVE READ AND AGREE TO EPIC GAMES TERMS: https://publish.unrealengine.com/faq
	- YOU AGREE DEVELOPER WILL NOT PROVIDE SOFTWARE OUTSIDE MARKETPLACE ENVIRONMENT.
	- YOU AGREE DEVELOPER WILL NOT PROVIDE PAID OR EXCLUSIVE SUPPORT SERVICES.
	- YOU AGREE DEVELOPER PROVIDED SUPPORT CHANNELS, ARE UNDER HIS SOLE DISCRETION.
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "SCUE4EditorPrivatePCH.h"
#include "SCUE4EditorCommands.h"
#include "SCUE4EditorStyle.h"
#include "SCUE4Editor.h"
#include "SlateBasics.h"
#include "SlateExtras.h"
#include "LevelEditor.h"
#include "SCUE4.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define LOCTEXT_NAMESPACE "FSCUE4Editor"
static const FName SCUE4EditorTabName("SCUE4Editor");

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void FSCUE4Editor::StartupModule() {
	
	FSCUE4EditorStyle::Initialize();
	FSCUE4EditorStyle::ReloadTextures();

	FSCUE4EditorCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FSCUE4EditorCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FSCUE4Editor::PluginButtonClicked),
		FCanExecuteAction());
		
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	
	{
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuExtension("WindowLayout", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FSCUE4Editor::AddMenuExtension));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}
	
	{
		TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
		ToolbarExtender->AddToolBarExtension("Settings", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FSCUE4Editor::AddToolbarExtension));
		
		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	}
}

void FSCUE4Editor::ShutdownModule()
{
	FSCUE4EditorStyle::Shutdown();

	FSCUE4EditorCommands::Unregister();
}

void FSCUE4Editor::AddMenuExtension(FMenuBuilder& Builder)
{
	Builder.AddMenuEntry(FSCUE4EditorCommands::Get().PluginAction);
}

void FSCUE4Editor::AddToolbarExtension(FToolBarBuilder& Builder)
{
	Builder.AddToolBarButton(FSCUE4EditorCommands::Get().PluginAction);
}

void FSCUE4Editor::PluginButtonClicked() {
	const auto &Settings = GetMutableDefault<USCUE4Settings>();
	//
	if (Settings && FPaths::FileExists(Settings->KeyGeneratorPath)) {
		FPlatformProcess::CreateProc(*Settings->KeyGeneratorPath,nullptr,true,false,false,nullptr,0,nullptr,nullptr,nullptr);
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSCUE4Editor,SCUE4Editor)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////