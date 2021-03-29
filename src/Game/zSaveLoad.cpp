#include "zSaveLoad.h"

#include <types.h>

#include "zGlobals.h"
#include "zGameState.h"
#include "zHud.h"
#include "zCamera.h"
#include "zGame.h"
#include "../Core/x/xSnd.h"
#include "../Core/x/xTRC.h"
#include "../Core/x/xsavegame.h"
#include "../Core/x/xString.h"
#include "../Core/x/xEvent.h"
#include "../Core/x/xutil.h"
#include "../Core/x/xserializer.h"
#include "../Core/x/xDebug.h"
#include "../Core/x/xParMgr.h"
#include "../CodeWarrior/cstring"
#include "../CodeWarrior/intrin.h"
#include "../dolphin/dolphin.h"

extern int8 zSaveLoad_strings[];

extern int8 buffer[16];
extern int8 buffer[16];
extern basic_rect<float32> screen_bounds;
extern basic_rect<float32> default_adjust;
extern uint32 saveSuccess;
extern float32 time_elapsed_1;
extern float32 time_last_1;
extern float32 time_current_1;
extern iTime t0;
extern iTime t1;
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
extern iTime sTimeLast;
extern iTime sTimeCurrent;

extern float32 _846;
extern float32 _847;
extern float32 _848;
extern float32 _849;
extern float64 _850;
extern float64 _852;

// const int8* strings = "ld gameslot group\0"
//                       "ld memcards group\0"
//                       "ld format prompt group\0"
//                       "ld mc missing group\0"
//                       "mnu3 ld mc1\0"
//                       "mnu3 ld mc2\0"
//                       "ld gameslot 0\0"
//                       "ld gameslot 1\0"
//                       "ld gameslot 2\0"
//                       "ld gameslot 3\0"
//                       "ld gameslot 4\0"
//                       "ld gameslot 5\0"
//                       "ld gameslot 6\0"
//                       "ld gameslot 7\0"
//                       "ld format prompt\0"
//                       "ld format yes\0"
//                       "ld format no\0"
//                       "ld mc missing\0"
//                       "ld nogames\0"
//                       "mnu3 start group\0"
//                       "sv gameslot group\0"
//                       "sv memcards group\0"
//                       "sv mc1\0"
//                       "sv mc2\0"
//                       "sv gameslot 0\0"
//                       "sv gameslot 1\0"
//                       "sv gameslot 2\0"
//                       "sv gameslot 3\0"
//                       "sv gameslot 4\0"
//                       "sv gameslot 5\0"
//                       "sv gameslot 6\0"
//                       "sv gameslot 7\0"
//                       "sv format prompt\0"
//                       "sv overwrite\0"
//                       "sv overwrite damaged\0"
//                       "sv mc missing\0"
//                       "sv nospace\0"
//                       "sv nospacegame\0"
//                       "ld mc dontremove\0"
//                       "sv mc dontremove\0"
//                       "mnu4 mc dontremove\0"
//                       "ld badload\0"
//                       "sv badsave\0"
//                       "mnu3 badformat\0"
//                       "mnu3 badformatnocard\0"
//                       "mnu4 badformat\0"
//                       "mnu4 badformatnocard\0"
//                       "mnu3 format confirm\0"
//                       "mnu4 format confirm\0"
//                       "sv format group\0"
//                       "mnu3 disk free\0"
//                       "mnu4 disk free\0"
//                       "sv card damaged\0"
//                       "sv badsavenocard\0"
//                       "ld damaged card\0"
//                       "sv damaged card\0"
//                       "ld wrong device\0"
//                       "sv wrong device\0"
//                       "ld damaged save\0"
//                       "ld damaged save game\0"
//                       "ThumbIconHB\0"
//                       "ThumbIconJF\0"
//                       "ThumbIconBB\0"
//                       "ThumbIconGL\0"
//                       "ThumbIconB1\0"
//                       "ThumbIconRB\0"
//                       "ThumbIconBC\0"
//                       "ThumbIconSM\0"
//                       "ThumbIconB2\0"
//                       "ThumbIconKF\0"
//                       "ThumbIconGY\0"
//                       "ThumbIconDB\0"
//                       "ThumbIconB3";

#ifndef NON_MATCHING
// func_800AD20C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zUpdateThumbIcon__Fv")
#else
void zUpdateThumbIcon()
{
    zSaveLoadUI* ui;
    int32 start;
    int32 end;
    if (gGameMode == eGameMode_Load)
    {
        start = 6;
        end = 9;
    }
    else
    {
        start = 25;
        end = 28;
    }

    ui = &zSaveLoadUITable[start];
    for (int i = start; i <= end; ui++, i++)
    {
        xBase* pUiObject = zSceneFindObject(ui->nameID);
        if (pUiObject != NULL && ((int32)pUiObject[13].link & 2) != 0)
        {
            const int8* iconStr;
            if (gGameMode == eGameMode_Load)
            {
                iconStr = "MNU3 THUMBICON"; //zSaveLoad_strings + 1077;
            }
            else
            {
                iconStr = "MNU4 THUMBICON"; //zSaveLoad_strings + 1092;
            }

            xBase* pUiObject2 = zSceneFindObject(xStrHash(iconStr));

            if (pUiObject2 != NULL)
            {
                int32 tiIndex = zSaveLoadGameTable[i - start].thumbIconIndex;
                if (tiIndex > 0 && tiIndex < 15)
                {
                    uint32 tiHash = xStrHash(thumbIconMap[tiIndex]);
                    if (*(int*)(*(int*)&pUiObject2[13].baseType + 0x5c) != tiHash)
                    {
                        zChangeThumbIcon(thumbIconMap[tiIndex]);
                    }
                }
                else
                {
                    zChangeThumbIcon(""); //zSaveLoad_strings + 1107);
                }
            }
        }
    }
}
#endif

#if 1
// func_800AD328
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_Tick__Fv")
#else
void zSaveLoad_Tick()
{
    xMat4x3* ma;
    float32 time;
    xMat4x3 local_48;
    int32 local_8;

    time = iTimeGet();
    local_8 = 0x43300000;
    time_current_1 = (_846 / (local_8 - _852)) * time;

    time_elapsed_1 = time_current_1 - time_last_1;
    if (time_elapsed_1 >= _847)
    {
        if (_849 < time_elapsed_1)
        {
            time_elapsed_1 = _848;
        }
    }
    else
    {
        time_elapsed_1 = _848;
    }

    dontPoll = dontPoll - time_elapsed_1;
    t0 = t1;
    time_last_1 = time_current_1;
    t1 = iTimeGet();
    sTimeCurrent = iTimeGet();
    time = iTimeDiffSec(sTimeLast, sTimeCurrent);
    sTimeElapsed = time;
    sTimeLast = sTimeCurrent;
    xPadUpdate(globals.NoMusic, time_elapsed_1);
    iTRCDisk::CheckDVDAndResetState();
    xDrawBegin();
    xParMgrUpdate(time_elapsed_1);
    zSceneUpdate(time_elapsed_1);

    ma = xEntGetFrame(&(xEnt)globals.player.ent);
    local_48.right.x = ma->right.x;
    local_48.right.y = ma->right.y;
    local_48.right.z = ma->right.z;
    local_48.flags = ma->flags;
    local_48.up.x = ma->up.x;
    local_48.up.y = ma->up.y;
    local_48.up.z = ma->up.z;
    local_48.pad1 = ma->pad1;
    local_48.at.x = ma->at.x;
    local_48.at.y = ma->at.y;
    local_48.at.z = ma->at.z;
    local_48.pad2 = ma->pad2;
    local_48.pos.x = ma->pos.x;
    local_48.pos.z = ma->pos.z;
    local_48.pad3 = ma->pad3;
    local_48.pos.y = ma->pos.y;
    xSndSetListenerData(SND_LISTENER_CAMERA, &globals.camera.mat);
    xSndSetListenerData(SND_LISTENER_PLAYER, &local_48);
    xSndUpdate();
    if ((gGameMode == 6) && (gGameState != 0))
    {
        zhud::update(sTimeElapsed);
    }

    zCameraUpdate(&globals.camera, time_elapsed_1);
    xCameraBegin(&globals.camera, 1);
    zUpdateThumbIcon();
    zSceneRender();
    xDebugUpdate();
    xDrawEnd();
    xCameraEnd(&globals.camera, time_elapsed_1, 1);
    iEnvEndRenderFX(0);
    xCameraShowRaster(&globals.camera);
    gFrameCount = gFrameCount + 1;
}
#endif

#if 1
// func_800AD598
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_poll__Fi")
#else
int32 zSaveLoad_poll(int32 i)
{
    if (dontPoll < _847)
    {
        dontPoll = _846;
        if (!zSaveLoad_CardCheckSingle(currentCard))
        {
            promptSel = i;
            currentGame = 0;
        }
        else
        {
            return 1;
        }
    }
    return 1;
}
#endif

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
void zChangeThumbIcon(const int8* icon)
{
    uint32 arr[4];

    memset(arr, 0, sizeof(arr));
    arr[0] = xStrHash(icon);

    int8* iconString = zSaveLoad_strings + 1092; // "MNU4 THUMBICON"
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

// func_800AD7D8
st_XSAVEGAME_DATA* zSaveLoadSGInit(en_SAVEGAME_MODE mode)
{
    if (mode == XSG_MODE_LOAD)
    {
        zSaveLoad_UIEvent(0x27, 0x51);
    }
    else
    {
        zSaveLoad_UIEvent(0x28, 0x51);
    }

    for (int32 i = 0; i < 801; i++)
    {
        if (i % 200 == 0)
        {
            zSaveLoad_Tick();
        }
    }

    return xSGInit(mode);
}

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
int32 format(int32 num, int32 mode)
{
    st_XSAVEGAME_DATA* data = zSaveLoadSGInit(XSG_MODE_LOAD);
    int32 tgtmax;

    int32 rc = 0;
    switch (xSGTgtCount(data, &tgtmax))
    {
    case 2:
        xSGTgtSelect(data, num);
        rc = xSGTgtFormatTgt(data, num, 0);
        zSaveLoadSGDone(data);
        if (rc == -1)
        {
            zSaveLoad_ErrorFormatCardYankedPrompt(mode);
            rc = 5;
        }
        else
        {
            if (rc == 0)
            {
                zSaveLoad_ErrorFormatPrompt(mode);
            }
            if (rc != 0)
            {
                rc = 1;
            }
        }
        break;
    case 1:
        int32 idx = xSGTgtPhysSlotIdx(data, 0);
        if (idx != num)
        {
            zSaveLoadSGDone(data);
            rc = 5;
        }
        else
        {
            if (idx ^ num)
            {
                zSaveLoadSGDone(data);
            }
            else
            {
                xSGTgtSelect(data, 0);
                rc = xSGTgtFormatTgt(data, num, 0);
                zSaveLoadSGDone(data);
                if (rc == 0)
                {
                    zSaveLoad_ErrorFormatPrompt(mode);
                }
            }
        }
        break;
    case 0:
        rc = 5;
        zSaveLoadSGDone(data);
        break;
    }
    return rc;
}

// func_800ADA64
int32 CardtoTgt(int32 card)
{
    st_XSAVEGAME_DATA* ldinst = xSGInit(XSG_MODE_LOAD);
    int32 tgtmax;

    switch (xSGTgtCount(ldinst, &tgtmax))
    {
    case 2:
        // case 3:
        xSGDone(ldinst);
        return card;
    case 1:
        xSGDone(ldinst);
        return 0;
    case 0:
        xSGDone(ldinst);
        return -1;
    }
    return -1;
}

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
int32 zSaveLoad_CardCheckSingle(int32 cardNumber)
{
    st_XSAVEGAME_DATA* ldinst = xSGInit(XSG_MODE_LOAD);
    int32 wrongDevice;
    int32 tgtmax;

    switch (xSGTgtCount(ldinst, &tgtmax))
    {
    case 2:
        xSGDone(ldinst);
        return 1;
    case 1:
        int idx = xSGTgtPhysSlotIdx(ldinst, 0);
        xSGDone(ldinst);
        wrongDevice = iSGCheckForWrongDevice();
        if (wrongDevice >= 0 && wrongDevice == cardNumber)
        {
            return 9;
        }
        else
        {
            if (idx == cardNumber)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    case 0:
        wrongDevice = iSGCheckForWrongDevice();
        if (wrongDevice >= 0)
        {
            xSGDone(ldinst);
            return wrongDevice == cardNumber ? 9 : 0;
        }
        xSGDone(ldinst);
        return 0;
    }
    return -1;
}

// func_800AE300
int32 zSaveLoad_CardCheckFormattedSingle(int32 cardNumber)
{
    int32 rc;
    st_XSAVEGAME_DATA* ldinst = xSGInit(XSG_MODE_LOAD);
    int32 tgtmax;

    rc = 0;
    switch (xSGTgtCount(ldinst, &tgtmax))
    {
    case 2:
        switch (xSGTgtIsFormat(ldinst, cardNumber, NULL))
        {
        case -1:
            rc = 7;
            break;
        case 1:
            rc = 1;
            break;
        case 0:
        default:
            rc = 0;
            break;
        }
        break;
    case 1:
        int32 idx = xSGTgtPhysSlotIdx(ldinst, 0);
        if (idx != cardNumber)
        {
            rc = -1;
        }
        else if (!(idx ^ cardNumber))
        {
            switch (xSGTgtIsFormat(ldinst, 0, NULL))
            {
            case -1:
                rc = 7;
                break;
            case 1:
                rc = 1;
                break;
            case 0:
            default:
                rc = 0;
                break;
            }
        }
        break;
    case 0:
        rc = -1;
        break;
    }

    xSGDone(ldinst);
    return rc;
}

// func_800AE43C
int32 zSaveLoad_CardCheckSpaceSingle_doCheck(st_XSAVEGAME_DATA* xsgdata, int32 cardNumber)
{
    int rc;

    if (xSGTgtIsFormat(xsgdata, cardNumber, 0) <= 0)
    {
        rc = 6;
    }
    else
    {
        // This makes no sense ¯\_(ツ)_/¯
        xSGTgtSelect(xsgdata, cardNumber);
        if (xSGTgtHasGameDir(xsgdata, cardNumber) == 1)
        {
            rc = xSGTgtHaveRoom(xsgdata, cardNumber, 0xcc00, 0xffffffff, &sNeeded, &sAvailable, 0);
        }
        else
        {
            rc = xSGTgtHaveRoom(xsgdata, cardNumber, 0xcc00, 0xffffffff, &sNeeded, &sAvailable, 0);
        }
        if (rc == 0)
        {
            rc = 0;
        }
    }
    return rc;
}

// func_800AE500
int32 zSaveLoad_CardCheckSpaceSingle(int32 cardNumber)
{
    st_XSAVEGAME_DATA* ldinst = xSGInit(XSG_MODE_SAVE);
    int32 tgtmax;
    int32 rc;
    rc = 0;

    switch (xSGTgtCount(ldinst, &tgtmax))
    {
    case 2:
        rc = zSaveLoad_CardCheckSpaceSingle_doCheck(ldinst, cardNumber);
        if (rc != 0)
        {
            rc = 1;
        }
        break;
    case 1:
        int32 idx = xSGTgtPhysSlotIdx(ldinst, 0);
        if (idx != cardNumber)
        {
            rc = 5;
        }
        if (!(idx ^ cardNumber))
        {
            rc = zSaveLoad_CardCheckSpaceSingle_doCheck(ldinst, 0);
        }
        break;
    case 0:
        rc = 5;
        break;
    }

    xSGDone(ldinst);
    return rc;
}

// func_800AE5D0
int32 zSaveLoad_CardCheckGamesSingle_doCheck(st_XSAVEGAME_DATA* xsgdata, int32 cardNumber)
{
    int rc;

    if (xSGTgtIsFormat(xsgdata, cardNumber, 0) <= 0)
    {
        rc = 6;
    }
    else
    {
        xSGTgtSelect(xsgdata, cardNumber);
        if (!xSGTgtHasGameDir(xsgdata, cardNumber))
        {
            rc = 0;
        }
        else
        {
            rc = xSGTgtHaveRoom(xsgdata, cardNumber, 0xcc00, 0xffffffff, &sNeeded, &sAvailable, 0);
            if (rc == 0)
            {
                rc = 0;
            }
        }
    }
    return rc;
}

// func_800AE674
int32 zSaveLoad_CardCheckGamesSingle(int32 cardNumber)
{
    st_XSAVEGAME_DATA* ldinst = xSGInit(XSG_MODE_LOAD);
    int32 tgtmax;
    int rc = 0;

    switch (xSGTgtCount(ldinst, &tgtmax))
    {
    case 2:
        rc = zSaveLoad_CardCheckGamesSingle_doCheck(ldinst, cardNumber);
        if (rc != 0)
        {
            rc = 1;
        }
        break;
    case 1:
        int32 idx = xSGTgtPhysSlotIdx(ldinst, 0);
        if (idx != cardNumber)
        {
            rc = 5;
        }
        if (!(idx ^ cardNumber))
        {
            rc = zSaveLoad_CardCheckGamesSingle_doCheck(ldinst, 0);
        }
        break;
    case 0:
        rc = 5;
        break;
    }

    xSGDone(ldinst);
    return rc;
}

// func_800AE744
int32 zSaveLoad_CardCheckSlotEmpty_hasGame_doCheck(st_XSAVEGAME_DATA* xsgdata, int32 cardNumber,
                                                   int32 gameNumber)
{
    int32 rc;

    if (xSGTgtIsFormat(xsgdata, cardNumber, 0) <= 0)
    {
        rc = -1;
    }
    else
    {
        xSGTgtSelect(xsgdata, cardNumber);
        rc = xSGGameIsEmpty(xsgdata, gameNumber);
        if (rc != 0)
        {
            rc = 0;
        }
        else if (rc == 0)
        {
            rc = 1;
        }
    }
    return rc;
}

// func_800AE7CC
int32 zSaveLoad_CardCheckSlotEmpty_hasGame(int32 cardNumber, int32 gameNumber)
{
    st_XSAVEGAME_DATA* ldinst = xSGInit(XSG_MODE_LOAD);
    int32 tgtmax;
    int rc = 0;

    switch (xSGTgtCount(ldinst, &tgtmax))
    {
    case 2:
        rc = zSaveLoad_CardCheckSlotEmpty_hasGame_doCheck(ldinst, cardNumber, gameNumber);
        if (rc != 10 && rc != 0)
        {
            rc = 1;
        }
        break;
    case 1:
        int32 idx = xSGTgtPhysSlotIdx(ldinst, 0);
        if (idx != cardNumber)
        {
            rc = -1;
        }
        if (!(idx ^ cardNumber))
        {
            rc = zSaveLoad_CardCheckSlotEmpty_hasGame_doCheck(ldinst, 0, gameNumber);
        }
        break;
    case 0:
        rc = -1;
        break;
    }
    xSGDone(ldinst);
    return rc;
}

#if 1
// func_800AE8BC
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSlotOverwrite_Free__Fii")
#else
int32 zSaveLoad_CardCheckSlotOverwrite_Free(int32 cardNumber, int32 gameNumber)
{
    switch (zSaveLoad_CardCheckSlotEmpty_hasGame(cardNumber, gameNumber))
    {
    case -1:
        return -1;
    case 0:
        return 1;
    case 1:
        return 0;
    case 10:
        return 10;
    default:
        return 0;
    }
}
#endif

#if 1
// func_800AE924
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheck__Fii")
#else
int32 zSaveLoad_CardCheck(int32 cardNumber, int32 mode)
{
    int32 iVar1;
    int32 uVar2;

    iVar1 = zSaveLoad_CardCheckSingle(cardNumber);
    while (iVar1 != 2 && iVar1 != 4)
    {
        if (iVar1 != 0)
        {
            uVar2 = 1;
            if (iVar1 == 9)
            {
                uVar2 = 9;
            }
            return uVar2;
        }
        badCard = 1;
        iVar1 = zSaveLoad_CardPrompt(mode);
        iVar1 = zSaveLoad_CardCheckSingle(cardNumber);
    }
    return 2;
}
#endif

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
int32 zSaveLoad_CardCheckGameSlot(int32 cardNumber, int32 gameNumber, int32 mode)
{
    if (mode == 1)
    {
        return zSaveLoad_CardCheckSlotEmpty(cardNumber, gameNumber);
    }
    else
    {
        return zSaveLoad_CardCheckSlotOverwrite(cardNumber, gameNumber);
    }
}

#if 1
// func_800AEC14
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSlotEmpty__Fii")
#else
int32 zSaveLoad_CardCheckSlotEmpty(int32 cardNumber, int32 gameNumber)
{
    for (int i = zSaveLoad_CardCheckSlotEmpty_hasGame(cardNumber, gameNumber); i != 2 && i != 4;
         i = zSaveLoad_CardPromptGameSlotEmpty())
    {
        if (i == 1)
        {
            return 1;
        }
        i = zSaveLoad_CardCheckSlotEmpty_hasGame(cardNumber, gameNumber);
        if (i == -1 || i == 6)
        {
            return i;
        }
    }
}
#endif

#if 1
// func_800AEC98
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSlotOverwrite__Fii")
#else
int32 zSaveLoad_CardCheckSlotOverwrite(int32 cardNumber, int32 gameNumber)
{
    int32 iVar1 = zSaveLoad_CardCheckSlotOverwrite_Free(cardNumber, gameNumber);
    if (iVar1 != 1)
    {
        if (iVar1 == -1)
        {
            return 0xffffffff;
        }
        if (iVar1 == 10)
        {
            return 10;
        }

        if (!IsValidName(zSaveLoadGameTable[gameNumber].label))
        {
            iVar1 = zSaveLoad_CardPromptOverwriteDamaged();
        }
        else
        {
            iVar1 = zSaveLoad_CardPromptOverwrite();
        }
        if (iVar1 == 5)
        {
            return iVar1;
        }
        if ((iVar1 == 2) || (iVar1 == 4))
        {
            return 2;
        }
    }
    return 1;
}
#endif

// func_800AED3C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardPick__Fi")

// func_800AEFA0
int32 IsValidName(int8* name)
{
    if (strcmp((char*)name, zSaveLoad_strings + 1107) == 0)
    {
        return 0;
    }

    for (int8* p = name; *p != NULL; p++)
    {
        if ((*p < 'A' || *p > 'z') && (*p < '0' || *p > '9') && (*p != ' ' && *p != '\''))
        {
            return 0;
        }
    }
    return 1;
}

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
void zSaveLoadPreAutoSave(bool onOff)
{
    preAutoSaving = onOff;
    if (onOff)
    {
        ResetButton::DisableReset();
    }
    else
    {
        ResetButton::EnableReset();
    }
}

// func_800AF7CC
void zSaveLoadAutoSaveUpdate()
{
    xBase* obj;
    int32 out1, out2;

    if (globals.autoSaveFeature == 0 || gGameMode == eGameMode_Pause)
    {
        return;
    }
    if (preAutoSaving == 0)
    {
        return;
    }

    int32 physicalSlot = xSGAutoSave_GetCache()->LastPhysicalSlot();
    if (physicalSlot >= 0)
    {
        autoSaveCard = physicalSlot;
        switch (CARDProbeEx(physicalSlot, &out1, &out2))
        {
        case 0:
        case -1:
            obj = zSceneFindObject(xStrHash(zSaveLoad_strings + 1186)); //"SAVING GAME ICON UI"
            if (obj != NULL)
            {
                zEntEvent(obj, 3);
            }
            break;
        default:
            obj = zSceneFindObject(xStrHash(zSaveLoad_strings + 1186)); //"SAVING GAME ICON UI"
            if (obj != NULL)
            {
                zEntEvent(obj, 4);
            }

            obj = zSceneFindObject(xStrHash(zSaveLoad_strings + 1206)); //"MNU4 AUTO SAVE FAILED"
            if (obj != NULL)
            {
                zEntEvent(obj, 3);
            }
            globals.autoSaveFeature = 0;
            zSaveLoadPreAutoSave(0);
            break;
        }
    }
}

#ifndef NON_MATCHING
// func_800AF8D4
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_DoAutoSave__Fv")
#else
int32 zSaveLoad_DoAutoSave()
{
    /*
    r24 - progress/iprocess
    r25 - success
    r26 - svinst
    r27 - asstat
    r28 - r28
    r29 - Lastgame
    r30 - use_tgt
    r31 - autodata
    */
    int32 use_tgt;
    int32 lastGame;
    int32 teststat;
    st_XSAVEGAME_DATA* svinst;
    en_XSGASYNC_STATUS asstat = XSG_ASTAT_NOOP;
    XSGAutoData* autodata;
    int32 success;

    uint32 progress;
    int32 iprocess;
    int8 label[64];
    const int8* area;

    success = 0;
    teststat = 1;
    asstat = XSG_ASTAT_NOOP;

    autodata = xSGAutoSave_GetCache();
    if (autodata == NULL)
    {
        return -1;
    }
    if (!autodata->IsValid())
    {
        return -1;
    }

    use_tgt = CardtoTgt(autodata->LastTarget());
    lastGame = autodata->LastGame();
    autodata->Discard();
    svinst = xSGInit(XSG_MODE_SAVE);
    xSGTgtSelect(svinst, use_tgt);
    xSGGameSet(svinst, lastGame);

    if (svinst == NULL)
    {
        teststat = 0;
    }

    zSceneSave(globals.sceneCur, 0);

    xSGAddSaveClient(svinst, 0x524f4f4d, 0, xSGT_SaveInfoCB, xSGT_SaveProcCB);
    xSGAddSaveClient(svinst, 0x50524546, 0, xSGT_SaveInfoPrefsCB, xSGT_SaveProcPrefsCB);

    xSerial_svgame_register(svinst, XSG_MODE_SAVE);
    progress = zSceneCalcProgress();

    if (globals.sceneCur->sceneID == 0x50473132)
    {
        area = zSceneGetLevelName(0x48423031);
    }
    else
    {
        area = zSceneGetLevelName(progress);
    }

    strncpy(label, area, 0x40);
    if (!xSGSetup(svinst, lastGame, label, progress, 0, zSceneGetLevelIndex()))
    {
        teststat = 0;
    }

    if (teststat != 0)
    {
        iprocess = xSGProcess(svinst);
        if (iprocess != 0)
        {
            asstat = xSGAsyncStatus(svinst, 1, 0, 0);
        }
        xSGGameIsEmpty(svinst, lastGame);
        xSGTgtHasGameDir(svinst, use_tgt);
        if (iprocess == 0)
        {
            teststat = false;
        }
        else
        {
            switch (asstat)
            {
            case XSG_ASTAT_INPROG:
                //This case needed for proper codegen
                break;
            case XSG_ASTAT_SUCCESS:
                success = true;
                break;
            case XSG_ASTAT_FAILED:
                success = false;
                break;
            }
        }
    }

    if (teststat && xSGWrapup(svinst) == 0)
    {
        teststat = false;
    }

    if (xSGDone(svinst) == 0)
    {
        teststat = false;
    }

    if ((success) && (teststat))
    {
        if (autodata != NULL)
        {
            int32 idx = xSGTgtPhysSlotIdx(svinst, use_tgt);
            autodata->SetCache(use_tgt, lastGame, idx);
            globals.autoSaveFeature = 1;
        }
        return 1;
    }
    else
    {
        if (autodata != NULL)
        {
            autodata->Discard();
        }
        globals.autoSaveFeature = 0;
        return -1;
    }
}
#endif

// func_800AFB84
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_SaveGame__Fv")

// func_800AFE6C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_LoadGame__Fv")

// func_800B0064
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_LoadLoop__Fv")

// func_800B023C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_SaveLoop__Fv")

#ifndef NON_MATCHING
// func_800B0548
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_DispatchCB__FUiPCf")
#else
void zSaveLoad_DispatchCB(uint32 dispatchEvent, const float32* toParam)
{
    switch (dispatchEvent)
    {
    case 0xa8:
        promptSel = 4;
        break;
    case 0xaa:
        promptSel = 3;
        break;
    case 0xab:
        currentCard = (int)*toParam;
        en_SAVEGAME_MODE mode = XSG_MODE_LOAD;
        if (gGameMode == eGameMode_Save)
        {
            mode = XSG_MODE_SAVE;
        }
        st_XSAVEGAME_DATA* data = xSGInit(mode);
        zSaveLoad_CardCheckSpaceSingle_doCheck(data, currentCard);
        xSGDone(data);
        break;
    case 0xac:
        currentGame = (int)*toParam;
        break;
    case 0xad:
        promptSel = 3;
        break;
    }
}
#endif

// func_800B061C
int32 xSGT_SaveInfoCB(void* vp, st_XSAVEGAME_DATA* xsgdata, int32* need, int32* most)
{
    *need = xSGWriteStrLen(currSceneStr);
    *most = *need << 1;
    return 1;
}

// func_800B0670
int32 xSGT_SaveProcCB(void* vp, st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
    if (globals.sceneCur->sceneID == 0x50473132)
    {
        strcpy(currSceneStr, xUtil_idtag2string(0x48423031, 0));
    }
    else
    {
        strcpy(currSceneStr, xUtil_idtag2string(globals.sceneCur->sceneID, 0));
    }
    return xSGWriteData(xsgdata, wctxt, currSceneStr, 1, strlen(currSceneStr)) + 1;
}

// func_800B0728
int32 xSGT_SaveInfoPrefsCB(void* p1, st_XSAVEGAME_DATA* data, int32* i, int32* j)
{
    *i = 16;
    *j = *i * 2;
    return 1;
}

// func_800B0744
int32 xSGT_SaveProcPrefsCB(void* vp, st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
    int sum = 0;
    sum += xSGWriteData(xsgdata, wctxt, &gSnd.stereo, 1);
    sum += xSGWriteData(xsgdata, wctxt, &gSnd.categoryVolFader[2], 1);
    sum += xSGWriteData(xsgdata, wctxt, &gSnd.categoryVolFader[0], 1);
    sum += xSGWriteData(xsgdata, wctxt, &globals.option_vibration, 1);
    return sum + 1;
}

#if 1
// func_800B0800
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s",                                                         \
                   "xSGT_LoadLoadCB__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii")
#else
int32 xSGT_LoadLoadCB(void* vp, st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt,
                      uint32 ui, int32 i)
{
    int32 currLen;
    int8 bigbuf[32];

    currLen = strlen(currSceneStr);
    xSGReadData(xsgdata, rctxt, bigbuf, 1, currLen);
    int32 readLen = strlen(bigbuf);
    currLen = strlen(currSceneStr);
    if (currLen == readLen)
    {
        strcpy(sceneRead, bigbuf);
    }
    return __cntlzw((uint32)(currLen != readLen)) >> 5 & 0xff;
}
#endif

// func_800B08F0
int32 xSGT_LoadPrefsCB(void* vp, st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt,
                       uint32 ui, int32 i)
{
    uint32 stereo;

    xSGReadData(xsgdata, rctxt, &stereo, 1);
    xSGReadData(xsgdata, rctxt, &gSnd.categoryVolFader[2], 1);
    xSGReadData(xsgdata, rctxt, &gSnd.categoryVolFader[0], 1);
    xSGReadData(xsgdata, rctxt, &globals.option_vibration, 1);
    if (globals.option_vibration != 0)
    {
        xPadRumbleEnable(globals.currentActivePad, 1);
    }
    else
    {
        xPadRumbleEnable(globals.currentActivePad, 0);
    }
    return 1;
}

// func_800B09CC
uint32 zSaveLoad_slotIsEmpty(uint32 slot)
{
    int8* label = zSaveLoadGameTable[slot].label;
    // This seems like it should just be a boolean comparison of strcmp and 0,
    // However, that generates an AND mask that's too small.
    return __cntlzw(strcmp(label, zSaveLoad_strings + 0x49c)) >> 5 & 0x7ffffff;
}

// func_800B0A10
int32 XSGAutoData::LastPhysicalSlot()
{
    return this->lastPhysicalSlot;
}

// func_800B0A18
int32 XSGAutoData::LastGame()
{
    return this->lastGame;
}

// func_800B0A20
int32 XSGAutoData::LastTarget()
{
    return this->lastTarg;
}
