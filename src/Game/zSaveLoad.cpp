#include "zSaveLoad.h"

#include <types.h>

#include "zGlobals.h"
#include "zGameState.h"
#include "../Core/x/xSnd.h"
#include "../Core/x/xTRC.h"
#include "../Core/x/xsavegame.h"
#include "../Core/x/xString.h"
#include "../Core/x/xEvent.h"
#include "../CodeWarrior/cstring"
#include "../CodeWarrior/intrin.h"

extern int8 zSaveLoad_strings[];

extern int8 buffer[16];
extern int8 buffer[16];
extern basic_rect<float32> screen_bounds;
extern basic_rect<float32> default_adjust;
extern uint32 saveSuccess;
extern float32 time_elapsed;
extern float32 time_last;
extern float32 time_current;
extern long32 t0;
extern long32 t1;
extern int32 currentCard;
extern int32 currentGame;
extern int32 promptSel;
extern int32 badCard;
extern int32 sAvailable;
extern int32 sNeeded;
extern int32 sAccessType;
extern float32 dontPoll;
extern int32 sLastCard;
extern int32 sLastGame;
extern int32 autoSaveCard;
extern int8 currSceneStr[32];
extern int8 sceneRead[32];
extern zSaveLoadUI zSaveLoadUITable[62];
extern int8* thumbIconMap[15];
extern zSaveLoadGame zSaveLoadGameTable[3];
extern uint8 preAutoSaving;
extern int32 ps2Result;
extern int32 ps2Formatted;
extern int32 ps2CardType;
extern int32 ps2FreeSpace;
extern zGlobals globals;
extern xSndGlobals gSnd;
extern eGameMode gGameMode;
extern _tagTRCPadInfo gTrcPad[4];
extern int32 gGameState;
extern uint32 gFrameCount;
extern float32 sTimeElapsed;
extern long32 sTimeLast;
extern long32 sTimeCurrent;

// func_800AD20C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zUpdateThumbIcon__Fv")

// func_800AD328
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_Tick__Fv")

// func_800AD598
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_poll__Fi")

// func_800AD600
void zSendEventToThumbIcon(uint32 toEvent)
{
    char* iconString = zSaveLoad_strings + 1092; // "MNU4 THUMBICON"
    if (gGameMode == eGameMode_Load)
    {
        iconString = zSaveLoad_strings + 1077; // "MNU3 THUMBICON"
    }
    zEntEvent(zSceneFindObject(xStrHash(iconString)), toEvent);
}

#ifndef NON_MATCHING
// func_800AD654
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zChangeThumbIcon__FPCc")
#else
void zChangeThumbIcon(const char* icon)
{
    uint32 arr[4];

    memset(arr, 0, sizeof(arr));
    arr[0] = xStrHash(icon);

    char* iconString = zSaveLoad_strings + 1092; // "MNU4 THUMBICON"
    if (gGameMode == eGameMode_Load)
    {
        iconString = zSaveLoad_strings + 1077; // "MNU3 THUMBICON"
    }
    zEntEvent(zSceneFindObject(xStrHash(iconString)), 0x1f5, (float32*)arr);
}
#endif

// func_800AD6C8
void zSaveLoadInit()
{
    zSaveLoadUITableInit(zSaveLoadUITable);
    zSaveLoadGameTableInit(zSaveLoadGameTable);
}

// func_800AD6FC
void zSaveLoadGameTableInit(zSaveLoadGame* saveTable)
{
    for (int32 i = 0; i < 3; i++)
    {
        saveTable[i].label[0] = 0;
        saveTable[i].date[0] = 0;
        saveTable[i].progress = 0;
        saveTable[i].size = 0;
        saveTable[i].thumbIconIndex = 0;
    }
}

// func_800AD740
void zSaveLoadUITableInit(zSaveLoadUI* saveTable)
{
    //Doesn't match the zSaveLoadUITable size for some reason
    for (int32 i = 0; i < 61; i++)
    {
        saveTable[i].nameID = xStrHash(saveTable[i].name);
    }
}

// func_800AD790
void zSaveLoad_UIEvent(int32 i, uint32 toEvent)
{
    zEntEvent(zSceneFindObject(zSaveLoadUITable[i].nameID), toEvent);
}

#if 1
// func_800AD7D8
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoadSGInit__F16en_SAVEGAME_MODE")
#else
void zSaveLoadSGInit(en_SAVEGAME_MODE mode)
{
    if (mode == XSG_MODE_LOAD)
    {
        zSaveLoad_UIEvent(0x27, 0x51);
    }
    else
    {
        zSaveLoad_UIEvent(0x28, 0x51);
    }

    for (int32 i = 0; i < 0x321; i++)
    {
        int32 j = i / 200 + (j >> 0x1f);
        if (j == (i - (i >> 0x1f)) * 200)
        {
            zSaveLoad_Tick();
        }
    }
}
#endif

// func_800AD874
void zSaveLoadSGDone(st_XSAVEGAME_DATA* data)
{
    if (data->mode == XSG_MODE_LOAD)
    {
        zSaveLoad_UIEvent(0x27, 0x52);
    }
    else
    {
        zSaveLoad_UIEvent(0x28, 0x52);
    }
    xSGDone(data);
}

// func_800AD8CC
int32 zSaveLoad_getgame()
{
    return currentGame;
}

// func_800AD8D4
int32 zSaveLoad_getcard()
{
    return currentCard;
}

// func_800AD8DC
int32 zSaveLoad_getMCavailable()
{
    return sAvailable;
}

// func_800AD8E4
int32 zSaveLoad_getMCneeded()
{
    return sNeeded;
}

// func_800AD8EC
int32 zSaveLoad_getMCAccessType()
{
    return sAccessType;
}

// func_800AD8F4
int32 zSaveLoadGetAutoSaveCard()
{
    return autoSaveCard;
}

// func_800AD8FC
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "format__Fii")

// func_800ADA64
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "CardtoTgt__Fi")

// func_800ADAFC
int32 zSaveLoadCardCount()
{
    return 1;
}

// func_800ADB04
int32 zSaveLoad_CardPrompt(int32 cardNumber)
{
    int32 i = 0x15;
    if (cardNumber == 1)
    {
        i = 0;
    }
    zSaveLoad_UIEvent(i, 1);

    i = 0x15;
    if (cardNumber == 1)
    {
        i = 0;
    }
    zSaveLoad_UIEvent(i, 0x5f);

    i = 0x24;
    if (cardNumber == 1)
    {
        i = 0x11;
    }
    zSaveLoad_UIEvent(i, 0x5e);

    i = 0x16;
    if (cardNumber == 1)
    {
        i = 1;
    }
    zSaveLoad_UIEvent(i, 0x5f);

    promptSel = -1;
    while (promptSel == -1)
    {
        zSaveLoad_Tick();
    }

    i = 0x24;
    if (cardNumber == 1)
    {
        i = 0x11;
    }
    zSaveLoad_UIEvent(i, 0x5f);

    if (cardNumber == 1)
    {
        zSaveLoad_UIEvent(0, 2);
    }
    return promptSel;
}

// func_800ADBD8
int32 zSaveLoad_CardPromptFormat(int32 cardNumber)
{
    int32 i = 0x15;
    if (cardNumber == 1)
    {
        i = 0;
    }
    zSaveLoad_UIEvent(i, 0x5f);

    i = 0x16;
    if (cardNumber == 1)
    {
        i = 1;
    }
    zSaveLoad_UIEvent(i, 0x5f);
    zSaveLoad_UIEvent(0x32, 0x51);

    promptSel = -1;
    while (promptSel == -1)
    {
        zSaveLoad_Tick();
        zSaveLoad_poll(3);
    }
    zSaveLoad_UIEvent(0x32, 0x5f);
    return promptSel;
}

// func_800ADC70
int32 zSaveLoad_CardPromptSpace(int32 cardNumber)
{
    int32 i = 0x15;
    if (cardNumber == 1)
    {
        i = 0;
    }
    zSaveLoad_UIEvent(i, 0x5f);
    zSaveLoad_UIEvent(0x16, 0x5f);
    zSaveLoad_UIEvent(0x25, 0x5e);

    promptSel = -1;
    while (promptSel == -1)
    {
        zSaveLoad_Tick();
        zSaveLoad_poll(3);
    }
    zSaveLoad_UIEvent(0x25, 0x5f);
    return promptSel;
}

// func_800ADCF0
int32 zSaveLoad_CardPromptGames(int32 cardNumber)
{
    int32 i = 0x15;
    if (cardNumber == 1)
    {
        i = 0;
    }
    zSaveLoad_UIEvent(i, 0x5f);
    zSaveLoad_UIEvent(1, 0x5f);
    zSaveLoad_UIEvent(0x12, 0x5e);

    promptSel = -1;
    while (promptSel == -1)
    {
        zSaveLoad_Tick();
        zSaveLoad_poll(3);
    }
    zSaveLoad_UIEvent(0x12, 0x5f);
    return promptSel;
}

// func_800ADD70
int32 zSaveLoad_CardPromptGameSlotEmpty()
{
    zSaveLoad_UIEvent(0, 0x5f);
    zSaveLoad_UIEvent(0x13, 0x5e);

    promptSel = -1;
    while (promptSel == -1)
    {
        zSaveLoad_Tick();
    }
    zSaveLoad_UIEvent(0x13, 0x5f);
    return promptSel;
}

// func_800ADDD0
int32 zSaveLoad_CardPromptOverwrite()
{
    zSaveLoad_UIEvent(0x15, 0x5f);
    zSaveLoad_UIEvent(0x22, 0x5e);

    promptSel = -1;
    while (promptSel == -1)
    {
        zSaveLoad_Tick();
        zSaveLoad_poll(5);
    }
    zSaveLoad_UIEvent(0x22, 0x5f);
    return promptSel;
}

// func_800ADE38
int32 zSaveLoad_CardPromptOverwriteDamaged()
{
    zSaveLoad_UIEvent(0x15, 0x5f);
    zSaveLoad_UIEvent(0x23, 0x5e);

    promptSel = -1;
    while (promptSel == -1)
    {
        zSaveLoad_Tick();
        zSaveLoad_poll(5);
    }
    zSaveLoad_UIEvent(0x23, 0x5f);
    return promptSel;
}

// func_800ADEA0
int32 zSaveLoad_ErrorPrompt(int32 cardNumber)
{
    int32 i = 0x2b;
    if (cardNumber == 1)
    {
        i = 0x2a;
    }
    zSaveLoad_UIEvent(i, 0x5e);

    promptSel = -1;
    while (promptSel == -1)
    {
        zSaveLoad_Tick();
    }

    i = 0x2b;
    if (cardNumber == 1)
    {
        i = 0x2a;
    }
    zSaveLoad_UIEvent(i, 0x5f);
    return promptSel;
}

// func_800ADF18
int32 zSaveLoad_DamagedSaveGameErrorPrompt(int32 cardNumber)
{
    zSaveLoad_UIEvent(0x3c, 0x5e);
    promptSel = -1;
    while (promptSel == -1)
    {
        zSaveLoad_Tick();
    }
    zSaveLoad_UIEvent(0x3c, 0x5f);
    return promptSel;
}

// func_800ADF6C
int32 zSaveLoad_CardWrongDeviceErrorPrompt(int32 cardNumber)
{
    int i = 0x3a;
    if (cardNumber == 1)
    {
        i = 0x39;
    }
    zSaveLoad_UIEvent(i, 0x5e);

    promptSel = -1;
    while (promptSel == -1)
    {
        zSaveLoad_Tick();
    }

    i = 0x3a;
    if (cardNumber == 1)
    {
        i = 0x39;
    }
    zSaveLoad_UIEvent(i, 0x5f);
    return promptSel;
}

// func_800ADFE4
int32 zSaveLoad_CardDamagedErrorPrompt(int32 cardNumber)
{
    int i = 0x38;
    if (cardNumber == 1)
    {
        i = 0x37;
    }
    zSaveLoad_UIEvent(i, 0x5e);

    promptSel = -1;
    while (promptSel == -1)
    {
        zSaveLoad_Tick();
    }

    i = 0x38;
    if (cardNumber == 1)
    {
        i = 0x37;
    }
    zSaveLoad_UIEvent(i, 0x5f);
    return promptSel;
}

// func_800AE05C
int32 zSaveLoad_SaveDamagedErrorPrompt(int32 cardNumber)
{
    zSaveLoad_UIEvent(0x35, 0x5e);

    promptSel = -1;
    while (promptSel == -1)
    {
        zSaveLoad_Tick();
    }
    zSaveLoad_UIEvent(0x35, 0x5f);
    return promptSel;
}

// func_800AE0B0
int32 zSaveLoad_CardYankedErrorPrompt(int32 cardNumber)
{
    zSaveLoad_UIEvent(0x36, 0x5e);

    promptSel = -1;
    while (promptSel == -1)
    {
        zSaveLoad_Tick();
    }
    zSaveLoad_UIEvent(0x36, 0x5f);
    return promptSel;
}

// func_800AE104
int32 zSaveLoad_ErrorFormatPrompt(int32 cardNumber)
{
    int i = 0x2e;
    if (cardNumber == 1)
    {
        i = 0x2c;
    }
    zSaveLoad_UIEvent(i, 0x5e);

    promptSel = -1;
    while (promptSel == -1)
    {
        zSaveLoad_Tick();
    }

    i = 0x2e;
    if (cardNumber == 1)
    {
        i = 0x2c;
    }
    zSaveLoad_UIEvent(i, 0x5f);
    return 6;
}

// func_800AE17C
int32 zSaveLoad_ErrorFormatCardYankedPrompt(int32 cardNumber)
{
    int i = 0x2f;
    if (cardNumber == 1)
    {
        i = 0x2d;
    }
    zSaveLoad_UIEvent(i, 0x5e);

    promptSel = -1;
    while (promptSel == -1)
    {
        zSaveLoad_Tick();
    }

    i = 0x2f;
    if (cardNumber == 1)
    {
        i = 0x2d;
    }
    zSaveLoad_UIEvent(i, 0x5f);
    return 6;
}

// func_800AE1F4
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSingle__Fi")

// func_800AE300
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckFormattedSingle__Fi")

// func_800AE43C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s",                                                         \
                   "zSaveLoad_CardCheckSpaceSingle_doCheck__FP17st_XSAVEGAME_DATAi")

// func_800AE500
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSpaceSingle__Fi")

// func_800AE5D0
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s",                                                         \
                   "zSaveLoad_CardCheckGamesSingle_doCheck__FP17st_XSAVEGAME_DATAi")

// func_800AE674
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckGamesSingle__Fi")

// func_800AE744
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s",                                                         \
                   "zSaveLoad_CardCheckSlotEmpty_hasGame_doCheck__FP17st_XSAVEGAME_DATAii")

// func_800AE7CC
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSlotEmpty_hasGame__Fii")

// func_800AE8BC
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSlotOverwrite_Free__Fii")

// func_800AE924
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheck__Fii")

// func_800AE9B0
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckFormatted__Fii")

// func_800AEA7C
int32 zSaveLoad_CardCheckValid(int32 cardNumber, int32 mode)
{
    if (mode == 1)
    {
        return zSaveLoad_CardCheckGames(cardNumber, mode);
    }
    else
    {
        return zSaveLoad_CardCheckSpace(cardNumber, mode);
    }
}

// func_800AEAAC
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSpace__Fii")

// func_800AEB48
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckGames__Fii")

// func_800AEBE4
int32 zSaveLoad_CardCheckGameSlot(int32 a, int32 b, int32 c)
{
    if (c == 1)
    {
        return zSaveLoad_CardCheckSlotEmpty(a, b);
    }
    else
    {
        return zSaveLoad_CardCheckSlotOverwrite(a, b);
    }
}

#if 1
// func_800AEC14
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSlotEmpty__Fii")
#else
int32 zSaveLoad_CardCheckSlotEmpty(int32 num, int32 game)
{
    for (int i = zSaveLoad_CardCheckSlotEmpty_hasGame(num, game); i != 2 && i != 4;
         i = zSaveLoad_CardPromptGameSlotEmpty())
    {
        if (i == 1)
        {
            return 1;
        }
        i = zSaveLoad_CardCheckSlotEmpty_hasGame(num, game);
        if (i == -1 || i == 6)
        {
            return i;
        }
    }
}
#endif

// func_800AEC98
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSlotOverwrite__Fii")

// func_800AED3C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardPick__Fi")

// func_800AEFA0
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "IsValidName__FPc")

// func_800AF03C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "BuildIt__FPci")

// func_800AF22C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_BuildName__FPci")

// func_800AF30C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_GameSelect__Fi")

// func_800AF790
uint8 zSaveLoadGetPreAutoSave()
{
    return preAutoSaving;
}

// func_800AF798
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoadPreAutoSave__Fb")

// func_800AF7CC
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoadAutoSaveUpdate__Fv")

// func_800AF8D4
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_DoAutoSave__Fv")

// func_800AFB84
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_SaveGame__Fv")

// func_800AFE6C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_LoadGame__Fv")

// func_800B0064
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_LoadLoop__Fv")

// func_800B023C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_SaveLoop__Fv")

// func_800B0548
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_DispatchCB__FUiPCf")

// func_800B061C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "xSGT_SaveInfoCB__FPvP17st_XSAVEGAME_DATAPiPi")

// func_800B0670
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s",                                                         \
                   "xSGT_SaveProcCB__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT")

// func_800B0728
int32 xSGT_SaveInfoPrefsCB(void* p1, st_XSAVEGAME_DATA* data, int32* i, int32* j)
{
    *i = 16;
    *j = *i * 2;
    return 1;
}

// func_800B0744
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s",                                                         \
                   "xSGT_SaveProcPrefsCB__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT")

// func_800B0800
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s",                                                         \
                   "xSGT_LoadLoadCB__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii")

// func_800B08F0
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s",                                                         \
                   "xSGT_LoadPrefsCB__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii")

#if 1
// func_800B09CC
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_slotIsEmpty__FUi")
#else
uint32 zSaveLoad_slotIsEmpty(uint32 slot)
{
    int8* label = zSaveLoadGameTable[slot].label;
    uint32 zeroes = __cntlzw(stricmp(label, "Empty"));
    return zeroes >> 5;
}
#endif

// func_800B0A10
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "LastPhysicalSlot__11XSGAutoDataFv")

// func_800B0A18
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "LastGame__11XSGAutoDataFv")

// func_800B0A20
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "LastTarget__11XSGAutoDataFv")
