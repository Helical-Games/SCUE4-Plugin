#include "KGeneratorPrivatePCH.h"
#include "KGeneratorCommands.h"

#define LOCTEXT_NAMESPACE "FKGeneratorModule"

void FKGeneratorCommands::RegisterCommands() {
	UI_COMMAND(PluginAction, "K-Generator", "Secure-Client's Encryption Key Generator.", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE