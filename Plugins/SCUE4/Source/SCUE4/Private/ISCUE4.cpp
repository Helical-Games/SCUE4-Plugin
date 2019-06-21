//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//		Copyright 2016 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "ISCUE4.h"
#include "SCUE4.h"
#include "SCUE4PrivatePCH.h"
	
#if WITH_EDITORONLY_DATA
 #include "ISettingsModule.h"
 #include "ISettingsSection.h"
 #include "ISettingsContainer.h"
#endif

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define LOCTEXT_NAMESPACE "Synaptech"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

IMPLEMENT_GAME_MODULE(FSCUE4,SCUE4);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////