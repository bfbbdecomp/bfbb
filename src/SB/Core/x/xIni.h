#ifndef XINI_H
#define XINI_H

#include <types.h>

struct xIniValue
{
    char* tok;
    char* val;
};

struct xIniSection
{
    char* sec;
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
    char name[256];
    char pathname[256];
};

xIniFile* xIniParse(char* buf, S32 len);
void xIniDestroy(xIniFile* ini);
S32 xIniGetIndex(xIniFile* ini, char* tok);
S32 xIniGetInt(xIniFile* ini, char* tok, S32 def);
F32 xIniGetFloat(xIniFile* ini, char* tok, F32 def);
char* xIniGetString(xIniFile* ini, char* tok, char* def);

#endif
