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

#include "../SCUE4PrivatePCH.h"
#include "SafeObject.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

USafeObject::USafeObject(const class FObjectInitializer& OBJ) : Super(OBJ) {
	FSBoolPropertySample = true;
	FSBytePropertySample = 255;
	FSIntPropertySample = 1000;
	FSNamePropertySample = FName("Name");
	FSStringPropertySample = FString("String");
	FSTextPropertySample = FText::FromString(TEXT("Text"));
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void USafeObject::Play() {
	LOG_SC(true,1.f,FColor::Yellow,TEXT("Hello World! This is a 'Safe' UObject!"));
	//
	FString FBool = FString(TEXT("false"));
	if (FSBoolPropertySample.GetValue()){FBool=FString(TEXT("true"));}
	LOG_SC(true,1.f,FColor::Red,FBool);
	//
	LOG_SC(true,1.f,FColor::Cyan,FString::FromInt(FSBytePropertySample.GetValue()));
	//
	LOG_SC(true,1.f,FColor::Green,FString::FromInt(FSIntPropertySample.GetValue()));
	//
	LOG_SC(true,1.f,FColor::Magenta,FSNamePropertySample.GetValue().ToString());
	//
	LOG_SC(true,1.f,FColor::White,FSStringPropertySample.GetValue());
	//
	LOG_SC(true,1.f,FColor::Yellow,FSTextPropertySample.GetValue().ToString());
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////