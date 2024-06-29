#include <types.h>
#include <string.h>

#include "iTime.h"

#include "xString.h"
#include "xSnd.h"
#include "xEnt.h"
#include "xCounter.h"
#include "xMath.h"

#include "zGameExtras.h"
#include "zEntPlayer.h"
#include "zGlobals.h"
#include "zGame.h"
#include "zScene.h"

static int32 g_enableGameExtras;
static int32 g_currDay;
static int32 g_currMonth;
static int32 g_gameExtraFlags;
static int32 g_flg_chEnabled;
static float32 sCheatTimer;
static int32 sCheatInputCount;

static EGGItemFuncs EGGEmpty = {};

static EGGItem g_eggBasket[] = { { EGG_check_ExtrasFlags, &EGGEmpty, NULL, NULL }, {} };

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

int32 EGG_check_ExtrasFlags(EGGItem*)
{
    switch (g_currMonth)
    {
    case JANUARY:
        if (g_currDay == 1) // New Year's Day
            g_gameExtraFlags |= 0b000000001;
        break;

    case FEBRUARY:
        if (g_currDay == 2)
            g_gameExtraFlags |= 0b100000000;
        break;

    case MARCH:
        if (g_currDay == 15)
            g_gameExtraFlags |= 0b000001000;
        if (g_currDay == 17) // St. Patrick's Day
            g_gameExtraFlags |= 0b000000100;
        if (g_currDay == 18)
            g_gameExtraFlags |= 0b100000000;
        if (g_currDay == 21)
            g_gameExtraFlags |= 0b100000000;
        if (g_currDay == 22)
            g_gameExtraFlags |= 0b100000000;
        break;

    case APRIL:
        if (g_currDay == 1) // April Fools' Day
            g_gameExtraFlags |= 0b010000000;
        break;

    case MAY:
        break;

    case JUNE:
        if (g_currDay == 6)
            g_gameExtraFlags |= 0b001000000;
        break;

    case JULY:
        if (g_currDay == 4) // Independence Day
            g_gameExtraFlags |= 0b000000010;
        break;

    case AUGUST:
        if (g_currDay == 8)
            g_gameExtraFlags |= 0b100000000;
        break;

    case SEPTEMBER:
        if (g_currDay == 8)
            g_gameExtraFlags |= 0b000000010;
        break;

    case OCTOBER:
        if (g_currDay == 5)
            g_gameExtraFlags |= 0b100000000;
        if (g_currDay == 14)
            g_gameExtraFlags |= 0b100000000;
        if (g_currDay == 22)
            g_gameExtraFlags |= 0b100000000;
        if (g_currDay == 31) // Halloween
            g_gameExtraFlags |= 0b000100000;
        break;

    case NOVEMBER:
        if (g_currDay == 5)
            g_gameExtraFlags |= 0b100000000;
        break;

    case DECEMBER:
        break;
    }

    return 0;
}

// These defines make the cheat inputs easier to read
#define Y XPAD_BUTTON_SQUARE
#define X XPAD_BUTTON_O
#define L1 XPAD_BUTTON_L1
#define R1 XPAD_BUTTON_R1

// 21 cheats
// These symbols weren't actually defined as static. They are global in the object file.
uint32 sCheatAddShiny[16] = { 0, 0, 0, 0, 0, 0, 0, 0, Y, X, X, Y, Y, X, X, Y };
uint32 sCheatAddSpatulas[16] = { 0, 0, 0, 0, 0, 0, 0, 0, X, Y, Y, X, X, Y, Y, X };
uint32 sCheatBubbleBowl[16] = { 0, 0, 0, 0, 0, 0, 0, 0, X, Y, X, Y, X, X, Y, Y };
uint32 sCheatCruiseBubble[16] = { 0, 0, 0, 0, 0, 0, 0, 0, Y, X, Y, X, Y, Y, X, X };
uint32 sCheatMonsterGallery[16] = { 0, 0, 0, 0, 0, 0, 0, 0, X, Y, X, Y, Y, X, Y, X };
uint32 sCheatArtTheatre[16] = { 0, 0, 0, 0, 0, 0, 0, 0, Y, X, Y, X, X, Y, X, Y };
uint32 sCheatChaChing[16] = { Y, X, Y, X, X, Y, X, X, X, Y, Y, Y, Y, X, X, Y };
uint32 sCheatExpertMode[16] = { X, X, X, Y, Y, X, X, X, Y, X, Y, Y, Y, X, Y, Y };
uint32 sCheatSwapCCLR[16] = { 0, 0, 0, 0, 0, 0, 0, 0, Y, Y, X, X, X, X, Y, Y };
uint32 sCheatSwapCCUD[16] = { 0, 0, 0, 0, 0, 0, 0, 0, Y, X, X, X, X, X, X, Y };
uint32 sCheatRestoreHealth[16] = { 0, 0, 0, 0, X, X, X, X, Y, X, Y, X, Y, Y, Y, Y };
uint32 sCheatShrapBob[16] = { 0, 0, 0, 0, X, X, X, X, Y, Y, X, Y, X, X, X, Y };
uint32 sCheatNoPants[16] = { 0, 0, 0, 0, X, X, X, X, Y, X, X, Y, X, Y, Y, X };
uint32 sCheatCruiseControl[16] = { 0, 0, 0, 0, X, X, X, X, Y, Y, X, X, Y, X, Y, Y };
uint32 sCheatBigPlank[16] = { 0, 0, 0, 0, Y, Y, Y, Y, X, Y, X, Y, X, X, X, X };
uint32 sCheatSmallPeep[16] = { 0, 0, 0, 0, Y, Y, Y, Y, Y, X, Y, X, Y, X, Y, X };
uint32 sCheatSmallCoStars[16] = { 0, 0, 0, 0, Y, Y, Y, Y, X, Y, X, Y, Y, Y, Y, Y };
uint32 sCheatRichPeep[16] = { 0, 0, 0, 0, Y, Y, Y, Y, Y, X, Y, X, X, Y, X, Y };
uint32 sCheatPanHandle[16] = { 0, 0, 0, 0, Y, Y, Y, Y, Y, X, Y, X, Y, Y, X, X };
uint32 sCheatMedics[16] = { 0, 0, 0, 0, Y, Y, Y, Y, Y, X, Y, X, X, X, Y, Y };
uint32 sCheatDogTrix[16] = { 0, 0, 0, 0, Y, Y, Y, Y, Y, X, Y, X, Y, X, X, Y };

// zGameCheats assumes this list will contain an empty entry at the end (null key_code pointer)
static GECheat cheatList[] = { { sCheatAddShiny, GEC_cb_AddShiny, 0x2, 0 },
                               { sCheatAddSpatulas, GEC_cb_AddSpatulas, 0x1, 0 },
                               { sCheatBubbleBowl, GEC_cb_BubbleBowl, 0x200, 0 },
                               { sCheatCruiseBubble, GEC_cb_CruiseBubble, 0x400, 0 },
                               { sCheatMonsterGallery, GEC_cb_MonsterGallery, 0x0, 0 },
                               { sCheatArtTheatre, GEC_cb_UnlockArtTheatre, 0x0, 0 },
                               { sCheatChaChing, GEC_cb_ChaChing, 0x2, 0 },
                               { sCheatExpertMode, GEC_cb_ExpertMode, 0x800, 0 },
                               { sCheatSwapCCLR, GEC_cb_SwapCCLR, 0x1000, 1 },
                               { sCheatSwapCCUD, GEC_cb_SwapCCUD, 0x2000, 1 },
                               { sCheatRestoreHealth, GEC_cb_RestoreHealth, 0x100, 0 },
                               { sCheatShrapBob, GEC_cb_ShrapBobMode, 0x2000000, 1 },
                               { sCheatNoPants, GEC_cb_NoPantsMode, 0x10000000, 1 },
                               { sCheatCruiseControl, GEC_cb_CruiseControl, 0x20000000, 1 },
                               { sCheatBigPlank, GEC_cb_BigPlank, 0x10000, 1 },
                               { sCheatSmallPeep, GEC_cb_SmallPeep, 0x40000, 1 },
                               { sCheatSmallCoStars, GEC_cb_SmallCostars, 0x80000, 1 },
                               { sCheatRichPeep, GEC_cb_RichPeep, 0x100000, 0 },
                               { sCheatPanHandle, GEC_cb_PanHandle, 0x200000, 0 },
                               { sCheatMedics, GEC_cb_Medics, 0x20100, 0 },
                               { sCheatDogTrix, GEC_cb_DogTrix, 0x400000, 0 },
                               {} };

uint32 sCheatPressed[16] = {};

int32 zGameExtras_CheatFlags()
{
    return g_flg_chEnabled;
}

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

int32 TestCheat(uint32 cheat[])
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

void zGameCheats(float dt)
{
    if (zGameModeGet() != eGameMode_Pause)
    {
        return;
    }

    int32 startover = false;
    if ((globals.pad0->pressed & ~(L1 | R1 | X | Y)) || (globals.pad0->on & ~(L1 | R1 | X | Y)))
    {
        startover = true;
    }
    else if ((globals.pad0->on & (L1 | R1)) != (L1 | R1))
    {
        startover = true;
    }
    else if ((globals.pad0->pressed & (X | Y)) == 0)
    {
        sCheatTimer -= dt;
        if (!(sCheatTimer <= 0.0f))
        {
            return;
        }
        startover = true;
        // For some reason there's a double branch here where the first just jumps past the second one.
    }

    if (!startover)
    {
        if (sCheatInputCount > 32)
        {
            startover = true;
        }
        sCheatInputCount++;
    }

    if (startover)
    {
        sCheatTimer = 0.3f;
        sCheatInputCount = 0;
        memset(&sCheatPressed, 0, sizeof(sCheatPressed));
        return;
    }

    AddToCheatPressed(globals.pad0->pressed & 0x60000);

    int32 match = 0;
    sCheatTimer = 0.3f;
    GECheat* rec_next = cheatList;
    while (rec_next->key_code != NULL)
    {
        GECheat* rec_curr = rec_next;
        rec_next++;

        if (!TestCheat(rec_curr->key_code))
        {
            continue;
        }

        match++;

        if (rec_curr->flg_mode & 1)
        {
            GEC_CheatFlagToggle(rec_curr->flg_keep);
        }
        else
        {
            GEC_CheatFlagAdd(rec_curr->flg_keep);
        }

        if (rec_curr->fun_cheat)
        {
            rec_curr->fun_cheat();
        }
    }

    if (match)
    {
        sCheatTimer = -1.0f;
        memset(&sCheatPressed, 0, sizeof(sCheatPressed));
    }
}

void GEC_CheatFlagAdd(int32 bit)
{
    g_flg_chEnabled |= bit;
}

void GEC_CheatFlagToggle(int32 bit)
{
    g_flg_chEnabled ^= bit;
}

void GEC_dfltSound()
{
    static uint32 aid_sndList[7] = {};
    static signed char init;

    if (!init)
    {
        // Fun hack.
        // FIXME: See if we can figure out why HB01 is in the string table here.
        aid_sndList[0] = xStrHash("HB01\0"
                                  "SBG01030" +
                                  5);
        aid_sndList[1] = xStrHash("HB01\0"
                                  "SBG01030" +
                                  5);
        aid_sndList[2] = xStrHash("HB01\0"
                                  "SBG01030" +
                                  5);
        aid_sndList[3] = xStrHash("SBG01017_a");
        aid_sndList[4] = xStrHash("SBG01017_b");
        aid_sndList[5] = xStrHash("SBG01018");
        aid_sndList[6] = xStrHash("SBG01016");

        // typical scheduling memes
        init = 1;
    }

    uint32 snd = xUtil_choose(aid_sndList, 7, NULL);

    if (snd)
    {
        xSndPlay(snd, 1.0f, 0.0f, 0x80, 0, 0, SND_CAT_GAME, 0.0f);
    }
}

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

    uint32 aid_snd = xStrHash("SBG01019");

    if (aid_snd)
    {
        xSndPlay(aid_snd, 1.0f, 0.0f, 0x80, 0, 0, SND_CAT_GAME, 0.0f);
    }
}

void GEC_cb_AddSpatulas()
{
    zPlayerGlobals* pg = &globals.player;
    pg->Inv_Spatula = (pg->Inv_Spatula + 10 >= 100) ? 100 : pg->Inv_Spatula + 10;

    uint32 aid_snd = xStrHash("gspatula_sb");

    if (aid_snd)
    {
        xSndPlay(aid_snd, 1.0f, 0.0f, 0x80, 0, 0, SND_CAT_GAME, 0.0f);
    }
}

void GEC_cb_BubbleBowl()
{
    globals.player.g.PowerUp[0] = true;

    uint32 aid_snd = xStrHash("SBG01092");

    if (aid_snd)
    {
        xSndPlay(aid_snd, 1.0f, 0.0f, 0x80, 0, 0, SND_CAT_GAME, 0.0f);
    }
}

void GEC_cb_CruiseBubble()
{
    globals.player.g.PowerUp[1] = true;

    uint32 aid_snd = xStrHash("SB_cruise_hit");

    if (aid_snd)
    {
        xSndPlay(aid_snd, 1.0f, 0.0f, 0x80, 0, 0, SND_CAT_GAME, 0.0f);
    }
}

void GEC_cb_MonsterGallery()
{
    int8 tempString[32];

    strcpy(tempString, "HB09 ROBOT COUNTER 01");

    int8 c = '1';

    for (int32 i = 0; i < 15; i++)
    {
        if (c > '9')
        {
            tempString[19]++;
            c = '0';
        }

        tempString[20] = c;
        c++;

        uint32 id = xStrHash(tempString);
        _xCounter* cntr = (_xCounter*)zSceneFindObject(id);
        cntr->count = 1;
    }

    zEntPlayer_SNDPlay(ePlayerSnd_Bus, 0.0f);
}

void GEC_cb_UnlockArtTheatre()
{
    uint32 aid_theatreCounter = xStrHash("HB01_FREE_MOVIE_PASS");
    _xCounter* cntr = (_xCounter*)zSceneFindObject(aid_theatreCounter);
    cntr->count = 1;
    zEntPlayer_SNDPlay(ePlayerSnd_Taxi, 0.0f);
}

void GEC_cb_ChaChing()
{
    zGlobalSettings* gs = &globals.player.g;
    gs->ShinyValuePurple = 100;
    gs->ShinyValueBlue = 50;
    gs->ShinyValueGreen = 25;
    gs->ShinyValueYellow = 10;
    gs->ShinyValueRed = 5;

    uint32 aid_snd = xStrHash("SBG01019");
    xSndPlay(aid_snd, 1.0f, 0.0f, 0x80, 0, 0, SND_CAT_GAME, 0.0f);
}

void GEC_cb_RestoreHealth()
{
    static uint32 choices[2] = {};
    static signed char init;

    globals.player.Health = globals.player.MaxHealth;
    if (!init)
    {
        choices[0] = xStrHash("SBG01021");
        choices[1] = xStrHash("SBG01022");
        init = 1;
    }

    uint32 snd = xUtil_choose(choices, 2, NULL);

    if (snd)
    {
        xSndPlay(snd, 1.0f, 0.0f, 0x80, 0, 0, SND_CAT_GAME, 0.0f);
    }
}

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
    uint32 aid_snd = xStrHash("SBG01023");
    xSndPlay(aid_snd, 1.0f, 0.0f, 0x80, 0, 0, SND_CAT_GAME, 0.0f);
}

void GEC_cb_CruiseControl()
{
    static uint32 choices[3] = {};
    static signed char init;

    if (!init)
    {
        choices[0] = xStrHash("SBG01060_c");
        choices[1] = xStrHash("SBG01058_b");
        choices[2] = xStrHash("SBG01054_b");

        // scheduling memes preventing match
        init = true;
    }

    uint32 snd = xUtil_choose<uint32>(choices, 3, NULL);

    if (snd)
    {
        xSndPlay(snd, 1.0f, 0.0f, 0x80, 0, 0, SND_CAT_GAME, 0.0f);
    }
}

void GEC_cb_SwapCCLR()
{
    GEC_dfltSound();
}

void GEC_cb_SwapCCUD()
{
    GEC_dfltSound();
}

void GEC_villSound()
{
    static uint32 aid_sndList[6] = {};
    static signed char init;

    if (!init)
    {
        aid_sndList[0] = xStrHash("SBG01066_c");
        aid_sndList[1] = xStrHash("SBG01066_a");
        aid_sndList[2] = xStrHash("SBG01067");
        aid_sndList[3] = xStrHash("SBG01068_a");
        aid_sndList[4] = xStrHash("SBG01068_d");
        aid_sndList[5] = xStrHash("SBG01069");

        // scheduling memes preventing match
        init = true;
    }

    uint32 snd = xUtil_choose(aid_sndList, 6, NULL);

    if (snd)
    {
        xSndPlay(snd, 1.0f, 0.0f, 0x80, 0, 0, SND_CAT_GAME, 0.0f);
    }
}

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

static xEnt* sGalleryTitle;

void zGame_HackGalleryInit()
{
    uint32 obj = xStrHash("KIOSK SELECT UIF");
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

template <> uint32 xUtil_choose<uint32>(uint32 const* list, int32 size, float32 const* float_list)
{
    if (list == NULL)
    {
        return NULL;
    }

    if (size < 1)
    {
        return NULL;
    }

    int32 idx = 0;
    float32 rand = xurand();

    if (float_list == NULL)
    {
        idx = rand * size;
    }
    else
    {
        const float32* float_it = float_list;
        float32 total = 0.0f;
        for (int32 i = 0; i < size; float_it++, i++)
        {
            float prev_total = total;
            total += *float_it;
            if (rand >= prev_total && rand <= total)
            {
                idx = i;
                break;
            }
        }
    }

    if (idx >= size)
    {
        idx = size - 1;
    }
    if (idx < 0)
    {
        idx = 0;
    }
    return list[idx];
}
