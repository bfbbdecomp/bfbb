#include "zSaveLoad.h"

#include <types.h>
#include <string.h>
#include <stdio.h>

#include "zUI.h"
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
#include "../dolphin/dolphin.h"

extern uint32 saveSuccess;
extern float32 time_last_1;
extern float32 time_current_1;
extern iTime t0;
extern iTime t1;
extern int32 promptSel;
extern int32 badCard;
extern int32 sAvailable;
extern int32 sNeeded;
extern int32 sAccessType;
extern uint8 preAutoSaving;

extern float32 time_elapsed_1;
extern int32 currentCard;
extern int32 currentGame;
extern float32 dontPoll;
extern int32 autoSaveCard;

int8 currSceneStr[32] = "TEMP";
int8 sceneRead[32] = "0000";
zSaveLoadUI zSaveLoadUITable[62]
#if 1
    = { { 0, 0, "ld gameslot group" },
        { 1, 0, "ld memcards group" },
        { 2, 0, "ld format prompt group" },
        { 3, 0, "ld mc missing group" },
        { 4, 0, "mnu3 ld mc1" },
        { 5, 0, "mnu3 ld mc2" },
        { 6, 0, "ld gameslot 0" },
        { 7, 0, "ld gameslot 1" },
        { 8, 0, "ld gameslot 2" },
        { 9, 0, "ld gameslot 3" },
        { 10, 0, "ld gameslot 4" },
        { 11, 0, "ld gameslot 5" },
        { 12, 0, "ld gameslot 6" },
        { 13, 0, "ld gameslot 7" },
        { 14, 0, "ld format prompt" },
        { 15, 0, "ld format yes" },
        { 16, 0, "ld format no" },
        { 17, 0, "ld mc missing" },
        { 18, 0, "ld nogames" },
        { 19, 0, "ld nogames" },
        { 20, 0, "mnu3 start group" },
        { 21, 0, "sv gameslot group" },
        { 22, 0, "sv memcards group" },
        { 23, 0, "sv mc1" },
        { 24, 0, "sv mc2" },
        { 25, 0, "sv gameslot 0" },
        { 26, 0, "sv gameslot 1" },
        { 27, 0, "sv gameslot 2" },
        { 28, 0, "sv gameslot 3" },
        { 29, 0, "sv gameslot 4" },
        { 30, 0, "sv gameslot 5" },
        { 31, 0, "sv gameslot 6" },
        { 32, 0, "sv gameslot 7" },
        { 33, 0, "sv format prompt" },
        { 34, 0, "sv overwrite" },
        { 35, 0, "sv overwrite damaged" },
        { 36, 0, "sv mc missing" },
        { 37, 0, "sv nospace" },
        { 38, 0, "sv nospacegame" },
        { 39, 0, "ld mc dontremove" },
        { 40, 0, "sv mc dontremove" },
        { 41, 0, "mnu4 mc dontremove" },
        { 42, 0, "ld badload" },
        { 43, 0, "sv badsave" },
        { 44, 0, "mnu3 badformat" },
        { 45, 0, "mnu3 badformatnocard" },
        { 46, 0, "mnu4 badformat" },
        { 47, 0, "mnu4 badformatnocard" },
        { 48, 0, "mnu3 format confirm" },
        { 49, 0, "mnu4 format confirm" },
        { 50, 0, "sv format group" },
        { 51, 0, "mnu3 disk free" },
        { 52, 0, "mnu4 disk free" },
        { 53, 0, "sv card damaged" },
        { 54, 0, "sv badsavenocard" },
        { 55, 0, "ld damaged card" },
        { 56, 0, "sv damaged card" },
        { 57, 0, "ld wrong device" },
        { 58, 0, "sv wrong device" },
        { 59, 0, "ld damaged save" },
        { 60, 0, "ld damaged save game" },
        { 0, 0, NULL } }
#endif
;

int8* thumbIconMap[15]
#if 1
    = { "ThumbIconHB", "ThumbIconJF", "ThumbIconBB", "ThumbIconGL", "ThumbIconB1",
        "ThumbIconRB", "ThumbIconBC", "ThumbIconSM", "ThumbIconB2", "ThumbIconKF",
        "ThumbIconGY", "ThumbIconDB", "ThumbIconB3", "ThumbIconHB", "ThumbIconHB" }
#endif
;

//This is in .bss instead of zSaveLoad.s
extern zSaveLoadGame zSaveLoadGameTable[3];

extern float32 _846;
extern float32 _847;
extern float32 _848;
extern float32 _849;
extern float64 _850;
extern float64 _852;

#ifndef NON_MATCHING
// func_800AD20C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zUpdateThumbIcon__Fv")
#else
void zUpdateThumbIcon()
{
    int32 i;
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

    for (i = start; i <= end; i++)
    {
        _zUI* gameSlot = (_zUI*)zSceneFindObject(zSaveLoadUITable[i].nameID);
        if (gameSlot != NULL && (gameSlot->uiFlags & 2) != 0)
        {
            uint32 id = xStrHash(gGameMode == eGameMode_Load ? "MNU3 THUMBICON" : "MNU4 THUMBICON");
            _zUI* thumbIcon = (_zUI*)zSceneFindObject(id);
            if (thumbIcon != NULL)
            {
                int32 index = zSaveLoadGameTable[i - start].thumbIconIndex;
                if (index >= 0 && index < 15)
                {
                    if (thumbIcon->sasset->textureID != xStrHash(thumbIconMap[index]))
                    {
                        zChangeThumbIcon(thumbIconMap[index]);
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
    const char* iconString = gGameMode == eGameMode_Load ? "MNU3 THUMBICON" : "MNU4 THUMBICON";
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
int32 zSaveLoad_CardCount()
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
int32 zSaveLoad_CardPromptFormat(int32 mode)
{
    int32 i = 0x15;
    if (mode == 1)
    {
        i = 0;
    }
    zSaveLoad_UIEvent(i, 0x5f);

    i = 0x16;
    if (mode == 1)
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
int32 zSaveLoad_CardPromptSpace(int32 mode)
{
    int32 i = 0x15;
    if (mode == 1)
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
int32 zSaveLoad_CardPromptGames(int32 mode)
{
    int32 i = 0x15;
    if (mode == 1)
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
int32 zSaveLoad_CardWrongDeviceErrorPrompt(int32 mode)
{
    int i = 0x3a;
    if (mode == 1)
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
    if (mode == 1)
    {
        i = 0x39;
    }
    zSaveLoad_UIEvent(i, 0x5f);
    return promptSel;
}

// func_800ADFE4
int32 zSaveLoad_CardDamagedErrorPrompt(int32 mode)
{
    int i = 0x38;
    if (mode == 1)
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
    if (mode == 1)
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
            rc = xSGTgtHaveRoom(xsgdata, cardNumber, 0xcc00, -1, &sNeeded, &sAvailable, 0);
        }
        else
        {
            rc = xSGTgtHaveRoom(xsgdata, cardNumber, 0xcc00, -1, &sNeeded, &sAvailable, 0);
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
            rc = xSGTgtHaveRoom(xsgdata, cardNumber, 0xcc00, -1, &sNeeded, &sAvailable, 0);
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

// func_800AE8BC
int32 zSaveLoad_CardCheckSlotOverwrite_Free(int32 cardNumber, int32 gameNumber)
{
    int32 i = zSaveLoad_CardCheckSlotEmpty_hasGame(cardNumber, gameNumber);
    switch (i)
    {
    case -1:
        // Won't match by simply returning -1
        return i;
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

// func_800AE924
int32 zSaveLoad_CardCheck(int32 cardNumber, int32 mode)
{
    int32 cardResult = zSaveLoad_CardCheckSingle(cardNumber);
    while (cardResult == 0)
    {
        badCard = 1;

        cardResult = zSaveLoad_CardPrompt(mode);
        if (cardResult == 2 || cardResult == 4)
        {
            return 2;
        }
        cardResult = zSaveLoad_CardCheckSingle(cardNumber);
    }
    return cardResult == 9 ? 9 : 1;
}

// func_800AE9B0
int32 zSaveLoad_CardCheckFormatted(int32 cardNumber, int32 mode)
{
    int32 result;
    while (result = zSaveLoad_CardCheckFormattedSingle(cardNumber), result != 1)
    {
        badCard = 1;

        result = zSaveLoad_CardCheckFormattedSingle(cardNumber);
        if (result == -1)
        {
            return -1;
        }

        if (result == 7)
        {
            return 7;
        }

        result = zSaveLoad_CardPromptFormat(mode);
        if (result == 2 || result == 4)
        {
            return 2;
        }

        sAccessType = 3;
        int32 tmp = format(cardNumber, mode);
        sAccessType = 2;
        return tmp != 1 ? tmp : 11;
    }
    return 1;
}

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
int32 zSaveLoad_CardCheckSpace(int32 cardNumber, int32 mode)
{
    int32 result = zSaveLoad_CardCheckSpaceSingle(cardNumber);
    while (result != 1)
    {
        badCard = 1;

        result = zSaveLoad_CardCheckSpaceSingle(cardNumber);
        if (result == -1 || result == 6 || result == 5)
        {
            return result;
        }

        result = zSaveLoad_CardPromptSpace(mode);
        if (result == 2 || result == 4)
        {
            return 2;
        }
    }
    return 1;
}

// func_800AEB48
int32 zSaveLoad_CardCheckGames(int32 cardNumber, int32 mode)
{
    int32 result = zSaveLoad_CardCheckGamesSingle(cardNumber);
    while (result != 1)
    {
        badCard = 1;

        result = zSaveLoad_CardCheckGamesSingle(cardNumber);
        if (result == -1 || result == 6 || result == 5)
        {
            return result;
        }

        result = zSaveLoad_CardPromptGames(mode);
        if (result == 2 || result == 4)
        {
            return 2;
        }
    }
    return 1;
}

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

// func_800AEC14
int32 zSaveLoad_CardCheckSlotEmpty(int32 cardNumber, int32 gameNumber)
{
    int32 i = zSaveLoad_CardCheckSlotEmpty_hasGame(cardNumber, gameNumber);
    while (i != 1)
    {
        i = zSaveLoad_CardCheckSlotEmpty_hasGame(cardNumber, gameNumber);
        if (i == -1 || i == 6)
        {
            return i;
        }

        i = zSaveLoad_CardPromptGameSlotEmpty();
        if (i == 2 || i == 4)
        {
            return 2;
        }
    }
    return 1;
}

// func_800AEC98
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_CardCheckSlotOverwrite__Fii")
#else
// Optimizing zSaveLoadGameTable lookup out of loop
int32 zSaveLoad_CardCheckSlotOverwrite(int32 cardNumber, int32 gameNumber)
{
    int32 iVar1 = zSaveLoad_CardCheckSlotOverwrite_Free(cardNumber, gameNumber);
    while (iVar1 != 1 || iVar1 == 10)
    {
        if (iVar1 == -1 || iVar1 == 10)
        {
            return iVar1;
        }

        if (IsValidName(zSaveLoadGameTable[gameNumber].label))
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
int32 zSaveLoad_CardPick(int32 mode)
{
    int32 done = 0;
    int32 formatDone = 0x16;

    currentCard = -1;
    promptSel = -1;

    if (mode == 1)
    {
        formatDone = 1;
    }

    zSaveLoad_UIEvent(formatDone, 0x51);
    formatDone = 0x17;
    if (mode == 1)
    {
        formatDone = 4;
    }

    zSaveLoad_UIEvent(formatDone, 0x4f);

    while (!done && promptSel == -1)
    {
        if (currentCard != -1)
        {
            done = zSaveLoad_CardCheck(currentCard, mode);
            switch (done)
            {
            case 2:
                currentCard = -1;
                promptSel = -1;
                continue;
            case -1:
                done = 0;
                promptSel = -1;
                continue;
            case 9:
                zSaveLoad_CardWrongDeviceErrorPrompt(mode);
                done = -1;
                promptSel = -1;
                continue;
            }

            done = zSaveLoad_CardCheckFormatted(currentCard, mode);
            switch (done)
            {
            case 5:
                done = 0;
                if (promptSel == 3)
                {
                    promptSel = -1;
                    continue;
                }
                if (promptSel == 4)
                {
                    currentCard = -1;
                    return -1;
                }
                break;
            case 6:
                done = 0;
                promptSel = -1;
                continue;
            case 7:
                zSaveLoad_CardDamagedErrorPrompt(mode);
                done = -1;
                promptSel = -1;
                continue;
            case 2:
            case 4:
                currentCard = -1;
                promptSel = -1;
                continue;
            case -1:
                done = 0;
                promptSel = -1;
                continue;
            case 8:
            case 9:
            case 10:
            case 11:

            default:
                break;
            }

            done = zSaveLoad_CardCheckValid(currentCard, mode);
            switch (done)
            {
            case 5:
            case 6:
                done = 0;
                promptSel = -1;
                continue;
            case 2:
            case 4:
                promptSel = -1;
                currentGame = -1;
                break;
            case 0:
            case 1:
                break;
            case -1:
                done = 0;
                promptSel = -1;
                continue;
            case 3:
                break;
            }
        }

        zSaveLoad_Tick();
    }

    formatDone = 0x16;
    if (mode == 1)
    {
        formatDone = 1;
    }

    zSaveLoad_UIEvent(formatDone, 0x5f);

    if (done == 1)
    {
        return done;
    }
    if (promptSel != -1)
    {
        return promptSel;
    }
    return done;
}

// func_800AEFA0
bool IsValidName(int8* name)
{
    if (strcmp((char*)name, "\0"
                            "Corrupt Save File\n\n\0"
                            "%s/%c%c\0"
                            "block\0"
                            "blocks\0"
                            "%d%%  %s    (%d %s)\n%s\0"
                            "%s (%d)\0"
                            "Empty") == 0)
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
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_BuildName__FPci")
#else
// Jumptable data
void zSaveLoad_BuildName(int8* name_txt, int32 idx)
{
    int8 desired[128];
    int8 current_name[128];

    BuildIt(desired, idx);

    int32 counter = 0;
    for (int32 i; i < idx; i++)
    {
        BuildIt(current_name, i);
        if (strcmp(zSaveLoadGameTable[i].label, zSaveLoadGameTable[idx].label) == 0 &&
            strcmp(current_name, "Corrupt Save File\n\n") != 0)
        {
            counter++;
        }
    }

    if (counter > 0)
    {
        sprintf(name_txt, "%s (%d)", desired, counter);
        name_txt[0x3f] = NULL;
    }
    else
    {
        strcpy(name_txt, desired);
    }
}
#endif

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
            obj = zSceneFindObject(xStrHash("SAVING GAME ICON UI")); //"SAVING GAME ICON UI"
            if (obj != NULL)
            {
                zEntEvent(obj, 3);
            }
            break;
        default:
            obj = zSceneFindObject(xStrHash("SAVING GAME ICON UI")); //"SAVING GAME ICON UI"
            if (obj != NULL)
            {
                zEntEvent(obj, 4);
            }

            obj = zSceneFindObject(xStrHash("MNU4 AUTO SAVE FAILED\0"
#if 1
                                            // TODO: Remove this once zSaveLoad_SaveLoop matches
                                            "PAUSE OPTIONS BKG GROUP\0"
                                            "PAUSE OPTIONS GROUP\0"
                                            "PAUSE OPTION MGR UIF\0"
                                            "PAUSE OPTION SAVE UIF\0"
                                            "MNU3 START CREATE NEW GAME NO\0"
                                            "MNU3 START CREATE NEW GAME YES\0"
                                            "MNU3 START CREATE NEW GAME\0"
                                            "BLUE ALPHA 1 UI\0"
                                            "MNU4 SAVE COMPLETED"
#endif
                                            )); //"MNU4 AUTO SAVE FAILED"
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

// func_800AF8D4
int32 zSaveLoad_DoAutoSave()
{
    int32 success = 0;
    int32 teststat = 1;
    en_XSGASYNC_STATUS asstat = XSG_ASTAT_NOOP;
    st_XSAVEGAME_DATA* svinst;

    XSGAutoData* autodata = xSGAutoSave_GetCache();
    if (autodata == NULL)
    {
        return -1;
    }
    if (!autodata->IsValid())
    {
        return -1;
    }

    int32 use_tgt = CardtoTgt(autodata->LastTarget());
    int32 lastGame = autodata->LastGame();
    autodata->Discard();
    svinst = xSGInit(XSG_MODE_SAVE);
    xSGTgtSelect(svinst, use_tgt);
    xSGGameSet(svinst, lastGame);

    if (svinst == NULL)
    {
        teststat = 0;
    }

    zSceneSave(globals.sceneCur, 0);

    xSGAddSaveClient(svinst, 'ROOM', 0, xSGT_SaveInfoCB, xSGT_SaveProcCB);
    xSGAddSaveClient(svinst, 'PREF', 0, xSGT_SaveInfoPrefsCB, xSGT_SaveProcPrefsCB);

    xSerial_svgame_register(svinst, XSG_MODE_SAVE);
    uint32 progress = zSceneCalcProgress();

    const int8* area;
    if (globals.sceneCur->sceneID == 'PG12')
    {
        area = zSceneGetLevelName('HB01');
    }
    else
    {
        area = zSceneGetLevelName(globals.sceneCur->sceneID);
    }

    int8 label[64];
    strncpy(label, area, sizeof(label));
    if (!xSGSetup(svinst, lastGame, label, progress, 0, zSceneGetLevelIndex()))
    {
        teststat = 0;
    }

    if (teststat != 0)
    {
        int32 iprocess = xSGProcess(svinst);
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

// func_800AFB84
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_SaveGame__Fv")

// func_800AFE6C
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_LoadGame__Fv")

// func_800B0064
uint32 zSaveLoad_LoadLoop()
{
    zSaveLoadInit();
    sAccessType = 1;
    int32 state = 0;
    while (state != 6)
    {
        switch (state)
        {
        case 0:
            while (zSaveLoad_CardCount() == 0)
            {
                zSaveLoad_CardPrompt(1);
            }
            zSaveLoad_UIEvent(0x14, 0x5f);
            state = 1;
            break;
        case 1:
            switch (zSaveLoad_CardPick(1))
            {
            case 1:
                state = 2;
                break;
            case 4:
                state = 8;
                break;
            case -1:
                state = 0;
                break;
            case 2:
                break;
            }
            break;
        case 2:
            switch (zSaveLoad_GameSelect(1))
            {
            case 2:
            case 4:
            case 5:
            case 6:
            case 7:
            case 9:
                state = 1;
                break;
            case 1:
                state = 9;
                break;
            case -1:
                zSaveLoad_ErrorPrompt(1);
                state = 1;
                break;
            }
            break;
        case 3:
            break;
        case 8:
            zGameModeSwitch(eGameMode_Title);
            zGameStateSwitch(0);
            state = 6;
            break;
        case 9:
            switch (zSaveLoad_LoadGame())
            {
            case 1:
                zGameModeSwitch(eGameMode_Game);
                zGameStateSwitch(0);
                state = 6;
                globals.autoSaveFeature = 1;
                break;
            case 7:
                zSaveLoad_DamagedSaveGameErrorPrompt(1);
                state = 1;
                break;
            default:
                zSaveLoad_ErrorPrompt(1);
                state = 1;
            }
        }
    }

    zSendEventToThumbIcon(4);
    return (uint32)sceneRead[0] << 0x18 | (uint32)sceneRead[1] << 0x10 |
           (uint32)sceneRead[2] << 0x8 | (uint32)sceneRead[3];
}

// func_800B023C
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Game/zSaveLoad.s", "zSaveLoad_SaveLoop__Fv")
#else
// Scheduling meme on the return
uint32 zSaveLoad_SaveLoop()
{
    zSaveLoadInit();
    int32 state = 0;
    saveSuccess = 0;

    while (state != 6)
    {
        switch (state)
        {
        case 0:
            while (zSaveLoad_CardCount() == 0)
            {
                zSaveLoad_CardPrompt(0);
            }
            state = 1;
            break;
        case 1:
            switch (zSaveLoad_CardPick(0))
            {
            case 1:
                state = 2;
                break;
            case 4:
                if (gGameState != 0)
                {
                    gGameMode = eGameMode_Pause;
                    state = 6;

                    xBase* sendTo = zSceneFindObject(xStrHash("PAUSE OPTIONS BKG GROUP"));
                    zEntEvent(sendTo, 0x5e);

                    sendTo = zSceneFindObject(xStrHash("PAUSE OPTIONS GROUP"));
                    zEntEvent(sendTo, 0x51);

                    sendTo = zSceneFindObject(xStrHash("PAUSE OPTION MGR UIF"));
                    zEntEvent(sendTo, 0x5e);

                    sendTo = zSceneFindObject(xStrHash("PAUSE OPTION SAVE UIF"));
                    zEntEvent(sendTo, 0x5e);
                }
                else
                {
                    gGameMode = eGameMode_Title;
                    state = 6;

                    xBase* sendTo = zSceneFindObject(xStrHash("MNU3 START CREATE NEW GAME NO"));
                    zEntEvent(sendTo, 0x51);

                    sendTo = zSceneFindObject(xStrHash("MNU3 START CREATE NEW GAME NO"));
                    zEntEvent(sendTo, 0x50);

                    sendTo = zSceneFindObject(xStrHash("MNU3 START CREATE NEW GAME YES"));
                    zEntEvent(sendTo, 0x5e);

                    sendTo = zSceneFindObject(xStrHash("MNU3 START CREATE NEW GAME"));
                    zEntEvent(sendTo, 0x51);

                    sendTo = zSceneFindObject(xStrHash("BLUE ALPHA 1 UI"));
                    zEntEvent(sendTo, 4);
                }
                break;
            case 11:
                state = 10;
                currentGame = 0;
                break;
            default:
                state = 0;
            }
            break;
        case 2:
            sAccessType = 2;
            switch (zSaveLoad_GameSelect(0))
            {
            case 2:
            case 4:
            case 5:
            case 6:
            case 7:
            case 9:
                state = 1;
                break;
            case 1:
                state = 10;
                break;
            case -1:
                zSaveLoad_ErrorPrompt(0);
                state = 1;
                break;
            }
            break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            break;
        case 11:
            zGameModeSwitch(eGameMode_Game);
            zGameStateSwitch(1);
            state = 6;
            break;
        case 10:
            int32 tmp = zSaveLoad_SaveGame();
            if (tmp == 1)
            {
                zGameModeSwitch(eGameMode_Game);
                zGameStateSwitch(1);
                saveSuccess = 1;
                state = 6;

                xBase* sendTo = zSceneFindObject(xStrHash("MNU4 SAVE COMPLETED"));
                zEntEvent(sendTo, 3);
            }
            else
            {
                switch (tmp)
                {
                case 7:
                    zSaveLoad_SaveDamagedErrorPrompt(0);
                    break;
                case 8:
                    zSaveLoad_CardYankedErrorPrompt(0);
                    break;
                case 10:
                    zSaveLoad_CardPromptSpace(0);
                    break;
                default:
                    zSaveLoad_ErrorPrompt(0);
                    break;
                }
                state = 1;
            }
            break;
        }
    }

    sAccessType = 0;
    return saveSuccess;
}
#endif

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
    if (globals.sceneCur->sceneID == 'PG12')
    {
        strcpy(currSceneStr, xUtil_idtag2string('HB01', 0));
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

// func_800B0800
int32 xSGT_LoadLoadCB(void* vp, st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt,
                      uint32 ui, int32 i)
{
#if 1
    // temporary buffer space used in BuildIt
    int8 tmpBuf[288] = {};
#endif
    int8 bigbuf[32] = {};
    int32 compdiff = 0;

    xSGReadData(xsgdata, rctxt, bigbuf, 1, strlen(currSceneStr));
    // compdiff = ;
    // compdiff -= ;
    if (strlen(currSceneStr) != strlen(bigbuf))
    {
        compdiff = 1;
    }
    if (compdiff == 0)
    {
        strcpy(sceneRead, bigbuf);
    }

    return compdiff == 0;
}

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
    // TODO: Fix this hardcoded offset once string generation is correct
    int8* label = zSaveLoadGameTable[slot].label;
    return strcmp(label, "ld gameslot group" + 0x49c) == 0 ? 1 : 0;
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
