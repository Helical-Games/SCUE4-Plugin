//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//		Copyright 2016 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#if PLATFORM_WINDOWS
 #include "Windows/AllowWindowsPlatformTypes.h"
 #include <Windows.h>
 #include <Winuser.h>
 #include "Windows/HideWindowsPlatformTypes.h"
#endif

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/WeakObjectPtr.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"

#include "Runtime/Core/Public/Misc/App.h"
#include "Runtime/Engine/Public/TimerManager.h"
#include "Runtime/Core/Public/Windows/WindowsPlatformProcess.h"
#include "Runtime/Core/Public/GenericPlatform/GenericPlatformProcess.h"
#include "Runtime/Core/Public/Misc/Paths.h"

#include "SCUE4.generated.h"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Default SCUE4 Settings

UCLASS(ClassGroup = Synaptech, Category = "Synaptech", config = Game)
class SCUE4_API USCUE4Settings : public UObject {
	GENERATED_UCLASS_BODY()
public:
	/** Path to the Editor's Key Generator standalone executable. */
	UPROPERTY(Category = "General Settings", config, EditAnywhere, BlueprintReadOnly)
	FString KeyGeneratorPath;
	//
	/** List of illegal process words that internal scanner shall look for. */
	UPROPERTY(Category = "General Settings", config, EditAnywhere, BlueprintReadOnly)
	TArray<FString>IllegalKeywords;
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Encryption:: Simple Caesar Cipher

static const FString ASCII_DIC = TEXT("0123456789aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ@~!#$%^&*()_-=+/|[]{}`;:,<>?.\\");
static const FString ASCII_KEY = TEXT(":.,@#}{[=^otTxmY+_!)*rACbfklpKVFWz]%Ju8ZgIi/HXGqj$>2MhPwDd1BS7-(3sEn06c5yRe?9U`L&|OvaNQ;4~<\\");

static FORCEINLINE const FString FEncode(const FString &Input) {
	FString Encode = Input;
	//
	for (int I = 0; I<Encode.Len(); I++) {
		int ID = -1; for (auto CH : ASCII_DIC) {
			ID++; if (Encode[I]==CH) {Encode[I]=ASCII_KEY[ID]; ID=-1; break;}
		}///
	}///
	//
	return Encode;
}

static FORCEINLINE const FString FDecode(const FString &Input) {
	FString Decode = Input;
	//
	for (int I = 0; I<Decode.Len(); I++) {
		int ID = -1; for (auto CH : ASCII_KEY) {
			ID++; if (Decode[I]==CH) {Decode[I]=ASCII_DIC[ID]; ID=-1; break;}
		}///
	}///
	//
	return Decode;
}

static FORCEINLINE const FString FEncode(const FString &Key, const FString &Input) {
	FString Encode = Input;
	//
	for (int I = 0; I<Encode.Len(); I++) {
		int ID = -1; for (auto CH : ASCII_DIC) {
			ID++; if (Encode[I]==CH) {Encode[I]=Key[ID]; ID=-1; break;}
		}///
	}///
	//
	return Encode;
}

static FORCEINLINE const FString FDecode(const FString &Key, const FString &Input) {
	FString Decode = Input;
	//
	for (int I = 0; I<Decode.Len(); I++) {
		int ID = -1; for (auto CH : Key) {
			ID++; if (Decode[I]==CH) {Decode[I]=ASCII_DIC[ID]; ID=-1; break;}
		}///
	}///
	//
	return Decode;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Enumerator:: Internal Process Scanner

#if PLATFORM_WINDOWS
  void FSCUE4_Enumerate();
#endif

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Structs:: Custom 'Safe Types' for run-time data encryption

/** Safe Boolean Property;
 Use this data format to store sensible Bool values you need protected against memory hackers. */
USTRUCT(BlueprintType)
struct SCUE4_API FSafeBool {
	GENERATED_USTRUCT_BODY()
private:
	/** Internal Key. Can be replaced each operation if wanted. */
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString Internal;
	//
	/** Default Memory Address. */
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString Base;
	//
	/** Alternative Memory Address. */
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString Shift;
	//
	/** Flag will take the value from Address, clear it and shift them,
	then copy value to previous Address and set it as default container. */
	UPROPERTY(SaveGame)
	uint8 Flag;
public:
	////////////////////////////////////////////////////////////
	/// Accessors
	//
	const FString GetRaw() const {
		if (!Shift.IsEmpty()) {return Shift;} else {return Base;}
	}///
	//
	void SetRaw(const FString &Value) {
		Shift = Value;
		Base = Value;
	}///
	//
	void SetKey(const FString &Key) {
		Internal = Key;
	}///
	//
	const bool GetValue() const {
		if (!Internal.IsEmpty()) {return GetValue(Internal);} else {
			switch (Flag) {
				case 0:
					return FCString::ToBool(*FDecode(Base));
				break;
				case 1:
					return FCString::ToBool(*FDecode(Shift));
				break;
			default: return false;}
		}///
	}///
	//
	const bool GetValue(const FString &Key) const {
		switch (Flag) {
			case 0:
				return FCString::ToBool(*FDecode(Key,Base));
			break;
			case 1:
				return FCString::ToBool(*FDecode(Key,Shift));
			break;
		default: return false;}
	}///
	//
	void SetValue(const bool &Input) {
		if (!Internal.IsEmpty()) {SetValue(Internal,Input);} else {
			switch (Flag) {
				case 0:
				{
					Shift = FEncode((Input?TEXT("true"):TEXT("false")));
					Flag = 1; Base.Empty();
				} break;
				//
				case 1:
				{
					Base = FEncode((Input?TEXT("true"):TEXT("false")));
					Flag = 0; Shift.Empty();
				} break;
			} Internal=ASCII_KEY;
		}///
	}///
	//
	void SetValue(const FString &Key, const bool &Input) {
		switch (Flag) {
			case 0:
			{
				Shift = FEncode(Key,(Input?TEXT("true"):TEXT("false")));
				Flag = 1; Base.Empty();
			} break;
			//
			case 1:
			{
				Base = FEncode(Key,(Input?TEXT("true"):TEXT("false")));
				Flag = 0; Shift.Empty();
			} break;
		} Internal=FString(Key);
	}///
	//
	////////////////////////////////////////////////////////////
	/// Constructors
	//
	FSafeBool() {
		Internal = FString();
		Base = TEXT("false");
		Shift = TEXT("false");
		Flag = 0;
	}///
	//
	FSafeBool(const bool &Input) {
		Internal = FString();
		Base = FEncode((Input?TEXT("true"):TEXT("false")));
		Shift = FEncode((Input?TEXT("true"):TEXT("false")));
		Flag = 0;
	}///
	//
	FSafeBool(const FString &Key, const bool &Input) {
		Internal = Key;
		Base = FEncode(Key,(Input?TEXT("true"):TEXT("false")));
		Shift = FEncode(Key,(Input?TEXT("true"):TEXT("false")));
		Flag = 0;
	}///
	//
	////////////////////////////////////////////////////////////
	/// Operators
	//
	FORCEINLINE FSafeBool &operator = (const FSafeBool &B) {
		Internal = B.Internal;
		Shift = B.Shift;
		Base = B.Base;
		Flag = B.Flag;
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeBool &operator = (const bool &B) {
		SetValue(B); return *this;
	}///
	//
	FORCEINLINE bool operator == (const FSafeBool &B) const {
		return  (GetValue() == B.GetValue());
	}///
	//
	FORCEINLINE bool operator != (const FSafeBool &B) const {
		return (GetValue() != B.GetValue());
	}///
	//
	FORCEINLINE bool operator && (const FSafeBool &B) const {
		return (GetValue() && B.GetValue());
	}///
	//
	FORCEINLINE bool operator || (const FSafeBool &B) const {
		return (GetValue() || B.GetValue());
	}///
	//
	FORCEINLINE bool operator == (const bool &B) const {
		return (GetValue() == B);
	}///
	//
	FORCEINLINE bool operator != (const bool &B) const {
		return (GetValue() != B);
	}///
	//
	FORCEINLINE bool operator && (const bool &B) const {
		return (GetValue() && B);
	}///
	//
	FORCEINLINE bool operator || (const bool &B) const {
		return (GetValue() || B);
	}///
	//
	FORCEINLINE FArchive &operator << (FArchive &AR) {
		AR << Internal;
		AR << Shift;
		AR << Base;
		AR << Flag;
		//
		return AR;
	}///
	//
	friend FORCEINLINE uint32 GetTypeHash(const FSafeBool &B) {
		return FCrc::MemCrc32(&B,sizeof(FSafeBool));
	}///
};

/** Safe Byte Property;
 Use this data format to store sensible Byte values you need protected against memory hackers. */
USTRUCT(BlueprintType)
struct SCUE4_API FSafeByte {
	GENERATED_USTRUCT_BODY()
private:
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString Internal;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString Base;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString Shift;
	//
	UPROPERTY(SaveGame)
	uint8 Flag;
public:
	////////////////////////////////////////////////////////////
	/// Accessors
	//
	const FString GetRaw() const {
		if (!Shift.IsEmpty()) {return Shift;} else {return Base;}
	}///
	//
	void SetRaw(const FString &Value) {
		Shift = Value;
		Base = Value;
	}///
	//
	void SetKey(const FString &Key) {
		Internal = Key;
	}///
	//
	const uint8 GetValue() const {
		if (!Internal.IsEmpty()) {return GetValue(Internal);} else {
			switch (Flag) {
				case 0:
					return FCString::Atoi(*FDecode(Base));
				break;
				case 1:
					return FCString::Atoi(*FDecode(Shift));
				break;
			default: return 0;}
		}///
	}///
	//
	const uint8 GetValue(const FString &Key) const {
		switch (Flag) {
			case 0:
				return FCString::Atoi(*FDecode(Key,Base));
			break;
			case 1:
				return FCString::Atoi(*FDecode(Key,Shift));
			break;
		default: return 0;}
	}///
	//
	void SetValue(const uint8 &Input) {
		if (!Internal.IsEmpty()) {SetValue(Internal,Input);} else {
			switch (Flag) {
				case 0:
				{
					Shift = FEncode(FString::FromInt(Input));
					Flag = 1; Base.Empty();
				} break;
				case 1:
				{
					Base = FEncode(FString::FromInt(Input));
					Flag = 0; Shift.Empty();
				} break;
			default: break;
		} Internal=ASCII_KEY;}
	}///
	//
	void SetValue(const FString &Key, const uint8 &Input) {
		switch (Flag) {
			case 0:
			{
				Shift = FEncode(Key,FString::FromInt(Input));
				Flag = 1; Base.Empty();
			} break;
			case 1:
			{
				Base = FEncode(Key,FString::FromInt(Input));
				Flag = 0; Shift.Empty();
			} break;
			default: break;
		} Internal=FString(Key);
	}///
	//
	////////////////////////////////////////////////////////////
	/// Constructors
	//
	FSafeByte() {
		Internal = FString();
		Base = TEXT("0");
		Shift = TEXT("0");
		Flag = 0;
	}///
	//
	FSafeByte(const uint8 &Input) {
		Internal = FString();
		Base = FEncode(FString::FromInt(Input));
		Shift = FEncode(FString::FromInt(Input));
		Flag = 0;
	}///
	//
	FSafeByte(const FString &Key, const uint8 &Input) {
		Internal = Key;
		Base = FEncode(Key,FString::FromInt(Input));
		Shift = FEncode(Key,FString::FromInt(Input));
		Flag = 0;
	}///
	//
	////////////////////////////////////////////////////////////
	/// Operators
	//
	FORCEINLINE FSafeByte &operator = (const FSafeByte &B) {
		Internal = B.Internal;
		Shift = B.Shift;
		Base = B.Base;
		Flag = B.Flag;
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeByte &operator = (const uint8 &B) {
		SetValue(B); return *this;
	}///
	//
	FORCEINLINE bool operator == (const FSafeByte &B) const {
		return (GetValue() == B.GetValue());
	}///
	//
	FORCEINLINE bool operator != (const FSafeByte &B) const {
		return (GetValue() != B.GetValue());
	}///
	//
	FORCEINLINE bool operator > (const FSafeByte &B) const {
		return (GetValue() > B.GetValue());
	}///
	//
	FORCEINLINE bool operator < (const FSafeByte &B) const {
		return (GetValue() < B.GetValue());
	}///
	//
	FORCEINLINE bool operator >= (const FSafeByte &B) const {
		return (GetValue() >= B.GetValue());
	}///
	//
	FORCEINLINE bool operator <= (const FSafeByte &B) const {
		return (GetValue() <= B.GetValue());
	}///
	//
	FORCEINLINE FSafeByte operator + (const FSafeByte &B) const {
		return (GetValue() + B.GetValue());
	}///
	//
	FORCEINLINE FSafeByte operator - (const FSafeByte &B) const {
		return (GetValue() - B.GetValue());
	}///
	//
	FORCEINLINE FSafeByte operator * (const FSafeByte &B) const {
		return (GetValue() * B.GetValue());
	}///
	//
	FORCEINLINE FSafeByte operator / (const FSafeByte &B) const {
		return (GetValue() / B.GetValue());
	}///
	//
	FORCEINLINE FSafeByte operator ~ () const {
		const uint8 I = GetValue();
		//
		return FSafeByte(~I);
	}///
	//
	FORCEINLINE FSafeByte operator % (const FSafeByte &B) const {
		const uint8 M = B.GetValue();
		const uint8 I = GetValue();
		//
		return FSafeByte(I % M);
	}///
	//
	FORCEINLINE FSafeByte operator & (const FSafeByte &B) const {
		const uint8 M = B.GetValue();
		const uint8 I = GetValue();
		//
		return FSafeByte(I & M);
	}///
	//
	FORCEINLINE FSafeByte operator | (const FSafeByte &B) const {
		const uint8 M = B.GetValue();
		const uint8 I = GetValue();
		//
		return FSafeByte(I | M);
	}///
	//
	FORCEINLINE FSafeByte operator ^ (const FSafeByte &B) const {
		const uint8 M = B.GetValue();
		const uint8 I = GetValue();
		//
		return FSafeByte(I ^ M);
	}///
	//
	FORCEINLINE FSafeByte operator >> (const FSafeByte &B) const {
		const uint8 M = B.GetValue();
		const uint8 I = GetValue();
		//
		return FSafeByte(I >> M);
	}///
	//
	FORCEINLINE FSafeByte operator << (const FSafeByte &B) const {
		const uint8 M = B.GetValue();
		const uint8 I = GetValue();
		//
		return FSafeByte(I << M);
	}///
	//
	FORCEINLINE bool operator == (const uint8 &B) const {
		return (GetValue() == B);
	}///
	//
	FORCEINLINE bool operator != (const uint8 &B) const {
		return (GetValue() != B);
	}///
	//
	FORCEINLINE bool operator > (const uint8 &B) const {
		return (GetValue() > B);
	}///
	//
	FORCEINLINE bool operator < (const uint8 &B) const {
		return (GetValue() < B);
	}///
	//
	FORCEINLINE bool operator >= (const uint8 &B) const {
		return (GetValue() >= B);
	}///
	//
	FORCEINLINE bool operator <= (const uint8 &B) const {
		return (GetValue() <= B);
	}///
	//
	FORCEINLINE FSafeByte operator + (const uint8 &B) const {
		return FSafeByte(GetValue() + B);
	}///
	//
	FORCEINLINE FSafeByte operator - (const uint8 &B) const {
		return FSafeByte(GetValue() - B);
	}///
	//
	FORCEINLINE FSafeByte operator * (const uint8 &B) const {
		return FSafeByte(GetValue() * B);
	}///
	//
	FORCEINLINE FSafeByte operator / (const uint8 &B) const {
		return FSafeByte(GetValue() / B);
	}///
	//
	FORCEINLINE FSafeByte operator % (const uint8 &B) const {
		const uint8 I = GetValue();
		//
		return FSafeByte(I % B);
	}///
	//
	FORCEINLINE FSafeByte operator & (const uint8 &B) const {
		const uint8 I = GetValue();
		//
		return FSafeByte(I & B);
	}///
	//
	FORCEINLINE FSafeByte operator | (const uint8 &B) const {
		const uint8 I = GetValue();
		//
		return FSafeByte(I | B);
	}///
	//
	FORCEINLINE FSafeByte operator ^ (const uint8 &B) const {
		const uint8 I = GetValue();
		//
		return FSafeByte(I ^ B);
	}///
	//
	FORCEINLINE FSafeByte operator >> (const uint8 &B) const {
		const uint8 I = GetValue();
		//
		return FSafeByte(I >> B);
	}///
	//
	FORCEINLINE FSafeByte operator << (const uint8 &B) const {
		const uint8 I = GetValue();
		//
		return FSafeByte(I << B);
	}///
	//
	FORCEINLINE FSafeByte &operator += (const uint8 &B) {
		const uint8 I = (GetValue() + B);
		SetValue(I);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeByte &operator -= (const uint8 &B) {
		const uint8 I = (GetValue() - B);
		SetValue(I);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeByte &operator += (const FSafeByte &B) {
		const uint8 I = (GetValue() + B.GetValue());
		SetValue(I);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeByte &operator -= (const FSafeByte &B) {
		const uint8 I = (GetValue() - B.GetValue());
		SetValue(I);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeByte operator ++ (int) {
		FSafeByte SB = *this; (++ *this);
		//
		return SB;
	}///
	//
	FORCEINLINE FSafeByte operator -- (int) {
		FSafeByte SB = *this; (-- *this);
		//
		return SB;
	}///
	//
	FORCEINLINE FSafeByte &operator ++ () {
		uint8 I = GetValue(); I++;
		SetValue(I);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeByte &operator -- () {
		uint8 I = GetValue(); I--;
		SetValue(I);
		//
		return *this;
	}///
	//
	FORCEINLINE FArchive &operator << (FArchive &AR) {
		AR << Internal;
		AR << Shift;
		AR << Base;
		AR << Flag;
		//
		return AR;
	}///
	//
	friend FORCEINLINE uint32 GetTypeHash(const FSafeByte &B) {
		return FCrc::MemCrc32(&B,sizeof(FSafeByte));
	}///
};

/** Safe Int32 Property;
 Use this data format to store sensible Int values you need protected against memory hackers. */
USTRUCT(BlueprintType)
struct SCUE4_API FSafeInt {
	GENERATED_USTRUCT_BODY()
private:
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString Internal;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString Base;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString Shift;
	//
	UPROPERTY(SaveGame)
	uint8 Flag;
public:
	////////////////////////////////////////////////////////////
	/// Accessors
	//
	const FString GetRaw() const {
		if (!Shift.IsEmpty()) {return Shift;} else {return Base;}
	}///
	//
	void SetRaw(const FString &Value) {
		Shift = Value;
		Base = Value;
	}///
	//
	void SetKey(const FString &Key) {
		Internal = Key;
	}///
	//
	const int32 GetValue() const {
		if (!Internal.IsEmpty()) {return GetValue(Internal);} else {
			switch (Flag) {
				case 0:
					return FCString::Atoi(*FDecode(Base));
				break;
				case 1:
					return FCString::Atoi(*FDecode(Shift));
				break;
			default: return 0;}
		}///
	}///
	//
	const int32 GetValue(const FString &Key) const {
		switch (Flag) {
			case 0:
				return FCString::Atoi(*FDecode(Key,Base));
			break;
			case 1:
				return FCString::Atoi(*FDecode(Key,Shift));
			break;
		default: return 0;}
	}///
	//
	void SetValue(const int32 &Input) {
		if (!Internal.IsEmpty()) {SetValue(Internal,Input);} else {
			switch (Flag) {
				case 0:
				{
					Shift = FEncode(FString::FromInt(Input));
					Flag = 1; Base.Empty();
				} break;
				case 1:
				{
					Base = FEncode(FString::FromInt(Input));
					Flag = 0; Shift.Empty();
				} break;
			default: break;
		} Internal=ASCII_KEY;}
	}///
	//
	void SetValue(const FString &Key, const int32 &Input) {
		switch (Flag) {
			case 0:
			{
				Shift = FEncode(Key,FString::FromInt(Input));
				Flag = 1; Base.Empty();
			} break;
			case 1:
			{
				Base = FEncode(Key,FString::FromInt(Input));
				Flag = 0; Shift.Empty();
			} break;
			default: break;
		} Internal=FString(Key);
	}///
	//
	////////////////////////////////////////////////////////////
	/// Constructors
	//
	FSafeInt() {
		Internal = FString();
		Base = TEXT("0");
		Shift = TEXT("0");
		Flag = 0;
	}///
	//
	FSafeInt(const int32 &Input) {
		Internal = FString();
		Base = FEncode(FString::FromInt(Input));
		Shift = FEncode(FString::FromInt(Input));
		Flag = 0;
	}///
	//
	FSafeInt(const FString &Key, const int32 &Input) {
		Internal = Key;
		Base = FEncode(Key,FString::FromInt(Input));
		Shift = FEncode(Key,FString::FromInt(Input));
		Flag = 0;
	}///
	//
	////////////////////////////////////////////////////////////
	/// Operators
	//
	FORCEINLINE FSafeInt &operator = (const FSafeInt &I) {
		Internal = I.Internal;
		Shift = I.Shift;
		Base = I.Base;
		Flag = I.Flag;
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeInt &operator = (const int32 &IT) {
		SetValue(IT); return *this;
	}///
	//
	FORCEINLINE bool operator == (const FSafeInt &IT) const {
		return (GetValue() == IT.GetValue());
	}///
	//
	FORCEINLINE bool operator != (const FSafeInt &IT) const {
		return (GetValue() != IT.GetValue());
	}///
	//
	FORCEINLINE bool operator > (const FSafeInt &IT) const {
		return (GetValue() > IT.GetValue());
	}///
	//
	FORCEINLINE bool operator < (const FSafeInt &IT) const {
		return (GetValue() < IT.GetValue());
	}///
	//
	FORCEINLINE bool operator >= (const FSafeInt &IT) const {
		return (GetValue() >= IT.GetValue());
	}///
	//
	FORCEINLINE bool operator <= (const FSafeInt &IT) const {
		return (GetValue() <= IT.GetValue());
	}///
	//
	FORCEINLINE FSafeInt operator + (const FSafeInt &IT) const {
		return (GetValue() + IT.GetValue());
	}///
	//
	FORCEINLINE FSafeInt operator - (const FSafeInt &IT) const {
		return (GetValue() - IT.GetValue());
	}///
	//
	FORCEINLINE FSafeInt operator * (const FSafeInt &IT) const {
		return (GetValue() * IT.GetValue());
	}///
	//
	FORCEINLINE FSafeInt operator / (const FSafeInt &IT) const {
		return (GetValue() / IT.GetValue());
	}///
	//
	FORCEINLINE FSafeInt operator ~ () const {
		const int32 I = GetValue();
		//
		return FSafeInt(~I);
	}///
	//
	FORCEINLINE FSafeInt operator % (const FSafeInt &IT) const {
		const int32 M = IT.GetValue();
		const int32 I = GetValue();
		//
		return FSafeInt(I % M);
	}///
	//
	FORCEINLINE FSafeInt operator & (const FSafeInt &IT) const {
		const int32 M = IT.GetValue();
		const int32 I = GetValue();
		//
		return FSafeInt(I & M);
	}///
	//
	FORCEINLINE FSafeInt operator | (const FSafeInt &IT) const {
		const int32 M = IT.GetValue();
		const int32 I = GetValue();
		//
		return FSafeInt(I | M);
	}///
	//
	FORCEINLINE FSafeInt operator ^ (const FSafeInt &IT) const {
		const int32 M = IT.GetValue();
		const int32 I = GetValue();
		//
		return FSafeInt(I ^ M);
	}///
	//
	FORCEINLINE FSafeInt operator >> (const FSafeInt &IT) const {
		const int32 M = IT.GetValue();
		const int32 I = GetValue();
		//
		return FSafeInt(I >> M);
	}///
	//
	FORCEINLINE FSafeInt operator << (const FSafeInt &IT) const {
		const int32 M = IT.GetValue();
		const int32 I = GetValue();
		//
		return FSafeInt(I << M);
	}///
	//
	FORCEINLINE bool operator == (const int32 &IT) const {
		return (GetValue() == IT);
	}///
	//
	FORCEINLINE bool operator != (const int32 &IT) const {
		return (GetValue() != IT);
	}///
	//
	FORCEINLINE bool operator > (const int32 &IT) const {
		return (GetValue() > IT);
	}///
	//
	FORCEINLINE bool operator < (const int32 &IT) const {
		return (GetValue() < IT);
	}///
	//
	FORCEINLINE bool operator >= (const int32 &IT) const {
		return (GetValue() >= IT);
	}///
	//
	FORCEINLINE bool operator <= (const int32 &IT) const {
		return (GetValue() <= IT);
	}///
	//
	FORCEINLINE FSafeInt operator + (const int32 &IT) const {
		return FSafeInt(GetValue() + IT);
	}///
	//
	FORCEINLINE FSafeInt operator - (const int32 &IT) const {
		return FSafeInt(GetValue() - IT);
	}///
	//
	FORCEINLINE FSafeInt operator * (const int32 &IT) const {
		return FSafeInt(GetValue() * IT);
	}///
	//
	FORCEINLINE FSafeInt operator / (const int32 &IT) const {
		return FSafeInt(GetValue() / IT);
	}///
	//
	FORCEINLINE FSafeInt operator % (const int32 &IT) const {
		const int32 I = GetValue();
		//
		return FSafeInt(I % IT);
	}///
	//
	FORCEINLINE FSafeInt operator & (const int32 &IT) const {
		const int32 I = GetValue();
		//
		return FSafeInt(I & IT);
	}///
	//
	FORCEINLINE FSafeInt operator | (const int32 &IT) const {
		const int32 I = GetValue();
		//
		return FSafeInt(I | IT);
	}///
	//
	FORCEINLINE FSafeInt operator ^ (const int32 &IT) const {
		const int32 I = GetValue();
		//
		return FSafeInt(I ^ IT);
	}///
	//
	FORCEINLINE FSafeInt operator >> (const int32 &IT) const {
		const int32 I = GetValue();
		//
		return FSafeInt(I >> IT);
	}///
	//
	FORCEINLINE FSafeInt operator << (const int32 &IT) const {
		const int32 I = GetValue();
		//
		return FSafeInt(I << IT);
	}///
	//
	FORCEINLINE FSafeInt &operator += (const FSafeInt &IT) {
		const int32 I = (GetValue() + IT.GetValue());
		SetValue(I);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeInt &operator -= (const FSafeInt &IT) {
		const int32 I = (GetValue() - IT.GetValue());
		SetValue(I);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeInt &operator += (const int32 &IT) {
		const int32 I = (GetValue() + IT);
		SetValue(I);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeInt &operator -= (const int32 &IT) {
		const int32 I = (GetValue() - IT);
		SetValue(I);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeInt operator ++ (int) {
		FSafeInt SI = *this; (++ *this);
		//
		return SI;
	}///
	//
	FORCEINLINE FSafeInt operator -- (int) {
		FSafeInt SI = *this; (-- *this);
		//
		return SI;
	}///
	//
	FORCEINLINE FSafeInt &operator ++ () {
		int32 I = GetValue(); I++;
		SetValue(I);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeInt &operator -- () {
		int32 I = GetValue(); I--;
		SetValue(I);
		//
		return *this;
	}///
	//
	FORCEINLINE FArchive &operator << (FArchive &AR) {
		AR << Internal;
		AR << Shift;
		AR << Base;
		AR << Flag;
		//
		return AR;
	}///
	//
	friend FORCEINLINE uint32 GetTypeHash(const FSafeInt &I) {
		return FCrc::MemCrc32(&I,sizeof(FSafeInt));
	}///
};

/** Safe Float Property;
 Use this data format to store sensible Float values you need protected against memory hackers. */
USTRUCT(BlueprintType)
struct SCUE4_API FSafeFloat {
	GENERATED_USTRUCT_BODY()
private:
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString Internal;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString Base;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString Shift;
	//
	UPROPERTY(SaveGame)
	uint8 Flag;
public:
	////////////////////////////////////////////////////////////
	/// Accessors
	//
	const FString GetRaw() const {
		if (!Shift.IsEmpty()) {return Shift;} else {return Base;}
	}///
	//
	void SetRaw(const FString &Value) {
		Shift = Value;
		Base = Value;
	}///
	//
	void SetKey(const FString &Key) {
		Internal = Key;
	}///
	//
	const float GetValue() const {
		if (!Internal.IsEmpty()) {return GetValue(Internal);} else {
			switch (Flag) {
				case 0:
					return FCString::Atof(*FDecode(Base));
				break;
				case 1:
					return FCString::Atof(*FDecode(Shift));
				break;
			default: return 0;}
		}///
	}///
	//
	const float GetValue(const FString &Key) const {
		switch (Flag) {
			case 0:
				return FCString::Atof(*FDecode(Key,Base));
			break;
			case 1:
				return FCString::Atof(*FDecode(Key,Shift));
			break;
		default: return 0;}
	}///
	//
	void SetValue(const float &Input) {
		if (!Internal.IsEmpty()) {SetValue(Internal,Input);} else {
			switch (Flag) {
				case 0:
				{
					Shift = FEncode(FString::Printf(TEXT("%f"),Input));
					Flag = 1; Base.Empty();
				} break;
				case 1:
				{
					Base = FEncode(FString::Printf(TEXT("%f"),Input));
					Flag = 0; Shift.Empty();
				} break;
			default: break;
		} Internal=ASCII_KEY;}
	}///
	//
	void SetValue(const FString &Key, const float &Input) {
		switch (Flag) {
			case 0:
			{
				Shift = FEncode(Key,FString::Printf(TEXT("%f"),Input));
				Flag = 1; Base.Empty();
			} break;
			case 1:
			{
				Base = FEncode(Key,FString::Printf(TEXT("%f"),Input));
				Flag = 0; Shift.Empty();
			} break;
			default: break;
		} Internal=FString(Key);
	}///
	//
	////////////////////////////////////////////////////////////
	/// Constructors
	//
	FSafeFloat() {
		Internal = FString();
		Base = TEXT("0");
		Shift = TEXT("0");
		Flag = 0;
	}///
	//
	FSafeFloat(const float &Input) {
		Internal = FString();
		Base = FEncode(FString::FromInt(Input));
		Shift = FEncode(FString::FromInt(Input));
		Flag = 0;
	}///
	//
	FSafeFloat(const FString &Key, const float &Input) {
		Internal = Key;
		Base = FEncode(Key,FString::FromInt(Input));
		Shift = FEncode(Key,FString::FromInt(Input));
		Flag = 0;
	}///
	//
	////////////////////////////////////////////////////////////
	/// Operators
	//
	FORCEINLINE FSafeFloat &operator = (const FSafeFloat &F) {
		Internal = F.Internal;
		Shift = F.Shift;
		Base = F.Base;
		Flag = F.Flag;
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeFloat &operator = (const float &F) {
		SetValue(F); return *this;
	}///
	//
	FORCEINLINE bool operator == (const FSafeFloat &F) const {
		return (GetValue() == F.GetValue());
	}///
	//
	FORCEINLINE bool operator != (const FSafeFloat &F) const {
		return (GetValue() != F.GetValue());
	}///
	//
	FORCEINLINE bool operator > (const FSafeFloat &F) const {
		return (GetValue() > F.GetValue());
	}///
	//
	FORCEINLINE bool operator < (const FSafeFloat &F) const {
		return (GetValue() < F.GetValue());
	}///
	//
	FORCEINLINE bool operator >= (const FSafeFloat &F) const {
		return (GetValue() >= F.GetValue());
	}///
	//
	FORCEINLINE bool operator <= (const FSafeFloat &F) const {
		return (GetValue() <= F.GetValue());
	}///
	//
	FORCEINLINE FSafeFloat operator + (const FSafeFloat &F) const {
		return (GetValue() + F.GetValue());
	}///
	//
	FORCEINLINE FSafeFloat operator - (const FSafeFloat &F) const {
		return (GetValue() - F.GetValue());
	}///
	//
	FORCEINLINE FSafeFloat operator * (const FSafeFloat &F) const {
		return (GetValue() * F.GetValue());
	}///
	//
	FORCEINLINE FSafeFloat operator / (const FSafeFloat &F) const {
		return (GetValue() / F.GetValue());
	}///
	//
	FORCEINLINE bool operator == (const float &F) const {
		return (GetValue() == F);
	}///
	//
	FORCEINLINE bool operator != (const float &F) const {
		return (GetValue() != F);
	}///
	//
	FORCEINLINE bool operator > (const float &F) const {
		return (GetValue() > F);
	}///
	//
	FORCEINLINE bool operator < (const float &F) const {
		return (GetValue() < F);
	}///
	//
	FORCEINLINE bool operator >= (const float &F) const {
		return (GetValue() >= F);
	}///
	//
	FORCEINLINE bool operator <= (const float &F) const {
		return (GetValue() <= F);
	}///
	//
	FORCEINLINE FSafeFloat operator + (const float &F) const {
		return FSafeFloat(GetValue() + F);
	}///
	//
	FORCEINLINE FSafeFloat operator - (const float &F) const {
		return FSafeFloat(GetValue() - F);
	}///
	//
	FORCEINLINE FSafeFloat operator * (const float &F) const {
		return FSafeFloat(GetValue() * F);
	}///
	//
	FORCEINLINE FSafeFloat operator / (const float &F) const {
		return FSafeFloat(GetValue() / F);
	}///
	//
	FORCEINLINE FSafeFloat &operator += (const FSafeFloat &F) {
		const float SF = (GetValue() + F.GetValue());
		SetValue(SF);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeFloat &operator -= (const FSafeFloat &F) {
		const float SF = (GetValue() - F.GetValue());
		SetValue(SF);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeFloat &operator += (const float &F) {
		const float SF = (GetValue() + F);
		SetValue(SF);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeFloat &operator -= (const float &F) {
		const float SF = (GetValue() - F);
		SetValue(SF);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeFloat operator ++ (int) {
		FSafeFloat SF = *this; (++ *this);
		//
		return SF;
	}///
	//
	FORCEINLINE FSafeFloat operator -- (int) {
		FSafeFloat SF = *this; (-- *this);
		//
		return SF;
	}///
	//
	FORCEINLINE FSafeFloat &operator ++ () {
		float F = GetValue(); F++;
		SetValue(F);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeFloat &operator -- () {
		float F = GetValue(); F--;
		SetValue(F);
		//
		return *this;
	}///
	//
	FORCEINLINE FArchive &operator << (FArchive &AR) {
		AR << Internal;
		AR << Shift;
		AR << Base;
		AR << Flag;
		//
		return AR;
	}///
	//
	friend FORCEINLINE uint32 GetTypeHash(const FSafeFloat &I) {
		return FCrc::MemCrc32(&I,sizeof(FSafeFloat));
	}///
};

/** Safe String Property;
 Use this data format to store sensible String values you need protected against memory hackers. */
USTRUCT(BlueprintType)
struct SCUE4_API FSafeString {
	GENERATED_USTRUCT_BODY()
private:
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString Internal;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString Base;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString Shift;
	//
	UPROPERTY(SaveGame)
	uint8 Flag;
public:
	////////////////////////////////////////////////////////////
	/// Accessors
	//
	const FString GetRaw() const {
		if (!Shift.IsEmpty()) {return Shift;} else {return Base;}
	}///
	//
	void SetRaw(const FString &Value) {
		Shift = Value;
		Base = Value;
	}///
	//
	void SetKey(const FString &Key) {
		Internal = Key;
	}///
	//
	const FString GetValue() const {
		if (!Internal.IsEmpty()) {return GetValue(Internal);} else {
			switch (Flag) {
				case 0:
					return FString(*FDecode(Base));
				break;
				case 1:
					return FString(*FDecode(Shift));
				break;
			default: return FString();}
		}///
	}///
	//
	const FString GetValue(const FString &Key) const {
		switch (Flag) {
			case 0:
				return FString(*FDecode(Key,Base));
			break;
			case 1:
				return FString(*FDecode(Key,Shift));
			break;
		default: return FString();}
	}///
	//
	void SetValue(const FString &Input) {
		if (!Internal.IsEmpty()) {SetValue(Internal,Input);} else {
			switch (Flag) {
				case 0:
				{
					Shift = FEncode(Input);
					Flag = 1; Base.Empty();
				} break;
				case 1:
				{
					Base = FEncode(Input);
					Flag = 0; Shift.Empty();
				} break;
			default: break;
		} Internal=ASCII_KEY;}
	}///
	//
	void SetValue(const FString &Key, const FString &Input) {
		switch (Flag) {
			case 0:
			{
				Shift = FEncode(Key,Input);
				Flag = 1; Base.Empty();
			} break;
			case 1:
			{
				Base = FEncode(Key,Input);
				Flag = 0; Shift.Empty();
			} break;
			default: break;
		} Internal=FString(Key);
	}///
	//
	////////////////////////////////////////////////////////////
	/// Constructors
	//
	FSafeString() {
		Internal = FString();
		Base = FString();
		Shift = FString();
		Flag = 0;
	}///
	//
	FSafeString(const FString &Input) {
		Internal = FString();
		Base = FEncode(Input);
		Shift = FEncode(Input);
		Flag = 0;
	}///
	//
	FSafeString(const FString &Key, const FString &Input) {
		Internal = Key;
		Base = FEncode(Key,Input);
		Shift = FEncode(Key,Input);
		Flag = 0;
	}///
	//
	////////////////////////////////////////////////////////////
	/// Operators
	//
	FORCEINLINE FSafeString &operator = (const FSafeString &S) {
		Internal = S.Internal;
		Shift = S.Shift;
		Base = S.Base;
		Flag = S.Flag;
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeString &operator = (const FString &S) {
		SetValue(S); return *this;
	}///
	//
	FORCEINLINE bool operator == (const FSafeString &S) const {
		return (GetValue() == S.GetValue());
	}///
	//
	FORCEINLINE bool operator != (const FSafeString &S) const {
		return (GetValue() != S.GetValue());
	}///
	//
	FORCEINLINE bool operator > (const FSafeString &S) const {
		return (GetValue().Len() > S.GetValue().Len());
	}///
	//
	FORCEINLINE bool operator < (const FSafeString &S) const {
		return (GetValue().Len() < S.GetValue().Len());
	}///
	//
	FORCEINLINE FSafeString operator + (const FSafeString &S) const {
		return FSafeString(*(GetValue() + S.GetValue()));
	}///
	//
	FORCEINLINE bool operator == (const FString &S) const {
		return (GetValue() == S);
	}///
	//
	FORCEINLINE bool operator != (const FString &S) const {
		return (GetValue() != S);
	}///
	//
	FORCEINLINE bool operator > (const FString &S) const {
		return (GetValue().Len() > S.Len());
	}///
	//
	FORCEINLINE bool operator < (const FString &S) const {
		return (GetValue().Len() < S.Len());
	}///
	//
	FORCEINLINE FSafeString operator + (const FString &S) const {
		return FSafeString(*(GetValue() + S));
	}///
	//
	FORCEINLINE FSafeString &operator += (const FSafeString &S) {
		const FString SN = FString(*(GetValue() + S.GetValue()));
		SetValue(SN);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeString &operator += (const FString &S) {
		const FString SN = FString(*(GetValue() + S));
		SetValue(SN);
		//
		return *this;
	}///
	//
	FORCEINLINE FArchive &operator << (FArchive &AR) {
		AR << Internal;
		AR << Shift;
		AR << Base;
		AR << Flag;
		//
		return AR;
	}///
	//
	friend FORCEINLINE uint32 GetTypeHash(const FSafeString &S) {
		return FCrc::MemCrc32(&S,sizeof(FSafeString));
	}///
};

/** Safe Name Property;
 Use this data format to store sensible Name values you need protected against memory hackers. */
USTRUCT(BlueprintType)
struct SCUE4_API FSafeName {
	GENERATED_USTRUCT_BODY()
private:
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString Internal;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString Base;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString Shift;
	//
	UPROPERTY(SaveGame)
	uint8 Flag;
public:
	////////////////////////////////////////////////////////////
	/// Accessors
	//
	const FString GetRaw() const {
		if (!Shift.IsEmpty()) {return Shift;} else {return Base;}
	}///
	//
	void SetRaw(const FString &Value) {
		Shift = Value;
		Base = Value;
	}///
	//
	void SetKey(const FString &Key) {
		Internal = Key;
	}///
	//
	const FName GetValue() const {
		if (!Internal.IsEmpty()) {return GetValue(Internal);} else {
			switch (Flag) {
				case 0:
					return FName(*FDecode(Base));
				break;
				case 1:
					return FName(*FDecode(Shift));
				break;
			default: return FName();}
		}///
	}///
	//
	const FName GetValue(const FString &Key) const {
		switch (Flag) {
			case 0:
				return FName(*FDecode(Key,Base));
			break;
			case 1:
				return FName(*FDecode(Key,Shift));
			break;
		default: return FName();}
	}///
	//
	void SetValue(const FName &Input) {
		if (!Internal.IsEmpty()) {SetValue(Internal,Input);} else {
			switch (Flag) {
				case 0:
				{
					Shift = FEncode(Input.ToString());
					Flag = 1; Base.Empty();
				} break;
				case 1:
				{
					Base = FEncode(Input.ToString());
					Flag = 0; Shift.Empty();
				} break;
			default: break;
		} Internal=ASCII_KEY;}
	}///
	//
	void SetValue(const FString &Key, const FName &Input) {
		switch (Flag) {
			case 0:
			{
				Shift = FEncode(Key,Input.ToString());
				Flag = 1; Base.Empty();
			} break;
			case 1:
			{
				Base = FEncode(Key,Input.ToString());
				Flag = 0; Shift.Empty();
			} break;
			default: break;
		} Internal=FString(Key);
	}///
	//
	////////////////////////////////////////////////////////////
	/// Constructors
	//
	FSafeName() {
		Internal = FString();
		Base = FString();
		Shift = FString();
		Flag = 0;
	}///
	//
	FSafeName(const FName &Input) {
		Internal = FString();
		Base = FEncode(Input.ToString());
		Shift = FEncode(Input.ToString());
		Flag = 0;
	}///
	//
	FSafeName(const FString &Key, const FName &Input) {
		Internal = Key;
		Base = FEncode(Key,Input.ToString());
		Shift = FEncode(Key,Input.ToString());
		Flag = 0;
	}///
	//
	////////////////////////////////////////////////////////////
	/// Operators
	//
	FORCEINLINE FSafeName &operator = (const FSafeName &N) {
		Internal = N.Internal;
		Shift = N.Shift;
		Base = N.Base;
		Flag = N.Flag;
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeName &operator = (const FName &N) {
		SetValue(N); return *this;
	}///
	//
	FORCEINLINE bool operator == (const FSafeName &N) const {
		return (GetValue() == N.GetValue());
	}///
	//
	FORCEINLINE bool operator != (const FSafeName &N) const {
		return (GetValue() != N.GetValue());
	}///
	//
	FORCEINLINE bool operator > (const FSafeName &N) const {
		return (GetValue().ToString().Len() > N.GetValue().ToString().Len());
	}///
	//
	FORCEINLINE bool operator < (const FSafeName &N) const {
		return (GetValue().ToString().Len() < N.GetValue().ToString().Len());
	}///
	//
	FORCEINLINE FSafeName operator + (const FSafeName &N) const {
		return FSafeName(*(GetValue().ToString() + N.GetValue().ToString()));
	}///
	//
	FORCEINLINE bool operator == (const FName &N) const {
		return (GetValue() == N);
	}///
	//
	FORCEINLINE bool operator != (const FName &N) const {
		return (GetValue() != N);
	}///
	//
	FORCEINLINE bool operator > (const FName &N) const {
		return (GetValue().ToString().Len() > N.ToString().Len());
	}///
	//
	FORCEINLINE bool operator < (const FName &N) const {
		return (GetValue().ToString().Len() < N.ToString().Len());
	}///
	//
	FORCEINLINE FSafeName operator + (const FName &N) const {
		return FSafeName(*(GetValue().ToString() + N.ToString()));
	}///
	//
	FORCEINLINE FSafeName &operator += (const FSafeName &N) {
		const FName SN = FName(*(GetValue().ToString() + N.GetValue().ToString()));
		SetValue(SN);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeName &operator += (const FName &N) {
		const FName SN = FName(*(GetValue().ToString() + N.ToString()));
		SetValue(SN);
		//
		return *this;
	}///
	//
	FORCEINLINE FArchive &operator << (FArchive &AR) {
		AR << Internal;
		AR << Shift;
		AR << Base;
		AR << Flag;
		//
		return AR;
	}///
	//
	friend FORCEINLINE uint32 GetTypeHash(const FSafeName &N) {
		return FCrc::MemCrc32(&N,sizeof(FSafeName));
	}///
};

/** Safe Text Property;
 Use this data format to store sensible Text values you need protected against memory hackers. */
USTRUCT(BlueprintType)
struct SCUE4_API FSafeText {
	GENERATED_USTRUCT_BODY()
private:
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString Internal;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString Base;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString Shift;
	//
	UPROPERTY(SaveGame)
	uint8 Flag;
public:
	////////////////////////////////////////////////////////////
	/// Accessors
	//
	const FString GetRaw() const {
		if (!Shift.IsEmpty()) {return Shift;} else {return Base;}
	}///
	//
	void SetRaw(const FString &Value) {
		Shift = Value;
		Base = Value;
	}///
	//
	void SetKey(const FString &Key) {
		Internal = Key;
	}///
	//
	const FText GetValue() const {
		if (!Internal.IsEmpty()) {return GetValue(Internal);} else {
			switch (Flag) {
				case 0:
					return FText::FromString(*FDecode(Base));
				break;
				case 1:
					return FText::FromString(*FDecode(Shift));
				break;
			default: return FText();}
		}///
	}///
	//
	const FText GetValue(const FString &Key) const {
		switch (Flag) {
			case 0:
				return FText::FromString(*FDecode(Key,Base));
			break;
			case 1:
				return FText::FromString(*FDecode(Key,Shift));
			break;
		default: return FText();}
	}///
	//
	void SetValue(const FText &Input) {
		if (!Internal.IsEmpty()) {SetValue(Internal,Input);} else {
			switch (Flag) {
				case 0:
				{
					Shift = FEncode(Input.ToString());
					Flag = 1; Base.Empty();
				} break;
				case 1:
				{
					Base = FEncode(Input.ToString());
					Flag = 0; Shift.Empty();
				} break;
			default: break;
		} Internal=ASCII_KEY;}
	}///
	//
	void SetValue(const FString &Key, const FText &Input) {
		switch (Flag) {
			case 0:
			{
				Shift = FEncode(Key,Input.ToString());
				Flag = 1; Base.Empty();
			} break;
			case 1:
			{
				Base = FEncode(Key,Input.ToString());
				Flag = 0; Shift.Empty();
			} break;
			default: break;
		} Internal=FString(Key);
	}///
	//
	////////////////////////////////////////////////////////////
	/// Constructors
	//
	FSafeText() {
		Internal = FString();
		Base = FString();
		Shift = FString();
		Flag = 0;
	}///
	//
	FSafeText(const FString &Input) {
		Internal = FString();
		Base = FEncode(Input);
		Shift = FEncode(Input);
		Flag = 0;
	}///
	//
	FSafeText(const FText &Input) {
		Internal = FString();
		Base = FEncode(Input.ToString());
		Shift = FEncode(Input.ToString());
		Flag = 0;
	}///
	//
	FSafeText(const FString &Key, const FText &Input) {
		Internal = Key;
		Base = FEncode(Key,Input.ToString());
		Shift = FEncode(Key,Input.ToString());
		Flag = 0;
	}///
	//
	////////////////////////////////////////////////////////////
	/// Operators
	//
	FORCEINLINE FSafeText &operator = (const FSafeText &T) {
		Internal = T.Internal;
		Shift = T.Shift;
		Base = T.Base;
		Flag = T.Flag;
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeText &operator = (const FText &T) {
		SetValue(T); return *this;
	}///
	//
	FORCEINLINE bool operator == (const FSafeText &T) const {
		return (GetValue().ToString() == T.GetValue().ToString());
	}///
	//
	FORCEINLINE bool operator != (const FSafeText &T) const {
		return (GetValue().ToString() != T.GetValue().ToString());
	}///
	//
	FORCEINLINE bool operator > (const FSafeText &T) const {
		return (GetValue().ToString().Len() > T.GetValue().ToString().Len());
	}///
	//
	FORCEINLINE bool operator < (const FSafeText &T) const {
		return (GetValue().ToString().Len() < T.GetValue().ToString().Len());
	}///
	//
	FORCEINLINE FSafeText operator + (const FSafeText &T) const {
		return FSafeText(*(GetValue().ToString() + T.GetValue().ToString()));
	}///
	//
	FORCEINLINE bool operator == (const FText &T) const {
		return (GetValue().ToString() == T.ToString());
	}///
	//
	FORCEINLINE bool operator != (const FText &T) const {
		return (GetValue().ToString() != T.ToString());
	}///
	//
	FORCEINLINE bool operator > (const FText &T) const {
		return (GetValue().ToString().Len() > T.ToString().Len());
	}///
	//
	FORCEINLINE bool operator < (const FText &T) const {
		return (GetValue().ToString().Len() < T.ToString().Len());
	}///
	//
	FORCEINLINE FSafeText operator + (const FText &T) const {
		return FSafeText(*(GetValue().ToString() + T.ToString()));
	}///
	//
	FORCEINLINE FSafeText &operator += (const FSafeText &T) {
		const FText SN = FText::FromString(*(GetValue().ToString() + T.GetValue().ToString()));
		SetValue(SN);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeText &operator += (const FText &T) {
		const FText SN = FText::FromString(*(GetValue().ToString() + T.ToString()));
		SetValue(SN);
		//
		return *this;
	}///
	//
	FORCEINLINE FArchive &operator << (FArchive &AR) {
		AR << Internal;
		AR << Shift;
		AR << Base;
		AR << Flag;
		//
		return AR;
	}///
	//
	friend FORCEINLINE uint32 GetTypeHash(const FSafeText &T) {
		return FCrc::MemCrc32(&T,sizeof(FSafeText));
	}///
};

/** Safe Vector2D Property;
 Use this data format to store sensible Vector2D values you need protected against memory hackers. */
USTRUCT(BlueprintType)
struct SCUE4_API FSafeVector2D {
	GENERATED_USTRUCT_BODY()
private:
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString Internal;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString TrueX;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString TrueY;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString ShiftX;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString ShiftY;
	//
	UPROPERTY(SaveGame)
	uint8 Flag;
public:
	////////////////////////////////////////////////////////////
	/// Accessors
	//
	void SetKey(const FString &Key) {
		Internal = Key;
	}///
	//
	const FVector2D GetValue() const {
		if (!Internal.IsEmpty()) {return GetValue(Internal);} else {
			switch (Flag) {
				case 0:
					return FVector2D::FVector2D(FCString::Atof(*FDecode(TrueX)),FCString::Atof(*FDecode(TrueY)));
				case 1:
					return FVector2D::FVector2D(FCString::Atof(*FDecode(ShiftX)),FCString::Atof(*FDecode(ShiftY)));
			default:
				return FVector2D::ZeroVector;
			}///
		}///
	}///
	//
	const FVector2D GetValue(const FString &Key) const {
		switch (Flag) {
			case 0:
				return FVector2D::FVector2D(FCString::Atof(*FDecode(Key,TrueX)),FCString::Atof(*FDecode(Key,TrueY)));
			break;
			case 1:
				return FVector2D::FVector2D(FCString::Atof(*FDecode(Key,ShiftX)),FCString::Atof(*FDecode(Key,ShiftY)));
			break;
		default:
			return FVector2D::ZeroVector;
		}///
	}///
	//
	void SetValue(const float &X, const float &Y) {
		if (!Internal.IsEmpty()) {SetValue(Internal,FVector2D(X,Y));} else {
			switch (Flag) {
				case 0:
				{
					Flag = 1;
					ShiftX = FEncode(FString::Printf(TEXT("%f"),X));
					ShiftY = FEncode(FString::Printf(TEXT("%f"),Y));
					TrueX.Empty(); TrueY.Empty();
				} break;
				case 1:
				{
					Flag = 0;
					TrueX = FEncode(FString::Printf(TEXT("%f"),X));
					TrueY = FEncode(FString::Printf(TEXT("%f"),Y));
					ShiftX.Empty(); ShiftY.Empty();
				} break;
	} Internal=ASCII_KEY;}}
	//
	void SetValue(const FVector2D &Input) {
		if (!Internal.IsEmpty()) {SetValue(Internal,Input);} else {
			switch (Flag) {
				case 0:
				{
					Flag = 1;
					ShiftX = FEncode(FString::Printf(TEXT("%f"),Input.X));
					ShiftY = FEncode(FString::Printf(TEXT("%f"),Input.Y));
					TrueX.Empty(); TrueY.Empty();
				} break;
				case 1:
				{
					Flag = 0;
					TrueX = FEncode(FString::Printf(TEXT("%f"),Input.X));
					TrueY = FEncode(FString::Printf(TEXT("%f"),Input.Y));
					ShiftX.Empty(); ShiftY.Empty();
				} break;
	} Internal=ASCII_KEY;}}
	//
	void SetValue(const FString &Key, const FVector2D &Input) {
		switch (Flag) {
			case 0:
			{
				Flag = 1;
				ShiftX = FEncode(Key,FString::Printf(TEXT("%f"),Input.X));
				ShiftY = FEncode(Key,FString::Printf(TEXT("%f"),Input.Y));
				TrueX.Empty(); TrueY.Empty();
			} break;
			case 1:
			{
				Flag = 0;
				TrueX = FEncode(Key,FString::Printf(TEXT("%f"),Input.X));
				TrueY = FEncode(Key,FString::Printf(TEXT("%f"),Input.Y));
				ShiftX.Empty(); ShiftY.Empty();
			} break;
	} Internal=Key;}
	//
	////////////////////////////////////////////////////////////
	/// Constructors
	//
	FSafeVector2D() {
		Internal = FString();
		TrueX = TEXT("");
		TrueY = TEXT("");
		ShiftX = TEXT("");
		ShiftY = TEXT("");
		Flag = 0;
	}///
	//
	FSafeVector2D(const float &X, const float &Y) {
		Internal = FString();
		TrueX = FEncode(FString::Printf(TEXT("%f"),X));
		TrueY = FEncode(FString::Printf(TEXT("%f"),Y));
		ShiftX = FEncode(FString::Printf(TEXT("%f"),X));
		ShiftY = FEncode(FString::Printf(TEXT("%f"),Y));
		Flag = 0;
	}///
	//
	FSafeVector2D(const FVector2D &Input) {
		Internal = FString();
		TrueX = FEncode(FString::Printf(TEXT("%f"),Input.X));
		TrueY = FEncode(FString::Printf(TEXT("%f"),Input.Y));
		ShiftX = FEncode(FString::Printf(TEXT("%f"),Input.X));
		ShiftY = FEncode(FString::Printf(TEXT("%f"),Input.Y));
		Flag = 0;
	}///
	//
	FSafeVector2D(const FString &Key, const FVector2D &Input) {
		Internal = Key;
		TrueX = FEncode(Key,FString::Printf(TEXT("%f"),Input.X));
		TrueY = FEncode(Key,FString::Printf(TEXT("%f"),Input.Y));
		ShiftX = FEncode(Key,FString::Printf(TEXT("%f"),Input.X));
		ShiftY = FEncode(Key,FString::Printf(TEXT("%f"),Input.Y));
		Flag = 0;
	}///
	//
	////////////////////////////////////////////////////////////
	/// Operators
	//
	FORCEINLINE FSafeVector2D &operator = (const FSafeVector2D &V) {
		Internal = V.Internal;
		ShiftX = V.ShiftX;
		ShiftY = V.ShiftY;
		TrueX = V.TrueX;
		TrueY = V.TrueY;
		Flag = V.Flag;
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeVector2D &operator = (const FVector2D &V) {
		SetValue(V); return *this;
	}///
	//
	FORCEINLINE bool operator == (const FSafeVector2D &V) const {
		return (GetValue() == V.GetValue());
	}///
	//
	FORCEINLINE bool operator != (const FSafeVector2D &V) const {
		return (GetValue() != V.GetValue());
	}///
	//
	FORCEINLINE bool operator > (const FSafeVector2D &V) const {
		return (GetValue().Size() > V.GetValue().Size());
	}///
	//
	FORCEINLINE bool operator < (const FSafeVector2D &V) const {
		return (GetValue().Size() < V.GetValue().Size());
	}///
	//
	FORCEINLINE bool operator >= (const FSafeVector2D &V) const {
		return (GetValue().Size() >= V.GetValue().Size());
	}///
	//
	FORCEINLINE bool operator <= (const FSafeVector2D &V) const {
		return (GetValue().Size() <= V.GetValue().Size());
	}///
	//
	FORCEINLINE FSafeVector2D operator + (const FSafeVector2D &V) const {
		return (GetValue() + V.GetValue());
	}///
	//
	FORCEINLINE FSafeVector2D operator - (const FSafeVector2D &V) const {
		return (GetValue() - V.GetValue());
	}///
	//
	FORCEINLINE FSafeVector2D operator * (const FSafeVector2D &V) const {
		return (GetValue() * V.GetValue());
	}///
	//
	FORCEINLINE FSafeVector2D operator / (const FSafeVector2D &V) const {
		return (GetValue() / V.GetValue());
	}///
	//
	FORCEINLINE bool operator == (const FVector2D &V) const {
		return (GetValue() == V);
	}///
	//
	FORCEINLINE bool operator != (const FVector2D &V) const {
		return (GetValue() != V);
	}///
	//
	FORCEINLINE bool operator > (const FVector2D &V) const {
		return (GetValue().Size() > V.Size());
	}///
	//
	FORCEINLINE bool operator < (const FVector2D &V) const {
		return (GetValue().Size() < V.Size());
	}///
	//
	FORCEINLINE bool operator >= (const FVector2D &V) const {
		return (GetValue().Size() >= V.Size());
	}///
	//
	FORCEINLINE bool operator <= (const FVector2D &V) const {
		return (GetValue().Size() <= V.Size());
	}///
	//
	FORCEINLINE FSafeVector2D operator + (const FVector2D &V) const {
		return FSafeVector2D(GetValue() + V);
	}///
	//
	FORCEINLINE FSafeVector2D operator - (const FVector2D &V) const {
		return FSafeVector2D(GetValue() - V);
	}///
	//
	FORCEINLINE FSafeVector2D operator * (const FVector2D &V) const {
		return FSafeVector2D(GetValue() * V);
	}///
	//
	FORCEINLINE FSafeVector2D operator / (const FVector2D &V) const {
		return FSafeVector2D(GetValue() / V);
	}///
	//
	FORCEINLINE FSafeVector2D &operator += (const FSafeVector2D &V) {
		const FVector2D V2D = (GetValue() + V.GetValue());
		SetValue(V2D);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeVector2D &operator -= (const FSafeVector2D &V) {
		const FVector2D I = (GetValue() - V.GetValue());
		SetValue(I);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeVector2D &operator += (const FVector2D &V) {
		const FVector2D V2D = (GetValue() + V);
		SetValue(V2D);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeVector2D &operator -= (const FVector2D &V) {
		const FVector2D V2D = (GetValue() - V);
		SetValue(V2D);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeVector2D operator ++ (int) {
		const FSafeVector2D SV = *this; (++ *this);
		//
		return SV;
	}///
	//
	FORCEINLINE FSafeVector2D operator -- (int) {
		const FSafeVector2D SV = *this; (-- *this);
		//
		return SV;
	}///
	//
	FORCEINLINE FSafeVector2D &operator ++ () {
		const FVector2D V2D = GetValue();
		const FVector2D V = FVector2D(V2D.X+1.f,V2D.Y+1.f);
		SetValue(V);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeVector2D &operator -- () {
		const FVector2D V2D = GetValue();
		const FVector2D V = FVector2D(V2D.X-1.f,V2D.Y-1.f);
		SetValue(V);
		//
		return *this;
	}///
	//
	FORCEINLINE FArchive &operator << (FArchive &AR) {
		AR << Internal;
		AR << ShiftX;
		AR << ShiftY;
		AR << TrueX;
		AR << TrueY;
		AR << Flag;
		//
		return AR;
	}///
	//
	friend FORCEINLINE uint32 GetTypeHash(const FSafeVector2D &V) {
		return FCrc::MemCrc32(&V,sizeof(FSafeVector2D));
	}///
};

/** Safe Vector3D Property;
 Use this data format to store sensible Vector3D values you need protected against memory hackers. */
USTRUCT(BlueprintType)
struct SCUE4_API FSafeVector3D {
	GENERATED_USTRUCT_BODY()
private:
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString Internal;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString TrueX;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString TrueY;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString TrueZ;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString ShiftX;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString ShiftY;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString ShiftZ;
	//
	UPROPERTY(SaveGame)
	uint8 Flag;
public:
	////////////////////////////////////////////////////////////
	/// Accessors
	//
	void SetKey(const FString &Key) {
		Internal = Key;
	}///
	//
	const FVector GetValue() const {
		if (!Internal.IsEmpty()) {return GetValue(Internal);} else {
			switch (Flag) {
				case 0:
					return FVector(FCString::Atof(*FDecode(TrueX)),FCString::Atof(*FDecode(TrueY)),FCString::Atof(*FDecode(TrueZ)));
				case 1:
					return FVector(FCString::Atof(*FDecode(ShiftX)),FCString::Atof(*FDecode(ShiftY)),FCString::Atof(*FDecode(ShiftZ)));
			default:
				return FVector::ZeroVector;
			}///
		}///
	}///
	//
	const FVector GetValue(const FString &Key) const {
		switch (Flag) {
			case 0:
				return FVector(FCString::Atof(*FDecode(Key,TrueX)),FCString::Atof(*FDecode(Key,TrueY)),FCString::Atof(*FDecode(TrueZ)));
			break;
			case 1:
				return FVector(FCString::Atof(*FDecode(Key,ShiftX)),FCString::Atof(*FDecode(Key,ShiftY)),FCString::Atof(*FDecode(Key,ShiftZ)));
			break;
		default:
			return FVector::ZeroVector;
		}///
	}///
	//
	void SetValue(const float &X, const float &Y, const float &Z) {
		if (!Internal.IsEmpty()) {SetValue(Internal,FVector(X,Y,Z));} else {
			switch (Flag) {
				case 0:
				{
					Flag = 1;
					ShiftX = FEncode(FString::Printf(TEXT("%f"),X));
					ShiftY = FEncode(FString::Printf(TEXT("%f"),Y));
					ShiftZ = FEncode(FString::Printf(TEXT("%f"),Z));
					TrueX.Empty(); TrueY.Empty(); TrueZ.Empty();
				} break;
				case 1:
				{
					Flag = 0;
					TrueX = FEncode(FString::Printf(TEXT("%f"),X));
					TrueY = FEncode(FString::Printf(TEXT("%f"),Y));
					TrueZ = FEncode(FString::Printf(TEXT("%f"),Z));
					ShiftX.Empty(); ShiftY.Empty(); ShiftZ.Empty();
				} break;
	} Internal=ASCII_KEY;}}
	//
	void SetValue(const FVector &Input) {
		if (!Internal.IsEmpty()) {SetValue(Internal,Input);} else {
			switch (Flag) {
				case 0:
				{
					Flag = 1;
					ShiftX = FEncode(FString::Printf(TEXT("%f"),Input.X));
					ShiftY = FEncode(FString::Printf(TEXT("%f"),Input.Y));
					ShiftZ = FEncode(FString::Printf(TEXT("%f"),Input.Z));
					TrueX.Empty(); TrueY.Empty(); TrueZ.Empty();
				} break;
				case 1:
				{
					Flag = 0;
					TrueX = FEncode(FString::Printf(TEXT("%f"),Input.X));
					TrueY = FEncode(FString::Printf(TEXT("%f"),Input.Y));
					TrueZ = FEncode(FString::Printf(TEXT("%f"),Input.Z));
					ShiftX.Empty(); ShiftY.Empty(); ShiftZ.Empty();
				} break;
	} Internal=ASCII_KEY;}}
	//
	void SetValue(const FString &Key, const FVector &Input) {
		switch (Flag) {
			case 0:
			{
				Flag = 1;
				ShiftX = FEncode(Key,FString::Printf(TEXT("%f"),Input.X));
				ShiftY = FEncode(Key,FString::Printf(TEXT("%f"),Input.Y));
				ShiftZ = FEncode(Key,FString::Printf(TEXT("%f"),Input.Z));
				TrueX.Empty(); TrueY.Empty(); TrueZ.Empty();
			} break;
			case 1:
			{
				Flag = 0;
				TrueX = FEncode(Key,FString::Printf(TEXT("%f"),Input.X));
				TrueY = FEncode(Key,FString::Printf(TEXT("%f"),Input.Y));
				TrueZ = FEncode(Key,FString::Printf(TEXT("%f"),Input.Z));
				ShiftX.Empty(); ShiftY.Empty(); ShiftZ.Empty();
			} break;
	} Internal=Key;}
	//
	////////////////////////////////////////////////////////////
	/// Constructors
	//
	FSafeVector3D() {
		Internal = FString();
		TrueX = TEXT("");
		TrueY = TEXT("");
		ShiftX = TEXT("");
		ShiftY = TEXT("");
		Flag = 0;
	}///
	//
	FSafeVector3D(const float &X, const float &Y, const float &Z) {
		Internal = FString();
		TrueX = FEncode(FString::Printf(TEXT("%f"),X));
		TrueY = FEncode(FString::Printf(TEXT("%f"),Y));
		ShiftX = FEncode(FString::Printf(TEXT("%f"),X));
		ShiftY = FEncode(FString::Printf(TEXT("%f"),Y));
		Flag = 0;
	}///
	//
	FSafeVector3D(const FVector &Input) {
		Internal = FString();
		TrueX = FEncode(FString::Printf(TEXT("%f"),Input.X));
		TrueY = FEncode(FString::Printf(TEXT("%f"),Input.Y));
		ShiftX = FEncode(FString::Printf(TEXT("%f"),Input.X));
		ShiftY = FEncode(FString::Printf(TEXT("%f"),Input.Y));
		Flag = 0;
	}///
	//
	FSafeVector3D(const FString &Key, const FVector &Input) {
		Internal = Key;
		TrueX = FEncode(Key,FString::Printf(TEXT("%f"),Input.X));
		TrueY = FEncode(Key,FString::Printf(TEXT("%f"),Input.Y));
		ShiftX = FEncode(Key,FString::Printf(TEXT("%f"),Input.X));
		ShiftY = FEncode(Key,FString::Printf(TEXT("%f"),Input.Y));
		Flag = 0;
	}///
	//
	////////////////////////////////////////////////////////////
	/// Operators
	//
	FORCEINLINE FSafeVector3D &operator = (const FSafeVector3D &V) {
		Internal = V.Internal;
		ShiftX = V.ShiftX;
		ShiftY = V.ShiftY;
		TrueX = V.TrueX;
		TrueY = V.TrueY;
		Flag = V.Flag;
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeVector3D &operator = (const FVector &V) {
		SetValue(V); return *this;
	}///
	//
	FORCEINLINE bool operator == (const FSafeVector3D &V) const {
		return (GetValue() == V.GetValue());
	}///
	//
	FORCEINLINE bool operator != (const FSafeVector3D &V) const {
		return (GetValue() != V.GetValue());
	}///
	//
	FORCEINLINE bool operator > (const FSafeVector3D &V) const {
		return (GetValue().Size() > V.GetValue().Size());
	}///
	//
	FORCEINLINE bool operator < (const FSafeVector3D &V) const {
		return (GetValue().Size() < V.GetValue().Size());
	}///
	//
	FORCEINLINE bool operator >= (const FSafeVector3D &V) const {
		return (GetValue().Size() >= V.GetValue().Size());
	}///
	//
	FORCEINLINE bool operator <= (const FSafeVector3D &V) const {
		return (GetValue().Size() <= V.GetValue().Size());
	}///
	//
	FORCEINLINE FSafeVector3D operator + (const FSafeVector3D &V) const {
		return (GetValue() + V.GetValue());
	}///
	//
	FORCEINLINE FSafeVector3D operator - (const FSafeVector3D &V) const {
		return (GetValue() - V.GetValue());
	}///
	//
	FORCEINLINE FSafeVector3D operator * (const FSafeVector3D &V) const {
		return (GetValue() * V.GetValue());
	}///
	//
	FORCEINLINE FSafeVector3D operator / (const FSafeVector3D &V) const {
		return (GetValue() / V.GetValue());
	}///
	//
	FORCEINLINE bool operator == (const FVector &V) const {
		return (GetValue() == V);
	}///
	//
	FORCEINLINE bool operator != (const FVector &V) const {
		return (GetValue() != V);
	}///
	//
	FORCEINLINE bool operator > (const FVector &V) const {
		return (GetValue().Size() > V.Size());
	}///
	//
	FORCEINLINE bool operator < (const FVector &V) const {
		return (GetValue().Size() < V.Size());
	}///
	//
	FORCEINLINE bool operator >= (const FVector &V) const {
		return (GetValue().Size() >= V.Size());
	}///
	//
	FORCEINLINE bool operator <= (const FVector &V) const {
		return (GetValue().Size() <= V.Size());
	}///
	//
	FORCEINLINE FSafeVector3D operator + (const FVector &V) const {
		return FSafeVector3D(GetValue() + V);
	}///
	//
	FORCEINLINE FSafeVector3D operator - (const FVector &V) const {
		return FSafeVector3D(GetValue() - V);
	}///
	//
	FORCEINLINE FSafeVector3D operator * (const FVector &V) const {
		return FSafeVector3D(GetValue() * V);
	}///
	//
	FORCEINLINE FSafeVector3D operator / (const FVector &V) const {
		return FSafeVector3D(GetValue() / V);
	}///
	//
	FORCEINLINE FSafeVector3D &operator += (const FSafeVector3D &V) {
		const FVector V3D = (GetValue() + V.GetValue());
		SetValue(V3D);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeVector3D &operator -= (const FSafeVector3D &V) {
		const FVector V3D = (GetValue() - V.GetValue());
		SetValue(V3D);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeVector3D operator += (const FVector &V) {
		const FVector V3D = (GetValue() + V);
		SetValue(V3D);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeVector3D operator -= (const FVector &V) {
		const FVector V3D = (GetValue() - V);
		SetValue(V3D);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeVector3D operator ++ (int) {
		const FSafeVector3D SV = *this; (++ *this);
		//
		return SV;
	}///
	//
	FORCEINLINE FSafeVector3D operator -- (int) {
		const FSafeVector3D SV = *this; (-- *this);
		//
		return SV;
	}///
	//
	FORCEINLINE FSafeVector3D &operator ++ () {
		const FVector V3D = GetValue();
		const FVector V = FVector(V3D.X+1.f,V3D.Y+1.f,V3D.Z+1.f);
		SetValue(V);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeVector3D &operator -- () {
		const FVector V3D = GetValue();
		const FVector V = FVector(V3D.X-1.f,V3D.Y-1.f,V3D.Z-1.f);
		SetValue(V);
		//
		return *this;
	}///
	//
	FORCEINLINE FArchive &operator << (FArchive &AR) {
		AR << Internal;
		AR << ShiftX;
		AR << ShiftY;
		AR << TrueX;
		AR << TrueY;
		AR << Flag;
		//
		return AR;
	}///
	//
	friend FORCEINLINE uint32 GetTypeHash(const FSafeVector3D &V) {
		return FCrc::MemCrc32(&V,sizeof(FSafeVector3D));
	}///
};

/** Safe Color Property;
 Use this data format to store sensible Linear Color values you need protected against memory hackers. */
USTRUCT(BlueprintType)
struct SCUE4_API FSafeColor {
	GENERATED_USTRUCT_BODY()
private:
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString Internal;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString TrueR;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString TrueG;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString TrueB;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString TrueA;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString ShiftR;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString ShiftG;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString ShiftB;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString ShiftA;
	//
	UPROPERTY(SaveGame)
	uint8 Flag;
public:
	////////////////////////////////////////////////////////////
	/// Accessors
	//
	void SetKey(const FString &Key) {
		Internal = Key;
	}///
	//
	const FLinearColor GetValue() const {
		if (!Internal.IsEmpty()) {return GetValue(Internal);} else {
			switch (Flag) {
				case 0:
					return FLinearColor(FCString::Atof(*FDecode(TrueR)),FCString::Atof(*FDecode(TrueG)),FCString::Atof(*FDecode(TrueB)),FCString::Atof(*FDecode(TrueA)));
				break;
				case 1:
					return FLinearColor(FCString::Atof(*FDecode(ShiftR)),FCString::Atof(*FDecode(ShiftG)),FCString::Atof(*FDecode(ShiftB)),FCString::Atof(*FDecode(ShiftA)));
				break;
			default:
				return FLinearColor::Black;
			}///
		}///
	}///
	//
	const FLinearColor GetValue(const FString &Key) const {
		switch (Flag) {
			case 0:
				return FLinearColor(FCString::Atof(*FDecode(Key,TrueR)),FCString::Atof(*FDecode(Key,TrueG)),FCString::Atof(*FDecode(Key,TrueB)),FCString::Atof(*FDecode(Key,TrueA)));
			break;
			case 1:
				return FLinearColor::FLinearColor(FCString::Atof(*FDecode(Key,ShiftR)),FCString::Atof(*FDecode(Key,ShiftG)),FCString::Atof(*FDecode(Key,ShiftB)),FCString::Atof(*FDecode(Key,ShiftA)));
			break;
		default:
			return FLinearColor::Black;
		}///
	}///
	//
	void SetValue(const FLinearColor &Input) {
		if (!Internal.IsEmpty()) {SetValue(Internal,Input);} else {
			switch (Flag) {
				case 0:
					Flag = 1;
					ShiftR = FEncode(FString::Printf(TEXT("%f"),Input.R));
					ShiftG = FEncode(FString::Printf(TEXT("%f"),Input.G));
					ShiftB = FEncode(FString::Printf(TEXT("%f"),Input.B));
					ShiftA = FEncode(FString::Printf(TEXT("%f"),Input.A));
					TrueR.Empty(); TrueG.Empty(); TrueB.Empty(); TrueA.Empty();
				case 1:
					Flag = 0;
					TrueR = FEncode(FString::Printf(TEXT("%f"),Input.R));
					TrueG = FEncode(FString::Printf(TEXT("%f"),Input.G));
					TrueB = FEncode(FString::Printf(TEXT("%f"),Input.B));
					TrueA = FEncode(FString::Printf(TEXT("%f"),Input.A));
					ShiftR.Empty(); ShiftG.Empty(); ShiftB.Empty(); ShiftA.Empty();
	} Internal=ASCII_KEY;}}
	//
	void SetValue(const FString &Key, const FLinearColor &Input) {
		switch (Flag) {
			case 0:
				Flag = 1;
				ShiftR = FEncode(Key,FString::Printf(TEXT("%f"),Input.R));
				ShiftG = FEncode(Key,FString::Printf(TEXT("%f"),Input.G));
				ShiftB = FEncode(Key,FString::Printf(TEXT("%f"),Input.B));
				ShiftA = FEncode(Key,FString::Printf(TEXT("%f"),Input.A));
				TrueR.Empty(); TrueG.Empty(); TrueB.Empty(); TrueA.Empty();
			case 1:
				Flag = 0;
				TrueR = FEncode(Key,FString::Printf(TEXT("%f"),Input.R));
				TrueG = FEncode(Key,FString::Printf(TEXT("%f"),Input.G));
				TrueB = FEncode(Key,FString::Printf(TEXT("%f"),Input.B));
				TrueA = FEncode(Key,FString::Printf(TEXT("%f"),Input.A));
				ShiftR.Empty(); ShiftG.Empty(); ShiftB.Empty(); ShiftA.Empty();
	} Internal=Key;}
	//
	////////////////////////////////////////////////////////////
	/// Constructors
	//
	FSafeColor() {
		Internal = FString();
		TrueR = TEXT("");
		TrueG = TEXT("");
		TrueB = TEXT("");
		TrueA = TEXT("");
		ShiftR = TEXT("");
		ShiftG = TEXT("");
		ShiftB = TEXT("");
		ShiftA = TEXT("");
		Flag = 0;
	}///
	//
	FSafeColor(const FLinearColor Input) {
		Internal = FString();
		TrueR = FEncode(FString::Printf(TEXT("%f"),Input.R));
		TrueG = FEncode(FString::Printf(TEXT("%f"),Input.G));
		TrueB = FEncode(FString::Printf(TEXT("%f"),Input.B));
		TrueA = FEncode(FString::Printf(TEXT("%f"),Input.A));
		ShiftR = FEncode(FString::Printf(TEXT("%f"),Input.R));
		ShiftG = FEncode(FString::Printf(TEXT("%f"),Input.G));
		ShiftB = FEncode(FString::Printf(TEXT("%f"),Input.B));
		ShiftA = FEncode(FString::Printf(TEXT("%f"),Input.A));
		Flag = 0;
	}///
	//
	FSafeColor(const FString &Key, const FLinearColor Input) {
		Internal = Key;
		TrueR = FEncode(Key,FString::Printf(TEXT("%f"),Input.R));
		TrueG = FEncode(Key,FString::Printf(TEXT("%f"),Input.G));
		TrueB = FEncode(Key,FString::Printf(TEXT("%f"),Input.B));
		TrueA = FEncode(Key,FString::Printf(TEXT("%f"),Input.A));
		ShiftR = FEncode(Key,FString::Printf(TEXT("%f"),Input.R));
		ShiftG = FEncode(Key,FString::Printf(TEXT("%f"),Input.G));
		ShiftB = FEncode(Key,FString::Printf(TEXT("%f"),Input.B));
		ShiftA = FEncode(Key,FString::Printf(TEXT("%f"),Input.A));
		Flag = 0;
	}///
	//
	////////////////////////////////////////////////////////////
	/// Operators
	//
	FORCEINLINE FSafeColor &operator = (const FSafeColor &C) {
		Internal = C.Internal;
		ShiftR = C.ShiftR;
		ShiftG = C.ShiftG;
		ShiftB = C.ShiftB;
		ShiftA = C.ShiftA;
		TrueR = C.TrueR;
		TrueG = C.TrueG;
		TrueB = C.TrueB;
		TrueA = C.TrueA;
		Flag = C.Flag;
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeColor &operator = (const FLinearColor &C) {
		SetValue(C); return *this;
	}///
	//
	FORCEINLINE bool operator == (const FSafeColor &C) const {
		return (GetValue() == C.GetValue());
	}///
	//
	FORCEINLINE bool operator != (const FSafeColor &C) const {
		return (GetValue() != C.GetValue());
	}///
	//
	FORCEINLINE FSafeColor operator + (const FSafeColor &C) const {
		return (GetValue() + C.GetValue());
	}///
	//
	FORCEINLINE FSafeColor operator - (const FSafeColor &C) const {
		return (GetValue() - C.GetValue());
	}///
	//
	FORCEINLINE FSafeColor operator * (const FSafeColor &C) const {
		return (GetValue() * C.GetValue());
	}///
	//
	FORCEINLINE FSafeColor operator / (const FSafeColor &C) const {
		return (GetValue() / C.GetValue());
	}///
	//
	FORCEINLINE bool operator == (const FLinearColor &C) const {
		return (GetValue() == C);
	}///
	//
	FORCEINLINE bool operator != (const FLinearColor &C) const {
		return (GetValue() != C);
	}///
	//
	FORCEINLINE FSafeColor operator + (const FLinearColor &C) const {
		return FSafeColor(GetValue() + C);
	}///
	//
	FORCEINLINE FSafeColor operator - (const FLinearColor &C) const {
		return FSafeColor(GetValue() - C);
	}///
	//
	FORCEINLINE FSafeColor operator * (const FLinearColor &C) const {
		return FSafeColor(GetValue() * C);
	}///
	//
	FORCEINLINE FSafeColor operator / (const FLinearColor &C) const {
		return FSafeColor(GetValue() / C);
	}///
	//
	FORCEINLINE FSafeColor &operator += (const FSafeColor &C) {
		const FLinearColor SC = (GetValue() + C.GetValue());
		SetValue(SC);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeColor &operator -= (const FSafeColor &C) {
		const FLinearColor SC = (GetValue() - C.GetValue());
		SetValue(SC);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeColor operator ++ (int) {
		const FSafeColor SC = *this; (++ *this);
		//
		return SC;
	}///
	//
	FORCEINLINE FSafeColor operator -- (int) {
		const FSafeColor SC = *this; (-- *this);
		//
		return SC;
	}///
	//
	FORCEINLINE FSafeColor &operator ++ () {
		const FLinearColor L = GetValue();
		const FLinearColor C = FLinearColor(L.R+1.f,L.G+1.f,L.B+1.f,L.A+1.f);
		SetValue(C);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeColor &operator -- () {
		const FLinearColor L = GetValue();
		const FLinearColor C = FLinearColor(L.R-1.f,L.G-1.f,L.B-1.f,L.A-1.f);
		SetValue(C);
		//
		return *this;
	}///
	//
	FORCEINLINE FArchive &operator << (FArchive &AR) {
		AR << Internal;
		AR << ShiftR;
		AR << ShiftG;
		AR << ShiftB;
		AR << ShiftA;
		AR << TrueR;
		AR << TrueG;
		AR << TrueB;
		AR << TrueA;
		AR << Flag;
		//
		return AR;
	}///
	//
	friend FORCEINLINE uint32 GetTypeHash(const FSafeColor &C) {
		return FCrc::MemCrc32(&C,sizeof(FSafeColor));
	}///
};

/** Safe Rotator Property;
 Use this data format to store sensible Rotator values you need protected against memory hackers. */
USTRUCT(BlueprintType)
struct SCUE4_API FSafeRotator {
	GENERATED_USTRUCT_BODY()
private:
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString Internal;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString TrueX;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString TrueY;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString TrueZ;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString ShiftX;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString ShiftY;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FString ShiftZ;
	//
	UPROPERTY(SaveGame)
	uint8 Flag;
public:
	////////////////////////////////////////////////////////////
	/// Accessors
	//
	void SetKey(const FString &Key) {
		Internal = Key;
	}///
	//
	const FRotator GetValue() const {
		if (!Internal.IsEmpty()) {return GetValue(Internal);} else {
			switch (Flag) {
				case 0:
					return FRotator::FRotator(FCString::Atof(*FDecode(TrueX)),FCString::Atof(*FDecode(TrueY)),FCString::Atof(*FDecode(TrueZ)));
				break;
				case 1:
					return FRotator::FRotator(FCString::Atof(*FDecode(ShiftX)),FCString::Atof(*FDecode(ShiftY)),FCString::Atof(*FDecode(ShiftZ)));
				break;
			default:
				return FRotator::ZeroRotator;
			}///
		}///
	}///
	//
	const FRotator GetValue(const FString &Key) const {
		switch (Flag) {
			case 0:
				return FRotator::FRotator(FCString::Atof(*FDecode(Key,TrueX)),FCString::Atof(*FDecode(Key,TrueY)),FCString::Atof(*FDecode(Key,TrueZ)));
			case 1:
				return FRotator::FRotator(FCString::Atof(*FDecode(Key,ShiftX)),FCString::Atof(*FDecode(Key,ShiftY)),FCString::Atof(*FDecode(Key,ShiftZ)));
		default:
			return FRotator::ZeroRotator;
		}///
	}///
	//
	void SetValue(const FRotator &Input) {
		if (!Internal.IsEmpty()) {SetValue(Internal,Input);} else {
			switch (Flag) {
				case 0:
				{
					Flag = 1;
					ShiftX = FEncode(FString::Printf(TEXT("%f"),Input.Pitch));
					ShiftY = FEncode(FString::Printf(TEXT("%f"),Input.Yaw));
					ShiftZ = FEncode(FString::Printf(TEXT("%f"),Input.Roll));
					TrueX.Empty(); TrueY.Empty(); TrueZ.Empty();
				} break;
				case 1:
				{
					Flag = 0;
					TrueX = FEncode(FString::Printf(TEXT("%f"),Input.Pitch));
					TrueY = FEncode(FString::Printf(TEXT("%f"),Input.Yaw));
					TrueZ = FEncode(FString::Printf(TEXT("%f"),Input.Roll));
					ShiftX.Empty(); ShiftY.Empty(); ShiftZ.Empty();
				} break;
	} Internal=ASCII_KEY;}}
	//
	void SetValue(const FString &Key, const FRotator &Input) {
		switch (Flag) {
			case 0:
			{
				Flag = 1;
				ShiftX = FEncode(Key,FString::Printf(TEXT("%f"),Input.Pitch));
				ShiftY = FEncode(Key,FString::Printf(TEXT("%f"),Input.Yaw));
				ShiftZ = FEncode(Key,FString::Printf(TEXT("%f"),Input.Roll));
				TrueX.Empty(); TrueY.Empty(); TrueZ.Empty();
			} break;
			case 1:
			{
				Flag = 0;
				TrueX = FEncode(Key,FString::Printf(TEXT("%f"),Input.Pitch));
				TrueY = FEncode(Key,FString::Printf(TEXT("%f"),Input.Yaw));
				TrueZ = FEncode(Key,FString::Printf(TEXT("%f"),Input.Roll));
				ShiftX.Empty(); ShiftY.Empty(); ShiftZ.Empty();
			} break;
	} Internal=Key;}
	//
	////////////////////////////////////////////////////////////
	/// Constructors
	//
	FSafeRotator() {
		Internal = FString();
		TrueX = TEXT("");
		TrueY = TEXT("");
		TrueZ = TEXT("");
		ShiftX = TEXT("");
		ShiftY = TEXT("");
		ShiftZ = TEXT("");
		Flag = 0;
	}///
	//
	FSafeRotator(const float &Pitch, const float &Yaw, const float &Roll) {
		Internal = FString();
		TrueX = FEncode(FString::Printf(TEXT("%f"),Pitch));
		TrueY = FEncode(FString::Printf(TEXT("%f"),Yaw));
		TrueZ = FEncode(FString::Printf(TEXT("%f"),Roll));
		ShiftX = FEncode(FString::Printf(TEXT("%f"),Pitch));
		ShiftY = FEncode(FString::Printf(TEXT("%f"),Yaw));
		ShiftZ = FEncode(FString::Printf(TEXT("%f"),Roll));
		Flag = 0;
	}///
	//
	FSafeRotator(const FRotator &Input) {
		Internal = FString();
		TrueX = FEncode(FString::Printf(TEXT("%f"),Input.Pitch));
		TrueY = FEncode(FString::Printf(TEXT("%f"),Input.Yaw));
		TrueZ = FEncode(FString::Printf(TEXT("%f"),Input.Roll));
		ShiftX = FEncode(FString::Printf(TEXT("%f"),Input.Pitch));
		ShiftY = FEncode(FString::Printf(TEXT("%f"),Input.Yaw));
		ShiftZ = FEncode(FString::Printf(TEXT("%f"),Input.Roll));
		Flag = 0;
	}///
	//
	FSafeRotator(const FString &Key, const FRotator &Input) {
		Internal = Key;
		TrueX = FEncode(Key,FString::Printf(TEXT("%f"),Input.Pitch));
		TrueY = FEncode(Key,FString::Printf(TEXT("%f"),Input.Yaw));
		TrueZ = FEncode(Key,FString::Printf(TEXT("%f"),Input.Roll));
		ShiftX = FEncode(Key,FString::Printf(TEXT("%f"),Input.Pitch));
		ShiftY = FEncode(Key,FString::Printf(TEXT("%f"),Input.Yaw));
		ShiftZ = FEncode(Key,FString::Printf(TEXT("%f"),Input.Roll));
		Flag = 0;
	}//
	//
	////////////////////////////////////////////////////////////
	/// Operators
	//
	FORCEINLINE FSafeRotator &operator = (const FSafeRotator &R) {
		Internal = R.Internal;
		TrueX = R.TrueX; TrueY = R.TrueY; TrueZ = R.TrueZ;
		ShiftX = R.ShiftX; ShiftY = R.ShiftY; ShiftZ = R.ShiftZ;
		Flag = R.Flag;
		return *this;
	}//
	//
	FORCEINLINE FSafeRotator &operator = (const FRotator &R) {
		SetValue(R); return *this;
	}///
	//
	FORCEINLINE bool operator == (const FSafeRotator &R) const {
		return (GetValue() == R.GetValue());
	}///
	//
	FORCEINLINE bool operator != (const FSafeRotator &R) const {
		return (GetValue() != R.GetValue());
	}///
	//
	FORCEINLINE bool operator > (const FSafeRotator &R) const {
		return (GetValue().Vector().Size() > R.GetValue().Vector().Size());
	}///
	//
	FORCEINLINE bool operator < (const FSafeRotator &R) const {
		return (GetValue().Vector().Size() < R.GetValue().Vector().Size());
	}///
	//
	FORCEINLINE bool operator >= (const FSafeRotator &R) const {
		return (GetValue().Vector().Size() >= R.GetValue().Vector().Size());
	}///
	//
	FORCEINLINE bool operator <= (const FSafeRotator &R) const {
		return (GetValue().Vector().Size() <= R.GetValue().Vector().Size());
	}///
	//
	FORCEINLINE FSafeRotator operator + (const FSafeRotator &R) const {
		return (GetValue() + R.GetValue());
	}///
	//
	FORCEINLINE FSafeRotator operator - (const FSafeRotator &R) const {
		return (GetValue() - R.GetValue());
	}///
	//
	FORCEINLINE bool operator == (const FRotator &R) const {
		return (GetValue() == R);
	}///
	//
	FORCEINLINE bool operator != (const FRotator &R) const {
		return (GetValue() != R);
	}///
	//
	FORCEINLINE bool operator > (const FRotator &R) const {
		return (GetValue().Vector().Size() > R.Vector().Size());
	}///
	//
	FORCEINLINE bool operator < (const FRotator &R) const {
		return (GetValue().Vector().Size() < R.Vector().Size());
	}///
	//
	FORCEINLINE bool operator >= (const FRotator &R) const {
		return (GetValue().Vector().Size() >= R.Vector().Size());
	}///
	//
	FORCEINLINE bool operator <= (const FRotator &R) const {
		return (GetValue().Vector().Size() <= R.Vector().Size());
	}///
	//
	FORCEINLINE FSafeRotator operator + (const FRotator &R) const {
		return FSafeRotator(GetValue() + R);
	}///
	//
	FORCEINLINE FSafeRotator operator - (const FRotator &R) const {
		return FSafeRotator(GetValue() - R);
	}///
	//
	FORCEINLINE FSafeRotator &operator += (const FSafeRotator &R) {
		const FRotator SR = (GetValue() + R.GetValue());
		SetValue(SR);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeRotator &operator -= (const FSafeRotator &R) {
		const FRotator SR = (GetValue() - R.GetValue());
		SetValue(SR);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeRotator operator += (const FRotator &R) {
		const FRotator SR = (GetValue() + R);
		SetValue(SR);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeRotator operator -= (const FRotator &R) {
		const FRotator SR = (GetValue() - R);
		SetValue(SR);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeRotator operator ++ (int) {
		const FSafeRotator SR = *this; (++ *this);
		//
		return SR;
	}///
	//
	FORCEINLINE FSafeRotator operator -- (int) {
		const FSafeRotator SR = *this; (-- *this);
		//
		return SR;
	}///
	//
	FORCEINLINE FSafeRotator &operator ++ () {
		const FRotator SR = GetValue();
		const FRotator R = FRotator(SR.Pitch+1.f,SR.Yaw+1.f,SR.Roll+1.f);
		SetValue(R);
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeRotator &operator -- () {
		const FRotator SR = GetValue();
		const FRotator R = FRotator(SR.Pitch-1.f,SR.Yaw-1.f,SR.Roll-1.f);
		SetValue(R);
		//
		return *this;
	}///
	//
	FORCEINLINE FArchive &operator << (FArchive &AR) {
		AR << Internal;
		AR << ShiftX;
		AR << ShiftY;
		AR << ShiftZ;
		AR << TrueX;
		AR << TrueY;
		AR << TrueZ;
		AR << Flag;
		//
		return AR;
	}///
	//
	friend FORCEINLINE uint32 GetTypeHash(const FSafeRotator &R) {
		return FCrc::MemCrc32(&R,sizeof(FSafeRotator));
	}///
};

/** Safe Transform Property;
 Use this data format to store sensible Transform values you need protected against memory hackers. */
USTRUCT(BlueprintType)
struct SCUE4_API FSafeTransform {
	GENERATED_USTRUCT_BODY()
private:
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FSafeVector3D Scale;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FSafeVector3D Position;
	//
	UPROPERTY(Category="Security", VisibleAnywhere, SaveGame)
	FSafeRotator Rotation;
public:
	////////////////////////////////////////////////////////////
	/// Accessors
	//
	const FTransform GetValue() const {
		return FTransform(Rotation.GetValue(),Position.GetValue(),Scale.GetValue());
	}///
	//
	const FTransform GetValue(const FString &Key) const {
		return FTransform(Rotation.GetValue(Key),Position.GetValue(Key),Scale.GetValue(Key));
	}///
	//
	void SetValue(const FTransform &Input) {
		Rotation.SetValue(Input.GetRotation().Rotator());
		Position.SetValue(Input.GetLocation());
		Scale.SetValue(Input.GetScale3D());
	}///
	//
	void SetValue(const FString &Key, const FTransform &Input) {
		Rotation.SetValue(Key,Input.GetRotation().Rotator());
		Position.SetValue(Key,Input.GetLocation());
		Scale.SetValue(Key,Input.GetScale3D());
	}///
	//
	////////////////////////////////////////////////////////////
	/// Constructors
	//
	FSafeTransform() {
		Scale = FSafeVector3D::FSafeVector3D();
		Rotation = FSafeRotator::FSafeRotator();
		Position = FSafeVector3D::FSafeVector3D();
	}///
	//
	FSafeTransform(const FTransform &Input) {
		Scale = FSafeVector3D::FSafeVector3D(Input.GetScale3D());
		Rotation = FSafeRotator::FSafeRotator(Input.Rotator());
		Position = FSafeVector3D::FSafeVector3D(Input.GetLocation());
	}///
	//
	FSafeTransform(const FString &Key, const FTransform &Input) {
		Scale = FSafeVector3D::FSafeVector3D(Key,Input.GetScale3D());
		Rotation = FSafeRotator::FSafeRotator(Key,Input.Rotator());
		Position = FSafeVector3D::FSafeVector3D(Key,Input.GetLocation());
	}///
	//
	////////////////////////////////////////////////////////////
	/// Operators
	//
	FORCEINLINE FSafeTransform &operator = (const FSafeTransform &T) {
		Position = T.Position;
		Rotation = T.Rotation;
		Scale = T.Scale;
		//
		return *this;
	}///
	//
	FORCEINLINE FSafeTransform &operator = (const FTransform &T) {
		Position = T.GetLocation();
		Rotation = T.Rotator();
		Scale = T.GetScale3D();
		//
		return *this;
	}///
	//
	FORCEINLINE bool operator == (const FSafeTransform &T) const {
		return (
			Scale == T.Scale &&
			Position == T.Position &&
			Rotation == T.Rotation
		);///
	}///
	//
	FORCEINLINE bool operator != (const FSafeTransform &T) const {
		return (
			Scale != T.Scale ||
			Position != T.Position ||
			Rotation != T.Rotation
		);///
	}///
	//
	FORCEINLINE bool operator == (const FTransform &T) const {
		return (
			Scale.GetValue() == T.GetScale3D() &&
			Position.GetValue() == T.GetLocation() &&
			Rotation.GetValue().Vector() == T.GetRotation().Vector()
		);///
	}///
	//
	FORCEINLINE bool operator != (const FTransform &T) const {
		return (
			Scale.GetValue() != T.GetScale3D() ||
			Position.GetValue() != T.GetLocation() ||
			Rotation.GetValue().Vector() != T.GetRotation().Vector()
		);///
	}///
	//
	friend FORCEINLINE uint32 GetTypeHash(const FSafeTransform &T) {
		return FCrc::MemCrc32(&T,sizeof(FSafeTransform));
	}///
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Game Instance:: Runs anti-cheat, anti-debugging methods

/// Safe Game Instance; Secure-Client is a C++ Plugin designed to provide anti-cheat capability to your games.
/// Other custom Game Instance classes, when used, should have this class as a parent for effective use.
UCLASS(ClassGroup = Security, Category="Security", hideCategories = (Activation, Socket, Tick, Thumbnail), meta = (BlueprintType, DisplayName = "{S} Safe Game Instance", ShortTooltip = "{S} Safe Game Instance Class. Check documentation for more information."))
class SCUE4_API USafeGameInstance : public UGameInstance {
	GENERATED_BODY()
public:
	/* Sets visibility of Game-Guard console window.
	Console is only visible in Editor Mode, on packaged games it's always hidden. */
	UPROPERTY(Category="Security", EditAnywhere, meta = (AllowPrivateAccess = "true"))
	bool HideGameGuard = true;
	//
	/* To increase defenses against memory readers, uncheck this option when you're ready to
	ship final standalone game build. If disabled, option won't allow Debuggers attach to the game process. */
	UPROPERTY(Category="Security", EditAnywhere, meta = (AllowPrivateAccess = "true"))
	bool AllowDebugging = true;
	//
	/** Interval, in seconds, for Internal Process Scanner to be automatically invoked. */
	UPROPERTY(Category="Security", EditAnywhere, meta = (AllowPrivateAccess = "true", ClampMin = "10", ClampMax = "1000", UIMin = "10", UIMax = "1000"))
	uint32 ScannerInterval = 30.f;
	//
	/* Sets visibility of Game-Guard console window.
	Console is only visible in Editor Mode, on packaged games it's always hidden. */
	UFUNCTION(Category="Security", BlueprintCallable, meta = (DisplayName = "{S}:: Hide Game-Guard Console", Keywords = "Security Guard"))
	void HideGameGuardConsole(bool Set);
	//
	//
	FProcHandle GuardProcess;
	const TCHAR* Guardx86 = TEXT("SCUE4x86.exe");
	const TCHAR* Guardx64 = TEXT("SCUE4x64.exe");
	const TCHAR* Editor = TEXT("EDITOR");
	//
	const TCHAR* Game = FApp::GetProjectName();
	//
	FTimerHandle THInvokeGuard;
	FTimerHandle THScanner;
	uint32 GuardPID = 0;
	//
	//
	virtual void Init() override {
		#if PLATFORM_WINDOWS
		const FTimerDelegate TimerScanProcesses = FTimerDelegate::CreateUObject(this,&USafeGameInstance::ScanProcesses);
		const FTimerDelegate TimerInvokeGuard = FTimerDelegate::CreateUObject(this,&USafeGameInstance::GameGuard);
		GetTimerManager().SetTimer(THScanner,TimerScanProcesses,ScannerInterval,true);
		GetTimerManager().SetTimer(THInvokeGuard,TimerInvokeGuard,5,true);
		InvokeGuard();
		#endif
		//
		Super::Init();
	}///
	//
	virtual void Shutdown() override {
		#if PLATFORM_WINDOWS
		FPlatformProcess::TerminateProc(GuardProcess);
		#endif
		Super::Shutdown();
	}///
	//
	void InvokeGuard() {
	#if PLATFORM_WINDOWS
		#if WITH_EDITOR
		//GuardProcess = FPlatformProcess::CreateProc(*FPaths::Combine(*FPaths::EnginePluginsDir(),TEXT("Marketplace/SCUE4/Source/ThirdParty/x64"),Guardx64),Editor,false,HideGameGuard,HideGameGuard,&GuardPID,0,nullptr,nullptr);
		GuardProcess = FPlatformProcess::CreateProc(*FPaths::Combine(*FPaths::ProjectPluginsDir(),TEXT("SCUE4/Source/ThirdParty/x64"),Guardx64),Editor,false,HideGameGuard,HideGameGuard,&GuardPID,0,nullptr,nullptr);
		#else
			#if !PLATFORM_64BITS
			//if (!FPaths::FileExists(FPaths::Combine(*FPaths::EnginePluginsDir(),TEXT("Marketplace/SCUE4/Source/ThirdParty/x86/"),Guardx86))) {FGenericPlatformMisc::RequestExit(false);}
			//GuardProcess = FPlatformProcess::CreateProc(*FPaths::Combine(*FPaths::EnginePluginsDir(),TEXT("Marketplace/SCUE4/Source/ThirdParty/x86/"),Guardx86),Game,false,true,true,&GuardPID,0,nullptr,nullptr);
			if (!FPaths::FileExists(FPaths::Combine(*FPaths::ProjectPluginsDir(),TEXT("SCUE4/Source/ThirdParty/x86/"),Guardx86))) {FGenericPlatformMisc::RequestExit(false);}
			GuardProcess = FPlatformProcess::CreateProc(*FPaths::Combine(*FPaths::ProjectPluginsDir(),TEXT("SCUE4/Source/ThirdParty/x86/"),Guardx86),Game,false,true,true,&GuardPID,0,nullptr,nullptr);
			#else
			//if (!FPaths::FileExists(FPaths::Combine(*FPaths::EnginePluginsDir(),TEXT("Marketplace/SCUE4/Source/ThirdParty/x64/"),Guardx64))) {FGenericPlatformMisc::RequestExit(false);}
			//GuardProcess = FPlatformProcess::CreateProc(*FPaths::Combine(*FPaths::EnginePluginsDir(),TEXT("Marketplace/SCUE4/Source/ThirdParty/x64/"),Guardx64),Game,false,true,true,&GuardPID,0,nullptr,nullptr);
			if (!FPaths::FileExists(FPaths::Combine(*FPaths::ProjectPluginsDir(),TEXT("SCUE4/Source/ThirdParty/x64/"),Guardx64))) {FGenericPlatformMisc::RequestExit(false);}
			GuardProcess = FPlatformProcess::CreateProc(*FPaths::Combine(*FPaths::ProjectPluginsDir(),TEXT("SCUE4/Source/ThirdParty/x64/"),Guardx64),Game,false,true,true,&GuardPID,0,nullptr,nullptr);
			#endif
		#endif
	#endif
	}
	//
	void GameGuard() {
	#if PLATFORM_WINDOWS && !WITH_EDITOR
		if (!GuardProcess.IsValid() || !FPlatformProcess::IsProcRunning(GuardProcess)) {InvokeGuard();}
		if (!AllowDebugging) {if (IsDebuggerPresent() || HasDebugger() || HasThreat()) {FGenericPlatformMisc::RequestExit(false);}}
	#endif
	}
	//
	bool IsDebuggerPresent() {
	#if PLATFORM_WINDOWS && !WITH_EDITOR
		HINSTANCE Kernel = LoadLibraryEx(TEXT("kernel32.dll"),NULL,0);
		FARPROC IDebuggerPresent = GetProcAddress(Kernel,"IsDebuggerPresent");
		if(IDebuggerPresent && IDebuggerPresent()) {FreeLibrary(Kernel); return true;}
		FreeLibrary(Kernel); return false;
	#else
		return false;
	#endif
	}
	//
	FORCEINLINE bool HasDebugger() {
	#if PLATFORM_WINDOWS
		#if !WITH_EDITOR && PLATFORM_32BITS
			__try {
				__asm __emit 0xF3
				__asm __emit 0x64
				__asm __emit 0xF1
			} __except(EXCEPTION_EXECUTE_HANDLER) {
				return false;
			} return true;
		#else
			return false;
		#endif
	#else
		return false;
	#endif
	}
	//
	FORCEINLINE bool HasThreat() {
	#if PLATFORM_WINDOWS
		#if !WITH_EDITOR
		if (OpenFileMapping(FILE_MAP_READ|FILE_MAP_WRITE,false,L"CEHYPERSCANSETTINGS")!=0) {return true;}
		auto HND = FindWindowA((LPCSTR)"WinDbgFrameClass",NULL); if (HND) {return true;}
		HND = FindWindowA((LPCSTR)"WinDbgFrameClass",NULL); if (HND) {return true;}
		HND = FindWindowA((LPCSTR)"OLLYDBG",NULL); if (HND) {return true;}
		HND = FindWindowA((LPCSTR)"Window",NULL); if (HND) {return true;}
		return false;
		#endif
		return false;
	#else
		return false;
	#endif
	}
	//
	void ScanProcesses() {
	#if PLATFORM_WINDOWS
		#if !WITH_EDITOR && !WITH_SERVER_CODE
		FSCUE4_Enumerate();
		#endif
	#endif
	}
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////