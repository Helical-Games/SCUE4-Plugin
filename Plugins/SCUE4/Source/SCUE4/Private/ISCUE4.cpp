/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//		Copyright 2016 (C) Bruno Xavier B. Leite      //
//////////////////////////////////////////////////////////////
/*
	BY EXECUTING, READING, EDITING, COPYING OR KEEPING FILES FROM THIS SOFTWARE SOURCE CODE,
	YOU AGREE TO THE FOLLOWING TERMS IN ADDITION TO EPIC GAMES MARKETPLACE EULA:
	- YOU HAVE READ AND AGREE TO EPIC GAMES TERMS: https://publish.unrealengine.com/faq
	- YOU AGREE DEVELOPER RESERVES ALL RIGHTS TO THE SOFTWARE PROVIDED, GRANTED BY LAW.
	- YOU AGREE YOU'LL NOT CREATE OR PUBLISH DERIVATIVE SOFTWARE TO THE MARKETPLACE.
	- YOU AGREE DEVELOPER WILL NOT PROVIDE SOFTWARE OUTSIDE MARKETPLACE ENVIRONMENT.
	- YOU AGREE DEVELOPER WILL NOT PROVIDE PAID OR EXCLUSIVE SUPPORT SERVICES.
	- YOU AGREE DEVELOPER PROVIDED SUPPORT CHANNELS, ARE UNDER HIS SOLE DISCRETION.
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "ISCUE4.h"
#include "SCUE4.h"
#include "SCUE4PrivatePCH.h"
	
#if WITH_EDITORONLY_DATA
 #include "ISettingsModule.h"
 #include "ISettingsSection.h"
 #include "ISettingsContainer.h"
#endif

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define LOCTEXT_NAMESPACE "Synaptech"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class FSCUE4 : public ISCUE4 {
private:
	bool HandleSettingsSaved() {
	  #if WITH_EDITORONLY_DATA
		const auto &Settings = GetMutableDefault<USCUE4Settings>();
		Settings->SaveConfig(); return true;
	  #endif
	return false;}
	//
	void RegisterSettings() {
	  #if WITH_EDITORONLY_DATA
		if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings")) {
			ISettingsContainerPtr SettingsContainer = SettingsModule->GetContainer("Project");
			SettingsContainer->DescribeCategory("Synaptech",LOCTEXT("SynaptechCategoryName","Synaptech"),
			LOCTEXT("SynaptechCategoryDescription","Configuration of Synaptech Systems."));
			//
			ISettingsSectionPtr SettingsSection = SettingsModule->RegisterSettings("Project","Synaptech","SCUE4Settings",
				LOCTEXT("SCUE4SettingsName","Anti-Cheat Settings"),
				LOCTEXT("SCUE4SettingsDescription","General settings for the SCUE4 Plugin"),
			GetMutableDefault<USCUE4Settings>());
			//
			if (SettingsSection.IsValid()) {SettingsSection->OnModified().BindRaw(this,&FSCUE4::HandleSettingsSaved);}
		}
	  #endif
	}
	//
	void UnregisterSettings() {
	  #if WITH_EDITORONLY_DATA
		if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings")) {
			SettingsModule->UnregisterSettings("Project","Synaptech","SCUE4Settings");
		}
	  #endif
	}
	//
public:
	virtual void StartupModule() override {RegisterSettings(); UE_LOG(LogTemp,Warning,TEXT("{S}:: Initializing Secure-Client Plugin [Anti-Cheat]."));}
	virtual void ShutdownModule() override {if (UObjectInitialized()) {UnregisterSettings();}}
	virtual bool SupportsDynamicReloading() override {return true;}
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

IMPLEMENT_GAME_MODULE(FSCUE4,SCUE4);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////