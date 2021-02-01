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

struct zSaveLoadUI
{
	uint32 entry;
	uint32 nameID;
	int8* name;
};

extern zSaveLoadUI zSaveLoadUITable[62];
extern zSaveLoadGame zSaveLoadGameTable[3];

void zSaveLoad_Tick();
void zSaveLoadInit();
void zSaveLoadGameTableInit(zSaveLoadGame* saveTable);
void zSaveLoadUITableInit(zSaveLoadUI* saveTable);
void zSaveLoad_UIEvent(int32 p1, uint32 p2);
int32 zSaveLoadCardCount();
int32 zSaveLoad_CardPromptGameSlotEmpty();

uint32 zSaveLoad_LoadLoop();
uint32 zSaveLoad_SaveLoop();
void zSaveLoad_BuildName(int8* name_txt, int32 idx);
int32 zSaveLoadGetAutoSaveCard();
int32 zSaveLoad_getMCAccessType();
int32 zSaveLoad_getcard();
int32 zSaveLoad_getgame();
int32 zSaveLoad_getMCneeded();
int32 zSaveLoad_getMCavailable();
uint32 zSaveLoad_slotIsEmpty(uint32 i);

int32 zSaveLoad_CardCheckSlotEmpty_hasGame(int32 num, int32 game);
int32 zSaveLoad_CardCheckValid(int32 cardNumber, int32 mode);
int32 zSaveLoad_CardCheckSpace(int32 cardNumber,int32 mode);
int32 zSaveLoad_CardCheckGames(int32 cardNumber,int32 mode);

int32 zSaveLoad_CardCheckGameSlot(int32 a, int32 b, int32 c);
int32 zSaveLoad_CardCheckSlotEmpty(int32 a, int32 b);
int32 zSaveLoad_CardCheckSlotOverwrite(int32 a, int32 b);


#endif