#include "xIni.h"

#include <types.h>

// TrimWhitespace(char*)
#pragma GLOBAL_ASM("asm/Core/x/xIni.s", "TrimWhitespace__FPc")

// xIniParse(char*,int)
#pragma GLOBAL_ASM("asm/Core/x/xIni.s", "xIniParse__FPci")

// std::strstr(char*,const char*)
#pragma GLOBAL_ASM("asm/Core/x/xIni.s", "strstr__3stdFPcPCc")

// xIniDestroy(xIniFile*)
#pragma GLOBAL_ASM("asm/Core/x/xIni.s", "xIniDestroy__FP8xIniFile")

// xIniGetIndex(xIniFile*,char*)
#pragma GLOBAL_ASM("asm/Core/x/xIni.s", "xIniGetIndex__FP8xIniFilePc")

// xIniGetInt(xIniFile*,char*,int)
#pragma GLOBAL_ASM("asm/Core/x/xIni.s", "xIniGetInt__FP8xIniFilePci")

// xIniGetFloat(xIniFile*,char*,float)
#pragma GLOBAL_ASM("asm/Core/x/xIni.s", "xIniGetFloat__FP8xIniFilePcf")

// xIniGetString(xIniFile*,char*,char*)
#pragma GLOBAL_ASM("asm/Core/x/xIni.s", "xIniGetString__FP8xIniFilePcPc")
