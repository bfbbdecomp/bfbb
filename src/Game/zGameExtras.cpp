#include <types.h>
#include "../Core/x/xString.h"
#include "../Core/x/xSnd.h"
#include "../Core/x/xEnt.h"
#include "../Core/x/xCounter.h"
#include "../Core/p2/iTime.h"
#include "zGameExtras.h"
#include "zEntPlayer.h"
#include "zGlobals.h"
#include "zGame.h"
#include "zScene.h"

/*
A quick note about how cheats appear to work:

A lot of the cheat callback functions only play sounds.
This doesn't mean those cheats aren't doing anything though.

The callback functions in this file are only run once when the cheat is entered.
Cheats that modify gameplay are probably checked/processed elsewhere in the game engine.
*/

extern int8 zGameExtras_strings[];

extern float32 zGameExtras_f_0;
extern float32 zGameExtras_f_1;

extern zGlobals globals;
extern xEnt* sGalleryTitle;

extern int32 g_currDay;
extern int32 g_currMonth;
extern int32 g_gameExtraFlags;
extern int32 g_flg_chEnabled;
extern int32 g_enableGameExtras;

extern uint32 sCheatPressed[16];

static EGGItemFuncs EGGEmpty = {
    NULL,
    NULL,
    NULL,
    NULL,
};

static EGGItem g_eggBasket[] = { { EGG_check_ExtrasFlags, &EGGEmpty, NULL, NULL }, {} };

// TODO: let the compiler generate me
static uint32 jumpTable[] = {
    0x80099AFC, //
    0x8009995C, //
    0x80099978, //
    0x80099994, //
    0x80099A00, //
    0x80099AFC, //
    0x80099A1C, //
    0x80099A38, //
    0x80099A54, //
    0x80099A70, //
    0x80099A8C, //
    0x80099AE4, //
    0x80099AFC //
};

#define Y (1 << 18)
#define X (1 << 17)

// 21 cheats
static uint32 sCheatAddShiny[16] = { 0, 0, 0, 0, 0, 0, 0, 0, Y, X, X, Y, Y, X, X, Y };
static uint32 sCheatAddSpatulas[16] = { 0, 0, 0, 0, 0, 0, 0, 0, X, Y, Y, X, X, Y, Y, X };
static uint32 sCheatBubbleBowl[16] = { 0, 0, 0, 0, 0, 0, 0, 0, X, Y, X, Y, X, X, Y, Y };
static uint32 sCheatCruiseBubble[16] = { 0, 0, 0, 0, 0, 0, 0, 0, Y, X, Y, X, Y, Y, X, X };
static uint32 sCheatMonsterGallery[16] = { 0, 0, 0, 0, 0, 0, 0, 0, X, Y, X, Y, Y, X, Y, X };
static uint32 sCheatArtTheatre[16] = { 0, 0, 0, 0, 0, 0, 0, 0, Y, X, Y, X, X, Y, X, Y };
static uint32 sCheatChaChing[16] = { Y, X, Y, X, X, Y, X, X, X, Y, Y, Y, Y, X, X, Y };
static uint32 sCheatExpertMode[16] = { X, X, X, Y, Y, X, X, X, Y, X, Y, Y, Y, X, Y, Y };
static uint32 sCheatSwapCCLR[16] = { 0, 0, 0, 0, 0, 0, 0, 0, Y, Y, X, X, X, X, Y, Y };
static uint32 sCheatSwapCCUD[16] = { 0, 0, 0, 0, 0, 0, 0, 0, Y, X, X, X, X, X, X, Y };
static uint32 sCheatRestoreHealth[16] = { 0, 0, 0, 0, X, X, X, X, Y, X, Y, X, Y, Y, Y, Y };
static uint32 sCheatShrapBob[16] = { 0, 0, 0, 0, X, X, X, X, Y, Y, X, Y, X, X, X, Y };
static uint32 sCheatNoPants[16] = { 0, 0, 0, 0, X, X, X, X, Y, X, X, Y, X, Y, Y, X };
static uint32 sCheatCruiseControl[16] = { 0, 0, 0, 0, X, X, X, X, Y, Y, X, X, Y, X, Y, Y };
static uint32 sCheatBigPlank[16] = { 0, 0, 0, 0, Y, Y, Y, Y, X, Y, X, Y, X, X, X, X };
static uint32 sCheatSmallPeep[16] = { 0, 0, 0, 0, Y, Y, Y, Y, Y, X, Y, X, Y, X, Y, X };
static uint32 sCheatSmallCoStars[16] = { 0, 0, 0, 0, Y, Y, Y, Y, X, Y, X, Y, Y, Y, Y, Y };
static uint32 sCheatRichPeep[16] = { 0, 0, 0, 0, Y, Y, Y, Y, Y, X, Y, X, X, Y, X, Y };
static uint32 sCheatPanHandle[16] = { 0, 0, 0, 0, Y, Y, Y, Y, Y, X, Y, X, Y, Y, X, X };
static uint32 sCheatMedics[16] = { 0, 0, 0, 0, Y, Y, Y, Y, Y, X, Y, X, X, X, Y, Y };
static uint32 sCheatDogTrix[16] = { 0, 0, 0, 0, Y, Y, Y, Y, Y, X, Y, X, Y, X, X, Y };

int32 zGameExtras_ExtrasFlags()
{
    return g_gameExtraFlags;
}

void zGameExtras_MoDay(int32* month, int32* day)
{
    *month = g_currMonth;
    *day = g_currDay;
}

void zGameExtras_SceneInit()
{
    g_enableGameExtras = 0;
    g_currDay = iGetDay();
    g_currMonth = iGetMonth();
    int32 somethingIsEnabled = 0;

    EGGItem* egg_next = g_eggBasket;

    while (egg_next->fun_check)
    {
        EGGItem* egg = egg_next++;

        egg->enabled = egg->fun_check(egg);

        if (egg->enabled)
        {
            somethingIsEnabled++;

            if (egg->funcs->fun_init)
            {
                egg->funcs->fun_init(egg);
            }
        }
    }

    if (somethingIsEnabled)
    {
        g_enableGameExtras = 1;
    }
}

void zGameExtras_SceneReset()
{
    if (!g_enableGameExtras)
    {
        return;
    }

    EGGItem* egg_next = g_eggBasket;

    while (egg_next->fun_check)
    {
        EGGItem* egg = egg_next++;

        if (egg->enabled)
        {
            if (egg->funcs->fun_reset)
            {
                egg->funcs->fun_reset(egg);
            }
        }
    }
}

void zGameExtras_SceneExit()
{
    if (!g_enableGameExtras)
    {
        return;
    }

    if (globals.cmgr)
    {
        return;
    }

    if (zGameIsPaused())
    {
        return;
    }

    EGGItem* egg_next = g_eggBasket;

    while (egg_next->fun_check)
    {
        EGGItem* egg = egg_next++;

        if (egg->enabled)
        {
            egg->enabled = 0;

            if (egg->funcs->fun_done)
            {
                egg->funcs->fun_done(egg);
            }
        }
    }

    g_enableGameExtras = 0;
    g_currDay = 0;
    g_currMonth = 0;
}

void zGameExtras_SceneUpdate(float32 dt)
{
    if (!g_enableGameExtras)
    {
        return;
    }

    if (globals.cmgr)
    {
        return;
    }

    if (zGameIsPaused())
    {
        return;
    }

    EGGItem* egg_next = g_eggBasket;

    while (egg_next->fun_check)
    {
        EGGItem* egg = egg_next++;

        if (egg->enabled)
        {
            if (egg->funcs->fun_update)
            {
                egg->funcs->fun_update(dt, egg);
            }
        }
    }
}

// func_80099938
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "EGG_check_ExtrasFlags__FP7EGGItem")

int32 zGameExtras_CheatFlags()
{
    return g_flg_chEnabled;
}

// func_80099B0C
#if 1
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameExtras_NewGameReset__Fv")
#else if
void zGameExtras_NewGameReset()
{
    // very close to matching
    g_flg_chEnabled = 0;
    zGlobalSettings* gs = &globals.player.g;

    gs->ShinyValuePurple = 50;
    gs->ShinyValueBlue = 10;
    gs->ShinyValueGreen = 5;
    gs->ShinyValueYellow = 2;
    gs->ShinyValueRed = 1;
}
#endif

void zGameExtras_Save(xSerial* xser)
{
    xser->Write(g_flg_chEnabled & 0xFFFF);
}

void zGameExtras_Load(xSerial* xser)
{
    int32 keepers[2];
    keepers[0] = 0;
    xser->Read(keepers);
    g_flg_chEnabled |= keepers[0];
}

uint32 TestCheat(uint32 cheat[])
{
    int32 i = 15;

    if (!cheat[i])
    {
        return 0;
    }

    for (i; i >= 0; i--)
    {
        if (cheat[i] != sCheatPressed[i])
        {
            return 0;
        }
    }

    return 1;
}

void AddToCheatPressed(uint32 button)
{
    for (int32 i = 0; i < 15; i++)
    {
        sCheatPressed[i] = sCheatPressed[i + 1];
    }

    sCheatPressed[15] = button;
}

// func_80099D3C
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameCheats__Ff")

void GEC_CheatFlagAdd(int32 bit)
{
    g_flg_chEnabled |= bit;
}

void GEC_CheatFlagToggle(int32 bit)
{
    g_flg_chEnabled ^= bit;
}

// func_80099F2C
#if 1
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_dfltSound__Fv")
#else
void GEC_dfltSound()
{
}
#endif

void GEC_cb_AddShiny()
{
    zPlayerGlobals* pg = &globals.player;

    if (pg->Inv_Shiny <= 50000)
    {
        if (pg->Inv_Shiny > 49000)
            pg->Inv_Shiny = 50000;
        else
            pg->Inv_Shiny += 1000;
    }

    uint32 aid_snd = xStrHash(zGameExtras_strings + 54); // SBG01019

    if (aid_snd)
    {
        xSndPlay(aid_snd, zGameExtras_f_1, zGameExtras_f_0, 0x80, 0, 0, SND_CAT_GAME,
                 zGameExtras_f_0);
    }
}

void GEC_cb_AddSpatulas()
{
    zPlayerGlobals* pg = &globals.player;
    pg->Inv_Spatula = (pg->Inv_Spatula + 10 >= 100) ? 100 : pg->Inv_Spatula + 10;

    uint32 aid_snd = xStrHash(zGameExtras_strings + 63); // "gspatula_sb"

    if (aid_snd)
    {
        xSndPlay(aid_snd, zGameExtras_f_1, zGameExtras_f_0, 0x80, 0, 0, SND_CAT_GAME,
                 zGameExtras_f_0);
    }
}

void GEC_cb_BubbleBowl()
{
    globals.player.g.PowerUp[0] = true;

    uint32 aid_snd = xStrHash(zGameExtras_strings + 75); // "SBG01092"

    if (aid_snd)
    {
        xSndPlay(aid_snd, zGameExtras_f_1, zGameExtras_f_0, 0x80, 0, 0, SND_CAT_GAME,
                 zGameExtras_f_0);
    }
}

void GEC_cb_CruiseBubble()
{
    globals.player.g.PowerUp[1] = true;

    uint32 aid_snd = xStrHash(zGameExtras_strings + 84); // "SB_cruise_hit"

    if (aid_snd)
    {
        xSndPlay(aid_snd, zGameExtras_f_1, zGameExtras_f_0, 0x80, 0, 0, SND_CAT_GAME,
                 zGameExtras_f_0);
    }
}

// func_8009A220
#if 1
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_MonsterGallery__Fv")
#else
void GEC_cb_MonsterGallery()
{
}
#endif

void GEC_cb_UnlockArtTheatre()
{
    uint32 aid_theatreCounter = xStrHash(zGameExtras_strings + 120); // "HB01_FREE_MOVIE_PASS"
    _xCounter* cntr = (_xCounter*)zSceneFindObject(aid_theatreCounter);
    cntr->count = 1;
    zEntPlayer_SNDPlay(ePlayerSnd_Taxi, zGameExtras_f_0);
}

void GEC_cb_ChaChing()
{
    zGlobalSettings* gs = &globals.player.g;
    gs->ShinyValuePurple = 100;
    gs->ShinyValueBlue = 50;
    gs->ShinyValueGreen = 25;
    gs->ShinyValueYellow = 10;
    gs->ShinyValueRed = 5;

    uint32 aid_snd = xStrHash(zGameExtras_strings + 54); // "SBG01019"
    xSndPlay(aid_snd, zGameExtras_f_1, zGameExtras_f_0, 0x80, 0, 0, SND_CAT_GAME, zGameExtras_f_0);
}

// func_8009A380
#if 1
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_RestoreHealth__Fv")
#else
void GEC_cb_RestoreHealth()
{
}
#endif

void GEC_cb_ExpertMode()
{
    GEC_dfltSound();
}

void GEC_cb_ShrapBobMode()
{
    GEC_dfltSound();
}

void GEC_cb_NoPantsMode()
{
    uint32 aid_snd = xStrHash(zGameExtras_strings + 159); // "SBG01023"
    xSndPlay(aid_snd, zGameExtras_f_1, zGameExtras_f_0, 0x80, 0, 0, SND_CAT_GAME, zGameExtras_f_0);
}

// func_8009A4B0
#if 1
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_CruiseControl__Fv")
#else
void GEC_cb_CruiseControl()
{
}
#endif

void GEC_cb_SwapCCLR()
{
    GEC_dfltSound();
}

void GEC_cb_SwapCCUD()
{
    GEC_dfltSound();
}

// func_8009A5AC
#if 1
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_villSound__Fv")
#else
void GEC_villSound()
{
}
#endif

void GEC_cb_BigPlank()
{
    GEC_villSound();
}

void GEC_cb_Medics()
{
    GEC_villSound();
}

void GEC_cb_DogTrix()
{
    GEC_villSound();
}

void GEC_cb_SmallPeep()
{
    GEC_villSound();
}

void GEC_cb_SmallCostars()
{
    GEC_villSound();
}

void GEC_cb_RichPeep()
{
    GEC_villSound();
}

void GEC_cb_PanHandle()
{
    GEC_villSound();
}

void zGame_HackGalleryInit()
{
    uint32 obj = xStrHash(zGameExtras_strings + 263); // "KIOSK SELECT UIF"
    sGalleryTitle = (xEnt*)zSceneFindObject(obj);
}

uint32 zGame_HackIsGallery()
{
    if (sGalleryTitle && xEntIsVisible(sGalleryTitle))
    {
        return 1;
    }
    return 0;
}

// func_8009A810
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "xUtil_choose_esc__0_Ui_esc__1___FPCUiiPCf")
