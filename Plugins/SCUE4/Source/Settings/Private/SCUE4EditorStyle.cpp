//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//			Copyright 2016 (C) Bruno Xavier Leite
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "SCUE4EditorStyle.h"
#include "SCUE4EditorPrivatePCH.h"

#include "Interfaces/IPluginManager.h"
#include "Slate/SlateGameResources.h"
#include "Styling/SlateStyle.h"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define PLUGIN_BRUSH(RelativePath,...) FSlateImageBrush(Style->RootToContentDir(RelativePath,TEXT(".png")),__VA_ARGS__)

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

TSharedPtr<FSlateStyleSet> FSCUE4EditorStyle::StyleInstance = NULL;

void FSCUE4EditorStyle::Initialize() {
	if (!StyleInstance.IsValid()) {
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FSCUE4EditorStyle::Shutdown() {
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

const ISlateStyle& FSCUE4EditorStyle::Get() {
	return *StyleInstance;
}

FName FSCUE4EditorStyle::GetStyleSetName() {
	static FName StyleSetName(TEXT("SCUE4EditorStyle"));
	return StyleSetName;
}

void FSCUE4EditorStyle::ReloadTextures() {
	if (FSlateApplication::IsInitialized())	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

TSharedRef< FSlateStyleSet > FSCUE4EditorStyle::Create() {
	const FVector2D Icon16x16(16.0f,16.0f);
	const FVector2D Icon40x40(40.0f,40.0f);
	const FVector2D Icon128x128(128.0f,128.0f);
	//
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("SCUE4EditorStyle"));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin(TEXT("SCUE4"))->GetContentDir());
	//
	Style->Set("SCUE4Editor.PluginAction", new PLUGIN_BRUSH(TEXT("Icons/SCUE4_128x"),Icon40x40));
	Style->Set("ClassIcon.SafeInt", new PLUGIN_BRUSH(TEXT("Icons/Int_16x"),Icon16x16));
	Style->Set("ClassIcon.SafeBool", new PLUGIN_BRUSH(TEXT("Icons/Bool_16x"),Icon16x16));
	Style->Set("ClassIcon.SafeByte", new PLUGIN_BRUSH(TEXT("Icons/Byte_16x"),Icon16x16));
	Style->Set("ClassIcon.SafeFloat", new PLUGIN_BRUSH(TEXT("Icons/Float_16x"),Icon16x16));
	Style->Set("ClassIcon.SafeName", new PLUGIN_BRUSH(TEXT("Icons/Name_16x"),Icon16x16));
	Style->Set("ClassIcon.SafeText", new PLUGIN_BRUSH(TEXT("Icons/Text_16x"),Icon16x16));
	Style->Set("ClassIcon.SafeString", new PLUGIN_BRUSH(TEXT("Icons/String_16x"),Icon16x16));
	Style->Set("ClassIcon.SafeRotator", new PLUGIN_BRUSH(TEXT("Icons/Rotator_16x"),Icon16x16));
	Style->Set("ClassIcon.SafeColor", new PLUGIN_BRUSH(TEXT("Icons/Color_16x"),Icon16x16));
	Style->Set("ClassIcon.SafeVector2D", new PLUGIN_BRUSH(TEXT("Icons/Vector_16x"),Icon16x16));
	Style->Set("ClassIcon.SafeVector3D", new PLUGIN_BRUSH(TEXT("Icons/Vector_16x"),Icon16x16));
	Style->Set("ClassIcon.SafeVector4D", new PLUGIN_BRUSH(TEXT("Icons/Vector_16x"),Icon16x16));
	Style->Set("ClassIcon.SafeTransform", new PLUGIN_BRUSH(TEXT("Icons/Transform_16x"),Icon16x16));
	//
	return Style;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef PLUGIN_BRUSH

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////