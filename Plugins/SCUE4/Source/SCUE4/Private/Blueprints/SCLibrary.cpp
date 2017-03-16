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

#include "SCLibrary.h"
#include "../SCUE4PrivatePCH.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#if PLATFORM_WINDOWS
#pragma region GET SET
#endif
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool USCLibrary::SCL_Pure_GetSafeBool(UPARAM(ref)FSafeBool &SB) {
	return SB.GetValue();
}

bool USCLibrary::SCL_Pure_GetSafeBoolWithKey(UPARAM(ref)FSafeBool &SB, FString Key) {
	return SB.GetValue(&Key);
}

bool USCLibrary::SCL_Callable_GetSafeBool(UPARAM(ref)FSafeBool &SB) {
	return SB.GetValue();
}

bool USCLibrary::SCL_Callable_GetSafeBoolWithKey(UPARAM(ref)FSafeBool &SB, FString Key) {
	return SB.GetValue(&Key);
}

//

bool USCLibrary::SCL_Pure_SetSafeBool(UPARAM(ref)FSafeBool &SB, const bool Value) {
	SB.SetValue(Value); return SB.GetValue();
}

bool USCLibrary::SCL_Pure_SetSafeBoolWithKey(UPARAM(ref)FSafeBool &SB, FString Key, const bool Value) {
	SB.SetValue(&Key,Value); return SB.GetValue();
}

bool USCLibrary::SCL_Callable_SetSafeBool(UPARAM(ref)FSafeBool &SB, const bool Value) {
	SB.SetValue(Value); return SB.GetValue();
}

bool USCLibrary::SCL_Callable_SetSafeBoolWithKey(UPARAM(ref)FSafeBool &SB, FString Key, const bool Value) {
	SB.SetValue(&Key,Value); return SB.GetValue();
}

//

int32 USCLibrary::SCL_Pure_GetSafeInt(UPARAM(ref)FSafeInt &SI) {
	return SI.GetValue();
}

int32 USCLibrary::SCL_Pure_GetSafeIntWithKey(UPARAM(ref)FSafeInt &SI, FString Key) {
	return SI.GetValue(&Key);
}

int32 USCLibrary::SCL_Callable_GetSafeInt(UPARAM(ref)FSafeInt &SI) {
	return SI.GetValue();
}

int32 USCLibrary::SCL_Callable_GetSafeIntWithKey(UPARAM(ref)FSafeInt &SI, FString Key) {
	return SI.GetValue(&Key);
}

//

int32 USCLibrary::SCL_Pure_SetSafeInt(UPARAM(ref)FSafeInt &SI, const int32 Value) {
	SI.SetValue(Value); return SI.GetValue();
}

int32 USCLibrary::SCL_Pure_SetSafeIntWithKey(UPARAM(ref)FSafeInt &SI, FString Key, const int32 Value) {
	SI.SetValue(&Key,Value); return SI.GetValue(&Key);
}

int32 USCLibrary::SCL_Callable_SetSafeInt(UPARAM(ref)FSafeInt &SI, const int32 Value) {
	SI.SetValue(Value); return SI.GetValue();
}

int32 USCLibrary::SCL_Callable_SetSafeIntWithKey(UPARAM(ref)FSafeInt &SI, FString Key, const int32 Value) {
	SI.SetValue(&Key,Value); return SI.GetValue(&Key);
}

//

uint8 USCLibrary::SCL_Pure_GetSafeByte(UPARAM(ref)FSafeByte &SB) {
	return SB.GetValue();
}

uint8 USCLibrary::SCL_Pure_GetSafeByteWithKey(UPARAM(ref)FSafeByte &SB, FString Key) {
	return SB.GetValue(&Key);
}

uint8 USCLibrary::SCL_Callable_GetSafeByte(UPARAM(ref)FSafeByte &SB) {
	return SB.GetValue();
}

uint8 USCLibrary::SCL_Callable_GetSafeByteWithKey(UPARAM(ref)FSafeByte &SB, FString Key) {
	return SB.GetValue(&Key);
}

//

uint8 USCLibrary::SCL_Pure_SetSafeByte(UPARAM(ref)FSafeByte &SB, const uint8 Value) {
	SB.SetValue(Value); return SB.GetValue();
}

uint8 USCLibrary::SCL_Pure_SetSafeByteWithKey(UPARAM(ref)FSafeByte &SB, FString Key, const uint8 Value) {
	SB.SetValue(&Key,Value); return SB.GetValue(&Key);
}

uint8 USCLibrary::SCL_Callable_SetSafeByte(UPARAM(ref)FSafeByte &SB, const uint8 Value) {
	SB.SetValue(Value); return SB.GetValue();
}

uint8 USCLibrary::SCL_Callable_SetSafeByteWithKey(UPARAM(ref)FSafeByte &SB, FString Key, const uint8 Value) {
	SB.SetValue(&Key,Value); return SB.GetValue(&Key);
}

//

float USCLibrary::SCL_Pure_GetSafeFloat(UPARAM(ref)FSafeFloat &SF) {
	return SF.GetValue();
}

float USCLibrary::SCL_Pure_GetSafeFloatWithKey(UPARAM(ref)FSafeFloat &SF, FString Key) {
	return SF.GetValue(&Key);
}

float USCLibrary::SCL_Callable_GetSafeFloat(UPARAM(ref)FSafeFloat &SF) {
	return SF.GetValue();
}

float USCLibrary::SCL_Callable_GetSafeFloatWithKey(UPARAM(ref)FSafeFloat &SF, FString Key) {
	return SF.GetValue(&Key);
}

//

float USCLibrary::SCL_Pure_SetSafeFloat(UPARAM(ref)FSafeFloat &SF, const float Value) {
	SF.SetValue(Value); return SF.GetValue();
}

float USCLibrary::SCL_Pure_SetSafeFloatWithKey(UPARAM(ref)FSafeFloat &SF, FString Key, const float Value) {
	SF.SetValue(&Key,Value); return SF.GetValue(&Key);
}

float USCLibrary::SCL_Callable_SetSafeFloat(UPARAM(ref)FSafeFloat &SF, const float Value) {
	SF.SetValue(Value); return SF.GetValue();
}

float USCLibrary::SCL_Callable_SetSafeFloatWithKey(UPARAM(ref)FSafeFloat &SF, FString Key, const float Value) {
	SF.SetValue(&Key,Value); return SF.GetValue(&Key);
}

//

FName USCLibrary::SCL_Pure_GetSafeName(UPARAM(ref)FSafeName &SN) {
	return SN.GetValue();
}

FName USCLibrary::SCL_Pure_GetSafeNameWithKey(UPARAM(ref)FSafeName &SN, FString Key) {
	return SN.GetValue(&Key);
}

FName USCLibrary::SCL_Callable_GetSafeName(UPARAM(ref)FSafeName &SN) {
	return SN.GetValue();
}

FName USCLibrary::SCL_Callable_GetSafeNameWithKey(UPARAM(ref)FSafeName &SN, FString Key) {
	return SN.GetValue(&Key);
}

//

FName USCLibrary::SCL_Pure_SetSafeName(UPARAM(ref)FSafeName &SN, const FName Value) {
	SN.SetValue(Value); return SN.GetValue();
}

FName USCLibrary::SCL_Pure_SetSafeNameWithKey(UPARAM(ref)FSafeName &SN, FString Key, const FName Value) {
	SN.SetValue(&Key,Value); return SN.GetValue(&Key);
}

FName USCLibrary::SCL_Callable_SetSafeName(UPARAM(ref)FSafeName &SN, const FName Value) {
	SN.SetValue(Value); return SN.GetValue();
}

FName USCLibrary::SCL_Callable_SetSafeNameWithKey(UPARAM(ref)FSafeName &SN, FString Key, const FName Value) {
	SN.SetValue(&Key,Value); return SN.GetValue(&Key);
}

//

FString USCLibrary::SCL_Pure_GetSafeString(UPARAM(ref)FSafeString &SS) {
	return SS.GetValue();
}

FString USCLibrary::SCL_Pure_GetSafeStringWithKey(UPARAM(ref)FSafeString &SS, FString Key) {
	return SS.GetValue(&Key);
}

FString USCLibrary::SCL_Callable_GetSafeString(UPARAM(ref)FSafeString &SS) {
	return SS.GetValue();
}

FString USCLibrary::SCL_Callable_GetSafeStringWithKey(UPARAM(ref)FSafeString &SS, FString Key) {
	return SS.GetValue(&Key);
}

//

FString USCLibrary::SCL_Pure_SetSafeString(UPARAM(ref)FSafeString &SS, const FString Value) {
	SS.SetValue(Value); return SS.GetValue();
}

FString USCLibrary::SCL_Pure_SetSafeStringWithKey(UPARAM(ref)FSafeString &SS, FString Key, const FString Value) {
	SS.SetValue(&Key,Value); return SS.GetValue(&Key);
}

FString USCLibrary::SCL_Callable_SetSafeString(UPARAM(ref)FSafeString &SS, const FString Value) {
	SS.SetValue(Value); return SS.GetValue();
}

FString USCLibrary::SCL_Callable_SetSafeStringWithKey(UPARAM(ref)FSafeString &SS, FString Key, const FString Value) {
	SS.SetValue(&Key,Value); return SS.GetValue(&Key);
}

//

FText USCLibrary::SCL_Pure_GetSafeText(UPARAM(ref)FSafeText &ST) {
	return ST.GetValue();
}

FText USCLibrary::SCL_Pure_GetSafeTextWithKey(UPARAM(ref)FSafeText &ST, FString Key) {
	return ST.GetValue(&Key);
}

FText USCLibrary::SCL_Callable_GetSafeText(UPARAM(ref)FSafeText &ST) {
	return ST.GetValue();
}

FText USCLibrary::SCL_Callable_GetSafeTextWithKey(UPARAM(ref)FSafeText &ST, FString Key) {
	return ST.GetValue(&Key);
}

//

FText USCLibrary::SCL_Pure_SetSafeText(UPARAM(ref)FSafeText &ST, const FText Value) {
	ST.SetValue(Value); return ST.GetValue();
}

FText USCLibrary::SCL_Pure_SetSafeTextWithKey(UPARAM(ref)FSafeText &ST, FString Key, const FText Value) {
	ST.SetValue(&Key,Value); return ST.GetValue(&Key);
}

FText USCLibrary::SCL_Callable_SetSafeText(UPARAM(ref)FSafeText &ST, const FText Value) {
	ST.SetValue(Value); return ST.GetValue();
}

FText USCLibrary::SCL_Callable_SetSafeTextWithKey(UPARAM(ref)FSafeText &ST, FString Key, const FText Value) {
	ST.SetValue(&Key,Value); return ST.GetValue(&Key);
}

//

FVector2D USCLibrary::SCL_Pure_GetSafeVector2D(UPARAM(ref)FSafeVector2D &SV) {
	return SV.GetValue();
}

FVector2D USCLibrary::SCL_Pure_GetSafeVector2DWithKey(UPARAM(ref)FSafeVector2D &SV, FString Key) {
	return SV.GetValue(&Key);
}

FVector2D USCLibrary::SCL_Callable_GetSafeVector2D(UPARAM(ref)FSafeVector2D &SV) {
	return SV.GetValue();
}

FVector2D USCLibrary::SCL_Callable_GetSafeVector2DWithKey(UPARAM(ref)FSafeVector2D &SV, FString Key) {
	return SV.GetValue(&Key);
}

//

FVector2D USCLibrary::SCL_Pure_SetSafeVector2D(UPARAM(ref)FSafeVector2D &SV, const FVector2D Value) {
	SV.SetValue(Value); return SV.GetValue();
}

FVector2D USCLibrary::SCL_Pure_SetSafeVector2DWithKey(UPARAM(ref)FSafeVector2D &SV, FString Key, const FVector2D Value) {
	SV.SetValue(&Key,Value); return SV.GetValue(&Key);
}

FVector2D USCLibrary::SCL_Callable_SetSafeVector2D(UPARAM(ref)FSafeVector2D &SV, const FVector2D Value) {
	SV.SetValue(Value); return SV.GetValue();
}

FVector2D USCLibrary::SCL_Callable_SetSafeVector2DWithKey(UPARAM(ref)FSafeVector2D &SV, FString Key, const FVector2D Value) {
	SV.SetValue(&Key,Value); return SV.GetValue(&Key);
}

//

FVector USCLibrary::SCL_Pure_GetSafeVector3D(UPARAM(ref)FSafeVector3D &SV) {
	return SV.GetValue();
}

FVector USCLibrary::SCL_Pure_GetSafeVector3DWithKey(UPARAM(ref)FSafeVector3D &SV, FString Key) {
	return SV.GetValue(&Key);
}

FVector USCLibrary::SCL_Callable_GetSafeVector3D(UPARAM(ref)FSafeVector3D &SV) {
	return SV.GetValue();
}

FVector USCLibrary::SCL_Callable_GetSafeVector3DWithKey(UPARAM(ref)FSafeVector3D &SV, FString Key) {
	return SV.GetValue(&Key);
}

//

FVector USCLibrary::SCL_Pure_SetSafeVector3D(UPARAM(ref)FSafeVector3D &SV, const FVector Value) {
	SV.SetValue(Value); return SV.GetValue();
}

FVector USCLibrary::SCL_Pure_SetSafeVector3DWithKey(UPARAM(ref)FSafeVector3D &SV, FString Key, const FVector Value) {
	SV.SetValue(&Key,Value); return SV.GetValue(&Key);
}

FVector USCLibrary::SCL_Callable_SetSafeVector3D(UPARAM(ref)FSafeVector3D &SV, const FVector Value) {
	SV.SetValue(Value); return SV.GetValue();
}

FVector USCLibrary::SCL_Callable_SetSafeVector3DWithKey(UPARAM(ref)FSafeVector3D &SV, FString Key, const FVector Value) {
	SV.SetValue(&Key,Value); return SV.GetValue(&Key);
}

//

FVector4 USCLibrary::SCL_Pure_GetSafeVector4D(UPARAM(ref)FSafeVector4D &SV) {
	return SV.GetValue();
}

FVector4 USCLibrary::SCL_Pure_GetSafeVector4DWithKey(UPARAM(ref)FSafeVector4D &SV, FString Key) {
	return SV.GetValue(&Key);
}

FVector4 USCLibrary::SCL_Callable_GetSafeVector4D(UPARAM(ref)FSafeVector4D &SV) {
	return SV.GetValue();
}

FVector4 USCLibrary::SCL_Callable_GetSafeVector4DWithKey(UPARAM(ref)FSafeVector4D &SV, FString Key) {
	return SV.GetValue(&Key);
}

//

FVector4 USCLibrary::SCL_Pure_SetSafeVector4D(UPARAM(ref)FSafeVector4D &SV, UPARAM(ref)FVector4& Value) {
	SV.SetValue(&Value); return SV.GetValue();
}

FVector4 USCLibrary::SCL_Pure_SetSafeVector4DWithKey(UPARAM(ref)FSafeVector4D &SV, FString Key, UPARAM(ref)FVector4& Value) {
	SV.SetValue(&Key,&Value); return SV.GetValue(&Key);
}

FVector4 USCLibrary::SCL_Callable_SetSafeVector4D(UPARAM(ref)FSafeVector4D &SV, UPARAM(ref)FVector4& Value) {
	SV.SetValue(&Value); return SV.GetValue();
}

FVector4 USCLibrary::SCL_Callable_SetSafeVector4DWithKey(UPARAM(ref)FSafeVector4D &SV, FString Key, UPARAM(ref)FVector4& Value) {
	SV.SetValue(&Key,&Value); return SV.GetValue(&Key);
}

//

FLinearColor USCLibrary::SCL_Pure_GetSafeColor(UPARAM(ref)FSafeColor &SC) {
	return SC.GetValue();
}

FLinearColor USCLibrary::SCL_Pure_GetSafeColorWithKey(UPARAM(ref)FSafeColor &SC, FString Key) {
	return SC.GetValue(&Key);
}

FLinearColor USCLibrary::SCL_Callable_GetSafeColor(UPARAM(ref)FSafeColor &SC) {
	return SC.GetValue();
}

FLinearColor USCLibrary::SCL_Callable_GetSafeColorWithKey(UPARAM(ref)FSafeColor &SC, FString Key) {
	return SC.GetValue(&Key);
}

//

FLinearColor USCLibrary::SCL_Pure_SetSafeColor(UPARAM(ref)FSafeColor &SC, UPARAM(ref)FLinearColor& Value) {
	SC.SetValue(&Value); return SC.GetValue();
}

FLinearColor USCLibrary::SCL_Pure_SetSafeColorWithKey(UPARAM(ref)FSafeColor &SC, FString Key, UPARAM(ref)FLinearColor& Value) {
	SC.SetValue(&Key,&Value); return SC.GetValue(&Key);
}

FLinearColor USCLibrary::SCL_Callable_SetSafeColor(UPARAM(ref)FSafeColor &SC, UPARAM(ref)FLinearColor& Value) {
	SC.SetValue(&Value); return SC.GetValue();
}

FLinearColor USCLibrary::SCL_Callable_SetSafeColorWithKey(UPARAM(ref)FSafeColor &SC, FString Key, UPARAM(ref)FLinearColor& Value) {
	SC.SetValue(&Key,&Value); return SC.GetValue(&Key);
}

//

FRotator USCLibrary::SCL_Pure_GetSafeRotator(UPARAM(ref)FSafeRotator &SR) {
	return SR.GetValue();
}

FRotator USCLibrary::SCL_Pure_GetSafeRotatorWithKey(UPARAM(ref)FSafeRotator &SR, FString Key) {
	return SR.GetValue(&Key);
}

FRotator USCLibrary::SCL_Callable_GetSafeRotator(UPARAM(ref)FSafeRotator &SR) {
	return SR.GetValue();
}

FRotator USCLibrary::SCL_Callable_GetSafeRotatorWithKey(UPARAM(ref)FSafeRotator &SR, FString Key) {
	return SR.GetValue(&Key);
}

//

FRotator USCLibrary::SCL_Pure_SetSafeRotator(UPARAM(ref)FSafeRotator &SR, const FRotator Value) {
	SR.SetValue(Value); return SR.GetValue();
}

FRotator USCLibrary::SCL_Pure_SetSafeRotatorWithKey(UPARAM(ref)FSafeRotator &SR, FString Key, const FRotator Value) {
	SR.SetValue(&Key,Value); return SR.GetValue(&Key);
}

FRotator USCLibrary::SCL_Callable_SetSafeRotator(UPARAM(ref)FSafeRotator &SR, const FRotator Value) {
	SR.SetValue(Value); return SR.GetValue();
}

FRotator USCLibrary::SCL_Callable_SetSafeRotatorWithKey(UPARAM(ref)FSafeRotator &SR, FString Key, const FRotator Value) {
	SR.SetValue(&Key,Value); return SR.GetValue(&Key);
}

//

FTransform USCLibrary::SCL_Pure_GetSafeTransform(UPARAM(ref)FSafeTransform &ST) {
	return ST.GetValue();
}

FTransform USCLibrary::SCL_Pure_GetSafeTransformWithKey(UPARAM(ref)FSafeTransform &ST, FString Key) {
	return ST.GetValue(&Key);
}

FTransform USCLibrary::SCL_Callable_GetSafeTransform(UPARAM(ref)FSafeTransform &ST) {
	return ST.GetValue();
}

FTransform USCLibrary::SCL_Callable_GetSafeTransformWithKey(UPARAM(ref)FSafeTransform &ST, FString Key) {
	return ST.GetValue(&Key);
}

//

FTransform USCLibrary::SCL_Pure_SetSafeTransform(UPARAM(ref)FSafeTransform &ST, UPARAM(ref)FTransform& Value) {
	ST.SetValue(&Value); return ST.GetValue();
}

FTransform USCLibrary::SCL_Pure_SetSafeTransformWithKey(UPARAM(ref)FSafeTransform &ST, FString Key, UPARAM(ref)FTransform& Value) {
	ST.SetValue(&Key,&Value); return ST.GetValue();
}

FTransform USCLibrary::SCL_Callable_SetSafeTransform(UPARAM(ref)FSafeTransform &ST, UPARAM(ref)FTransform& Value) {
	ST.SetValue(&Value); return ST.GetValue();
}

FTransform USCLibrary::SCL_Callable_SetSafeTransformWithKey(UPARAM(ref)FSafeTransform &ST, FString Key, UPARAM(ref)FTransform& Value) {
	ST.SetValue(&Key,&Value); return ST.GetValue();
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#if PLATFORM_WINDOWS
#pragma endregion GET SET
#pragma region OPERATORS
#endif
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// FSBool

/* FSafe -> FSafe */

FSafeBool USCLibrary::SCO_Pure_SetSafeBoolEqualFSB(UPARAM(ref)FSafeBool &FSB, UPARAM(ref)FSafeBool &SSB, bool &Output) {
	*&FSB = *&SSB; Output = FSB.GetValue(); return *&FSB;
}

FSafeBool USCLibrary::SCO_Pure_GetSafeBoolEqualFSB(UPARAM(ref)FSafeBool &FSB, UPARAM(ref)FSafeBool &SSB, bool &Output) {
	Output = (*&FSB == *&SSB); return FSafeBool(Output);
}

FSafeBool USCLibrary::SCO_Pure_GetSafeBoolNotEqualFSB(UPARAM(ref)FSafeBool &FSB, UPARAM(ref)FSafeBool &SSB, bool &Output) {
	Output = (*&FSB != *&SSB); return FSafeBool(Output);
}

FSafeBool USCLibrary::SCO_Pure_GetSafeBoolAndFSB(UPARAM(ref)FSafeBool &FSB, UPARAM(ref)FSafeBool &SSB, bool &Output) {
	Output = (*&FSB && *&SSB); return FSafeBool(Output);
}

FSafeBool USCLibrary::SCO_Pure_GetSafeBoolOrFSB(UPARAM(ref)FSafeBool &FSB, UPARAM(ref)FSafeBool &SSB, bool &Output) {
	Output = (*&FSB || *&SSB); return FSafeBool(Output);
}

/* Native -> FSafe */

FSafeBool USCLibrary::SCO_Pure_SetSafeBoolEqualBool(UPARAM(ref)FSafeBool &FSB, UPARAM(ref)bool &NB, bool &Output) {
	*&FSB = *&NB; Output = FSB.GetValue(); return *&FSB;
}

FSafeBool USCLibrary::SCO_Pure_GetSafeBoolEqualBool(UPARAM(ref)FSafeBool &FSB, UPARAM(ref)bool &NB, bool &Output) {
	Output = (*&FSB == *&NB); return FSafeBool(Output);
}

FSafeBool USCLibrary::SCO_Pure_GetSafeBoolNotEqualBool(UPARAM(ref)FSafeBool &FSB, UPARAM(ref)bool &NB, bool &Output) {
	Output = (*&FSB != *&NB); return FSafeBool(Output);
}

FSafeBool USCLibrary::SCO_Pure_GetSafeBoolAndBool(UPARAM(ref)FSafeBool &FSB, UPARAM(ref)bool &NB, bool &Output) {
	Output = (*&FSB && *&NB); return FSafeBool(Output);
}

FSafeBool USCLibrary::SCO_Pure_GetSafeBoolOrBool(UPARAM(ref)FSafeBool &FSB, UPARAM(ref)bool &NB, bool &Output) {
	Output = (*&FSB || *&NB); return FSafeBool(Output);
}

/* FSafe -> Native */

bool USCLibrary::SCO_Pure_SetBoolEqualFSB(UPARAM(ref)bool &NB, UPARAM(ref)FSafeBool &FSB) {
	return (*&NB = FSB.GetValue());
}

bool USCLibrary::SCO_Pure_GetBoolEqualFSB(UPARAM(ref)bool &NB, UPARAM(ref)FSafeBool &FSB) {
	return (*&NB == *&FSB);
}

bool USCLibrary::SCO_Pure_GetBoolNotEqualFSB(UPARAM(ref)bool &NB, UPARAM(ref)FSafeBool &FSB) {
	return (*&NB != *&FSB);
}

bool USCLibrary::SCO_Pure_GetBoolAndFSB(UPARAM(ref)bool &NB, UPARAM(ref)FSafeBool &FSB) {
	return (*&NB && *&FSB);
}

bool USCLibrary::SCO_Pure_GetBoolOrFSB(UPARAM(ref)bool &NB, UPARAM(ref)FSafeBool &FSB) {
	return (*&NB || *&FSB);
}

// FSByte

/* FSafe -> FSafe */

bool USCLibrary::SCO_Pure_GetSafeByteEqualFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB) {
	return (*&FSB == *&SSB);
}

bool USCLibrary::SCO_Pure_GetSafeByteNotEqualFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB) {
	return (*&FSB != *&SSB);
}

bool USCLibrary::SCO_Pure_GetSafeByteGreaterFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB) {
	return (*&FSB > *&SSB);
}

bool USCLibrary::SCO_Pure_GetSafeByteSmallerFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB) {
	return (*&FSB < *&SSB);
}

bool USCLibrary::SCO_Pure_GetSafeByteGreaterEqualFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB) {
	return (*&FSB >= *&SSB);
}

bool USCLibrary::SCO_Pure_GetSafeByteSmallerEqualFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB) {
	return (*&FSB <= *&SSB);
}

FSafeByte USCLibrary::SCO_Pure_SetSafeByteEqualFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output) {
	*&FSB = *&SSB; Output = FSB.GetValue(); return *&FSB;
}

FSafeByte USCLibrary::SCO_Pure_GetSafeBytePlusFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output) {
	Output = (*&FSB + *&SSB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteMinusFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output) {
	Output = (*&FSB - *&SSB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteTimesFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output) {
	Output = (*&FSB * *&SSB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteDivideFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output) {
	Output = (*&FSB / *&SSB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteIncreaseFSB(UPARAM(ref)FSafeByte &FSB, uint8 &Output) {
	Output = (++ *&FSB).GetValue(); return *&FSB;
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteDecreaseFSB(UPARAM(ref)FSafeByte &FSB, uint8 &Output) {
	Output = (-- *&FSB).GetValue(); return *&FSB;
}

FSafeByte USCLibrary::SCO_Pure_GetSafeBytePlusEqualFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output) {
	*&FSB = (*&FSB += *&SSB); Output = FSB.GetValue(); return *&FSB;
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteMinusEqualFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output) {
	*&FSB = (*&FSB -= *&SSB); Output = FSB.GetValue(); return *&FSB;
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteNotFSB(UPARAM(ref)FSafeByte &FSB, uint8 &Output) {
	Output = ( ~ *&FSB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteModFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output) {
	Output = (*&FSB % *&SSB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteAndFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output) {
	Output = (*&FSB & *&SSB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteOrFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output) {
	Output = (*&FSB | *&SSB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteXorFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output) {
	Output = (*&FSB ^ *&SSB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteShiftRFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output) {
	Output = (*&FSB >> *&SSB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteShiftLFSB(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)FSafeByte &SSB, uint8 &Output) {
	Output = (*&FSB << *&SSB).GetValue(); return FSafeByte(Output);
}

/* Native -> FSafe */

bool USCLibrary::SCO_Pure_GetSafeByteEqualByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB) {
	return (*&FSB == *&NB);
}

bool USCLibrary::SCO_Pure_GetSafeByteNotEqualByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB) {
	return (*&FSB != *&NB);
}

bool USCLibrary::SCO_Pure_GetSafeByteGreaterByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB) {
	return (*&FSB > *&NB);
}

bool USCLibrary::SCO_Pure_GetSafeByteSmallerByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB) {
	return (*&FSB < *&NB);
}

bool USCLibrary::SCO_Pure_GetSafeByteGreaterEqualByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB) {
	return (*&FSB >= *&NB);
}

bool USCLibrary::SCO_Pure_GetSafeByteSmallerEqualByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB) {
	return (*&FSB <= *&NB);
}

FSafeByte USCLibrary::SCO_Pure_SetSafeByteEqualByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output) {
	*&FSB = *&NB; Output = FSB.GetValue(); return *&FSB;
}

FSafeByte USCLibrary::SCO_Pure_GetSafeBytePlusByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output) {
	Output = (*&FSB + *&NB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteMinusByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output) {
	Output = (*&FSB - *&NB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteTimesByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output) {
	Output = (*&FSB * *&NB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteDivideByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output) {
	Output = (*&FSB / *&NB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeBytePlusEqualByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output) {
	*&FSB = (*&FSB += *&NB); Output = FSB.GetValue(); return *&FSB;
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteMinusEqualByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output) {
	*&FSB = (*&FSB -= *&NB); Output = FSB.GetValue(); return *&FSB;
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteNotByte(UPARAM(ref)uint8 &NB, uint8 &Output) {
	Output = ( ~ *&NB); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteModByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output) {
	Output = (*&FSB % *&NB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteAndByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output) {
	Output = (*&FSB & *&NB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteOrByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output) {
	Output = (*&FSB | *&NB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteXorByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output) {
	Output = (*&FSB ^ *&NB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteShiftRByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output) {
	Output = (*&FSB >> *&NB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteShiftLByte(UPARAM(ref)FSafeByte &FSB, UPARAM(ref)uint8 &NB, uint8 &Output) {
	Output = (*&FSB << *&NB).GetValue(); return FSafeByte(Output);
}

/* FSafe -> Native */

bool USCLibrary::SCO_Pure_GetByteEqualFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB) {
	return (*&NB == *&FSB);
}

bool USCLibrary::SCO_Pure_GetByteNotEqualFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB) {
	return (*&NB != *&FSB);
}

bool USCLibrary::SCO_Pure_GetByteGreaterFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB) {
	return (*&NB > *&FSB);
}

bool USCLibrary::SCO_Pure_GetByteSmallerFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB) {
	return (*&NB < *&FSB);
}

bool USCLibrary::SCO_Pure_GetByteGreaterEqualFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB) {
	return (*&NB >= *&FSB);
}

bool USCLibrary::SCO_Pure_GetByteSmallerEqualFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB) {
	return (*&NB <= *&FSB);
}

uint8 USCLibrary::SCO_Pure_SetByteEqualFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB) {
	*&NB = FSB.GetValue(); return *&NB;
}

uint8 USCLibrary::SCO_Pure_GetBytePlusFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB) {
	return (*&NB + *&FSB);
}

uint8 USCLibrary::SCO_Pure_GetByteMinusFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB) {
	return (*&NB - *&FSB);
}

uint8 USCLibrary::SCO_Pure_GetByteTimesFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB) {
	return (*&NB * *&FSB);
}

uint8 USCLibrary::SCO_Pure_GetByteDivideFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB) {
	return (*&NB / *&FSB);
}

uint8 USCLibrary::SCO_Pure_GetBytePlusEqualFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB) {
	*&NB = (*&NB += *&FSB); return *&NB;
}

uint8 USCLibrary::SCO_Pure_GetByteMinusEqualFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB) {
	*&NB = (*&NB -= *&FSB); return *&NB;
}

uint8 USCLibrary::SCO_Pure_GetByteModFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB) {
	return (*&NB % *&FSB);
}

uint8 USCLibrary::SCO_Pure_GetByteAndFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB) {
	return (*&NB & *&FSB);
}

uint8 USCLibrary::SCO_Pure_GetByteOrFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB) {
	return (*&NB | *&FSB);
}

uint8 USCLibrary::SCO_Pure_GetByteXorFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB) {
	return (*&NB ^ *&FSB);
}

uint8 USCLibrary::SCO_Pure_GetByteShiftRFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB) {
	return (*&NB >> *&FSB);
}

uint8 USCLibrary::SCO_Pure_GetByteShiftLFSB(UPARAM(ref)uint8 &NB, UPARAM(ref)FSafeByte &FSB) {
	return (*&NB << *&FSB);
}


// FSInt

/* FSafe -> FSafe */

bool USCLibrary::SCO_Pure_GetSafeIntEqualFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI) {
	return (*&FSI == *&SSI);
}

bool USCLibrary::SCO_Pure_GetSafeIntNotEqualFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI) {
	return (*&FSI != *&SSI);
}

bool USCLibrary::SCO_Pure_GetSafeIntGreaterFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI) {
	return (*&FSI > *&SSI);
}

bool USCLibrary::SCO_Pure_GetSafeIntSmallerFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI) {
	return (*&FSI < *&SSI);
}

bool USCLibrary::SCO_Pure_GetSafeIntGreaterEqualFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI) {
	return (*&FSI >= *&SSI);
}

bool USCLibrary::SCO_Pure_GetSafeIntSmallerEqualFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI) {
	return (*&FSI <= *&SSI);
}

FSafeInt USCLibrary::SCO_Pure_SetSafeIntEqualFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output) {
	*&FSI = *&SSI; Output = FSI.GetValue(); return *&FSI;
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntPlusFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output) {
	Output = (*&FSI + *&SSI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntMinusFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output) {
	Output = (*&FSI - *&SSI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntTimesFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output) {
	Output = (*&FSI * *&SSI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntDivideFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output) {
	Output = (*&FSI / *&SSI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntIncreaseFSI(UPARAM(ref)FSafeInt &FSI, int32 &Output) {
	Output = (++ *&FSI).GetValue(); return *&FSI;
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntDecreaseFSI(UPARAM(ref)FSafeInt &FSI, int32 &Output) {
	Output = (-- *&FSI).GetValue(); return *&FSI;
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntPlusEqualFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output) {
	*&FSI = (*&FSI += *&SSI); Output = FSI.GetValue(); return *&FSI;
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntMinusEqualFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output) {
	*&FSI = (*&FSI -= *&SSI); Output = FSI.GetValue(); return *&FSI;
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntNotFSI(UPARAM(ref)FSafeInt &FSI, int32 &Output) {
	Output = ( ~ *&FSI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntModFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output) {
	Output = (*&FSI % *&SSI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntAndFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output) {
	Output = (*&FSI & *&SSI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntOrFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output) {
	Output = (*&FSI | *&SSI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntXorFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output) {
	Output = (*&FSI ^ *&SSI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntShiftRFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output) {
	Output = (*&FSI >> *&SSI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntShiftLFSI(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)FSafeInt &SSI, int32 &Output) {
	Output = (*&FSI << *&SSI).GetValue(); return FSafeInt(Output);
}

/* Native -> FSafe */

bool USCLibrary::SCO_Pure_GetSafeIntEqualInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI) {
	return (*&FSI == *&NI);
}

bool USCLibrary::SCO_Pure_GetSafeIntNotEqualInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI) {
	return (*&FSI != *&NI);
}

bool USCLibrary::SCO_Pure_GetSafeIntGreaterInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI) {
	return (*&FSI > *&NI);
}

bool USCLibrary::SCO_Pure_GetSafeIntSmallerInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI) {
	return (*&FSI < *&NI);
}

bool USCLibrary::SCO_Pure_GetSafeIntGreaterEqualInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI) {
	return (*&FSI >= *&NI);
}

bool USCLibrary::SCO_Pure_GetSafeIntSmallerEqualInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI) {
	return (*&FSI <= *&NI);
}

FSafeInt USCLibrary::SCO_Pure_SetSafeIntEqualInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output) {
	*&FSI = *&NI; Output = FSI.GetValue(); return *&FSI;
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntPlusInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output) {
	Output = (*&FSI + *&NI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntMinusInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output) {
	Output = (*&FSI - *&NI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntTimesInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output) {
	Output = (*&FSI * *&NI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntDivideInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output) {
	Output = (*&FSI / *&NI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntPlusEqualInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output) {
	*&FSI = (*&FSI += *&NI); Output = FSI.GetValue(); return *&FSI;
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntMinusEqualInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output) {
	*&FSI = (*&FSI -= *&NI); Output = FSI.GetValue(); return *&FSI;
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntNotInt(UPARAM(ref)int32 &NI, int32 &Output) {
	Output = ( ~ *&NI); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntModInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output) {
	Output = (*&FSI % *&NI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntAndInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output) {
	Output = (*&FSI & *&NI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntOrInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output) {
	Output = (*&FSI | *&NI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntXorInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output) {
	Output = (*&FSI ^ *&NI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntShiftRInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output) {
	Output = (*&FSI >> *&NI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntShiftLInt(UPARAM(ref)FSafeInt &FSI, UPARAM(ref)int32 &NI, int32 &Output) {
	Output = (*&FSI << *&NI).GetValue(); return FSafeInt(Output);
}

/* FSafe -> Native */

bool USCLibrary::SCO_Pure_GetIntEqualFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI) {
	return (*&NI == *&FSI);
}

bool USCLibrary::SCO_Pure_GetIntNotEqualFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI) {
	return (*&NI != *&FSI);
}

bool USCLibrary::SCO_Pure_GetIntGreaterFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI) {
	return (*&NI > *&FSI);
}

bool USCLibrary::SCO_Pure_GetIntSmallerFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI) {
	return (*&NI < *&FSI);
}

bool USCLibrary::SCO_Pure_GetIntGreaterEqualFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI) {
	return (*&NI >= *&FSI);
}

bool USCLibrary::SCO_Pure_GetIntSmallerEqualFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI) {
	return (*&NI <= *&FSI);
}

int32 USCLibrary::SCO_Pure_SetIntEqualFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI) {
	*&NI = FSI.GetValue(); return *&NI;
}

int32 USCLibrary::SCO_Pure_GetIntPlusFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI) {
	return (*&NI + *&FSI);
}

int32 USCLibrary::SCO_Pure_GetIntMinusFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI) {
	return (*&NI - *&FSI);
}

int32 USCLibrary::SCO_Pure_GetIntTimesFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI) {
	return (*&NI * *&FSI);
}

int32 USCLibrary::SCO_Pure_GetIntDivideFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI) {
	return (*&NI / *&FSI);
}

int32 USCLibrary::SCO_Pure_GetIntPlusEqualFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI) {
	*&NI = (*&NI += *&FSI); return *&NI;
}

int32 USCLibrary::SCO_Pure_GetIntMinusEqualFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI) {
	*&NI = (*&NI -= *&FSI); return *&NI;
}

int32 USCLibrary::SCO_Pure_GetIntModFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI) {
	return (*&NI % *&FSI);
}

int32 USCLibrary::SCO_Pure_GetIntAndFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI) {
	return (*&NI & *&FSI);
}

int32 USCLibrary::SCO_Pure_GetIntOrFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI) {
	return (*&NI | *&FSI);
}

int32 USCLibrary::SCO_Pure_GetIntXorFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI) {
	return (*&NI ^ *&FSI);
}

int32 USCLibrary::SCO_Pure_GetIntShiftRFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI) {
	return (*&NI >> *&FSI);
}

int32 USCLibrary::SCO_Pure_GetIntShiftLFSI(UPARAM(ref)int32 &NI, UPARAM(ref)FSafeInt &FSI) {
	return (*&NI << *&FSI);
}

// FSFloat

/* FSafe -> FSafe */

bool USCLibrary::SCO_Pure_GetSafeFloatEqualFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF) {
	return (*&FSF == *&SSF);
}

bool USCLibrary::SCO_Pure_GetSafeFloatNotEqualFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF) {
	return (*&FSF != *&SSF);
}

bool USCLibrary::SCO_Pure_GetSafeFloatGreaterFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF) {
	return (*&FSF > *&SSF);
}

bool USCLibrary::SCO_Pure_GetSafeFloatSmallerFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF) {
	return (*&FSF < *&SSF);
}

bool USCLibrary::SCO_Pure_GetSafeFloatGreaterEqualFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF) {
	return (*&FSF >= *&SSF);
}

bool USCLibrary::SCO_Pure_GetSafeFloatSmallerEqualFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF) {
	return (*&FSF <= *&SSF);
}

FSafeFloat USCLibrary::SCO_Pure_SetSafeFloatEqualFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF, float &Output) {
	*&FSF = *&SSF; Output = FSF.GetValue(); return *&FSF;
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatPlusFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF, float &Output) {
	Output = (*&FSF + *&SSF).GetValue(); return FSafeFloat(Output);
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatMinusFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF, float &Output) {
	Output = (*&FSF - *&SSF).GetValue(); return FSafeFloat(Output);
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatTimesFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF, float &Output) {
	Output = (*&FSF * *&SSF).GetValue(); return FSafeFloat(Output);
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatDivideFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF, float &Output) {
	Output = (*&FSF / *&SSF).GetValue(); return FSafeFloat(Output);
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatIncreaseFSF(UPARAM(ref)FSafeFloat &FSF, float &Output) {
	Output = (++ *&FSF).GetValue(); return *&FSF;
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatDecreaseFSF(UPARAM(ref)FSafeFloat &FSF, float &Output) {
	Output = (-- *&FSF).GetValue(); return *&FSF;
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatPlusEqualFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF, float &Output) {
	*&FSF = (*&FSF += *&SSF); Output = FSF.GetValue(); return *&FSF;
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatMinusEqualFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF, float &Output) {
	*&FSF = (*&FSF -= *&SSF); Output = FSF.GetValue(); return *&FSF;
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatModFSF(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)FSafeFloat &SSF, float &Output) {
	Output = (*&FSF % *&SSF).GetValue(); return FSafeFloat(Output);
}

/* Native -> FSafe */

bool USCLibrary::SCO_Pure_GetSafeFloatEqualFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF) {
	return (*&FSF == *&NF);
}

bool USCLibrary::SCO_Pure_GetSafeFloatNotEqualFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF) {
	return (*&FSF != *&NF);
}

bool USCLibrary::SCO_Pure_GetSafeFloatGreaterFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF) {
	return (*&FSF > *&NF);
}

bool USCLibrary::SCO_Pure_GetSafeFloatSmallerFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF) {
	return (*&FSF < *&NF);
}

bool USCLibrary::SCO_Pure_GetSafeFloatGreaterEqualFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF) {
	return (*&FSF >= *&NF);
}

bool USCLibrary::SCO_Pure_GetSafeFloatSmallerEqualFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF) {
	return (*&FSF <= *&NF);
}

FSafeFloat USCLibrary::SCO_Pure_SetSafeFloatEqualFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF, float &Output) {
	*&FSF = *&NF; Output = FSF.GetValue(); return *&FSF;
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatPlusFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF, float &Output) {
	Output = (*&FSF + *&NF).GetValue(); return FSafeFloat(Output);
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatMinusFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF, float &Output) {
	Output = (*&FSF - *&NF).GetValue(); return FSafeFloat(Output);
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatTimesFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF, float &Output) {
	Output = (*&FSF * *&NF).GetValue(); return FSafeFloat(Output);
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatDivideFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF, float &Output) {
	Output = (*&FSF / *&NF).GetValue(); return FSafeFloat(Output);
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatPlusEqualFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF, float &Output) {
	*&FSF = (*&FSF += *&NF); Output = FSF.GetValue(); return *&FSF;
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatMinusEqualFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF, float &Output) {
	*&FSF = (*&FSF -= *&NF); Output = FSF.GetValue(); return *&FSF;
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatModFloat(UPARAM(ref)FSafeFloat &FSF, UPARAM(ref)float &NF, float &Output) {
	Output = (*&FSF % *&NF).GetValue(); return FSafeFloat(Output);
}

/* FSafe -> Native */

bool USCLibrary::SCO_Pure_GetFloatEqualFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF) {
	return (*&NF == *&FSF);
}

bool USCLibrary::SCO_Pure_GetFloatNotEqualFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF) {
	return (*&NF != *&FSF);
}

bool USCLibrary::SCO_Pure_GetFloatGreaterFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF) {
	return (*&NF > *&FSF);
}

bool USCLibrary::SCO_Pure_GetFloatSmallerFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF) {
	return (*&NF < *&FSF);
}

bool USCLibrary::SCO_Pure_GetFloatGreaterEqualFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF) {
	return (*&NF >= *&FSF);
}

bool USCLibrary::SCO_Pure_GetFloatSmallerEqualFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF) {
	return (*&NF <= *&FSF);
}

float USCLibrary::SCO_Pure_SetFloatEqualFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF) {
	*&NF = FSF.GetValue(); return *&NF;
}

float USCLibrary::SCO_Pure_GetFloatPlusFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF) {
	return (*&NF + *&FSF);
}

float USCLibrary::SCO_Pure_GetFloatMinusFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF) {
	return (*&NF - *&FSF);
}

float USCLibrary::SCO_Pure_GetFloatTimesFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF) {
	return (*&NF * *&FSF);
}

float USCLibrary::SCO_Pure_GetFloatDivideFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF) {
	return (*&NF / *&FSF);
}

float USCLibrary::SCO_Pure_GetFloatPlusEqualFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF) {
	*&NF = (*&NF += *&FSF); return *&NF;
}

float USCLibrary::SCO_Pure_GetFloatMinusEqualFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF) {
	*&NF = (*&NF -= *&FSF); return *&NF;
}

float USCLibrary::SCO_Pure_GetFloatModFSF(UPARAM(ref)float &NF, UPARAM(ref)FSafeFloat &FSF) {
	return (*&NF % *&FSF);
}

// FSName

/* FSafe -> FSafe */

bool USCLibrary::SCO_Pure_GetSafeNameEqualFSN(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FSafeName &SSN) {
	return (*&FSN == *&SSN);
}

bool USCLibrary::SCO_Pure_GetSafeNameNotEqualFSN(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FSafeName &SSN) {
	return (*&FSN != *&SSN);
}

bool USCLibrary::SCO_Pure_GetSafeNameGreaterFSN(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FSafeName &SSN) {
	return (*&FSN > *&SSN);
}

bool USCLibrary::SCO_Pure_GetSafeNameSmallerFSN(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FSafeName &SSN) {
	return (*&FSN < *&SSN);
}

FSafeName USCLibrary::SCO_Pure_SetSafeNameEqualFSN(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FSafeName &SSN, FName &Output) {
	*&FSN = *&SSN; Output = FSN.GetValue(); return *&FSN;
}

FSafeName USCLibrary::SCO_Pure_GetSafeNamePlusFSN(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FSafeName &SSN, FName &Output) {
	Output = (*&FSN + *&SSN).GetValue(); return FSafeName(Output);
}

FSafeName USCLibrary::SCO_Pure_GetSafeNamePlusEqualFSN(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FSafeName &SSN, FName &Output) {
	*&FSN = (*&FSN += *&SSN); Output = FSN.GetValue(); return *&FSN;
}

/* Native -> FSafe */

bool USCLibrary::SCO_Pure_GetSafeNameEqualName(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FName &NN) {
	return (*&FSN == *&NN);
}

bool USCLibrary::SCO_Pure_GetSafeNameNotEqualName(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FName &NN) {
	return (*&FSN != *&NN);
}

bool USCLibrary::SCO_Pure_GetSafeNameGreaterName(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FName &NN) {
	return (*&FSN > *&NN);
}

bool USCLibrary::SCO_Pure_GetSafeNameSmallerName(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FName &NN) {
	return (*&FSN < *&NN);
}

FSafeName USCLibrary::SCO_Pure_SetSafeNameEqualName(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FName &NN, FName &Output) {
	*&FSN = *&NN; Output = FSN.GetValue(); return *&FSN;
}

FSafeName USCLibrary::SCO_Pure_GetSafeNamePlusName(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FName &NN, FName &Output) {
	Output = (*&FSN + *&NN).GetValue(); return FSafeName(Output);
}

FSafeName USCLibrary::SCO_Pure_GetSafeNamePlusEqualName(UPARAM(ref)FSafeName &FSN, UPARAM(ref)FName &NN, FName &Output) {
	*&FSN = (*&FSN += *&NN); Output = FSN.GetValue(); return *&FSN;
}

/* FSafe -> Native */

bool USCLibrary::SCO_Pure_GetNameEqualFSN(UPARAM(ref)FName &NN, UPARAM(ref)FSafeName &FSN) {
	return (*&NN == *&FSN);
}

bool USCLibrary::SCO_Pure_GetNameNotEqualFSN(UPARAM(ref)FName &NN, UPARAM(ref)FSafeName &FSN) {
	return (*&NN != *&FSN);
}

bool USCLibrary::SCO_Pure_GetNameGreaterFSN(UPARAM(ref)FName &NN, UPARAM(ref)FSafeName &FSN) {
	return (*&NN > *&FSN);
}

bool USCLibrary::SCO_Pure_GetNameSmallerFSN(UPARAM(ref)FName &NN, UPARAM(ref)FSafeName &FSN) {
	return (*&NN < *&FSN);
}

FName USCLibrary::SCO_Pure_SetNameEqualFSN(UPARAM(ref)FName &NN, UPARAM(ref)FSafeName &FSN) {
	*&NN = FSN.GetValue(); return *&NN;
}

FName USCLibrary::SCO_Pure_GetNamePlusFSN(UPARAM(ref)FName &NN, UPARAM(ref)FSafeName &FSN) {
	return (*&NN + *&FSN);
}

FName USCLibrary::SCO_Pure_GetNamePlusEqualFSN(UPARAM(ref)FName &NN, UPARAM(ref)FSafeName &FSN) {
	*&NN = (*&NN += *&FSN); return *&NN;
}

// FSText

/* FSafe -> FSafe */

bool USCLibrary::SCO_Pure_GetSafeTextEqualFST(UPARAM(ref)FSafeText &FST, UPARAM(ref)FSafeText &ST) {
	return (*&FST == *&ST);
}

bool USCLibrary::SCO_Pure_GetSafeTextNotEqualFST(UPARAM(ref)FSafeText &FST, UPARAM(ref)FSafeText &ST) {
	return (*&FST != *&ST);
}

bool USCLibrary::SCO_Pure_GetSafeTextGreaterFST(UPARAM(ref)FSafeText &FST, UPARAM(ref)FSafeText &ST) {
	return (*&FST > *&ST);
}

bool USCLibrary::SCO_Pure_GetSafeTextSmallerFST(UPARAM(ref)FSafeText &FST, UPARAM(ref)FSafeText &ST) {
	return (*&FST < *&ST);
}

FSafeText USCLibrary::SCO_Pure_SetSafeTextEqualFST(UPARAM(ref)FSafeText &FST, UPARAM(ref)FSafeText &ST, FText &Output) {
	*&FST = *&ST; Output = FST.GetValue(); return *&FST;
}

FSafeText USCLibrary::SCO_Pure_GetSafeTextPlusFST(UPARAM(ref)FSafeText &FST, UPARAM(ref)FSafeText &ST, FText &Output) {
	Output = (*&FST + *&ST).GetValue(); return FSafeText(Output);
}

FSafeText USCLibrary::SCO_Pure_GetSafeTextPlusEqualFST(UPARAM(ref)FSafeText &FST, UPARAM(ref)FSafeText &ST, FText &Output) {
	*&FST = (*&FST += *&ST); Output = FST.GetValue(); return *&FST;
}

/* Native -> FSafe */

bool USCLibrary::SCO_Pure_GetSafeTextEqualText(UPARAM(ref)FSafeText &FST, UPARAM(ref)FText &NT) {
	return (*&FST == *&NT);
}

bool USCLibrary::SCO_Pure_GetSafeTextNotEqualText(UPARAM(ref)FSafeText &FST, UPARAM(ref)FText &NT) {
	return (*&FST != *&NT);
}

bool USCLibrary::SCO_Pure_GetSafeTextGreaterText(UPARAM(ref)FSafeText &FST, UPARAM(ref)FText &NT) {
	return (*&FST > *&NT);
}

bool USCLibrary::SCO_Pure_GetSafeTextSmallerText(UPARAM(ref)FSafeText &FST, UPARAM(ref)FText &NT) {
	return (*&FST < *&NT);
}

FSafeText USCLibrary::SCO_Pure_SetSafeTextEqualText(UPARAM(ref)FSafeText &FST, UPARAM(ref)FText &NT, FText &Output) {
	*&FST = *&NT; Output = FST.GetValue(); return *&FST;
}

FSafeText USCLibrary::SCO_Pure_GetSafeTextPlusText(UPARAM(ref)FSafeText &FST, UPARAM(ref)FText &NT, FText &Output) {
	Output = (*&FST + *&NT).GetValue(); return FSafeText(Output);
}

FSafeText USCLibrary::SCO_Pure_GetSafeTextPlusEqualText(UPARAM(ref)FSafeText &FST, UPARAM(ref)FText &NT, FText &Output) {
	*&FST = (*&FST += *&NT); Output = FST.GetValue(); return *&FST;
}

/* FSafe -> Native */

bool USCLibrary::SCO_Pure_GetTextEqualFST(UPARAM(ref)FText &NT, UPARAM(ref)FSafeText &FST) {
	return (*&NT == *&FST);
}

bool USCLibrary::SCO_Pure_GetTextNotEqualFST(UPARAM(ref)FText &NT, UPARAM(ref)FSafeText &FST) {
	return (*&NT != *&FST);
}

bool USCLibrary::SCO_Pure_GetTextGreaterFST(UPARAM(ref)FText &NT, UPARAM(ref)FSafeText &FST) {
	return (*&NT > *&FST);
}

bool USCLibrary::SCO_Pure_GetTextSmallerFST(UPARAM(ref)FText &NT, UPARAM(ref)FSafeText &FST) {
	return (*&NT < *&FST);
}

FText USCLibrary::SCO_Pure_SetTextEqualFST(UPARAM(ref)FText &NT, UPARAM(ref)FSafeText &FST) {
	*&NT = FST.GetValue(); return *&NT;
}

FText USCLibrary::SCO_Pure_GetTextPlusFST(UPARAM(ref)FText &NT, UPARAM(ref)FSafeText &FST) {
	return (*&NT + *&FST);
}

FText USCLibrary::SCO_Pure_GetTextPlusEqualFST(UPARAM(ref)FText &NT, UPARAM(ref)FSafeText &FST) {
	*&NT = (*&NT += *&FST); return *&NT;
}

// FSString

/* FSafe -> FSafe */

bool USCLibrary::SCO_Pure_GetSafeStringEqualFSS(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FSafeString &SSN) {
	return (*&FSS == *&SSN);
}

bool USCLibrary::SCO_Pure_GetSafeStringNotEqualFSS(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FSafeString &SSN) {
	return (*&FSS != *&SSN);
}

bool USCLibrary::SCO_Pure_GetSafeStringGreaterFSS(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FSafeString &SSN) {
	return (*&FSS > *&SSN);
}

bool USCLibrary::SCO_Pure_GetSafeStringSmallerFSS(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FSafeString &SSN) {
	return (*&FSS < *&SSN);
}

FSafeString USCLibrary::SCO_Pure_SetSafeStringEqualFSS(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FSafeString &SSN, FString &Output) {
	*&FSS = *&SSN; Output = FSS.GetValue(); return *&FSS;
}

FSafeString USCLibrary::SCO_Pure_GetSafeStringPlusFSS(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FSafeString &SSN, FString &Output) {
	Output = (*&FSS + *&SSN).GetValue(); return FSafeString(Output);
}

FSafeString USCLibrary::SCO_Pure_GetSafeStringPlusEqualFSS(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FSafeString &SSN, FString &Output) {
	*&FSS = (*&FSS += *&SSN); Output = FSS.GetValue(); return *&FSS;
}

/* Native -> FSafe */

bool USCLibrary::SCO_Pure_GetSafeStringEqualString(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FString &NS) {
	return (*&FSS == *&NS);
}

bool USCLibrary::SCO_Pure_GetSafeStringNotEqualString(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FString &NS) {
	return (*&FSS != *&NS);
}

bool USCLibrary::SCO_Pure_GetSafeStringGreaterString(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FString &NS) {
	return (*&FSS > *&NS);
}

bool USCLibrary::SCO_Pure_GetSafeStringSmallerString(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FString &NS) {
	return (*&FSS < *&NS);
}

FSafeString USCLibrary::SCO_Pure_SetSafeStringEqualString(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FString &NS, FString &Output) {
	*&FSS = *&NS; Output = FSS.GetValue(); return *&FSS;
}

FSafeString USCLibrary::SCO_Pure_GetSafeStringPlusString(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FString &NS, FString &Output) {
	Output = (*&FSS + *&NS).GetValue(); return FSafeString(Output);
}

FSafeString USCLibrary::SCO_Pure_GetSafeStringPlusEqualString(UPARAM(ref)FSafeString &FSS, UPARAM(ref)FString &NS, FString &Output) {
	*&FSS = (*&FSS += *&NS); Output = FSS.GetValue(); return *&FSS;
}

/* FSafe -> Native */

bool USCLibrary::SCO_Pure_GetStringEqualFSS(UPARAM(ref)FString &NS, UPARAM(ref)FSafeString &FSS) {
	return (*&NS == *&FSS);
}

bool USCLibrary::SCO_Pure_GetStringNotEqualFSS(UPARAM(ref)FString &NS, UPARAM(ref)FSafeString &FSS) {
	return (*&NS != *&FSS);
}

bool USCLibrary::SCO_Pure_GetStringGreaterFSS(UPARAM(ref)FString &NS, UPARAM(ref)FSafeString &FSS) {
	return (*&NS > *&FSS);
}

bool USCLibrary::SCO_Pure_GetStringSmallerFSS(UPARAM(ref)FString &NS, UPARAM(ref)FSafeString &FSS) {
	return (*&NS < *&FSS);
}

FString USCLibrary::SCO_Pure_SetStringEqualFSS(UPARAM(ref)FString &NS, UPARAM(ref)FSafeString &FSS) {
	*&NS = FSS.GetValue(); return *&NS;
}

FString USCLibrary::SCO_Pure_GetStringPlusFSS(UPARAM(ref)FString &NS, UPARAM(ref)FSafeString &FSS) {
	return (*&NS + *&FSS);
}

FString USCLibrary::SCO_Pure_GetStringPlusEqualFSS(UPARAM(ref)FString &NS, UPARAM(ref)FSafeString &FSS) {
	*&NS = (*&NS += *&FSS); return *&NS;
}

// FSVector2D

/* FSafe -> FSafe */

bool USCLibrary::SCO_Pure_GetSafeVector2DEqualFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV) {
	return (*&FSV == *&SSV);
}

bool USCLibrary::SCO_Pure_GetSafeVector2DNotEqualFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV) {
	return (*&FSV != *&SSV);
}

bool USCLibrary::SCO_Pure_GetSafeVector2DGreaterFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV) {
	return (*&FSV > *&SSV);
}

bool USCLibrary::SCO_Pure_GetSafeVector2DSmallerFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV) {
	return (*&FSV < *&SSV);
}

bool USCLibrary::SCO_Pure_GetSafeVector2DGreaterEqualFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV) {
	return (*&FSV >= *&SSV);
}

bool USCLibrary::SCO_Pure_GetSafeVector2DSmallerEqualFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV) {
	return (*&FSV <= *&SSV);
}

FSafeVector2D USCLibrary::SCO_Pure_SetSafeVector2DEqualFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV, FVector2D &Output) {
	*&FSV = *&SSV; Output = FSV.GetValue(); return *&FSV;
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DPlusFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV, FVector2D &Output) {
	Output = (*&FSV + *&SSV).GetValue(); return FSafeVector2D(Output);
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DMinusFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV, FVector2D &Output) {
	Output = (*&FSV - *&SSV).GetValue(); return FSafeVector2D(Output);
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DTimesFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV, FVector2D &Output) {
	Output = (*&FSV * *&SSV).GetValue(); return FSafeVector2D(Output);
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DDivideFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV, FVector2D &Output) {
	Output = (*&FSV / *&SSV).GetValue(); return FSafeVector2D(Output);
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DIncreaseFSV(UPARAM(ref)FSafeVector2D &FSV, FVector2D &Output) {
	Output = (++ *&FSV).GetValue(); return *&FSV;
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DDecreaseFSV(UPARAM(ref)FSafeVector2D &FSV, FVector2D &Output) {
	Output = (-- *&FSV).GetValue(); return *&FSV;
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DPlusEqualFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV, FVector2D &Output) {
	*&FSV = (*&FSV += *&SSV); Output = FSV.GetValue(); return *&FSV;
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DMinusEqualFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV, FVector2D &Output) {
	*&FSV = (*&FSV -= *&SSV); Output = FSV.GetValue(); return *&FSV;
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DModFSV(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FSafeVector2D &SSV, FVector2D &Output) {
	Output = (*&FSV % *&SSV).GetValue(); return FSafeVector2D(Output);
}

/* Native -> FSafe */

bool USCLibrary::SCO_Pure_GetSafeVector2DEqualVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV) {
	return (*&FSV == *&NV);
}

bool USCLibrary::SCO_Pure_GetSafeVector2DNotEqualVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV) {
	return (*&FSV != *&NV);
}

bool USCLibrary::SCO_Pure_GetSafeVector2DGreaterVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV) {
	return (*&FSV > *&NV);
}

bool USCLibrary::SCO_Pure_GetSafeVector2DSmallerVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV) {
	return (*&FSV < *&NV);
}

bool USCLibrary::SCO_Pure_GetSafeVector2DGreaterEqualVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV) {
	return (*&FSV >= *&NV);
}

bool USCLibrary::SCO_Pure_GetSafeVector2DSmallerEqualVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV) {
	return (*&FSV <= *&NV);
}

FSafeVector2D USCLibrary::SCO_Pure_SetSafeVector2DEqualVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV, FVector2D &Output) {
	*&FSV = *&NV; Output = FSV.GetValue(); return *&FSV;
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DPlusVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV, FVector2D &Output) {
	Output = (*&FSV + *&NV).GetValue(); return FSafeVector2D(Output);
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DMinusVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV, FVector2D &Output) {
	Output = (*&FSV - *&NV).GetValue(); return FSafeVector2D(Output);
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DTimesVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV, FVector2D &Output) {
	Output = (*&FSV * *&NV).GetValue(); return FSafeVector2D(Output);
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DDivideVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV, FVector2D &Output) {
	Output = (*&FSV / *&NV).GetValue(); return FSafeVector2D(Output);
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DPlusEqualVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV, FVector2D &Output) {
	*&FSV = (*&FSV += *&NV); Output = FSV.GetValue(); return *&FSV;
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DMinusEqualVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV, FVector2D &Output) {
	*&FSV = (*&FSV -= *&NV); Output = FSV.GetValue(); return *&FSV;
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DModVector2D(UPARAM(ref)FSafeVector2D &FSV, UPARAM(ref)FVector2D &NV, FVector2D &Output) {
	Output = (*&FSV % *&NV).GetValue(); return FSafeVector2D(Output);
}

/* FSafe -> Native */

bool USCLibrary::SCO_Pure_GetVector2DEqualFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV) {
	return (*&NV == *&FSV);
}

bool USCLibrary::SCO_Pure_GetVector2DNotEqualFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV) {
	return (*&NV != *&FSV);
}

bool USCLibrary::SCO_Pure_GetVector2DGreaterFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV) {
	return (*&NV > *&FSV);
}

bool USCLibrary::SCO_Pure_GetVector2DSmallerFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV) {
	return (*&NV < *&FSV);
}

bool USCLibrary::SCO_Pure_GetVector2DGreaterEqualFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV) {
	return (*&NV >= *&FSV);
}

bool USCLibrary::SCO_Pure_GetVector2DSmallerEqualFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV) {
	return (*&NV <= *&FSV);
}

FVector2D USCLibrary::SCO_Pure_SetVector2DEqualFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV) {
	*&NV = FSV.GetValue(); return *&NV;
}

FVector2D USCLibrary::SCO_Pure_GetVector2DPlusFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV) {
	return (*&NV + *&FSV);
}

FVector2D USCLibrary::SCO_Pure_GetVector2DMinusFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV) {
	return (*&NV - *&FSV);
}

FVector2D USCLibrary::SCO_Pure_GetVector2DTimesFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV) {
	return (*&NV * *&FSV);
}

FVector2D USCLibrary::SCO_Pure_GetVector2DDivideFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV) {
	return (*&NV / *&FSV);
}

FVector2D USCLibrary::SCO_Pure_GetVector2DPlusEqualFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV) {
	*&NV = (*&NV += *&FSV); return *&NV;
}

FVector2D USCLibrary::SCO_Pure_GetVector2DMinusEqualFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV) {
	*&NV = (*&NV -= *&FSV); return *&NV;
}

FVector2D USCLibrary::SCO_Pure_GetVector2DModFSV(UPARAM(ref)FVector2D &NV, UPARAM(ref)FSafeVector2D &FSV) {
	return (*&NV % *&FSV);
}

// FSVector3D

/* FSafe -> FSafe */

bool USCLibrary::SCO_Pure_GetSafeVector3DEqualFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV) {
	return (*&FSV == *&SSV);
}

bool USCLibrary::SCO_Pure_GetSafeVector3DNotEqualFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV) {
	return (*&FSV != *&SSV);
}

bool USCLibrary::SCO_Pure_GetSafeVector3DGreaterFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV) {
	return (*&FSV > *&SSV);
}

bool USCLibrary::SCO_Pure_GetSafeVector3DSmallerFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV) {
	return (*&FSV < *&SSV);
}

bool USCLibrary::SCO_Pure_GetSafeVector3DGreaterEqualFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV) {
	return (*&FSV >= *&SSV);
}

bool USCLibrary::SCO_Pure_GetSafeVector3DSmallerEqualFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV) {
	return (*&FSV <= *&SSV);
}

FSafeVector3D USCLibrary::SCO_Pure_SetSafeVector3DEqualFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV, FVector &Output) {
	*&FSV = *&SSV; Output = FSV.GetValue(); return *&FSV;
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DPlusFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV, FVector &Output) {
	Output = (*&FSV + *&SSV).GetValue(); return FSafeVector3D(Output);
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DMinusFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV, FVector &Output) {
	Output = (*&FSV - *&SSV).GetValue(); return FSafeVector3D(Output);
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DTimesFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV, FVector &Output) {
	Output = (*&FSV * *&SSV).GetValue(); return FSafeVector3D(Output);
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DDivideFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV, FVector &Output) {
	Output = (*&FSV / *&SSV).GetValue(); return FSafeVector3D(Output);
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DIncreaseFSV(UPARAM(ref)FSafeVector3D &FSV, FVector &Output) {
	Output = (++ *&FSV).GetValue(); return *&FSV;
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DDecreaseFSV(UPARAM(ref)FSafeVector3D &FSV, FVector &Output) {
	Output = (-- *&FSV).GetValue(); return *&FSV;
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DPlusEqualFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV, FVector &Output) {
	*&FSV = (*&FSV += *&SSV); Output = FSV.GetValue(); return *&FSV;
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DMinusEqualFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV, FVector &Output) {
	*&FSV = (*&FSV -= *&SSV); Output = FSV.GetValue(); return *&FSV;
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DModFSV(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FSafeVector3D &SSV, FVector &Output) {
	Output = (*&FSV % *&SSV).GetValue(); return FSafeVector3D(Output);
}

/* Native -> FSafe */

bool USCLibrary::SCO_Pure_GetSafeVector3DEqualVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV) {
	return (*&FSV == *&NV);
}

bool USCLibrary::SCO_Pure_GetSafeVector3DNotEqualVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV) {
	return (*&FSV != *&NV);
}

bool USCLibrary::SCO_Pure_GetSafeVector3DGreaterVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV) {
	return (*&FSV > *&NV);
}

bool USCLibrary::SCO_Pure_GetSafeVector3DSmallerVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV) {
	return (*&FSV < *&NV);
}

bool USCLibrary::SCO_Pure_GetSafeVector3DGreaterEqualVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV) {
	return (*&FSV >= *&NV);
}

bool USCLibrary::SCO_Pure_GetSafeVector3DSmallerEqualVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV) {
	return (*&FSV <= *&NV);
}

FSafeVector3D USCLibrary::SCO_Pure_SetSafeVector3DEqualVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV, FVector &Output) {
	*&FSV = *&NV; Output = FSV.GetValue(); return *&FSV;
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DPlusVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV, FVector &Output) {
	Output = (*&FSV + *&NV).GetValue(); return FSafeVector3D(Output);
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DMinusVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV, FVector &Output) {
	Output = (*&FSV - *&NV).GetValue(); return FSafeVector3D(Output);
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DTimesVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV, FVector &Output) {
	Output = (*&FSV * *&NV).GetValue(); return FSafeVector3D(Output);
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DDivideVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV, FVector &Output) {
	Output = (*&FSV / *&NV).GetValue(); return FSafeVector3D(Output);
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DPlusEqualVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV, FVector &Output) {
	*&FSV = (*&FSV += *&NV); Output = FSV.GetValue(); return *&FSV;
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DMinusEqualVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV, FVector &Output) {
	*&FSV = (*&FSV -= *&NV); Output = FSV.GetValue(); return *&FSV;
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DModVector3D(UPARAM(ref)FSafeVector3D &FSV, UPARAM(ref)FVector &NV, FVector &Output) {
	Output = (*&FSV % *&NV).GetValue(); return FSafeVector3D(Output);
}

/* FSafe -> Native */

bool USCLibrary::SCO_Pure_GetVector3DEqualFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV) {
	return (*&NV == *&FSV);
}

bool USCLibrary::SCO_Pure_GetVector3DNotEqualFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV) {
	return (*&NV != *&FSV);
}

bool USCLibrary::SCO_Pure_GetVector3DGreaterFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV) {
	return (*&NV > *&FSV);
}

bool USCLibrary::SCO_Pure_GetVector3DSmallerFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV) {
	return (*&NV < *&FSV);
}

bool USCLibrary::SCO_Pure_GetVector3DGreaterEqualFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV) {
	return (*&NV >= *&FSV);
}

bool USCLibrary::SCO_Pure_GetVector3DSmallerEqualFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV) {
	return (*&NV <= *&FSV);
}

FVector USCLibrary::SCO_Pure_SetVector3DEqualFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV) {
	*&NV = FSV.GetValue(); return *&NV;
}

FVector USCLibrary::SCO_Pure_GetVector3DPlusFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV) {
	return (*&NV + *&FSV);
}

FVector USCLibrary::SCO_Pure_GetVector3DMinusFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV) {
	return (*&NV - *&FSV);
}

FVector USCLibrary::SCO_Pure_GetVector3DTimesFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV) {
	return (*&NV * *&FSV);
}

FVector USCLibrary::SCO_Pure_GetVector3DDivideFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV) {
	return (*&NV / *&FSV);
}

FVector USCLibrary::SCO_Pure_GetVector3DPlusEqualFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV) {
	*&NV = (*&NV += *&FSV); return *&NV;
}

FVector USCLibrary::SCO_Pure_GetVector3DMinusEqualFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV) {
	*&NV = (*&NV -= *&FSV); return *&NV;
}

FVector USCLibrary::SCO_Pure_GetVector3DModFSV(UPARAM(ref)FVector &NV, UPARAM(ref)FSafeVector3D &FSV) {
	return (*&NV % *&FSV);
}

// FSVector4D

/* FSafe -> FSafe */

bool USCLibrary::SCO_Pure_GetSafeVector4DEqualFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV) {
	return (*&FSV == *&SSV);
}

bool USCLibrary::SCO_Pure_GetSafeVector4DNotEqualFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV) {
	return (*&FSV != *&SSV);
}

bool USCLibrary::SCO_Pure_GetSafeVector4DGreaterFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV) {
	return (*&FSV > *&SSV);
}

bool USCLibrary::SCO_Pure_GetSafeVector4DSmallerFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV) {
	return (*&FSV < *&SSV);
}

bool USCLibrary::SCO_Pure_GetSafeVector4DGreaterEqualFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV) {
	return (*&FSV >= *&SSV);
}

bool USCLibrary::SCO_Pure_GetSafeVector4DSmallerEqualFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV) {
	return (*&FSV <= *&SSV);
}

FSafeVector4D USCLibrary::SCO_Pure_SetSafeVector4DEqualFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV, FVector4 &Output) {
	*&FSV = *&SSV; Output = FSV.GetValue(); return *&FSV;
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DPlusFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV, FVector4 &Output) {
	Output = (*&FSV + *&SSV).GetValue(); return FSafeVector4D(&Output);
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DMinusFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV, FVector4 &Output) {
	Output = (*&FSV - *&SSV).GetValue(); return FSafeVector4D(&Output);
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DTimesFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV, FVector4 &Output) {
	Output = (*&FSV * *&SSV).GetValue(); return FSafeVector4D(&Output);
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DDivideFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV, FVector4 &Output) {
	Output = (*&FSV / *&SSV).GetValue(); return FSafeVector4D(&Output);
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DIncreaseFSV(UPARAM(ref)FSafeVector4D &FSV, FVector4 &Output) {
	Output = (++ *&FSV).GetValue(); return *&FSV;
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DDecreaseFSV(UPARAM(ref)FSafeVector4D &FSV, FVector4 &Output) {
	Output = (-- *&FSV).GetValue(); return *&FSV;
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DPlusEqualFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV, FVector4 &Output) {
	*&FSV = (*&FSV += *&SSV); Output = FSV.GetValue(); return *&FSV;
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DMinusEqualFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV, FVector4 &Output) {
	*&FSV = (*&FSV -= *&SSV); Output = FSV.GetValue(); return *&FSV;
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DModFSV(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FSafeVector4D &SSV, FVector4 &Output) {
	Output = (*&FSV % *&SSV).GetValue(); return FSafeVector4D(&Output);
}

/* Native -> FSafe */

bool USCLibrary::SCO_Pure_GetSafeVector4DEqualVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV) {
	return (*&FSV == *&NV);
}

bool USCLibrary::SCO_Pure_GetSafeVector4DNotEqualVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV) {
	return (*&FSV != *&NV);
}

bool USCLibrary::SCO_Pure_GetSafeVector4DGreaterVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV) {
	return (*&FSV > *&NV);
}

bool USCLibrary::SCO_Pure_GetSafeVector4DSmallerVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV) {
	return (*&FSV < *&NV);
}

bool USCLibrary::SCO_Pure_GetSafeVector4DGreaterEqualVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV) {
	return (*&FSV >= *&NV);
}

bool USCLibrary::SCO_Pure_GetSafeVector4DSmallerEqualVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV) {
	return (*&FSV <= *&NV);
}

FSafeVector4D USCLibrary::SCO_Pure_SetSafeVector4DEqualVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV, FVector4 &Output) {
	*&FSV = *&NV; Output = FSV.GetValue(); return *&FSV;
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DPlusVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV, FVector4 &Output) {
	Output = (*&FSV + *&NV).GetValue(); return FSafeVector4D(&Output);
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DMinusVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV, FVector4 &Output) {
	Output = (*&FSV - *&NV).GetValue(); return FSafeVector4D(&Output);
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DTimesVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV, FVector4 &Output) {
	Output = (*&FSV * *&NV).GetValue(); return FSafeVector4D(&Output);
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DDivideVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV, FVector4 &Output) {
	Output = (*&FSV / *&NV).GetValue(); return FSafeVector4D(&Output);
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DPlusEqualVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV, FVector4 &Output) {
	*&FSV = (*&FSV += *&NV); Output = FSV.GetValue(); return *&FSV;
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DMinusEqualVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV, FVector4 &Output) {
	*&FSV = (*&FSV -= *&NV); Output = FSV.GetValue(); return *&FSV;
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DModVector4D(UPARAM(ref)FSafeVector4D &FSV, UPARAM(ref)FVector4 &NV, FVector4 &Output) {
	Output = (*&FSV % *&NV).GetValue(); return FSafeVector4D(&Output);
}

/* FSafe -> Native */

bool USCLibrary::SCO_Pure_GetVector4DEqualFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV) {
	return (*&NV == *&FSV);
}

bool USCLibrary::SCO_Pure_GetVector4DNotEqualFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV) {
	return (*&NV != *&FSV);
}

bool USCLibrary::SCO_Pure_GetVector4DGreaterFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV) {
	return (*&NV > *&FSV);
}

bool USCLibrary::SCO_Pure_GetVector4DSmallerFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV) {
	return (*&NV < *&FSV);
}

bool USCLibrary::SCO_Pure_GetVector4DGreaterEqualFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV) {
	return (*&NV >= *&FSV);
}

bool USCLibrary::SCO_Pure_GetVector4DSmallerEqualFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV) {
	return (*&NV <= *&FSV);
}

FVector4 USCLibrary::SCO_Pure_SetVector4DEqualFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV) {
	*&NV = FSV.GetValue(); return *&NV;
}

FVector4 USCLibrary::SCO_Pure_GetVector4DPlusFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV) {
	return (*&NV + *&FSV);
}

FVector4 USCLibrary::SCO_Pure_GetVector4DMinusFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV) {
	return (*&NV - *&FSV);
}

FVector4 USCLibrary::SCO_Pure_GetVector4DTimesFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV) {
	return (*&NV * *&FSV);
}

FVector4 USCLibrary::SCO_Pure_GetVector4DDivideFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV) {
	return (*&NV / *&FSV);
}

FVector4 USCLibrary::SCO_Pure_GetVector4DPlusEqualFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV) {
	*&NV = (*&NV += *&FSV); return *&NV;
}

FVector4 USCLibrary::SCO_Pure_GetVector4DMinusEqualFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV) {
	*&NV = (*&NV -= *&FSV); return *&NV;
}

FVector4 USCLibrary::SCO_Pure_GetVector4DModFSV(UPARAM(ref)FVector4 &NV, UPARAM(ref)FSafeVector4D &FSV) {
	return (*&NV % *&FSV);
}

// FSColor

/* FSafe -> FSafe */

bool USCLibrary::SCO_Pure_GetSafeColorEqualFSC(UPARAM(ref)FSafeColor &FSC, UPARAM(ref)FSafeColor &SSC) {
	return (*&FSC == *&SSC);
}

bool USCLibrary::SCO_Pure_GetSafeColorNotEqualFSC(UPARAM(ref)FSafeColor &FSC, UPARAM(ref)FSafeColor &SSC) {
	return (*&FSC != *&SSC);
}

FSafeColor USCLibrary::SCO_Pure_SetSafeColorEqualFSC(UPARAM(ref)FSafeColor &FSC, UPARAM(ref)FSafeColor &SSC, FLinearColor &Output) {
	*&FSC = *&SSC; Output = FSC.GetValue(); return *&FSC;
}

/* Native -> FSafe */

bool USCLibrary::SCO_Pure_GetSafeColorEqualColor(UPARAM(ref)FSafeColor &FSC, UPARAM(ref)FLinearColor &NC) {
	return (*&FSC == *&NC);
}

bool USCLibrary::SCO_Pure_GetSafeColorNotEqualColor(UPARAM(ref)FSafeColor &FSC, UPARAM(ref)FLinearColor &NC) {
	return (*&FSC != *&NC);
}

FSafeColor USCLibrary::SCO_Pure_SetSafeColorEqualColor(UPARAM(ref)FSafeColor &FSC, UPARAM(ref)FLinearColor &NC, FLinearColor &Output) {
	*&FSC = *&NC; Output = FSC.GetValue(); return *&FSC;
}

/* FSafe -> Native */

bool USCLibrary::SCO_Pure_GetColorEqualFSC(UPARAM(ref)FLinearColor &NC, UPARAM(ref)FSafeColor &FSC) {
	return (*&NC == *&FSC);
}

bool USCLibrary::SCO_Pure_GetColorNotEqualFSC(UPARAM(ref)FLinearColor &NC, UPARAM(ref)FSafeColor &FSC) {
	return (*&NC != *&FSC);
}

FLinearColor USCLibrary::SCO_Pure_SetColorEqualFSC(UPARAM(ref)FLinearColor &NC, UPARAM(ref)FSafeColor &FSC) {
	*&NC = FSC.GetValue(); return *&NC;
}

// FSRotator

/* FSafe -> FSafe */

bool USCLibrary::SCO_Pure_GetSafeRotatorEqualFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR) {
	return (*&FSR == *&SSR);
}

bool USCLibrary::SCO_Pure_GetSafeRotatorNotEqualFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR) {
	return (*&FSR != *&SSR);
}

bool USCLibrary::SCO_Pure_GetSafeRotatorGreaterFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR) {
	return (*&FSR > *&SSR);
}

bool USCLibrary::SCO_Pure_GetSafeRotatorSmallerFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR) {
	return (*&FSR < *&SSR);
}

bool USCLibrary::SCO_Pure_GetSafeRotatorGreaterEqualFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR) {
	return (*&FSR >= *&SSR);
}

bool USCLibrary::SCO_Pure_GetSafeRotatorSmallerEqualFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR) {
	return (*&FSR <= *&SSR);
}

FSafeRotator USCLibrary::SCO_Pure_SetSafeRotatorEqualFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR, FRotator &Output) {
	*&FSR = *&SSR; Output = FSR.GetValue(); return *&FSR;
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorPlusFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR, FRotator &Output) {
	Output = (*&FSR + *&SSR).GetValue(); return FSafeRotator(Output);
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorMinusFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR, FRotator &Output) {
	Output = (*&FSR - *&SSR).GetValue(); return FSafeRotator(Output);
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorTimesFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR, FRotator &Output) {
	Output = (*&FSR * *&SSR).GetValue(); return FSafeRotator(Output);
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorDivideFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR, FRotator &Output) {
	Output = (*&FSR / *&SSR).GetValue(); return FSafeRotator(Output);
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorIncreaseFSR(UPARAM(ref)FSafeRotator &FSR, FRotator &Output) {
	Output = (++ *&FSR).GetValue(); return *&FSR;
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorDecreaseFSR(UPARAM(ref)FSafeRotator &FSR, FRotator &Output) {
	Output = (-- *&FSR).GetValue(); return *&FSR;
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorPlusEqualFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR, FRotator &Output) {
	*&FSR = (*&FSR += *&SSR); Output = FSR.GetValue(); return *&FSR;
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorMinusEqualFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR, FRotator &Output) {
	*&FSR = (*&FSR -= *&SSR); Output = FSR.GetValue(); return *&FSR;
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorModFSR(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FSafeRotator &SSR, FRotator &Output) {
	Output = (*&FSR % *&SSR).GetValue(); return FSafeRotator(Output);
}

/* Native -> FSafe */

bool USCLibrary::SCO_Pure_GetSafeRotatorEqualRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR) {
	return (*&FSR == *&NR);
}

bool USCLibrary::SCO_Pure_GetSafeRotatorNotEqualRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR) {
	return (*&FSR != *&NR);
}

bool USCLibrary::SCO_Pure_GetSafeRotatorGreaterRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR) {
	return (*&FSR > *&NR);
}

bool USCLibrary::SCO_Pure_GetSafeRotatorSmallerRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR) {
	return (*&FSR < *&NR);
}

bool USCLibrary::SCO_Pure_GetSafeRotatorGreaterEqualRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR) {
	return (*&FSR >= *&NR);
}

bool USCLibrary::SCO_Pure_GetSafeRotatorSmallerEqualRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR) {
	return (*&FSR <= *&NR);
}

FSafeRotator USCLibrary::SCO_Pure_SetSafeRotatorEqualRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR, FRotator &Output) {
	*&FSR = *&NR; Output = FSR.GetValue(); return *&FSR;
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorPlusRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR, FRotator &Output) {
	Output = (*&FSR + *&NR).GetValue(); return FSafeRotator(Output);
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorMinusRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR, FRotator &Output) {
	Output = (*&FSR - *&NR).GetValue(); return FSafeRotator(Output);
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorTimesRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR, FRotator &Output) {
	Output = (*&FSR * *&NR).GetValue(); return FSafeRotator(Output);
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorDivideRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR, FRotator &Output) {
	Output = (*&FSR / *&NR).GetValue(); return FSafeRotator(Output);
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorPlusEqualRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR, FRotator &Output) {
	*&FSR = (*&FSR += *&NR); Output = FSR.GetValue(); return *&FSR;
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorMinusEqualRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR, FRotator &Output) {
	*&FSR = (*&FSR -= *&NR); Output = FSR.GetValue(); return *&FSR;
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorModRotator(UPARAM(ref)FSafeRotator &FSR, UPARAM(ref)FRotator &NR, FRotator &Output) {
	Output = (*&FSR % *&NR).GetValue(); return FSafeRotator(Output);
}

/* FSafe -> Native */

bool USCLibrary::SCO_Pure_GetRotatorEqualFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR) {
	return (*&NR == *&FSR);
}

bool USCLibrary::SCO_Pure_GetRotatorNotEqualFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR) {
	return (*&NR != *&FSR);
}

bool USCLibrary::SCO_Pure_GetRotatorGreaterFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR) {
	return (*&NR > *&FSR);
}

bool USCLibrary::SCO_Pure_GetRotatorSmallerFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR) {
	return (*&NR < *&FSR);
}

bool USCLibrary::SCO_Pure_GetRotatorGreaterEqualFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR) {
	return (*&NR >= *&FSR);
}

bool USCLibrary::SCO_Pure_GetRotatorSmallerEqualFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR) {
	return (*&NR <= *&FSR);
}

FRotator USCLibrary::SCO_Pure_SetRotatorEqualFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR) {
	*&NR = FSR.GetValue(); return *&NR;
}

FRotator USCLibrary::SCO_Pure_GetRotatorPlusFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR) {
	return (*&NR + *&FSR);
}

FRotator USCLibrary::SCO_Pure_GetRotatorMinusFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR) {
	return (*&NR - *&FSR);
}

FRotator USCLibrary::SCO_Pure_GetRotatorTimesFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR) {
	return (*&NR * *&FSR);
}

FRotator USCLibrary::SCO_Pure_GetRotatorDivideFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR) {
	return (*&NR / *&FSR);
}

FRotator USCLibrary::SCO_Pure_GetRotatorPlusEqualFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR) {
	*&NR = (*&NR += *&FSR); return *&NR;
}

FRotator USCLibrary::SCO_Pure_GetRotatorMinusEqualFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR) {
	*&NR = (*&NR -= *&FSR); return *&NR;
}

FRotator USCLibrary::SCO_Pure_GetRotatorModFSR(UPARAM(ref)FRotator &NR, UPARAM(ref)FSafeRotator &FSR) {
	return (*&NR % *&FSR);
}

// FSTransform

/* FSafe -> FSafe */

bool USCLibrary::SCO_Pure_GetSafeTransformEqualFST(UPARAM(ref)FSafeTransform &FST, UPARAM(ref)FSafeTransform &SST) {
	return (*&FST == *&SST);
}

bool USCLibrary::SCO_Pure_GetSafeTransformNotEqualFST(UPARAM(ref)FSafeTransform &FST, UPARAM(ref)FSafeTransform &SST) {
	return (*&FST != *&SST);
}

FSafeTransform USCLibrary::SCO_Pure_SetSafeTransformEqualFST(UPARAM(ref)FSafeTransform &FST, UPARAM(ref)FSafeTransform &SST, FTransform &Output) {
	*&FST = *&SST; Output = FST.GetValue(); return *&FST;
}

/* Native -> FSafe */

bool USCLibrary::SCO_Pure_GetSafeTransformEqualTransform(UPARAM(ref)FSafeTransform &FST, UPARAM(ref)FTransform &NT) {
	return (*&FST == *&NT);
}

bool USCLibrary::SCO_Pure_GetSafeTransformNotEqualTransform(UPARAM(ref)FSafeTransform &FST, UPARAM(ref)FTransform &NT) {
	return (*&FST != *&NT);
}

FSafeTransform USCLibrary::SCO_Pure_SetSafeTransformEqualTransform(UPARAM(ref)FSafeTransform &FST, UPARAM(ref)FTransform &NT, FTransform &Output) {
	*&FST = *&NT; Output = FST.GetValue(); return *&FST;
}

/* FSafe -> Native */

bool USCLibrary::SCO_Pure_GetTransformEqualFST(UPARAM(ref)FTransform &NT, UPARAM(ref)FSafeTransform &FST) {
	return (*&NT == *&FST);
}

bool USCLibrary::SCO_Pure_GetTransformNotEqualFST(UPARAM(ref)FTransform &NT, UPARAM(ref)FSafeTransform &FST) {
	return (*&NT != *&FST);
}

FTransform USCLibrary::SCO_Pure_SetTransformEqualFST(UPARAM(ref)FTransform &NT, UPARAM(ref)FSafeTransform &FST) {
	*&NT = FST.GetValue(); return *&NT;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#if PLATFORM_WINDOWS
#pragma endregion OPERATORS
#endif
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////