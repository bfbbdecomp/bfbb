#ifndef XINI_H
#define XINI_H

#include <types.h>

struct xIniValue
{
    S8* tok;
    S8* val;
};

struct xIniSection
{
    S8* sec;
    S32 first;
    S32 count;
};

struct xIniFile
{
    S32 NumValues;
    S32 NumSections;
    xIniValue* Values;
    xIniSection* Sections;
    void* mem;
    S8 name[256];
    S8 pathname[256];
};

xIniFile* xIniParse(char* buf, S32 len);
void xIniDestroy(xIniFile* ini);
S32 xIniGetIndex(xIniFile* ini, S8* tok);
S32 xIniGetInt(xIniFile* ini, S8* tok, S32 def);
F32 xIniGetFloat(xIniFile* ini, S8* tok, F32 def);
S8* xIniGetString(xIniFile* ini, S8* tok, S8* def);

#endif
