#pragma once

#include "SlateBasics.h"
#include "KGeneratorStyle.h"

class FKGeneratorCommands : public TCommands<FKGeneratorCommands> {
public:

	FKGeneratorCommands()
		: TCommands<FKGeneratorCommands>(TEXT("KGenerator"), NSLOCTEXT("Contexts", "KGenerator", "KGenerator Plugin"), NAME_None, FKGeneratorStyle::GetStyleSetName())
	{
	}

	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};