///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//		Copyright 2016 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
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
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//
	/** Pure:: Gets hidden value from 'Safe Bool Struct'. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Get Safe Bool", Keywords="Security Get Safe Bool"))
	static bool SCL_Pure_GetSafeBool(const FSafeBool &SB);
	//
	/** Pure:: Gets hidden value from 'Safe Bool Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Get Safe Bool", Keywords="Security Get Safe Bool"))
	static bool SCL_Pure_GetSafeBoolWithKey(const FSafeBool &SB, const FString &Key);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe Bool Struct'. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Set Safe Bool", Keywords="Security Get Safe Bool"))
	static bool SCL_Pure_SetSafeBool(UPARAM(Ref)FSafeBool &SB, const bool &Value);
	//
	/**	Pure:: Sets, and hides in memory, value for 'Safe Bool Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Set Safe Bool", Keywords="Security Get Safe Bool"))
	static bool SCL_Pure_SetSafeBoolWithKey(UPARAM(Ref)FSafeBool &SB, const FString &Key, const bool &Value);
	//
	//
	/** Pure:: Gets hidden value from 'Safe Int Struct'. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Get Safe Int", Keywords="Security Get Safe Int"))
	static int32 SCL_Pure_GetSafeInt(const FSafeInt &SI);
	//
	/**	Pure:: Gets hidden value from 'Safe Int Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Get Safe Int", Keywords="Security Get Safe Int"))
	static int32 SCL_Pure_GetSafeIntWithKey(const FSafeInt &SI, const FString &Key);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe Int Struct'. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Set Safe Int", Keywords="Security Get Safe Int"))
	static int32 SCL_Pure_SetSafeInt(UPARAM(Ref)FSafeInt &SI, const int32 &Value);
	//
	/**	Pure:: Sets, and hides in memory, value for 'Safe Int Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Set Safe Int", Keywords="Security Get Safe Int"))
	static int32 SCL_Pure_SetSafeIntWithKey(UPARAM(Ref)FSafeInt &SI, const FString &Key, const int32 &Value);
	//
	//
	/** Pure:: Gets hidden value from 'Safe Byte Struct'. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Get Safe Byte", Keywords="Security Get Safe Byte"))
	static uint8 SCL_Pure_GetSafeByte(const FSafeByte &SB);
	//
	/**	Pure:: Gets hidden value from 'Safe Byte Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Get Safe Byte", Keywords="Security Get Safe Byte"))
	static uint8 SCL_Pure_GetSafeByteWithKey(const FSafeByte &SB, const FString &Key);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe Byte Struct'. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Set Safe Byte", Keywords="Security Get Safe Byte"))
	static uint8 SCL_Pure_SetSafeByte(UPARAM(Ref)FSafeByte &SB, const uint8 &Value);
	//
	/**	Pure:: Sets, and hides in memory, value for 'Safe Byte Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Set Safe Byte", Keywords="Security Get Safe Byte"))
	static uint8 SCL_Pure_SetSafeByteWithKey(UPARAM(Ref)FSafeByte &SB, const FString &Key, const uint8 &Value);
	//
	//
	/** Pure:: Gets hidden value from 'Safe Float Struct'. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Get Safe Float", Keywords="Security Get Safe Float"))
	static float SCL_Pure_GetSafeFloat(const FSafeFloat &SF);
	//
	/**	Pure:: Gets hidden value from 'Safe Float Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Get Safe Float", Keywords="Security Get Safe Float"))
	static float SCL_Pure_GetSafeFloatWithKey(const FSafeFloat &SF, const FString &Key);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe Float Struct'. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Set Safe Float", Keywords="Security Get Safe Float"))
	static float SCL_Pure_SetSafeFloat(UPARAM(Ref)FSafeFloat &SF, const float &Value);
	//
	/**	Pure:: Sets, and hides in memory, value for 'Safe Float Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Set Safe Float", Keywords="Security Get Safe Float"))
	static float SCL_Pure_SetSafeFloatWithKey(UPARAM(Ref)FSafeFloat &SF, const FString &Key, const float &Value);
	//
	//
	/** Pure:: Gets hidden value from 'Safe Name Struct'. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Get Safe Name", Keywords="Security Get Safe Name"))
	static FName SCL_Pure_GetSafeName(const FSafeName &SN);
	//
	/**	Pure:: Gets hidden value from 'Safe Name Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Get Safe Name", Keywords="Security Get Safe Name"))
	static FName SCL_Pure_GetSafeNameWithKey(const FSafeName &SN, const FString &Key);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe Name Struct'. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Set Safe Name", Keywords="Security Get Safe Name"))
	static FName SCL_Pure_SetSafeName(UPARAM(Ref)FSafeName &SN, const FName &Value);
	//
	/**	Pure:: Sets, and hides in memory, value for 'Safe Name Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Set Safe Name", Keywords="Security Get Safe Name"))
	static FName SCL_Pure_SetSafeNameWithKey(UPARAM(Ref)FSafeName &SN, const FString &Key, const FName &Value);
	//
	//
	/** Pure:: Gets hidden value from 'Safe String Struct'. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Get Safe String", Keywords="Security Get Safe String"))
	static FString SCL_Pure_GetSafeString(const FSafeString &SS);
	//
	/**	Pure:: Gets hidden value from 'Safe String Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Get Safe String", Keywords="Security Get Safe String"))
	static FString SCL_Pure_GetSafeStringWithKey(const FSafeString &SS, const FString &Key);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe String Struct'. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Set Safe String", Keywords="Security Get Safe String"))
	static FString SCL_Pure_SetSafeString(UPARAM(Ref)FSafeString &SS, const FString &Value);
	//
	/**	Pure:: Sets, and hides in memory, value for 'Safe String Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Set Safe String", Keywords="Security Get Safe String"))
	static FString SCL_Pure_SetSafeStringWithKey(UPARAM(Ref)FSafeString &SS, const FString &Key, const FString &Value);
	//
	//
	/** Pure:: Gets hidden value from 'Safe Text Struct'. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Get Safe Text", Keywords="Security Get Safe Text"))
	static FText SCL_Pure_GetSafeText(const FSafeText &ST);
	//
	/**	Pure:: Gets hidden value from 'Safe Text Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Get Safe Text", Keywords="Security Get Safe Text"))
	static FText SCL_Pure_GetSafeTextWithKey(const FSafeText &ST, const FString &Key);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe Text Struct'. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Set Safe Text", Keywords="Security Get Safe Text"))
	static FText SCL_Pure_SetSafeText(UPARAM(Ref)FSafeText &ST, const FText &Value);
	//
	/**	Pure:: Sets, and hides in memory, value for 'Safe Text Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Set Safe Text", Keywords="Security Get Safe Text"))
	static FText SCL_Pure_SetSafeTextWithKey(UPARAM(Ref)FSafeText &ST, const FString &Key, const FText &Value);
	//
	//
	/** Pure:: Gets hidden value from 'Safe Vector2D Struct'. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Get Safe Vector2D", Keywords="Security Get Safe Vector2D"))
	static FVector2D SCL_Pure_GetSafeVector2D(const FSafeVector2D &SV);
	//
	/**	Pure:: Gets hidden value from 'Safe Vector2D Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Get Safe Vector2D", Keywords="Security Get Safe Vector2D"))
	static FVector2D SCL_Pure_GetSafeVector2DWithKey(const FSafeVector2D &SV, const FString &Key);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe Vector2D Struct'. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Set Safe Vector2D", Keywords="Security Get Safe Vector2D"))
	static FVector2D SCL_Pure_SetSafeVector2D(UPARAM(Ref)FSafeVector2D &SV, const FVector2D &Value);
	//
	/**	Pure:: Sets, and hides in memory, value for 'Safe Vector2D Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Set Safe Vector2D", Keywords="Security Get Safe Vector2D"))
	static FVector2D SCL_Pure_SetSafeVector2DWithKey(UPARAM(Ref)FSafeVector2D &SV, const FString &Key, const FVector2D &Value);
	//
	//
	/** Pure:: Gets hidden value from 'Safe Vector3D Struct'. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Get Safe Vector3D", Keywords="Security Get Safe Vector3D"))
	static FVector SCL_Pure_GetSafeVector3D(const FSafeVector3D &SV);
	//
	/**	Pure:: Gets hidden value from 'Safe Vector3D Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Get Safe Vector3D", Keywords="Security Get Safe Vector3D"))
	static FVector SCL_Pure_GetSafeVector3DWithKey(const FSafeVector3D &SV, const FString &Key);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe Vector3D Struct'. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Set Safe Vector3D", Keywords="Security Get Safe Vector3D"))
	static FVector SCL_Pure_SetSafeVector3D(UPARAM(Ref)FSafeVector3D &SV, const FVector &Value);
	//
	/**	Pure:: Sets, and hides in memory, value for 'Safe Vector3D Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Set Safe Vector3D", Keywords="Security Get Safe Vector3D"))
	static FVector SCL_Pure_SetSafeVector3DWithKey(UPARAM(Ref)FSafeVector3D &SV, const FString &Key, const FVector &Value);
	//
	//
	/** Pure:: Gets hidden value from 'Safe Color Struct'. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Get Safe Color", Keywords="Security Get Safe Color"))
	static FLinearColor SCL_Pure_GetSafeColor(const FSafeColor &SC);
	//
	/**	Pure:: Gets hidden value from 'Safe Color Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Get Safe Color", Keywords="Security Get Safe Color"))
	static FLinearColor SCL_Pure_GetSafeColorWithKey(const FSafeColor &SC, const FString &Key);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe Color Struct'. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Set Safe Color", Keywords="Security Get Safe Color"))
	static FLinearColor SCL_Pure_SetSafeColor(UPARAM(Ref)FSafeColor &SC, const FLinearColor &Value);
	//
	/**	Pure:: Sets, and hides in memory, value for 'Safe Color Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Set Safe Color", Keywords="Security Get Safe Color"))
	static FLinearColor SCL_Pure_SetSafeColorWithKey(UPARAM(Ref)FSafeColor &SC, const FString &Key, const FLinearColor &Value);
	//
	//
	/** Pure:: Gets hidden value from 'Safe Rotator Struct'. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Get Safe Rotator", Keywords="Security Get Safe Rotator"))
	static FRotator SCL_Pure_GetSafeRotator(const FSafeRotator &SR);
	//
	/**	Pure:: Gets hidden value from 'Safe Rotator Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Get Safe Rotator", Keywords="Security Get Safe Rotator"))
	static FRotator SCL_Pure_GetSafeRotatorWithKey(const FSafeRotator &SR, const FString &Key);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe Rotator Struct'. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Set Safe Rotator", Keywords="Security Get Safe Rotator"))
	static FRotator SCL_Pure_SetSafeRotator(UPARAM(Ref)FSafeRotator &SR, const FRotator &Value);
	//
	/**	Pure:: Sets, and hides in memory, value for 'Safe Rotator Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Set Safe Rotator", Keywords="Security Get Safe Rotator"))
	static FRotator SCL_Pure_SetSafeRotatorWithKey(UPARAM(Ref)FSafeRotator &SR, const FString &Key, const FRotator &Value);
	//
	//
	/** Pure:: Gets hidden value from 'Safe Transform Struct'. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Get Safe Transform", Keywords="Security Get Safe Transform"))
	static FTransform SCL_Pure_GetSafeTransform(const FSafeTransform &ST);
	//
	/** Pure:: Gets hidden value from 'Safe Transform Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Get Safe Transform", Keywords="Security Get Safe Transform"))
	static FTransform SCL_Pure_GetSafeTransformWithKey(const FSafeTransform &ST, const FString &Key);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe Transform Struct'. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Set Safe Transform", Keywords="Security Get Safe Transform"))
	static FTransform SCL_Pure_SetSafeTransform(UPARAM(Ref)FSafeTransform &ST, const FTransform &Value);
	//
	/** Pure:: Sets, and hides in memory, value for 'Safe Transform Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintPure, Category="Security", meta = (DisplayName="Set Safe Transform", Keywords="Security Get Safe Transform"))
	static FTransform SCL_Pure_SetSafeTransformWithKey(UPARAM(Ref)FSafeTransform &ST, const FString &Key, const FTransform &Value);
	//
	//
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//
	//
	/** Callable:: Gets raw value from 'Safe Bool Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Bool (Raw Value)", Keywords="Security Get Safe Bool"))
	static FString SCL_Callable_GetRawSafeBool(const FSafeBool &SB);
	//
	/** Callable:: Gets hidden value from 'Safe Bool Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Bool", Keywords="Security Get Safe Bool"))
	static bool SCL_Callable_GetSafeBool(const FSafeBool &SB);
	//
	/**	Callable:: Gets hidden value from 'Safe Bool Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Bool", Keywords="Security Get Safe Bool"))
	static bool SCL_Callable_GetSafeBoolWithKey(const FSafeBool &SB, const FString &Key);
	//
	/** Callable:: Sets, and hides in memory, raw value for 'Safe Bool Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Bool (Raw Value)", Keywords="Security Get Safe Bool"))
	static bool SCL_Callable_SetRawSafeBool(UPARAM(Ref)FSafeBool &SB, const FString &Value);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe Bool Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Bool", Keywords="Security Get Safe Bool"))
	static bool SCL_Callable_SetSafeBool(UPARAM(Ref)FSafeBool &SB, const bool &Value);
	//
	/**	Callable:: Sets, and hides in memory, value for 'Safe Bool Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Bool", Keywords="Security Get Safe Bool"))
	static bool SCL_Callable_SetSafeBoolWithKey(UPARAM(Ref)FSafeBool &SB, const FString &Key, const bool &Value);
	//
	//
	/** Callable:: Gets raw value from 'Safe Int Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Int (Raw Value)", Keywords="Security Get Safe Int"))
	static FString SCL_Callable_GetRawSafeInt(const FSafeInt &SI);
	//
	/** Callable:: Gets hidden value from 'Safe Int Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Int", Keywords="Security Get Safe Int"))
	static int32 SCL_Callable_GetSafeInt(const FSafeInt &SI);
	//
	/**	Gets hidden value from 'Safe Int Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Int", Keywords="Security Get Safe Int"))
	static int32 SCL_Callable_GetSafeIntWithKey(const FSafeInt &SI, const FString &Key);
	//
	/** Callable:: Sets, and hides in memory, raw value for 'Safe Int Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Int (Raw Value)", Keywords="Security Get Safe Int"))
	static int32 SCL_Callable_SetRawSafeInt(UPARAM(Ref)FSafeInt &SI, const FString &Value);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe Int Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Int", Keywords="Security Get Safe Int"))
	static int32 SCL_Callable_SetSafeInt(UPARAM(Ref)FSafeInt &SI, const int32 &Value);
	//
	/**	Callable:: Sets, and hides in memory, value for 'Safe Int Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Int", Keywords="Security Get Safe Int"))
	static int32 SCL_Callable_SetSafeIntWithKey(UPARAM(Ref)FSafeInt &SI, const FString &Key, const int32 &Value);
	//
	//
	/** Callable:: Gets raw value from 'Safe Byte Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Byte (Raw Value)", Keywords="Security Get Safe Byte"))
	static FString SCL_Callable_GetRawSafeByte(const FSafeByte &SB);
	//
	/** Callable:: Gets hidden value from 'Safe Byte Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Byte", Keywords="Security Get Safe Byte"))
	static uint8 SCL_Callable_GetSafeByte(const FSafeByte &SB);
	//
	/**	Gets hidden value from 'Safe Byte Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Byte", Keywords="Security Get Safe Byte"))
	static uint8 SCL_Callable_GetSafeByteWithKey(const FSafeByte &SB, const FString &Key);
	//
	/** Callable:: Sets, and hides in memory, raw value for 'Safe Byte Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Byte (Raw Value)", Keywords="Security Get Safe Byte"))
	static uint8 SCL_Callable_SetRawSafeByte(UPARAM(Ref)FSafeByte &SB, const FString &Value);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe Byte Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Byte", Keywords="Security Get Safe Byte"))
	static uint8 SCL_Callable_SetSafeByte(UPARAM(Ref)FSafeByte &SB, const uint8 &Value);
	//
	/**	Callable:: Sets, and hides in memory, value for 'Safe Byte Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Byte", Keywords="Security Get Safe Byte"))
	static uint8 SCL_Callable_SetSafeByteWithKey(UPARAM(Ref)FSafeByte &SB, const FString &Key, const uint8 &Value);
	//
	//
	/** Callable:: Gets raw value from 'Safe Float Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Float (Raw Value)", Keywords="Security Get Safe Float"))
	static FString SCL_Callable_GetRawSafeFloat(const FSafeFloat &SF);
	//
	/** Callable:: Gets hidden value from 'Safe Float Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Float", Keywords="Security Get Safe Float"))
	static float SCL_Callable_GetSafeFloat(const FSafeFloat &SF);
	//
	/**	Callable:: Gets hidden value from 'Safe Float Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Float", Keywords="Security Get Safe Float"))
	static float SCL_Callable_GetSafeFloatWithKey(const FSafeFloat &SF, const FString &Key);
	//
	/** Callable:: Sets, and hides in memory, raw value for 'Safe Float Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Float (Raw Value)", Keywords="Security Get Safe Float"))
	static float SCL_Callable_SetRawSafeFloat(UPARAM(Ref)FSafeFloat &SF, const FString &Value);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe Float Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Float", Keywords="Security Get Safe Float"))
	static float SCL_Callable_SetSafeFloat(UPARAM(Ref)FSafeFloat &SF, const float &Value);
	//
	/**	Callable:: Sets, and hides in memory, value for 'Safe Float Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Float", Keywords="Security Get Safe Float"))
	static float SCL_Callable_SetSafeFloatWithKey(UPARAM(Ref)FSafeFloat &SF, const FString &Key, const float &Value);
	//
	//
	/** Callable:: Gets raw value from 'Safe Name Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Name (Raw Value)", Keywords="Security Get Safe Name"))
	static FString SCL_Callable_GetRawSafeName(const FSafeName &SN);
	//
	/** Callable:: Gets hidden value from 'Safe Name Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Name", Keywords="Security Get Safe Name"))
	static FName SCL_Callable_GetSafeName(const FSafeName &SN);
	//
	/**	Callable:: Gets hidden value from 'Safe Name Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Name", Keywords="Security Get Safe Name"))
	static FName SCL_Callable_GetSafeNameWithKey(const FSafeName &SN, const FString &Key);
	//
	/** Callable:: Sets, and hides in memory, raw value for 'Safe Name Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Name (Raw Value)", Keywords="Security Get Safe Name"))
	static FName SCL_Callable_SetRawSafeName(UPARAM(Ref)FSafeName &SN, const FString &Value);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe Name Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Name", Keywords="Security Get Safe Name"))
	static FName SCL_Callable_SetSafeName(UPARAM(Ref)FSafeName &SN, const FName &Value);
	//
	/**	Callable:: Sets, and hides in memory, value for 'Safe Name Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Name", Keywords="Security Get Safe Name"))
	static FName SCL_Callable_SetSafeNameWithKey(UPARAM(Ref) FSafeName &SN, const FString &Key, const FName &Value);
	//
	//
	/** Callable:: Gets raw value from 'Safe String Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe String (Raw Value)", Keywords="Security Get Safe String"))
	static FString SCL_Callable_GetRawSafeString(const FSafeString &SS);
	//
	/** Callable:: Gets hidden value from 'Safe String Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe String", Keywords="Security Get Safe String"))
	static FString SCL_Callable_GetSafeString(const FSafeString &SS);
	//
	/**	Callable:: Gets hidden value from 'Safe String Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe String", Keywords="Security Get Safe String"))
	static FString SCL_Callable_GetSafeStringWithKey(const FSafeString &SS, const FString &Key);
	//
	/** Callable:: Sets, and hides in memory, raw value for 'Safe String Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe String (Raw Value)", Keywords="Security Get Safe String"))
	static FString SCL_Callable_SetRawSafeString(UPARAM(Ref)FSafeString &SS, const FString &Value);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe String Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe String", Keywords="Security Get Safe String"))
	static FString SCL_Callable_SetSafeString(UPARAM(Ref)FSafeString &SS, const FString &Value);
	//
	/**	Callable:: Sets, and hides in memory, value for 'Safe String Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe String", Keywords="Security Get Safe String"))
	static FString SCL_Callable_SetSafeStringWithKey(UPARAM(Ref)FSafeString &SS, const FString &Key, const FString &Value);
	//
	//
	/** Callable:: Gets raw value from 'Safe Text Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Text (Raw Value)", Keywords="Security Get Safe Text"))
	static FString SCL_Callable_GetRawSafeText(const FSafeText &ST);
	//
	/** Callable:: Gets hidden value from 'Safe Text Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Text", Keywords="Security Get Safe Text"))
	static FText SCL_Callable_GetSafeText(const FSafeText &ST);
	//
	/**	Callable:: Gets hidden value from 'Safe Text Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Text", Keywords="Security Get Safe Text"))
	static FText SCL_Callable_GetSafeTextWithKey(const FSafeText &ST, const FString &Key);
	//
	/** Callable:: Sets, and hides in memory, raw value for 'Safe Text Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Text (Raw Value)", Keywords="Security Get Safe Text"))
	static FText SCL_Callable_SetRawSafeText(UPARAM(Ref)FSafeText &ST, const FString &Value);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe Text Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Text", Keywords="Security Get Safe Text"))
	static FText SCL_Callable_SetSafeText(UPARAM(Ref)FSafeText &ST, const FText &Value);
	//
	/**	Callable:: Sets, and hides in memory, value for 'Safe Text Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Text", Keywords="Security Get Safe Text"))
	static FText SCL_Callable_SetSafeTextWithKey(UPARAM(Ref)FSafeText &ST, const FString &Key, const FText &Value);
	//
	//
	/** Callable:: Gets hidden value from 'Safe Vector2D Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Vector2D", Keywords="Security Get Safe Vector2D"))
	static FVector2D SCL_Callable_GetSafeVector2D(const FSafeVector2D &SV);
	//
	/**	Callable:: Gets hidden value from 'Safe Vector2D Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Vector2D", Keywords="Security Get Safe Vector2D"))
	static FVector2D SCL_Callable_GetSafeVector2DWithKey(const FSafeVector2D &SV, const FString &Key);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe Vector2D Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Vector2D", Keywords="Security Get Safe Vector2D"))
	static FVector2D SCL_Callable_SetSafeVector2D(UPARAM(Ref)FSafeVector2D &SV, const FVector2D &Value);
	//
	/**	Callable:: Sets, and hides in memory, value for 'Safe Vector2D Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Vector2D", Keywords="Security Get Safe Vector2D"))
	static FVector2D SCL_Callable_SetSafeVector2DWithKey(UPARAM(Ref)FSafeVector2D &SV, const FString &Key, const FVector2D &Value);
	//
	//
	/** Callable:: Gets hidden value from 'Safe Vector3D Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Vector3D", Keywords="Security Get Safe Vector3D"))
	static FVector SCL_Callable_GetSafeVector3D(const FSafeVector3D &SV);
	//
	/**	Callable:: Gets hidden value from 'Safe Vector3D Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Vector3D", Keywords="Security Get Safe Vector3D"))
	static FVector SCL_Callable_GetSafeVector3DWithKey(const FSafeVector3D &SV, const FString &Key);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe Vector3D Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Vector3D", Keywords="Security Get Safe Vector3D"))
	static FVector SCL_Callable_SetSafeVector3D(UPARAM(Ref)FSafeVector3D &SV, const FVector &Value);
	//
	/**	Callable:: Sets, and hides in memory, value for 'Safe Vector3D Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Vector3D", Keywords="Security Get Safe Vector3D"))
	static FVector SCL_Callable_SetSafeVector3DWithKey(UPARAM(Ref)FSafeVector3D &SV, const FString &Key, const FVector &Value);
	//
	//
	/** Callable:: Gets hidden value from 'Safe Rotator Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Rotator", Keywords="Security Get Safe Rotator"))
	static FRotator SCL_Callable_GetSafeRotator(const FSafeRotator &SR);
	//
	/**	Callable:: Gets hidden value from 'Safe Vector4D Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Rotator", Keywords="Security Get Safe Rotator"))
	static FRotator SCL_Callable_GetSafeRotatorWithKey(const FSafeRotator &SR, const FString &Key);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe Rotator Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Rotator", Keywords="Security Get Safe Rotator"))
	static FRotator SCL_Callable_SetSafeRotator(UPARAM(Ref)FSafeRotator &SR, const FRotator &Value);
	//
	/**	Callable:: Sets, and hides in memory, value for 'Safe Rotator Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Rotator", Keywords="Security Get Safe Rotator"))
	static FRotator SCL_Callable_SetSafeRotatorWithKey(UPARAM(Ref)FSafeRotator &SR, const FString &Key, const FRotator &Value);
	//
	//
	/** Callable:: Gets hidden value from 'Safe Color Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Color", Keywords="Security Get Safe Color"))
	static FLinearColor SCL_Callable_GetSafeColor(const FSafeColor &SC);
	//
	/**	Callable:: Gets hidden value from 'Safe Color Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Color", Keywords="Security Get Safe Color"))
	static FLinearColor SCL_Callable_GetSafeColorWithKey(const FSafeColor &SC, const FString &Key);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe Color Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Color", Keywords="Security Get Safe Color"))
	static FLinearColor SCL_Callable_SetSafeColor(UPARAM(Ref)FSafeColor &SC, const FLinearColor &Value);
	//
	/**	Callable:: Sets, and hides in memory, value for 'Safe Color Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Color", Keywords="Security Get Safe Color"))
	static FLinearColor SCL_Callable_SetSafeColorWithKey(UPARAM(Ref)FSafeColor &SC, const FString &Key, const FLinearColor &Value);
	//
	//
	/** Callable:: Gets hidden value from 'Safe Transform Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Transform", Keywords="Security Get Safe Transform"))
	static FTransform SCL_Callable_GetSafeTransform(const FSafeTransform &ST);
	//
	/** Callable:: Gets hidden value from 'Safe Transform Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Get Safe Transform", Keywords="Security Get Safe Transform"))
	static FTransform SCL_Callable_GetSafeTransformWithKey(const FSafeTransform &ST, const FString &Key);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe Transform Struct'. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Transform", Keywords="Security Get Safe Transform"))
	static FTransform SCL_Callable_SetSafeTransform(UPARAM(Ref)FSafeTransform &ST, const FTransform &Value);
	//
	/** Callable:: Sets, and hides in memory, value for 'Safe Transform Struct'.
	Custom Key Required: If have custom encryption Key, attach to Key input value. */
	UFUNCTION(BlueprintCallable, Category="Security", meta = (DisplayName="Set Safe Transform", Keywords="Security Get Safe Transform"))
	static FTransform SCL_Callable_SetSafeTransformWithKey(UPARAM(Ref)FSafeTransform &ST, const FString &Key, const FTransform &Value);
	//
	//
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//
	//
	/** Set:: Safe Bool = Safe Bool */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Safe Bool)", CompactNodeTitle="=", Keywords="Security Set Safe Bool EQUAL ="))
	static FSafeBool SCO_Pure_SetSafeBoolEqualFSB(UPARAM(Ref)FSafeBool &FSB, const FSafeBool &SSB, bool &Output);
	//
	/** Get:: Safe Bool == Safe Bool */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Safe Bool)", CompactNodeTitle="==", Keywords="Security Get Safe Bool EQUAL =="))
	static FSafeBool SCO_Pure_GetSafeBoolEqualFSB(const FSafeBool &FSB, const FSafeBool &SSB, bool &Output);
	//
	/** Get:: Safe Bool != Safe Bool */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Safe Bool)", CompactNodeTitle="!=", Keywords="Security Get Safe Bool NOT !="))
	static FSafeBool SCO_Pure_GetSafeBoolNotEqualFSB(const FSafeBool &FSB, const FSafeBool &SSB, bool &Output);
	//
	/** Get:: Safe Bool && Safe Bool */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="&& (Safe Bool)", CompactNodeTitle="&&", Keywords="Security Get Safe Bool AND &&"))
	static FSafeBool SCO_Pure_GetSafeBoolAndFSB(const FSafeBool &FSB, const FSafeBool &SSB, bool &Output);
	//
	/** Get:: Safe Bool || Safe Bool */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="|| (Safe Bool)", CompactNodeTitle="||", Keywords="Security Get Safe Bool OR ||"))
	static FSafeBool SCO_Pure_GetSafeBoolOrFSB(const FSafeBool &FSB, const FSafeBool &SSB, bool &Output);
	//
	//
	/** Set:: Safe Bool = Bool */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Bool)", CompactNodeTitle="=", Keywords="Security Set Safe Bool EQUAL ="))
	static FSafeBool SCO_Pure_SetSafeBoolEqualBool(UPARAM(Ref)FSafeBool &FSB, const bool &NB, bool &Output);
	//
	/** Get:: Safe Bool == Bool */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Bool)", CompactNodeTitle="==", Keywords="Security Get Safe Bool EQUAL =="))
	static FSafeBool SCO_Pure_GetSafeBoolEqualBool(const FSafeBool &FSB, const bool &NB, bool &Output);
	//
	/** Get:: Safe Bool != Bool */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Bool)", CompactNodeTitle="!=", Keywords="Security Get Safe Bool NOT !="))
	static FSafeBool SCO_Pure_GetSafeBoolNotEqualBool(const FSafeBool &FSB, const bool &NB, bool &Output);
	//
	/** Get:: Safe Bool && Bool */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="&& (Bool)", CompactNodeTitle="&&", Keywords="Security Get Safe Bool AND &&"))
	static FSafeBool SCO_Pure_GetSafeBoolAndBool(const FSafeBool &FSB, const bool &NB, bool &Output);
	//
	/** Get:: Safe Bool || Bool */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="|| (Bool)", CompactNodeTitle="||", Keywords="Security Get Safe Bool OR ||"))
	static FSafeBool SCO_Pure_GetSafeBoolOrBool(const FSafeBool &FSB, const bool &NB, bool &Output);
	//
	//
	/** Set:: Bool = Safe Bool */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Safe Bool)", CompactNodeTitle="=", Keywords="Security Set Safe Bool EQUAL ="))
	static bool SCO_Pure_SetBoolEqualFSB(UPARAM(Ref)bool &NB, const FSafeBool &FSB);
	//
	/** Get:: Bool == Safe Bool */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Safe Bool)", CompactNodeTitle="==", Keywords="Security Get Safe Bool EQUAL =="))
	static bool SCO_Pure_GetBoolEqualFSB(const bool &NB, const FSafeBool &FSB);
	//
	/** Get:: Bool != Safe Bool */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Safe Bool)", CompactNodeTitle="!=", Keywords="Security Get Safe Bool NOT !="))
	static bool SCO_Pure_GetBoolNotEqualFSB(const bool &NB, const FSafeBool &FSB);
	//
	/** Get:: Bool && Safe Bool */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="&& (Safe Bool)", CompactNodeTitle="&&", Keywords="Security Get Safe Bool AND &&"))
	static bool SCO_Pure_GetBoolAndFSB(const bool &NB, const FSafeBool &FSB);
	//
	/** Get:: Bool || Safe Bool */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="|| (Safe Bool)", CompactNodeTitle="||", Keywords="Security Get Safe Bool OR ||"))
	static bool SCO_Pure_GetBoolOrFSB(const bool &NB, const FSafeBool &FSB);
	//
	//
	/** Get:: Safe Byte == Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Safe Byte)", CompactNodeTitle="==", Keywords="Security Get Safe Byte EQUAL =="))
	static bool SCO_Pure_GetSafeByteEqualFSB(const FSafeByte &FSB, const FSafeByte &SSB);
	//
	/** Get:: Safe Byte != Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Safe Byte)", CompactNodeTitle="!=", Keywords="Security Get Safe Byte NOT !="))
	static bool SCO_Pure_GetSafeByteNotEqualFSB(const FSafeByte &FSB, const FSafeByte &SSB);
	//
	/** Get:: Safe Byte > Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Safe Byte)", CompactNodeTitle=">", Keywords="Security Get Safe Byte GREATER >"))
	static bool SCO_Pure_GetSafeByteGreaterFSB(const FSafeByte &FSB, const FSafeByte &SSB);
	//
	/** Get:: Safe Byte < Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Safe Byte)", CompactNodeTitle="<", Keywords="Security Get Safe Byte LESS <"))
	static bool SCO_Pure_GetSafeByteSmallerFSB(const FSafeByte &FSB, const FSafeByte &SSB);
	//
	/** Get:: Safe Byte >= Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName=">= (Safe Byte)", CompactNodeTitle=">=", Keywords="Security Get Safe Byte GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeByteGreaterEqualFSB(const FSafeByte &FSB, const FSafeByte &SSB);
	//
	/** Get:: Safe Byte <= Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="<= (Safe Byte)", CompactNodeTitle="<=", Keywords="Security Get Safe Byte LESS EQUAL <="))
	static bool SCO_Pure_GetSafeByteSmallerEqualFSB(const FSafeByte &FSB, const FSafeByte &SSB);
	//
	/** Set:: Safe Byte = Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Safe Byte)", CompactNodeTitle="=", Keywords="Security Set Safe Byte EQUAL ="))
	static FSafeByte SCO_Pure_SetSafeByteEqualFSB(UPARAM(Ref)FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output);
	//
	/** Get:: Safe Byte + Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Safe Byte)", CompactNodeTitle="+", Keywords="Security Get Safe Byte PLUS +"))
	static FSafeByte SCO_Pure_GetSafeBytePlusFSB(const FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output);
	//
	/** Get:: Safe Byte - Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="- (Safe Byte)", CompactNodeTitle="-", Keywords="Security Get Safe Byte MINUS -"))
	static FSafeByte SCO_Pure_GetSafeByteMinusFSB(const FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output);
	//
	/** Get:: Safe Byte * Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="* (Safe Byte)", CompactNodeTitle="*", Keywords="Security Get Safe Byte TIMES *"))
	static FSafeByte SCO_Pure_GetSafeByteTimesFSB(const FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output);
	//
	/** Get:: Safe Byte / Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="/ (Safe Byte)", CompactNodeTitle="/", Keywords="Security Get Safe Byte DIVIDE /"))
	static FSafeByte SCO_Pure_GetSafeByteDivideFSB(const FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output);
	//
	/** Get:: Safe Byte ++ */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="++ (Safe Byte)", CompactNodeTitle="++", Keywords="Security Get Safe Byte ADD PLUS ++"))
	static FSafeByte SCO_Pure_GetSafeByteIncreaseFSB(UPARAM(Ref)FSafeByte &FSB, uint8 &Output);
	//
	/** Get:: Safe Byte -- */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="-- (Safe Byte)", CompactNodeTitle="--", Keywords="Security Get Safe Byte LESS --"))
	static FSafeByte SCO_Pure_GetSafeByteDecreaseFSB(UPARAM(Ref)FSafeByte &FSB, uint8 &Output);
	//
	/** Get:: Safe Byte += Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Safe Byte)", CompactNodeTitle="+=", Keywords="Security Get Safe Byte PLUS EQUAL +="))
	static FSafeByte SCO_Pure_GetSafeBytePlusEqualFSB(UPARAM(Ref)FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output);
	//
	/** Get:: Safe Byte -= Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="-= (Safe Byte)", CompactNodeTitle="-=", Keywords="Security Get Safe Byte MINUS EQUAL -="))
	static FSafeByte SCO_Pure_GetSafeByteMinusEqualFSB(UPARAM(Ref)FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output);
	//
	/** Get:: Safe Byte ~ */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="~ (Safe Byte)", CompactNodeTitle="~", Keywords="Security Get Safe Byte NOT ~"))
	static FSafeByte SCO_Pure_GetSafeByteNotFSB(const FSafeByte &FSB, uint8 &Output);
	//
	/** Get:: Safe Byte % Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="% (Safe Byte)", CompactNodeTitle="%", Keywords="Security Get Safe Byte MOD %"))
	static FSafeByte SCO_Pure_GetSafeByteModFSB(const FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output);
	//
	/** Get:: Safe Byte & Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="& (Safe Byte)", CompactNodeTitle="&", Keywords="Security Get Safe Byte AND &"))
	static FSafeByte SCO_Pure_GetSafeByteAndFSB(const FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output);
	//
	/** Get:: Safe Byte | Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="| (Safe Byte)", CompactNodeTitle="|", Keywords="Security Get Safe Byte OR |"))
	static FSafeByte SCO_Pure_GetSafeByteOrFSB(const FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output);
	//
	/** Get:: Safe Byte ^ Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="^ (Safe Byte)", CompactNodeTitle="^", Keywords="Security Get Safe Byte XOR ^"))
	static FSafeByte SCO_Pure_GetSafeByteXorFSB(const FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output);
	//
	/** Get:: Safe Byte >> Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName=">> (Safe Byte)", CompactNodeTitle=">>", Keywords="Security Get Safe Byte SHIFT >>"))
	static FSafeByte SCO_Pure_GetSafeByteShiftRFSB(const FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output);
	//
	/** Get:: Safe Byte << Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="<< (Safe Byte)", CompactNodeTitle="<<", Keywords="Security Get Safe Byte SHIFT <<"))
	static FSafeByte SCO_Pure_GetSafeByteShiftLFSB(const FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output);
	//
	//
	/** Get:: Safe Byte == Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Byte)", CompactNodeTitle="==", Keywords="Security Get Safe Byte EQUAL =="))
	static bool SCO_Pure_GetSafeByteEqualByte(const FSafeByte &FSB, const uint8 &NB);
	//
	/** Get:: Safe Byte != Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Byte)", CompactNodeTitle="!=", Keywords="Security Get Safe Byte NOT !="))
	static bool SCO_Pure_GetSafeByteNotEqualByte(const FSafeByte &FSB, const uint8 &NB);
	//
	/** Get:: Safe Byte > Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Byte)", CompactNodeTitle=">", Keywords="Security Get Safe Byte GREATER >"))
	static bool SCO_Pure_GetSafeByteGreaterByte(const FSafeByte &FSB, const uint8 &NB);
	//
	/** Get:: Safe Byte < Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Byte)", CompactNodeTitle="<", Keywords="Security Get Safe Byte LESS <"))
	static bool SCO_Pure_GetSafeByteSmallerByte(const FSafeByte &FSB, const uint8 &NB);
	//
	/** Get:: Safe Byte >= Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName=">= (Byte)", CompactNodeTitle=">=", Keywords="Security Get Safe Byte GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeByteGreaterEqualByte(const FSafeByte &FSB, const uint8 &NB);
	//
	/** Get:: Safe Byte <= Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="<= (Byte)", CompactNodeTitle="<=", Keywords="Security Get Safe Byte LESS EQUAL <="))
	static bool SCO_Pure_GetSafeByteSmallerEqualByte(const FSafeByte &FSB, const uint8 &NB);
	//
	/** Set:: Safe Byte = Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Byte)", CompactNodeTitle="=", Keywords="Security Set Safe Byte EQUAL ="))
	static FSafeByte SCO_Pure_SetSafeByteEqualByte(UPARAM(Ref)FSafeByte &FSB, const uint8 &NB, uint8 &Output);
	//
	/** Get:: Safe Byte + Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Byte)", CompactNodeTitle="+", Keywords="Security Get Safe Byte PLUS +"))
	static FSafeByte SCO_Pure_GetSafeBytePlusByte(const FSafeByte &FSB, const uint8 &NB, uint8 &Output);
	//
	/** Get:: Safe Byte - Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="- (Byte)", CompactNodeTitle="-", Keywords="Security Get Safe Byte MINUS -"))
	static FSafeByte SCO_Pure_GetSafeByteMinusByte(const FSafeByte &FSB, const uint8 &NB, uint8 &Output);
	//
	/** Get:: Safe Byte * Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="* (Byte)", CompactNodeTitle="*", Keywords="Security Get Safe Byte TIMES *"))
	static FSafeByte SCO_Pure_GetSafeByteTimesByte(const FSafeByte &FSB, const uint8 &NB, uint8 &Output);
	//
	/** Get:: Safe Byte / Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="/ (Byte)", CompactNodeTitle="/", Keywords="Security Get Safe Byte DIVIDE /"))
	static FSafeByte SCO_Pure_GetSafeByteDivideByte(const FSafeByte &FSB, const uint8 &NB, uint8 &Output);
	//
	/** Get:: Safe Byte += Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Byte)", CompactNodeTitle="+=", Keywords="Security Get Safe Byte PLUS EQUAL +="))
	static FSafeByte SCO_Pure_GetSafeBytePlusEqualByte(UPARAM(Ref)FSafeByte &FSB, const uint8 &NB, uint8 &Output);
	//
	/** Get:: Safe Byte -= Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="-= (Byte)", CompactNodeTitle="-=", Keywords="Security Get Safe Byte MINUS EQUAL -="))
	static FSafeByte SCO_Pure_GetSafeByteMinusEqualByte(UPARAM(Ref)FSafeByte &FSB, const uint8 &NB, uint8 &Output);
	//
	/** Get:: Safe Byte ~ */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="~ (Safe Byte)", CompactNodeTitle="~", Keywords="Security Get Safe Byte NOT ~"))
	static FSafeByte SCO_Pure_GetSafeByteNotByte(const uint8 &NB, uint8 &Output);
	//
	/** Get:: Safe Byte % Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="% (Byte)", CompactNodeTitle="%", Keywords="Security Get Safe Byte MOD %"))
	static FSafeByte SCO_Pure_GetSafeByteModByte(const FSafeByte &FSB, const uint8 &NB, uint8 &Output);
	//
	/** Get:: Safe Byte & Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="& (Byte)", CompactNodeTitle="&", Keywords="Security Get Safe Byte AND &"))
	static FSafeByte SCO_Pure_GetSafeByteAndByte(const FSafeByte &FSB, const uint8 &NB, uint8 &Output);
	//
	/** Get:: Safe Byte | Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="| (Byte)", CompactNodeTitle="|", Keywords="Security Get Safe Byte OR |"))
	static FSafeByte SCO_Pure_GetSafeByteOrByte(const FSafeByte &FSB, const uint8 &NB, uint8 &Output);
	//
	/** Get:: Safe Byte ^ Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="^ (Byte)", CompactNodeTitle="^", Keywords="Security Get Safe Byte XOR ^"))
	static FSafeByte SCO_Pure_GetSafeByteXorByte(const FSafeByte &FSB, const uint8 &NB, uint8 &Output);
	//
	/** Get:: Safe Byte >> Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName=">> (Byte)", CompactNodeTitle=">>", Keywords="Security Get Safe Byte SHIFT >>"))
	static FSafeByte SCO_Pure_GetSafeByteShiftRByte(const FSafeByte &FSB, const uint8 &NB, uint8 &Output);
	//
	/** Get:: Safe Byte << Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="<< (Byte)", CompactNodeTitle="<<", Keywords="Security Get Safe Byte SHIFT <<"))
	static FSafeByte SCO_Pure_GetSafeByteShiftLByte(const FSafeByte &FSB, const uint8 &NB, uint8 &Output);
	//
	//
	/** Get:: Byte == Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Safe Byte)", CompactNodeTitle="==", Keywords="Security Get Safe Byte EQUAL =="))
	static bool SCO_Pure_GetByteEqualFSB(const uint8 &NB, const FSafeByte &FSB);
	//
	/** Get:: Byte != Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Safe Byte)", CompactNodeTitle="!=", Keywords="Security Get Safe Byte NOT !="))
	static bool SCO_Pure_GetByteNotEqualFSB(const uint8 &NB, const FSafeByte &FSB);
	//
	/** Get:: Byte > Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Safe Byte)", CompactNodeTitle=">", Keywords="Security Get Safe Byte GREATER >"))
	static bool SCO_Pure_GetByteGreaterFSB(const uint8 &NB, const FSafeByte &FSB);
	//
	/** Get:: Byte < Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Safe Byte)", CompactNodeTitle="<", Keywords="Security Get Safe Byte LESS <"))
	static bool SCO_Pure_GetByteSmallerFSB(const uint8 &NB, const FSafeByte &FSB);
	//
	/** Get:: Byte >= Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName=">= (Safe Byte)", CompactNodeTitle=">=", Keywords="Security Get Safe Byte GREATER EQUAL >="))
	static bool SCO_Pure_GetByteGreaterEqualFSB(const uint8 &NB, const FSafeByte &FSB);
	//
	/** Get:: Byte <= Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="<= (Safe Byte)", CompactNodeTitle="<=", Keywords="Security Get Safe Byte LESS EQUAL <="))
	static bool SCO_Pure_GetByteSmallerEqualFSB(const uint8 &NB, const FSafeByte &FSB);
	//
	/** Set:: Byte = Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Safe Byte)", CompactNodeTitle="=", Keywords="Security Set Safe Byte EQUAL ="))
	static uint8 SCO_Pure_SetByteEqualFSB(UPARAM(Ref)uint8 &NB, const FSafeByte &FSB);
	//
	/** Get:: Byte + Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Safe Byte)", CompactNodeTitle="+", Keywords="Security Get Safe Byte PLUS +"))
	static uint8 SCO_Pure_GetBytePlusFSB(const uint8 &NB, const FSafeByte &FSB);
	//
	/** Get:: Byte - Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="- (Safe Byte)", CompactNodeTitle="-", Keywords="Security Get Safe Byte MINUS -"))
	static uint8 SCO_Pure_GetByteMinusFSB(const uint8 &NB, const FSafeByte &FSB);
	//
	/** Get:: Byte * Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="* (Safe Byte)", CompactNodeTitle="*", Keywords="Security Get Safe Byte TIMES *"))
	static uint8 SCO_Pure_GetByteTimesFSB(const uint8 &NB, const FSafeByte &FSB);
	//
	/** Get:: Byte / Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="/ (Safe Byte)", CompactNodeTitle="/", Keywords="Security Get Safe Byte DIVIDE /"))
	static uint8 SCO_Pure_GetByteDivideFSB(const uint8 &NB, const FSafeByte &FSB);
	//
	/** Get:: Byte += Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Safe Byte)", CompactNodeTitle="+=", Keywords="Security Get Safe Byte PLUS EQUAL +="))
	static uint8 SCO_Pure_GetBytePlusEqualFSB(UPARAM(Ref)uint8 &NB, const FSafeByte &FSB);
	//
	/** Get:: Byte -= Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="-= (Safe Byte)", CompactNodeTitle="-=", Keywords="Security Get Safe Byte MINUS EQUAL -="))
	static uint8 SCO_Pure_GetByteMinusEqualFSB(UPARAM(Ref)uint8 &NB, const FSafeByte &FSB);
	//
	/** Get:: Byte % Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="% (Safe Byte)", CompactNodeTitle="%", Keywords="Security Get Safe Byte MOD %"))
	static uint8 SCO_Pure_GetByteModFSB(const uint8 &NB, const FSafeByte &FSB);
	//
	/** Get:: Byte & Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="& (Safe Byte)", CompactNodeTitle="&", Keywords="Security Get Safe Byte AND &"))
	static uint8 SCO_Pure_GetByteAndFSB(const uint8 &NB, const FSafeByte &FSB);
	//
	/** Get:: Byte | Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="| (Safe Byte)", CompactNodeTitle="|", Keywords="Security Get Safe Byte OR |"))
	static uint8 SCO_Pure_GetByteOrFSB(const uint8 &NB, const FSafeByte &FSB);
	//
	/** Get:: Byte ^ Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="^ (Safe Byte)", CompactNodeTitle="^", Keywords="Security Get Safe Byte XOR ^"))
	static uint8 SCO_Pure_GetByteXorFSB(const uint8 &NB, const FSafeByte &FSB);
	//
	/** Get:: Byte >> Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName=">> (Safe Byte)", CompactNodeTitle=">>", Keywords="Security Get Safe Byte SHIFT >>"))
	static uint8 SCO_Pure_GetByteShiftRFSB(const uint8 &NB, const FSafeByte &FSB);
	//
	/** Get:: Byte << Safe Byte */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="<< (Safe Byte)", CompactNodeTitle="<<", Keywords="Security Get Safe Byte SHIFT <<"))
	static uint8 SCO_Pure_GetByteShiftLFSB(const uint8 &NB, const FSafeByte &FSB);
	//
	//
	/** Get:: Safe Integer == Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Safe Integer)", CompactNodeTitle="==", Keywords="Security Get Safe Integer EQUAL =="))
	static bool SCO_Pure_GetSafeIntEqualFSI(const FSafeInt &FSI, const FSafeInt &SSI);
	//
	/** Get:: Safe Integer != Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Safe Integer)", CompactNodeTitle="!=", Keywords="Security Get Safe Integer NOT !="))
	static bool SCO_Pure_GetSafeIntNotEqualFSI(const FSafeInt &FSI, const FSafeInt &SSI);
	//
	/** Get:: Safe Integer > Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Safe Integer)", CompactNodeTitle=">", Keywords="Security Get Safe Integer GREATER >"))
	static bool SCO_Pure_GetSafeIntGreaterFSI(const FSafeInt &FSI, const FSafeInt &SSI);
	//
	/** Get:: Safe Integer < Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Safe Integer)", CompactNodeTitle="<", Keywords="Security Get Safe Integer LESS <"))
	static bool SCO_Pure_GetSafeIntSmallerFSI(const FSafeInt &FSI, const FSafeInt &SSI);
	//
	/** Get:: Safe Integer >= Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName=">= (Safe Integer)", CompactNodeTitle=">=", Keywords="Security Get Safe Integer GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeIntGreaterEqualFSI(const FSafeInt &FSI, const FSafeInt &SSI);
	//
	/** Get:: Safe Integer <= Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="<= (Safe Integer)", CompactNodeTitle="<=", Keywords="Security Get Safe Integer LESS EQUAL <="))
	static bool SCO_Pure_GetSafeIntSmallerEqualFSI(const FSafeInt &FSI, const FSafeInt &SSI);
	//
	/** Set:: Safe Integer = Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Safe Integer)", CompactNodeTitle="=", Keywords="Security Set Safe Integer EQUAL ="))
	static FSafeInt SCO_Pure_SetSafeIntEqualFSI(UPARAM(Ref)FSafeInt &FSI, const FSafeInt &SSI, int32 &Output);
	//
	/** Get:: Safe Integer + Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Safe Integer)", CompactNodeTitle="+", Keywords="Security Get Safe Integer PLUS +"))
	static FSafeInt SCO_Pure_GetSafeIntPlusFSI(const FSafeInt &FSI, const FSafeInt &SSI, int32 &Output);
	//
	/** Get:: Safe Integer - Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="- (Safe Integer)", CompactNodeTitle="-", Keywords="Security Get Safe Integer MINUS -"))
	static FSafeInt SCO_Pure_GetSafeIntMinusFSI(const FSafeInt &FSI, const FSafeInt &SSI, int32 &Output);
	//
	/** Get:: Safe Integer * Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="* (Safe Integer)", CompactNodeTitle="*", Keywords="Security Get Safe Integer TIMES *"))
	static FSafeInt SCO_Pure_GetSafeIntTimesFSI(const FSafeInt &FSI, const FSafeInt &SSI, int32 &Output);
	//
	/** Get:: Safe Integer / Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="/ (Safe Integer)", CompactNodeTitle="/", Keywords="Security Get Safe Integer DIVIDE /"))
	static FSafeInt SCO_Pure_GetSafeIntDivideFSI(const FSafeInt &FSI, const FSafeInt &SSI, int32 &Output);
	//
	/** Get:: Safe Integer ++ */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="++ (Safe Integer)", CompactNodeTitle="++", Keywords="Security Get Safe Integer ADD PLUS ++"))
	static FSafeInt SCO_Pure_GetSafeIntIncreaseFSI(UPARAM(Ref)FSafeInt &FSI, int32 &Output);
	//
	/** Get:: Safe Integer -- */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="-- (Safe Integer)", CompactNodeTitle="--", Keywords="Security Get Safe Integer LESS --"))
	static FSafeInt SCO_Pure_GetSafeIntDecreaseFSI(UPARAM(Ref)FSafeInt &FSI, int32 &Output);
	//
	/** Get:: Safe Integer += Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Safe Integer)", CompactNodeTitle="+=", Keywords="Security Get Safe Integer PLUS EQUAL +="))
	static FSafeInt SCO_Pure_GetSafeIntPlusEqualFSI(UPARAM(Ref)FSafeInt &FSI, const FSafeInt &SSI, int32 &Output);
	//
	/** Get:: Safe Integer -= Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="-= (Safe Integer)", CompactNodeTitle="-=", Keywords="Security Get Safe Integer MINUS EQUAL -="))
	static FSafeInt SCO_Pure_GetSafeIntMinusEqualFSI(UPARAM(Ref)FSafeInt &FSI, const FSafeInt &SSI, int32 &Output);
	//
	/** Get:: Safe Integer ~ */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="~ (Safe Integer)", CompactNodeTitle="~", Keywords="Security Get Safe Integer NOT ~"))
	static FSafeInt SCO_Pure_GetSafeIntNotFSI(const FSafeInt &FSI, int32 &Output);
	//
	/** Get:: Safe Integer % Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="% (Safe Integer)", CompactNodeTitle="%", Keywords="Security Get Safe Integer MOD %"))
	static FSafeInt SCO_Pure_GetSafeIntModFSI(const FSafeInt &FSI, const FSafeInt &SSI, int32 &Output);
	//
	/** Get:: Safe Integer & Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="& (Safe Integer)", CompactNodeTitle="&", Keywords="Security Get Safe Integer AND &"))
	static FSafeInt SCO_Pure_GetSafeIntAndFSI(const FSafeInt &FSI, const FSafeInt &SSI, int32 &Output);
	//
	/** Get:: Safe Integer | Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="| (Safe Integer)", CompactNodeTitle="|", Keywords="Security Get Safe Integer OR |"))
	static FSafeInt SCO_Pure_GetSafeIntOrFSI(const FSafeInt &FSI, const FSafeInt &SSI, int32 &Output);
	//
	/** Get:: Safe Integer ^ Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="^ (Safe Integer)", CompactNodeTitle="^", Keywords="Security Get Safe Integer XOR ^"))
	static FSafeInt SCO_Pure_GetSafeIntXorFSI(const FSafeInt &FSI, const FSafeInt &SSI, int32 &Output);
	//
	/** Get:: Safe Integer >> Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName=">> (Safe Integer)", CompactNodeTitle=">>", Keywords="Security Get Safe Integer SHIFT >>"))
	static FSafeInt SCO_Pure_GetSafeIntShiftRFSI(const FSafeInt &FSI, const FSafeInt &SSI, int32 &Output);
	//
	/** Get:: Safe Integer << Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="<< (Safe Integer)", CompactNodeTitle="<<", Keywords="Security Get Safe Integer SHIFT <<"))
	static FSafeInt SCO_Pure_GetSafeIntShiftLFSI(const FSafeInt &FSI, const FSafeInt &SSI, int32 &Output);
	//
	//
	/** Get:: Safe Integer == Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Integer)", CompactNodeTitle="==", Keywords="Security Get Safe Integer EQUAL =="))
	static bool SCO_Pure_GetSafeIntEqualInt(const FSafeInt &FSI, const int32 &NI);
	//
	/** Get:: Safe Integer != Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Integer)", CompactNodeTitle="!=", Keywords="Security Get Safe Integer NOT !="))
	static bool SCO_Pure_GetSafeIntNotEqualInt(const FSafeInt &FSI, const int32 &NI);
	//
	/** Get:: Safe Integer > Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Integer)", CompactNodeTitle=">", Keywords="Security Get Safe Integer GREATER >"))
	static bool SCO_Pure_GetSafeIntGreaterInt(const FSafeInt &FSI, const int32 &NI);
	//
	/** Get:: Safe Integer < Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Integer)", CompactNodeTitle="<", Keywords="Security Get Safe Integer LESS <"))
	static bool SCO_Pure_GetSafeIntSmallerInt(const FSafeInt &FSI, const int32 &NI);
	//
	/** Get:: Safe Integer >= Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName=">= (Integer)", CompactNodeTitle=">=", Keywords="Security Get Safe Integer GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeIntGreaterEqualInt(const FSafeInt &FSI, const int32 &NI);
	//
	/** Get:: Safe Integer <= Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="<= (Integer)", CompactNodeTitle="<=", Keywords="Security Get Safe Integer LESS EQUAL <="))
	static bool SCO_Pure_GetSafeIntSmallerEqualInt(const FSafeInt &FSI, const int32 &NI);
	//
	/** Set:: Safe Integer = Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Integer)", CompactNodeTitle="=", Keywords="Security Set Safe Integer EQUAL ="))
	static FSafeInt SCO_Pure_SetSafeIntEqualInt(UPARAM(Ref)FSafeInt &FSI, const int32 &NI, int32 &Output);
	//
	/** Get:: Safe Integer + Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Integer)", CompactNodeTitle="+", Keywords="Security Get Safe Integer PLUS +"))
	static FSafeInt SCO_Pure_GetSafeIntPlusInt(const FSafeInt &FSI, const int32 &NI, int32 &Output);
	//
	/** Get:: Safe Integer - Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="- (Integer)", CompactNodeTitle="-", Keywords="Security Get Safe Integer MINUS -"))
	static FSafeInt SCO_Pure_GetSafeIntMinusInt(const FSafeInt &FSI, const int32 &NI, int32 &Output);
	//
	/** Get:: Safe Integer * Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="* (Integer)", CompactNodeTitle="*", Keywords="Security Get Safe Integer TIMES *"))
	static FSafeInt SCO_Pure_GetSafeIntTimesInt(const FSafeInt &FSI, const int32 &NI, int32 &Output);
	//
	/** Get:: Safe Integer / Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="/ (Integer)", CompactNodeTitle="/", Keywords="Security Get Safe Integer DIVIDE /"))
	static FSafeInt SCO_Pure_GetSafeIntDivideInt(const FSafeInt &FSI, const int32 &NI, int32 &Output);
	//
	/** Get:: Safe Integer += Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Integer)", CompactNodeTitle="+=", Keywords="Security Get Safe Integer PLUS EQUAL +="))
	static FSafeInt SCO_Pure_GetSafeIntPlusEqualInt(UPARAM(Ref)FSafeInt &FSI, const int32 &NI, int32 &Output);
	//
	/** Get:: Safe Integer -= Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="-= (Integer)", CompactNodeTitle="-=", Keywords="Security Get Safe Integer MINUS EQUAL -="))
	static FSafeInt SCO_Pure_GetSafeIntMinusEqualInt(UPARAM(Ref)FSafeInt &FSI, const int32 &NI, int32 &Output);
	//
	/** Get:: Safe Integer ~ */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="~ (Safe Integer)", CompactNodeTitle="~", Keywords="Security Get Safe Integer NOT ~"))
	static FSafeInt SCO_Pure_GetSafeIntNotInt(const int32 &NI, int32 &Output);
	//
	/** Get:: Safe Integer % Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="% (Integer)", CompactNodeTitle="%", Keywords="Security Get Safe Integer MOD %"))
	static FSafeInt SCO_Pure_GetSafeIntModInt(const FSafeInt &FSI, const int32 &NI, int32 &Output);
	//
	/** Get:: Safe Integer & Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="& (Integer)", CompactNodeTitle="&", Keywords="Security Get Safe Integer AND &"))
	static FSafeInt SCO_Pure_GetSafeIntAndInt(const FSafeInt &FSI, const int32 &NI, int32 &Output);
	//
	/** Get:: Safe Integer | Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="| (Integer)", CompactNodeTitle="|", Keywords="Security Get Safe Integer OR |"))
	static FSafeInt SCO_Pure_GetSafeIntOrInt(const FSafeInt &FSI, const int32 &NI, int32 &Output);
	//
	/** Get:: Safe Integer ^ Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="^ (Integer)", CompactNodeTitle="^", Keywords="Security Get Safe Integer XOR ^"))
	static FSafeInt SCO_Pure_GetSafeIntXorInt(const FSafeInt &FSI, const int32 &NI, int32 &Output);
	//
	/** Get:: Safe Integer >> Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName=">> (Integer)", CompactNodeTitle=">>", Keywords="Security Get Safe Integer SHIFT >>"))
	static FSafeInt SCO_Pure_GetSafeIntShiftRInt(const FSafeInt &FSI, const int32 &NI, int32 &Output);
	//
	/** Get:: Safe Integer << Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="<< (Integer)", CompactNodeTitle="<<", Keywords="Security Get Safe Integer SHIFT <<"))
	static FSafeInt SCO_Pure_GetSafeIntShiftLInt(const FSafeInt &FSI, const int32 &NI, int32 &Output);
	//
	//
	/** Get:: Integer == Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Safe Integer)", CompactNodeTitle="==", Keywords="Security Get Safe Integer EQUAL =="))
	static bool SCO_Pure_GetIntEqualFSI(const int32 &NI, const FSafeInt &FSI);
	//
	/** Get:: Integer != Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Safe Integer)", CompactNodeTitle="!=", Keywords="Security Get Safe Integer NOT !="))
	static bool SCO_Pure_GetIntNotEqualFSI(const int32 &NI, const FSafeInt &FSI);
	//
	/** Get:: Integer > Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Safe Integer)", CompactNodeTitle=">", Keywords="Security Get Safe Integer GREATER >"))
	static bool SCO_Pure_GetIntGreaterFSI(const int32 &NI, const FSafeInt &FSI);
	//
	/** Get:: Integer < Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Safe Integer)", CompactNodeTitle="<", Keywords="Security Get Safe Integer LESS <"))
	static bool SCO_Pure_GetIntSmallerFSI(const int32 &NI, const FSafeInt &FSI);
	//
	/** Get:: Integer >= Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName=">= (Safe Integer)", CompactNodeTitle=">=", Keywords="Security Get Safe Integer GREATER EQUAL >="))
	static bool SCO_Pure_GetIntGreaterEqualFSI(const int32 &NI, const FSafeInt &FSI);
	//
	/** Get:: Integer <= Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="<= (Safe Integer)", CompactNodeTitle="<=", Keywords="Security Get Safe Integer LESS EQUAL <="))
	static bool SCO_Pure_GetIntSmallerEqualFSI(const int32 &NI, const FSafeInt &FSI);
	//
	/** Set:: Integer = Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Safe Integer)", CompactNodeTitle="=", Keywords="Security Set Safe Integer EQUAL ="))
	static int32 SCO_Pure_SetIntEqualFSI(UPARAM(Ref)int32 &NI, const FSafeInt &FSI);
	//
	/** Get:: Integer + Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Safe Integer)", CompactNodeTitle="+", Keywords="Security Get Safe Integer PLUS +"))
	static int32 SCO_Pure_GetIntPlusFSI(const int32 &NI, const FSafeInt &FSI);
	//
	/** Get:: Integer - Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="- (Safe Integer)", CompactNodeTitle="-", Keywords="Security Get Safe Integer MINUS -"))
	static int32 SCO_Pure_GetIntMinusFSI(const int32 &NI, const FSafeInt &FSI);
	//
	/** Get:: Integer * Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="* (Safe Integer)", CompactNodeTitle="*", Keywords="Security Get Safe Integer TIMES *"))
	static int32 SCO_Pure_GetIntTimesFSI(const int32 &NI, const FSafeInt &FSI);
	//
	/** Get:: Integer / Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="/ (Safe Integer)", CompactNodeTitle="/", Keywords="Security Get Safe Integer DIVIDE /"))
	static int32 SCO_Pure_GetIntDivideFSI(const int32 &NI, const FSafeInt &FSI);
	//
	/** Get:: Integer += Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Safe Integer)", CompactNodeTitle="+=", Keywords="Security Get Safe Integer PLUS EQUAL +="))
	static int32 SCO_Pure_GetIntPlusEqualFSI(UPARAM(Ref)int32 &NI, const FSafeInt &FSI);
	//
	/** Get:: Integer -= Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="-= (Safe Integer)", CompactNodeTitle="-=", Keywords="Security Get Safe Integer MINUS EQUAL -="))
	static int32 SCO_Pure_GetIntMinusEqualFSI(UPARAM(Ref)int32 &NI, const FSafeInt &FSI);
	//
	/** Get:: Integer % Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="% (Safe Integer)", CompactNodeTitle="%", Keywords="Security Get Safe Integer MOD %"))
	static int32 SCO_Pure_GetIntModFSI(const int32 &NI, const FSafeInt &FSI);
	//
	/** Get:: Integer & Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="& (Safe Integer)", CompactNodeTitle="&", Keywords="Security Get Safe Integer AND &"))
	static int32 SCO_Pure_GetIntAndFSI(const int32 &NI, const FSafeInt &FSI);
	//
	/** Get:: Integer | Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="| (Safe Integer)", CompactNodeTitle="|", Keywords="Security Get Safe Integer OR |"))
	static int32 SCO_Pure_GetIntOrFSI(const int32 &NI, const FSafeInt &FSI);
	//
	/** Get:: Integer ^ Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="^ (Safe Integer)", CompactNodeTitle="^", Keywords="Security Get Safe Integer XOR ^"))
	static int32 SCO_Pure_GetIntXorFSI(const int32 &NI, const FSafeInt &FSI);
	//
	/** Get:: Integer >> Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName=">> (Safe Integer)", CompactNodeTitle=">>", Keywords="Security Get Safe Integer SHIFT >>"))
	static int32 SCO_Pure_GetIntShiftRFSI(const int32 &NI, const FSafeInt &FSI);
	//
	/** Get:: Integer << Safe Integer */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="<< (Safe Integer)", CompactNodeTitle="<<", Keywords="Security Get Safe Integer SHIFT <<"))
	static int32 SCO_Pure_GetIntShiftLFSI(const int32 &NI, const FSafeInt &FSI);
	//
	//
	/** Get:: Safe Float == Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Safe Float)", CompactNodeTitle="==", Keywords="Security Get Safe Float EQUAL =="))
	static bool SCO_Pure_GetSafeFloatEqualFSF(const FSafeFloat &FSF, const FSafeFloat &SSF);
	//
	/** Get:: Safe Float != Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Safe Float)", CompactNodeTitle="!=", Keywords="Security Get Safe Float NOT !="))
	static bool SCO_Pure_GetSafeFloatNotEqualFSF(const FSafeFloat &FSF, const FSafeFloat &SSF);
	//
	/** Get:: Safe Float > Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Safe Float)", CompactNodeTitle=">", Keywords="Security Get Safe Float GREATER >"))
	static bool SCO_Pure_GetSafeFloatGreaterFSF(const FSafeFloat &FSF, const FSafeFloat &SSF);
	//
	/** Get:: Safe Float < Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Safe Float)", CompactNodeTitle="<", Keywords="Security Get Safe Float LESS <"))
	static bool SCO_Pure_GetSafeFloatSmallerFSF(const FSafeFloat &FSF, const FSafeFloat &SSF);
	//
	/** Get:: Safe Float >= Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName=">= (Safe Float)", CompactNodeTitle=">=", Keywords="Security Get Safe Float GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeFloatGreaterEqualFSF(const FSafeFloat &FSF, const FSafeFloat &SSF);
	//
	/** Get:: Safe Float <= Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="<= (Safe Float)", CompactNodeTitle="<=", Keywords="Security Get Safe Float LESS EQUAL <="))
	static bool SCO_Pure_GetSafeFloatSmallerEqualFSF(const FSafeFloat &FSF, const FSafeFloat &SSF);
	//
	/** Set:: Safe Float = Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Safe Float)", CompactNodeTitle="=", Keywords="Security Set Safe Float EQUAL ="))
	static FSafeFloat SCO_Pure_SetSafeFloatEqualFSF(UPARAM(Ref)FSafeFloat &FSF, const FSafeFloat &SSF, float &Output);
	//
	/** Get:: Safe Float + Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Safe Float)", CompactNodeTitle="+", Keywords="Security Get Safe Float PLUS +"))
	static FSafeFloat SCO_Pure_GetSafeFloatPlusFSF(const FSafeFloat &FSF, const FSafeFloat &SSF, float &Output);
	//
	/** Get:: Safe Float - Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="- (Safe Float)", CompactNodeTitle="-", Keywords="Security Get Safe Float MINUS -"))
	static FSafeFloat SCO_Pure_GetSafeFloatMinusFSF(const FSafeFloat &FSF, const FSafeFloat &SSF, float &Output);
	//
	/** Get:: Safe Float * Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="* (Safe Float)", CompactNodeTitle="*", Keywords="Security Get Safe Float TIMES *"))
	static FSafeFloat SCO_Pure_GetSafeFloatTimesFSF(const FSafeFloat &FSF, const FSafeFloat &SSF, float &Output);
	//
	/** Get:: Safe Float / Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="/ (Safe Float)", CompactNodeTitle="/", Keywords="Security Get Safe Float DIVIDE /"))
	static FSafeFloat SCO_Pure_GetSafeFloatDivideFSF(const FSafeFloat &FSF, const FSafeFloat &SSF, float &Output);
	//
	/** Get:: Safe Float ++ */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="++ (Safe Float)", CompactNodeTitle="++", Keywords="Security Get Safe Float ADD PLUS ++"))
	static FSafeFloat SCO_Pure_GetSafeFloatIncreaseFSF(UPARAM(Ref)FSafeFloat &FSF, float &Output);
	//
	/** Get:: Safe Float -- */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="-- (Safe Float)", CompactNodeTitle="--", Keywords="Security Get Safe Float LESS --"))
	static FSafeFloat SCO_Pure_GetSafeFloatDecreaseFSF(UPARAM(Ref)FSafeFloat &FSF, float &Output);
	//
	/** Get:: Safe Float += Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Safe Float)", CompactNodeTitle="+=", Keywords="Security Get Safe Float PLUS EQUAL +="))
	static FSafeFloat SCO_Pure_GetSafeFloatPlusEqualFSF(UPARAM(Ref)FSafeFloat &FSF, const FSafeFloat &SSF, float &Output);
	//
	/** Get:: Safe Float -= Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="-= (Safe Float)", CompactNodeTitle="-=", Keywords="Security Get Safe Float MINUS EQUAL -="))
	static FSafeFloat SCO_Pure_GetSafeFloatMinusEqualFSF(UPARAM(Ref)FSafeFloat &FSF, const FSafeFloat &SSF, float &Output);
	//
	//
	/** Get:: Safe Float == Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Float)", CompactNodeTitle="==", Keywords="Security Get Safe Float EQUAL =="))
	static bool SCO_Pure_GetSafeFloatEqualFloat(const FSafeFloat &FSF, const float &NF);
	//
	/** Get:: Safe Float != Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Float)", CompactNodeTitle="!=", Keywords="Security Get Safe Float NOT !="))
	static bool SCO_Pure_GetSafeFloatNotEqualFloat(const FSafeFloat &FSF, const float &NF);
	//
	/** Get:: Safe Float > Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Float)", CompactNodeTitle=">", Keywords="Security Get Safe Float GREATER >"))
	static bool SCO_Pure_GetSafeFloatGreaterFloat(const FSafeFloat &FSF, const float &NF);
	//
	/** Get:: Safe Float < Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Float)", CompactNodeTitle="<", Keywords="Security Get Safe Float LESS <"))
	static bool SCO_Pure_GetSafeFloatSmallerFloat(const FSafeFloat &FSF, const float &NF);
	//
	/** Get:: Safe Float >= Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName=">= (Float)", CompactNodeTitle=">=", Keywords="Security Get Safe Float GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeFloatGreaterEqualFloat(const FSafeFloat &FSF, const float &NF);
	//
	/** Get:: Safe Float <= Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="<= (Float)", CompactNodeTitle="<=", Keywords="Security Get Safe Float LESS EQUAL <="))
	static bool SCO_Pure_GetSafeFloatSmallerEqualFloat(const FSafeFloat &FSF, const float &NF);
	//
	/** Set:: Safe Float = Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Float)", CompactNodeTitle="=", Keywords="Security Set Safe Float EQUAL ="))
	static FSafeFloat SCO_Pure_SetSafeFloatEqualFloat(UPARAM(Ref)FSafeFloat &FSF, const float &NF, float &Output);
	//
	/** Get:: Safe Float + Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Float)", CompactNodeTitle="+", Keywords="Security Get Safe Float PLUS +"))
	static FSafeFloat SCO_Pure_GetSafeFloatPlusFloat(const FSafeFloat &FSF, const float &NF, float &Output);
	//
	/** Get:: Safe Float - Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="- (Float)", CompactNodeTitle="-", Keywords="Security Get Safe Float MINUS -"))
	static FSafeFloat SCO_Pure_GetSafeFloatMinusFloat(const FSafeFloat &FSF, const float &NF, float &Output);
	//
	/** Get:: Safe Float * Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="* (Float)", CompactNodeTitle="*", Keywords="Security Get Safe Float TIMES *"))
	static FSafeFloat SCO_Pure_GetSafeFloatTimesFloat(const FSafeFloat &FSF, const float &NF, float &Output);
	//
	/** Get:: Safe Float / Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="/ (Float)", CompactNodeTitle="/", Keywords="Security Get Safe Float DIVIDE /"))
	static FSafeFloat SCO_Pure_GetSafeFloatDivideFloat(const FSafeFloat &FSF, const float &NF, float &Output);
	//
	/** Get:: Safe Float += Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Float)", CompactNodeTitle="+=", Keywords="Security Get Safe Float PLUS EQUAL +="))
	static FSafeFloat SCO_Pure_GetSafeFloatPlusEqualFloat(UPARAM(Ref)FSafeFloat &FSF, const float &NF, float &Output);
	//
	/** Get:: Safe Float -= Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="-= (Float)", CompactNodeTitle="-=", Keywords="Security Get Safe Float MINUS EQUAL -="))
	static FSafeFloat SCO_Pure_GetSafeFloatMinusEqualFloat(UPARAM(Ref)FSafeFloat &FSF, const float &NF, float &Output);
	//
	//
	/** Get:: Float == Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Safe Float)", CompactNodeTitle="==", Keywords="Security Get Safe Float EQUAL =="))
	static bool SCO_Pure_GetFloatEqualFSF(const float &NF, const FSafeFloat &FSF);
	//
	/** Get:: Float != Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Safe Float)", CompactNodeTitle="!=", Keywords="Security Get Safe Float NOT !="))
	static bool SCO_Pure_GetFloatNotEqualFSF(const float &NF, const FSafeFloat &FSF);
	//
	/** Get:: Float > Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Safe Float)", CompactNodeTitle=">", Keywords="Security Get Safe Float GREATER >"))
	static bool SCO_Pure_GetFloatGreaterFSF(const float &NF, const FSafeFloat &FSF);
	//
	/** Get:: Float < Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Safe Float)", CompactNodeTitle="<", Keywords="Security Get Safe Float LESS <"))
	static bool SCO_Pure_GetFloatSmallerFSF(const float &NF, const FSafeFloat &FSF);
	//
	/** Get:: Float >= Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName=">= (Safe Float)", CompactNodeTitle=">=", Keywords="Security Get Safe Float GREATER EQUAL >="))
	static bool SCO_Pure_GetFloatGreaterEqualFSF(const float &NF, const FSafeFloat &FSF);
	//
	/** Get:: Float <= Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="<= (Safe Float)", CompactNodeTitle="<=", Keywords="Security Get Safe Float LESS EQUAL <="))
	static bool SCO_Pure_GetFloatSmallerEqualFSF(const float &NF, const FSafeFloat &FSF);
	//
	/** Set:: Float = Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Safe Float)", CompactNodeTitle="=", Keywords="Security Set Safe Float EQUAL ="))
	static float SCO_Pure_SetFloatEqualFSF(UPARAM(Ref)float &NF, const FSafeFloat &FSF);
	//
	/** Get:: Float + Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Safe Float)", CompactNodeTitle="+", Keywords="Security Get Safe Float PLUS +"))
	static float SCO_Pure_GetFloatPlusFSF(const float &NF, const FSafeFloat &FSF);
	//
	/** Get:: Float - Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="- (Safe Float)", CompactNodeTitle="-", Keywords="Security Get Safe Float MINUS -"))
	static float SCO_Pure_GetFloatMinusFSF(const float &NF, const FSafeFloat &FSF);
	//
	/** Get:: Float * Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="* (Safe Float)", CompactNodeTitle="*", Keywords="Security Get Safe Float TIMES *"))
	static float SCO_Pure_GetFloatTimesFSF(const float &NF, const FSafeFloat &FSF);
	//
	/** Get:: Float / Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="/ (Safe Float)", CompactNodeTitle="/", Keywords="Security Get Safe Float DIVIDE /"))
	static float SCO_Pure_GetFloatDivideFSF(const float &NF, const FSafeFloat &FSF);
	//
	/** Get:: Float += Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Safe Float)", CompactNodeTitle="+=", Keywords="Security Get Safe Float PLUS EQUAL +="))
	static float SCO_Pure_GetFloatPlusEqualFSF(UPARAM(Ref)float &NF, const FSafeFloat &FSF);
	//
	/** Get:: Float -= Safe Float */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="-= (Safe Float)", CompactNodeTitle="-=", Keywords="Security Get Safe Float MINUS EQUAL -="))
	static float SCO_Pure_GetFloatMinusEqualFSF(UPARAM(Ref)float &NF, const FSafeFloat &FSF);
	//
	//
	/** Get:: Safe Name == Safe Name */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Safe Name)", CompactNodeTitle="==", Keywords="Security Get Safe Name EQUAL =="))
	static bool SCO_Pure_GetSafeNameEqualFSN(const FSafeName &FSN, const FSafeName &SSN);
	//
	/** Get:: Safe Name != Safe Name */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Safe Name)", CompactNodeTitle="!=", Keywords="Security Get Safe Name NOT !="))
	static bool SCO_Pure_GetSafeNameNotEqualFSN(const FSafeName &FSN, const FSafeName &SSN);
	//
	/** Get:: Safe Name > Safe Name */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Safe Name)", CompactNodeTitle=">", Keywords="Security Get Safe Name GREATER >"))
	static bool SCO_Pure_GetSafeNameGreaterFSN(const FSafeName &FSN, const FSafeName &SSN);
	//
	/** Get:: Safe Name < Safe Name */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Safe Name)", CompactNodeTitle="<", Keywords="Security Get Safe Name LESS <"))
	static bool SCO_Pure_GetSafeNameSmallerFSN(const FSafeName &FSN, const FSafeName &SSN);
	//
	/** Set:: Safe Name = Safe Name */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Safe Name)", CompactNodeTitle="=", Keywords="Security Set Safe Name EQUAL ="))
	static FSafeName SCO_Pure_SetSafeNameEqualFSN(UPARAM(Ref)FSafeName &FSN, const FSafeName &SSN, FName &Output);
	//
	/** Get:: Safe Name + Safe Name */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Safe Name)", CompactNodeTitle="+", Keywords="Security Get Safe Name PLUS +"))
	static FSafeName SCO_Pure_GetSafeNamePlusFSN(const FSafeName &FSN, const FSafeName &SSN, FName &Output);
	//
	/** Get:: Safe Name += Safe Name */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Safe Name)", CompactNodeTitle="+=", Keywords="Security Get Safe Name PLUS EQUAL +="))
	static FSafeName SCO_Pure_GetSafeNamePlusEqualFSN(UPARAM(Ref)FSafeName &FSN, const FSafeName &SSN, FName &Output);
	//
	//
	/** Get:: Safe Name == Name */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Name)", CompactNodeTitle="==", Keywords="Security Get Safe Name EQUAL =="))
	static bool SCO_Pure_GetSafeNameEqualName(const FSafeName &FSN, const FName &NN);
	//
	/** Get:: Safe Name != Name */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Name)", CompactNodeTitle="!=", Keywords="Security Get Safe Name NOT !="))
	static bool SCO_Pure_GetSafeNameNotEqualName(const FSafeName &FSN, const FName &NN);
	//
	/** Get:: Safe Name > Name */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Name)", CompactNodeTitle=">", Keywords="Security Get Safe Name GREATER >"))
	static bool SCO_Pure_GetSafeNameGreaterName(const FSafeName &FSN, const FName &NN);
	//
	/** Get:: Safe Name < Name */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Name)", CompactNodeTitle="<", Keywords="Security Get Safe Name LESS <"))
	static bool SCO_Pure_GetSafeNameSmallerName(const FSafeName &FSN, const FName &NN);
	//
	/** Set:: Safe Name = Name */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Name)", CompactNodeTitle="=", Keywords="Security Set Safe Name EQUAL ="))
	static FSafeName SCO_Pure_SetSafeNameEqualName(UPARAM(Ref)FSafeName &FSN, const FName &NN, FName &Output);
	//
	/** Get:: Safe Name + Name */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Name)", CompactNodeTitle="+", Keywords="Security Get Safe Name PLUS +"))
	static FSafeName SCO_Pure_GetSafeNamePlusName(const FSafeName &FSN, const FName &NN, FName &Output);
	//
	/** Get:: Safe Name += Name */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Name)", CompactNodeTitle="+=", Keywords="Security Get Safe Name PLUS EQUAL +="))
	static FSafeName SCO_Pure_GetSafeNamePlusEqualName(UPARAM(Ref)FSafeName &FSN, const FName &NN, FName &Output);
	//
	//
	/** Get:: Name == Safe Name */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Safe Name)", CompactNodeTitle="==", Keywords="Security Get Safe Name EQUAL =="))
	static bool SCO_Pure_GetNameEqualFSN(const FName &NN, const FSafeName &FSN);
	//
	/** Get:: Name != Safe Name */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Safe Name)", CompactNodeTitle="!=", Keywords="Security Get Safe Name NOT !="))
	static bool SCO_Pure_GetNameNotEqualFSN(const FName &NN, const FSafeName &FSN);
	//
	/** Get:: Name > Safe Name */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Safe Name)", CompactNodeTitle=">", Keywords="Security Get Safe Name GREATER >"))
	static bool SCO_Pure_GetNameGreaterFSN(const FName &NN, const FSafeName &FSN);
	//
	/** Get:: Name < Safe Name */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Safe Name)", CompactNodeTitle="<", Keywords="Security Get Safe Name LESS <"))
	static bool SCO_Pure_GetNameSmallerFSN(const FName &NN, const FSafeName &FSN);
	//
	/** Set:: Name = Safe Name */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Safe Name)", CompactNodeTitle="=", Keywords="Security Set Safe Name EQUAL ="))
	static FName SCO_Pure_SetNameEqualFSN(UPARAM(Ref)FName &NN, const FSafeName &FSN);
	//
	/** Get:: Name + Safe Name */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Safe Name)", CompactNodeTitle="+", Keywords="Security Get Safe Name PLUS +"))
	static FName SCO_Pure_GetNamePlusFSN(const FName &NN, const FSafeName &FSN);
	//
	/** Get:: Name += Safe Name */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Safe Name)", CompactNodeTitle="+=", Keywords="Security Get Safe Name PLUS EQUAL +="))
	static FName SCO_Pure_GetNamePlusEqualFSN(UPARAM(Ref)FName &NN, const FSafeName &FSN);
	//
	//
	/** Get:: Safe Text == Safe Text */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Safe Text)", CompactNodeTitle="==", Keywords="Security Get Safe Text EQUAL =="))
	static bool SCO_Pure_GetSafeTextEqualFST(const FSafeText &FST, const FSafeText &ST);
	//
	/** Get:: Safe Text != Safe Text */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Safe Text)", CompactNodeTitle="!=", Keywords="Security Get Safe Text NOT !="))
	static bool SCO_Pure_GetSafeTextNotEqualFST(const FSafeText &FST, const FSafeText &ST);
	//
	/** Get:: Safe Text > Safe Text */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Safe Text)", CompactNodeTitle=">", Keywords="Security Get Safe Text GREATER >"))
	static bool SCO_Pure_GetSafeTextGreaterFST(const FSafeText &FST, const FSafeText &ST);
	//
	/** Get:: Safe Text < Safe Text */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Safe Text)", CompactNodeTitle="<", Keywords="Security Get Safe Text LEST <"))
	static bool SCO_Pure_GetSafeTextSmallerFST(const FSafeText &FST, const FSafeText &ST);
	//
	/** Set:: Safe Text = Safe Text */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Safe Text)", CompactNodeTitle="=", Keywords="Security Set Safe Text EQUAL ="))
	static FSafeText SCO_Pure_SetSafeTextEqualFST(UPARAM(Ref)FSafeText &FST, const FSafeText &ST, FText &Output);
	//
	/** Get:: Safe Text + Safe Text */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Safe Text)", CompactNodeTitle="+", Keywords="Security Get Safe Text PLUS +"))
	static FSafeText SCO_Pure_GetSafeTextPlusFST(const FSafeText &FST, const FSafeText &ST, FText &Output);
	//
	/** Get:: Safe Text += Safe Text */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Safe Text)", CompactNodeTitle="+=", Keywords="Security Get Safe Text PLUS EQUAL +="))
	static FSafeText SCO_Pure_GetSafeTextPlusEqualFST(UPARAM(Ref)FSafeText &FST, const FSafeText &ST, FText &Output);
	//
	//
	/** Get:: Safe Text == Text */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Text)", CompactNodeTitle="==", Keywords="Security Get Safe Text EQUAL =="))
	static bool SCO_Pure_GetSafeTextEqualText(const FSafeText &FST, const FText &NT);
	//
	/** Get:: Safe Text != Text */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Text)", CompactNodeTitle="!=", Keywords="Security Get Safe Text NOT !="))
	static bool SCO_Pure_GetSafeTextNotEqualText(const FSafeText &FST, const FText &NT);
	//
	/** Get:: Safe Text > Text */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Text)", CompactNodeTitle=">", Keywords="Security Get Safe Text GREATER >"))
	static bool SCO_Pure_GetSafeTextGreaterText(const FSafeText &FST, const FText &NT);
	//
	/** Get:: Safe Text < Text */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Text)", CompactNodeTitle="<", Keywords="Security Get Safe Text LEST <"))
	static bool SCO_Pure_GetSafeTextSmallerText(const FSafeText &FST, const FText &NT);
	//
	/** Set:: Safe Text = Text */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Text)", CompactNodeTitle="=", Keywords="Security Set Safe Text EQUAL ="))
	static FSafeText SCO_Pure_SetSafeTextEqualText(UPARAM(Ref)FSafeText &FST, const FText &NT, FText &Output);
	//
	/** Get:: Safe Text + Text */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Text)", CompactNodeTitle="+", Keywords="Security Get Safe Text PLUS +"))
	static FSafeText SCO_Pure_GetSafeTextPlusText(const FSafeText &FST, const FText &NT, FText &Output);
	//
	/** Get:: Safe Text += Text */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Text)", CompactNodeTitle="+=", Keywords="Security Get Safe Text PLUS EQUAL +="))
	static FSafeText SCO_Pure_GetSafeTextPlusEqualText(UPARAM(Ref)FSafeText &FST, const FText &NT, FText &Output);
	//
	//
	/** Get:: Text == Safe Text */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Safe Text)", CompactNodeTitle="==", Keywords="Security Get Safe Text EQUAL =="))
	static bool SCO_Pure_GetTextEqualFST(const FText &NT, const FSafeText &FST);
	//
	/** Get:: Text != Safe Text */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Safe Text)", CompactNodeTitle="!=", Keywords="Security Get Safe Text NOT !="))
	static bool SCO_Pure_GetTextNotEqualFST(const FText &NT, const FSafeText &FST);
	//
	/** Get:: Text > Safe Text */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Safe Text)", CompactNodeTitle=">", Keywords="Security Get Safe Text GREATER >"))
	static bool SCO_Pure_GetTextGreaterFST(const FText &NT, const FSafeText &FST);
	//
	/** Get:: Text < Safe Text */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Safe Text)", CompactNodeTitle="<", Keywords="Security Get Safe Text LEST <"))
	static bool SCO_Pure_GetTextSmallerFST(const FText &NT, const FSafeText &FST);
	//
	/** Set:: Text = Safe Text */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Safe Text)", CompactNodeTitle="=", Keywords="Security Set Safe Text EQUAL ="))
	static FText SCO_Pure_SetTextEqualFST(UPARAM(Ref)FText &NT, const FSafeText &FST);
	//
	/** Get:: Text + Safe Text */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Safe Text)", CompactNodeTitle="+", Keywords="Security Get Safe Text PLUS +"))
	static FText SCO_Pure_GetTextPlusFST(const FText &NT, const FSafeText &FST);
	//
	/** Get:: Text += Safe Text */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Safe Text)", CompactNodeTitle="+=", Keywords="Security Get Safe Text PLUS EQUAL +="))
	static FText SCO_Pure_GetTextPlusEqualFST(UPARAM(Ref)FText &NT, const FSafeText &FST);
	//
	//
	/** Get:: Safe String == Safe String */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Safe String)", CompactNodeTitle="==", Keywords="Security Get Safe String EQUAL =="))
	static bool SCO_Pure_GetSafeStringEqualFSS(const FSafeString &FSS, const FSafeString &SS);
	//
	/** Get:: Safe String != Safe String */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Safe String)", CompactNodeTitle="!=", Keywords="Security Get Safe String NOT !="))
	static bool SCO_Pure_GetSafeStringNotEqualFSS(const FSafeString &FSS, const FSafeString &SS);
	//
	/** Get:: Safe String > Safe String */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Safe String)", CompactNodeTitle=">", Keywords="Security Get Safe String GREATER >"))
	static bool SCO_Pure_GetSafeStringGreaterFSS(const FSafeString &FSS, const FSafeString &SS);
	//
	/** Get:: Safe String < Safe String */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Safe String)", CompactNodeTitle="<", Keywords="Security Get Safe String LESS <"))
	static bool SCO_Pure_GetSafeStringSmallerFSS(const FSafeString &FSS, const FSafeString &SS);
	//
	/** Set:: Safe String = Safe String */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Safe String)", CompactNodeTitle="=", Keywords="Security Set Safe String EQUAL ="))
	static FSafeString SCO_Pure_SetSafeStringEqualFSS(UPARAM(Ref)FSafeString &FSS, const FSafeString &SS, FString &Output);
	//
	/** Get:: Safe String + Safe String */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Safe String)", CompactNodeTitle="+", Keywords="Security Get Safe String PLUS +"))
	static FSafeString SCO_Pure_GetSafeStringPlusFSS(const FSafeString &FSS, const FSafeString &SS, FString &Output);
	//
	/** Get:: Safe String += Safe String */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Safe String)", CompactNodeTitle="+=", Keywords="Security Get Safe String PLUS EQUAL +="))
	static FSafeString SCO_Pure_GetSafeStringPlusEqualFSS(UPARAM(Ref)FSafeString &FSS, const FSafeString &SS, FString &Output);
	//
	//
	/** Get:: Safe String == String */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (String)", CompactNodeTitle="==", Keywords="Security Get Safe String EQUAL =="))
	static bool SCO_Pure_GetSafeStringEqualString(const FSafeString &FSS, const FString &NS);
	//
	/** Get:: Safe String != String */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (String)", CompactNodeTitle="!=", Keywords="Security Get Safe String NOT !="))
	static bool SCO_Pure_GetSafeStringNotEqualString(const FSafeString &FSS, const FString &NS);
	//
	/** Get:: Safe String > String */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (String)", CompactNodeTitle=">", Keywords="Security Get Safe String GREATER >"))
	static bool SCO_Pure_GetSafeStringGreaterString(const FSafeString &FSS, const FString &NS);
	//
	/** Get:: Safe String < String */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (String)", CompactNodeTitle="<", Keywords="Security Get Safe String LESS <"))
	static bool SCO_Pure_GetSafeStringSmallerString(const FSafeString &FSS, const FString &NS);
	//
	/** Set:: Safe String = String */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (String)", CompactNodeTitle="=", Keywords="Security Set Safe String EQUAL ="))
	static FSafeString SCO_Pure_SetSafeStringEqualString(UPARAM(Ref)FSafeString &FSS, const FString &NS, FString &Output);
	//
	/** Get:: Safe String + String */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (String)", CompactNodeTitle="+", Keywords="Security Get Safe String PLUS +"))
	static FSafeString SCO_Pure_GetSafeStringPlusString(const FSafeString &FSS, const FString &NS, FString &Output);
	//
	/** Get:: Safe String += String */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (String)", CompactNodeTitle="+=", Keywords="Security Get Safe String PLUS EQUAL +="))
	static FSafeString SCO_Pure_GetSafeStringPlusEqualString(UPARAM(Ref)FSafeString &FSS, const FString &NS, FString &Output);
	//
	//
	/** Get:: String == Safe String */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Safe String)", CompactNodeTitle="==", Keywords="Security Get Safe String EQUAL =="))
	static bool SCO_Pure_GetStringEqualFSS(const FString &NS, const FSafeString &FSS);
	//
	/** Get:: String != Safe String */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Safe String)", CompactNodeTitle="!=", Keywords="Security Get Safe String NOT !="))
	static bool SCO_Pure_GetStringNotEqualFSS(const FString &NS, const FSafeString &FSS);
	//
	/** Get:: String > Safe String */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Safe String)", CompactNodeTitle=">", Keywords="Security Get Safe String GREATER >"))
	static bool SCO_Pure_GetStringGreaterFSS(const FString &NS, const FSafeString &FSS);
	//
	/** Get:: String < Safe String */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Safe String)", CompactNodeTitle="<", Keywords="Security Get Safe String LESS <"))
	static bool SCO_Pure_GetStringSmallerFSS(const FString &NS, const FSafeString &FSS);
	//
	/** Set:: String = Safe String */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Safe String)", CompactNodeTitle="=", Keywords="Security Set Safe String EQUAL ="))
	static FString SCO_Pure_SetStringEqualFSS(UPARAM(Ref)FString &NS, const FSafeString &FSS);
	//
	/** Get:: String + Safe String */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Safe String)", CompactNodeTitle="+", Keywords="Security Get Safe String PLUS +"))
	static FString SCO_Pure_GetStringPlusFSS(const FString &NS, const FSafeString &FSS);
	//
	/** Get:: String += Safe String */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Safe String)", CompactNodeTitle="+=", Keywords="Security Get Safe String PLUS EQUAL +="))
	static FString SCO_Pure_GetStringPlusEqualFSS(UPARAM(Ref)FString &NS, const FSafeString &FSS);
	//
	//
	/** Get:: Safe Vector2D == Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Safe Vector2D)", CompactNodeTitle="==", Keywords="Security Get Safe Vector2D EQUAL =="))
	static bool SCO_Pure_GetSafeVector2DEqualFSV(const FSafeVector2D &FSV, const FSafeVector2D &SSV);
	//
	/** Get:: Safe Vector2D != Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Safe Vector2D)", CompactNodeTitle="!=", Keywords="Security Get Safe Vector2D NOT !="))
	static bool SCO_Pure_GetSafeVector2DNotEqualFSV(const FSafeVector2D &FSV, const FSafeVector2D &SSV);
	//
	/** Get:: Safe Vector2D > Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Safe Vector2D)", CompactNodeTitle=">", Keywords="Security Get Safe Vector2D GREATER >"))
	static bool SCO_Pure_GetSafeVector2DGreaterFSV(const FSafeVector2D &FSV, const FSafeVector2D &SSV);
	//
	/** Get:: Safe Vector2D < Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Safe Vector2D)", CompactNodeTitle="<", Keywords="Security Get Safe Vector2D LESS <"))
	static bool SCO_Pure_GetSafeVector2DSmallerFSV(const FSafeVector2D &FSV, const FSafeVector2D &SSV);
	//
	/** Get:: Safe Vector2D >= Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName=">= (Safe Vector2D)", CompactNodeTitle=">=", Keywords="Security Get Safe Vector2D GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeVector2DGreaterEqualFSV(const FSafeVector2D &FSV, const FSafeVector2D &SSV);
	//
	/** Get:: Safe Vector2D <= Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="<= (Safe Vector2D)", CompactNodeTitle="<=", Keywords="Security Get Safe Vector2D LESS EQUAL <="))
	static bool SCO_Pure_GetSafeVector2DSmallerEqualFSV(const FSafeVector2D &FSV, const FSafeVector2D &SSV);
	//
	/** Set:: Safe Vector2D = Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Safe Vector2D)", CompactNodeTitle="=", Keywords="Security Set Safe Vector2D EQUAL ="))
	static FSafeVector2D SCO_Pure_SetSafeVector2DEqualFSV(UPARAM(Ref)FSafeVector2D &FSV, const FSafeVector2D &SSV, FVector2D &Output);
	//
	/** Get:: Safe Vector2D + Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Safe Vector2D)", CompactNodeTitle="+", Keywords="Security Get Safe Vector2D PLUS +"))
	static FSafeVector2D SCO_Pure_GetSafeVector2DPlusFSV(const FSafeVector2D &FSV, const FSafeVector2D &SSV, FVector2D &Output);
	//
	/** Get:: Safe Vector2D - Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="- (Safe Vector2D)", CompactNodeTitle="-", Keywords="Security Get Safe Vector2D MINUS -"))
	static FSafeVector2D SCO_Pure_GetSafeVector2DMinusFSV(const FSafeVector2D &FSV, const FSafeVector2D &SSV, FVector2D &Output);
	//
	/** Get:: Safe Vector2D * Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="* (Safe Vector2D)", CompactNodeTitle="*", Keywords="Security Get Safe Vector2D TIMES *"))
	static FSafeVector2D SCO_Pure_GetSafeVector2DTimesFSV(const FSafeVector2D &FSV, const FSafeVector2D &SSV, FVector2D &Output);
	//
	/** Get:: Safe Vector2D / Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="/ (Safe Vector2D)", CompactNodeTitle="/", Keywords="Security Get Safe Vector2D DIVIDE /"))
	static FSafeVector2D SCO_Pure_GetSafeVector2DDivideFSV(const FSafeVector2D &FSV, const FSafeVector2D &SSV, FVector2D &Output);
	//
	/** Get:: Safe Vector2D ++ */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="++ (Safe Vector2D)", CompactNodeTitle="++", Keywords="Security Get Safe Vector2D ADD PLUS ++"))
	static FSafeVector2D SCO_Pure_GetSafeVector2DIncreaseFSV(UPARAM(Ref)FSafeVector2D &FSV, FVector2D &Output);
	//
	/** Get:: Safe Vector2D -- */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="-- (Safe Vector2D)", CompactNodeTitle="--", Keywords="Security Get Safe Vector2D LESS --"))
	static FSafeVector2D SCO_Pure_GetSafeVector2DDecreaseFSV(UPARAM(Ref)FSafeVector2D &FSV, FVector2D &Output);
	//
	/** Get:: Safe Vector2D += Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Safe Vector2D)", CompactNodeTitle="+=", Keywords="Security Get Safe Vector2D PLUS EQUAL +="))
	static FSafeVector2D SCO_Pure_GetSafeVector2DPlusEqualFSV(UPARAM(Ref)FSafeVector2D &FSV, const FSafeVector2D &SSV, FVector2D &Output);
	//
	/** Get:: Safe Vector2D -= Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="-= (Safe Vector2D)", CompactNodeTitle="-=", Keywords="Security Get Safe Vector2D MINUS EQUAL -="))
	static FSafeVector2D SCO_Pure_GetSafeVector2DMinusEqualFSV(UPARAM(Ref)FSafeVector2D &FSV, const FSafeVector2D &SSV, FVector2D &Output);
	//
	//
	/** Get:: Safe Vector2D == Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Vector2D)", CompactNodeTitle="==", Keywords="Security Get Safe Vector2D EQUAL =="))
	static bool SCO_Pure_GetSafeVector2DEqualVector2D(const FSafeVector2D &FSV, const FVector2D &NV);
	//
	/** Get:: Safe Vector2D != Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Vector2D)", CompactNodeTitle="!=", Keywords="Security Get Safe Vector2D NOT !="))
	static bool SCO_Pure_GetSafeVector2DNotEqualVector2D(const FSafeVector2D &FSV, const FVector2D &NV);
	//
	/** Get:: Safe Vector2D > Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Vector2D)", CompactNodeTitle=">", Keywords="Security Get Safe Vector2D GREATER >"))
	static bool SCO_Pure_GetSafeVector2DGreaterVector2D(const FSafeVector2D &FSV, const FVector2D &NV);
	//
	/** Get:: Safe Vector2D < Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Vector2D)", CompactNodeTitle="<", Keywords="Security Get Safe Vector2D LESS <"))
	static bool SCO_Pure_GetSafeVector2DSmallerVector2D(const FSafeVector2D &FSV, const FVector2D &NV);
	//
	/** Get:: Safe Vector2D >= Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName=">= (Vector2D)", CompactNodeTitle=">=", Keywords="Security Get Safe Vector2D GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeVector2DGreaterEqualVector2D(const FSafeVector2D &FSV, const FVector2D &NV);
	//
	/** Get:: Safe Vector2D <= Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="<= (Vector2D)", CompactNodeTitle="<=", Keywords="Security Get Safe Vector2D LESS EQUAL <="))
	static bool SCO_Pure_GetSafeVector2DSmallerEqualVector2D(const FSafeVector2D &FSV, const FVector2D &NV);
	//
	/** Set:: Safe Vector2D = Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Vector2D)", CompactNodeTitle="=", Keywords="Security Set Safe Vector2D EQUAL ="))
	static FSafeVector2D SCO_Pure_SetSafeVector2DEqualVector2D(UPARAM(Ref)FSafeVector2D &FSV, const FVector2D &NV, FVector2D &Output);
	//
	/** Get:: Safe Vector2D + Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Vector2D)", CompactNodeTitle="+", Keywords="Security Get Safe Vector2D PLUS +"))
	static FSafeVector2D SCO_Pure_GetSafeVector2DPlusVector2D(const FSafeVector2D &FSV, const FVector2D &NV, FVector2D &Output);
	//
	/** Get:: Safe Vector2D - Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="- (Vector2D)", CompactNodeTitle="-", Keywords="Security Get Safe Vector2D MINUS -"))
	static FSafeVector2D SCO_Pure_GetSafeVector2DMinusVector2D(const FSafeVector2D &FSV, const FVector2D &NV, FVector2D &Output);
	//
	/** Get:: Safe Vector2D * Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="* (Vector2D)", CompactNodeTitle="*", Keywords="Security Get Safe Vector2D TIMES *"))
	static FSafeVector2D SCO_Pure_GetSafeVector2DTimesVector2D(const FSafeVector2D &FSV, const FVector2D &NV, FVector2D &Output);
	//
	/** Get:: Safe Vector2D / Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="/ (Vector2D)", CompactNodeTitle="/", Keywords="Security Get Safe Vector2D DIVIDE /"))
	static FSafeVector2D SCO_Pure_GetSafeVector2DDivideVector2D(const FSafeVector2D &FSV, const FVector2D &NV, FVector2D &Output);
	//
	/** Get:: Safe Vector2D += Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Vector2D)", CompactNodeTitle="+=", Keywords="Security Get Safe Vector2D PLUS EQUAL +="))
	static FSafeVector2D SCO_Pure_GetSafeVector2DPlusEqualVector2D(UPARAM(Ref)FSafeVector2D &FSV, const FVector2D &NV, FVector2D &Output);
	//
	/** Get:: Safe Vector2D -= Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="-= (Vector2D)", CompactNodeTitle="-=", Keywords="Security Get Safe Vector2D MINUS EQUAL -="))
	static FSafeVector2D SCO_Pure_GetSafeVector2DMinusEqualVector2D(UPARAM(Ref)FSafeVector2D &FSV, const FVector2D &NV, FVector2D &Output);
	//
	//
	/** Get:: Vector2D == Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Safe Vector2D)", CompactNodeTitle="==", Keywords="Security Get Safe Vector2D EQUAL =="))
	static bool SCO_Pure_GetVector2DEqualFSV(const FVector2D &NV, const FSafeVector2D &FSV);
	//
	/** Get:: Vector2D != Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Safe Vector2D)", CompactNodeTitle="!=", Keywords="Security Get Safe Vector2D NOT !="))
	static bool SCO_Pure_GetVector2DNotEqualFSV(const FVector2D &NV, const FSafeVector2D &FSV);
	//
	/** Get:: Vector2D > Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Safe Vector2D)", CompactNodeTitle=">", Keywords="Security Get Safe Vector2D GREATER >"))
	static bool SCO_Pure_GetVector2DGreaterFSV(const FVector2D &NV, const FSafeVector2D &FSV);
	//
	/** Get:: Vector2D < Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Safe Vector2D)", CompactNodeTitle="<", Keywords="Security Get Safe Vector2D LESS <"))
	static bool SCO_Pure_GetVector2DSmallerFSV(const FVector2D &NV, const FSafeVector2D &FSV);
	//
	/** Get:: Vector2D >= Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName=">= (Safe Vector2D)", CompactNodeTitle=">=", Keywords="Security Get Safe Vector2D GREATER EQUAL >="))
	static bool SCO_Pure_GetVector2DGreaterEqualFSV(const FVector2D &NV, const FSafeVector2D &FSV);
	//
	/** Get:: Vector2D <= Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="<= (Safe Vector2D)", CompactNodeTitle="<=", Keywords="Security Get Safe Vector2D LESS EQUAL <="))
	static bool SCO_Pure_GetVector2DSmallerEqualFSV(const FVector2D &NV, const FSafeVector2D &FSV);
	//
	/** Set:: Vector2D = Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Safe Vector2D)", CompactNodeTitle="=", Keywords="Security Set Safe Vector2D EQUAL ="))
	static FVector2D SCO_Pure_SetVector2DEqualFSV(UPARAM(Ref)FVector2D &NV, const FSafeVector2D &FSV);
	//
	/** Get:: Vector2D + Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Safe Vector2D)", CompactNodeTitle="+", Keywords="Security Get Safe Vector2D PLUS +"))
	static FVector2D SCO_Pure_GetVector2DPlusFSV(const FVector2D &NV, const FSafeVector2D &FSV);
	//
	/** Get:: Vector2D - Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="- (Safe Vector2D)", CompactNodeTitle="-", Keywords="Security Get Safe Vector2D MINUS -"))
	static FVector2D SCO_Pure_GetVector2DMinusFSV(const FVector2D &NV, const FSafeVector2D &FSV);
	//
	/** Get:: Vector2D * Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="* (Safe Vector2D)", CompactNodeTitle="*", Keywords="Security Get Safe Vector2D TIMES *"))
	static FVector2D SCO_Pure_GetVector2DTimesFSV(const FVector2D &NV, const FSafeVector2D &FSV);
	//
	/** Get:: Vector2D / Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="/ (Safe Vector2D)", CompactNodeTitle="/", Keywords="Security Get Safe Vector2D DIVIDE /"))
	static FVector2D SCO_Pure_GetVector2DDivideFSV(const FVector2D &NV, const FSafeVector2D &FSV);
	//
	/** Get:: Vector2D += Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Safe Vector2D)", CompactNodeTitle="+=", Keywords="Security Get Safe Vector2D PLUS EQUAL +="))
	static FVector2D SCO_Pure_GetVector2DPlusEqualFSV(UPARAM(Ref)FVector2D &NV, const FSafeVector2D &FSV);
	//
	/** Get:: Vector2D -= Safe Vector2D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="-= (Safe Vector2D)", CompactNodeTitle="-=", Keywords="Security Get Safe Vector2D MINUS EQUAL -="))
	static FVector2D SCO_Pure_GetVector2DMinusEqualFSV(UPARAM(Ref)FVector2D &NV, const FSafeVector2D &FSV);
	//
	//
	/** Get:: Safe Vector3D == Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Safe Vector3D)", CompactNodeTitle="==", Keywords="Security Get Safe Vector3D EQUAL =="))
	static bool SCO_Pure_GetSafeVector3DEqualFSV(const FSafeVector3D &FSV, const FSafeVector3D &SSV);
	//
	/** Get:: Safe Vector3D != Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Safe Vector3D)", CompactNodeTitle="!=", Keywords="Security Get Safe Vector3D NOT !="))
	static bool SCO_Pure_GetSafeVector3DNotEqualFSV(const FSafeVector3D &FSV, const FSafeVector3D &SSV);
	//
	/** Get:: Safe Vector3D > Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Safe Vector3D)", CompactNodeTitle=">", Keywords="Security Get Safe Vector3D GREATER >"))
	static bool SCO_Pure_GetSafeVector3DGreaterFSV(const FSafeVector3D &FSV, const FSafeVector3D &SSV);
	//
	/** Get:: Safe Vector3D < Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Safe Vector3D)", CompactNodeTitle="<", Keywords="Security Get Safe Vector3D LESS <"))
	static bool SCO_Pure_GetSafeVector3DSmallerFSV(const FSafeVector3D &FSV, const FSafeVector3D &SSV);
	//
	/** Get:: Safe Vector3D >= Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName=">= (Safe Vector3D)", CompactNodeTitle=">=", Keywords="Security Get Safe Vector3D GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeVector3DGreaterEqualFSV(const FSafeVector3D &FSV, const FSafeVector3D &SSV);
	//
	/** Get:: Safe Vector3D <= Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="<= (Safe Vector3D)", CompactNodeTitle="<=", Keywords="Security Get Safe Vector3D LESS EQUAL <="))
	static bool SCO_Pure_GetSafeVector3DSmallerEqualFSV(const FSafeVector3D &FSV, const FSafeVector3D &SSV);
	//
	/** Set:: Safe Vector3D = Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Safe Vector3D)", CompactNodeTitle="=", Keywords="Security Set Safe Vector3D EQUAL ="))
	static FSafeVector3D SCO_Pure_SetSafeVector3DEqualFSV(UPARAM(Ref)FSafeVector3D &FSV, const FSafeVector3D &SSV, FVector &Output);
	//
	/** Get:: Safe Vector3D + Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Safe Vector3D)", CompactNodeTitle="+", Keywords="Security Get Safe Vector3D PLUS +"))
	static FSafeVector3D SCO_Pure_GetSafeVector3DPlusFSV(const FSafeVector3D &FSV, const FSafeVector3D &SSV, FVector &Output);
	//
	/** Get:: Safe Vector3D - Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="- (Safe Vector3D)", CompactNodeTitle="-", Keywords="Security Get Safe Vector3D MINUS -"))
	static FSafeVector3D SCO_Pure_GetSafeVector3DMinusFSV(const FSafeVector3D &FSV, const FSafeVector3D &SSV, FVector &Output);
	//
	/** Get:: Safe Vector3D * Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="* (Safe Vector3D)", CompactNodeTitle="*", Keywords="Security Get Safe Vector3D TIMES *"))
	static FSafeVector3D SCO_Pure_GetSafeVector3DTimesFSV(const FSafeVector3D &FSV, const FSafeVector3D &SSV, FVector &Output);
	//
	/** Get:: Safe Vector3D / Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="/ (Safe Vector3D)", CompactNodeTitle="/", Keywords="Security Get Safe Vector3D DIVIDE /"))
	static FSafeVector3D SCO_Pure_GetSafeVector3DDivideFSV(const FSafeVector3D &FSV, const FSafeVector3D &SSV, FVector &Output);
	//
	/** Get:: Safe Vector3D ++ */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="++ (Safe Vector3D)", CompactNodeTitle="++", Keywords="Security Get Safe Vector3D ADD PLUS ++"))
	static FSafeVector3D SCO_Pure_GetSafeVector3DIncreaseFSV(UPARAM(Ref)FSafeVector3D &FSV, FVector &Output);
	//
	/** Get:: Safe Vector3D -- */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="-- (Safe Vector3D)", CompactNodeTitle="--", Keywords="Security Get Safe Vector3D LESS --"))
	static FSafeVector3D SCO_Pure_GetSafeVector3DDecreaseFSV(UPARAM(Ref)FSafeVector3D &FSV, FVector &Output);
	//
	/** Get:: Safe Vector3D += Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Safe Vector3D)", CompactNodeTitle="+=", Keywords="Security Get Safe Vector3D PLUS EQUAL +="))
	static FSafeVector3D SCO_Pure_GetSafeVector3DPlusEqualFSV(UPARAM(Ref)FSafeVector3D &FSV, const FSafeVector3D &SSV, FVector &Output);
	//
	/** Get:: Safe Vector3D -= Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="-= (Safe Vector3D)", CompactNodeTitle="-=", Keywords="Security Get Safe Vector3D MINUS EQUAL -="))
	static FSafeVector3D SCO_Pure_GetSafeVector3DMinusEqualFSV(UPARAM(Ref)FSafeVector3D &FSV, const FSafeVector3D &SSV, FVector &Output);
	//
	//
	/** Get:: Safe Vector3D == Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Vector3D)", CompactNodeTitle="==", Keywords="Security Get Safe Vector3D EQUAL =="))
	static bool SCO_Pure_GetSafeVector3DEqualVector3D(const FSafeVector3D &FSV, const FVector &NV);
	//
	/** Get:: Safe Vector3D != Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Vector3D)", CompactNodeTitle="!=", Keywords="Security Get Safe Vector3D NOT !="))
	static bool SCO_Pure_GetSafeVector3DNotEqualVector3D(const FSafeVector3D &FSV, const FVector &NV);
	//
	/** Get:: Safe Vector3D > Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Vector3D)", CompactNodeTitle=">", Keywords="Security Get Safe Vector3D GREATER >"))
	static bool SCO_Pure_GetSafeVector3DGreaterVector3D(const FSafeVector3D &FSV, const FVector &NV);
	//
	/** Get:: Safe Vector3D < Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Vector3D)", CompactNodeTitle="<", Keywords="Security Get Safe Vector3D LESS <"))
	static bool SCO_Pure_GetSafeVector3DSmallerVector3D(const FSafeVector3D &FSV, const FVector &NV);
	//
	/** Get:: Safe Vector3D >= Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName=">= (Vector3D)", CompactNodeTitle=">=", Keywords="Security Get Safe Vector3D GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeVector3DGreaterEqualVector3D(const FSafeVector3D &FSV, const FVector &NV);
	//
	/** Get:: Safe Vector3D <= Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="<= (Vector3D)", CompactNodeTitle="<=", Keywords="Security Get Safe Vector3D LESS EQUAL <="))
	static bool SCO_Pure_GetSafeVector3DSmallerEqualVector3D(const FSafeVector3D &FSV, const FVector &NV);
	//
	/** Set:: Safe Vector3D = Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Vector3D)", CompactNodeTitle="=", Keywords="Security Set Safe Vector3D EQUAL ="))
	static FSafeVector3D SCO_Pure_SetSafeVector3DEqualVector3D(UPARAM(Ref)FSafeVector3D &FSV, const FVector &NV, FVector &Output);
	//
	/** Get:: Safe Vector3D + Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Vector3D)", CompactNodeTitle="+", Keywords="Security Get Safe Vector3D PLUS +"))
	static FSafeVector3D SCO_Pure_GetSafeVector3DPlusVector3D(const FSafeVector3D &FSV, const FVector &NV, FVector &Output);
	//
	/** Get:: Safe Vector3D - Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="- (Vector3D)", CompactNodeTitle="-", Keywords="Security Get Safe Vector3D MINUS -"))
	static FSafeVector3D SCO_Pure_GetSafeVector3DMinusVector3D(const FSafeVector3D &FSV, const FVector &NV, FVector &Output);
	//
	/** Get:: Safe Vector3D * Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="* (Vector3D)", CompactNodeTitle="*", Keywords="Security Get Safe Vector3D TIMES *"))
	static FSafeVector3D SCO_Pure_GetSafeVector3DTimesVector3D(const FSafeVector3D &FSV, const FVector &NV, FVector &Output);
	//
	/** Get:: Safe Vector3D / Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="/ (Vector3D)", CompactNodeTitle="/", Keywords="Security Get Safe Vector3D DIVIDE /"))
	static FSafeVector3D SCO_Pure_GetSafeVector3DDivideVector3D(const FSafeVector3D &FSV, const FVector &NV, FVector &Output);
	//
	/** Get:: Safe Vector3D += Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Vector3D)", CompactNodeTitle="+=", Keywords="Security Get Safe Vector3D PLUS EQUAL +="))
	static FSafeVector3D SCO_Pure_GetSafeVector3DPlusEqualVector3D(UPARAM(Ref)FSafeVector3D &FSV, const FVector &NV, FVector &Output);
	//
	/** Get:: Safe Vector3D -= Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="-= (Vector3D)", CompactNodeTitle="-=", Keywords="Security Get Safe Vector3D MINUS EQUAL -="))
	static FSafeVector3D SCO_Pure_GetSafeVector3DMinusEqualVector3D(UPARAM(Ref)FSafeVector3D &FSV, const FVector &NV, FVector &Output);
	//
	//
	/** Get:: Vector3D == Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Safe Vector3D)", CompactNodeTitle="==", Keywords="Security Get Safe Vector3D EQUAL =="))
	static bool SCO_Pure_GetVector3DEqualFSV(const FVector &NV, const FSafeVector3D &FSV);
	//
	/** Get:: Vector3D != Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Safe Vector3D)", CompactNodeTitle="!=", Keywords="Security Get Safe Vector3D NOT !="))
	static bool SCO_Pure_GetVector3DNotEqualFSV(const FVector &NV, const FSafeVector3D &FSV);
	//
	/** Get:: Vector3D > Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Safe Vector3D)", CompactNodeTitle=">", Keywords="Security Get Safe Vector3D GREATER >"))
	static bool SCO_Pure_GetVector3DGreaterFSV(const FVector &NV, const FSafeVector3D &FSV);
	//
	/** Get:: Vector3D < Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Safe Vector3D)", CompactNodeTitle="<", Keywords="Security Get Safe Vector3D LESS <"))
	static bool SCO_Pure_GetVector3DSmallerFSV(const FVector &NV, const FSafeVector3D &FSV);
	//
	/** Get:: Vector3D >= Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName=">= (Safe Vector3D)", CompactNodeTitle=">=", Keywords="Security Get Safe Vector3D GREATER EQUAL >="))
	static bool SCO_Pure_GetVector3DGreaterEqualFSV(const FVector &NV, const FSafeVector3D &FSV);
	//
	/** Get:: Vector3D <= Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="<= (Safe Vector3D)", CompactNodeTitle="<=", Keywords="Security Get Safe Vector3D LESS EQUAL <="))
	static bool SCO_Pure_GetVector3DSmallerEqualFSV(const FVector &NV, const FSafeVector3D &FSV);
	//
	/** Set:: Vector3D = Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Safe Vector3D)", CompactNodeTitle="=", Keywords="Security Set Safe Vector3D EQUAL ="))
	static FVector SCO_Pure_SetVector3DEqualFSV(UPARAM(Ref)FVector &NV, const FSafeVector3D &FSV);
	//
	/** Get:: Vector3D + Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Safe Vector3D)", CompactNodeTitle="+", Keywords="Security Get Safe Vector3D PLUS +"))
	static FVector SCO_Pure_GetVector3DPlusFSV(const FVector &NV, const FSafeVector3D &FSV);
	//
	/** Get:: Vector3D - Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="- (Safe Vector3D)", CompactNodeTitle="-", Keywords="Security Get Safe Vector3D MINUS -"))
	static FVector SCO_Pure_GetVector3DMinusFSV(const FVector &NV, const FSafeVector3D &FSV);
	//
	/** Get:: Vector3D * Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="* (Safe Vector3D)", CompactNodeTitle="*", Keywords="Security Get Safe Vector3D TIMES *"))
	static FVector SCO_Pure_GetVector3DTimesFSV(const FVector &NV, const FSafeVector3D &FSV);
	//
	/** Get:: Vector3D / Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="/ (Safe Vector3D)", CompactNodeTitle="/", Keywords="Security Get Safe Vector3D DIVIDE /"))
	static FVector SCO_Pure_GetVector3DDivideFSV(const FVector &NV, const FSafeVector3D &FSV);
	//
	/** Get:: Vector3D += Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Safe Vector3D)", CompactNodeTitle="+=", Keywords="Security Get Safe Vector3D PLUS EQUAL +="))
	static FVector SCO_Pure_GetVector3DPlusEqualFSV(UPARAM(Ref)FVector &NV, const FSafeVector3D &FSV);
	//
	/** Get:: Vector3D -= Safe Vector3D */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="-= (Safe Vector3D)", CompactNodeTitle="-=", Keywords="Security Get Safe Vector3D MINUS EQUAL -="))
	static FVector SCO_Pure_GetVector3DMinusEqualFSV(UPARAM(Ref)FVector &NV, const FSafeVector3D &FSV);
	//
	//
	/** Get:: Safe Color == Safe Color */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Safe Color)", CompactNodeTitle="==", Keywords="Security Get Safe Color EQUAL =="))
	static bool SCO_Pure_GetSafeColorEqualFSC(const FSafeColor &FSC, const FSafeColor &SSC);
	//
	/** Get:: Safe Color != Safe Color */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Safe Color)", CompactNodeTitle="!=", Keywords="Security Get Safe Color NOT !="))
	static bool SCO_Pure_GetSafeColorNotEqualFSC(const FSafeColor &FSC, const FSafeColor &SSC);
	//
	/** Set:: Safe Color = Safe Color */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Safe Color)", CompactNodeTitle="=", Keywords="Security Set Safe Color EQUAL ="))
	static FSafeColor SCO_Pure_SetSafeColorEqualFSC(UPARAM(Ref)FSafeColor &FSC, const FSafeColor &SSC, FLinearColor &Output);
	//
	//
	/** Get:: Safe Color == Color */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Color)", CompactNodeTitle="==", Keywords="Security Get Safe Color EQUAL =="))
	static bool SCO_Pure_GetSafeColorEqualColor(const FSafeColor &FSC, const FLinearColor &NC);
	//
	/** Get:: Safe Color != Color */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Color)", CompactNodeTitle="!=", Keywords="Security Get Safe Color NOT !="))
	static bool SCO_Pure_GetSafeColorNotEqualColor(const FSafeColor &FSC, const FLinearColor &NC);
	//
	/** Set:: Safe Color = Color */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Color)", CompactNodeTitle="=", Keywords="Security Set Safe Color EQUAL ="))
	static FSafeColor SCO_Pure_SetSafeColorEqualColor(UPARAM(Ref)FSafeColor &FSC, const FLinearColor &SSC, FLinearColor &Output);
	//
	/** Get:: Color == Safe Color */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Safe Color)", CompactNodeTitle="==", Keywords="Security Get Safe Color EQUAL =="))
	static bool SCO_Pure_GetColorEqualFSC(const FLinearColor &NC, const FSafeColor &FSC);
	//
	/** Get:: Color != Safe Color */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Safe Color)", CompactNodeTitle="!=", Keywords="Security Get Safe Color NOT !="))
	static bool SCO_Pure_GetColorNotEqualFSC(const FLinearColor &NC, const FSafeColor &FSC);
	//
	/** Set:: Color = Safe Color */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Safe Color)", CompactNodeTitle="=", Keywords="Security Set Safe Color EQUAL ="))
	static FLinearColor SCO_Pure_SetColorEqualFSC(UPARAM(Ref)FLinearColor &NC, const FSafeColor &FSC);
	//
	//
	/** Get:: Safe Rotator == Safe Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Safe Rotator)", CompactNodeTitle="==", Keywords="Security Get Safe Rotator EQUAL =="))
	static bool SCO_Pure_GetSafeRotatorEqualFSR(const FSafeRotator &FSR, const FSafeRotator &SSR);
	//
	/** Get:: Safe Rotator != Safe Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Safe Rotator)", CompactNodeTitle="!=", Keywords="Security Get Safe Rotator NOT !="))
	static bool SCO_Pure_GetSafeRotatorNotEqualFSR(const FSafeRotator &FSR, const FSafeRotator &SSR);
	//
	/** Get:: Safe Rotator > Safe Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Safe Rotator)", CompactNodeTitle=">", Keywords="Security Get Safe Rotator GREATER >"))
	static bool SCO_Pure_GetSafeRotatorGreaterFSR(const FSafeRotator &FSR, const FSafeRotator &SSR);
	//
	/** Get:: Safe Rotator < Safe Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Safe Rotator)", CompactNodeTitle="<", Keywords="Security Get Safe Rotator LESS <"))
	static bool SCO_Pure_GetSafeRotatorSmallerFSR(const FSafeRotator &FSR, const FSafeRotator &SSR);
	//
	/** Get:: Safe Rotator >= Safe Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName=">= (Safe Rotator)", CompactNodeTitle=">=", Keywords="Security Get Safe Rotator GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeRotatorGreaterEqualFSR(const FSafeRotator &FSR, const FSafeRotator &SSR);
	//
	/** Get:: Safe Rotator <= Safe Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="<= (Safe Rotator)", CompactNodeTitle="<=", Keywords="Security Get Safe Rotator LESS EQUAL <="))
	static bool SCO_Pure_GetSafeRotatorSmallerEqualFSR(const FSafeRotator &FSR, const FSafeRotator &SSR);
	//
	/** Set:: Safe Rotator = Safe Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Safe Rotator)", CompactNodeTitle="=", Keywords="Security Set Safe Rotator EQUAL ="))
	static FSafeRotator SCO_Pure_SetSafeRotatorEqualFSR(UPARAM(Ref)FSafeRotator &FSR, const FSafeRotator &SSR, FRotator &Output);
	//
	/** Get:: Safe Rotator + Safe Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Safe Rotator)", CompactNodeTitle="+", Keywords="Security Get Safe Rotator PLUS +"))
	static FSafeRotator SCO_Pure_GetSafeRotatorPlusFSR(const FSafeRotator &FSR, const FSafeRotator &SSR, FRotator &Output);
	//
	/** Get:: Safe Rotator - Safe Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="- (Safe Rotator)", CompactNodeTitle="-", Keywords="Security Get Safe Rotator MINUS -"))
	static FSafeRotator SCO_Pure_GetSafeRotatorMinusFSR(const FSafeRotator &FSR, const FSafeRotator &SSR, FRotator &Output);
	//
	/** Get:: Safe Rotator ++ */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="++ (Safe Rotator)", CompactNodeTitle="++", Keywords="Security Get Safe Rotator ADD PLUS ++"))
	static FSafeRotator SCO_Pure_GetSafeRotatorIncreaseFSR(UPARAM(Ref)FSafeRotator &FSR, FRotator &Output);
	//
	/** Get:: Safe Rotator -- */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="-- (Safe Rotator)", CompactNodeTitle="--", Keywords="Security Get Safe Rotator LESS --"))
	static FSafeRotator SCO_Pure_GetSafeRotatorDecreaseFSR(UPARAM(Ref)FSafeRotator &FSR, FRotator &Output);
	//
	/** Get:: Safe Rotator += Safe Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Safe Rotator)", CompactNodeTitle="+=", Keywords="Security Get Safe Rotator PLUS EQUAL +="))
	static FSafeRotator SCO_Pure_GetSafeRotatorPlusEqualFSR(UPARAM(Ref)FSafeRotator &FSR, const FSafeRotator &SSR, FRotator &Output);
	//
	/** Get:: Safe Rotator -= Safe Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="-= (Safe Rotator)", CompactNodeTitle="-=", Keywords="Security Get Safe Rotator MINUS EQUAL -="))
	static FSafeRotator SCO_Pure_GetSafeRotatorMinusEqualFSR(UPARAM(Ref)FSafeRotator &FSR, const FSafeRotator &SSR, FRotator &Output);
	//
	//
	/** Get:: Safe Rotator == Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Rotator)", CompactNodeTitle="==", Keywords="Security Get Safe Rotator EQUAL =="))
	static bool SCO_Pure_GetSafeRotatorEqualRotator(const FSafeRotator &FSR, const FRotator &NR);
	//
	/** Get:: Safe Rotator != Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Rotator)", CompactNodeTitle="!=", Keywords="Security Get Safe Rotator NOT !="))
	static bool SCO_Pure_GetSafeRotatorNotEqualRotator(const FSafeRotator &FSR, const FRotator &NR);
	//
	/** Get:: Safe Rotator > Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Rotator)", CompactNodeTitle=">", Keywords="Security Get Safe Rotator GREATER >"))
	static bool SCO_Pure_GetSafeRotatorGreaterRotator(const FSafeRotator &FSR, const FRotator &NR);
	//
	/** Get:: Safe Rotator < Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Rotator)", CompactNodeTitle="<", Keywords="Security Get Safe Rotator LESS <"))
	static bool SCO_Pure_GetSafeRotatorSmallerRotator(const FSafeRotator &FSR, const FRotator &NR);
	//
	/** Get:: Safe Rotator >= Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName=">= (Rotator)", CompactNodeTitle=">=", Keywords="Security Get Safe Rotator GREATER EQUAL >="))
	static bool SCO_Pure_GetSafeRotatorGreaterEqualRotator(const FSafeRotator &FSR, const FRotator &NR);
	//
	/** Get:: Safe Rotator <= Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="<= (Rotator)", CompactNodeTitle="<=", Keywords="Security Get Safe Rotator LESS EQUAL <="))
	static bool SCO_Pure_GetSafeRotatorSmallerEqualRotator(const FSafeRotator &FSR, const FRotator &NR);
	//
	/** Set:: Safe Rotator = Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Rotator)", CompactNodeTitle="=", Keywords="Security Set Safe Rotator EQUAL ="))
	static FSafeRotator SCO_Pure_SetSafeRotatorEqualRotator(UPARAM(Ref)FSafeRotator &FSR, const FRotator &NR, FRotator &Output);
	//
	/** Get:: Safe Rotator + Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Rotator)", CompactNodeTitle="+", Keywords="Security Get Safe Rotator PLUS +"))
	static FSafeRotator SCO_Pure_GetSafeRotatorPlusRotator(const FSafeRotator &FSR, const FRotator &NR, FRotator &Output);
	//
	/** Get:: Safe Rotator - Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="- (Rotator)", CompactNodeTitle="-", Keywords="Security Get Safe Rotator MINUS -"))
	static FSafeRotator SCO_Pure_GetSafeRotatorMinusRotator(const FSafeRotator &FSR, const FRotator &NR, FRotator &Output);
	//
	/** Get:: Safe Rotator += Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Rotator)", CompactNodeTitle="+=", Keywords="Security Get Safe Rotator PLUS EQUAL +="))
	static FSafeRotator SCO_Pure_GetSafeRotatorPlusEqualRotator(UPARAM(Ref)FSafeRotator &FSR, const FRotator &NR, FRotator &Output);
	//
	/** Get:: Safe Rotator -= Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="-= (Rotator)", CompactNodeTitle="-=", Keywords="Security Get Safe Rotator MINUS EQUAL -="))
	static FSafeRotator SCO_Pure_GetSafeRotatorMinusEqualRotator(UPARAM(Ref)FSafeRotator &FSR, const FRotator &NR, FRotator &Output);
	//
	//
	/** Get:: Rotator == Safe Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Safe Rotator)", CompactNodeTitle="==", Keywords="Security Get Safe Rotator EQUAL =="))
	static bool SCO_Pure_GetRotatorEqualFSR(const FRotator &NR, const FSafeRotator &FSR);
	//
	/** Get:: Rotator != Safe Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Safe Rotator)", CompactNodeTitle="!=", Keywords="Security Get Safe Rotator NOT !="))
	static bool SCO_Pure_GetRotatorNotEqualFSR(const FRotator &NR, const FSafeRotator &FSR);
	//
	/** Get:: Rotator > Safe Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="> (Safe Rotator)", CompactNodeTitle=">", Keywords="Security Get Safe Rotator GREATER >"))
	static bool SCO_Pure_GetRotatorGreaterFSR(const FRotator &NR, const FSafeRotator &FSR);
	//
	/** Get:: Rotator < Safe Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="< (Safe Rotator)", CompactNodeTitle="<", Keywords="Security Get Safe Rotator LESS <"))
	static bool SCO_Pure_GetRotatorSmallerFSR(const FRotator &NR, const FSafeRotator &FSR);
	//
	/** Get:: Rotator >= Safe Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName=">= (Safe Rotator)", CompactNodeTitle=">=", Keywords="Security Get Safe Rotator GREATER EQUAL >="))
	static bool SCO_Pure_GetRotatorGreaterEqualFSR(const FRotator &NR, const FSafeRotator &FSR);
	//
	/** Get:: Rotator <= Safe Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="<= (Safe Rotator)", CompactNodeTitle="<=", Keywords="Security Get Safe Rotator LESS EQUAL <="))
	static bool SCO_Pure_GetRotatorSmallerEqualFSR(const FRotator &NR, const FSafeRotator &FSR);
	//
	/** Set:: Rotator = Safe Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Safe Rotator)", CompactNodeTitle="=", Keywords="Security Set Safe Rotator EQUAL ="))
	static FRotator SCO_Pure_SetRotatorEqualFSR(UPARAM(Ref)FRotator &NR, const FSafeRotator &FSR);
	//
	/** Get:: Rotator + Safe Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+ (Safe Rotator)", CompactNodeTitle="+", Keywords="Security Get Safe Rotator PLUS +"))
	static FRotator SCO_Pure_GetRotatorPlusFSR(const FRotator &NR, const FSafeRotator &FSR);
	//
	/** Get:: Rotator - Safe Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="- (Safe Rotator)", CompactNodeTitle="-", Keywords="Security Get Safe Rotator MINUS -"))
	static FRotator SCO_Pure_GetRotatorMinusFSR(const FRotator &NR, const FSafeRotator &FSR);
	//
	/** Get:: Rotator += Safe Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="+= (Safe Rotator)", CompactNodeTitle="+=", Keywords="Security Get Safe Rotator PLUS EQUAL +="))
	static FRotator SCO_Pure_GetRotatorPlusEqualFSR(UPARAM(Ref)FRotator &NR, const FSafeRotator &FSR);
	//
	/** Get:: Rotator -= Safe Rotator */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="-= (Safe Rotator)", CompactNodeTitle="-=", Keywords="Security Get Safe Rotator MINUS EQUAL -="))
	static FRotator SCO_Pure_GetRotatorMinusEqualFSR(UPARAM(Ref)FRotator &NR, const FSafeRotator &FSR);
	//
	//
	/** Get:: Safe Transform == Safe Transform */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Safe Transform)", CompactNodeTitle="==", Keywords="Security Get Safe Transform EQUAL =="))
	static bool SCO_Pure_GetSafeTransformEqualFST(const FSafeTransform &FST, const FSafeTransform &SST);
	//
	/** Get:: Safe Transform != Safe Transform */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Safe Transform)", CompactNodeTitle="!=", Keywords="Security Get Safe Transform NOT !="))
	static bool SCO_Pure_GetSafeTransformNotEqualFST(const FSafeTransform &FST, const FSafeTransform &SST);
	//
	/** Set:: Safe Transform = Safe Transform */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Safe Transform)", CompactNodeTitle="=", Keywords="Security Set Safe Transform EQUAL ="))
	static FSafeTransform SCO_Pure_SetSafeTransformEqualFST(UPARAM(Ref)FSafeTransform &FST, const FSafeTransform &SST, FTransform &Output);
	//
	//
	/** Get:: Safe Transform == Transform */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Transform)", CompactNodeTitle="==", Keywords="Security Get Safe Transform EQUAL =="))
	static bool SCO_Pure_GetSafeTransformEqualTransform(const FSafeTransform &FST, const FTransform &NT);
	//
	/** Get:: Safe Transform != Transform */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Transform)", CompactNodeTitle="!=", Keywords="Security Get Safe Transform NOT !="))
	static bool SCO_Pure_GetSafeTransformNotEqualTransform(const FSafeTransform &FST, const FTransform &NT);
	//
	/** Set:: Safe Transform = Transform */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Transform)", CompactNodeTitle="=", Keywords="Security Set Safe Transform EQUAL ="))
	static FSafeTransform SCO_Pure_SetSafeTransformEqualTransform(UPARAM(Ref)FSafeTransform &FST, const FTransform &SST, FTransform &Output);
	//
	//
	/** Get:: Transform == Safe Transform */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="== (Safe Transform)", CompactNodeTitle="==", Keywords="Security Get Safe Transform EQUAL =="))
	static bool SCO_Pure_GetTransformEqualFST(const FTransform &NT, const FSafeTransform &FST);
	//
	/** Get:: Transform != Safe Transform */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="!= (Safe Transform)", CompactNodeTitle="!=", Keywords="Security Get Safe Transform NOT !="))
	static bool SCO_Pure_GetTransformNotEqualFST(const FTransform &NT, const FSafeTransform &FST);
	//
	/** Set:: Transform = Safe Transform */
	UFUNCTION(BlueprintPure, Category="Variables|Security", meta = (DisplayName="= (Safe Transform)", CompactNodeTitle="=", Keywords="Security Set Safe Transform EQUAL ="))
	static FTransform SCO_Pure_SetTransformEqualFST(UPARAM(Ref)FTransform &NT, const FSafeTransform &FST);
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////