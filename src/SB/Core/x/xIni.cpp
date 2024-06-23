#include "xIni.h"

#include <types.h>
#include <stdlib.h>

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
