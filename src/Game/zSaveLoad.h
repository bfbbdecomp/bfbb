#ifndef ZSAVELOAD_H
#define ZSAVELOAD_H

#include <types.h>
#include "../src/Core/x/xsavegame.h"
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

void zUpdateThumbIcon();
void zSaveLoad_Tick();
int32 zSaveLoad_poll(int32 i);
void zSendEventToThumbIcon(uint32 toEvent);
void zChangeThumbIcon(const int8* icon);

void zSaveLoadInit();
void zSaveLoadGameTableInit(zSaveLoadGame* saveTable);
void zSaveLoadUITableInit(zSaveLoadUI* saveTable);
void zSaveLoad_UIEvent(int32 p1, uint32 p2);
st_XSAVEGAME_DATA* zSaveLoadSGInit(en_SAVEGAME_MODE mode);

int32 zSaveLoadSGDone(st_XSAVEGAME_DATA* data);
int32 zSaveLoad_getgame();
int32 zSaveLoad_getcard();
int32 zSaveLoad_getMCavailable();
int32 zSaveLoad_getMCneeded();
int32 zSaveLoad_getMCAccessType();
int32 zSaveLoadGetAutoSaveCard();
int32 format(int32 num, int32 mode);
int32 CardtoTgt(int32 card);
int32 zSaveLoad_CardCount();
int32 zSaveLoad_CardPrompt(int32 cardNumber);
int32 zSaveLoad_CardPromptFormat(int32 mode);
int32 zSaveLoad_CardPromptSpace(int32 mode);
int32 zSaveLoad_CardPromptGames(int32 mode);
int32 zSaveLoad_CardPromptGameSlotEmpty();
int32 zSaveLoad_CardPromptOverwrite();
int32 zSaveLoad_CardPromptOverwriteDamaged();
int32 zSaveLoad_ErrorPrompt(int32 cardNumber);
int32 zSaveLoad_DamagedSaveGameErrorPrompt(int32 cardNumber);
int32 zSaveLoad_CardWrongDeviceErrorPrompt(int32 mode);
int32 zSaveLoad_CardDamagedErrorPrompt(int32 mode);
int32 zSaveLoad_SaveDamagedErrorPrompt(int32 cardNumber);
int32 zSaveLoad_CardYankedErrorPrompt(int32 cardNumber);
int32 zSaveLoad_ErrorFormatPrompt(int32 cardNumber);
int32 zSaveLoad_ErrorFormatCardYankedPrompt(int32 cardNumber);
int32 zSaveLoad_CardCheckSingle(int32 cardNumber);
int32 zSaveLoad_CardCheckFormattedSingle(int32 cardNumber);
int32 zSaveLoad_CardCheckSpaceSingle_doCheck(st_XSAVEGAME_DATA* xsgdata, int32 cardNumber);
int32 zSaveLoad_CardCheckSpaceSingle(int32 cardNumber);
int32 zSaveLoad_CardCheckGamesSingle_doCheck(st_XSAVEGAME_DATA* xsgdata, int32 cardNumber);
int32 zSaveLoad_CardCheckGamesSingle(int32 cardNumber);
int32 zSaveLoad_CardCheckSlotEmpty_hasGame_doCheck(st_XSAVEGAME_DATA* xsgdata, int32 cardNumber,
                                                   int32 gameNumber);
int32 zSaveLoad_CardCheckSlotEmpty_hasGame(int32 cardNumber, int32 gameNumber);
int32 zSaveLoad_CardCheckSlotOverwrite_Free(int32 cardNumber, int32 gameNumber);
int32 zSaveLoad_CardCheck(int32 cardNumber, int32 mode);
int32 zSaveLoad_CardCheckValid(int32 cardNumber, int32 mode);
int32 zSaveLoad_CardCheckSpace(int32 cardNumber, int32 mode);
int32 zSaveLoad_CardCheckGames(int32 cardNumber, int32 mode);
int32 zSaveLoad_CardCheckGameSlot(int32 cardNumber, int32 gameNumber, int32 mode);
int32 zSaveLoad_CardCheckSlotEmpty(int32 cardNumber, int32 gameNumber);
int32 zSaveLoad_CardCheckSlotOverwrite(int32 cardNumber, int32 gameNumber);
int32 zSaveLoad_CardPick(int32 mode);
bool IsValidName(int8* name);
void BuildIt(int8* build_txt, int32 i);
void zSaveLoad_BuildName(int8* name_txt, int32 idx);
int32 zSaveLoad_GameSelect(int32 mode);
uint8 zSaveLoadGetPreAutoSave();
void zSaveLoadPreAutoSave(bool onOff);
void zSaveLoadAutoSaveUpdate();
int32 zSaveLoad_DoAutoSave();
int32 zSaveLoad_SaveGame();
int32 zSaveLoad_LoadGame();
uint32 zSaveLoad_LoadLoop();
uint32 zSaveLoad_SaveLoop();
void zSaveLoad_DispatchCB(uint32 dispatchEvent, const float32* toParam);
int32 xSGT_SaveInfoCB(void* vp, st_XSAVEGAME_DATA* xsgdata, int32* need, int32* most);
int32 xSGT_SaveProcCB(void* vp, st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt);
int32 xSGT_SaveInfoPrefsCB(void* p1, st_XSAVEGAME_DATA* data, int32* i, int32* j);
int32 xSGT_SaveProcPrefsCB(void* vp, st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt);
int32 xSGT_LoadLoadCB(void* vp, st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt,
                      uint32 ui, int32 i);
int32 xSGT_LoadPrefsCB(void* vp, st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt,
                       uint32 ui, int32 i);
uint32 zSaveLoad_slotIsEmpty(uint32 slot);

#endif