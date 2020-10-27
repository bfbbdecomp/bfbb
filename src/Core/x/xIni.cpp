#include "xIni.h"

#include <types.h>
#include <CodeWarrior/string.h>

// func_80030640
#pragma GLOBAL_ASM("asm/Core/x/xIni.s", "TrimWhitespace__FPc")

// func_800306CC
#pragma GLOBAL_ASM("asm/Core/x/xIni.s", "xIniParse__FPci")

// func_800309F0
#pragma GLOBAL_ASM("asm/Core/x/xIni.s", "strstr__3stdFPcPCc")

// func_80030A10
#pragma GLOBAL_ASM("asm/Core/x/xIni.s", "xIniDestroy__FP8xIniFile")

// func_80030A60
#pragma GLOBAL_ASM("asm/Core/x/xIni.s", "xIniGetIndex__FP8xIniFilePc")

int32 xIniGetInt(xIniFile* ini, int8* tok, int32 def)
{
    int32 index = xIniGetIndex(ini, tok);
    if (index == -1)
    {
        return def;
    }
    return atoi(ini->Values[index].val);
}

// func_80030B44
#pragma GLOBAL_ASM("asm/Core/x/xIni.s", "xIniGetFloat__FP8xIniFilePcf")

// func_80030BAC
#pragma GLOBAL_ASM("asm/Core/x/xIni.s", "xIniGetString__FP8xIniFilePcPc")
