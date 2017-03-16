///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "SCUE4.h"
#include "Runtime/CoreUObject/Public/UObject/TextProperty.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "SCLibrary.generated.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

UCLASS()
class SCUE4_API USCLibrary : public UBlueprintFunctionLibrary {
	GENERATED_BODY()
public:

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	#pragma region TYPES
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	/** Pure:: Gets hidden value from 'Safe Bool Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe Bool", Keywords = "Security Get Safe Bool"))
	static bool SCL_Pure_GetSafeBool(UPARAM(ref)FSafeBool &SB);
	//
	/** Pure:: Gets hidden value from 'Safe Bool Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe Bool", Keywords = "Security Get Safe Bool"))
	static bool SCL_Pure_GetSafeBoolWithKey(UPARAM(ref)FSafeBool &SB, FString Key);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe Bool Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe Bool", Keywords = "Security Get Safe Bool"))
	static bool SCL_Pure_SetSafeBool(UPARAM(ref)FSafeBool &SB, const bool Value);
	//
	/**	Pure:: Sets, and hides in memory, value for 'Safe Bool Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe Bool", Keywords = "Security Get Safe Bool"))
	static bool SCL_Pure_SetSafeBoolWithKey(UPARAM(ref)FSafeBool &SB, FString Key, const bool Value);

	//

	/** Pure:: Gets hidden value from 'Safe Int Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe Int", Keywords = "Security Get Safe Int"))
	static int32 SCL_Pure_GetSafeInt(UPARAM(ref)FSafeInt &SI);
	//
	/**	Pure:: Gets hidden value from 'Safe Int Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe Int", Keywords = "Security Get Safe Int"))
	static int32 SCL_Pure_GetSafeIntWithKey(UPARAM(ref)FSafeInt &SI, FString Key);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe Int Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe Int", Keywords = "Security Get Safe Int"))
	static int32 SCL_Pure_SetSafeInt(UPARAM(ref)FSafeInt &SI, const int32 Value);
	//
	/**	Pure:: Sets, and hides in memory, value for 'Safe Int Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe Int", Keywords = "Security Get Safe Int"))
	static int32 SCL_Pure_SetSafeIntWithKey(UPARAM(ref)FSafeInt &SI, FString Key, const int32 Value);

	//
	
	/** Pure:: Gets hidden value from 'Safe Byte Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe Byte", Keywords = "Security Get Safe Byte"))
	static uint8 SCL_Pure_GetSafeByte(UPARAM(ref)FSafeByte &SB);
	//
	/**	Pure:: Gets hidden value from 'Safe Byte Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe Byte", Keywords = "Security Get Safe Byte"))
	static uint8 SCL_Pure_GetSafeByteWithKey(UPARAM(ref)FSafeByte &SB, FString Key);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe Byte Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe Byte", Keywords = "Security Get Safe Byte"))
	static uint8 SCL_Pure_SetSafeByte(UPARAM(ref)FSafeByte &SB, const uint8 Value);
	//
	/**	Pure:: Sets, and hides in memory, value for 'Safe Byte Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe Byte", Keywords = "Security Get Safe Byte"))
	static uint8 SCL_Pure_SetSafeByteWithKey(UPARAM(ref)FSafeByte &SB, FString Key, const uint8 Value);

	//
	
	/** Pure:: Gets hidden value from 'Safe Float Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe Float", Keywords = "Security Get Safe Float"))
	static float SCL_Pure_GetSafeFloat(UPARAM(ref)FSafeFloat &SF);
	//
	/**	Pure:: Gets hidden value from 'Safe Float Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe Float", Keywords = "Security Get Safe Float"))
	static float SCL_Pure_GetSafeFloatWithKey(UPARAM(ref)FSafeFloat &SF, FString Key);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe Float Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe Float", Keywords = "Security Get Safe Float"))
	static float SCL_Pure_SetSafeFloat(UPARAM(ref)FSafeFloat &SF, const float Value);
	//
	/**	Pure:: Sets, and hides in memory, value for 'Safe Float Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe Float", Keywords = "Security Get Safe Float"))
	static float SCL_Pure_SetSafeFloatWithKey(UPARAM(ref)FSafeFloat &SF, FString Key, const float Value);

	//
	
	/** Pure:: Gets hidden value from 'Safe Name Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe Name", Keywords = "Security Get Safe Name"))
	static FName SCL_Pure_GetSafeName(UPARAM(ref)FSafeName &SN);
	//
	/**	Pure:: Gets hidden value from 'Safe Name Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe Name", Keywords = "Security Get Safe Name"))
	static FName SCL_Pure_GetSafeNameWithKey(UPARAM(ref)FSafeName &SN, FString Key);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe Name Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe Name", Keywords = "Security Get Safe Name"))
	static FName SCL_Pure_SetSafeName(UPARAM(ref)FSafeName &SN, const FName Value);
	//
	/**	Pure:: Sets, and hides in memory, value for 'Safe Name Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe Name", Keywords = "Security Get Safe Name"))
	static FName SCL_Pure_SetSafeNameWithKey(UPARAM(ref)FSafeName &SN, FString Key, const FName Value);

	//
	
	/** Pure:: Gets hidden value from 'Safe String Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe String", Keywords = "Security Get Safe String"))
	static FString SCL_Pure_GetSafeString(UPARAM(ref)FSafeString &SS);
	//
	/**	Pure:: Gets hidden value from 'Safe String Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe String", Keywords = "Security Get Safe String"))
	static FString SCL_Pure_GetSafeStringWithKey(UPARAM(ref)FSafeString &SS, FString Key);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe String Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe String", Keywords = "Security Get Safe String"))
	static FString SCL_Pure_SetSafeString(UPARAM(ref)FSafeString &SS, const FString Value);
	//
	/**	Pure:: Sets, and hides in memory, value for 'Safe String Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe String", Keywords = "Security Get Safe String"))
	static FString SCL_Pure_SetSafeStringWithKey(UPARAM(ref)FSafeString &SS, FString Key, const FString Value);

	//
	
	/** Pure:: Gets hidden value from 'Safe Text Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe Text", Keywords = "Security Get Safe Text"))
	static FText SCL_Pure_GetSafeText(UPARAM(ref)FSafeText &ST);
	//
	/**	Pure:: Gets hidden value from 'Safe Text Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe Text", Keywords = "Security Get Safe Text"))
	static FText SCL_Pure_GetSafeTextWithKey(UPARAM(ref)FSafeText &ST, FString Key);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe Text Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe Text", Keywords = "Security Get Safe Text"))
	static FText SCL_Pure_SetSafeText(UPARAM(ref)FSafeText &ST, const FText Value);
	//
	/**	Pure:: Sets, and hides in memory, value for 'Safe Text Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe Text", Keywords = "Security Get Safe Text"))
	static FText SCL_Pure_SetSafeTextWithKey(UPARAM(ref)FSafeText &ST, FString Key, const FText Value);

	//
	
	/** Pure:: Gets hidden value from 'Safe Vector2D Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe Vector2D", Keywords = "Security Get Safe Vector2D"))
	static FVector2D SCL_Pure_GetSafeVector2D(UPARAM(ref)FSafeVector2D &SV);
	//
	/**	Pure:: Gets hidden value from 'Safe Vector2D Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe Vector2D", Keywords = "Security Get Safe Vector2D"))
	static FVector2D SCL_Pure_GetSafeVector2DWithKey(UPARAM(ref)FSafeVector2D &SV, FString Key);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe Vector2D Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe Vector2D", Keywords = "Security Get Safe Vector2D"))
	static FVector2D SCL_Pure_SetSafeVector2D(UPARAM(ref)FSafeVector2D &SV, const FVector2D Value);
	//
	/**	Pure:: Sets, and hides in memory, value for 'Safe Vector2D Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe Vector2D", Keywords = "Security Get Safe Vector2D"))
	static FVector2D SCL_Pure_SetSafeVector2DWithKey(UPARAM(ref)FSafeVector2D &SV, FString Key, const FVector2D Value);

	//
	
	/** Pure:: Gets hidden value from 'Safe Vector3D Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe Vector3D", Keywords = "Security Get Safe Vector3D"))
	static FVector SCL_Pure_GetSafeVector3D(UPARAM(ref)FSafeVector3D &SV);
	//
	/**	Pure:: Gets hidden value from 'Safe Vector3D Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe Vector3D", Keywords = "Security Get Safe Vector3D"))
	static FVector SCL_Pure_GetSafeVector3DWithKey(UPARAM(ref)FSafeVector3D &SV, FString Key);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe Vector3D Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe Vector3D", Keywords = "Security Get Safe Vector3D"))
	static FVector SCL_Pure_SetSafeVector3D(UPARAM(ref)FSafeVector3D &SV, const FVector Value);
	//
	/**	Pure:: Sets, and hides in memory, value for 'Safe Vector3D Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe Vector3D", Keywords = "Security Get Safe Vector3D"))
	static FVector SCL_Pure_SetSafeVector3DWithKey(UPARAM(ref)FSafeVector3D &SV, FString Key, const FVector Value);

	//
	
	/** Pure:: Gets hidden value from 'Safe Vector4D Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe Vector4D", Keywords = "Security Get Safe Vector4D"))
	static FVector4 SCL_Pure_GetSafeVector4D(UPARAM(ref)FSafeVector4D &SV);
	//
	/**	Pure:: Gets hidden value from 'Safe Vector4D Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe Vector4D", Keywords = "Security Get Safe Vector4D"))
	static FVector4 SCL_Pure_GetSafeVector4DWithKey(UPARAM(ref)FSafeVector4D &SV, FString Key);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe Vector4D Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe Vector4D", Keywords = "Security Get Safe Vector4D"))
	static FVector4 SCL_Pure_SetSafeVector4D(UPARAM(ref)FSafeVector4D &SV, UPARAM(ref)FVector4 &Value);
	//
	/**	Pure:: Sets, and hides in memory, value for 'Safe Vector4D Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe Vector4D", Keywords = "Security Get Safe Vector4D"))
	static FVector4 SCL_Pure_SetSafeVector4DWithKey(UPARAM(ref)FSafeVector4D &SV, FString Key, UPARAM(ref)FVector4 &Value);

	//
	
	/** Pure:: Gets hidden value from 'Safe Color Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe Color", Keywords = "Security Get Safe Color"))
	static FLinearColor SCL_Pure_GetSafeColor(UPARAM(ref)FSafeColor &SC);
	//
	/**	Pure:: Gets hidden value from 'Safe Color Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe Color", Keywords = "Security Get Safe Color"))
	static FLinearColor SCL_Pure_GetSafeColorWithKey(UPARAM(ref)FSafeColor &SC, FString Key);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe Color Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe Color", Keywords = "Security Get Safe Color"))
	static FLinearColor SCL_Pure_SetSafeColor(UPARAM(ref)FSafeColor &SC, UPARAM(ref)FLinearColor& Value);
	//
	/**	Pure:: Sets, and hides in memory, value for 'Safe Color Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe Color", Keywords = "Security Get Safe Color"))
	static FLinearColor SCL_Pure_SetSafeColorWithKey(UPARAM(ref)FSafeColor &SC, FString Key, UPARAM(ref)FLinearColor& Value);

	//
	
	/** Pure:: Gets hidden value from 'Safe Rotator Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe Rotator", Keywords = "Security Get Safe Rotator"))
	static FRotator SCL_Pure_GetSafeRotator(UPARAM(ref)FSafeRotator &SR);
	//
	/**	Pure:: Gets hidden value from 'Safe Rotator Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe Rotator", Keywords = "Security Get Safe Rotator"))
	static FRotator SCL_Pure_GetSafeRotatorWithKey(UPARAM(ref)FSafeRotator &SR, FString Key);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe Rotator Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe Rotator", Keywords = "Security Get Safe Rotator"))
	static FRotator SCL_Pure_SetSafeRotator(UPARAM(ref)FSafeRotator &SR, const FRotator Value);
	//
	/**	Pure:: Sets, and hides in memory, value for 'Safe Rotator Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe Rotator", Keywords = "Security Get Safe Rotator"))
	static FRotator SCL_Pure_SetSafeRotatorWithKey(UPARAM(ref)FSafeRotator &SR, FString Key, const FRotator Value);

	//
	
	/** Pure:: Gets hidden value from 'Safe Transform Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe Transform", Keywords = "Security Get Safe Transform"))
	static FTransform SCL_Pure_GetSafeTransform(UPARAM(ref)FSafeTransform &ST);
	//
	/** Pure:: Gets hidden value from 'Safe Transform Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Get Safe Transform", Keywords = "Security Get Safe Transform"))
	static FTransform SCL_Pure_GetSafeTransformWithKey(UPARAM(ref)FSafeTransform &ST, FString Key);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe Transform Struct'. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe Transform", Keywords = "Security Get Safe Transform"))
	static FTransform SCL_Pure_SetSafeTransform(UPARAM(ref)FSafeTransform &ST, UPARAM(ref)FTransform& Value);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe Transform Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category = "Security", meta = (DisplayName = "Set Safe Transform", Keywords = "Security Get Safe Transform"))
	static FTransform SCL_Pure_SetSafeTransformWithKey(UPARAM(ref)FSafeTransform &ST, FString Key, UPARAM(ref)FTransform& Value);

	//
	//
	
	/** Callable:: Gets hidden value from 'Safe Bool Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe Bool", Keywords = "Security Get Safe Bool"))
	static bool SCL_Callable_GetSafeBool(UPARAM(ref)FSafeBool &SB);
	//
	/**	Callable:: Gets hidden value from 'Safe Bool Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe Bool", Keywords = "Security Get Safe Bool"))
	static bool SCL_Callable_GetSafeBoolWithKey(UPARAM(ref)FSafeBool &SB, FString Key);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe Bool Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe Bool", Keywords = "Security Get Safe Bool"))
	static bool SCL_Callable_SetSafeBool(UPARAM(ref)FSafeBool &SB, const bool Value);
	//
	/**	Callable:: Sets, and hides in memory, value for 'Safe Bool Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe Bool", Keywords = "Security Get Safe Bool"))
	static bool SCL_Callable_SetSafeBoolWithKey(UPARAM(ref)FSafeBool &SB, FString Key, const bool Value);

	//

	/** Callable:: Gets hidden value from 'Safe Int Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe Int", Keywords = "Security Get Safe Int"))
	static int32 SCL_Callable_GetSafeInt(UPARAM(ref)FSafeInt &SI);
	//
	/**	Gets hidden value from 'Safe Int Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe Int", Keywords = "Security Get Safe Int"))
	static int32 SCL_Callable_GetSafeIntWithKey(UPARAM(ref)FSafeInt &SI, FString Key);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe Int Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe Int", Keywords = "Security Get Safe Int"))
	static int32 SCL_Callable_SetSafeInt(UPARAM(ref)FSafeInt &SI, const int32 Value);
	//
	/**	Callable:: Sets, and hides in memory, value for 'Safe Int Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe Int", Keywords = "Security Get Safe Int"))
	static int32 SCL_Callable_SetSafeIntWithKey(UPARAM(ref)FSafeInt &SI, FString Key, const int32 Value);

	//
	
	/** Callable:: Gets hidden value from 'Safe Byte Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe Byte", Keywords = "Security Get Safe Byte"))
	static uint8 SCL_Callable_GetSafeByte(UPARAM(ref)FSafeByte &SB);
	//
	/**	Gets hidden value from 'Safe Byte Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe Byte", Keywords = "Security Get Safe Byte"))
	static uint8 SCL_Callable_GetSafeByteWithKey(UPARAM(ref)FSafeByte &SB, FString Key);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe Byte Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe Byte", Keywords = "Security Get Safe Byte"))
	static uint8 SCL_Callable_SetSafeByte(UPARAM(ref)FSafeByte &SB, const uint8 Value);
	//
	/**	Callable:: Sets, and hides in memory, value for 'Safe Byte Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe Byte", Keywords = "Security Get Safe Byte"))
	static uint8 SCL_Callable_SetSafeByteWithKey(UPARAM(ref)FSafeByte &SB, FString Key, const uint8 Value);

	//
	
	/** Callable:: Gets hidden value from 'Safe Float Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe Float", Keywords = "Security Get Safe Float"))
	static float SCL_Callable_GetSafeFloat(UPARAM(ref)FSafeFloat &SF);
	//
	/**	Callable:: Gets hidden value from 'Safe Float Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe Float", Keywords = "Security Get Safe Float"))
	static float SCL_Callable_GetSafeFloatWithKey(UPARAM(ref)FSafeFloat &SF, FString Key);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe Float Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe Float", Keywords = "Security Get Safe Float"))
	static float SCL_Callable_SetSafeFloat(UPARAM(ref)FSafeFloat &SF, const float Value);
	//
	/**	Callable:: Sets, and hides in memory, value for 'Safe Float Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe Float", Keywords = "Security Get Safe Float"))
	static float SCL_Callable_SetSafeFloatWithKey(UPARAM(ref)FSafeFloat &SF, FString Key, const float Value);

	//
	
	/** Callable:: Gets hidden value from 'Safe Name Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe Name", Keywords = "Security Get Safe Name"))
	static FName SCL_Callable_GetSafeName(UPARAM(ref)FSafeName &SN);
	//
	/**	Callable:: Gets hidden value from 'Safe Name Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe Name", Keywords = "Security Get Safe Name"))
	static FName SCL_Callable_GetSafeNameWithKey(UPARAM(ref)FSafeName &SN, FString Key);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe Name Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe Name", Keywords = "Security Get Safe Name"))
	static FName SCL_Callable_SetSafeName(UPARAM(ref)FSafeName &SN, const FName Value);
	//
	/**	Callable:: Sets, and hides in memory, value for 'Safe Name Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe Name", Keywords = "Security Get Safe Name"))
	static FName SCL_Callable_SetSafeNameWithKey(UPARAM(ref)FSafeName &SN, FString Key, const FName Value);

	//
	
	/** Callable:: Gets hidden value from 'Safe String Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe String", Keywords = "Security Get Safe String"))
	static FString SCL_Callable_GetSafeString(UPARAM(ref)FSafeString &SS);
	//
	/**	Callable:: Gets hidden value from 'Safe String Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe String", Keywords = "Security Get Safe String"))
	static FString SCL_Callable_GetSafeStringWithKey(UPARAM(ref)FSafeString &SS, FString Key);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe String Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe String", Keywords = "Security Get Safe String"))
	static FString SCL_Callable_SetSafeString(UPARAM(ref)FSafeString &SS, const FString Value);
	//
	/**	Callable:: Sets, and hides in memory, value for 'Safe String Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe String", Keywords = "Security Get Safe String"))
	static FString SCL_Callable_SetSafeStringWithKey(UPARAM(ref)FSafeString &SS, FString Key, const FString Value);

	//
	
	/** Callable:: Gets hidden value from 'Safe Text Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe Text", Keywords = "Security Get Safe Text"))
	static FText SCL_Callable_GetSafeText(UPARAM(ref)FSafeText &ST);
	//
	/**	Callable:: Gets hidden value from 'Safe Text Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe Text", Keywords = "Security Get Safe Text"))
	static FText SCL_Callable_GetSafeTextWithKey(UPARAM(ref)FSafeText &ST, FString Key);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe Text Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe Text", Keywords = "Security Get Safe Text"))
	static FText SCL_Callable_SetSafeText(UPARAM(ref)FSafeText &ST, const FText Value);
	//
	/**	Callable:: Sets, and hides in memory, value for 'Safe Text Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe Text", Keywords = "Security Get Safe Text"))
	static FText SCL_Callable_SetSafeTextWithKey(UPARAM(ref)FSafeText &ST, FString Key, const FText Value);

	//
	
	/** Callable:: Gets hidden value from 'Safe Vector2D Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe Vector2D", Keywords = "Security Get Safe Vector2D"))
	static FVector2D SCL_Callable_GetSafeVector2D(UPARAM(ref)FSafeVector2D &SV);
	//
	/**	Callable:: Gets hidden value from 'Safe Vector2D Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe Vector2D", Keywords = "Security Get Safe Vector2D"))
	static FVector2D SCL_Callable_GetSafeVector2DWithKey(UPARAM(ref)FSafeVector2D &SV, FString Key);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe Vector2D Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe Vector2D", Keywords = "Security Get Safe Vector2D"))
	static FVector2D SCL_Callable_SetSafeVector2D(UPARAM(ref)FSafeVector2D &SV, const FVector2D Value);
	//
	/**	Callable:: Sets, and hides in memory, value for 'Safe Vector2D Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe Vector2D", Keywords = "Security Get Safe Vector2D"))
	static FVector2D SCL_Callable_SetSafeVector2DWithKey(UPARAM(ref)FSafeVector2D &SV, FString Key, const FVector2D Value);

	//
	
	/** Callable:: Gets hidden value from 'Safe Vector3D Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe Vector3D", Keywords = "Security Get Safe Vector3D"))
	static FVector SCL_Callable_GetSafeVector3D(UPARAM(ref)FSafeVector3D &SV);
	//
	/**	Callable:: Gets hidden value from 'Safe Vector3D Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe Vector3D", Keywords = "Security Get Safe Vector3D"))
	static FVector SCL_Callable_GetSafeVector3DWithKey(UPARAM(ref)FSafeVector3D &SV, FString Key);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe Vector3D Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe Vector3D", Keywords = "Security Get Safe Vector3D"))
	static FVector SCL_Callable_SetSafeVector3D(UPARAM(ref)FSafeVector3D &SV, const FVector Value);
	//
	/**	Callable:: Sets, and hides in memory, value for 'Safe Vector3D Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe Vector3D", Keywords = "Security Get Safe Vector3D"))
	static FVector SCL_Callable_SetSafeVector3DWithKey(UPARAM(ref)FSafeVector3D &SV, FString Key, const FVector Value);

	//
	
	/** Callable:: Gets hidden value from 'Safe Vector4D Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe Vector4D", Keywords = "Security Get Safe Vector4D"))
	static FVector4 SCL_Callable_GetSafeVector4D(UPARAM(ref)FSafeVector4D &SV);
	//
	/**	Callable:: Gets hidden value from 'Safe Vector4D Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe Vector4D", Keywords = "Security Get Safe Vector4D"))
	static FVector4 SCL_Callable_GetSafeVector4DWithKey(UPARAM(ref)FSafeVector4D &SV, FString Key);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe Vector4D Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe Vector4D", Keywords = "Security Get Safe Vector4D"))
	static FVector4 SCL_Callable_SetSafeVector4D(UPARAM(ref)FSafeVector4D &SV, UPARAM(ref)FVector4& Value);
	//
	/**	Callable:: Sets, and hides in memory, value for 'Safe Vector4D Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe Vector4D", Keywords = "Security Get Safe Vector4D"))
	static FVector4 SCL_Callable_SetSafeVector4DWithKey(UPARAM(ref)FSafeVector4D &SV, FString Key, UPARAM(ref)FVector4& Value);

	//
	
	/** Callable:: Gets hidden value from 'Safe Rotator Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe Rotator", Keywords = "Security Get Safe Rotator"))
	static FRotator SCL_Callable_GetSafeRotator(UPARAM(ref)FSafeRotator &SR);
	//
	/**	Callable:: Gets hidden value from 'Safe Vector4D Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe Rotator", Keywords = "Security Get Safe Rotator"))
	static FRotator SCL_Callable_GetSafeRotatorWithKey(UPARAM(ref)FSafeRotator &SR, FString Key);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe Rotator Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe Rotator", Keywords = "Security Get Safe Rotator"))
	static FRotator SCL_Callable_SetSafeRotator(UPARAM(ref)FSafeRotator &SR, const FRotator Value);
	//
	/**	Callable:: Sets, and hides in memory, value for 'Safe Rotator Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe Rotator", Keywords = "Security Get Safe Rotator"))
	static FRotator SCL_Callable_SetSafeRotatorWithKey(UPARAM(ref)FSafeRotator &SR, FString Key, const FRotator Value);

	//
	
	/** Callable:: Gets hidden value from 'Safe Color Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe Color", Keywords = "Security Get Safe Color"))
	static FLinearColor SCL_Callable_GetSafeColor(UPARAM(ref)FSafeColor &SC);
	//
	/**	Callable:: Gets hidden value from 'Safe Color Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe Color", Keywords = "Security Get Safe Color"))
	static FLinearColor SCL_Callable_GetSafeColorWithKey(UPARAM(ref)FSafeColor &SC, FString Key);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe Color Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe Color", Keywords = "Security Get Safe Color"))
	static FLinearColor SCL_Callable_SetSafeColor(UPARAM(ref)FSafeColor &SC, UPARAM(ref)FLinearColor& Value);
	//
	/**	Callable:: Sets, and hides in memory, value for 'Safe Color Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe Color", Keywords = "Security Get Safe Color"))
	static FLinearColor SCL_Callable_SetSafeColorWithKey(UPARAM(ref)FSafeColor &SC, FString Key, UPARAM(ref)FLinearColor& Value);

	//
	
	/** Callable:: Gets hidden value from 'Safe Transform Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe Transform", Keywords = "Security Get Safe Transform"))
	static FTransform SCL_Callable_GetSafeTransform(UPARAM(ref)FSafeTransform &ST);
	//
	/** Callable:: Gets hidden value from 'Safe Transform Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Get Safe Transform", Keywords = "Security Get Safe Transform"))
	static FTransform SCL_Callable_GetSafeTransformWithKey(UPARAM(ref)FSafeTransform &ST, FString Key);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe Transform Struct'. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe Transform", Keywords = "Security Get Safe Transform"))
	static FTransform SCL_Callable_SetSafeTransform(UPARAM(ref)FSafeTransform &ST, UPARAM(ref)FTransform& Value);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe Transform Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category = "Security", meta = (DisplayName = "Set Safe Transform", Keywords = "Security Get Safe Transform"))
	static FTransform SCL_Callable_SetSafeTransformWithKey(UPARAM(ref)FSafeTransform &ST, FString Key, UPARAM(ref)FTransform& Value);


	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	#pragma endregion TYPES
	#pragma region OPERATORS
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// FSBool

	/* FSafe -> FSafe */

	/** Set:: Safe Bool = Safe Bool */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe Bool)", CompactNodeTitle = "=", Keywords = "Security Set Safe Bool EQUAL ="))
	static FSafeBool SCO_Pure_SetSafeBoolEqualFSB(UPARAM(ref)FSafeBool &FSB, UPARAM(ref)FSafeBool &SSB, bool &Output);

	/** Get:: Safe Bool == Safe Bool */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe Bool)", CompactNodeTitle = "==", Keywords = "Security Get Safe Bool EQUAL =="))
	static FSafeBool SCO_Pure_GetSafeBoolEqualFSB(UPARAM(ref)FSafeBool &FSB, UPARAM(ref)FSafeBool &SSB, bool &Output);

	/** Get:: Safe Bool != Safe Bool */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe Bool)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Bool NOT !="))
	static FSafeBool SCO_Pure_GetSafeBoolNotEqualFSB(UPARAM(ref)FSafeBool &FSB, UPARAM(ref)FSafeBool &SSB, bool &Output);

	/** Get:: Safe Bool && Safe Bool */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "&& (Safe Bool)", CompactNodeTitle = "&&", Keywords = "Security Get Safe Bool AND &&"))
	static FSafeBool SCO_Pure_GetSafeBoolAndFSB(UPARAM(ref)FSafeBool &FSB, UPARAM(ref)FSafeBool &SSB, bool &Output);

	/** Get:: Safe Bool || Safe Bool */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "|| (Safe Bool)", CompactNodeTitle = "||", Keywords = "Security Get Safe Bool OR ||"))
	static FSafeBool SCO_Pure_GetSafeBoolOrFSB(UPARAM(ref)FSafeBool &FSB, UPARAM(ref)FSafeBool &SSB, bool &Output);
	
	/* Native -> FSafe */

	/** Set:: Safe Bool = Bool */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Bool)", CompactNodeTitle = "=", Keywords = "Security Set Safe Bool EQUAL ="))
	static FSafeBool SCO_Pure_SetSafeBoolEqualBool(UPARAM(ref)FSafeBool &FSB, UPARAM(ref)bool &NB, bool &Output);

	/** Get:: Safe Bool == Bool */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Bool)", CompactNodeTitle = "==", Keywords = "Security Get Safe Bool EQUAL =="))
	static FSafeBool SCO_Pure_GetSafeBoolEqualBool(UPARAM(ref)FSafeBool &FSB, UPARAM(ref)bool &NB, bool &Output);

	/** Get:: Safe Bool != Bool */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Bool)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Bool NOT !="))
	static FSafeBool SCO_Pure_GetSafeBoolNotEqualBool(UPARAM(ref)FSafeBool &FSB, UPARAM(ref)bool &NB, bool &Output);

	/** Get:: Safe Bool && Bool */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "&& (Bool)", CompactNodeTitle = "&&", Keywords = "Security Get Safe Bool AND &&"))
	static FSafeBool SCO_Pure_GetSafeBoolAndBool(UPARAM(ref)FSafeBool &FSB, UPARAM(ref)bool &NB, bool &Output);

	/** Get:: Safe Bool || Bool */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "|| (Bool)", CompactNodeTitle = "||", Keywords = "Security Get Safe Bool OR ||"))
	static FSafeBool SCO_Pure_GetSafeBoolOrBool(UPARAM(ref)FSafeBool &FSB, UPARAM(ref)bool &NB, bool &Output);
	
	/* FSafe -> Native */

	/** Set:: Bool = Safe Bool */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe Bool)", CompactNodeTitle = "=", Keywords = "Security Set Safe Bool EQUAL ="))
	static bool SCO_Pure_SetBoolEqualFSB(UPARAM(ref)bool &NB, UPARAM(ref)FSafeBool &FSB);

	/** Get:: Bool == Safe Bool */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe Bool)", CompactNodeTitle = "==", Keywords = "Security Get Safe Bool EQUAL =="))
	static bool SCO_Pure_GetBoolEqualFSB(UPARAM(ref)bool &NB, UPARAM(ref)FSafeBool &FSB);

	/** Get:: Bool != Safe Bool */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe Bool)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Bool NOT !="))
	static bool SCO_Pure_GetBoolNotEqualFSB(UPARAM(ref)bool &NB, UPARAM(ref)FSafeBool &FSB);

	/** Get:: Bool && Safe Bool */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "&& (Safe Bool)", CompactNodeTitle = "&&", Keywords = "Security Get Safe Bool AND &&"))
	static bool SCO_Pure_GetBoolAndFSB(UPARAM(ref)bool &NB, UPARAM(ref)FSafeBool &FSB);

	/** Get:: Bool || Safe Bool */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "|| (Safe Bool)", CompactNodeTitle = "||", Keywords = "Security Get Safe Bool OR ||"))
	static bool SCO_Pure_GetBoolOrFSB(UPARAM(ref)bool &NB, UPARAM(ref)FSafeBool &FSB);

	// FSByte

	/* FSafe -> FSafe */

	/** Get:: Safe Byte == Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe Byte)", CompactNodeTitle = "==", Keywords = "Security Get Safe Byte EQUAL =="))
	static bool SCO_Pure_GetSafeByteEqualFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB);

	/** Get:: Safe Byte != Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe Byte)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Byte NOT !="))
	static bool SCO_Pure_GetSafeByteNotEqualFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB);

	/** Get:: Safe Byte > Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Safe Byte)", CompactNodeTitle = ">", Keywords = "Security Get Safe Byte GREATER >"))
	static bool SCO_Pure_GetSafeByteGreaterFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB);

	/** Get:: Safe Byte < Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Safe Byte)", CompactNodeTitle = "<", Keywords = "Security Get Safe Byte LESS <"))
	static bool SCO_Pure_GetSafeByteSmallerFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB);

	/** Get:: Safe Byte >= Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">= (Safe Byte)", CompactNodeTitle = ">=", Keywords = "Security Get Safe Byte GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeByteGreaterEqualFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB);

	/** Get:: Safe Byte <= Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<= (Safe Byte)", CompactNodeTitle = "<=", Keywords = "Security Get Safe Byte LESS EQUAL <="))
	static bool SCO_Pure_GetSafeByteSmallerEqualFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB);

	/** Set:: Safe Byte = Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe Byte)", CompactNodeTitle = "=", Keywords = "Security Set Safe Byte EQUAL ="))
	static FSafeByte SCO_Pure_SetSafeByteEqualFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output);

	/** Get:: Safe Byte + Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Safe Byte)", CompactNodeTitle = "+", Keywords = "Security Get Safe Byte PLUS +"))
	static FSafeByte SCO_Pure_GetSafeBytePlusFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output);

	/** Get:: Safe Byte - Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "- (Safe Byte)", CompactNodeTitle = "-", Keywords = "Security Get Safe Byte MINUS -"))
	static FSafeByte SCO_Pure_GetSafeByteMinusFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output);

	/** Get:: Safe Byte * Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "* (Safe Byte)", CompactNodeTitle = "*", Keywords = "Security Get Safe Byte TIMES *"))
	static FSafeByte SCO_Pure_GetSafeByteTimesFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output);

	/** Get:: Safe Byte / Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "/ (Safe Byte)", CompactNodeTitle = "/", Keywords = "Security Get Safe Byte DIVIDE /"))
	static FSafeByte SCO_Pure_GetSafeByteDivideFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output);

	/** Get:: Safe Byte ++ */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "++ (Safe Byte)", CompactNodeTitle = "++", Keywords = "Security Get Safe Byte ADD PLUS ++"))
	static FSafeByte SCO_Pure_GetSafeByteIncreaseFSB(UPARAM(ref)FSafeByte &FSB, uint8 &Output);

	/** Get:: Safe Byte -- */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-- (Safe Byte)", CompactNodeTitle = "--", Keywords = "Security Get Safe Byte LESS --"))
	static FSafeByte SCO_Pure_GetSafeByteDecreaseFSB(UPARAM(ref)FSafeByte &FSB, uint8 &Output);

	/** Get:: Safe Byte += Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Safe Byte)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Byte PLUS EQUAL +="))
	static FSafeByte SCO_Pure_GetSafeBytePlusEqualFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output);

	/** Get:: Safe Byte -= Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-= (Safe Byte)", CompactNodeTitle = "-=", Keywords = "Security Get Safe Byte MINUS EQUAL -="))
	static FSafeByte SCO_Pure_GetSafeByteMinusEqualFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output);

	/** Get:: Safe Byte ~ */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "~ (Safe Byte)", CompactNodeTitle = "~", Keywords = "Security Get Safe Byte NOT ~"))
	static FSafeByte SCO_Pure_GetSafeByteNotFSB(UPARAM(ref)FSafeByte &FSB, uint8 &Output);

	/** Get:: Safe Byte % Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "% (Safe Byte)", CompactNodeTitle = "%", Keywords = "Security Get Safe Byte MOD %"))
	static FSafeByte SCO_Pure_GetSafeByteModFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output);

	/** Get:: Safe Byte & Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "& (Safe Byte)", CompactNodeTitle = "&", Keywords = "Security Get Safe Byte AND &"))
	static FSafeByte SCO_Pure_GetSafeByteAndFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output);

	/** Get:: Safe Byte | Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "| (Safe Byte)", CompactNodeTitle = "|", Keywords = "Security Get Safe Byte OR |"))
	static FSafeByte SCO_Pure_GetSafeByteOrFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output);

	/** Get:: Safe Byte ^ Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "^ (Safe Byte)", CompactNodeTitle = "^", Keywords = "Security Get Safe Byte XOR ^"))
	static FSafeByte SCO_Pure_GetSafeByteXorFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output);

	/** Get:: Safe Byte >> Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">> (Safe Byte)", CompactNodeTitle = ">>", Keywords = "Security Get Safe Byte SHIFT >>"))
	static FSafeByte SCO_Pure_GetSafeByteShiftRFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output);

	/** Get:: Safe Byte << Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<< (Safe Byte)", CompactNodeTitle = "<<", Keywords = "Security Get Safe Byte SHIFT <<"))
	static FSafeByte SCO_Pure_GetSafeByteShiftLFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output);

	/* Native -> FSafe */

	/** Get:: Safe Byte == Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Byte)", CompactNodeTitle = "==", Keywords = "Security Get Safe Byte EQUAL =="))
	static bool SCO_Pure_GetSafeByteEqualByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB);

	/** Get:: Safe Byte != Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Byte)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Byte NOT !="))
	static bool SCO_Pure_GetSafeByteNotEqualByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB);

	/** Get:: Safe Byte > Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Byte)", CompactNodeTitle = ">", Keywords = "Security Get Safe Byte GREATER >"))
	static bool SCO_Pure_GetSafeByteGreaterByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB);

	/** Get:: Safe Byte < Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Byte)", CompactNodeTitle = "<", Keywords = "Security Get Safe Byte LESS <"))
	static bool SCO_Pure_GetSafeByteSmallerByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB);

	/** Get:: Safe Byte >= Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">= (Byte)", CompactNodeTitle = ">=", Keywords = "Security Get Safe Byte GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeByteGreaterEqualByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB);

	/** Get:: Safe Byte <= Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<= (Byte)", CompactNodeTitle = "<=", Keywords = "Security Get Safe Byte LESS EQUAL <="))
	static bool SCO_Pure_GetSafeByteSmallerEqualByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB);

	/** Set:: Safe Byte = Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Byte)", CompactNodeTitle = "=", Keywords = "Security Set Safe Byte EQUAL ="))
	static FSafeByte SCO_Pure_SetSafeByteEqualByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output);

	/** Get:: Safe Byte + Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Byte)", CompactNodeTitle = "+", Keywords = "Security Get Safe Byte PLUS +"))
	static FSafeByte SCO_Pure_GetSafeBytePlusByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output);

	/** Get:: Safe Byte - Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "- (Byte)", CompactNodeTitle = "-", Keywords = "Security Get Safe Byte MINUS -"))
	static FSafeByte SCO_Pure_GetSafeByteMinusByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output);

	/** Get:: Safe Byte * Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "* (Byte)", CompactNodeTitle = "*", Keywords = "Security Get Safe Byte TIMES *"))
	static FSafeByte SCO_Pure_GetSafeByteTimesByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output);

	/** Get:: Safe Byte / Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "/ (Byte)", CompactNodeTitle = "/", Keywords = "Security Get Safe Byte DIVIDE /"))
	static FSafeByte SCO_Pure_GetSafeByteDivideByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output);

	/** Get:: Safe Byte += Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Byte)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Byte PLUS EQUAL +="))
	static FSafeByte SCO_Pure_GetSafeBytePlusEqualByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output);

	/** Get:: Safe Byte -= Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-= (Byte)", CompactNodeTitle = "-=", Keywords = "Security Get Safe Byte MINUS EQUAL -="))
	static FSafeByte SCO_Pure_GetSafeByteMinusEqualByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output);

	/** Get:: Safe Byte ~ */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "~ (Safe Byte)", CompactNodeTitle = "~", Keywords = "Security Get Safe Byte NOT ~"))
	static FSafeByte SCO_Pure_GetSafeByteNotByte(UPARAM(ref)uint8 &NB, uint8 &Output);

	/** Get:: Safe Byte % Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "% (Byte)", CompactNodeTitle = "%", Keywords = "Security Get Safe Byte MOD %"))
	static FSafeByte SCO_Pure_GetSafeByteModByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output);

	/** Get:: Safe Byte & Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "& (Byte)", CompactNodeTitle = "&", Keywords = "Security Get Safe Byte AND &"))
	static FSafeByte SCO_Pure_GetSafeByteAndByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output);

	/** Get:: Safe Byte | Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "| (Byte)", CompactNodeTitle = "|", Keywords = "Security Get Safe Byte OR |"))
	static FSafeByte SCO_Pure_GetSafeByteOrByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output);

	/** Get:: Safe Byte ^ Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "^ (Byte)", CompactNodeTitle = "^", Keywords = "Security Get Safe Byte XOR ^"))
	static FSafeByte SCO_Pure_GetSafeByteXorByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output);

	/** Get:: Safe Byte >> Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">> (Byte)", CompactNodeTitle = ">>", Keywords = "Security Get Safe Byte SHIFT >>"))
	static FSafeByte SCO_Pure_GetSafeByteShiftRByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output);

	/** Get:: Safe Byte << Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<< (Byte)", CompactNodeTitle = "<<", Keywords = "Security Get Safe Byte SHIFT <<"))
	static FSafeByte SCO_Pure_GetSafeByteShiftLByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output);

	/* FSafe -> Native */

	/** Get:: Byte == Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe Byte)", CompactNodeTitle = "==", Keywords = "Security Get Safe Byte EQUAL =="))
	static bool SCO_Pure_GetByteEqualFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB);

	/** Get:: Byte != Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe Byte)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Byte NOT !="))
	static bool SCO_Pure_GetByteNotEqualFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB);

	/** Get:: Byte > Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Safe Byte)", CompactNodeTitle = ">", Keywords = "Security Get Safe Byte GREATER >"))
	static bool SCO_Pure_GetByteGreaterFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB);

	/** Get:: Byte < Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Safe Byte)", CompactNodeTitle = "<", Keywords = "Security Get Safe Byte LESS <"))
	static bool SCO_Pure_GetByteSmallerFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB);

	/** Get:: Byte >= Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">= (Safe Byte)", CompactNodeTitle = ">=", Keywords = "Security Get Safe Byte GREATER EQUAL >="))
	static bool SCO_Pure_GetByteGreaterEqualFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB);

	/** Get:: Byte <= Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<= (Safe Byte)", CompactNodeTitle = "<=", Keywords = "Security Get Safe Byte LESS EQUAL <="))
	static bool SCO_Pure_GetByteSmallerEqualFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB);

	/** Set:: Byte = Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe Byte)", CompactNodeTitle = "=", Keywords = "Security Set Safe Byte EQUAL ="))
	static uint8 SCO_Pure_SetByteEqualFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB);

	/** Get:: Byte + Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Safe Byte)", CompactNodeTitle = "+", Keywords = "Security Get Safe Byte PLUS +"))
	static uint8 SCO_Pure_GetBytePlusFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB);

	/** Get:: Byte - Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "- (Safe Byte)", CompactNodeTitle = "-", Keywords = "Security Get Safe Byte MINUS -"))
	static uint8 SCO_Pure_GetByteMinusFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB);

	/** Get:: Byte * Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "* (Safe Byte)", CompactNodeTitle = "*", Keywords = "Security Get Safe Byte TIMES *"))
	static uint8 SCO_Pure_GetByteTimesFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB);

	/** Get:: Byte / Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "/ (Safe Byte)", CompactNodeTitle = "/", Keywords = "Security Get Safe Byte DIVIDE /"))
	static uint8 SCO_Pure_GetByteDivideFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB);

	/** Get:: Byte += Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Safe Byte)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Byte PLUS EQUAL +="))
	static uint8 SCO_Pure_GetBytePlusEqualFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB);

	/** Get:: Byte -= Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-= (Safe Byte)", CompactNodeTitle = "-=", Keywords = "Security Get Safe Byte MINUS EQUAL -="))
	static uint8 SCO_Pure_GetByteMinusEqualFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB);

	/** Get:: Byte % Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "% (Safe Byte)", CompactNodeTitle = "%", Keywords = "Security Get Safe Byte MOD %"))
	static uint8 SCO_Pure_GetByteModFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB);

	/** Get:: Byte & Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "& (Safe Byte)", CompactNodeTitle = "&", Keywords = "Security Get Safe Byte AND &"))
	static uint8 SCO_Pure_GetByteAndFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB);

	/** Get:: Byte | Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "| (Safe Byte)", CompactNodeTitle = "|", Keywords = "Security Get Safe Byte OR |"))
	static uint8 SCO_Pure_GetByteOrFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB);

	/** Get:: Byte ^ Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "^ (Safe Byte)", CompactNodeTitle = "^", Keywords = "Security Get Safe Byte XOR ^"))
	static uint8 SCO_Pure_GetByteXorFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB);

	/** Get:: Byte >> Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">> (Safe Byte)", CompactNodeTitle = ">>", Keywords = "Security Get Safe Byte SHIFT >>"))
	static uint8 SCO_Pure_GetByteShiftRFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB);

	/** Get:: Byte << Safe Byte */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<< (Safe Byte)", CompactNodeTitle = "<<", Keywords = "Security Get Safe Byte SHIFT <<"))
	static uint8 SCO_Pure_GetByteShiftLFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB);

	// FSInt

	/* FSafe -> FSafe */

	/** Get:: Safe Integer == Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe Integer)", CompactNodeTitle = "==", Keywords = "Security Get Safe Integer EQUAL =="))
	static bool SCO_Pure_GetSafeIntEqualFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI);

	/** Get:: Safe Integer != Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe Integer)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Integer NOT !="))
	static bool SCO_Pure_GetSafeIntNotEqualFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI);

	/** Get:: Safe Integer > Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Safe Integer)", CompactNodeTitle = ">", Keywords = "Security Get Safe Integer GREATER >"))
	static bool SCO_Pure_GetSafeIntGreaterFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI);

	/** Get:: Safe Integer < Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Safe Integer)", CompactNodeTitle = "<", Keywords = "Security Get Safe Integer LESS <"))
	static bool SCO_Pure_GetSafeIntSmallerFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI);

	/** Get:: Safe Integer >= Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">= (Safe Integer)", CompactNodeTitle = ">=", Keywords = "Security Get Safe Integer GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeIntGreaterEqualFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI);

	/** Get:: Safe Integer <= Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<= (Safe Integer)", CompactNodeTitle = "<=", Keywords = "Security Get Safe Integer LESS EQUAL <="))
	static bool SCO_Pure_GetSafeIntSmallerEqualFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI);

	/** Set:: Safe Integer = Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe Integer)", CompactNodeTitle = "=", Keywords = "Security Set Safe Integer EQUAL ="))
	static FSafeInt SCO_Pure_SetSafeIntEqualFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output);

	/** Get:: Safe Integer + Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Safe Integer)", CompactNodeTitle = "+", Keywords = "Security Get Safe Integer PLUS +"))
	static FSafeInt SCO_Pure_GetSafeIntPlusFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output);

	/** Get:: Safe Integer - Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "- (Safe Integer)", CompactNodeTitle = "-", Keywords = "Security Get Safe Integer MINUS -"))
	static FSafeInt SCO_Pure_GetSafeIntMinusFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output);

	/** Get:: Safe Integer * Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "* (Safe Integer)", CompactNodeTitle = "*", Keywords = "Security Get Safe Integer TIMES *"))
	static FSafeInt SCO_Pure_GetSafeIntTimesFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output);

	/** Get:: Safe Integer / Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "/ (Safe Integer)", CompactNodeTitle = "/", Keywords = "Security Get Safe Integer DIVIDE /"))
	static FSafeInt SCO_Pure_GetSafeIntDivideFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output);

	/** Get:: Safe Integer ++ */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "++ (Safe Integer)", CompactNodeTitle = "++", Keywords = "Security Get Safe Integer ADD PLUS ++"))
	static FSafeInt SCO_Pure_GetSafeIntIncreaseFSI(UPARAM(ref)FSafeInt &FSI, int32 &Output);

	/** Get:: Safe Integer -- */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-- (Safe Integer)", CompactNodeTitle = "--", Keywords = "Security Get Safe Integer LESS --"))
	static FSafeInt SCO_Pure_GetSafeIntDecreaseFSI(UPARAM(ref)FSafeInt &FSI, int32 &Output);

	/** Get:: Safe Integer += Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Safe Integer)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Integer PLUS EQUAL +="))
	static FSafeInt SCO_Pure_GetSafeIntPlusEqualFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output);

	/** Get:: Safe Integer -= Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-= (Safe Integer)", CompactNodeTitle = "-=", Keywords = "Security Get Safe Integer MINUS EQUAL -="))
	static FSafeInt SCO_Pure_GetSafeIntMinusEqualFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output);

	/** Get:: Safe Integer ~ */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "~ (Safe Integer)", CompactNodeTitle = "~", Keywords = "Security Get Safe Integer NOT ~"))
	static FSafeInt SCO_Pure_GetSafeIntNotFSI(UPARAM(ref)FSafeInt &FSI, int32 &Output);

	/** Get:: Safe Integer % Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "% (Safe Integer)", CompactNodeTitle = "%", Keywords = "Security Get Safe Integer MOD %"))
	static FSafeInt SCO_Pure_GetSafeIntModFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output);

	/** Get:: Safe Integer & Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "& (Safe Integer)", CompactNodeTitle = "&", Keywords = "Security Get Safe Integer AND &"))
	static FSafeInt SCO_Pure_GetSafeIntAndFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output);

	/** Get:: Safe Integer | Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "| (Safe Integer)", CompactNodeTitle = "|", Keywords = "Security Get Safe Integer OR |"))
	static FSafeInt SCO_Pure_GetSafeIntOrFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output);

	/** Get:: Safe Integer ^ Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "^ (Safe Integer)", CompactNodeTitle = "^", Keywords = "Security Get Safe Integer XOR ^"))
	static FSafeInt SCO_Pure_GetSafeIntXorFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output);

	/** Get:: Safe Integer >> Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">> (Safe Integer)", CompactNodeTitle = ">>", Keywords = "Security Get Safe Integer SHIFT >>"))
	static FSafeInt SCO_Pure_GetSafeIntShiftRFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output);

	/** Get:: Safe Integer << Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<< (Safe Integer)", CompactNodeTitle = "<<", Keywords = "Security Get Safe Integer SHIFT <<"))
	static FSafeInt SCO_Pure_GetSafeIntShiftLFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output);

	/* Native -> FSafe */

	/** Get:: Safe Integer == Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Integer)", CompactNodeTitle = "==", Keywords = "Security Get Safe Integer EQUAL =="))
	static bool SCO_Pure_GetSafeIntEqualInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI);

	/** Get:: Safe Integer != Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Integer)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Integer NOT !="))
	static bool SCO_Pure_GetSafeIntNotEqualInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI);

	/** Get:: Safe Integer > Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Integer)", CompactNodeTitle = ">", Keywords = "Security Get Safe Integer GREATER >"))
	static bool SCO_Pure_GetSafeIntGreaterInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI);

	/** Get:: Safe Integer < Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Integer)", CompactNodeTitle = "<", Keywords = "Security Get Safe Integer LESS <"))
	static bool SCO_Pure_GetSafeIntSmallerInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI);

	/** Get:: Safe Integer >= Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">= (Integer)", CompactNodeTitle = ">=", Keywords = "Security Get Safe Integer GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeIntGreaterEqualInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI);

	/** Get:: Safe Integer <= Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<= (Integer)", CompactNodeTitle = "<=", Keywords = "Security Get Safe Integer LESS EQUAL <="))
	static bool SCO_Pure_GetSafeIntSmallerEqualInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI);

	/** Set:: Safe Integer = Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Integer)", CompactNodeTitle = "=", Keywords = "Security Set Safe Integer EQUAL ="))
	static FSafeInt SCO_Pure_SetSafeIntEqualInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output);

	/** Get:: Safe Integer + Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Integer)", CompactNodeTitle = "+", Keywords = "Security Get Safe Integer PLUS +"))
	static FSafeInt SCO_Pure_GetSafeIntPlusInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output);

	/** Get:: Safe Integer - Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "- (Integer)", CompactNodeTitle = "-", Keywords = "Security Get Safe Integer MINUS -"))
	static FSafeInt SCO_Pure_GetSafeIntMinusInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output);

	/** Get:: Safe Integer * Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "* (Integer)", CompactNodeTitle = "*", Keywords = "Security Get Safe Integer TIMES *"))
	static FSafeInt SCO_Pure_GetSafeIntTimesInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output);

	/** Get:: Safe Integer / Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "/ (Integer)", CompactNodeTitle = "/", Keywords = "Security Get Safe Integer DIVIDE /"))
	static FSafeInt SCO_Pure_GetSafeIntDivideInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output);

	/** Get:: Safe Integer += Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Integer)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Integer PLUS EQUAL +="))
	static FSafeInt SCO_Pure_GetSafeIntPlusEqualInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output);

	/** Get:: Safe Integer -= Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-= (Integer)", CompactNodeTitle = "-=", Keywords = "Security Get Safe Integer MINUS EQUAL -="))
	static FSafeInt SCO_Pure_GetSafeIntMinusEqualInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output);

	/** Get:: Safe Integer ~ */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "~ (Safe Integer)", CompactNodeTitle = "~", Keywords = "Security Get Safe Integer NOT ~"))
	static FSafeInt SCO_Pure_GetSafeIntNotInt(UPARAM(ref)int32 &NI, int32 &Output);

	/** Get:: Safe Integer % Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "% (Integer)", CompactNodeTitle = "%", Keywords = "Security Get Safe Integer MOD %"))
	static FSafeInt SCO_Pure_GetSafeIntModInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output);

	/** Get:: Safe Integer & Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "& (Integer)", CompactNodeTitle = "&", Keywords = "Security Get Safe Integer AND &"))
	static FSafeInt SCO_Pure_GetSafeIntAndInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output);

	/** Get:: Safe Integer | Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "| (Integer)", CompactNodeTitle = "|", Keywords = "Security Get Safe Integer OR |"))
	static FSafeInt SCO_Pure_GetSafeIntOrInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output);

	/** Get:: Safe Integer ^ Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "^ (Integer)", CompactNodeTitle = "^", Keywords = "Security Get Safe Integer XOR ^"))
	static FSafeInt SCO_Pure_GetSafeIntXorInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output);

	/** Get:: Safe Integer >> Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">> (Integer)", CompactNodeTitle = ">>", Keywords = "Security Get Safe Integer SHIFT >>"))
	static FSafeInt SCO_Pure_GetSafeIntShiftRInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output);

	/** Get:: Safe Integer << Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<< (Integer)", CompactNodeTitle = "<<", Keywords = "Security Get Safe Integer SHIFT <<"))
	static FSafeInt SCO_Pure_GetSafeIntShiftLInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output);

	/* FSafe -> Native */

	/** Get:: Integer == Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe Integer)", CompactNodeTitle = "==", Keywords = "Security Get Safe Integer EQUAL =="))
	static bool SCO_Pure_GetIntEqualFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI);

	/** Get:: Integer != Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe Integer)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Integer NOT !="))
	static bool SCO_Pure_GetIntNotEqualFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI);

	/** Get:: Integer > Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Safe Integer)", CompactNodeTitle = ">", Keywords = "Security Get Safe Integer GREATER >"))
	static bool SCO_Pure_GetIntGreaterFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI);

	/** Get:: Integer < Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Safe Integer)", CompactNodeTitle = "<", Keywords = "Security Get Safe Integer LESS <"))
	static bool SCO_Pure_GetIntSmallerFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI);

	/** Get:: Integer >= Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">= (Safe Integer)", CompactNodeTitle = ">=", Keywords = "Security Get Safe Integer GREATER EQUAL >="))
	static bool SCO_Pure_GetIntGreaterEqualFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI);

	/** Get:: Integer <= Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<= (Safe Integer)", CompactNodeTitle = "<=", Keywords = "Security Get Safe Integer LESS EQUAL <="))
	static bool SCO_Pure_GetIntSmallerEqualFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI);

	/** Set:: Integer = Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe Integer)", CompactNodeTitle = "=", Keywords = "Security Set Safe Integer EQUAL ="))
	static int32 SCO_Pure_SetIntEqualFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI);

	/** Get:: Integer + Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Safe Integer)", CompactNodeTitle = "+", Keywords = "Security Get Safe Integer PLUS +"))
	static int32 SCO_Pure_GetIntPlusFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI);

	/** Get:: Integer - Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "- (Safe Integer)", CompactNodeTitle = "-", Keywords = "Security Get Safe Integer MINUS -"))
	static int32 SCO_Pure_GetIntMinusFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI);

	/** Get:: Integer * Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "* (Safe Integer)", CompactNodeTitle = "*", Keywords = "Security Get Safe Integer TIMES *"))
	static int32 SCO_Pure_GetIntTimesFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI);

	/** Get:: Integer / Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "/ (Safe Integer)", CompactNodeTitle = "/", Keywords = "Security Get Safe Integer DIVIDE /"))
	static int32 SCO_Pure_GetIntDivideFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI);

	/** Get:: Integer += Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Safe Integer)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Integer PLUS EQUAL +="))
	static int32 SCO_Pure_GetIntPlusEqualFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI);

	/** Get:: Integer -= Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-= (Safe Integer)", CompactNodeTitle = "-=", Keywords = "Security Get Safe Integer MINUS EQUAL -="))
	static int32 SCO_Pure_GetIntMinusEqualFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI);

	/** Get:: Integer % Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "% (Safe Integer)", CompactNodeTitle = "%", Keywords = "Security Get Safe Integer MOD %"))
	static int32 SCO_Pure_GetIntModFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI);

	/** Get:: Integer & Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "& (Safe Integer)", CompactNodeTitle = "&", Keywords = "Security Get Safe Integer AND &"))
	static int32 SCO_Pure_GetIntAndFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI);

	/** Get:: Integer | Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "| (Safe Integer)", CompactNodeTitle = "|", Keywords = "Security Get Safe Integer OR |"))
	static int32 SCO_Pure_GetIntOrFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI);

	/** Get:: Integer ^ Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "^ (Safe Integer)", CompactNodeTitle = "^", Keywords = "Security Get Safe Integer XOR ^"))
	static int32 SCO_Pure_GetIntXorFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI);

	/** Get:: Integer >> Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">> (Safe Integer)", CompactNodeTitle = ">>", Keywords = "Security Get Safe Integer SHIFT >>"))
	static int32 SCO_Pure_GetIntShiftRFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI);

	/** Get:: Integer << Safe Integer */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<< (Safe Integer)", CompactNodeTitle = "<<", Keywords = "Security Get Safe Integer SHIFT <<"))
	static int32 SCO_Pure_GetIntShiftLFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI);

	// FSFloat

	/* FSafe -> FSafe */

	/** Get:: Safe Float == Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe Float)", CompactNodeTitle = "==", Keywords = "Security Get Safe Float EQUAL =="))
	static bool SCO_Pure_GetSafeFloatEqualFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF);

	/** Get:: Safe Float != Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe Float)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Float NOT !="))
	static bool SCO_Pure_GetSafeFloatNotEqualFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF);

	/** Get:: Safe Float > Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Safe Float)", CompactNodeTitle = ">", Keywords = "Security Get Safe Float GREATER >"))
	static bool SCO_Pure_GetSafeFloatGreaterFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF);

	/** Get:: Safe Float < Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Safe Float)", CompactNodeTitle = "<", Keywords = "Security Get Safe Float LESS <"))
	static bool SCO_Pure_GetSafeFloatSmallerFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF);

	/** Get:: Safe Float >= Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">= (Safe Float)", CompactNodeTitle = ">=", Keywords = "Security Get Safe Float GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeFloatGreaterEqualFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF);

	/** Get:: Safe Float <= Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<= (Safe Float)", CompactNodeTitle = "<=", Keywords = "Security Get Safe Float LESS EQUAL <="))
	static bool SCO_Pure_GetSafeFloatSmallerEqualFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF);

	/** Set:: Safe Float = Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe Float)", CompactNodeTitle = "=", Keywords = "Security Set Safe Float EQUAL ="))
	static FSafeFloat SCO_Pure_SetSafeFloatEqualFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF, float &Output);

	/** Get:: Safe Float + Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Safe Float)", CompactNodeTitle = "+", Keywords = "Security Get Safe Float PLUS +"))
	static FSafeFloat SCO_Pure_GetSafeFloatPlusFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF, float &Output);

	/** Get:: Safe Float - Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "- (Safe Float)", CompactNodeTitle = "-", Keywords = "Security Get Safe Float MINUS -"))
	static FSafeFloat SCO_Pure_GetSafeFloatMinusFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF, float &Output);

	/** Get:: Safe Float * Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "* (Safe Float)", CompactNodeTitle = "*", Keywords = "Security Get Safe Float TIMES *"))
	static FSafeFloat SCO_Pure_GetSafeFloatTimesFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF, float &Output);

	/** Get:: Safe Float / Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "/ (Safe Float)", CompactNodeTitle = "/", Keywords = "Security Get Safe Float DIVIDE /"))
	static FSafeFloat SCO_Pure_GetSafeFloatDivideFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF, float &Output);

	/** Get:: Safe Float ++ */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "++ (Safe Float)", CompactNodeTitle = "++", Keywords = "Security Get Safe Float ADD PLUS ++"))
	static FSafeFloat SCO_Pure_GetSafeFloatIncreaseFSF(UPARAM(ref)FSafeFloat &FSF, float &Output);

	/** Get:: Safe Float -- */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-- (Safe Float)", CompactNodeTitle = "--", Keywords = "Security Get Safe Float LESS --"))
	static FSafeFloat SCO_Pure_GetSafeFloatDecreaseFSF(UPARAM(ref)FSafeFloat &FSF, float &Output);

	/** Get:: Safe Float += Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Safe Float)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Float PLUS EQUAL +="))
	static FSafeFloat SCO_Pure_GetSafeFloatPlusEqualFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF, float &Output);

	/** Get:: Safe Float -= Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-= (Safe Float)", CompactNodeTitle = "-=", Keywords = "Security Get Safe Float MINUS EQUAL -="))
	static FSafeFloat SCO_Pure_GetSafeFloatMinusEqualFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF, float &Output);

	/** Get:: Safe Float % Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "% (Safe Float)", CompactNodeTitle = "%", Keywords = "Security Get Safe Float MOD %"))
	static FSafeFloat SCO_Pure_GetSafeFloatModFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF, float &Output);

	/* Native -> FSafe */

	/** Get:: Safe Float == Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Float)", CompactNodeTitle = "==", Keywords = "Security Get Safe Float EQUAL =="))
	static bool SCO_Pure_GetSafeFloatEqualFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF);

	/** Get:: Safe Float != Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Float)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Float NOT !="))
	static bool SCO_Pure_GetSafeFloatNotEqualFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF);

	/** Get:: Safe Float > Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Float)", CompactNodeTitle = ">", Keywords = "Security Get Safe Float GREATER >"))
	static bool SCO_Pure_GetSafeFloatGreaterFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF);

	/** Get:: Safe Float < Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Float)", CompactNodeTitle = "<", Keywords = "Security Get Safe Float LESS <"))
	static bool SCO_Pure_GetSafeFloatSmallerFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF);

	/** Get:: Safe Float >= Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">= (Float)", CompactNodeTitle = ">=", Keywords = "Security Get Safe Float GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeFloatGreaterEqualFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF);

	/** Get:: Safe Float <= Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<= (Float)", CompactNodeTitle = "<=", Keywords = "Security Get Safe Float LESS EQUAL <="))
	static bool SCO_Pure_GetSafeFloatSmallerEqualFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF);

	/** Set:: Safe Float = Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Float)", CompactNodeTitle = "=", Keywords = "Security Set Safe Float EQUAL ="))
	static FSafeFloat SCO_Pure_SetSafeFloatEqualFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF, float &Output);

	/** Get:: Safe Float + Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Float)", CompactNodeTitle = "+", Keywords = "Security Get Safe Float PLUS +"))
	static FSafeFloat SCO_Pure_GetSafeFloatPlusFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF, float &Output);

	/** Get:: Safe Float - Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "- (Float)", CompactNodeTitle = "-", Keywords = "Security Get Safe Float MINUS -"))
	static FSafeFloat SCO_Pure_GetSafeFloatMinusFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF, float &Output);

	/** Get:: Safe Float * Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "* (Float)", CompactNodeTitle = "*", Keywords = "Security Get Safe Float TIMES *"))
	static FSafeFloat SCO_Pure_GetSafeFloatTimesFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF, float &Output);

	/** Get:: Safe Float / Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "/ (Float)", CompactNodeTitle = "/", Keywords = "Security Get Safe Float DIVIDE /"))
	static FSafeFloat SCO_Pure_GetSafeFloatDivideFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF, float &Output);

	/** Get:: Safe Float += Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Float)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Float PLUS EQUAL +="))
	static FSafeFloat SCO_Pure_GetSafeFloatPlusEqualFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF, float &Output);

	/** Get:: Safe Float -= Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-= (Float)", CompactNodeTitle = "-=", Keywords = "Security Get Safe Float MINUS EQUAL -="))
	static FSafeFloat SCO_Pure_GetSafeFloatMinusEqualFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF, float &Output);

	/** Get:: Safe Float % Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "% (Float)", CompactNodeTitle = "%", Keywords = "Security Get Safe Float MOD %"))
	static FSafeFloat SCO_Pure_GetSafeFloatModFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF, float &Output);

	/* FSafe -> Native */

	/** Get:: Float == Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe Float)", CompactNodeTitle = "==", Keywords = "Security Get Safe Float EQUAL =="))
	static bool SCO_Pure_GetFloatEqualFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF);

	/** Get:: Float != Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe Float)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Float NOT !="))
	static bool SCO_Pure_GetFloatNotEqualFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF);

	/** Get:: Float > Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Safe Float)", CompactNodeTitle = ">", Keywords = "Security Get Safe Float GREATER >"))
	static bool SCO_Pure_GetFloatGreaterFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF);

	/** Get:: Float < Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Safe Float)", CompactNodeTitle = "<", Keywords = "Security Get Safe Float LESS <"))
	static bool SCO_Pure_GetFloatSmallerFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF);

	/** Get:: Float >= Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">= (Safe Float)", CompactNodeTitle = ">=", Keywords = "Security Get Safe Float GREATER EQUAL >="))
	static bool SCO_Pure_GetFloatGreaterEqualFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF);

	/** Get:: Float <= Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<= (Safe Float)", CompactNodeTitle = "<=", Keywords = "Security Get Safe Float LESS EQUAL <="))
	static bool SCO_Pure_GetFloatSmallerEqualFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF);

	/** Set:: Float = Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe Float)", CompactNodeTitle = "=", Keywords = "Security Set Safe Float EQUAL ="))
	static float SCO_Pure_SetFloatEqualFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF);

	/** Get:: Float + Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Safe Float)", CompactNodeTitle = "+", Keywords = "Security Get Safe Float PLUS +"))
	static float SCO_Pure_GetFloatPlusFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF);

	/** Get:: Float - Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "- (Safe Float)", CompactNodeTitle = "-", Keywords = "Security Get Safe Float MINUS -"))
	static float SCO_Pure_GetFloatMinusFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF);

	/** Get:: Float * Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "* (Safe Float)", CompactNodeTitle = "*", Keywords = "Security Get Safe Float TIMES *"))
	static float SCO_Pure_GetFloatTimesFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF);

	/** Get:: Float / Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "/ (Safe Float)", CompactNodeTitle = "/", Keywords = "Security Get Safe Float DIVIDE /"))
	static float SCO_Pure_GetFloatDivideFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF);

	/** Get:: Float += Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Safe Float)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Float PLUS EQUAL +="))
	static float SCO_Pure_GetFloatPlusEqualFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF);

	/** Get:: Float -= Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-= (Safe Float)", CompactNodeTitle = "-=", Keywords = "Security Get Safe Float MINUS EQUAL -="))
	static float SCO_Pure_GetFloatMinusEqualFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF);

	/** Get:: Float % Safe Float */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "% (Safe Float)", CompactNodeTitle = "%", Keywords = "Security Get Safe Float MOD %"))
	static float SCO_Pure_GetFloatModFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF);

	// FSName

	/* FSafe -> FSafe */

	/** Get:: Safe Name == Safe Name */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe Name)", CompactNodeTitle = "==", Keywords = "Security Get Safe Name EQUAL =="))
	static bool SCO_Pure_GetSafeNameEqualFSN(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FSafeName &SSN);

	/** Get:: Safe Name != Safe Name */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe Name)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Name NOT !="))
	static bool SCO_Pure_GetSafeNameNotEqualFSN(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FSafeName &SSN);

	/** Get:: Safe Name > Safe Name */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Safe Name)", CompactNodeTitle = ">", Keywords = "Security Get Safe Name GREATER >"))
	static bool SCO_Pure_GetSafeNameGreaterFSN(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FSafeName &SSN);

	/** Get:: Safe Name < Safe Name */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Safe Name)", CompactNodeTitle = "<", Keywords = "Security Get Safe Name LESS <"))
	static bool SCO_Pure_GetSafeNameSmallerFSN(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FSafeName &SSN);

	/** Set:: Safe Name = Safe Name */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe Name)", CompactNodeTitle = "=", Keywords = "Security Set Safe Name EQUAL ="))
	static FSafeName SCO_Pure_SetSafeNameEqualFSN(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FSafeName &SSN, FName &Output);

	/** Get:: Safe Name + Safe Name */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Safe Name)", CompactNodeTitle = "+", Keywords = "Security Get Safe Name PLUS +"))
	static FSafeName SCO_Pure_GetSafeNamePlusFSN(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FSafeName &SSN, FName &Output);

	/** Get:: Safe Name += Safe Name */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Safe Name)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Name PLUS EQUAL +="))
	static FSafeName SCO_Pure_GetSafeNamePlusEqualFSN(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FSafeName &SSN, FName &Output);
	
	/* Native -> FSafe */

	/** Get:: Safe Name == Name */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Name)", CompactNodeTitle = "==", Keywords = "Security Get Safe Name EQUAL =="))
	static bool SCO_Pure_GetSafeNameEqualName(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FName &NN);

	/** Get:: Safe Name != Name */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Name)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Name NOT !="))
	static bool SCO_Pure_GetSafeNameNotEqualName(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FName &NN);

	/** Get:: Safe Name > Name */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Name)", CompactNodeTitle = ">", Keywords = "Security Get Safe Name GREATER >"))
	static bool SCO_Pure_GetSafeNameGreaterName(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FName &NN);

	/** Get:: Safe Name < Name */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Name)", CompactNodeTitle = "<", Keywords = "Security Get Safe Name LESS <"))
	static bool SCO_Pure_GetSafeNameSmallerName(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FName &NN);

	/** Set:: Safe Name = Name */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Name)", CompactNodeTitle = "=", Keywords = "Security Set Safe Name EQUAL ="))
	static FSafeName SCO_Pure_SetSafeNameEqualName(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FName &NN, FName &Output);

	/** Get:: Safe Name + Name */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Name)", CompactNodeTitle = "+", Keywords = "Security Get Safe Name PLUS +"))
	static FSafeName SCO_Pure_GetSafeNamePlusName(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FName &NN, FName &Output);

	/** Get:: Safe Name += Name */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Name)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Name PLUS EQUAL +="))
	static FSafeName SCO_Pure_GetSafeNamePlusEqualName(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FName &NN, FName &Output);
	
	/* FSafe -> Native */

	/** Get:: Name == Safe Name */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe Name)", CompactNodeTitle = "==", Keywords = "Security Get Safe Name EQUAL =="))
	static bool SCO_Pure_GetNameEqualFSN(UPARAM(ref)FName &NN, UPARAM(ref)FSafeName &FSN);

	/** Get:: Name != Safe Name */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe Name)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Name NOT !="))
	static bool SCO_Pure_GetNameNotEqualFSN(UPARAM(ref)FName &NN, UPARAM(ref)FSafeName &FSN);

	/** Get:: Name > Safe Name */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Safe Name)", CompactNodeTitle = ">", Keywords = "Security Get Safe Name GREATER >"))
	static bool SCO_Pure_GetNameGreaterFSN(UPARAM(ref)FName &NN, UPARAM(ref)FSafeName &FSN);

	/** Get:: Name < Safe Name */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Safe Name)", CompactNodeTitle = "<", Keywords = "Security Get Safe Name LESS <"))
	static bool SCO_Pure_GetNameSmallerFSN(UPARAM(ref)FName &NN, UPARAM(ref)FSafeName &FSN);

	/** Set:: Name = Safe Name */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe Name)", CompactNodeTitle = "=", Keywords = "Security Set Safe Name EQUAL ="))
	static FName SCO_Pure_SetNameEqualFSN(UPARAM(ref)FName &NN, UPARAM(ref)FSafeName &FSN);

	/** Get:: Name + Safe Name */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Safe Name)", CompactNodeTitle = "+", Keywords = "Security Get Safe Name PLUS +"))
	static FName SCO_Pure_GetNamePlusFSN(UPARAM(ref)FName &NN, UPARAM(ref)FSafeName &FSN);

	/** Get:: Name += Safe Name */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Safe Name)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Name PLUS EQUAL +="))
	static FName SCO_Pure_GetNamePlusEqualFSN(UPARAM(ref)FName &NN, UPARAM(ref)FSafeName &FSN);

	// FSText

	/* FSafe -> FSafe */

	/** Get:: Safe Text == Safe Text */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe Text)", CompactNodeTitle = "==", Keywords = "Security Get Safe Text EQUAL =="))
	static bool SCO_Pure_GetSafeTextEqualFST(UPARAM(ref)FSafeText &FST, UPARAM(ref)FSafeText &ST);

	/** Get:: Safe Text != Safe Text */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe Text)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Text NOT !="))
	static bool SCO_Pure_GetSafeTextNotEqualFST(UPARAM(ref)FSafeText &FST, UPARAM(ref)FSafeText &ST);

	/** Get:: Safe Text > Safe Text */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Safe Text)", CompactNodeTitle = ">", Keywords = "Security Get Safe Text GREATER >"))
	static bool SCO_Pure_GetSafeTextGreaterFST(UPARAM(ref)FSafeText &FST, UPARAM(ref)FSafeText &ST);

	/** Get:: Safe Text < Safe Text */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Safe Text)", CompactNodeTitle = "<", Keywords = "Security Get Safe Text LEST <"))
	static bool SCO_Pure_GetSafeTextSmallerFST(UPARAM(ref)FSafeText &FST, UPARAM(ref)FSafeText &ST);

	/** Set:: Safe Text = Safe Text */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe Text)", CompactNodeTitle = "=", Keywords = "Security Set Safe Text EQUAL ="))
	static FSafeText SCO_Pure_SetSafeTextEqualFST(UPARAM(ref)FSafeText &FST, UPARAM(ref)FSafeText &ST, FText &Output);

	/** Get:: Safe Text + Safe Text */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Safe Text)", CompactNodeTitle = "+", Keywords = "Security Get Safe Text PLUS +"))
	static FSafeText SCO_Pure_GetSafeTextPlusFST(UPARAM(ref)FSafeText &FST, UPARAM(ref)FSafeText &ST, FText &Output);

	/** Get:: Safe Text += Safe Text */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Safe Text)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Text PLUS EQUAL +="))
	static FSafeText SCO_Pure_GetSafeTextPlusEqualFST(UPARAM(ref)FSafeText &FST, UPARAM(ref)FSafeText &ST, FText &Output);
	
	/* Native -> FSafe */

	/** Get:: Safe Text == Text */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Text)", CompactNodeTitle = "==", Keywords = "Security Get Safe Text EQUAL =="))
	static bool SCO_Pure_GetSafeTextEqualText(UPARAM(ref)FSafeText &FST, UPARAM(ref)FText &NT);

	/** Get:: Safe Text != Text */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Text)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Text NOT !="))
	static bool SCO_Pure_GetSafeTextNotEqualText(UPARAM(ref)FSafeText &FST, UPARAM(ref)FText &NT);

	/** Get:: Safe Text > Text */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Text)", CompactNodeTitle = ">", Keywords = "Security Get Safe Text GREATER >"))
	static bool SCO_Pure_GetSafeTextGreaterText(UPARAM(ref)FSafeText &FST, UPARAM(ref)FText &NT);

	/** Get:: Safe Text < Text */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Text)", CompactNodeTitle = "<", Keywords = "Security Get Safe Text LEST <"))
	static bool SCO_Pure_GetSafeTextSmallerText(UPARAM(ref)FSafeText &FST, UPARAM(ref)FText &NT);

	/** Set:: Safe Text = Text */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Text)", CompactNodeTitle = "=", Keywords = "Security Set Safe Text EQUAL ="))
	static FSafeText SCO_Pure_SetSafeTextEqualText(UPARAM(ref)FSafeText &FST, UPARAM(ref)FText &NT, FText &Output);

	/** Get:: Safe Text + Text */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Text)", CompactNodeTitle = "+", Keywords = "Security Get Safe Text PLUS +"))
	static FSafeText SCO_Pure_GetSafeTextPlusText(UPARAM(ref)FSafeText &FST, UPARAM(ref)FText &NT, FText &Output);

	/** Get:: Safe Text += Text */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Text)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Text PLUS EQUAL +="))
	static FSafeText SCO_Pure_GetSafeTextPlusEqualText(UPARAM(ref)FSafeText &FST, UPARAM(ref)FText &NT, FText &Output);
	
	/* FSafe -> Native */

	/** Get:: Text == Safe Text */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe Text)", CompactNodeTitle = "==", Keywords = "Security Get Safe Text EQUAL =="))
	static bool SCO_Pure_GetTextEqualFST(UPARAM(ref)FText &NT, UPARAM(ref)FSafeText &FST);

	/** Get:: Text != Safe Text */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe Text)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Text NOT !="))
	static bool SCO_Pure_GetTextNotEqualFST(UPARAM(ref)FText &NT, UPARAM(ref)FSafeText &FST);

	/** Get:: Text > Safe Text */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Safe Text)", CompactNodeTitle = ">", Keywords = "Security Get Safe Text GREATER >"))
	static bool SCO_Pure_GetTextGreaterFST(UPARAM(ref)FText &NT, UPARAM(ref)FSafeText &FST);

	/** Get:: Text < Safe Text */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Safe Text)", CompactNodeTitle = "<", Keywords = "Security Get Safe Text LEST <"))
	static bool SCO_Pure_GetTextSmallerFST(UPARAM(ref)FText &NT, UPARAM(ref)FSafeText &FST);

	/** Set:: Text = Safe Text */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe Text)", CompactNodeTitle = "=", Keywords = "Security Set Safe Text EQUAL ="))
	static FText SCO_Pure_SetTextEqualFST(UPARAM(ref)FText &NT, UPARAM(ref)FSafeText &FST);

	/** Get:: Text + Safe Text */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Safe Text)", CompactNodeTitle = "+", Keywords = "Security Get Safe Text PLUS +"))
	static FText SCO_Pure_GetTextPlusFST(UPARAM(ref)FText &NT, UPARAM(ref)FSafeText &FST);

	/** Get:: Text += Safe Text */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Safe Text)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Text PLUS EQUAL +="))
	static FText SCO_Pure_GetTextPlusEqualFST(UPARAM(ref)FText &NT, UPARAM(ref)FSafeText &FST);

	// FSString

	/* FSafe -> FSafe */

	/** Get:: Safe String == Safe String */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe String)", CompactNodeTitle = "==", Keywords = "Security Get Safe String EQUAL =="))
	static bool SCO_Pure_GetSafeStringEqualFSS(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FSafeString &SS);

	/** Get:: Safe String != Safe String */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe String)", CompactNodeTitle = "!=", Keywords = "Security Get Safe String NOT !="))
	static bool SCO_Pure_GetSafeStringNotEqualFSS(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FSafeString &SS);

	/** Get:: Safe String > Safe String */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Safe String)", CompactNodeTitle = ">", Keywords = "Security Get Safe String GREATER >"))
	static bool SCO_Pure_GetSafeStringGreaterFSS(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FSafeString &SS);

	/** Get:: Safe String < Safe String */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Safe String)", CompactNodeTitle = "<", Keywords = "Security Get Safe String LESS <"))
	static bool SCO_Pure_GetSafeStringSmallerFSS(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FSafeString &SS);

	/** Set:: Safe String = Safe String */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe String)", CompactNodeTitle = "=", Keywords = "Security Set Safe String EQUAL ="))
	static FSafeString SCO_Pure_SetSafeStringEqualFSS(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FSafeString &SS, FString &Output);

	/** Get:: Safe String + Safe String */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Safe String)", CompactNodeTitle = "+", Keywords = "Security Get Safe String PLUS +"))
	static FSafeString SCO_Pure_GetSafeStringPlusFSS(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FSafeString &SS, FString &Output);

	/** Get:: Safe String += Safe String */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Safe String)", CompactNodeTitle = "+=", Keywords = "Security Get Safe String PLUS EQUAL +="))
	static FSafeString SCO_Pure_GetSafeStringPlusEqualFSS(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FSafeString &SS, FString &Output);
	
	/* Native -> FSafe */

	/** Get:: Safe String == String */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (String)", CompactNodeTitle = "==", Keywords = "Security Get Safe String EQUAL =="))
	static bool SCO_Pure_GetSafeStringEqualString(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FString &NS);

	/** Get:: Safe String != String */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (String)", CompactNodeTitle = "!=", Keywords = "Security Get Safe String NOT !="))
	static bool SCO_Pure_GetSafeStringNotEqualString(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FString &NS);

	/** Get:: Safe String > String */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (String)", CompactNodeTitle = ">", Keywords = "Security Get Safe String GREATER >"))
	static bool SCO_Pure_GetSafeStringGreaterString(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FString &NS);

	/** Get:: Safe String < String */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (String)", CompactNodeTitle = "<", Keywords = "Security Get Safe String LESS <"))
	static bool SCO_Pure_GetSafeStringSmallerString(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FString &NS);

	/** Set:: Safe String = String */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (String)", CompactNodeTitle = "=", Keywords = "Security Set Safe String EQUAL ="))
	static FSafeString SCO_Pure_SetSafeStringEqualString(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FString &NS, FString &Output);

	/** Get:: Safe String + String */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (String)", CompactNodeTitle = "+", Keywords = "Security Get Safe String PLUS +"))
	static FSafeString SCO_Pure_GetSafeStringPlusString(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FString &NS, FString &Output);

	/** Get:: Safe String += String */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (String)", CompactNodeTitle = "+=", Keywords = "Security Get Safe String PLUS EQUAL +="))
	static FSafeString SCO_Pure_GetSafeStringPlusEqualString(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FString &NS, FString &Output);
	
	/* FSafe -> Native */

	/** Get:: String == Safe String */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe String)", CompactNodeTitle = "==", Keywords = "Security Get Safe String EQUAL =="))
	static bool SCO_Pure_GetStringEqualFSS(UPARAM(ref)FString &NS, UPARAM(ref)FSafeString &FSS);

	/** Get:: String != Safe String */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe String)", CompactNodeTitle = "!=", Keywords = "Security Get Safe String NOT !="))
	static bool SCO_Pure_GetStringNotEqualFSS(UPARAM(ref)FString &NS, UPARAM(ref)FSafeString &FSS);

	/** Get:: String > Safe String */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Safe String)", CompactNodeTitle = ">", Keywords = "Security Get Safe String GREATER >"))
	static bool SCO_Pure_GetStringGreaterFSS(UPARAM(ref)FString &NS, UPARAM(ref)FSafeString &FSS);

	/** Get:: String < Safe String */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Safe String)", CompactNodeTitle = "<", Keywords = "Security Get Safe String LESS <"))
	static bool SCO_Pure_GetStringSmallerFSS(UPARAM(ref)FString &NS, UPARAM(ref)FSafeString &FSS);

	/** Set:: String = Safe String */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe String)", CompactNodeTitle = "=", Keywords = "Security Set Safe String EQUAL ="))
	static FString SCO_Pure_SetStringEqualFSS(UPARAM(ref)FString &NS, UPARAM(ref)FSafeString &FSS);

	/** Get:: String + Safe String */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Safe String)", CompactNodeTitle = "+", Keywords = "Security Get Safe String PLUS +"))
	static FString SCO_Pure_GetStringPlusFSS(UPARAM(ref)FString &NS, UPARAM(ref)FSafeString &FSS);

	/** Get:: String += Safe String */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Safe String)", CompactNodeTitle = "+=", Keywords = "Security Get Safe String PLUS EQUAL +="))
	static FString SCO_Pure_GetStringPlusEqualFSS(UPARAM(ref)FString &NS, UPARAM(ref)FSafeString &FSS);

	// FSVector2D

	/* FSafe -> FSafe */

	/** Get:: Safe Vector2D == Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe Vector2D)", CompactNodeTitle = "==", Keywords = "Security Get Safe Vector2D EQUAL =="))
	static bool SCO_Pure_GetSafeVector2DEqualFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV);

	/** Get:: Safe Vector2D != Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe Vector2D)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Vector2D NOT !="))
	static bool SCO_Pure_GetSafeVector2DNotEqualFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV);

	/** Get:: Safe Vector2D > Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Safe Vector2D)", CompactNodeTitle = ">", Keywords = "Security Get Safe Vector2D GREATER >"))
	static bool SCO_Pure_GetSafeVector2DGreaterFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV);

	/** Get:: Safe Vector2D < Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Safe Vector2D)", CompactNodeTitle = "<", Keywords = "Security Get Safe Vector2D LESS <"))
	static bool SCO_Pure_GetSafeVector2DSmallerFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV);

	/** Get:: Safe Vector2D >= Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">= (Safe Vector2D)", CompactNodeTitle = ">=", Keywords = "Security Get Safe Vector2D GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeVector2DGreaterEqualFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV);

	/** Get:: Safe Vector2D <= Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<= (Safe Vector2D)", CompactNodeTitle = "<=", Keywords = "Security Get Safe Vector2D LESS EQUAL <="))
	static bool SCO_Pure_GetSafeVector2DSmallerEqualFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV);

	/** Set:: Safe Vector2D = Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe Vector2D)", CompactNodeTitle = "=", Keywords = "Security Set Safe Vector2D EQUAL ="))
	static FSafeVector2D SCO_Pure_SetSafeVector2DEqualFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV, FVector2D &Output);

	/** Get:: Safe Vector2D + Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Safe Vector2D)", CompactNodeTitle = "+", Keywords = "Security Get Safe Vector2D PLUS +"))
	static FSafeVector2D SCO_Pure_GetSafeVector2DPlusFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV, FVector2D &Output);

	/** Get:: Safe Vector2D - Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "- (Safe Vector2D)", CompactNodeTitle = "-", Keywords = "Security Get Safe Vector2D MINUS -"))
	static FSafeVector2D SCO_Pure_GetSafeVector2DMinusFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV, FVector2D &Output);

	/** Get:: Safe Vector2D * Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "* (Safe Vector2D)", CompactNodeTitle = "*", Keywords = "Security Get Safe Vector2D TIMES *"))
	static FSafeVector2D SCO_Pure_GetSafeVector2DTimesFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV, FVector2D &Output);

	/** Get:: Safe Vector2D / Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "/ (Safe Vector2D)", CompactNodeTitle = "/", Keywords = "Security Get Safe Vector2D DIVIDE /"))
	static FSafeVector2D SCO_Pure_GetSafeVector2DDivideFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV, FVector2D &Output);

	/** Get:: Safe Vector2D ++ */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "++ (Safe Vector2D)", CompactNodeTitle = "++", Keywords = "Security Get Safe Vector2D ADD PLUS ++"))
	static FSafeVector2D SCO_Pure_GetSafeVector2DIncreaseFSV(UPARAM(ref)FSafeVector2D &FSV, FVector2D &Output);

	/** Get:: Safe Vector2D -- */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-- (Safe Vector2D)", CompactNodeTitle = "--", Keywords = "Security Get Safe Vector2D LESS --"))
	static FSafeVector2D SCO_Pure_GetSafeVector2DDecreaseFSV(UPARAM(ref)FSafeVector2D &FSV, FVector2D &Output);

	/** Get:: Safe Vector2D += Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Safe Vector2D)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Vector2D PLUS EQUAL +="))
	static FSafeVector2D SCO_Pure_GetSafeVector2DPlusEqualFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV, FVector2D &Output);

	/** Get:: Safe Vector2D -= Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-= (Safe Vector2D)", CompactNodeTitle = "-=", Keywords = "Security Get Safe Vector2D MINUS EQUAL -="))
	static FSafeVector2D SCO_Pure_GetSafeVector2DMinusEqualFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV, FVector2D &Output);

	/** Get:: Safe Vector2D % Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "% (Safe Vector2D)", CompactNodeTitle = "%", Keywords = "Security Get Safe Vector2D MOD %"))
	static FSafeVector2D SCO_Pure_GetSafeVector2DModFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV, FVector2D &Output);

	/* Native -> FSafe */

	/** Get:: Safe Vector2D == Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Vector2D)", CompactNodeTitle = "==", Keywords = "Security Get Safe Vector2D EQUAL =="))
	static bool SCO_Pure_GetSafeVector2DEqualVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV);

	/** Get:: Safe Vector2D != Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Vector2D)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Vector2D NOT !="))
	static bool SCO_Pure_GetSafeVector2DNotEqualVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV);

	/** Get:: Safe Vector2D > Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Vector2D)", CompactNodeTitle = ">", Keywords = "Security Get Safe Vector2D GREATER >"))
	static bool SCO_Pure_GetSafeVector2DGreaterVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV);

	/** Get:: Safe Vector2D < Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Vector2D)", CompactNodeTitle = "<", Keywords = "Security Get Safe Vector2D LESS <"))
	static bool SCO_Pure_GetSafeVector2DSmallerVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV);

	/** Get:: Safe Vector2D >= Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">= (Vector2D)", CompactNodeTitle = ">=", Keywords = "Security Get Safe Vector2D GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeVector2DGreaterEqualVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV);

	/** Get:: Safe Vector2D <= Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<= (Vector2D)", CompactNodeTitle = "<=", Keywords = "Security Get Safe Vector2D LESS EQUAL <="))
	static bool SCO_Pure_GetSafeVector2DSmallerEqualVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV);

	/** Set:: Safe Vector2D = Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Vector2D)", CompactNodeTitle = "=", Keywords = "Security Set Safe Vector2D EQUAL ="))
	static FSafeVector2D SCO_Pure_SetSafeVector2DEqualVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV, FVector2D &Output);

	/** Get:: Safe Vector2D + Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Vector2D)", CompactNodeTitle = "+", Keywords = "Security Get Safe Vector2D PLUS +"))
	static FSafeVector2D SCO_Pure_GetSafeVector2DPlusVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV, FVector2D &Output);

	/** Get:: Safe Vector2D - Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "- (Vector2D)", CompactNodeTitle = "-", Keywords = "Security Get Safe Vector2D MINUS -"))
	static FSafeVector2D SCO_Pure_GetSafeVector2DMinusVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV, FVector2D &Output);

	/** Get:: Safe Vector2D * Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "* (Vector2D)", CompactNodeTitle = "*", Keywords = "Security Get Safe Vector2D TIMES *"))
	static FSafeVector2D SCO_Pure_GetSafeVector2DTimesVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV, FVector2D &Output);

	/** Get:: Safe Vector2D / Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "/ (Vector2D)", CompactNodeTitle = "/", Keywords = "Security Get Safe Vector2D DIVIDE /"))
	static FSafeVector2D SCO_Pure_GetSafeVector2DDivideVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV, FVector2D &Output);

	/** Get:: Safe Vector2D += Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Vector2D)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Vector2D PLUS EQUAL +="))
	static FSafeVector2D SCO_Pure_GetSafeVector2DPlusEqualVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV, FVector2D &Output);

	/** Get:: Safe Vector2D -= Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-= (Vector2D)", CompactNodeTitle = "-=", Keywords = "Security Get Safe Vector2D MINUS EQUAL -="))
	static FSafeVector2D SCO_Pure_GetSafeVector2DMinusEqualVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV, FVector2D &Output);

	/** Get:: Safe Vector2D % Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "% (Vector2D)", CompactNodeTitle = "%", Keywords = "Security Get Safe Vector2D MOD %"))
	static FSafeVector2D SCO_Pure_GetSafeVector2DModVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV, FVector2D &Output);

	/* FSafe -> Native */

	/** Get:: Vector2D == Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe Vector2D)", CompactNodeTitle = "==", Keywords = "Security Get Safe Vector2D EQUAL =="))
	static bool SCO_Pure_GetVector2DEqualFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV);

	/** Get:: Vector2D != Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe Vector2D)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Vector2D NOT !="))
	static bool SCO_Pure_GetVector2DNotEqualFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV);

	/** Get:: Vector2D > Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Safe Vector2D)", CompactNodeTitle = ">", Keywords = "Security Get Safe Vector2D GREATER >"))
	static bool SCO_Pure_GetVector2DGreaterFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV);

	/** Get:: Vector2D < Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Safe Vector2D)", CompactNodeTitle = "<", Keywords = "Security Get Safe Vector2D LESS <"))
	static bool SCO_Pure_GetVector2DSmallerFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV);

	/** Get:: Vector2D >= Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">= (Safe Vector2D)", CompactNodeTitle = ">=", Keywords = "Security Get Safe Vector2D GREATER EQUAL >="))
	static bool SCO_Pure_GetVector2DGreaterEqualFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV);

	/** Get:: Vector2D <= Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<= (Safe Vector2D)", CompactNodeTitle = "<=", Keywords = "Security Get Safe Vector2D LESS EQUAL <="))
	static bool SCO_Pure_GetVector2DSmallerEqualFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV);

	/** Set:: Vector2D = Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe Vector2D)", CompactNodeTitle = "=", Keywords = "Security Set Safe Vector2D EQUAL ="))
	static FVector2D SCO_Pure_SetVector2DEqualFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV);

	/** Get:: Vector2D + Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Safe Vector2D)", CompactNodeTitle = "+", Keywords = "Security Get Safe Vector2D PLUS +"))
	static FVector2D SCO_Pure_GetVector2DPlusFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV);

	/** Get:: Vector2D - Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "- (Safe Vector2D)", CompactNodeTitle = "-", Keywords = "Security Get Safe Vector2D MINUS -"))
	static FVector2D SCO_Pure_GetVector2DMinusFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV);

	/** Get:: Vector2D * Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "* (Safe Vector2D)", CompactNodeTitle = "*", Keywords = "Security Get Safe Vector2D TIMES *"))
	static FVector2D SCO_Pure_GetVector2DTimesFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV);

	/** Get:: Vector2D / Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "/ (Safe Vector2D)", CompactNodeTitle = "/", Keywords = "Security Get Safe Vector2D DIVIDE /"))
	static FVector2D SCO_Pure_GetVector2DDivideFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV);

	/** Get:: Vector2D += Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Safe Vector2D)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Vector2D PLUS EQUAL +="))
	static FVector2D SCO_Pure_GetVector2DPlusEqualFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV);

	/** Get:: Vector2D -= Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-= (Safe Vector2D)", CompactNodeTitle = "-=", Keywords = "Security Get Safe Vector2D MINUS EQUAL -="))
	static FVector2D SCO_Pure_GetVector2DMinusEqualFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV);

	/** Get:: Vector2D % Safe Vector2D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "% (Safe Vector2D)", CompactNodeTitle = "%", Keywords = "Security Get Safe Vector2D MOD %"))
	static FVector2D SCO_Pure_GetVector2DModFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV);

	// FSVector3D

	/* FSafe -> FSafe */

	/** Get:: Safe Vector3D == Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe Vector3D)", CompactNodeTitle = "==", Keywords = "Security Get Safe Vector3D EQUAL =="))
	static bool SCO_Pure_GetSafeVector3DEqualFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV);

	/** Get:: Safe Vector3D != Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe Vector3D)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Vector3D NOT !="))
	static bool SCO_Pure_GetSafeVector3DNotEqualFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV);

	/** Get:: Safe Vector3D > Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Safe Vector3D)", CompactNodeTitle = ">", Keywords = "Security Get Safe Vector3D GREATER >"))
	static bool SCO_Pure_GetSafeVector3DGreaterFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV);

	/** Get:: Safe Vector3D < Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Safe Vector3D)", CompactNodeTitle = "<", Keywords = "Security Get Safe Vector3D LESS <"))
	static bool SCO_Pure_GetSafeVector3DSmallerFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV);

	/** Get:: Safe Vector3D >= Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">= (Safe Vector3D)", CompactNodeTitle = ">=", Keywords = "Security Get Safe Vector3D GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeVector3DGreaterEqualFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV);

	/** Get:: Safe Vector3D <= Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<= (Safe Vector3D)", CompactNodeTitle = "<=", Keywords = "Security Get Safe Vector3D LESS EQUAL <="))
	static bool SCO_Pure_GetSafeVector3DSmallerEqualFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV);

	/** Set:: Safe Vector3D = Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe Vector3D)", CompactNodeTitle = "=", Keywords = "Security Set Safe Vector3D EQUAL ="))
	static FSafeVector3D SCO_Pure_SetSafeVector3DEqualFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV, FVector &Output);

	/** Get:: Safe Vector3D + Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Safe Vector3D)", CompactNodeTitle = "+", Keywords = "Security Get Safe Vector3D PLUS +"))
	static FSafeVector3D SCO_Pure_GetSafeVector3DPlusFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV, FVector &Output);

	/** Get:: Safe Vector3D - Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "- (Safe Vector3D)", CompactNodeTitle = "-", Keywords = "Security Get Safe Vector3D MINUS -"))
	static FSafeVector3D SCO_Pure_GetSafeVector3DMinusFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV, FVector &Output);

	/** Get:: Safe Vector3D * Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "* (Safe Vector3D)", CompactNodeTitle = "*", Keywords = "Security Get Safe Vector3D TIMES *"))
	static FSafeVector3D SCO_Pure_GetSafeVector3DTimesFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV, FVector &Output);

	/** Get:: Safe Vector3D / Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "/ (Safe Vector3D)", CompactNodeTitle = "/", Keywords = "Security Get Safe Vector3D DIVIDE /"))
	static FSafeVector3D SCO_Pure_GetSafeVector3DDivideFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV, FVector &Output);

	/** Get:: Safe Vector3D ++ */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "++ (Safe Vector3D)", CompactNodeTitle = "++", Keywords = "Security Get Safe Vector3D ADD PLUS ++"))
	static FSafeVector3D SCO_Pure_GetSafeVector3DIncreaseFSV(UPARAM(ref)FSafeVector3D &FSV, FVector &Output);

	/** Get:: Safe Vector3D -- */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-- (Safe Vector3D)", CompactNodeTitle = "--", Keywords = "Security Get Safe Vector3D LESS --"))
	static FSafeVector3D SCO_Pure_GetSafeVector3DDecreaseFSV(UPARAM(ref)FSafeVector3D &FSV, FVector &Output);

	/** Get:: Safe Vector3D += Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Safe Vector3D)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Vector3D PLUS EQUAL +="))
	static FSafeVector3D SCO_Pure_GetSafeVector3DPlusEqualFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV, FVector &Output);

	/** Get:: Safe Vector3D -= Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-= (Safe Vector3D)", CompactNodeTitle = "-=", Keywords = "Security Get Safe Vector3D MINUS EQUAL -="))
	static FSafeVector3D SCO_Pure_GetSafeVector3DMinusEqualFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV, FVector &Output);

	/** Get:: Safe Vector3D % Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "% (Safe Vector3D)", CompactNodeTitle = "%", Keywords = "Security Get Safe Vector3D MOD %"))
	static FSafeVector3D SCO_Pure_GetSafeVector3DModFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV, FVector &Output);

	/* Native -> FSafe */

	/** Get:: Safe Vector3D == Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Vector3D)", CompactNodeTitle = "==", Keywords = "Security Get Safe Vector3D EQUAL =="))
	static bool SCO_Pure_GetSafeVector3DEqualVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV);

	/** Get:: Safe Vector3D != Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Vector3D)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Vector3D NOT !="))
	static bool SCO_Pure_GetSafeVector3DNotEqualVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV);

	/** Get:: Safe Vector3D > Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Vector3D)", CompactNodeTitle = ">", Keywords = "Security Get Safe Vector3D GREATER >"))
	static bool SCO_Pure_GetSafeVector3DGreaterVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV);

	/** Get:: Safe Vector3D < Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Vector3D)", CompactNodeTitle = "<", Keywords = "Security Get Safe Vector3D LESS <"))
	static bool SCO_Pure_GetSafeVector3DSmallerVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV);

	/** Get:: Safe Vector3D >= Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">= (Vector3D)", CompactNodeTitle = ">=", Keywords = "Security Get Safe Vector3D GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeVector3DGreaterEqualVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV);

	/** Get:: Safe Vector3D <= Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<= (Vector3D)", CompactNodeTitle = "<=", Keywords = "Security Get Safe Vector3D LESS EQUAL <="))
	static bool SCO_Pure_GetSafeVector3DSmallerEqualVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV);

	/** Set:: Safe Vector3D = Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Vector3D)", CompactNodeTitle = "=", Keywords = "Security Set Safe Vector3D EQUAL ="))
	static FSafeVector3D SCO_Pure_SetSafeVector3DEqualVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV, FVector &Output);

	/** Get:: Safe Vector3D + Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Vector3D)", CompactNodeTitle = "+", Keywords = "Security Get Safe Vector3D PLUS +"))
	static FSafeVector3D SCO_Pure_GetSafeVector3DPlusVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV, FVector &Output);

	/** Get:: Safe Vector3D - Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "- (Vector3D)", CompactNodeTitle = "-", Keywords = "Security Get Safe Vector3D MINUS -"))
	static FSafeVector3D SCO_Pure_GetSafeVector3DMinusVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV, FVector &Output);

	/** Get:: Safe Vector3D * Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "* (Vector3D)", CompactNodeTitle = "*", Keywords = "Security Get Safe Vector3D TIMES *"))
	static FSafeVector3D SCO_Pure_GetSafeVector3DTimesVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV, FVector &Output);

	/** Get:: Safe Vector3D / Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "/ (Vector3D)", CompactNodeTitle = "/", Keywords = "Security Get Safe Vector3D DIVIDE /"))
	static FSafeVector3D SCO_Pure_GetSafeVector3DDivideVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV, FVector &Output);

	/** Get:: Safe Vector3D += Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Vector3D)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Vector3D PLUS EQUAL +="))
	static FSafeVector3D SCO_Pure_GetSafeVector3DPlusEqualVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV, FVector &Output);

	/** Get:: Safe Vector3D -= Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-= (Vector3D)", CompactNodeTitle = "-=", Keywords = "Security Get Safe Vector3D MINUS EQUAL -="))
	static FSafeVector3D SCO_Pure_GetSafeVector3DMinusEqualVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV, FVector &Output);

	/** Get:: Safe Vector3D % Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "% (Vector3D)", CompactNodeTitle = "%", Keywords = "Security Get Safe Vector3D MOD %"))
	static FSafeVector3D SCO_Pure_GetSafeVector3DModVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV, FVector &Output);

	/* FSafe -> Native */

	/** Get:: Vector3D == Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe Vector3D)", CompactNodeTitle = "==", Keywords = "Security Get Safe Vector3D EQUAL =="))
	static bool SCO_Pure_GetVector3DEqualFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV);

	/** Get:: Vector3D != Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe Vector3D)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Vector3D NOT !="))
	static bool SCO_Pure_GetVector3DNotEqualFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV);

	/** Get:: Vector3D > Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Safe Vector3D)", CompactNodeTitle = ">", Keywords = "Security Get Safe Vector3D GREATER >"))
	static bool SCO_Pure_GetVector3DGreaterFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV);

	/** Get:: Vector3D < Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Safe Vector3D)", CompactNodeTitle = "<", Keywords = "Security Get Safe Vector3D LESS <"))
	static bool SCO_Pure_GetVector3DSmallerFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV);

	/** Get:: Vector3D >= Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">= (Safe Vector3D)", CompactNodeTitle = ">=", Keywords = "Security Get Safe Vector3D GREATER EQUAL >="))
	static bool SCO_Pure_GetVector3DGreaterEqualFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV);

	/** Get:: Vector3D <= Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<= (Safe Vector3D)", CompactNodeTitle = "<=", Keywords = "Security Get Safe Vector3D LESS EQUAL <="))
	static bool SCO_Pure_GetVector3DSmallerEqualFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV);

	/** Set:: Vector3D = Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe Vector3D)", CompactNodeTitle = "=", Keywords = "Security Set Safe Vector3D EQUAL ="))
	static FVector SCO_Pure_SetVector3DEqualFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV);

	/** Get:: Vector3D + Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Safe Vector3D)", CompactNodeTitle = "+", Keywords = "Security Get Safe Vector3D PLUS +"))
	static FVector SCO_Pure_GetVector3DPlusFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV);

	/** Get:: Vector3D - Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "- (Safe Vector3D)", CompactNodeTitle = "-", Keywords = "Security Get Safe Vector3D MINUS -"))
	static FVector SCO_Pure_GetVector3DMinusFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV);

	/** Get:: Vector3D * Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "* (Safe Vector3D)", CompactNodeTitle = "*", Keywords = "Security Get Safe Vector3D TIMES *"))
	static FVector SCO_Pure_GetVector3DTimesFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV);

	/** Get:: Vector3D / Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "/ (Safe Vector3D)", CompactNodeTitle = "/", Keywords = "Security Get Safe Vector3D DIVIDE /"))
	static FVector SCO_Pure_GetVector3DDivideFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV);

	/** Get:: Vector3D += Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Safe Vector3D)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Vector3D PLUS EQUAL +="))
	static FVector SCO_Pure_GetVector3DPlusEqualFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV);

	/** Get:: Vector3D -= Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-= (Safe Vector3D)", CompactNodeTitle = "-=", Keywords = "Security Get Safe Vector3D MINUS EQUAL -="))
	static FVector SCO_Pure_GetVector3DMinusEqualFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV);

	/** Get:: Vector3D % Safe Vector3D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "% (Safe Vector3D)", CompactNodeTitle = "%", Keywords = "Security Get Safe Vector3D MOD %"))
	static FVector SCO_Pure_GetVector3DModFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV);

	// FSVector4D

	/* FSafe -> FSafe */

	/** Get:: Safe Vector4D == Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe Vector4D)", CompactNodeTitle = "==", Keywords = "Security Get Safe Vector4D EQUAL =="))
	static bool SCO_Pure_GetSafeVector4DEqualFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV);

	/** Get:: Safe Vector4D != Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe Vector4D)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Vector4D NOT !="))
	static bool SCO_Pure_GetSafeVector4DNotEqualFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV);

	/** Get:: Safe Vector4D > Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Safe Vector4D)", CompactNodeTitle = ">", Keywords = "Security Get Safe Vector4D GREATER >"))
	static bool SCO_Pure_GetSafeVector4DGreaterFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV);

	/** Get:: Safe Vector4D < Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Safe Vector4D)", CompactNodeTitle = "<", Keywords = "Security Get Safe Vector4D LESS <"))
	static bool SCO_Pure_GetSafeVector4DSmallerFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV);

	/** Get:: Safe Vector4D >= Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">= (Safe Vector4D)", CompactNodeTitle = ">=", Keywords = "Security Get Safe Vector4D GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeVector4DGreaterEqualFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV);

	/** Get:: Safe Vector4D <= Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<= (Safe Vector4D)", CompactNodeTitle = "<=", Keywords = "Security Get Safe Vector4D LESS EQUAL <="))
	static bool SCO_Pure_GetSafeVector4DSmallerEqualFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV);

	/** Set:: Safe Vector4D = Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe Vector4D)", CompactNodeTitle = "=", Keywords = "Security Set Safe Vector4D EQUAL ="))
	static FSafeVector4D SCO_Pure_SetSafeVector4DEqualFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV, FVector4 &Output);

	/** Get:: Safe Vector4D + Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Safe Vector4D)", CompactNodeTitle = "+", Keywords = "Security Get Safe Vector4D PLUS +"))
	static FSafeVector4D SCO_Pure_GetSafeVector4DPlusFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV, FVector4 &Output);

	/** Get:: Safe Vector4D - Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "- (Safe Vector4D)", CompactNodeTitle = "-", Keywords = "Security Get Safe Vector4D MINUS -"))
	static FSafeVector4D SCO_Pure_GetSafeVector4DMinusFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV, FVector4 &Output);

	/** Get:: Safe Vector4D * Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "* (Safe Vector4D)", CompactNodeTitle = "*", Keywords = "Security Get Safe Vector4D TIMES *"))
	static FSafeVector4D SCO_Pure_GetSafeVector4DTimesFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV, FVector4 &Output);

	/** Get:: Safe Vector4D / Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "/ (Safe Vector4D)", CompactNodeTitle = "/", Keywords = "Security Get Safe Vector4D DIVIDE /"))
	static FSafeVector4D SCO_Pure_GetSafeVector4DDivideFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV, FVector4 &Output);

	/** Get:: Safe Vector4D ++ */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "++ (Safe Vector4D)", CompactNodeTitle = "++", Keywords = "Security Get Safe Vector4D ADD PLUS ++"))
	static FSafeVector4D SCO_Pure_GetSafeVector4DIncreaseFSV(UPARAM(ref)FSafeVector4D &FSV, FVector4 &Output);

	/** Get:: Safe Vector4D -- */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-- (Safe Vector4D)", CompactNodeTitle = "--", Keywords = "Security Get Safe Vector4D LESS --"))
	static FSafeVector4D SCO_Pure_GetSafeVector4DDecreaseFSV(UPARAM(ref)FSafeVector4D &FSV, FVector4 &Output);

	/** Get:: Safe Vector4D += Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Safe Vector4D)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Vector4D PLUS EQUAL +="))
	static FSafeVector4D SCO_Pure_GetSafeVector4DPlusEqualFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV, FVector4 &Output);

	/** Get:: Safe Vector4D -= Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-= (Safe Vector4D)", CompactNodeTitle = "-=", Keywords = "Security Get Safe Vector4D MINUS EQUAL -="))
	static FSafeVector4D SCO_Pure_GetSafeVector4DMinusEqualFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV, FVector4 &Output);

	/** Get:: Safe Vector4D % Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "% (Safe Vector4D)", CompactNodeTitle = "%", Keywords = "Security Get Safe Vector4D MOD %"))
	static FSafeVector4D SCO_Pure_GetSafeVector4DModFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV, FVector4 &Output);

	/* Native -> FSafe */

	/** Get:: Safe Vector4D == Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Vector4D)", CompactNodeTitle = "==", Keywords = "Security Get Safe Vector4D EQUAL =="))
	static bool SCO_Pure_GetSafeVector4DEqualVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV);

	/** Get:: Safe Vector4D != Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Vector4D)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Vector4D NOT !="))
	static bool SCO_Pure_GetSafeVector4DNotEqualVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV);

	/** Get:: Safe Vector4D > Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Vector4D)", CompactNodeTitle = ">", Keywords = "Security Get Safe Vector4D GREATER >"))
	static bool SCO_Pure_GetSafeVector4DGreaterVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV);

	/** Get:: Safe Vector4D < Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Vector4D)", CompactNodeTitle = "<", Keywords = "Security Get Safe Vector4D LESS <"))
	static bool SCO_Pure_GetSafeVector4DSmallerVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV);

	/** Get:: Safe Vector4D >= Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">= (Vector4D)", CompactNodeTitle = ">=", Keywords = "Security Get Safe Vector4D GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeVector4DGreaterEqualVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV);

	/** Get:: Safe Vector4D <= Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<= (Vector4D)", CompactNodeTitle = "<=", Keywords = "Security Get Safe Vector4D LESS EQUAL <="))
	static bool SCO_Pure_GetSafeVector4DSmallerEqualVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV);

	/** Set:: Safe Vector4D = Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Vector4D)", CompactNodeTitle = "=", Keywords = "Security Set Safe Vector4D EQUAL ="))
	static FSafeVector4D SCO_Pure_SetSafeVector4DEqualVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV, FVector4 &Output);

	/** Get:: Safe Vector4D + Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Vector4D)", CompactNodeTitle = "+", Keywords = "Security Get Safe Vector4D PLUS +"))
	static FSafeVector4D SCO_Pure_GetSafeVector4DPlusVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV, FVector4 &Output);

	/** Get:: Safe Vector4D - Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "- (Vector4D)", CompactNodeTitle = "-", Keywords = "Security Get Safe Vector4D MINUS -"))
	static FSafeVector4D SCO_Pure_GetSafeVector4DMinusVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV, FVector4 &Output);

	/** Get:: Safe Vector4D * Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "* (Vector4D)", CompactNodeTitle = "*", Keywords = "Security Get Safe Vector4D TIMES *"))
	static FSafeVector4D SCO_Pure_GetSafeVector4DTimesVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV, FVector4 &Output);

	/** Get:: Safe Vector4D / Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "/ (Vector4D)", CompactNodeTitle = "/", Keywords = "Security Get Safe Vector4D DIVIDE /"))
	static FSafeVector4D SCO_Pure_GetSafeVector4DDivideVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV, FVector4 &Output);

	/** Get:: Safe Vector4D += Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Vector4D)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Vector4D PLUS EQUAL +="))
	static FSafeVector4D SCO_Pure_GetSafeVector4DPlusEqualVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV, FVector4 &Output);

	/** Get:: Safe Vector4D -= Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-= (Vector4D)", CompactNodeTitle = "-=", Keywords = "Security Get Safe Vector4D MINUS EQUAL -="))
	static FSafeVector4D SCO_Pure_GetSafeVector4DMinusEqualVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV, FVector4 &Output);

	/** Get:: Safe Vector4D % Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "% (Vector4D)", CompactNodeTitle = "%", Keywords = "Security Get Safe Vector4D MOD %"))
	static FSafeVector4D SCO_Pure_GetSafeVector4DModVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV, FVector4 &Output);

	/* FSafe -> Native */

	/** Get:: Vector4D == Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe Vector4D)", CompactNodeTitle = "==", Keywords = "Security Get Safe Vector4D EQUAL =="))
	static bool SCO_Pure_GetVector4DEqualFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV);

	/** Get:: Vector4D != Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe Vector4D)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Vector4D NOT !="))
	static bool SCO_Pure_GetVector4DNotEqualFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV);

	/** Get:: Vector4D > Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Safe Vector4D)", CompactNodeTitle = ">", Keywords = "Security Get Safe Vector4D GREATER >"))
	static bool SCO_Pure_GetVector4DGreaterFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV);

	/** Get:: Vector4D < Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Safe Vector4D)", CompactNodeTitle = "<", Keywords = "Security Get Safe Vector4D LESS <"))
	static bool SCO_Pure_GetVector4DSmallerFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV);

	/** Get:: Vector4D >= Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">= (Safe Vector4D)", CompactNodeTitle = ">=", Keywords = "Security Get Safe Vector4D GREATER EQUAL >="))
	static bool SCO_Pure_GetVector4DGreaterEqualFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV);

	/** Get:: Vector4D <= Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<= (Safe Vector4D)", CompactNodeTitle = "<=", Keywords = "Security Get Safe Vector4D LESS EQUAL <="))
	static bool SCO_Pure_GetVector4DSmallerEqualFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV);

	/** Set:: Vector4D = Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe Vector4D)", CompactNodeTitle = "=", Keywords = "Security Set Safe Vector4D EQUAL ="))
	static FVector4 SCO_Pure_SetVector4DEqualFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV);

	/** Get:: Vector4D + Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Safe Vector4D)", CompactNodeTitle = "+", Keywords = "Security Get Safe Vector4D PLUS +"))
	static FVector4 SCO_Pure_GetVector4DPlusFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV);

	/** Get:: Vector4D - Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "- (Safe Vector4D)", CompactNodeTitle = "-", Keywords = "Security Get Safe Vector4D MINUS -"))
	static FVector4 SCO_Pure_GetVector4DMinusFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV);

	/** Get:: Vector4D * Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "* (Safe Vector4D)", CompactNodeTitle = "*", Keywords = "Security Get Safe Vector4D TIMES *"))
	static FVector4 SCO_Pure_GetVector4DTimesFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV);

	/** Get:: Vector4D / Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "/ (Safe Vector4D)", CompactNodeTitle = "/", Keywords = "Security Get Safe Vector4D DIVIDE /"))
	static FVector4 SCO_Pure_GetVector4DDivideFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV);

	/** Get:: Vector4D += Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Safe Vector4D)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Vector4D PLUS EQUAL +="))
	static FVector4 SCO_Pure_GetVector4DPlusEqualFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV);

	/** Get:: Vector4D -= Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-= (Safe Vector4D)", CompactNodeTitle = "-=", Keywords = "Security Get Safe Vector4D MINUS EQUAL -="))
	static FVector4 SCO_Pure_GetVector4DMinusEqualFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV);

	/** Get:: Vector4D % Safe Vector4D */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "% (Safe Vector4D)", CompactNodeTitle = "%", Keywords = "Security Get Safe Vector4D MOD %"))
	static FVector4 SCO_Pure_GetVector4DModFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV);

	// FSColor

	/* FSafe -> FSafe */

	/** Get:: Safe Color == Safe Color */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe Color)", CompactNodeTitle = "==", Keywords = "Security Get Safe Color EQUAL =="))
	static bool SCO_Pure_GetSafeColorEqualFSC(UPARAM(ref)FSafeColor &FSC, UPARAM(ref)FSafeColor &SSC);

	/** Get:: Safe Color != Safe Color */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe Color)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Color NOT !="))
	static bool SCO_Pure_GetSafeColorNotEqualFSC(UPARAM(ref)FSafeColor &FSC, UPARAM(ref)FSafeColor &SSC);

	/** Set:: Safe Color = Safe Color */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe Color)", CompactNodeTitle = "=", Keywords = "Security Set Safe Color EQUAL ="))
	static FSafeColor SCO_Pure_SetSafeColorEqualFSC(UPARAM(ref)FSafeColor &FSC, UPARAM(ref)FSafeColor &SSC, FLinearColor &Output);
	
	/* Native -> FSafe */

	/** Get:: Safe Color == Color */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Color)", CompactNodeTitle = "==", Keywords = "Security Get Safe Color EQUAL =="))
	static bool SCO_Pure_GetSafeColorEqualColor(UPARAM(ref)FSafeColor &FSC, UPARAM(ref)FLinearColor &NC);

	/** Get:: Safe Color != Color */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Color)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Color NOT !="))
	static bool SCO_Pure_GetSafeColorNotEqualColor(UPARAM(ref)FSafeColor &FSC, UPARAM(ref)FLinearColor &NC);

	/** Set:: Safe Color = Color */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Color)", CompactNodeTitle = "=", Keywords = "Security Set Safe Color EQUAL ="))
	static FSafeColor SCO_Pure_SetSafeColorEqualColor(UPARAM(ref)FSafeColor &FSC, UPARAM(ref)FLinearColor &SSC, FLinearColor &Output);

	/* FSafe -> Native */

	/** Get:: Color == Safe Color */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe Color)", CompactNodeTitle = "==", Keywords = "Security Get Safe Color EQUAL =="))
	static bool SCO_Pure_GetColorEqualFSC(UPARAM(ref)FLinearColor &NC, UPARAM(ref)FSafeColor &FSC);

	/** Get:: Color != Safe Color */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe Color)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Color NOT !="))
	static bool SCO_Pure_GetColorNotEqualFSC(UPARAM(ref)FLinearColor &NC, UPARAM(ref)FSafeColor &FSC);

	/** Set:: Color = Safe Color */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe Color)", CompactNodeTitle = "=", Keywords = "Security Set Safe Color EQUAL ="))
	static FLinearColor SCO_Pure_SetColorEqualFSC(UPARAM(ref)FLinearColor &NC, UPARAM(ref)FSafeColor &FSC);

	// FSRotator

	/* FSafe -> FSafe */

	/** Get:: Safe Rotator == Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe Rotator)", CompactNodeTitle = "==", Keywords = "Security Get Safe Rotator EQUAL =="))
	static bool SCO_Pure_GetSafeRotatorEqualFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR);

	/** Get:: Safe Rotator != Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe Rotator)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Rotator NOT !="))
	static bool SCO_Pure_GetSafeRotatorNotEqualFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR);

	/** Get:: Safe Rotator > Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Safe Rotator)", CompactNodeTitle = ">", Keywords = "Security Get Safe Rotator GREATER >"))
	static bool SCO_Pure_GetSafeRotatorGreaterFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR);

	/** Get:: Safe Rotator < Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Safe Rotator)", CompactNodeTitle = "<", Keywords = "Security Get Safe Rotator LESS <"))
	static bool SCO_Pure_GetSafeRotatorSmallerFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR);

	/** Get:: Safe Rotator >= Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">= (Safe Rotator)", CompactNodeTitle = ">=", Keywords = "Security Get Safe Rotator GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeRotatorGreaterEqualFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR);

	/** Get:: Safe Rotator <= Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<= (Safe Rotator)", CompactNodeTitle = "<=", Keywords = "Security Get Safe Rotator LESS EQUAL <="))
	static bool SCO_Pure_GetSafeRotatorSmallerEqualFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR);

	/** Set:: Safe Rotator = Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe Rotator)", CompactNodeTitle = "=", Keywords = "Security Set Safe Rotator EQUAL ="))
	static FSafeRotator SCO_Pure_SetSafeRotatorEqualFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR, FRotator &Output);

	/** Get:: Safe Rotator + Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Safe Rotator)", CompactNodeTitle = "+", Keywords = "Security Get Safe Rotator PLUS +"))
	static FSafeRotator SCO_Pure_GetSafeRotatorPlusFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR, FRotator &Output);

	/** Get:: Safe Rotator - Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "- (Safe Rotator)", CompactNodeTitle = "-", Keywords = "Security Get Safe Rotator MINUS -"))
	static FSafeRotator SCO_Pure_GetSafeRotatorMinusFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR, FRotator &Output);

	/** Get:: Safe Rotator * Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "* (Safe Rotator)", CompactNodeTitle = "*", Keywords = "Security Get Safe Rotator TIMES *"))
	static FSafeRotator SCO_Pure_GetSafeRotatorTimesFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR, FRotator &Output);

	/** Get:: Safe Rotator / Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "/ (Safe Rotator)", CompactNodeTitle = "/", Keywords = "Security Get Safe Rotator DIVIDE /"))
	static FSafeRotator SCO_Pure_GetSafeRotatorDivideFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR, FRotator &Output);

	/** Get:: Safe Rotator ++ */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "++ (Safe Rotator)", CompactNodeTitle = "++", Keywords = "Security Get Safe Rotator ADD PLUS ++"))
	static FSafeRotator SCO_Pure_GetSafeRotatorIncreaseFSR(UPARAM(ref)FSafeRotator &FSR, FRotator &Output);

	/** Get:: Safe Rotator -- */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-- (Safe Rotator)", CompactNodeTitle = "--", Keywords = "Security Get Safe Rotator LESS --"))
	static FSafeRotator SCO_Pure_GetSafeRotatorDecreaseFSR(UPARAM(ref)FSafeRotator &FSR, FRotator &Output);

	/** Get:: Safe Rotator += Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Safe Rotator)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Rotator PLUS EQUAL +="))
	static FSafeRotator SCO_Pure_GetSafeRotatorPlusEqualFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR, FRotator &Output);

	/** Get:: Safe Rotator -= Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-= (Safe Rotator)", CompactNodeTitle = "-=", Keywords = "Security Get Safe Rotator MINUS EQUAL -="))
	static FSafeRotator SCO_Pure_GetSafeRotatorMinusEqualFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR, FRotator &Output);

	/** Get:: Safe Rotator % Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "% (Safe Rotator)", CompactNodeTitle = "%", Keywords = "Security Get Safe Rotator MOD %"))
	static FSafeRotator SCO_Pure_GetSafeRotatorModFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR, FRotator &Output);

	/* Native -> FSafe */

	/** Get:: Safe Rotator == Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Rotator)", CompactNodeTitle = "==", Keywords = "Security Get Safe Rotator EQUAL =="))
	static bool SCO_Pure_GetSafeRotatorEqualRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR);

	/** Get:: Safe Rotator != Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Rotator)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Rotator NOT !="))
	static bool SCO_Pure_GetSafeRotatorNotEqualRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR);

	/** Get:: Safe Rotator > Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Rotator)", CompactNodeTitle = ">", Keywords = "Security Get Safe Rotator GREATER >"))
	static bool SCO_Pure_GetSafeRotatorGreaterRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR);

	/** Get:: Safe Rotator < Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Rotator)", CompactNodeTitle = "<", Keywords = "Security Get Safe Rotator LESS <"))
	static bool SCO_Pure_GetSafeRotatorSmallerRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR);

	/** Get:: Safe Rotator >= Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">= (Rotator)", CompactNodeTitle = ">=", Keywords = "Security Get Safe Rotator GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeRotatorGreaterEqualRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR);

	/** Get:: Safe Rotator <= Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<= (Rotator)", CompactNodeTitle = "<=", Keywords = "Security Get Safe Rotator LESS EQUAL <="))
	static bool SCO_Pure_GetSafeRotatorSmallerEqualRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR);

	/** Set:: Safe Rotator = Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Rotator)", CompactNodeTitle = "=", Keywords = "Security Set Safe Rotator EQUAL ="))
	static FSafeRotator SCO_Pure_SetSafeRotatorEqualRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR, FRotator &Output);

	/** Get:: Safe Rotator + Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Rotator)", CompactNodeTitle = "+", Keywords = "Security Get Safe Rotator PLUS +"))
	static FSafeRotator SCO_Pure_GetSafeRotatorPlusRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR, FRotator &Output);

	/** Get:: Safe Rotator - Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "- (Rotator)", CompactNodeTitle = "-", Keywords = "Security Get Safe Rotator MINUS -"))
	static FSafeRotator SCO_Pure_GetSafeRotatorMinusRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR, FRotator &Output);

	/** Get:: Safe Rotator * Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "* (Rotator)", CompactNodeTitle = "*", Keywords = "Security Get Safe Rotator TIMES *"))
	static FSafeRotator SCO_Pure_GetSafeRotatorTimesRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR, FRotator &Output);

	/** Get:: Safe Rotator / Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "/ (Rotator)", CompactNodeTitle = "/", Keywords = "Security Get Safe Rotator DIVIDE /"))
	static FSafeRotator SCO_Pure_GetSafeRotatorDivideRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR, FRotator &Output);

	/** Get:: Safe Rotator += Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Rotator)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Rotator PLUS EQUAL +="))
	static FSafeRotator SCO_Pure_GetSafeRotatorPlusEqualRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR, FRotator &Output);

	/** Get:: Safe Rotator -= Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-= (Rotator)", CompactNodeTitle = "-=", Keywords = "Security Get Safe Rotator MINUS EQUAL -="))
	static FSafeRotator SCO_Pure_GetSafeRotatorMinusEqualRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR, FRotator &Output);

	/** Get:: Safe Rotator % Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "% (Rotator)", CompactNodeTitle = "%", Keywords = "Security Get Safe Rotator MOD %"))
	static FSafeRotator SCO_Pure_GetSafeRotatorModRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR, FRotator &Output);

	/* FSafe -> Native */

	/** Get:: Rotator == Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe Rotator)", CompactNodeTitle = "==", Keywords = "Security Get Safe Rotator EQUAL =="))
	static bool SCO_Pure_GetRotatorEqualFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR);

	/** Get:: Rotator != Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe Rotator)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Rotator NOT !="))
	static bool SCO_Pure_GetRotatorNotEqualFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR);

	/** Get:: Rotator > Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "> (Safe Rotator)", CompactNodeTitle = ">", Keywords = "Security Get Safe Rotator GREATER >"))
	static bool SCO_Pure_GetRotatorGreaterFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR);

	/** Get:: Rotator < Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "< (Safe Rotator)", CompactNodeTitle = "<", Keywords = "Security Get Safe Rotator LESS <"))
	static bool SCO_Pure_GetRotatorSmallerFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR);

	/** Get:: Rotator >= Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = ">= (Safe Rotator)", CompactNodeTitle = ">=", Keywords = "Security Get Safe Rotator GREATER EQUAL >="))
	static bool SCO_Pure_GetRotatorGreaterEqualFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR);

	/** Get:: Rotator <= Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "<= (Safe Rotator)", CompactNodeTitle = "<=", Keywords = "Security Get Safe Rotator LESS EQUAL <="))
	static bool SCO_Pure_GetRotatorSmallerEqualFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR);

	/** Set:: Rotator = Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe Rotator)", CompactNodeTitle = "=", Keywords = "Security Set Safe Rotator EQUAL ="))
	static FRotator SCO_Pure_SetRotatorEqualFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR);

	/** Get:: Rotator + Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+ (Safe Rotator)", CompactNodeTitle = "+", Keywords = "Security Get Safe Rotator PLUS +"))
	static FRotator SCO_Pure_GetRotatorPlusFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR);

	/** Get:: Rotator - Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "- (Safe Rotator)", CompactNodeTitle = "-", Keywords = "Security Get Safe Rotator MINUS -"))
	static FRotator SCO_Pure_GetRotatorMinusFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR);

	/** Get:: Rotator * Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "* (Safe Rotator)", CompactNodeTitle = "*", Keywords = "Security Get Safe Rotator TIMES *"))
	static FRotator SCO_Pure_GetRotatorTimesFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR);

	/** Get:: Rotator / Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "/ (Safe Rotator)", CompactNodeTitle = "/", Keywords = "Security Get Safe Rotator DIVIDE /"))
	static FRotator SCO_Pure_GetRotatorDivideFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR);

	/** Get:: Rotator += Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "+= (Safe Rotator)", CompactNodeTitle = "+=", Keywords = "Security Get Safe Rotator PLUS EQUAL +="))
	static FRotator SCO_Pure_GetRotatorPlusEqualFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR);

	/** Get:: Rotator -= Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "-= (Safe Rotator)", CompactNodeTitle = "-=", Keywords = "Security Get Safe Rotator MINUS EQUAL -="))
	static FRotator SCO_Pure_GetRotatorMinusEqualFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR);

	/** Get:: Rotator % Safe Rotator */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "% (Safe Rotator)", CompactNodeTitle = "%", Keywords = "Security Get Safe Rotator MOD %"))
	static FRotator SCO_Pure_GetRotatorModFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR);

	// FSTransform

	/* FSafe -> FSafe */

	/** Get:: Safe Transform == Safe Transform */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe Transform)", CompactNodeTitle = "==", Keywords = "Security Get Safe Transform EQUAL =="))
	static bool SCO_Pure_GetSafeTransformEqualFST(UPARAM(ref)FSafeTransform &FST, UPARAM(ref)FSafeTransform &SST);

	/** Get:: Safe Transform != Safe Transform */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe Transform)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Transform NOT !="))
	static bool SCO_Pure_GetSafeTransformNotEqualFST(UPARAM(ref)FSafeTransform &FST, UPARAM(ref)FSafeTransform &SST);

	/** Set:: Safe Transform = Safe Transform */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe Transform)", CompactNodeTitle = "=", Keywords = "Security Set Safe Transform EQUAL ="))
	static FSafeTransform SCO_Pure_SetSafeTransformEqualFST(UPARAM(ref)FSafeTransform &FST, UPARAM(ref)FSafeTransform &SST, FTransform &Output);
	
	/* Native -> FSafe */

	/** Get:: Safe Transform == Transform */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Transform)", CompactNodeTitle = "==", Keywords = "Security Get Safe Transform EQUAL =="))
	static bool SCO_Pure_GetSafeTransformEqualTransform(UPARAM(ref)FSafeTransform &FST, UPARAM(ref)FTransform &NT);

	/** Get:: Safe Transform != Transform */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Transform)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Transform NOT !="))
	static bool SCO_Pure_GetSafeTransformNotEqualTransform(UPARAM(ref)FSafeTransform &FST, UPARAM(ref)FTransform &NT);

	/** Set:: Safe Transform = Transform */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Transform)", CompactNodeTitle = "=", Keywords = "Security Set Safe Transform EQUAL ="))
	static FSafeTransform SCO_Pure_SetSafeTransformEqualTransform(UPARAM(ref)FSafeTransform &FST, UPARAM(ref)FTransform &SST, FTransform &Output);

	/* FSafe -> Native */

	/** Get:: Transform == Safe Transform */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "== (Safe Transform)", CompactNodeTitle = "==", Keywords = "Security Get Safe Transform EQUAL =="))
	static bool SCO_Pure_GetTransformEqualFST(UPARAM(ref)FTransform &NT, UPARAM(ref)FSafeTransform &FST);

	/** Get:: Transform != Safe Transform */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "!= (Safe Transform)", CompactNodeTitle = "!=", Keywords = "Security Get Safe Transform NOT !="))
	static bool SCO_Pure_GetTransformNotEqualFST(UPARAM(ref)FTransform &NT, UPARAM(ref)FSafeTransform &FST);

	/** Set:: Transform = Safe Transform */
	UFUNCTION(BlueprintPure, Category = "Variables|Security", meta = (DisplayName = "= (Safe Transform)", CompactNodeTitle = "=", Keywords = "Security Set Safe Transform EQUAL ="))
	static FTransform SCO_Pure_SetTransformEqualFST(UPARAM(ref)FTransform &NT, UPARAM(ref)FSafeTransform &FST);

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	#pragma endregion OPERATORS
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////