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

extern char zGameExtras_strings[];

extern float32 _975; // 0.0
extern float32 _1152; // 0.3
extern float32 _1153; // -1.0
extern float32 _1192; // 1.0

extern zGlobals globals;

static int32 g_enableGameExtras;
static int32 g_currDay;
static int32 g_currMonth;
static int32 g_gameExtraFlags;
static int32 g_flg_chEnabled;
static float32 sCheatTimer;
static int32 sCheatInputCount;
static signed char init_1161; // init$1161
static signed char init_1274; // init$1274
static signed char init_1319; // init$1319
static signed char init_1343; // init$1343
static xEnt* sGalleryTitle;

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

static GECheat cheatList[22] = {
    { sCheatAddShiny, GEC_cb_AddShiny, 0x2, 0 },
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
};

static uint32 sCheatPressed[16] = {};

int32 zGameExtras_CheatFlags()
{
    return g_flg_chEnabled;
}


#if 0
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




void GEC_CheatFlagAdd(int32 bit)
{
    g_flg_chEnabled |= bit;
}

void GEC_CheatFlagToggle(int32 bit)
{
    g_flg_chEnabled ^= bit;
}


#if 1
static uint32 aid_sndList_1160[7] = {};
#else
void GEC_dfltSound()
{
    static uint32 aid_sndList_1160[7] = {};

    if (!init_1161)
    {
        aid_sndList_1160[0] = xStrHash(zGameExtras_strings + 3);
        aid_sndList_1160[1] = xStrHash(zGameExtras_strings + 4);
        aid_sndList_1160[2] = xStrHash(zGameExtras_strings + 5);
        aid_sndList_1160[3] = xStrHash(zGameExtras_strings + 0xe);
        aid_sndList_1160[4] = xStrHash(zGameExtras_strings + 0x19);
        aid_sndList_1160[5] = xStrHash(zGameExtras_strings + 0x24);
        aid_sndList_1160[6] = xStrHash(zGameExtras_strings + 0x2d);

        // typical scheduling memes
        init_1161 = true;
    }

    uint32 snd = xUtil_choose(aid_sndList_1160, 7, NULL);

    if (snd)
    {
        xSndPlay(snd, _1192, _975, 0x80, 0, 0, SND_CAT_GAME, _975);
    }
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
        xSndPlay(aid_snd, _1192, _975, 0x80, 0, 0, SND_CAT_GAME, _975);
    }
}

void GEC_cb_AddSpatulas()
{
    zPlayerGlobals* pg = &globals.player;
    pg->Inv_Spatula = (pg->Inv_Spatula + 10 >= 100) ? 100 : pg->Inv_Spatula + 10;

    uint32 aid_snd = xStrHash(zGameExtras_strings + 63); // "gspatula_sb"

    if (aid_snd)
    {
        xSndPlay(aid_snd, _1192, _975, 0x80, 0, 0, SND_CAT_GAME, _975);
    }
}

void GEC_cb_BubbleBowl()
{
    globals.player.g.PowerUp[0] = true;

    uint32 aid_snd = xStrHash(zGameExtras_strings + 75); // "SBG01092"

    if (aid_snd)
    {
        xSndPlay(aid_snd, _1192, _975, 0x80, 0, 0, SND_CAT_GAME, _975);
    }
}

void GEC_cb_CruiseBubble()
{
    globals.player.g.PowerUp[1] = true;

    uint32 aid_snd = xStrHash(zGameExtras_strings + 84); // "SB_cruise_hit"

    if (aid_snd)
    {
        xSndPlay(aid_snd, _1192, _975, 0x80, 0, 0, SND_CAT_GAME, _975);
    }
}

void GEC_cb_MonsterGallery()
{
    int8 tempString[32];

    strcpy(tempString, zGameExtras_strings + 0x62); // HB09 ROBOT COUNTER 01

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

    zEntPlayer_SNDPlay(ePlayerSnd_Bus, _975);
}

void GEC_cb_UnlockArtTheatre()
{
    uint32 aid_theatreCounter = xStrHash(zGameExtras_strings + 120); // "HB01_FREE_MOVIE_PASS"
    _xCounter* cntr = (_xCounter*)zSceneFindObject(aid_theatreCounter);
    cntr->count = 1;
    zEntPlayer_SNDPlay(ePlayerSnd_Taxi, _975);
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
    xSndPlay(aid_snd, _1192, _975, 0x80, 0, 0, SND_CAT_GAME, _975);
}


#if 0
void GEC_cb_RestoreHealth()
{
    // stored in .sdata, not sure where/how to declare this
    uint32 lbl_803CAB38[2] = {};

    if (!init_1274)
    {
        lbl_803CAB38[0] = xStrHash(&zGameExtras_strings[0x8d]);
        lbl_803CAB38[1] = xStrHash(&zGameExtras_strings[0x96]);
        init_1274 = 1;
    }

    uint32 snd = xUtil_choose(lbl_803CAB38, 2, NULL);

    if (snd)
    {
        xSndPlay(snd, _1192, _975, 0x80, 0, 0, SND_CAT_GAME, _975);
    }
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
    xSndPlay(aid_snd, _1192, _975, 0x80, 0, 0, SND_CAT_GAME, _975);
}


#if 1
static uint32 choices_1318[3] = {};
#else
void GEC_cb_CruiseControl()
{
    static uint32 choices_1318[3] = {};

    if (!init_1319)
    {
        choices_1318[0] = xStrHash(zGameExtras_strings + 0xa8);
        choices_1318[1] = xStrHash(zGameExtras_strings + 0xb3);
        choices_1318[2] = xStrHash(zGameExtras_strings + 0xbe);

        // scheduling memes preventing match
        init_1319 = true;
    }

    uint32 snd = xUtil_choose<uint32>(choices_1318, 3, NULL);

    if (snd)
    {
        xSndPlay(snd, _1192, _975, 0x80, 0, 0, SND_CAT_GAME, _975);
    }
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


#if 1
static uint32 aid_sndList_1342[6] = {};
#else
void GEC_villSound()
{
    static uint32 aid_sndList_1342[6] = {};

    if (!init_1343)
    {
        aid_sndList_1342[0] = xStrHash(zGameExtras_strings + 0xc9);
        aid_sndList_1342[1] = xStrHash(zGameExtras_strings + 0xd4);
        aid_sndList_1342[2] = xStrHash(zGameExtras_strings + 0xdf);
        aid_sndList_1342[3] = xStrHash(zGameExtras_strings + 0xe8);
        aid_sndList_1342[4] = xStrHash(zGameExtras_strings + 0xf3);
        aid_sndList_1342[5] = xStrHash(zGameExtras_strings + 0xfe);

        // scheduling memes preventing match
        init_1343 = true;
    }

    uint32 snd = xUtil_choose(aid_sndList_1342, 6, NULL);

    if (snd)
    {
        xSndPlay(snd, _1192, _975, 0x80, 0, 0, SND_CAT_GAME, _975);
    }
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


#if 0
template <> uint32 xUtil_choose<uint32>(uint32 const* list, int32 size, float32 const* float_list)
{
    if (list == NULL)
    {
        return NULL;
    }

    if (size == 0)
    {
        //
        return NULL;
    }

    float32 rand = xurand();

    if (float_list == NULL)
    {
        uint32 r3 = size ^ 0x8000;
    }
    // float_list_not_null
    else
    {
        for (int32 i = 0; i < size; i++)
        {
            if (float_list[0] == _975)
            {
            }
        }
    }
    // After Loop
}
#endif
