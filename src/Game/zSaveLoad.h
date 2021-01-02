#ifndef ZSAVELOAD_H
#define ZSAVELOAD_H

#include <types.h>

struct zSaveLoadGame
{
    int8 label[64];
    int8 date[32];
    int32 progress;
    uint32 size;
    int8 thumbIconIndex;
};

extern zSaveLoadGame zSaveLoadGameTable[3];

uint32 zSaveLoad_LoadLoop();
uint32 zSaveLoad_SaveLoop();
void zSaveLoad_BuildName(int8* name_txt, int32 idx);
int32 zSaveLoadGetAutoSaveCard();
int32 zSaveLoad_getMCAccessType();
int32 zSaveLoad_getcard();
int32 zSaveLoad_getgame();
int32 zSaveLoad_getMCneeded();
int32 zSaveLoad_getMCavailable();

#endif