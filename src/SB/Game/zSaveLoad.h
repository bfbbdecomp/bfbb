#ifndef ZSAVELOAD_H
#define ZSAVELOAD_H

#include <types.h>
#include "xsavegame.h"
struct st_XSAVEGAME_DATA;

struct zSaveLoadGame
{
    S8 label[64];
    S8 date[32];
    S32 progress;
    U32 size;
    S8 thumbIconIndex;
};

struct zSaveLoadUI
{
    U32 entry;
    U32 nameID;
    S8* name;
};


zSaveLoadGame zSaveLoadGameTable[3];

void zUpdateThumbIcon();
void zSaveLoad_Tick();
S32 zSaveLoad_poll(S32 i);
void zSendEventToThumbIcon(U32 toEvent);
void zChangeThumbIcon(const S8* icon);

void zSaveLoadInit();
void zSaveLoadGameTableInit(zSaveLoadGame* saveTable);
void zSaveLoadUITableInit(zSaveLoadUI* saveTable);
void zSaveLoad_UIEvent(S32 p1, U32 p2);
st_XSAVEGAME_DATA* zSaveLoadSGInit(en_SAVEGAME_MODE mode);

S32 zSaveLoadSGDone(st_XSAVEGAME_DATA* data);
S32 zSaveLoad_getgame();
S32 zSaveLoad_getcard();
S32 zSaveLoad_getMCavailable();
S32 zSaveLoad_getMCneeded();
S32 zSaveLoad_getMCAccessType();
S32 zSaveLoadGetAutoSaveCard();
S32 format(S32 num, S32 mode);
S32 CardtoTgt(S32 card);
S32 zSaveLoad_CardCount();
S32 zSaveLoad_CardPrompt(S32 cardNumber);
S32 zSaveLoad_CardPromptFormat(S32 mode);
S32 zSaveLoad_CardPromptSpace(S32 mode);
S32 zSaveLoad_CardPromptGames(S32 mode);
S32 zSaveLoad_CardPromptGameSlotEmpty();
S32 zSaveLoad_CardPromptOverwrite();
S32 zSaveLoad_CardPromptOverwriteDamaged();
S32 zSaveLoad_ErrorPrompt(S32 cardNumber);
S32 zSaveLoad_DamagedSaveGameErrorPrompt(S32 cardNumber);
S32 zSaveLoad_CardWrongDeviceErrorPrompt(S32 mode);
S32 zSaveLoad_CardDamagedErrorPrompt(S32 mode);
S32 zSaveLoad_SaveDamagedErrorPrompt(S32 cardNumber);
S32 zSaveLoad_CardYankedErrorPrompt(S32 cardNumber);
S32 zSaveLoad_ErrorFormatPrompt(S32 cardNumber);
S32 zSaveLoad_ErrorFormatCardYankedPrompt(S32 cardNumber);
S32 zSaveLoad_CardCheckSingle(S32 cardNumber);
S32 zSaveLoad_CardCheckFormattedSingle(S32 cardNumber);
S32 zSaveLoad_CardCheckSpaceSingle_doCheck(st_XSAVEGAME_DATA* xsgdata, S32 cardNumber);
S32 zSaveLoad_CardCheckSpaceSingle(S32 cardNumber);
S32 zSaveLoad_CardCheckGamesSingle_doCheck(st_XSAVEGAME_DATA* xsgdata, S32 cardNumber);
S32 zSaveLoad_CardCheckGamesSingle(S32 cardNumber);
S32 zSaveLoad_CardCheckSlotEmpty_hasGame_doCheck(st_XSAVEGAME_DATA* xsgdata, S32 cardNumber,
                                                   S32 gameNumber);
S32 zSaveLoad_CardCheckSlotEmpty_hasGame(S32 cardNumber, S32 gameNumber);
S32 zSaveLoad_CardCheckSlotOverwrite_Free(S32 cardNumber, S32 gameNumber);
S32 zSaveLoad_CardCheck(S32 cardNumber, S32 mode);
S32 zSaveLoad_CardCheckValid(S32 cardNumber, S32 mode);
S32 zSaveLoad_CardCheckSpace(S32 cardNumber, S32 mode);
S32 zSaveLoad_CardCheckGames(S32 cardNumber, S32 mode);
S32 zSaveLoad_CardCheckGameSlot(S32 cardNumber, S32 gameNumber, S32 mode);
S32 zSaveLoad_CardCheckSlotEmpty(S32 cardNumber, S32 gameNumber);
S32 zSaveLoad_CardCheckSlotOverwrite(S32 cardNumber, S32 gameNumber);
S32 zSaveLoad_CardPick(S32 mode);
bool IsValidName(S8* name);
void BuildIt(S8* build_txt, S32 i);
void zSaveLoad_BuildName(S8* name_txt, S32 idx);
S32 zSaveLoad_GameSelect(S32 mode);
U8 zSaveLoadGetPreAutoSave();
void zSaveLoadPreAutoSave(bool onOff);
void zSaveLoadAutoSaveUpdate();
S32 zSaveLoad_DoAutoSave();
S32 zSaveLoad_SaveGame();
S32 zSaveLoad_LoadGame();
U32 zSaveLoad_LoadLoop();
U32 zSaveLoad_SaveLoop();
void zSaveLoad_DispatchCB(U32 dispatchEvent, const F32* toParam);
S32 xSGT_SaveInfoCB(void* vp, st_XSAVEGAME_DATA* xsgdata, S32* need, S32* most);
S32 xSGT_SaveProcCB(void* vp, st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt);
S32 xSGT_SaveInfoPrefsCB(void* p1, st_XSAVEGAME_DATA* data, S32* i, S32* j);
S32 xSGT_SaveProcPrefsCB(void* vp, st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt);
S32 xSGT_LoadLoadCB(void* vp, st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt,
                      U32 ui, S32 i);
S32 xSGT_LoadPrefsCB(void* vp, st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt,
                       U32 ui, S32 i);
U32 zSaveLoad_slotIsEmpty(U32 slot);

#endif
