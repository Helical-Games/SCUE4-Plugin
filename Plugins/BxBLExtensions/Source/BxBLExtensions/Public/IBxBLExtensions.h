#pragma once
#include "ModuleManager.h"

class IBxBLExtensions : public IModuleInterface {
public:
	static inline IBxBLExtensions& Get() {
		return FModuleManager::LoadModuleChecked<IBxBLExtensions>("BxBLExtensions");
	}
	static inline bool IsAvailable() {
		return FModuleManager::Get().IsModuleLoaded("BxBLExtensions");
	}
};