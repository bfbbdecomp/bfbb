#include "zMenu.h"

#include "rwplcore.h"
#include "string.h"

#include "../Core/p2/iSystem.h"
#include "../Core/p2/iTRC.h"
#include "../Core/p2/iColor.h"
#include "../Core/p2/iTime.h"
#include "../Core/x/xMath.h"
#include "../Core/x/xSnd.h"
#include "../Core/x/xSkyDome.h"
#include "../Core/x/xEvent.h"
#include "../Core/x/xSFX.h"
#include "../Core/x/xTRC.h"
#include "../Core/x/xPad.h"
#include "../Core/x/xDebug.h"
#include "../Core/x/xCutscene.h"
#include "../Core/x/xString.h"
#include "../Core/x/xsavegame.h"

#include "zCamera.h"
#include "zGlobals.h"
#include "zMusic.h"
#include "zGame.h"
#include "zGameState.h"
#include "zGameExtras.h"
#include "zFMV.h"
#include "zSaveLoad.h"

// Internal global vars
extern float32 zMenu_float_48p264;
extern float32 zMenu_float_minus_one;
extern float32 zMenu_float_itof_value;
extern float32 zMenu_float_one;
extern float32 zMenu_float_one_over_sixty;
extern float32 zMenu_float_zero;
extern float32 zMenu_float_two;
extern float32 zMenu_float_ten;
extern float32 zMenu_float_0p1;
extern int8 zMenu_strings[];

// Global vars not owned by this translation unit
// TODO: Not sure the best header file to declare these two extern in
extern eGameMode gGameMode;
extern _zEnv* gCurEnv;

// Global vars owned by this translation unit
extern float32 sAttractMode_timer;
extern int32 sInMenu;
extern int32 sFirstBoot;
extern int8 corruptFiles[3][64];
extern int32 corruptFileCount;

// TODO: This probably wasn't volatile in the original code, but we have 100%
// matching code for all of the functions which use it with it marked as
// volatile, so leave it that way for now.
extern volatile int32 card;

extern float32 time_last;
extern float32 holdTmr;
extern float32 time_elapsed;
extern float32 time_current;
extern int8 menu_fmv_played;

// TODO: These aren't actually globals vars, they're the ctor data
// for initializing the structs.
extern iColor_tag BlackColorInitializer;
extern iColor_tag ClearColorInitializer;

// TODO: figure out what header to put this in
extern "C" {
void memcpy(void* a, const void* b, int32 size);
}

// func_800A6000
int32 zMenuRunning()
{
    return sInMenu;
}

// func_800A6008
void zMenuInit(uint32 theSceneID)
{
    sInMenu = 1;
    xsrand(iTimeGet());
    iTimeGet();
    xrand();
    zSceneInit(theSceneID, 0);
    xCameraInit(&globals.camera, 0x280, 0x1e0);
    zCameraReset(&globals.camera);
    xCameraSetScene(&globals.camera, globals.sceneCur);
    zMusicInit();
}

// func_800A608C
void zMenuExit()
{
    zMusicKill();
    xSndStopAll(-5);
    xCameraExit(&globals.camera);
    zSceneExit(0);
    sInMenu = 0;
}

// func_800A60D0
void zMenuSetup()
{
    globals.player.MaxHealth = 3;
    zSceneSetup();
    sAttractMode_timer = zMenu_float_48p264;
    zGameSetupPlayer();
    zEnvStartingCamera(gCurEnv);
    xCameraUpdate(&globals.camera, zMenu_float_minus_one);
    xSkyDome_Setup();
    zEntEventAll(NULL, 0, 0x57, NULL);
    zEntEventAll(NULL, 0, 0x59, NULL);
    if (globals.updateMgr)
    {
        xUpdateCull_Update(globals.updateMgr, 0x64);
    }
    zEntEvent(&globals.player.ent, 8);
}

// func_800A6180
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Game/zMenu.s", "zMenuLoop__Fv")
#else
// Floating point code uses different register allocation / order, but I think
// that the function has the correct behavior.
void zMenuLoop()
{
    uint32 s;

    if (sFirstBoot)
    {
        zGameModeSwitch(eGameMode_Intro);
        zGameStateSwitch(0);
        zMusicNotify(0);
    }
    else
    {
        zGameModeSwitch(eGameMode_Title);
        zGameStateSwitch(0);
        zMusicNotify(0);
    }

    time_last =
        zMenu_float_one / float(GET_BUS_FREQUENCY() >> 2) * iTimeGet() - zMenu_float_one_over_sixty;

    zGameExtras_NewGameReset();

    iColor_tag black = { 0, 0, 0, 255 }; //BlackColorInitializer;
    iColor_tag clear = { 0 }; //ClearColorInitializer;
    xScrFxFade(&black, &clear, zMenu_float_zero, NULL, 1);

    int32 ostrich_delay = 0xa;
    int32 draw_black;
    int32 ss = (int32)&globals.camera.id;

    time_last =
        zMenu_float_one / float(GET_BUS_FREQUENCY() >> 2) * iTimeGet() - zMenu_float_one_over_sixty;

    while (zMenuLoopContinue())
    {
        draw_black = 0;
        if (zGameModeGet() == eGameMode_Intro)
        {
            switch (zGameStateGet())
            {
            case 0:
                draw_black = 1;
                zGameStateSwitch(3);
                xScrFxFade(&clear, &black, zMenu_float_zero, NULL, 1);
                break;
            case 3:
                draw_black = 1;
                zFMVPlay(zFMVFileGetName(eFMVFile_LogoNick), 1, zMenu_float_two, 1, 0);
                zFMVPlay(zFMVFileGetName(eFMVFile_LogoTHQ), 1, zMenu_float_two, 1, 0);
                zFMVPlay(zFMVFileGetName(eFMVFile_LogoRW), 1, zMenu_float_two, 1, 0);
                holdTmr = zMenu_float_ten;
                zGameModeSwitch(eGameMode_Title);
                zGameStateSwitch(1);
                xScrFxFade(&black, &clear, zMenu_float_0p1, NULL, 1);

                time_last = zMenu_float_one / float(GET_BUS_FREQUENCY() >> 2) * iTimeGet() -
                            zMenu_float_one_over_sixty;
                break;
            }
        }

        time_current = zMenu_float_one / float(GET_BUS_FREQUENCY() >> 2) * iTimeGet();
        time_elapsed = time_current - time_last;
        if (menu_fmv_played && time_elapsed > zMenu_float_one_over_sixty)
        {
            time_last = time_current - zMenu_float_one_over_sixty;
            time_elapsed = zMenu_float_one_over_sixty;
        }

        menu_fmv_played = 0;
        if (time_elapsed < zMenu_float_zero)
        {
            time_elapsed = zMenu_float_one_over_sixty;
        }

        if (zGameModeGet() == eGameMode_Title)
        {
            sAttractMode_timer = sAttractMode_timer - time_elapsed;
            if (sAttractMode_timer < zMenu_float_zero)
            {
                xEnt* title1 = (xEnt*)zSceneFindObject(xStrHash(zMenu_strings));
                xEnt* title2 = (xEnt*)zSceneFindObject(xStrHash(zMenu_strings + 0x18));
                if ((title1 && xEntIsVisible(title1)) || (title2 && xEntIsVisible(title2)))
                {
                    zGameStateSwitch(1);
                }
                else
                {
                    sAttractMode_timer = zMenu_float_48p264;
                }
            }

            if (zGameStateGet() == 1)
            {
                if (sFirstBoot)
                {
                    zMenuFirstBootSet(0);
                }
                else
                {
                    zMenuFMVPlay(zFMVFileGetName(eFMVFile_Demo1), -1, zMenu_float_0p1, true,
                                 globals.firstStartPressed);
                }
                zGameStateSwitch(0);
                sAttractMode_timer = zMenu_float_48p264;
            }
            else
            {
                zMusicUpdate(time_elapsed);
            }

            if (mPad[globals.currentActivePad].pressed)
            {
                sAttractMode_timer = zMenu_float_48p264;
            }
        }

        time_last = time_current;
        xPadUpdate(globals.currentActivePad, time_elapsed);

        if (globals.firstStartPressed == 0)
        {
            xPadUpdate(1, time_elapsed);
            xPadUpdate(2, time_elapsed);
            xPadUpdate(3, time_elapsed);
        }

        xDrawBegin();
        uint32 wasPaused = zMenuIsPaused();
        zSceneUpdate(time_elapsed);

        if (wasPaused == 0)
        {
            globals.player.ent.update(&globals.player.ent, globals.sceneCur, time_elapsed);
        }

        xSndUpdate();
        iTRCDisk::CheckDVDAndResetState();
        zCameraUpdate(&globals.camera, time_elapsed);
        xCameraBegin(&globals.camera, 1);
        zSceneRender();
        xDebugUpdate();

        if (draw_black)
        {
            RwRenderStateSet(rwRENDERSTATEZTESTENABLE, 0);
            RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, 0);
            RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)1);
            RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)1);
            xScrFxDrawScreenSizeRectangle();
        }

        xDrawEnd();
        xCameraEnd(&globals.camera, time_elapsed, 1);
        xCameraShowRaster(&globals.camera);
        zMenuUpdateMode();

        s = ss;
        if (globals.sceneCur->pendingPortal)
        {
            int8* src = (int8*)&globals.sceneCur->pendingPortal->passet->sceneID;
            int8* tgt = (int8*)&s;
            tgt[0] = src[3];
            tgt[1] = src[2];
            tgt[2] = src[1];
            tgt[3] = src[0];
            if (src[0] < 0x30 || src[0] > 0x39)
            {
                memcpy(tgt, src, sizeof(uint32));
            }
            zGameModeSwitch(eGameMode_Game);
            zGameStateSwitch(0);
        }

        ++gFrameCount;

        if (ostrich_delay > 0)
        {
            --ostrich_delay;
        }
        else
        {
            zGameSetOstrich(eGameOstrich_InScene);
            if (gTrcPad[0].state != TRC_PadInserted)
            {
                globals.dontShowPadMessageDuringLoadingOrCutScene = 1;
                xTRCPad(gTrcPad[0].id, TRC_PadMissing);
            }
        }
    }

    zGameExtras_NewGameReset();
}
#endif

// func_800A6748
uint32 zMenuIsPaused()
{
    return 0;
}

// func_800A6750
uint32 zMenuLoopContinue()
{
    return gGameMode != eGameMode_Game;
}

// func_800A6768
uint32 zMenuUpdateMode()
{
    uint32 retVal = 0;
    if (gGameMode == eGameMode_Load)
    {
        float32 elapsed1 = float(iTimeGet()) - time_last;
        retVal = zSaveLoad_LoadLoop();
        if (retVal + 0xcfd00000 == 0x3030)
        {
            retVal = 0;
        }
        else
        {
            if (retVal + 0xb2b20000 == 0x5533)
            {
                retVal = 0x48423030;
            }
        }
        time_last = elapsed1 + float(iTimeGet());
    }
    else if (gGameMode == eGameMode_Save)
    {
        zSaveLoad_SaveLoop();
        globals.autoSaveFeature = 1;
        retVal = 0x48423030;
    }
    return retVal;
}

// func_800A6828
uint32 zMenuGetCorruptFiles(int8 name[][64])
{
    for (int i = 0; i < corruptFileCount; ++i)
    {
        strcpy(name[i], corruptFiles[i]);
    }
    return corruptFileCount;
}

// func_800A6894
bool zMenuCardCheckStartup(int32* bytesNeeded, int32* availOnDisk, int32* neededFiles)
{
    st_XSAVEGAME_DATA* ldinst = xSGInit(XSG_MODE_SAVE);
    int32 tgtcnt, tgtmax;
    int32 rc = 0;
    tgtcnt = xSGTgtCount(ldinst, &tgtmax);
    int32 tgtslot;
    switch (tgtcnt)
    {
    case 2:
        card = -1;
        xSGTgtPhysSlotIdx(ldinst, 0);
        xSGTgtSelect(ldinst, 0);
        tgtslot = xSGTgtIsFormat(ldinst, 0, NULL);
        if (tgtslot == 0)
        {
            *bytesNeeded = -1;
            *availOnDisk = -1;
            *neededFiles = -1;
            card = xSGTgtPhysSlotIdx(ldinst, 0);
            rc = 1;
            break;
        }
        else if (tgtslot < 0)
        {
            *bytesNeeded = -5;
            *availOnDisk = -5;
            *neededFiles = -5;
            card = xSGTgtPhysSlotIdx(ldinst, 0);
            rc = 1;
            break;
        }
        else
        {
            corruptFileCount = xSGCheckForCorruptFiles(ldinst, corruptFiles);
            if (corruptFileCount != 0)
            {
                *bytesNeeded = -4;
                *availOnDisk = -4;
                *neededFiles = -4;
                card = xSGTgtPhysSlotIdx(ldinst, 0);
                rc = 1;
                break;
            }
            else
            {
                rc = xSGTgtHaveRoomStartup(ldinst, 0, 0x0000CC00, -1, bytesNeeded, availOnDisk,
                                           neededFiles);
                if (rc)
                {
                    break;
                }
                card = xSGTgtPhysSlotIdx(ldinst, 0);
                rc = 0;
                break;
            }
        }

    case 1:
        if (xSGTgtPhysSlotIdx(ldinst, 0) == 1)
        {
            card = iSGCheckForWrongDevice();
            if (card >= 0)
            {
                rc = 1;
                *bytesNeeded = -2;
                *availOnDisk = -2;
                *neededFiles = -2;
                break;
            }
        }

        xSGTgtSelect(ldinst, 0);
        tgtslot = xSGTgtIsFormat(ldinst, 0, NULL);
        if (tgtslot == 0)
        {
            *bytesNeeded = -1;
            *availOnDisk = -1;
            *neededFiles = -1;
            card = xSGTgtPhysSlotIdx(ldinst, 0);
            rc = 1;
            break;
        }
        else if (tgtslot < 0)
        {
            *bytesNeeded = -5;
            *availOnDisk = -5;
            *neededFiles = -5;
            card = xSGTgtPhysSlotIdx(ldinst, 0);
            rc = 1;
            break;
        }
        else
        {
            corruptFileCount = xSGCheckForCorruptFiles(ldinst, corruptFiles);
            if (corruptFileCount != 0)
            {
                *bytesNeeded = -4;
                *availOnDisk = -4;
                *neededFiles = -4;
                card = xSGTgtPhysSlotIdx(ldinst, 0);
                rc = 1;
                break;
            }
            else
            {
                rc = xSGTgtHaveRoomStartup(ldinst, 0, 0x0000CC00, -1, bytesNeeded, availOnDisk,
                                           neededFiles);
                if (rc)
                {
                    break;
                }
                card = xSGTgtPhysSlotIdx(ldinst, 0);
                break;
            }
        }

    case 0:
        rc = 1;
        card = iSGCheckForWrongDevice();
        if (card >= 0)
        {
            *bytesNeeded = -2;
            *availOnDisk = -2;
            *neededFiles = -2;
            break;
        }
        else
        {
            *bytesNeeded = -3;
            *availOnDisk = -3;
            *neededFiles = -3;
            break;
        }
    }
    xSGDone(ldinst);
    return !rc;
}

// func_800A6B98
int32 zMenuGetBadCard()
{
    return card + 1;
}

// func_800A6BA4
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Game/zMenu.s", "zMenuFMVPlay__FPcUifbb")
#else
// Floating point assignments are out of order.
void zMenuFMVPlay(int8* filename, uint32 buttons, float32 time, bool skippable, bool lockController)
{
    if (filename)
    {
        zFMVPlay(filename, buttons, time, skippable, lockController);
        time_last = float(iTimeGet());
        time_current = time_last;
        sAttractMode_timer = zMenu_float_48p264;
    }
}
#endif

// func_800A6BE8
int32 zMenuIsFirstBoot()
{
    return sFirstBoot;
}

// func_800A6BF0
void zMenuFirstBootSet(int32 value)
{
    sFirstBoot = value;
}
