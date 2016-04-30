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
#include "SafeObject.h"
#include "SafeActor.generated.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/** ASafeActor:
 * Actor is the base class for an Object that can be placed or spawned in a level.
 * Actors may contain a collection of ActorComponents, which can be used to control how actors move, how they are rendered, etc.
 * The other main function of an Actor is the replication of properties and function calls across the network during play.
 * A Safe-Actor is a sample Actor that implements property encryption out-of-the-box from the SCUE4 Anti-Cheat system, as a reference for developers.
 */
UCLASS(ClassGroup = Security, BlueprintType, Blueprintable, meta=(config = Game, ShortTooltip="A Safe-Actor is a sample Actor that implements property encryption examples."))
class SCUE4_API ASafeActor : public AActor {
	GENERATED_BODY()
private:

	/** Constructor. */
	ASafeActor(const class FObjectInitializer& OBJ);

protected:
	
	/** A Simple UObject Instance. */
	UPROPERTY(Category = "Anti-Cheat", BlueprintReadWrite, VisibleInstanceOnly)
	USafeObject* ExampleObject;

public:

	virtual void BeginPlay() override;

};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////