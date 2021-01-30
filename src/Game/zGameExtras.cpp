#include <types.h>
#include "../Core/x/xString.h"
#include "../Core/x/xSnd.h"
#include "../Core/x/xEnt.h"
#include "../Core/x/xCounter.h"
#include "zGameExtras.h"
#include "zEntPlayer.h"
#include "zGlobals.h"
#include "zScene.h"

extern int8 zGameExtras_strings[];

extern float32 zGameExtras_f_0;
extern float32 zGameExtras_f_1;

extern zGlobals globals;
extern xEnt* sGalleryTitle;

extern int32 g_currDay;
extern int32 g_currMonth;
extern int32 g_gameExtraFlags;
extern int32 g_flg_chEnabled;
// extern int32 g_enableGameExtras;
extern uint32 sCheatPressed[16];

int32 zGameExtras_ExtrasFlags()
{
    return g_gameExtraFlags;
}

void zGameExtras_MoDay(int32* month, int32* day)
{
    *month = g_currMonth;
    *day = g_currDay;
}

// func_8009969C
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameExtras_SceneInit__Fv")

// func_80099760
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameExtras_SceneReset__Fv")

// func_800997D8
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameExtras_SceneExit__Fv")

// func_80099890
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGameExtras_SceneUpdate__Ff")

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

uint32 TestCheat(uint32* cheat)
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

void AddToCheatPressed(uint32 param_1)
{
    // a cool example of loop unrolling
    for (int32 i = 0; i < 15; i++)
    {
        sCheatPressed[i] = sCheatPressed[i + 1];
    }
    sCheatPressed[15] = param_1;
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
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_dfltSound__Fv")

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
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_MonsterGallery__Fv")

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
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_RestoreHealth__Fv")

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
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_CruiseControl__Fv")

void GEC_cb_SwapCCLR()
{
    GEC_dfltSound();
}

void GEC_cb_SwapCCUD()
{
    GEC_dfltSound();
}

// func_8009A5AC
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_villSound__Fv")

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

// func_8009A7D0
#if 1
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGame_HackIsGallery__Fv")
#else
uint32 zGame_HackIsGallery()
{
    // probably a ternary, only 2 lines in dwarf?
    uint32 res = (sGalleryTitle == NULL || xEntIsVisible(sGalleryTitle) == 0) ? 0 : 1;
    return res;
}
#endif

// func_8009A810
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "xUtil_choose_esc__0_Ui_esc__1___FPCUiiPCf")
