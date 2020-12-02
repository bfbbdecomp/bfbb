#include <types.h>
#include "../Core/x/xString.h"
#include "../Core/x/xSnd.h"
#include "zGameExtras.h"
#include "zGlobals.h"

extern int8 zGameExtras_strings[];

extern float32 zGameExtras_f_0;
extern float32 zGameExtras_f_1;

extern zGlobals globals;

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
    // local variable isn't defined as an array in the dwarf data
    int32 keepers[2];
    keepers[0] = 0;
    xser->Read(keepers);
    g_flg_chEnabled |= keepers[0];
}

// func_80099BAC
#if 1
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "TestCheat__FPUi")
#else
// function not in dwarf files/PS2 version
uint32 TestCheat(uint32* param_1)
{
    // no clue what's going on here...
    uint32* var1;
    if (param_1[15] == 0)
    {
        return 0;
    }
    param_1++;
}
#endif

// a cool example of loop unrolling done by the compiler
void AddToCheatPressed(uint32 param_1)
{
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

// func_8009A058
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_AddShiny__Fv")

void GEC_cb_AddSpatulas()
{
    zPlayerGlobals* pg = &globals.player;

    // can only get this to match with a ternary operator
    pg->Inv_Spatula = (pg->Inv_Spatula + 10 >= 100) ? 100 : pg->Inv_Spatula + 10;

    uint32 aid_snd = xStrHash(zGameExtras_strings + 63); // "gspatula_sb"
    if (aid_snd != 0)
    {
        xSndPlay(aid_snd, zGameExtras_f_1, zGameExtras_f_0, 0x80, 0, 0, SND_CAT_GAME,
                 zGameExtras_f_0);
    }
}

void GEC_cb_BubbleBowl()
{
    globals.player.g.PowerUp[0] = true;
    uint32 aid_snd = xStrHash(zGameExtras_strings + 75); // "SBG01092"

    if (aid_snd != 0)
    {
        xSndPlay(aid_snd, zGameExtras_f_1, zGameExtras_f_0, 0x80, 0, 0, SND_CAT_GAME,
                 zGameExtras_f_0);
    }
}

void GEC_cb_CruiseBubble()
{
    globals.player.g.PowerUp[1] = true;
    uint32 aid_snd = xStrHash(zGameExtras_strings + 84); // "SB_cruise_hit"

    if (aid_snd != 0)
    {
        xSndPlay(aid_snd, zGameExtras_f_1, zGameExtras_f_0, 0x80, 0, 0, SND_CAT_GAME,
                 zGameExtras_f_0);
    }
}

// func_8009A220
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_MonsterGallery__Fv")

// func_8009A2C0
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_UnlockArtTheatre__Fv")

// func_8009A304
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_ChaChing__Fv")

// func_8009A380
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_RestoreHealth__Fv")

// func_8009A424
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_ExpertMode__Fv")

// func_8009A444
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_ShrapBobMode__Fv")

// func_8009A464
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_NoPantsMode__Fv")

// func_8009A4B0
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_CruiseControl__Fv")

// func_8009A56C
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_SwapCCLR__Fv")

// func_8009A58C
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_SwapCCUD__Fv")

// func_8009A5AC
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_villSound__Fv")

// func_8009A6BC
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_BigPlank__Fv")

// func_8009A6DC
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_Medics__Fv")

// func_8009A6FC
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_DogTrix__Fv")

// func_8009A71C
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_SmallPeep__Fv")

// func_8009A73C
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_SmallCostars__Fv")

// func_8009A75C
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_RichPeep__Fv")

// func_8009A77C
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "GEC_cb_PanHandle__Fv")

// func_8009A79C
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGame_HackGalleryInit__Fv")

// func_8009A7D0
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "zGame_HackIsGallery__Fv")

// func_8009A810
#pragma GLOBAL_ASM("asm/Game/zGameExtras.s", "xUtil_choose_esc__0_Ui_esc__1___FPCUiiPCf")
