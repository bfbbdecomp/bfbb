#include "xIni.h"

#include <types.h>
#include <stdlib.h>

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

float32 xIniGetFloat(xIniFile* ini, int8* tok, float32 def)
{
    int32 index = xIniGetIndex(ini, tok);
    if (index == -1)
    {
        return def;
    }
    return atof(ini->Values[index].val);
}

int8* xIniGetString(xIniFile* ini, int8* tok, int8* def)
{
    int32 index = xIniGetIndex(ini, tok);
    if (index == -1)
    {
        return def;
    }
    return ini->Values[index].val;
}