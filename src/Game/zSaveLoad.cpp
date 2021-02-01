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
extern int32(*xSGT_LoadPrefsCB)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
extern int32(*xSGT_LoadLoadCB)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
extern int32(*xSGT_SaveProcPrefsCB)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
extern int32(*xSGT_SaveProcCB)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
extern int32(*xSGT_SaveInfoCB)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
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

#ifndef NON_MATCHING
// func_800AD600
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSendEventToThumbIcon__FUi")
#else
void zSendEventToThumbIcon(uint32 p) {
    char* iconString = "MNU3 THUMBICON";
    if (gGameMode == eGameMode_Load)
    {
        iconString = "MNU4 THUMBICON";
    }
    zEntEvent(zSceneFindObject(xStrHash(iconString)), p);
}
#endif

#ifndef NON_MATCHING
// func_800AD654
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zChangeThumbIcon__FPCc")
#else
void zChangeThumbIcon(const char* icon)
{
    char* iconString;
    float32 arr[4];

    memset(arr, 0, sizeof(arr));
    arr[0] = xStrHash(icon);
    
    iconString = "MNU3 THUMBICON";
    if (gGameMode == eGameMode_Load)
    {
        iconString = "MNU4 THUMBICON";
    }
    zEntEvent(zSceneFindObject(xStrHash(iconString)), 0x1f5, arr);
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
    for(int32 i = 0; i < 3; i++)
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
    for(int32 i = 0; i < 61; i++)
    {
        saveTable[i].nameID = xStrHash(saveTable[i].name);
    }
}

// func_800AD790
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_UIEvent__FiUi")

#if 1
// func_800AD7D8
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoadSGInit__F16en_SAVEGAME_MODE")
#else
void zSaveLoadSGInit(en_SAVEGAME_MODE mode)
{
    if (mode == XSG_MODE_LOAD) {
        zSaveLoad_UIEvent(0x27, 0x51);
    }
    else
    {
        zSaveLoad_UIEvent(0x28,0x51);
    }

    for(int32 i = 0; i < 0x321; i++)
    {
        int32 j = i / 200 + (j >> 0x1f);
        if(j == (i - (i >> 0x1f)) * 200)
        {
            zSaveLoad_Tick();
        }
    }
}
#endif

// func_800AD874
void zSaveLoadSGDone(st_XSAVEGAME_DATA* data)
{
    if (data->mode == XSG_MODE_LOAD) {
        zSaveLoad_UIEvent(0x27, 0x52);
    }
    else
    {
        zSaveLoad_UIEvent(0x28,0x52);
    }
    xSGDone(data);
}

// func_800AD8CC
 #pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_getgame__Fv")

// func_800AD8D4
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_getcard__Fv")

// func_800AD8DC
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_getMCavailable__Fv")

// func_800AD8E4
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_getMCneeded__Fv")

// func_800AD8EC
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_getMCAccessType__Fv")

// func_800AD8F4
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoadGetAutoSaveCard__Fv")

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
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardPrompt__Fi")

// func_800ADBD8
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardPromptFormat__Fi")

// func_800ADC70
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardPromptSpace__Fi")

// func_800ADCF0
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardPromptGames__Fi")

// func_800ADD70
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardPromptGameSlotEmpty__Fv")

// func_800ADDD0
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardPromptOverwrite__Fv")

// func_800ADE38
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardPromptOverwriteDamaged__Fv")

// func_800ADEA0
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_ErrorPrompt__Fi")

// func_800ADF18
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_DamagedSaveGameErrorPrompt__Fi")

// func_800ADF6C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardWrongDeviceErrorPrompt__Fi")

// func_800ADFE4
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardDamagedErrorPrompt__Fi")

// func_800AE05C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_SaveDamagedErrorPrompt__Fi")

// func_800AE0B0
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardYankedErrorPrompt__Fi")

// func_800AE104
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_ErrorFormatPrompt__Fi")

// func_800AE17C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_ErrorFormatCardYankedPrompt__Fi")

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
    if(mode == 1) {
        return zSaveLoad_CardCheckGames(cardNumber,mode);
    }
    else
    {
        return zSaveLoad_CardCheckSpace(cardNumber,mode);
    }
}

// func_800AEAAC
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSpace__Fii")

// func_800AEB48
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckGames__Fii")

// func_800AEBE4
int32 zSaveLoad_CardCheckGameSlot(int32 a, int32 b, int32 c)
{
    if(c == 1)
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
    for (int i = zSaveLoad_CardCheckSlotEmpty_hasGame(num, game); i !=2 && i != 4; i = zSaveLoad_CardPromptGameSlotEmpty()) {
        if (i == 1)
        {
            return 1;
        }
        i = zSaveLoad_CardCheckSlotEmpty_hasGame(num,game);
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
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoadGetPreAutoSave__Fv")

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
    uint32 zeroes = __cntlzw(stricmp(label,"Empty"));
    return zeroes >> 5;
}
#endif

// func_800B0A10
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "LastPhysicalSlot__11XSGAutoDataFv")

// func_800B0A18
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "LastGame__11XSGAutoDataFv")

// func_800B0A20
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "LastTarget__11XSGAutoDataFv")
