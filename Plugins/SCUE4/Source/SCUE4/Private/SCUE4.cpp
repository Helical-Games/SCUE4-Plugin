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

#include "SCUE4PrivatePCH.h"
#include "SCUE4.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void LOG_SC(const bool Debug,const float Duration, const FColor Color, const FString Message) {
	if (!Debug) return; UE_LOG(LogActor,Warning,TEXT("{Secure-Client}:: %s"),*Message);
	GEngine->AddOnScreenDebugMessage(-1,Duration,Color,FString::Printf(TEXT("{Secure-Client}:: %s"),*Message) );
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void USafeGameInstance::HideGameGuardConsole(bool Set) {
	this->HideGameGuard = Set;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if PLATFORM_WINDOWS
#include "AllowWindowsPlatformTypes.h"
//
static const char* SCUE4_A = "allinea";
static const char* SCUE4_B = "aqtime";
static const char* SCUE4_C = "cheat";
static const char* SCUE4_D = "codeview";
static const char* SCUE4_E = "crack";
static const char* SCUE4_F = "automaded";
static const char* SCUE4_G = "windbg";
static const char* SCUE4_H = "debugger";
static const char* SCUE4_I = "decompile";
static const char* SCUE4_J = "dotpeek";
static const char* SCUE4_K = "ollydbg";
static const char* SCUE4_L = "eclipse";
static const char* SCUE4_M = "eztest";
static const char* SCUE4_N = "fusion";
static const char* SCUE4_O = "hack";
static const char* SCUE4_P = "haxplorer";
static const char* SCUE4_Q = "injector";
static const char* SCUE4_R = "insight";
static const char* SCUE4_S = "insure";
static const char* SCUE4_T = "medicine";
static const char* SCUE4_U = "monodevelop";
static const char* SCUE4_V = "puncher";
static const char* SCUE4_W = "reflector";
static const char* SCUE4_X = "spy";
static const char* SCUE4_Y = "trainer";
static const char* SCUE4_Z = "visual studio";
//
static const char* SCUE4_AA = "turbo debugger";
static const char* SCUE4_AB = "ida pro";
static const char* SCUE4_AC = "jinx";
static const char* SCUE4_AD = "jswat";
static const char* SCUE4_AE = "lldb";
static const char* SCUE4_AF = "codelite";
static const char* SCUE4_AG = "oliver";
static const char* SCUE4_AH = "ccdebug";
static const char* SCUE4_AI = "omniscient";
static const char* SCUE4_AJ = "openpat";
static const char* SCUE4_AK = "pgdbg";
static const char* SCUE4_AL = "rational purify";
static const char* SCUE4_AM = "qt creator";
static const char* SCUE4_AN = "codeblocks";
static const char* SCUE4_AO = "memory editor";
static const char* SCUE4_AP = "softice";
static const char* SCUE4_AQ = "hookshark";
static const char* SCUE4_AR = "timemachine";
static const char* SCUE4_AS = "totalview";
static const char* SCUE4_AT = "lauterbach";
static const char* SCUE4_AU = "artmoney";
static const char* SCUE4_AV = "kdbg";
static const char* SCUE4_AW = "xdebug";
static const char* SCUE4_AX = "valgrind";
static const char* SCUE4_AY = "vb watch";
static const char* SCUE4_AZ = "x64dbg";
//
static const char* SCUE4_BA = "cff explorer";
static const char* SCUE4_BB = "slickedit";
static const char* SCUE4_BC = "affinic";
static const char* SCUE4_BD = "xpediter";
static const char* SCUE4_BE = "zerobugs";
static const char* SCUE4_BF = "innerspace";
/*static const char* SCUE4_BG = "";
static const char* SCUE4_BH = "";
static const char* SCUE4_BI = "";
static const char* SCUE4_BJ = "";
static const char* SCUE4_BK = "";
static const char* SCUE4_BL = "";
static const char* SCUE4_BM = "";
static const char* SCUE4_BN = "";
static const char* SCUE4_BO = "";
static const char* SCUE4_BP = "";
static const char* SCUE4_BQ = "";
static const char* SCUE4_BR = "";
static const char* SCUE4_BS = "";
static const char* SCUE4_BT = "";
static const char* SCUE4_BU = "";
static const char* SCUE4_BV = "";
static const char* SCUE4_BW = "";
static const char* SCUE4_BX = "";
static const char* SCUE4_BY = "";
static const char* SCUE4_BZ = "";*/
//
static const char* SCUE4_CA = "wireshark";
static const char* SCUE4_CB = "tcpdump";
static const char* SCUE4_CC = "netcat";
static const char* SCUE4_CD = "network monitor";
static const char* SCUE4_CE = "network scanner";
static const char* SCUE4_CF = "nethogs";
static const char* SCUE4_CG = "scapy";
static const char* SCUE4_CH = "cloudshark";
static const char* SCUE4_CI = "smartsniff";
static const char* SCUE4_CJ = "packetyzer";
static const char* SCUE4_CK = "iwscanner";
static const char* SCUE4_CL = "intercepter";
static const char* SCUE4_CM = "apptalk";
static const char* SCUE4_CN = "sysdig";
static const char* SCUE4_CO = "tcpflow";
static const char* SCUE4_CP = "ostinato";
static const char* SCUE4_CQ = "ethereal";
static const char* SCUE4_CR = "tcplogview";
static const char* SCUE4_CS = "languardian";
static const char* SCUE4_CT = "network diagnostic";
static const char* SCUE4_CU = "psping";
static const char* SCUE4_CV = "message analyzer";
static const char* SCUE4_CW = "microoplap";
static const char* SCUE4_CX = "appscope";
static const char* SCUE4_CY = "url helper";
static const char* SCUE4_CZ = "packet peeper";
//
static const char* SCUE4_DA = "010 editor";
static const char* SCUE4_DB = "hex edit";
static const char* SCUE4_DC = "hexinator";
static const char* SCUE4_DD = "aptedit";
static const char* SCUE4_DE = "hexplorer";
static const char* SCUE4_DF = "avihex";
static const char* SCUE4_DG = "hexeditor";
static const char* SCUE4_DH = "beav";
static const char* SCUE4_DI = "beye";
static const char* SCUE4_DJ = "binary viewer";
static const char* SCUE4_DK = "hexed";
static const char* SCUE4_DL = "cheat engine";
static const char* SCUE4_DM = "hex viewer";
static const char* SCUE4_DN = "cignus hex";
static const char* SCUE4_DO = "dhex";
static const char* SCUE4_DP = "editpad";
static const char* SCUE4_DQ = "ettercap";
static const char* SCUE4_DR = "febooti";
static const char* SCUE4_DS = "flexhex";
static const char* SCUE4_DT = "frhed";
static const char* SCUE4_DU = "ghex";
static const char* SCUE4_DV = "hedit";
static const char* SCUE4_DW = "hex-works";
static const char* SCUE4_DX = "hexcurse";
static const char* SCUE4_DY = "hexditor";
static const char* SCUE4_DZ = "hexdit";
//
static const char* SCUE4_EA = "qiew";
static const char* SCUE4_EB = "hex fiend";
static const char* SCUE4_EC = "hexit";
static const char* SCUE4_ED = "hex workshop";
static const char* SCUE4_EE = "hexprobe";
static const char* SCUE4_EF = "memory viewer";
static const char* SCUE4_EG = "ht editor";
static const char* SCUE4_EH = "synalyze";
static const char* SCUE4_EI = "hexer";
static const char* SCUE4_EJ = "turbohex";
static const char* SCUE4_EK = "ultraedit";
static const char* SCUE4_EL = "borland";
static const char* SCUE4_EM = "webhex";
static const char* SCUE4_EN = "winhex";
static const char* SCUE4_EO = "xvi32";
//
//
BOOL CALLBACK EnumWindowsProc(HWND Hwnd, LPARAM Param) {
	////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////
	char TBuffer[256]; FString SC;
	int TXT = GetWindowTextA(Hwnd,TBuffer,sizeof(TBuffer));
	FString FST = FString(ANSI_TO_TCHAR(TBuffer)).ToLower();
	////////////////////////////////////////////////////////////
	TCHAR LPS[256]; GetClassName(Hwnd,LPS,256);
	FString FSN = FString(LPS).ToLower();
	////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_A);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_B);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_C);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_D);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_E);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_F);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_G);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_H);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_I);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_J);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_K);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_L);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_M);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_N);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_O);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_P);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_Q);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_R);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_S);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_T);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_U);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_V);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_W);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_X);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_Y);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_Z);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AA);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AB);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AC);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AD);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AE);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AF);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AG);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AH);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AI);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AJ);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AK);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AL);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AM);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AN);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AO);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AP);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AQ);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AR);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AS);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AT);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AU);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AV);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AW);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AX);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AY);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_AZ);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_BA);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_BB);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_BC);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_BD);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_BE);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_BF);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	/*SC = FString(SCUE4_BG);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_BH);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_BI);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_BJ);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_BK);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_BL);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_BM);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_BN);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_BO);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_BP);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_BQ);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_BR);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_BS);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_BT);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_BU);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_BV);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_BW);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_BX);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_BY);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_BZ);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}*/
	////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CA);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CB);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CC);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CD);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CE);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CF);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CG);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CH);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CI);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CJ);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CK);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CL);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CM);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CN);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CO);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CP);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CQ);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CR);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CS);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CT);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CU);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CV);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CW);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CX);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CY);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_CZ);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DA);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DB);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DC);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DD);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DE);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DF);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DG);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DH);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DI);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DJ);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DK);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DL);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DM);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DN);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DO);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DP);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DQ);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DR);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DS);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DT);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DU);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DV);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DW);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DX);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DY);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_DZ);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_EA);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_EB);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_EC);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_ED);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_EE);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_EF);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_EG);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_EH);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_EI);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_EJ);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_EK);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_EL);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_EM);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_EN);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_EO);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	/*SC = FString(SCUE4_EP);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_EQ);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_ER);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_ES);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_ET);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}
	////////////////////////////////////////////////////////////
	SC = FString(SCUE4_EU);
	//
	if (FSN.Contains(SC)) {*(HWND*)Param = Hwnd; return FALSE;}
	if (TXT && FST.Contains(SC) && !FST.Contains(TEXT("internet")) && !FST.Contains(TEXT("edge")) && !FST.Contains(TEXT("chrome"))
	&& !FST.Contains(TEXT("firefox")) && !FST.Contains(TEXT("opera")) && !FST.Contains(TEXT("safari")) && !FST.Contains(TEXT("torch")))
	{*(HWND*)Param = Hwnd; return FALSE;}*/
	////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////
	return TRUE;
	////////////////////////////////////////////////////////////
}
//
void FSCUE4_Enumerate() {
	HWND Hwnd = NULL;
    if (!EnumWindows(EnumWindowsProc,reinterpret_cast<LPARAM>(&Hwnd))) {
	  #if UE_BUILD_SHIPPING
		char TBuffer[256];
		int TXT = GetWindowTextA(Hwnd,TBuffer,sizeof(TBuffer));
		int msgboxID = MessageBox( NULL,
			(LPCWSTR)L"Running application conflict detected; Game will close;\nPlease close conflicting software before playing.",
			(LPCWSTR)ANSI_TO_TCHAR(TBuffer),
			MB_ICONWARNING | MB_OK | MB_DEFBUTTON1
		); FGenericPlatformMisc::RequestExit(false);
	  #endif
	} else {CloseHandle(Hwnd);}
}
//
#include "HideWindowsPlatformTypes.h"
#endif

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////