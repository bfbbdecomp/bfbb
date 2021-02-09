#ifndef ZSAVELOAD_H
#define ZSAVELOAD_H

#include <types.h>
struct st_XSAVEGAME_DATA;

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
void zSaveLoad_poll(int32);
void zSendEventToThumbIcon(uint32 toEvent);

void zSaveLoadInit();
void zSaveLoadGameTableInit(zSaveLoadGame* saveTable);
void zSaveLoadUITableInit(zSaveLoadUI* saveTable);
void zSaveLoad_UIEvent(int32 p1, uint32 p2);

void zSaveLoadSGDone(st_XSAVEGAME_DATA* data);
int32 zSaveLoad_getgame();
int32 zSaveLoad_getcard();
int32 zSaveLoad_getMCavailable();
int32 zSaveLoad_getMCneeded();
int32 zSaveLoad_getMCAccessType();
int32 zSaveLoadGetAutoSaveCard();

int32 zSaveLoadCardCount();
int32 zSaveLoad_CardPrompt(int32 cardNumber);
int32 zSaveLoad_CardPromptFormat(int32 cardNumber);
int32 zSaveLoad_CardPromptSpace(int32 cardNumber);
int32 zSaveLoad_CardPromptGames(int32 cardNumber);
int32 zSaveLoad_CardPromptGameSlotEmpty();
int32 zSaveLoad_CardPromptOverwrite();
int32 zSaveLoad_CardPromptOverwriteDamaged();
int32 zSaveLoad_ErrorPrompt(int32 cardNumber);
int32 zSaveLoad_DamagedSaveGameErrorPrompt(int32 cardNumber);
int32 zSaveLoad_CardWrongDeviceErrorPrompt(int32 cardNumber);
int32 zSaveLoad_CardDamagedErrorPrompt(int32 cardNumber);
int32 zSaveLoad_SaveDamagedErrorPrompt(int32 cardNumber);
int32 zSaveLoad_CardYankedErrorPrompt(int32 cardNumber);
int32 zSaveLoad_ErrorFormatPrompt(int32 cardNumber);
int32 zSaveLoad_ErrorFormatCardYankedPrompt(int32 cardNumber);

int32 zSaveLoad_CardCheckSlotEmpty_hasGame(int32 num, int32 game);
int32 zSaveLoad_CardCheckValid(int32 cardNumber, int32 mode);
int32 zSaveLoad_CardCheckSpace(int32 cardNumber, int32 mode);
int32 zSaveLoad_CardCheckGames(int32 cardNumber, int32 mode);
int32 zSaveLoad_CardCheckGameSlot(int32 a, int32 b, int32 c);
int32 zSaveLoad_CardCheckSlotEmpty(int32 a, int32 b);
int32 zSaveLoad_CardCheckSlotOverwrite(int32 a, int32 b);

void zSaveLoad_BuildName(int8* name_txt, int32 idx);
uint8 zSaveLoadGetPreAutoSave();
uint32 zSaveLoad_LoadLoop();
uint32 zSaveLoad_SaveLoop();
int32 xSGT_SaveInfoPrefsCB(void* p1, st_XSAVEGAME_DATA* data, int32* i, int32* j);
uint32 zSaveLoad_slotIsEmpty(uint32 i);

#endif