#pragma once

#include "ModuleManager.h"
#include "IPluginManager.h"

class FToolBarBuilder;
class FMenuBuilder;

class FKGeneratorModule : public IModuleInterface {
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	void PluginButtonClicked();
	
private:

	void AddToolbarExtension(FToolBarBuilder& Builder);
	void AddMenuExtension(FMenuBuilder& Builder);

private:
	TSharedPtr<class FUICommandList> PluginCommands;
};