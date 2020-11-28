#ifndef ZVAR_H
#define ZVAR_H

#include <types.h>

struct zVarEntry
{
    uint32 entry;
    uint32 varNameID;
    int8* varName;
    uint32 (*varCB)(void*);
};

void zVarInit(zVarEntry* table);

#endif