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

#pragma once
#include "SCUE4.h"
#include "SafeObject.generated.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/** USafeObject:
 * A UCLASS contains a set of properties and functions that define the class.
 * These are normal C++ functions and variables available to native code, but tagged with Unreal-specific metadata that controls how they behave within the Object system.
 * A Safe-Object is a sample Object that implements property encryption from the SCUE4 Anti-Cheat system, as a reference for developers.
 */
UCLASS(ClassGroup = "Security", BlueprintType, Blueprintable, meta=(config = Game, ShortTooltip="A Safe-Object is a sample Object that implements property encryption examples."))
class SCUE4_API USafeObject : public UObject {
	GENERATED_BODY()
private:

	/** Constructor. */
	USafeObject(const class FObjectInitializer& OBJ);

public:

	/** BeginPlay() behaviour. */
	UFUNCTION(Category = "Anti-Cheat", BlueprintCallable)
	void Play();

	//

	/** A Simple Encrypted Boolean Value. */
	UPROPERTY(Category = "Anti-Cheat", BlueprintReadWrite, EditAnywhere)
	FSafeBool FSBoolPropertySample;
	//
	/** A Simple Encrypted Byte Value. */
	UPROPERTY(Category = "Anti-Cheat", BlueprintReadWrite, EditAnywhere)
	FSafeByte FSBytePropertySample;
	//
	/** A Simple Encrypted Integer Value. */
	UPROPERTY(Category = "Anti-Cheat", BlueprintReadWrite, EditAnywhere)
	FSafeInt FSIntPropertySample;
	//
	/** A Simple Encrypted Float Value. */
	UPROPERTY(Category = "Anti-Cheat", BlueprintReadWrite, EditAnywhere)
	FSafeFloat FSFloatPropertySample;
	//
	/** A Simple Encrypted Name Value. */
	UPROPERTY(Category = "Anti-Cheat", BlueprintReadWrite, EditAnywhere)
	FSafeName FSNamePropertySample;
	//
	/** A Simple Encrypted String Value. */
	UPROPERTY(Category = "Anti-Cheat", BlueprintReadWrite, EditAnywhere)
	FSafeString FSStringPropertySample;
	//
	/** A Simple Encrypted Text Value. */
	UPROPERTY(Category = "Anti-Cheat", BlueprintReadWrite, EditAnywhere)
	FSafeText FSTextPropertySample;

};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////