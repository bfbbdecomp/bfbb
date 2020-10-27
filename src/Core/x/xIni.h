#ifndef XINI_H
#define XINI_H

#include <types.h>

struct xIniValue
{
    int8* tok;
    int8* val;
};

struct xIniSection
{
    int8* sec;
    int32 first;
    int32 count;
};

struct xIniFile
{
    int32 NumValues;
    int32 NumSections;
    xIniValue* Values;
    xIniSection* Sections;
    void* mem;
    int8 name[256];
    int8 pathname[256];
};

int32 xIniGetIndex(xIniFile* ini, int8* tok);

#endif