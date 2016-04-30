///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//		Copyright 2016 (C) Bruno Xavier B. Leite			//
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "SCUE4PrivatePCH.h"
#include "ISCUE4.h"

class FSCUE4 : public ISCUE4 {
public:
	virtual void StartupModule() override {
		UE_LOG(LogTemp,Warning,TEXT("{SC}:: Initializing Secure-Client Plugin [Anti-Cheat]."));
	}
};

IMPLEMENT_GAME_MODULE(FSCUE4,SCUE4);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////