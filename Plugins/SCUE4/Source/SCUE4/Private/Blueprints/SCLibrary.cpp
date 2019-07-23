///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//		Copyright 2016 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "SCLibrary.h"
#include "SCUE4PrivatePCH.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

FString USCLibrary::SCL_Callable_GetRawSafeBool(const FSafeBool &SB) {
	return SB.GetRaw();
}

bool USCLibrary::SCL_Pure_GetSafeBool(const FSafeBool &SB) {
	return SB.GetValue();
}

bool USCLibrary::SCL_Pure_GetSafeBoolWithKey(const FSafeBool &SB, const FString &Key) {
	return SB.GetValue(Key);
}

bool USCLibrary::SCL_Callable_GetSafeBool(const FSafeBool &SB) {
	return SB.GetValue();
}

bool USCLibrary::SCL_Callable_GetSafeBoolWithKey(const FSafeBool &SB, const FString &Key) {
	return SB.GetValue(Key);
}

//

bool USCLibrary::SCL_Callable_SetRawSafeBool(FSafeBool &SB, const FString &Value) {
	SB.SetRaw(Value); return SB.GetValue();
}

bool USCLibrary::SCL_Pure_SetSafeBool(FSafeBool &SB, const bool &Value) {
	SB.SetValue(Value); return SB.GetValue();
}

bool USCLibrary::SCL_Pure_SetSafeBoolWithKey(FSafeBool &SB, const FString &Key, const bool &Value) {
	SB.SetValue(Key,Value); return SB.GetValue();
}

bool USCLibrary::SCL_Callable_SetSafeBool(FSafeBool &SB, const bool &Value) {
	SB.SetValue(Value); return SB.GetValue();
}

bool USCLibrary::SCL_Callable_SetSafeBoolWithKey(FSafeBool &SB, const FString &Key, const bool &Value) {
	SB.SetValue(Key,Value); return SB.GetValue();
}

//

FString USCLibrary::SCL_Callable_GetRawSafeInt(const FSafeInt &SI) {
	return SI.GetRaw();
}

int32 USCLibrary::SCL_Pure_GetSafeInt(const FSafeInt &SI) {
	return SI.GetValue();
}

int32 USCLibrary::SCL_Pure_GetSafeIntWithKey(const FSafeInt &SI, const FString &Key) {
	return SI.GetValue(Key);
}

int32 USCLibrary::SCL_Callable_GetSafeInt(const FSafeInt &SI) {
	return SI.GetValue();
}

int32 USCLibrary::SCL_Callable_GetSafeIntWithKey(const FSafeInt &SI, const FString &Key) {
	return SI.GetValue(Key);
}

//

int32 USCLibrary::SCL_Callable_SetRawSafeInt(FSafeInt &SI, const FString &Value) {
	SI.SetRaw(Value); return SI.GetValue();
}

int32 USCLibrary::SCL_Pure_SetSafeInt(FSafeInt &SI, const int32 &Value) {
	SI.SetValue(Value); return SI.GetValue();
}

int32 USCLibrary::SCL_Pure_SetSafeIntWithKey(FSafeInt &SI, const FString &Key, const int32 &Value) {
	SI.SetValue(Key,Value); return SI.GetValue(Key);
}

int32 USCLibrary::SCL_Callable_SetSafeInt(FSafeInt &SI, const int32 &Value) {
	SI.SetValue(Value); return SI.GetValue();
}

int32 USCLibrary::SCL_Callable_SetSafeIntWithKey(FSafeInt &SI, const FString &Key, const int32 &Value) {
	SI.SetValue(Key,Value); return SI.GetValue(Key);
}

//

FString USCLibrary::SCL_Callable_GetRawSafeByte(const FSafeByte &SB) {
	return SB.GetRaw();
}

uint8 USCLibrary::SCL_Pure_GetSafeByte(const FSafeByte &SB) {
	return SB.GetValue();
}

uint8 USCLibrary::SCL_Pure_GetSafeByteWithKey(const FSafeByte &SB, const FString &Key) {
	return SB.GetValue(Key);
}

uint8 USCLibrary::SCL_Callable_GetSafeByte(const FSafeByte &SB) {
	return SB.GetValue();
}

uint8 USCLibrary::SCL_Callable_GetSafeByteWithKey(const FSafeByte &SB, const FString &Key) {
	return SB.GetValue(Key);
}

//

uint8 USCLibrary::SCL_Callable_SetRawSafeByte(FSafeByte &SB, const FString &Value) {
	SB.SetRaw(Value); return SB.GetValue();
}

uint8 USCLibrary::SCL_Pure_SetSafeByte(FSafeByte &SB, const uint8 &Value) {
	SB.SetValue(Value); return SB.GetValue();
}

uint8 USCLibrary::SCL_Pure_SetSafeByteWithKey(FSafeByte &SB, const FString &Key, const uint8 &Value) {
	SB.SetValue(Key,Value); return SB.GetValue(Key);
}

uint8 USCLibrary::SCL_Callable_SetSafeByte(FSafeByte &SB, const uint8 &Value) {
	SB.SetValue(Value); return SB.GetValue();
}

uint8 USCLibrary::SCL_Callable_SetSafeByteWithKey(FSafeByte &SB, const FString &Key, const uint8 &Value) {
	SB.SetValue(Key,Value); return SB.GetValue(Key);
}

//

FString USCLibrary::SCL_Callable_GetRawSafeFloat(const FSafeFloat &SF) {
	return SF.GetRaw();
}

float USCLibrary::SCL_Pure_GetSafeFloat(const FSafeFloat &SF) {
	return SF.GetValue();
}

float USCLibrary::SCL_Pure_GetSafeFloatWithKey(const FSafeFloat &SF, const FString &Key) {
	return SF.GetValue(Key);
}

float USCLibrary::SCL_Callable_GetSafeFloat(const FSafeFloat &SF) {
	return SF.GetValue();
}

float USCLibrary::SCL_Callable_GetSafeFloatWithKey(const FSafeFloat &SF, const FString &Key) {
	return SF.GetValue(Key);
}

//

float USCLibrary::SCL_Callable_SetRawSafeFloat(FSafeFloat &SF, const FString &Value) {
	SF.SetRaw(Value); return SF.GetValue();
}

float USCLibrary::SCL_Pure_SetSafeFloat(FSafeFloat &SF, const float &Value) {
	SF.SetValue(Value); return SF.GetValue();
}

float USCLibrary::SCL_Pure_SetSafeFloatWithKey(FSafeFloat &SF, const FString &Key, const float &Value) {
	SF.SetValue(Key,Value); return SF.GetValue(Key);
}

float USCLibrary::SCL_Callable_SetSafeFloat(FSafeFloat &SF, const float &Value) {
	SF.SetValue(Value); return SF.GetValue();
}

float USCLibrary::SCL_Callable_SetSafeFloatWithKey(FSafeFloat &SF, const FString &Key, const float &Value) {
	SF.SetValue(Key,Value); return SF.GetValue(Key);
}

FString USCLibrary::SCL_Callable_GetRawSafeName(const FSafeName &SN) {
	return SN.GetRaw();
}

//

FName USCLibrary::SCL_Pure_GetSafeName(const FSafeName &SN) {
	return SN.GetValue();
}

FName USCLibrary::SCL_Pure_GetSafeNameWithKey(const FSafeName &SN, const FString &Key) {
	return SN.GetValue(Key);
}

FName USCLibrary::SCL_Callable_GetSafeName(const FSafeName &SN) {
	return SN.GetValue();
}

FName USCLibrary::SCL_Callable_GetSafeNameWithKey(const FSafeName &SN, const FString &Key) {
	return SN.GetValue(Key);
}

//

FName USCLibrary::SCL_Callable_SetRawSafeName(FSafeName &SN, const FString &Value) {
	SN.SetRaw(Value); return SN.GetValue();
}

FName USCLibrary::SCL_Pure_SetSafeName(FSafeName &SN, const FName &Value) {
	SN.SetValue(Value); return SN.GetValue();
}

FName USCLibrary::SCL_Pure_SetSafeNameWithKey(FSafeName &SN, const FString &Key, const FName &Value) {
	SN.SetValue(Key,Value); return SN.GetValue(Key);
}

FName USCLibrary::SCL_Callable_SetSafeName(FSafeName &SN, const FName &Value) {
	SN.SetValue(Value); return SN.GetValue();
}

FName USCLibrary::SCL_Callable_SetSafeNameWithKey(FSafeName &SN, const FString &Key, const FName &Value) {
	SN.SetValue(Key,Value); return SN.GetValue(Key);
}

//

FString USCLibrary::SCL_Callable_GetRawSafeString(const FSafeString &SS) {
	return SS.GetRaw();
}

FString USCLibrary::SCL_Pure_GetSafeString(const FSafeString &SS) {
	return SS.GetValue();
}

FString USCLibrary::SCL_Pure_GetSafeStringWithKey(const FSafeString &SS, const FString &Key) {
	return SS.GetValue(Key);
}

FString USCLibrary::SCL_Callable_GetSafeString(const FSafeString &SS) {
	return SS.GetValue();
}

FString USCLibrary::SCL_Callable_GetSafeStringWithKey(const FSafeString &SS, const FString &Key) {
	return SS.GetValue(Key);
}

//

FString USCLibrary::SCL_Callable_SetRawSafeString(FSafeString &SS, const FString &Value) {
	SS.SetRaw(Value); return SS.GetValue();
}

FString USCLibrary::SCL_Pure_SetSafeString(FSafeString &SS, const FString &Value) {
	SS.SetValue(Value); return SS.GetValue();
}

FString USCLibrary::SCL_Pure_SetSafeStringWithKey(FSafeString &SS, const FString &Key, const FString &Value) {
	SS.SetValue(Key,Value); return SS.GetValue(Key);
}

FString USCLibrary::SCL_Callable_SetSafeString(FSafeString &SS, const FString &Value) {
	SS.SetValue(Value); return SS.GetValue();
}

FString USCLibrary::SCL_Callable_SetSafeStringWithKey(FSafeString &SS, const FString &Key, const FString &Value) {
	SS.SetValue(Key,Value); return SS.GetValue(Key);
}

//

FString USCLibrary::SCL_Callable_GetRawSafeText(const FSafeText &ST) {
	return ST.GetRaw();
}

FText USCLibrary::SCL_Pure_GetSafeText(const FSafeText &ST) {
	return ST.GetValue();
}

FText USCLibrary::SCL_Pure_GetSafeTextWithKey(const FSafeText &ST, const FString &Key) {
	return ST.GetValue(Key);
}

FText USCLibrary::SCL_Callable_GetSafeText(const FSafeText &ST) {
	return ST.GetValue();
}

FText USCLibrary::SCL_Callable_GetSafeTextWithKey(const FSafeText &ST, const FString &Key) {
	return ST.GetValue(Key);
}

//

FText USCLibrary::SCL_Callable_SetRawSafeText(FSafeText &ST, const FString &Value) {
	ST.SetRaw(Value); return ST.GetValue();
}

FText USCLibrary::SCL_Pure_SetSafeText(FSafeText &ST, const FText &Value) {
	ST.SetValue(Value); return ST.GetValue();
}

FText USCLibrary::SCL_Pure_SetSafeTextWithKey(FSafeText &ST, const FString &Key, const FText &Value) {
	ST.SetValue(Key,Value); return ST.GetValue(Key);
}

FText USCLibrary::SCL_Callable_SetSafeText(FSafeText &ST, const FText &Value) {
	ST.SetValue(Value); return ST.GetValue();
}

FText USCLibrary::SCL_Callable_SetSafeTextWithKey(FSafeText &ST, const FString &Key, const FText &Value) {
	ST.SetValue(Key,Value); return ST.GetValue(Key);
}

//

FVector2D USCLibrary::SCL_Pure_GetSafeVector2D(const FSafeVector2D &SV) {
	return SV.GetValue();
}

FVector2D USCLibrary::SCL_Pure_GetSafeVector2DWithKey(const FSafeVector2D &SV, const FString &Key) {
	return SV.GetValue(Key);
}

FVector2D USCLibrary::SCL_Callable_GetSafeVector2D(const FSafeVector2D &SV) {
	return SV.GetValue();
}

FVector2D USCLibrary::SCL_Callable_GetSafeVector2DWithKey(const FSafeVector2D &SV, const FString &Key) {
	return SV.GetValue(Key);
}

//

FVector2D USCLibrary::SCL_Pure_SetSafeVector2D(FSafeVector2D &SV, const FVector2D &Value) {
	SV.SetValue(Value); return SV.GetValue();
}

FVector2D USCLibrary::SCL_Pure_SetSafeVector2DWithKey(FSafeVector2D &SV, const FString &Key, const FVector2D &Value) {
	SV.SetValue(Key,Value); return SV.GetValue(Key);
}

FVector2D USCLibrary::SCL_Callable_SetSafeVector2D(FSafeVector2D &SV, const FVector2D &Value) {
	SV.SetValue(Value); return SV.GetValue();
}

FVector2D USCLibrary::SCL_Callable_SetSafeVector2DWithKey(FSafeVector2D &SV, const FString &Key, const FVector2D &Value) {
	SV.SetValue(Key,Value); return SV.GetValue(Key);
}

//

FVector USCLibrary::SCL_Pure_GetSafeVector3D(const FSafeVector3D &SV) {
	return SV.GetValue();
}

FVector USCLibrary::SCL_Pure_GetSafeVector3DWithKey(const FSafeVector3D &SV, const FString &Key) {
	return SV.GetValue(Key);
}

FVector USCLibrary::SCL_Callable_GetSafeVector3D(const FSafeVector3D &SV) {
	return SV.GetValue();
}

FVector USCLibrary::SCL_Callable_GetSafeVector3DWithKey(const FSafeVector3D &SV, const FString &Key) {
	return SV.GetValue(Key);
}

//

FVector USCLibrary::SCL_Pure_SetSafeVector3D(FSafeVector3D &SV, const FVector &Value) {
	SV.SetValue(Value); return SV.GetValue();
}

FVector USCLibrary::SCL_Pure_SetSafeVector3DWithKey(FSafeVector3D &SV, const FString &Key, const FVector &Value) {
	SV.SetValue(Key,Value); return SV.GetValue(Key);
}

FVector USCLibrary::SCL_Callable_SetSafeVector3D(FSafeVector3D &SV, const FVector &Value) {
	SV.SetValue(Value); return SV.GetValue();
}

FVector USCLibrary::SCL_Callable_SetSafeVector3DWithKey(FSafeVector3D &SV, const FString &Key, const FVector &Value) {
	SV.SetValue(Key,Value); return SV.GetValue(Key);
}

//

FLinearColor USCLibrary::SCL_Pure_GetSafeColor(const FSafeColor &SC) {
	return SC.GetValue();
}

FLinearColor USCLibrary::SCL_Pure_GetSafeColorWithKey(const FSafeColor &SC, const FString &Key) {
	return SC.GetValue(Key);
}

FLinearColor USCLibrary::SCL_Callable_GetSafeColor(const FSafeColor &SC) {
	return SC.GetValue();
}

FLinearColor USCLibrary::SCL_Callable_GetSafeColorWithKey(const FSafeColor &SC, const FString &Key) {
	return SC.GetValue(Key);
}

//

FLinearColor USCLibrary::SCL_Pure_SetSafeColor(FSafeColor &SC, const FLinearColor &Value) {
	SC.SetValue(Value); return SC.GetValue();
}

FLinearColor USCLibrary::SCL_Pure_SetSafeColorWithKey(FSafeColor &SC, const FString &Key, const FLinearColor &Value) {
	SC.SetValue(Key,Value); return SC.GetValue(Key);
}

FLinearColor USCLibrary::SCL_Callable_SetSafeColor(FSafeColor &SC, const FLinearColor &Value) {
	SC.SetValue(Value); return SC.GetValue();
}

FLinearColor USCLibrary::SCL_Callable_SetSafeColorWithKey(FSafeColor &SC, const FString &Key, const FLinearColor &Value) {
	SC.SetValue(Key,Value); return SC.GetValue(Key);
}

//

FRotator USCLibrary::SCL_Pure_GetSafeRotator(const FSafeRotator &SR) {
	return SR.GetValue();
}

FRotator USCLibrary::SCL_Pure_GetSafeRotatorWithKey(const FSafeRotator &SR, const FString &Key) {
	return SR.GetValue(Key);
}

FRotator USCLibrary::SCL_Callable_GetSafeRotator(const FSafeRotator &SR) {
	return SR.GetValue();
}

FRotator USCLibrary::SCL_Callable_GetSafeRotatorWithKey(const FSafeRotator &SR, const FString &Key) {
	return SR.GetValue(Key);
}

//

FRotator USCLibrary::SCL_Pure_SetSafeRotator(FSafeRotator &SR, const FRotator &Value) {
	SR.SetValue(Value); return SR.GetValue();
}

FRotator USCLibrary::SCL_Pure_SetSafeRotatorWithKey(FSafeRotator &SR, const FString &Key, const FRotator &Value) {
	SR.SetValue(Key,Value); return SR.GetValue(Key);
}

FRotator USCLibrary::SCL_Callable_SetSafeRotator(FSafeRotator &SR, const FRotator &Value) {
	SR.SetValue(Value); return SR.GetValue();
}

FRotator USCLibrary::SCL_Callable_SetSafeRotatorWithKey(FSafeRotator &SR, const FString &Key, const FRotator &Value) {
	SR.SetValue(Key,Value); return SR.GetValue(Key);
}

//

FTransform USCLibrary::SCL_Pure_GetSafeTransform(const FSafeTransform &ST) {
	return ST.GetValue();
}

FTransform USCLibrary::SCL_Pure_GetSafeTransformWithKey(const FSafeTransform &ST, const FString &Key) {
	return ST.GetValue(Key);
}

FTransform USCLibrary::SCL_Callable_GetSafeTransform(const FSafeTransform &ST) {
	return ST.GetValue();
}

FTransform USCLibrary::SCL_Callable_GetSafeTransformWithKey(const FSafeTransform &ST, const FString &Key) {
	return ST.GetValue(Key);
}

//

FTransform USCLibrary::SCL_Pure_SetSafeTransform(FSafeTransform &ST, const FTransform &Value) {
	ST.SetValue(Value); return ST.GetValue();
}

FTransform USCLibrary::SCL_Pure_SetSafeTransformWithKey(FSafeTransform &ST, const FString &Key, const FTransform &Value) {
	ST.SetValue(Key,Value); return ST.GetValue();
}

FTransform USCLibrary::SCL_Callable_SetSafeTransform(FSafeTransform &ST, const FTransform &Value) {
	ST.SetValue(Value); return ST.GetValue();
}

FTransform USCLibrary::SCL_Callable_SetSafeTransformWithKey(FSafeTransform &ST, const FString &Key, const FTransform &Value) {
	ST.SetValue(Key,Value); return ST.GetValue();
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// FSBool

FSafeBool USCLibrary::SCO_Pure_SetSafeBoolEqualFSB(FSafeBool &FSB, const FSafeBool &SSB, bool &Output) {
	FSB = SSB; Output = FSB.GetValue(); return FSB;
}

FSafeBool USCLibrary::SCO_Pure_GetSafeBoolEqualFSB(const FSafeBool &FSB, const FSafeBool &SSB, bool &Output) {
	Output = (FSB == SSB); return FSafeBool(Output);
}

FSafeBool USCLibrary::SCO_Pure_GetSafeBoolNotEqualFSB(const FSafeBool &FSB, const FSafeBool &SSB, bool &Output) {
	Output = (FSB != SSB); return FSafeBool(Output);
}

FSafeBool USCLibrary::SCO_Pure_GetSafeBoolAndFSB(const FSafeBool &FSB, const FSafeBool &SSB, bool &Output) {
	Output = (FSB && SSB); return FSafeBool(Output);
}

FSafeBool USCLibrary::SCO_Pure_GetSafeBoolOrFSB(const FSafeBool &FSB, const FSafeBool &SSB, bool &Output) {
	Output = (FSB || SSB); return FSafeBool(Output);
}

FSafeBool USCLibrary::SCO_Pure_SetSafeBoolEqualBool(FSafeBool &FSB, const bool &NB, bool &Output) {
	FSB = NB; Output = FSB.GetValue(); return FSB;
}

FSafeBool USCLibrary::SCO_Pure_GetSafeBoolEqualBool(const FSafeBool &FSB, const bool &NB, bool &Output) {
	Output = (FSB == NB); return FSafeBool(Output);
}

FSafeBool USCLibrary::SCO_Pure_GetSafeBoolNotEqualBool(const FSafeBool &FSB, const bool &NB, bool &Output) {
	Output = (FSB != NB); return FSafeBool(Output);
}

FSafeBool USCLibrary::SCO_Pure_GetSafeBoolAndBool(const FSafeBool &FSB, const bool &NB, bool &Output) {
	Output = (FSB && NB); return FSafeBool(Output);
}

FSafeBool USCLibrary::SCO_Pure_GetSafeBoolOrBool(const FSafeBool &FSB, const bool &NB, bool &Output) {
	Output = (FSB || NB); return FSafeBool(Output);
}

bool USCLibrary::SCO_Pure_SetBoolEqualFSB(bool &NB, const FSafeBool &FSB) {
	return (NB = FSB.GetValue());
}

bool USCLibrary::SCO_Pure_GetBoolEqualFSB(const bool &NB, const FSafeBool &FSB) {
	return (FSB == NB);
}

bool USCLibrary::SCO_Pure_GetBoolNotEqualFSB(const bool &NB, const FSafeBool &FSB) {
	return (FSB != NB);
}

bool USCLibrary::SCO_Pure_GetBoolAndFSB(const bool &NB, const FSafeBool &FSB) {
	return (FSB && NB);
}

bool USCLibrary::SCO_Pure_GetBoolOrFSB(const bool &NB, const FSafeBool &FSB) {
	return (FSB || NB);
}

// FSByte

bool USCLibrary::SCO_Pure_GetSafeByteEqualFSB(const FSafeByte &FSB, const FSafeByte &SSB) {
	return (FSB == SSB);
}

bool USCLibrary::SCO_Pure_GetSafeByteNotEqualFSB(const FSafeByte &FSB, const FSafeByte &SSB) {
	return (FSB != SSB);
}

bool USCLibrary::SCO_Pure_GetSafeByteGreaterFSB(const FSafeByte &FSB, const FSafeByte &SSB) {
	return (FSB > SSB);
}

bool USCLibrary::SCO_Pure_GetSafeByteSmallerFSB(const FSafeByte &FSB, const FSafeByte &SSB) {
	return (FSB < SSB);
}

bool USCLibrary::SCO_Pure_GetSafeByteGreaterEqualFSB(const FSafeByte &FSB, const FSafeByte &SSB) {
	return (FSB >= SSB);
}

bool USCLibrary::SCO_Pure_GetSafeByteSmallerEqualFSB(const FSafeByte &FSB, const FSafeByte &SSB) {
	return (FSB <= SSB);
}

FSafeByte USCLibrary::SCO_Pure_SetSafeByteEqualFSB(FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output) {
	FSB = SSB; Output = FSB.GetValue(); return FSB;
}

FSafeByte USCLibrary::SCO_Pure_GetSafeBytePlusFSB(const FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output) {
	Output = FSafeByte(FSB + SSB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteMinusFSB(const FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output) {
	Output = (FSB - SSB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteTimesFSB(const FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output) {
	Output = (FSB * SSB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteDivideFSB(const FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output) {
	Output = (FSB / SSB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteIncreaseFSB(FSafeByte &FSB, uint8 &Output) {
	Output = (FSB++).GetValue(); return FSB;
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteDecreaseFSB(FSafeByte &FSB, uint8 &Output) {
	Output = (FSB--).GetValue(); return FSB;
}

FSafeByte USCLibrary::SCO_Pure_GetSafeBytePlusEqualFSB(FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output) {
	FSB += SSB; Output = FSB.GetValue(); return FSB;
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteMinusEqualFSB(FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output) {
	FSB -= SSB; Output = FSB.GetValue(); return FSB;
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteNotFSB(const FSafeByte &FSB, uint8 &Output) {
	Output = ( ~ FSB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteModFSB(const FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output) {
	Output = (FSB % SSB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteAndFSB(const FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output) {
	Output = (FSB & SSB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteOrFSB(const FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output) {
	Output = (FSB | SSB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteXorFSB(const FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output) {
	Output = (FSB ^ SSB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteShiftRFSB(const FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output) {
	Output = (FSB >> SSB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteShiftLFSB(const FSafeByte &FSB, const FSafeByte &SSB, uint8 &Output) {
	Output = (FSB << SSB).GetValue(); return FSafeByte(Output);
}

bool USCLibrary::SCO_Pure_GetSafeByteEqualByte(const FSafeByte &FSB, const uint8 &NB) {
	return (FSB == NB);
}

bool USCLibrary::SCO_Pure_GetSafeByteNotEqualByte(const FSafeByte &FSB, const uint8 &NB) {
	return (FSB != NB);
}

bool USCLibrary::SCO_Pure_GetSafeByteGreaterByte(const FSafeByte &FSB, const uint8 &NB) {
	return (FSB > NB);
}

bool USCLibrary::SCO_Pure_GetSafeByteSmallerByte(const FSafeByte &FSB, const uint8 &NB) {
	return (FSB < NB);
}

bool USCLibrary::SCO_Pure_GetSafeByteGreaterEqualByte(const FSafeByte &FSB, const uint8 &NB) {
	return (FSB >= NB);
}

bool USCLibrary::SCO_Pure_GetSafeByteSmallerEqualByte(const FSafeByte &FSB, const uint8 &NB) {
	return (FSB <= NB);
}

FSafeByte USCLibrary::SCO_Pure_SetSafeByteEqualByte(FSafeByte &FSB, const uint8 &NB, uint8 &Output) {
	FSB = NB; Output = FSB.GetValue(); return FSB;
}

FSafeByte USCLibrary::SCO_Pure_GetSafeBytePlusByte(const FSafeByte &FSB, const uint8 &NB, uint8 &Output) {
	Output = (FSB + NB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteMinusByte(const FSafeByte &FSB, const uint8 &NB, uint8 &Output) {
	Output = (FSB - NB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteTimesByte(const FSafeByte &FSB, const uint8 &NB, uint8 &Output) {
	Output = (FSB * NB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteDivideByte(const FSafeByte &FSB, const uint8 &NB, uint8 &Output) {
	Output = (FSB / NB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeBytePlusEqualByte(FSafeByte &FSB, const uint8 &NB, uint8 &Output) {
	FSB += NB; Output = FSB.GetValue(); return FSB;
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteMinusEqualByte(FSafeByte &FSB, const uint8 &NB, uint8 &Output) {
	FSB -= NB; Output = FSB.GetValue(); return FSB;
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteNotByte(const uint8 &NB, uint8 &Output) {
	Output = ( ~ NB); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteModByte(const FSafeByte &FSB, const uint8 &NB, uint8 &Output) {
	Output = (FSB % NB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteAndByte(const FSafeByte &FSB, const uint8 &NB, uint8 &Output) {
	Output = (FSB & NB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteOrByte(const FSafeByte &FSB, const uint8 &NB, uint8 &Output) {
	Output = (FSB | NB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteXorByte(const FSafeByte &FSB, const uint8 &NB, uint8 &Output) {
	Output = (FSB ^ NB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteShiftRByte(const FSafeByte &FSB, const uint8 &NB, uint8 &Output) {
	Output = (FSB >> NB).GetValue(); return FSafeByte(Output);
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteShiftLByte(const FSafeByte &FSB, const uint8 &NB, uint8 &Output) {
	Output = (FSB << NB).GetValue(); return FSafeByte(Output);
}

bool USCLibrary::SCO_Pure_GetByteEqualFSB(const uint8 &NB, const FSafeByte &FSB) {
	return (NB == FSB.GetValue());
}

bool USCLibrary::SCO_Pure_GetByteNotEqualFSB(const uint8 &NB, const FSafeByte &FSB) {
	return (NB != FSB.GetValue());
}

bool USCLibrary::SCO_Pure_GetByteGreaterFSB(const uint8 &NB, const FSafeByte &FSB) {
	return (NB > FSB.GetValue());
}

bool USCLibrary::SCO_Pure_GetByteSmallerFSB(const uint8 &NB, const FSafeByte &FSB) {
	return (NB < FSB.GetValue());
}

bool USCLibrary::SCO_Pure_GetByteGreaterEqualFSB(const uint8 &NB, const FSafeByte &FSB) {
	return (NB >= FSB.GetValue());
}

bool USCLibrary::SCO_Pure_GetByteSmallerEqualFSB(const uint8 &NB, const FSafeByte &FSB) {
	return (NB <= FSB.GetValue());
}

uint8 USCLibrary::SCO_Pure_SetByteEqualFSB(uint8 &NB, const FSafeByte &FSB) {
	NB = FSB.GetValue(); return NB;
}

uint8 USCLibrary::SCO_Pure_GetBytePlusFSB(const uint8 &NB, const FSafeByte &FSB) {
	return (NB + FSB.GetValue());
}

uint8 USCLibrary::SCO_Pure_GetByteMinusFSB(const uint8 &NB, const FSafeByte &FSB) {
	return (NB - FSB.GetValue());
}

uint8 USCLibrary::SCO_Pure_GetByteTimesFSB(const uint8 &NB, const FSafeByte &FSB) {
	return (NB * FSB.GetValue());
}

uint8 USCLibrary::SCO_Pure_GetByteDivideFSB(const uint8 &NB, const FSafeByte &FSB) {
	return (NB / FSB.GetValue());
}

uint8 USCLibrary::SCO_Pure_GetBytePlusEqualFSB(uint8 &NB, const FSafeByte &FSB) {
	NB += FSB.GetValue(); return NB;
}

uint8 USCLibrary::SCO_Pure_GetByteMinusEqualFSB(uint8 &NB, const FSafeByte &FSB) {
	NB -= FSB.GetValue(); return NB;
}

uint8 USCLibrary::SCO_Pure_GetByteModFSB(const uint8 &NB, const FSafeByte &FSB) {
	return (NB % FSB.GetValue());
}

uint8 USCLibrary::SCO_Pure_GetByteAndFSB(const uint8 &NB, const FSafeByte &FSB) {
	return (NB & FSB.GetValue());
}

uint8 USCLibrary::SCO_Pure_GetByteOrFSB(const uint8 &NB, const FSafeByte &FSB) {
	return (NB | FSB.GetValue());
}

uint8 USCLibrary::SCO_Pure_GetByteXorFSB(const uint8 &NB, const FSafeByte &FSB) {
	return (NB ^ FSB.GetValue());
}

uint8 USCLibrary::SCO_Pure_GetByteShiftRFSB(const uint8 &NB, const FSafeByte &FSB) {
	return (NB >> FSB.GetValue());
}

uint8 USCLibrary::SCO_Pure_GetByteShiftLFSB(const uint8 &NB, const FSafeByte &FSB) {
	return (NB << FSB.GetValue());
}


// FSInt

bool USCLibrary::SCO_Pure_GetSafeIntEqualFSI(const FSafeInt &FSI, const FSafeInt &SSI) {
	return (FSI == SSI);
}

bool USCLibrary::SCO_Pure_GetSafeIntNotEqualFSI(const FSafeInt &FSI, const FSafeInt &SSI) {
	return (FSI != SSI);
}

bool USCLibrary::SCO_Pure_GetSafeIntGreaterFSI(const FSafeInt &FSI, const FSafeInt &SSI) {
	return (FSI > SSI);
}

bool USCLibrary::SCO_Pure_GetSafeIntSmallerFSI(const FSafeInt &FSI, const FSafeInt &SSI) {
	return (FSI < SSI);
}

bool USCLibrary::SCO_Pure_GetSafeIntGreaterEqualFSI(const FSafeInt &FSI, const FSafeInt &SSI) {
	return (FSI >= SSI);
}

bool USCLibrary::SCO_Pure_GetSafeIntSmallerEqualFSI(const FSafeInt &FSI, const FSafeInt &SSI) {
	return (FSI <= SSI);
}

FSafeInt USCLibrary::SCO_Pure_SetSafeIntEqualFSI(FSafeInt &FSI, const FSafeInt &SSI, int32 &Output) {
	FSI = SSI; Output = FSI.GetValue(); return FSI;
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntPlusFSI(const FSafeInt &FSI, const FSafeInt &SSI, int32 &Output) {
	Output = (FSI + SSI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntMinusFSI(const FSafeInt &FSI, const FSafeInt &SSI, int32 &Output) {
	Output = (FSI - SSI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntTimesFSI(const FSafeInt &FSI, const FSafeInt &SSI, int32 &Output) {
	Output = (FSI * SSI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntDivideFSI(const FSafeInt &FSI, const FSafeInt &SSI, int32 &Output) {
	Output = (FSI / SSI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntIncreaseFSI(FSafeInt &FSI, int32 &Output) {
	Output = (FSI++).GetValue(); return FSI;
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntDecreaseFSI(FSafeInt &FSI, int32 &Output) {
	Output = (FSI--).GetValue(); return FSI;
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntPlusEqualFSI(FSafeInt &FSI, const FSafeInt &SSI, int32 &Output) {
	FSI += SSI; Output = FSI.GetValue(); return FSI;
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntMinusEqualFSI(FSafeInt &FSI, const FSafeInt &SSI, int32 &Output) {
	FSI -= SSI; Output = FSI.GetValue(); return FSI;
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntNotFSI(const FSafeInt &FSI, int32 &Output) {
	Output = ( ~ FSI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntModFSI(const FSafeInt &FSI, const FSafeInt &SSI, int32 &Output) {
	Output = (FSI % SSI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntAndFSI(const FSafeInt &FSI, const FSafeInt &SSI, int32 &Output) {
	Output = (FSI & SSI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntOrFSI(const FSafeInt &FSI, const FSafeInt &SSI, int32 &Output) {
	Output = (FSI | SSI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntXorFSI(const FSafeInt &FSI, const FSafeInt &SSI, int32 &Output) {
	Output = (FSI ^ SSI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntShiftRFSI(const FSafeInt &FSI, const FSafeInt &SSI, int32 &Output) {
	Output = (FSI >> SSI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntShiftLFSI(const FSafeInt &FSI, const FSafeInt &SSI, int32 &Output) {
	Output = (FSI << SSI).GetValue(); return FSafeInt(Output);
}

bool USCLibrary::SCO_Pure_GetSafeIntEqualInt(const FSafeInt &FSI, const int32 &NI) {
	return (FSI == NI);
}

bool USCLibrary::SCO_Pure_GetSafeIntNotEqualInt(const FSafeInt &FSI, const int32 &NI) {
	return (FSI != NI);
}

bool USCLibrary::SCO_Pure_GetSafeIntGreaterInt(const FSafeInt &FSI, const int32 &NI) {
	return (FSI > NI);
}

bool USCLibrary::SCO_Pure_GetSafeIntSmallerInt(const FSafeInt &FSI, const int32 &NI) {
	return (FSI < NI);
}

bool USCLibrary::SCO_Pure_GetSafeIntGreaterEqualInt(const FSafeInt &FSI, const int32 &NI) {
	return (FSI >= NI);
}

bool USCLibrary::SCO_Pure_GetSafeIntSmallerEqualInt(const FSafeInt &FSI, const int32 &NI) {
	return (FSI <= NI);
}

FSafeInt USCLibrary::SCO_Pure_SetSafeIntEqualInt(FSafeInt &FSI, const int32 &NI, int32 &Output) {
	FSI = NI; Output = FSI.GetValue(); return FSI;
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntPlusInt(const FSafeInt &FSI, const int32 &NI, int32 &Output) {
	Output = (FSI + NI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntMinusInt(const FSafeInt &FSI, const int32 &NI, int32 &Output) {
	Output = (FSI - NI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntTimesInt(const FSafeInt &FSI, const int32 &NI, int32 &Output) {
	Output = (FSI * NI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntDivideInt(const FSafeInt &FSI, const int32 &NI, int32 &Output) {
	Output = (FSI / NI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntPlusEqualInt(FSafeInt &FSI, const int32 &NI, int32 &Output) {
	FSI += NI; Output = FSI.GetValue(); return FSI;
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntMinusEqualInt(FSafeInt &FSI, const int32 &NI, int32 &Output) {
	FSI -= NI; Output = FSI.GetValue(); return FSI;
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntNotInt(const int32 &NI, int32 &Output) {
	Output = ( ~ NI); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntModInt(const FSafeInt &FSI, const int32 &NI, int32 &Output) {
	Output = (FSI % NI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntAndInt(const FSafeInt &FSI, const int32 &NI, int32 &Output) {
	Output = (FSI & NI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntOrInt(const FSafeInt &FSI, const int32 &NI, int32 &Output) {
	Output = (FSI | NI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntXorInt(const FSafeInt &FSI, const int32 &NI, int32 &Output) {
	Output = (FSI ^ NI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntShiftRInt(const FSafeInt &FSI, const int32 &NI, int32 &Output) {
	Output = (FSI >> NI).GetValue(); return FSafeInt(Output);
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntShiftLInt(const FSafeInt &FSI, const int32 &NI, int32 &Output) {
	Output = (FSI << NI).GetValue(); return FSafeInt(Output);
}

bool USCLibrary::SCO_Pure_GetIntEqualFSI(const int32 &NI, const FSafeInt &FSI) {
	return (NI == FSI.GetValue());
}

bool USCLibrary::SCO_Pure_GetIntNotEqualFSI(const int32 &NI, const FSafeInt &FSI) {
	return (NI != FSI.GetValue());
}

bool USCLibrary::SCO_Pure_GetIntGreaterFSI(const int32 &NI, const FSafeInt &FSI) {
	return (NI > FSI.GetValue());
}

bool USCLibrary::SCO_Pure_GetIntSmallerFSI(const int32 &NI, const FSafeInt &FSI) {
	return (NI < FSI.GetValue());
}

bool USCLibrary::SCO_Pure_GetIntGreaterEqualFSI(const int32 &NI, const FSafeInt &FSI) {
	return (NI >= FSI.GetValue());
}

bool USCLibrary::SCO_Pure_GetIntSmallerEqualFSI(const int32 &NI, const FSafeInt &FSI) {
	return (NI <= FSI.GetValue());
}

int32 USCLibrary::SCO_Pure_SetIntEqualFSI(int32 &NI, const FSafeInt &FSI) {
	NI = FSI.GetValue(); return NI;
}

int32 USCLibrary::SCO_Pure_GetIntPlusFSI(const int32 &NI, const FSafeInt &FSI) {
	return (NI + FSI.GetValue());
}

int32 USCLibrary::SCO_Pure_GetIntMinusFSI(const int32 &NI, const FSafeInt &FSI) {
	return (NI - FSI.GetValue());
}

int32 USCLibrary::SCO_Pure_GetIntTimesFSI(const int32 &NI, const FSafeInt &FSI) {
	return (NI * FSI.GetValue());
}

int32 USCLibrary::SCO_Pure_GetIntDivideFSI(const int32 &NI, const FSafeInt &FSI) {
	return (NI / FSI.GetValue());
}

int32 USCLibrary::SCO_Pure_GetIntPlusEqualFSI(int32 &NI, const FSafeInt &FSI) {
	NI += FSI.GetValue(); return NI;
}

int32 USCLibrary::SCO_Pure_GetIntMinusEqualFSI(int32 &NI, const FSafeInt &FSI) {
	NI -= FSI.GetValue(); return NI;
}

int32 USCLibrary::SCO_Pure_GetIntModFSI(const int32 &NI, const FSafeInt &FSI) {
	return (NI % FSI.GetValue());
}

int32 USCLibrary::SCO_Pure_GetIntAndFSI(const int32 &NI, const FSafeInt &FSI) {
	return (NI & FSI.GetValue());
}

int32 USCLibrary::SCO_Pure_GetIntOrFSI(const int32 &NI, const FSafeInt &FSI) {
	return (NI | FSI.GetValue());
}

int32 USCLibrary::SCO_Pure_GetIntXorFSI(const int32 &NI, const FSafeInt &FSI) {
	return (NI ^ FSI.GetValue());
}

int32 USCLibrary::SCO_Pure_GetIntShiftRFSI(const int32 &NI, const FSafeInt &FSI) {
	return (NI >> FSI.GetValue());
}

int32 USCLibrary::SCO_Pure_GetIntShiftLFSI(const int32 &NI, const FSafeInt &FSI) {
	return (NI << FSI.GetValue());
}

// FSFloat

bool USCLibrary::SCO_Pure_GetSafeFloatEqualFSF(const FSafeFloat &FSF, const FSafeFloat &SSF) {
	return (FSF == SSF);
}

bool USCLibrary::SCO_Pure_GetSafeFloatNotEqualFSF(const FSafeFloat &FSF, const FSafeFloat &SSF) {
	return (FSF != SSF);
}

bool USCLibrary::SCO_Pure_GetSafeFloatGreaterFSF(const FSafeFloat &FSF, const FSafeFloat &SSF) {
	return (FSF > SSF);
}

bool USCLibrary::SCO_Pure_GetSafeFloatSmallerFSF(const FSafeFloat &FSF, const FSafeFloat &SSF) {
	return (FSF < SSF);
}

bool USCLibrary::SCO_Pure_GetSafeFloatGreaterEqualFSF(const FSafeFloat &FSF, const FSafeFloat &SSF) {
	return (FSF >= SSF);
}

bool USCLibrary::SCO_Pure_GetSafeFloatSmallerEqualFSF(const FSafeFloat &FSF, const FSafeFloat &SSF) {
	return (FSF <= SSF);
}

FSafeFloat USCLibrary::SCO_Pure_SetSafeFloatEqualFSF(FSafeFloat &FSF, const FSafeFloat &SSF, float &Output) {
	FSF = SSF; Output = FSF.GetValue(); return FSF;
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatPlusFSF(const FSafeFloat &FSF, const FSafeFloat &SSF, float &Output) {
	Output = (FSF + SSF).GetValue(); return FSafeFloat(Output);
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatMinusFSF(const FSafeFloat &FSF, const FSafeFloat &SSF, float &Output) {
	Output = (FSF - SSF).GetValue(); return FSafeFloat(Output);
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatTimesFSF(const FSafeFloat &FSF, const FSafeFloat &SSF, float &Output) {
	Output = (FSF * SSF).GetValue(); return FSafeFloat(Output);
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatDivideFSF(const FSafeFloat &FSF, const FSafeFloat &SSF, float &Output) {
	Output = (FSF / SSF).GetValue(); return FSafeFloat(Output);
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatIncreaseFSF(FSafeFloat &FSF, float &Output) {
	Output = (FSF++).GetValue(); return FSF;
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatDecreaseFSF(FSafeFloat &FSF, float &Output) {
	Output = (FSF--).GetValue(); return FSF;
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatPlusEqualFSF(FSafeFloat &FSF, const FSafeFloat &SSF, float &Output) {
	FSF += SSF; Output = FSF.GetValue(); return FSF;
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatMinusEqualFSF(FSafeFloat &FSF, const FSafeFloat &SSF, float &Output) {
	FSF -= SSF; Output = FSF.GetValue(); return FSF;
}

bool USCLibrary::SCO_Pure_GetSafeFloatEqualFloat(const FSafeFloat &FSF, const float &NF) {
	return (FSF == NF);
}

bool USCLibrary::SCO_Pure_GetSafeFloatNotEqualFloat(const FSafeFloat &FSF, const float &NF) {
	return (FSF != NF);
}

bool USCLibrary::SCO_Pure_GetSafeFloatGreaterFloat(const FSafeFloat &FSF, const float &NF) {
	return (FSF > NF);
}

bool USCLibrary::SCO_Pure_GetSafeFloatSmallerFloat(const FSafeFloat &FSF, const float &NF) {
	return (FSF < NF);
}

bool USCLibrary::SCO_Pure_GetSafeFloatGreaterEqualFloat(const FSafeFloat &FSF, const float &NF) {
	return (FSF >= NF);
}

bool USCLibrary::SCO_Pure_GetSafeFloatSmallerEqualFloat(const FSafeFloat &FSF, const float &NF) {
	return (FSF <= NF);
}

FSafeFloat USCLibrary::SCO_Pure_SetSafeFloatEqualFloat(FSafeFloat &FSF, const float &NF, float &Output) {
	FSF = NF; Output = FSF.GetValue(); return FSF;
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatPlusFloat(const FSafeFloat &FSF, const float &NF, float &Output) {
	Output = (FSF + NF).GetValue(); return FSafeFloat(Output);
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatMinusFloat(const FSafeFloat &FSF, const float &NF, float &Output) {
	Output = (FSF - NF).GetValue(); return FSafeFloat(Output);
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatTimesFloat(const FSafeFloat &FSF, const float &NF, float &Output) {
	Output = (FSF * NF).GetValue(); return FSafeFloat(Output);
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatDivideFloat(const FSafeFloat &FSF, const float &NF, float &Output) {
	Output = (FSF / NF).GetValue(); return FSafeFloat(Output);
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatPlusEqualFloat(FSafeFloat &FSF, const float &NF, float &Output) {
	FSF += NF; Output = FSF.GetValue(); return FSF;
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatMinusEqualFloat(FSafeFloat &FSF, const float &NF, float &Output) {
	FSF -= NF; Output = FSF.GetValue(); return FSF;
}

bool USCLibrary::SCO_Pure_GetFloatEqualFSF(const float &NF, const FSafeFloat &FSF) {
	return (NF == FSF.GetValue());
}

bool USCLibrary::SCO_Pure_GetFloatNotEqualFSF(const float &NF, const FSafeFloat &FSF) {
	return (NF != FSF.GetValue());
}

bool USCLibrary::SCO_Pure_GetFloatGreaterFSF(const float &NF, const FSafeFloat &FSF) {
	return (NF > FSF.GetValue());
}

bool USCLibrary::SCO_Pure_GetFloatSmallerFSF(const float &NF, const FSafeFloat &FSF) {
	return (NF < FSF.GetValue());
}

bool USCLibrary::SCO_Pure_GetFloatGreaterEqualFSF(const float &NF, const FSafeFloat &FSF) {
	return (NF >= FSF.GetValue());
}

bool USCLibrary::SCO_Pure_GetFloatSmallerEqualFSF(const float &NF, const FSafeFloat &FSF) {
	return (NF <= FSF.GetValue());
}

float USCLibrary::SCO_Pure_SetFloatEqualFSF(float &NF, const FSafeFloat &FSF) {
	NF = FSF.GetValue(); return NF;
}

float USCLibrary::SCO_Pure_GetFloatPlusFSF(const float &NF, const FSafeFloat &FSF) {
	return (NF + FSF.GetValue());
}

float USCLibrary::SCO_Pure_GetFloatMinusFSF(const float &NF, const FSafeFloat &FSF) {
	return (NF - FSF.GetValue());
}

float USCLibrary::SCO_Pure_GetFloatTimesFSF(const float &NF, const FSafeFloat &FSF) {
	return (NF * FSF.GetValue());
}

float USCLibrary::SCO_Pure_GetFloatDivideFSF(const float &NF, const FSafeFloat &FSF) {
	return (NF / FSF.GetValue());
}

float USCLibrary::SCO_Pure_GetFloatPlusEqualFSF(float &NF, const FSafeFloat &FSF) {
	NF += FSF.GetValue(); return NF;
}

float USCLibrary::SCO_Pure_GetFloatMinusEqualFSF(float &NF, const FSafeFloat &FSF) {
	NF -= FSF.GetValue(); return NF;
}

// FSName

bool USCLibrary::SCO_Pure_GetSafeNameEqualFSN(const FSafeName &FSN, const FSafeName &SSN) {
	return (FSN == SSN);
}

bool USCLibrary::SCO_Pure_GetSafeNameNotEqualFSN(const FSafeName &FSN, const FSafeName &SSN) {
	return (FSN != SSN);
}

bool USCLibrary::SCO_Pure_GetSafeNameGreaterFSN(const FSafeName &FSN, const FSafeName &SSN) {
	return (FSN > SSN);
}

bool USCLibrary::SCO_Pure_GetSafeNameSmallerFSN(const FSafeName &FSN, const FSafeName &SSN) {
	return (FSN < SSN);
}

FSafeName USCLibrary::SCO_Pure_SetSafeNameEqualFSN(FSafeName &FSN, const FSafeName &SSN, FName &Output) {
	FSN = SSN; Output = FSN.GetValue(); return FSN;
}

FSafeName USCLibrary::SCO_Pure_GetSafeNamePlusFSN(const FSafeName &FSN, const FSafeName &SSN, FName &Output) {
	Output = (FSN + SSN).GetValue(); return FSafeName(Output);
}

FSafeName USCLibrary::SCO_Pure_GetSafeNamePlusEqualFSN(FSafeName &FSN, const FSafeName &SSN, FName &Output) {
	FSN += SSN; Output = FSN.GetValue(); return FSN;
}

bool USCLibrary::SCO_Pure_GetSafeNameEqualName(const FSafeName &FSN, const FName &NN) {
	return (FSN == NN);
}

bool USCLibrary::SCO_Pure_GetSafeNameNotEqualName(const FSafeName &FSN, const FName &NN) {
	return (FSN != NN);
}

bool USCLibrary::SCO_Pure_GetSafeNameGreaterName(const FSafeName &FSN, const FName &NN) {
	return (FSN > NN);
}

bool USCLibrary::SCO_Pure_GetSafeNameSmallerName(const FSafeName &FSN, const FName &NN) {
	return (FSN < NN);
}

FSafeName USCLibrary::SCO_Pure_SetSafeNameEqualName(FSafeName &FSN, const FName &NN, FName &Output) {
	FSN = NN; Output = FSN.GetValue(); return FSN;
}

FSafeName USCLibrary::SCO_Pure_GetSafeNamePlusName(const FSafeName &FSN, const FName &NN, FName &Output) {
	Output = (FSN + NN).GetValue(); return FSafeName(Output);
}

FSafeName USCLibrary::SCO_Pure_GetSafeNamePlusEqualName(FSafeName &FSN, const FName &NN, FName &Output) {
	FSN += NN; Output = FSN.GetValue(); return FSN;
}

bool USCLibrary::SCO_Pure_GetNameEqualFSN(const FName &NN, const FSafeName &FSN) {
	return (NN == FSN.GetValue());
}

bool USCLibrary::SCO_Pure_GetNameNotEqualFSN(const FName &NN, const FSafeName &FSN) {
	return (NN != FSN.GetValue());
}

bool USCLibrary::SCO_Pure_GetNameGreaterFSN(const FName &NN, const FSafeName &FSN) {
	return (NN > FSN.GetValue());
}

bool USCLibrary::SCO_Pure_GetNameSmallerFSN(const FName &NN, const FSafeName &FSN) {
	return (NN < FSN.GetValue());
}

FName USCLibrary::SCO_Pure_SetNameEqualFSN(FName &NN, const FSafeName &FSN) {
	NN = FSN.GetValue(); return NN;
}

FName USCLibrary::SCO_Pure_GetNamePlusFSN(const FName &NN, const FSafeName &FSN) {
	return FName(*(NN.ToString() + FSN.GetValue().ToString()));
}

FName USCLibrary::SCO_Pure_GetNamePlusEqualFSN(FName &NN, const FSafeName &FSN) {
	 FName N = FName(*(NN.ToString() + FSN.GetValue().ToString()));
	 NN = N; return NN;
}

// FSText

bool USCLibrary::SCO_Pure_GetSafeTextEqualFST(const FSafeText &FST, const FSafeText &ST) {
	return (FST == ST);
}

bool USCLibrary::SCO_Pure_GetSafeTextNotEqualFST(const FSafeText &FST, const FSafeText &ST) {
	return (FST != ST);
}

bool USCLibrary::SCO_Pure_GetSafeTextGreaterFST(const FSafeText &FST, const FSafeText &ST) {
	return (FST > ST);
}

bool USCLibrary::SCO_Pure_GetSafeTextSmallerFST(const FSafeText &FST, const FSafeText &ST) {
	return (FST < ST);
}

FSafeText USCLibrary::SCO_Pure_SetSafeTextEqualFST(FSafeText &FST, const FSafeText &ST, FText &Output) {
	FST = ST; Output = FST.GetValue(); return FST;
}

FSafeText USCLibrary::SCO_Pure_GetSafeTextPlusFST(const FSafeText &FST, const FSafeText &ST, FText &Output) {
	Output = (FST + ST).GetValue(); return FSafeText(Output);
}

FSafeText USCLibrary::SCO_Pure_GetSafeTextPlusEqualFST(FSafeText &FST, const FSafeText &ST, FText &Output) {
	FST += ST; Output = FST.GetValue(); return FST;
}

bool USCLibrary::SCO_Pure_GetSafeTextEqualText(const FSafeText &FST, const FText &NT) {
	return (FST == NT);
}

bool USCLibrary::SCO_Pure_GetSafeTextNotEqualText(const FSafeText &FST, const FText &NT) {
	return (FST != NT);
}

bool USCLibrary::SCO_Pure_GetSafeTextGreaterText(const FSafeText &FST, const FText &NT) {
	return (FST > NT);
}

bool USCLibrary::SCO_Pure_GetSafeTextSmallerText(const FSafeText &FST, const FText &NT) {
	return (FST < NT);
}

FSafeText USCLibrary::SCO_Pure_SetSafeTextEqualText(FSafeText &FST, const FText &NT, FText &Output) {
	FST = NT; Output = FST.GetValue(); return FST;
}

FSafeText USCLibrary::SCO_Pure_GetSafeTextPlusText(const FSafeText &FST, const FText &NT, FText &Output) {
	Output = (FST + NT).GetValue(); return FSafeText(Output);
}

FSafeText USCLibrary::SCO_Pure_GetSafeTextPlusEqualText(FSafeText &FST, const FText &NT, FText &Output) {
	FST += NT; Output = FST.GetValue(); return FST;
}

bool USCLibrary::SCO_Pure_GetTextEqualFST(const FText &NT, const FSafeText &FST) {
	return (NT.ToString() == FST.GetValue().ToString());
}

bool USCLibrary::SCO_Pure_GetTextNotEqualFST(const FText &NT, const FSafeText &FST) {
	return (NT.ToString() != FST.GetValue().ToString());
}

bool USCLibrary::SCO_Pure_GetTextGreaterFST(const FText &NT, const FSafeText &FST) {
	return (NT.ToString().Len() > FST.GetValue().ToString().Len());
}

bool USCLibrary::SCO_Pure_GetTextSmallerFST(const FText &NT, const FSafeText &FST) {
	return (NT.ToString().Len() < FST.GetValue().ToString().Len());
}

FText USCLibrary::SCO_Pure_SetTextEqualFST(FText &NT, const FSafeText &FST) {
	NT = FST.GetValue(); return NT;
}

FText USCLibrary::SCO_Pure_GetTextPlusFST(const FText &NT, const FSafeText &FST) {
	return FText::FromString(NT.ToString() + FST.GetValue().ToString());
}

FText USCLibrary::SCO_Pure_GetTextPlusEqualFST(FText &NT, const FSafeText &FST) {
	FText N = FText::FromString(NT.ToString() + FST.GetValue().ToString());
	NT = N; return NT;
}

// FSString

bool USCLibrary::SCO_Pure_GetSafeStringEqualFSS(const FSafeString &FSS, const FSafeString &SSN) {
	return (FSS == SSN);
}

bool USCLibrary::SCO_Pure_GetSafeStringNotEqualFSS(const FSafeString &FSS, const FSafeString &SSN) {
	return (FSS != SSN);
}

bool USCLibrary::SCO_Pure_GetSafeStringGreaterFSS(const FSafeString &FSS, const FSafeString &SSN) {
	return (FSS > SSN);
}

bool USCLibrary::SCO_Pure_GetSafeStringSmallerFSS(const FSafeString &FSS, const FSafeString &SSN) {
	return (FSS < SSN);
}

FSafeString USCLibrary::SCO_Pure_SetSafeStringEqualFSS(FSafeString &FSS, const FSafeString &SSN, FString &Output) {
	FSS = SSN; Output = FSS.GetValue(); return FSS;
}

FSafeString USCLibrary::SCO_Pure_GetSafeStringPlusFSS(const FSafeString &FSS, const FSafeString &SSN, FString &Output) {
	Output = (FSS + SSN).GetValue(); return FSafeString(Output);
}

FSafeString USCLibrary::SCO_Pure_GetSafeStringPlusEqualFSS(FSafeString &FSS, const FSafeString &SSN, FString &Output) {
	FSS += SSN; Output = FSS.GetValue(); return FSS;
}

bool USCLibrary::SCO_Pure_GetSafeStringEqualString(const FSafeString &FSS, const FString &NS) {
	return (FSS == NS);
}

bool USCLibrary::SCO_Pure_GetSafeStringNotEqualString(const FSafeString &FSS, const FString &NS) {
	return (FSS != NS);
}

bool USCLibrary::SCO_Pure_GetSafeStringGreaterString(const FSafeString &FSS, const FString &NS) {
	return (FSS > NS);
}

bool USCLibrary::SCO_Pure_GetSafeStringSmallerString(const FSafeString &FSS, const FString &NS) {
	return (FSS < NS);
}

FSafeString USCLibrary::SCO_Pure_SetSafeStringEqualString(FSafeString &FSS, const FString &NS, FString &Output) {
	FSS = NS; Output = FSS.GetValue(); return FSS;
}

FSafeString USCLibrary::SCO_Pure_GetSafeStringPlusString(const FSafeString &FSS, const FString &NS, FString &Output) {
	Output = (FSS + NS).GetValue(); return FSafeString(Output);
}

FSafeString USCLibrary::SCO_Pure_GetSafeStringPlusEqualString(FSafeString &FSS, const FString &NS, FString &Output) {
	FSS += NS; Output = FSS.GetValue(); return FSS;
}

bool USCLibrary::SCO_Pure_GetStringEqualFSS(const FString &NS, const FSafeString &FSS) {
	return (NS == FSS.GetValue());
}

bool USCLibrary::SCO_Pure_GetStringNotEqualFSS(const FString &NS, const FSafeString &FSS) {
	return (NS != FSS.GetValue());
}

bool USCLibrary::SCO_Pure_GetStringGreaterFSS(const FString &NS, const FSafeString &FSS) {
	return (NS.Len() > FSS.GetValue().Len());
}

bool USCLibrary::SCO_Pure_GetStringSmallerFSS(const FString &NS, const FSafeString &FSS) {
	return (NS.Len() < FSS.GetValue().Len());
}

FString USCLibrary::SCO_Pure_SetStringEqualFSS(FString &NS, const FSafeString &FSS) {
	NS = FSS.GetValue(); return NS;
}

FString USCLibrary::SCO_Pure_GetStringPlusFSS(const FString &NS, const FSafeString &FSS) {
	return (NS + FSS.GetValue());
}

FString USCLibrary::SCO_Pure_GetStringPlusEqualFSS(FString &NS, const FSafeString &FSS) {
	NS += FSS.GetValue(); return NS;
}

// FSVector2D

bool USCLibrary::SCO_Pure_GetSafeVector2DEqualFSV(const FSafeVector2D &FSV, const FSafeVector2D &SSV) {
	return (FSV == SSV);
}

bool USCLibrary::SCO_Pure_GetSafeVector2DNotEqualFSV(const FSafeVector2D &FSV, const FSafeVector2D &SSV) {
	return (FSV != SSV);
}

bool USCLibrary::SCO_Pure_GetSafeVector2DGreaterFSV(const FSafeVector2D &FSV, const FSafeVector2D &SSV) {
	return (FSV > SSV);
}

bool USCLibrary::SCO_Pure_GetSafeVector2DSmallerFSV(const FSafeVector2D &FSV, const FSafeVector2D &SSV) {
	return (FSV < SSV);
}

bool USCLibrary::SCO_Pure_GetSafeVector2DGreaterEqualFSV(const FSafeVector2D &FSV, const FSafeVector2D &SSV) {
	return (FSV >= SSV);
}

bool USCLibrary::SCO_Pure_GetSafeVector2DSmallerEqualFSV(const FSafeVector2D &FSV, const FSafeVector2D &SSV) {
	return (FSV <= SSV);
}

FSafeVector2D USCLibrary::SCO_Pure_SetSafeVector2DEqualFSV(FSafeVector2D &FSV, const FSafeVector2D &SSV, FVector2D &Output) {
	FSV = SSV; Output = FSV.GetValue(); return FSV;
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DPlusFSV(const FSafeVector2D &FSV, const FSafeVector2D &SSV, FVector2D &Output) {
	Output = (FSV + SSV).GetValue(); return FSafeVector2D(Output);
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DMinusFSV(const FSafeVector2D &FSV, const FSafeVector2D &SSV, FVector2D &Output) {
	Output = (FSV - SSV).GetValue(); return FSafeVector2D(Output);
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DTimesFSV(const FSafeVector2D &FSV, const FSafeVector2D &SSV, FVector2D &Output) {
	Output = (FSV * SSV).GetValue(); return FSafeVector2D(Output);
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DDivideFSV(const FSafeVector2D &FSV, const FSafeVector2D &SSV, FVector2D &Output) {
	Output = (FSV / SSV).GetValue(); return FSafeVector2D(Output);
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DIncreaseFSV(FSafeVector2D &FSV, FVector2D &Output) {
	Output = (FSV++).GetValue(); return FSV;
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DDecreaseFSV(FSafeVector2D &FSV, FVector2D &Output) {
	Output = (FSV--).GetValue(); return FSV;
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DPlusEqualFSV(FSafeVector2D &FSV, const FSafeVector2D &SSV, FVector2D &Output) {
	FSV += SSV; Output = FSV.GetValue(); return FSV;
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DMinusEqualFSV(FSafeVector2D &FSV, const FSafeVector2D &SSV, FVector2D &Output) {
	FSV -= SSV; Output = FSV.GetValue(); return FSV;
}

bool USCLibrary::SCO_Pure_GetSafeVector2DEqualVector2D(const FSafeVector2D &FSV, const FVector2D &NV) {
	return (FSV == NV);
}

bool USCLibrary::SCO_Pure_GetSafeVector2DNotEqualVector2D(const FSafeVector2D &FSV, const FVector2D &NV) {
	return (FSV != NV);
}

bool USCLibrary::SCO_Pure_GetSafeVector2DGreaterVector2D(const FSafeVector2D &FSV, const FVector2D &NV) {
	return (FSV > NV);
}

bool USCLibrary::SCO_Pure_GetSafeVector2DSmallerVector2D(const FSafeVector2D &FSV, const FVector2D &NV) {
	return (FSV < NV);
}

bool USCLibrary::SCO_Pure_GetSafeVector2DGreaterEqualVector2D(const FSafeVector2D &FSV, const FVector2D &NV) {
	return (FSV >= NV);
}

bool USCLibrary::SCO_Pure_GetSafeVector2DSmallerEqualVector2D(const FSafeVector2D &FSV, const FVector2D &NV) {
	return (FSV <= NV);
}

FSafeVector2D USCLibrary::SCO_Pure_SetSafeVector2DEqualVector2D(FSafeVector2D &FSV, const FVector2D &NV, FVector2D &Output) {
	FSV = NV; Output = FSV.GetValue(); return FSV;
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DPlusVector2D(const FSafeVector2D &FSV, const FVector2D &NV, FVector2D &Output) {
	Output = (FSV.GetValue() + NV); return FSafeVector2D(Output);
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DMinusVector2D(const FSafeVector2D &FSV, const FVector2D &NV, FVector2D &Output) {
	Output = (FSV.GetValue() - NV); return FSafeVector2D(Output);
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DTimesVector2D(const FSafeVector2D &FSV, const FVector2D &NV, FVector2D &Output) {
	Output = (FSV.GetValue() * NV); return FSafeVector2D(Output);
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DDivideVector2D(const FSafeVector2D &FSV, const FVector2D &NV, FVector2D &Output) {
	Output = (FSV.GetValue() / NV); return FSafeVector2D(Output);
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DPlusEqualVector2D(FSafeVector2D &FSV, const FVector2D &NV, FVector2D &Output) {
	FSV += NV; Output = FSV.GetValue(); return FSV;
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DMinusEqualVector2D(FSafeVector2D &FSV, const FVector2D &NV, FVector2D &Output) {
	FSV -= NV; Output = FSV.GetValue(); return FSV;
}

bool USCLibrary::SCO_Pure_GetVector2DEqualFSV(const FVector2D &NV, const FSafeVector2D &FSV) {
	return (NV == FSV.GetValue());
}

bool USCLibrary::SCO_Pure_GetVector2DNotEqualFSV(const FVector2D &NV, const FSafeVector2D &FSV) {
	return (NV != FSV.GetValue());
}

bool USCLibrary::SCO_Pure_GetVector2DGreaterFSV(const FVector2D &NV, const FSafeVector2D &FSV) {
	return (NV > FSV.GetValue());
}

bool USCLibrary::SCO_Pure_GetVector2DSmallerFSV(const FVector2D &NV, const FSafeVector2D &FSV) {
	return (NV < FSV.GetValue());
}

bool USCLibrary::SCO_Pure_GetVector2DGreaterEqualFSV(const FVector2D &NV, const FSafeVector2D &FSV) {
	return (NV >= FSV.GetValue());
}

bool USCLibrary::SCO_Pure_GetVector2DSmallerEqualFSV(const FVector2D &NV, const FSafeVector2D &FSV) {
	return (NV <= FSV.GetValue());
}

FVector2D USCLibrary::SCO_Pure_SetVector2DEqualFSV(FVector2D &NV, const FSafeVector2D &FSV) {
	NV = FSV.GetValue(); return NV;
}

FVector2D USCLibrary::SCO_Pure_GetVector2DPlusFSV(const FVector2D &NV, const FSafeVector2D &FSV) {
	return (NV + FSV.GetValue());
}

FVector2D USCLibrary::SCO_Pure_GetVector2DMinusFSV(const FVector2D &NV, const FSafeVector2D &FSV) {
	return (NV - FSV.GetValue());
}

FVector2D USCLibrary::SCO_Pure_GetVector2DTimesFSV(const FVector2D &NV, const FSafeVector2D &FSV) {
	return (NV * FSV.GetValue());
}

FVector2D USCLibrary::SCO_Pure_GetVector2DDivideFSV(const FVector2D &NV, const FSafeVector2D &FSV) {
	return (NV / FSV.GetValue());
}

FVector2D USCLibrary::SCO_Pure_GetVector2DPlusEqualFSV(FVector2D &NV, const FSafeVector2D &FSV) {
	NV += FSV.GetValue(); return NV;
}

FVector2D USCLibrary::SCO_Pure_GetVector2DMinusEqualFSV(FVector2D &NV, const FSafeVector2D &FSV) {
	NV -= FSV.GetValue(); return NV;
}

// FSVector3D

bool USCLibrary::SCO_Pure_GetSafeVector3DEqualFSV(const FSafeVector3D &FSV, const FSafeVector3D &SSV) {
	return (FSV == SSV);
}

bool USCLibrary::SCO_Pure_GetSafeVector3DNotEqualFSV(const FSafeVector3D &FSV, const FSafeVector3D &SSV) {
	return (FSV != SSV);
}

bool USCLibrary::SCO_Pure_GetSafeVector3DGreaterFSV(const FSafeVector3D &FSV, const FSafeVector3D &SSV) {
	return (FSV > SSV);
}

bool USCLibrary::SCO_Pure_GetSafeVector3DSmallerFSV(const FSafeVector3D &FSV, const FSafeVector3D &SSV) {
	return (FSV < SSV);
}

bool USCLibrary::SCO_Pure_GetSafeVector3DGreaterEqualFSV(const FSafeVector3D &FSV, const FSafeVector3D &SSV) {
	return (FSV >= SSV);
}

bool USCLibrary::SCO_Pure_GetSafeVector3DSmallerEqualFSV(const FSafeVector3D &FSV, const FSafeVector3D &SSV) {
	return (FSV <= SSV);
}

FSafeVector3D USCLibrary::SCO_Pure_SetSafeVector3DEqualFSV(FSafeVector3D &FSV, const FSafeVector3D &SSV, FVector &Output) {
	FSV = SSV; Output = FSV.GetValue(); return FSV;
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DPlusFSV(const FSafeVector3D &FSV, const FSafeVector3D &SSV, FVector &Output) {
	Output = (FSV + SSV).GetValue(); return FSafeVector3D(Output);
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DMinusFSV(const FSafeVector3D &FSV, const FSafeVector3D &SSV, FVector &Output) {
	Output = (FSV - SSV).GetValue(); return FSafeVector3D(Output);
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DTimesFSV(const FSafeVector3D &FSV, const FSafeVector3D &SSV, FVector &Output) {
	Output = (FSV * SSV).GetValue(); return FSafeVector3D(Output);
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DDivideFSV(const FSafeVector3D &FSV, const FSafeVector3D &SSV, FVector &Output) {
	Output = (FSV / SSV).GetValue(); return FSafeVector3D(Output);
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DIncreaseFSV(FSafeVector3D &FSV, FVector &Output) {
	Output = (FSV++).GetValue(); return FSV;
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DDecreaseFSV(FSafeVector3D &FSV, FVector &Output) {
	Output = (FSV--).GetValue(); return FSV;
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DPlusEqualFSV(FSafeVector3D &FSV, const FSafeVector3D &SSV, FVector &Output) {
	FSV += SSV; Output = FSV.GetValue(); return FSV;
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DMinusEqualFSV(FSafeVector3D &FSV, const FSafeVector3D &SSV, FVector &Output) {
	FSV -= SSV; Output = FSV.GetValue(); return FSV;
}

bool USCLibrary::SCO_Pure_GetSafeVector3DEqualVector3D(const FSafeVector3D &FSV, const FVector &NV) {
	return (FSV == NV);
}

bool USCLibrary::SCO_Pure_GetSafeVector3DNotEqualVector3D(const FSafeVector3D &FSV, const FVector &NV) {
	return (FSV != NV);
}

bool USCLibrary::SCO_Pure_GetSafeVector3DGreaterVector3D(const FSafeVector3D &FSV, const FVector &NV) {
	return (FSV > NV);
}

bool USCLibrary::SCO_Pure_GetSafeVector3DSmallerVector3D(const FSafeVector3D &FSV, const FVector &NV) {
	return (FSV < NV);
}

bool USCLibrary::SCO_Pure_GetSafeVector3DGreaterEqualVector3D(const FSafeVector3D &FSV, const FVector &NV) {
	return (FSV >= NV);
}

bool USCLibrary::SCO_Pure_GetSafeVector3DSmallerEqualVector3D(const FSafeVector3D &FSV, const FVector &NV) {
	return (FSV <= NV);
}

FSafeVector3D USCLibrary::SCO_Pure_SetSafeVector3DEqualVector3D(FSafeVector3D &FSV, const FVector &NV, FVector &Output) {
	FSV = NV; Output = FSV.GetValue(); return FSV;
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DPlusVector3D(const FSafeVector3D &FSV, const FVector &NV, FVector &Output) {
	Output = (FSV + NV).GetValue(); return FSafeVector3D(Output);
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DMinusVector3D(const FSafeVector3D &FSV, const FVector &NV, FVector &Output) {
	Output = (FSV - NV).GetValue(); return FSafeVector3D(Output);
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DTimesVector3D(const FSafeVector3D &FSV, const FVector &NV, FVector &Output) {
	Output = (FSV * NV).GetValue(); return FSafeVector3D(Output);
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DDivideVector3D(const FSafeVector3D &FSV, const FVector &NV, FVector &Output) {
	Output = (FSV / NV).GetValue(); return FSafeVector3D(Output);
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DPlusEqualVector3D(FSafeVector3D &FSV, const FVector &NV, FVector &Output) {
	FSV += NV; Output = FSV.GetValue(); return FSV;
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DMinusEqualVector3D(FSafeVector3D &FSV, const FVector &NV, FVector &Output) {
	FSV -= NV; Output = FSV.GetValue(); return FSV;
}

bool USCLibrary::SCO_Pure_GetVector3DEqualFSV(const FVector &NV, const FSafeVector3D &FSV) {
	return (NV == FSV.GetValue());
}

bool USCLibrary::SCO_Pure_GetVector3DNotEqualFSV(const FVector &NV, const FSafeVector3D &FSV) {
	return (NV != FSV.GetValue());
}

bool USCLibrary::SCO_Pure_GetVector3DGreaterFSV(const FVector &NV, const FSafeVector3D &FSV) {
	return (NV.Size() > FSV.GetValue().Size());
}

bool USCLibrary::SCO_Pure_GetVector3DSmallerFSV(const FVector &NV, const FSafeVector3D &FSV) {
	return (NV.Size() < FSV.GetValue().Size());
}

bool USCLibrary::SCO_Pure_GetVector3DGreaterEqualFSV(const FVector &NV, const FSafeVector3D &FSV) {
	return (NV.Size() >= FSV.GetValue().Size());
}

bool USCLibrary::SCO_Pure_GetVector3DSmallerEqualFSV(const FVector &NV, const FSafeVector3D &FSV) {
	return (NV.Size() <= FSV.GetValue().Size());
}

FVector USCLibrary::SCO_Pure_SetVector3DEqualFSV(FVector &NV, const FSafeVector3D &FSV) {
	NV = FSV.GetValue(); return NV;
}

FVector USCLibrary::SCO_Pure_GetVector3DPlusFSV(const FVector &NV, const FSafeVector3D &FSV) {
	return (NV + FSV.GetValue());
}

FVector USCLibrary::SCO_Pure_GetVector3DMinusFSV(const FVector &NV, const FSafeVector3D &FSV) {
	return (NV - FSV.GetValue());
}

FVector USCLibrary::SCO_Pure_GetVector3DTimesFSV(const FVector &NV, const FSafeVector3D &FSV) {
	return (NV * FSV.GetValue());
}

FVector USCLibrary::SCO_Pure_GetVector3DDivideFSV(const FVector &NV, const FSafeVector3D &FSV) {
	return (NV / FSV.GetValue());
}

FVector USCLibrary::SCO_Pure_GetVector3DPlusEqualFSV(FVector &NV, const FSafeVector3D &FSV) {
	NV += FSV.GetValue(); return NV;
}

FVector USCLibrary::SCO_Pure_GetVector3DMinusEqualFSV(FVector &NV, const FSafeVector3D &FSV) {
	NV -= FSV.GetValue(); return NV;
}

// FSColor

bool USCLibrary::SCO_Pure_GetSafeColorEqualFSC(const FSafeColor &FSC, const FSafeColor &SSC) {
	return (FSC == SSC);
}

bool USCLibrary::SCO_Pure_GetSafeColorNotEqualFSC(const FSafeColor &FSC, const FSafeColor &SSC) {
	return (FSC != SSC);
}

FSafeColor USCLibrary::SCO_Pure_SetSafeColorEqualFSC(FSafeColor &FSC, const FSafeColor &SSC, FLinearColor &Output) {
	FSC = SSC; Output = FSC.GetValue(); return FSC;
}

bool USCLibrary::SCO_Pure_GetSafeColorEqualColor(const FSafeColor &FSC, const FLinearColor &NC) {
	return (FSC == NC);
}

bool USCLibrary::SCO_Pure_GetSafeColorNotEqualColor(const FSafeColor &FSC, const FLinearColor &NC) {
	return (FSC != NC);
}

FSafeColor USCLibrary::SCO_Pure_SetSafeColorEqualColor(FSafeColor &FSC, const FLinearColor &NC, FLinearColor &Output) {
	FSC = NC; Output = FSC.GetValue(); return FSC;
}

bool USCLibrary::SCO_Pure_GetColorEqualFSC(const FLinearColor &NC, const FSafeColor &FSC) {
	return (NC == FSC.GetValue());
}

bool USCLibrary::SCO_Pure_GetColorNotEqualFSC(const FLinearColor &NC, const FSafeColor &FSC) {
	return (NC != FSC.GetValue());
}

FLinearColor USCLibrary::SCO_Pure_SetColorEqualFSC(FLinearColor &NC, const FSafeColor &FSC) {
	NC = FSC.GetValue(); return NC;
}

// FSRotator

bool USCLibrary::SCO_Pure_GetSafeRotatorEqualFSR(const FSafeRotator &FSR, const FSafeRotator &SSR) {
	return (FSR == SSR);
}

bool USCLibrary::SCO_Pure_GetSafeRotatorNotEqualFSR(const FSafeRotator &FSR, const FSafeRotator &SSR) {
	return (FSR != SSR);
}

bool USCLibrary::SCO_Pure_GetSafeRotatorGreaterFSR(const FSafeRotator &FSR, const FSafeRotator &SSR) {
	return (FSR > SSR);
}

bool USCLibrary::SCO_Pure_GetSafeRotatorSmallerFSR(const FSafeRotator &FSR, const FSafeRotator &SSR) {
	return (FSR < SSR);
}

bool USCLibrary::SCO_Pure_GetSafeRotatorGreaterEqualFSR(const FSafeRotator &FSR, const FSafeRotator &SSR) {
	return (FSR >= SSR);
}

bool USCLibrary::SCO_Pure_GetSafeRotatorSmallerEqualFSR(const FSafeRotator &FSR, const FSafeRotator &SSR) {
	return (FSR <= SSR);
}

FSafeRotator USCLibrary::SCO_Pure_SetSafeRotatorEqualFSR(FSafeRotator &FSR, const FSafeRotator &SSR, FRotator &Output) {
	FSR = SSR; Output = FSR.GetValue(); return FSR;
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorPlusFSR(const FSafeRotator &FSR, const FSafeRotator &SSR, FRotator &Output) {
	Output = (FSR + SSR).GetValue(); return FSafeRotator(Output);
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorMinusFSR(const FSafeRotator &FSR, const FSafeRotator &SSR, FRotator &Output) {
	Output = (FSR - SSR).GetValue(); return FSafeRotator(Output);
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorIncreaseFSR(FSafeRotator &FSR, FRotator &Output) {
	Output = (FSR++).GetValue(); return FSR;
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorDecreaseFSR(FSafeRotator &FSR, FRotator &Output) {
	Output = (FSR--).GetValue(); return FSR;
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorPlusEqualFSR(FSafeRotator &FSR, const FSafeRotator &SSR, FRotator &Output) {
	FSR += SSR; Output = FSR.GetValue(); return FSR;
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorMinusEqualFSR(FSafeRotator &FSR, const FSafeRotator &SSR, FRotator &Output) {
	FSR -= SSR; Output = FSR.GetValue(); return FSR;
}

bool USCLibrary::SCO_Pure_GetSafeRotatorEqualRotator(const FSafeRotator &FSR, const FRotator &NR) {
	return (FSR == NR);
}

bool USCLibrary::SCO_Pure_GetSafeRotatorNotEqualRotator(const FSafeRotator &FSR, const FRotator &NR) {
	return (FSR != NR);
}

bool USCLibrary::SCO_Pure_GetSafeRotatorGreaterRotator(const FSafeRotator &FSR, const FRotator &NR) {
	return (FSR > NR);
}

bool USCLibrary::SCO_Pure_GetSafeRotatorSmallerRotator(const FSafeRotator &FSR, const FRotator &NR) {
	return (FSR < NR);
}

bool USCLibrary::SCO_Pure_GetSafeRotatorGreaterEqualRotator(const FSafeRotator &FSR, const FRotator &NR) {
	return (FSR >= NR);
}

bool USCLibrary::SCO_Pure_GetSafeRotatorSmallerEqualRotator(const FSafeRotator &FSR, const FRotator &NR) {
	return (FSR <= NR);
}

FSafeRotator USCLibrary::SCO_Pure_SetSafeRotatorEqualRotator(FSafeRotator &FSR, const FRotator &NR, FRotator &Output) {
	FSR = NR; Output = FSR.GetValue(); return FSR;
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorPlusRotator(const FSafeRotator &FSR, const FRotator &NR, FRotator &Output) {
	Output = (FSR + NR).GetValue(); return FSafeRotator(Output);
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorMinusRotator(const FSafeRotator &FSR, const FRotator &NR, FRotator &Output) {
	Output = (FSR - NR).GetValue(); return FSafeRotator(Output);
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorPlusEqualRotator(FSafeRotator &FSR, const FRotator &NR, FRotator &Output) {
	FSR += NR; Output = FSR.GetValue(); return FSR;
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorMinusEqualRotator(FSafeRotator &FSR, const FRotator &NR, FRotator &Output) {
	FSR -= NR; Output = FSR.GetValue(); return FSR;
}

bool USCLibrary::SCO_Pure_GetRotatorEqualFSR(const FRotator &NR, const FSafeRotator &FSR) {
	return (NR == FSR.GetValue());
}

bool USCLibrary::SCO_Pure_GetRotatorNotEqualFSR(const FRotator &NR, const FSafeRotator &FSR) {
	return (NR != FSR.GetValue());
}

bool USCLibrary::SCO_Pure_GetRotatorGreaterFSR(const FRotator &NR, const FSafeRotator &FSR) {
	return (NR.Vector().Size() > FSR.GetValue().Vector().Size());
}

bool USCLibrary::SCO_Pure_GetRotatorSmallerFSR(const FRotator &NR, const FSafeRotator &FSR) {
	return (NR.Vector().Size() < FSR.GetValue().Vector().Size());
}

bool USCLibrary::SCO_Pure_GetRotatorGreaterEqualFSR(const FRotator &NR, const FSafeRotator &FSR) {
	return (NR.Vector().Size() >= FSR.GetValue().Vector().Size());
}

bool USCLibrary::SCO_Pure_GetRotatorSmallerEqualFSR(const FRotator &NR, const FSafeRotator &FSR) {
	return (NR.Vector().Size() <= FSR.GetValue().Vector().Size());
}

FRotator USCLibrary::SCO_Pure_SetRotatorEqualFSR(FRotator &NR, const FSafeRotator &FSR) {
	NR = FSR.GetValue(); return NR;
}

FRotator USCLibrary::SCO_Pure_GetRotatorPlusFSR(const FRotator &NR, const FSafeRotator &FSR) {
	return (NR + FSR.GetValue());
}

FRotator USCLibrary::SCO_Pure_GetRotatorMinusFSR(const FRotator &NR, const FSafeRotator &FSR) {
	return (NR - FSR.GetValue());
}

FRotator USCLibrary::SCO_Pure_GetRotatorPlusEqualFSR(FRotator &NR, const FSafeRotator &FSR) {
	NR += FSR.GetValue(); return NR;
}

FRotator USCLibrary::SCO_Pure_GetRotatorMinusEqualFSR(FRotator &NR, const FSafeRotator &FSR) {
	NR -= FSR.GetValue(); return NR;
}

// FSTransform

bool USCLibrary::SCO_Pure_GetSafeTransformEqualFST(const FSafeTransform &FST, const FSafeTransform &SST) {
	return (FST == SST);
}

bool USCLibrary::SCO_Pure_GetSafeTransformNotEqualFST(const FSafeTransform &FST, const FSafeTransform &SST) {
	return (FST != SST);
}

FSafeTransform USCLibrary::SCO_Pure_SetSafeTransformEqualFST(FSafeTransform &FST, const FSafeTransform &SST, FTransform &Output) {
	FST = SST; Output = FST.GetValue(); return FST;
}

bool USCLibrary::SCO_Pure_GetSafeTransformEqualTransform(const FSafeTransform &FST, const FTransform &NT) {
	return (FST == NT);
}

bool USCLibrary::SCO_Pure_GetSafeTransformNotEqualTransform(const FSafeTransform &FST, const FTransform &NT) {
	return (FST != NT);
}

FSafeTransform USCLibrary::SCO_Pure_SetSafeTransformEqualTransform(FSafeTransform &FST, const FTransform &NT, FTransform &Output) {
	FST = NT; Output = FST.GetValue(); return FST;
}

bool USCLibrary::SCO_Pure_GetTransformEqualFST(const FTransform &NT, const FSafeTransform &FST) {
	return (FST == NT);
}

bool USCLibrary::SCO_Pure_GetTransformNotEqualFST(const FTransform &NT, const FSafeTransform &FST) {
	return (FST != NT);
}

FTransform USCLibrary::SCO_Pure_SetTransformEqualFST(FTransform &NT, const FSafeTransform &FST) {
	NT = FST.GetValue(); return NT;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////