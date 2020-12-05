//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once
#include "BxBLibrary.generated.h"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////
//		Custom Branching Types				//
//////////////////////////////////////////////

UENUM(BlueprintType)
enum class EN_IsValid : uint8 {
	IsValid,
	IsNot
};

UENUM(BlueprintType)
enum class EN_Equals : uint8 {
	IfEquals,
	IfNot
};

UENUM(BlueprintType)
enum class EN_NotEqual : uint8 {
	IfNotEqual,
	IfSo
};

UENUM(BlueprintType)
enum class EN_Match : uint8 {
	IfMatch,
	IfNot
};

UENUM(BlueprintType)
enum class EN_IfThenElse : uint8 {
	IfTrue,
	ElseDo
};


//////////////////////////////////////////////
//		Blueprint Extension Library			//
//////////////////////////////////////////////

UCLASS()
class BXBLEXTENSIONS_API UBxBLibrary : public UBlueprintFunctionLibrary {
	GENERATED_UCLASS_BODY()
	//
	//
	//////////////////////////////////////////////////////
	//		::BRANCHES::								//
	//////////////////////////////////////////////////////
	//
	//
	/** Branch:: Checks if object 'A' is equal to object 'B'. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", DisplayName = "Object A equals B?", Keywords = "bxbl object equal", ExpandEnumAsExecs = "Branches"))
	static void Branch_OEquals(UObject *Check, UObject *Against, EN_Equals &Branches);
	//
	/** Branch:: Checks if object 'A' is not equal to object 'B'. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", DisplayName = "Object A not equal to B?", Keywords = "bxbl object not equal", ExpandEnumAsExecs = "Branches"))
	static void Branch_ONotEqual(UObject *Check, UObject *Against, EN_NotEqual &Branches);
	//
	//
	/** Branch:: Checks if string 'A' is equal to string 'B'. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "==", DisplayName = "A equals B?", Keywords = "bxbl string equal", ExpandEnumAsExecs = "Branches"))
	static void Branch_STEquals(FString Check, FString Against, EN_Equals &Branches);
	//
	/** Branch:: Checks if text 'A' is equal to text 'B'. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "==", DisplayName = "A equals B?", Keywords = "bxbl text equal", ExpandEnumAsExecs = "Branches"))
		static void Branch_TXEquals(FText Check, FText Against, EN_Equals &Branches);
	//
	//
	/** Branch:: Checks if int 'A' is equal to int 'B'. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "==", DisplayName = "A equals B?", Keywords = "bxbl int equal", ExpandEnumAsExecs = "Branches"))
	static void Branch_INTEquals(int32 Check, int32 Against, EN_Equals &Branches);
	//
	/** Branch:: Checks if int 'A' is not equal to int 'B'. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "!=", DisplayName = "A not equal to B?", Keywords = "bxbl int not equal", ExpandEnumAsExecs = "Branches"))
	static void Branch_INTNotEqual(int32 Check, int32 Against, EN_NotEqual &Branches);
	//
	/** Branch:: Checks if int 'A' is less than int 'B'. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "<", DisplayName = "A less than B?", Keywords = "bxbl int less", ExpandEnumAsExecs = "Branches"))
	static void Branch_INTLessThan(int32 Check, int32 Against, EN_IfThenElse &Branches);
	//
	/** Branch:: Checks if int 'A' is greater than int 'B'. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = ">", DisplayName = "A greater than B?", Keywords = "bxbl int greater", ExpandEnumAsExecs = "Branches"))
	static void Branch_INTGreaterThan(int32 Check, int32 Against, EN_IfThenElse &Branches);
	//
	/** Branch:: Checks if int 'A' is less or equal to int 'B'. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "<=", DisplayName = "A less or equal to B?", Keywords = "bxbl int less equal", ExpandEnumAsExecs = "Branches"))
	static void Branch_INTLessOREqual(int32 Check, int32 Against, EN_IfThenElse &Branches);
	//
	/** Branch:: Checks if int 'A' is greater or equal to int 'B'. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = ">=", DisplayName = "A greater or equal to B?", Keywords = "bxbl int greater equal", ExpandEnumAsExecs = "Branches"))
	static void Branch_INTGreaterOREqual(int32 Check, int32 Against, EN_IfThenElse &Branches);
	//
	//
	/** Branch:: Checks if float 'A' is equal to float 'B'. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "==", DisplayName = "A equals B?", Keywords = "bxbl float equal", ExpandEnumAsExecs = "Branches"))
	static void Branch_FEquals(float Check, float Against, EN_Equals &Branches);
	//
	/** Branch:: Checks if float 'A' is not equal to float 'B'. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "!=", DisplayName = "A not equal to B?", Keywords = "bxbl float not equal", ExpandEnumAsExecs = "Branches"))
	static void Branch_FNotEqual(float Check, float Against, EN_NotEqual &Branches);
	//
	/** Branch:: Checks if float 'A' is less than float 'B'. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "<", DisplayName = "A less than B?", Keywords = "bxbl float less", ExpandEnumAsExecs = "Branches"))
	static void Branch_FLessThan(float Check, float Against, EN_IfThenElse &Branches);
	//
	/** Branch:: Checks if float 'A' is greater than float 'B'. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = ">", DisplayName = "A greater than B?", Keywords = "bxbl float greater", ExpandEnumAsExecs = "Branches"))
	static void Branch_FGreaterThan(float Check, float Against, EN_IfThenElse &Branches);
	//
	/** Branch:: Checks if float 'A' is less or equal to float 'B'. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "<=", DisplayName = "A less or equal to B?", Keywords = "bxbl float less equal", ExpandEnumAsExecs = "Branches"))
	static void Branch_FLessOREqual(float Check, float Against, EN_IfThenElse &Branches);
	//
	/** Branch:: Checks if float 'A' is greater or equal to float 'B'. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = ">=", DisplayName = "A greater or equal to B?", Keywords = "bxbl float greater equal", ExpandEnumAsExecs = "Branches"))
	static void Branch_FGreaterOREqual(float Check, float Against, EN_IfThenElse &Branches);
	//
	//
	/** Branch:: Checks if Color 'A' matches Color 'B' by given Tolerance factor. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", DisplayName = "Does Colors Match?", Keywords = "bxbl color match equals", ExpandEnumAsExecs = "Branches"))
	static void Branch_Color(FLinearColor Check, FLinearColor Against, EN_Match &Branches, float Tolerance = 0.01f);
	//
	//
	/** Branch:: Checks if actor 'A' is equal to actor 'B'. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", DisplayName = "Actor A equals B?", Keywords = "bxbl actor equal", ExpandEnumAsExecs = "Branches"))
	static void Branch_AEquals(AActor *Check, AActor *Against, EN_Equals &Branches);
	//
	/** Branch:: Checks if actor 'A' is not equal to actor 'B'. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", DisplayName = "Actor A not equal to B?", Keywords = "bxbl actor not equal", ExpandEnumAsExecs = "Branches"))
	static void Branch_ANotEqual(AActor *Check, AActor *Against, EN_NotEqual &Branches);
	//
	//
	/** Branch:: Checks if component 'A' is equal to component 'B'. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", DisplayName = "Component A equals B?", Keywords = "bxbl component equal", ExpandEnumAsExecs = "Branches"))
	static void Branch_SCEquals(USceneComponent *Check, USceneComponent *Against, EN_Equals &Branches);
	//
	/** Branch:: Checks if component 'A' is not equal to component 'B'. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", DisplayName = "Component A not equal to B?", Keywords = "bxbl component not equal", ExpandEnumAsExecs = "Branches"))
	static void Branch_SCNotEqual(USceneComponent *Check, USceneComponent *Against, EN_NotEqual &Branches);
	//
	//
	/** Branch:: Checks if primitive 'A' is equal to primitive 'B'. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", DisplayName = "Primitive A equals B?", Keywords = "bxbl primitive equal", ExpandEnumAsExecs = "Branches"))
	static void Branch_PCEquals(UPrimitiveComponent *Check, UPrimitiveComponent *Against, EN_Equals &Branches);
	//
	/** Branch:: Checks if primitive 'A' is not equal to primitive 'B'. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", DisplayName = "Primitive A not equal to B?", Keywords = "bxbl primitive not equal", ExpandEnumAsExecs = "Branches"))
	static void Branch_PCNotEqual(UPrimitiveComponent *Check, UPrimitiveComponent *Against, EN_NotEqual &Branches);
	//
	//
	/** Branch:: Checks if Enum 'A' matches Enum 'B'. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", DisplayName = "Does Enums Match?", Keywords = "bxbl enum match equals", ExpandEnumAsExecs = "Branches"))
	static void Branch_Trace(TEnumAsByte<ETraceTypeQuery>Check, TEnumAsByte<ETraceTypeQuery>Against, EN_Match &Branches);
	//
	/** Branch:: Checks if Enum 'A' matches Enum 'B'. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", DisplayName = "Does Enums Match?", Keywords = "bxbl enum match equals", ExpandEnumAsExecs = "Branches"))
	static void Branch_PhysMat(TEnumAsByte<EObjectTypeQuery>Check, TEnumAsByte<EObjectTypeQuery>Against, EN_Match &Branches);
	//
	//
	//////////////////////////////////////////////////////
	//		::ARITHMETICS::								//
	//////////////////////////////////////////////////////
	//
	//
	/** Math:: (Pos)increments Value. (Value+1) */
	UFUNCTION(BlueprintPure, Category = "Blueprint Extensions|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "++", DisplayName = "(Pos)increment", Keywords = "bxbl int increment ++"))
	static int32 INTPosIncrement(int32 Value);
	//
	/** Math:: (Pre)increments Value. (Value+1) */
	UFUNCTION(BlueprintPure, Category = "Blueprint Extensions|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "++", DisplayName = "(Pre)increment", Keywords = "bxbl int increment ++"))
	static int32 INTPreIncrement(int32 Value);
	//
	/** Math:: (Pos)decrements Value. (Value-1) */
	UFUNCTION(BlueprintPure, Category = "Blueprint Extensions|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "--", DisplayName = "(Pos)decrement", Keywords = "bxbl int increment --"))
	static int32 INTPosDecrement(int32 Value);
	//
	/** Math:: (Pre)decrements Value. (Value+1) */
	UFUNCTION(BlueprintPure, Category = "Blueprint Extensions|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "--", DisplayName = "(Pre)decrement", Keywords = "bxbl int increment --"))
	static int32 INTPreDecrement(int32 Value);
	//
	/** Math:: Increments Value. (Value+Value). */
	UFUNCTION(BlueprintPure, Category = "Blueprint Extensions|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "+=", DisplayName = "Increment", Keywords = "bxbl int increment +="))
	static int32 INTIncrement(int32 Value);
	/** Math:: Decrements Value. (Value-Value). */
	UFUNCTION(BlueprintPure, Category = "Blueprint Extensions|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "-=", DisplayName = "Decrement", Keywords = "bxbl int decrement -="))
	static int32 INTDecrement(int32 Value);
	//
	/** Math:: Multiply Value. (Value*Value). */
	UFUNCTION(BlueprintPure, Category = "Blueprint Extensions|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "*=", DisplayName = "Multiply", Keywords = "bxbl int multiply *="))
	static int32 INTMultiply(int32 Value);
	//
	/** Math:: Divide Value. (Value/Value*i). */
	UFUNCTION(BlueprintPure, Category = "Blueprint Extensions|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "/=", DisplayName = "Divide", Keywords = "bxbl int divide /="))
	static int32 INTDivide(int32 Value, int32 i);
	//
	/** Math:: Mod. (Value=Value%i). */
	UFUNCTION(BlueprintPure, Category = "Blueprint Extensions|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "%=", DisplayName = "Modulo", Keywords = "bxbl int modulo %="))
	static int32 INTModulo(int32 Value, int32 i);
	//
	/** Math:: Percent (Value=Value*i/100). */
	UFUNCTION(BlueprintPure, Category = "Blueprint Extensions|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "%%", DisplayName = "Percent", Keywords = "bxbl int percent %%"))
	static int32 INTPercent(int32 Value, int32 i);
	//
	//
	/** Math:: (Pos)increments Value. (Value+1) */
	UFUNCTION(BlueprintPure, Category = "Blueprint Extensions|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "++", DisplayName = "(Pos)increment", Keywords = "bxbl float increment ++"))
	static float FPosIncrement(float Value);
	//
	/** Math:: (Pre)increments Value. (Value+1) */
	UFUNCTION(BlueprintPure, Category = "Blueprint Extensions|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "++", DisplayName = "(Pre)increment", Keywords = "bxbl float increment ++"))
	static float FPreIncrement(float Value);
	//
	/** Math:: (Pos)decrements Value. (Value-1) */
	UFUNCTION(BlueprintPure, Category = "Blueprint Extensions|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "--", DisplayName = "(Pos)decrement", Keywords = "bxbl float increment --"))
	static float FPosDecrement(float Value);
	//
	/** Math:: (Pre)decrements Value. (Value+1) */
	UFUNCTION(BlueprintPure, Category = "Blueprint Extensions|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "--", DisplayName = "(Pre)decrement", Keywords = "bxbl float increment --"))
	static float FPreDecrement(float Value);
	//
	/** Math:: Increments Value. (Value+Value). */
	UFUNCTION(BlueprintPure, Category = "Blueprint Extensions|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "+=", DisplayName = "Increment", Keywords = "bxbl float increment +="))
	static float FIncrement(float Value);
	/** Math:: Decrements Value. (Value-Value). */
	UFUNCTION(BlueprintPure, Category = "Blueprint Extensions|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "-=", DisplayName = "Decrement", Keywords = "bxbl float decrement -="))
	static float FDecrement(float Value);
	//
	/** Math:: Multiply Value. (Value*Value). */
	UFUNCTION(BlueprintPure, Category = "Blueprint Extensions|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "*=", DisplayName = "Multiply", Keywords = "bxbl float multiply *="))
	static float FMultiply(float Value);
	//
	/** Math:: Divide Value. (Value/Value*i). */
	UFUNCTION(BlueprintPure, Category = "Blueprint Extensions|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "/=", DisplayName = "Divide", Keywords = "bxbl int divide /="))
	static float FDivide(float Value, float f);
	//
	/** Math:: Percent (Value=Value*i/100). */
	UFUNCTION(BlueprintPure, Category = "Blueprint Extensions|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "%%", DisplayName = "Percent", Keywords = "bxbl int percent %%"))
	static float FPercent(float Value, float f);
	//
	//
	//////////////////////////////////////////////////////
	//		::METHODS::									//
	//////////////////////////////////////////////////////
	//
	//
	/** Method:: Level Instance Streaming. */
	UFUNCTION(BlueprintPure, Category = "Blueprint Extensions|Methods", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", DisplayName = "Load Level Instance", Keywords = "bxbl Level Stream Instance"))
	static FName LoadLevelInstance(UObject* WorldContextObject, FString MapFolderOffOfContent, FString LevelName, int32 InstanceNumber, FVector Location, FRotator Rotation);
};