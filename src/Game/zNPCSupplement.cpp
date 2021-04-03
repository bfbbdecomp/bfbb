#include "zNPCSupplement.h"
#include "zNPCSupport.h"
#include "zGame.h"
#include "zGameExtras.h"
#include "zGlobals.h"

#include "../Core/x/xFX.h"
#include "../Core/x/xMath.h"
#include "../Core/p2/iMath.h"

#include <types.h>

extern NPARMgmt g_npar_mgmt[12];
extern NPARInfo g_npar_info[12];
extern int32 g_gameExtrasFlags;
extern int32 g_mon; // month
extern int32 g_day; // day
extern int32 g_isSpecialDay;

extern StreakInfo info_950;

extern float32 _907_1_0;
extern float32 _1022_2_0;

extern float32 _1558_10_0; // 10.0
extern float32 _1559_0_2857143; // 0.2857143
extern float32 _1560_0_5714286; // 0.5714286
extern float32 _1561_0_125; // 0.125
extern float32 _918_0_25; // 0.25
extern float32 _1018_0_375; // 0.375
extern float32 _909_0_5; // 0.5
extern float32 _1562_0_625; // 0.625

// func_80180D54
void NPCSupplement_Startup()
{
    return;
}

void NPCSupplement_Shutdown()
{
    NPCWidget_Shutdown();
}

// func_80180D78
void NPCSupplement_ScenePrepare()
{
    NPAR_ScenePrepare();
}

// func_80180D98
void NPCSupplement_SceneFinish()
{
    NPAR_SceneFinish();
}

// func_80180DB8
void NPCSupplement_ScenePostInit()
{
    NPAR_PartySetup(NPAR_TYP_VISSPLASH, 0, 0);
}

// func_80180DE4
void NPCSupplement_SceneReset(void)
{
    NPAR_SceneReset();
    NPCC_ShadowCacheReset();
}

// func_80180E08
void NPCSupplement_Timestep(float dt)
{
    NPAR_Timestep(dt);
}

// func_80180E28
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "NPCC_MakeLightningInfo__F9en_npclytP16_tagLightningAdd")

// func_801813B4
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_MakeStreakInfo__F12en_npcstreakP10StreakInfo")

// func_801815F4
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_StreakCreate__F12en_npcstreak")
// uint32 NPCC_StreakCreate(en_npcstreak styp)
// {
//     StreakInfo info = info_950;
//     NPCC_MakeStreakInfo(styp, &info);
//     xFXStreakStart(&styp);
// }

// func_80181628
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_BurstBubble__F11en_npcburstP5xVec3")

// func_801817F8
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_MakeASplash__FPC5xVec3f")

// func_8018190C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_Slick_MakePlayerSlip__FP10zNPCCommon")

// func_80181968
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "NPCC_RenderProjTexture__FP8RwRasterfP7xMat4x3ffP12xShadowCacheiP4xEnt")

// func_80181A64
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCSupplement.s",                                                                   \
    "NPCC_RenderProjTextureFaceCamera__FP8RwRasterfP5xVec3ffP12xShadowCacheiP4xEnt")

// func_80181BC0
void NPAR_ScenePrepare()
{
    for (int i = 0; i < 12; i++)
    {
        g_npar_mgmt[i].Clear();
    }
}

// func_80181C10
void NPAR_SceneFinish()
{
    for (int i = 0; i < 12; i++)
    {
        g_npar_mgmt[i].Done();
    }
    g_gameExtrasFlags = 0;
    g_mon = 0;
    g_day = 0;
}

// func_80181C70
void NPAR_SceneReset()
{
    for (int i = 0; i < 12; i++)
    {
        g_npar_mgmt[i].Reset();
    }
}

// func_80181CC0
void NPAR_CheckSpecials()
{
    g_gameExtrasFlags = zGameExtras_ExtrasFlags();
    zGameExtras_MoDay(&g_mon, &g_day);
    g_isSpecialDay = g_gameExtrasFlags & 0x1f7;
}

// func_80181CFC
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_Timestep__Ff")
// void NPAR_Timestep(float32 dt)
// {
//     int32 isPawzd = zGameIsPaused();
//     int32 isCine = !(globals.cmgr && globals.cmgr);

//     NPAR_CheckSpecials();
//     for (int i = 0; i < 12; i++)
//     {
//         if (!isPawzd)
//         {
//             if (isCine || g_npar_mgmt[i].flg_npar & 2)
//             {
//                 UpdateAndRender(g_npar_mgmt[i], dt);
//             }
//         }
//     }
// }

// func_80181DD8
NPARMgmt* NPAR_PartySetup(en_nparptyp parType, void** userData, NPARXtraData* xtraData)
{
    NPARMgmt* mgmt = &g_npar_mgmt[parType];
    int32 isReady = mgmt->IsReady();
    if (isReady)
    {
        return mgmt;
    }
    mgmt->Init(parType, userData, xtraData);
    return mgmt;
}

// func_80181E60
NPARMgmt* NPAR_FindParty(en_nparptyp parType)
{
    NPARMgmt* mgmt = &g_npar_mgmt[parType];
    int32 isReady = mgmt->IsReady();
    if (isReady)
    {
        return mgmt;
    }
    mgmt = NULL;
    return mgmt;
}

// func_80181EB0
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "Init__8NPARMgmtF11en_nparptypPPvP12NPARXtraData")

// func_80181F74
void NPARMgmt::Clear()
{
    typ_npar = NPAR_TYP_UNKNOWN;
    flg_npar = 0;
    par_buf = 0;
    cnt_active = 0;
    num_max = 0;
    txtr = 0;
    xtra_data = 0;
    user_data = 0;
}

// func_80181F9C
void NPARMgmt::UpdateAndRender(float32 param_1)
{
    g_npar_info[typ_npar].fun_update(this, param_1);
}

// func_80181FD4
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "ConfigPar__14NPARParmOilBubCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// func_80182094
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_Upd_OilBubble__FP8NPARMgmtf")

// func_801822C4
void NPAR_CopyNPARToPTPool(NPARData* param_1, ptank_pool__pos_color_size_uv2* param_2)
{
    *param_2->pos = param_1->pos;
    param_2->color->r = (param_1->color).red;
    param_2->color->g = (param_1->color).green;
    param_2->color->b = (param_1->color).blue;
    param_2->color->a = (param_1->color).alpha;
    param_2->size->x = param_1->xy_size[0];
    param_2->size->y = param_1->xy_size[1];
    param_2->uv->x = param_1->uv_tl[0];
    param_2->uv->y = param_1->uv_tl[1];
    param_2->uv[1].x = param_1->uv_br[0];
    param_2->uv[1].y = param_1->uv_br[1];
}

// func_8018237C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "ConfigPar__18NPARParmTubeSpiralCFP8NPARData11en_nparmodePC5xVec3PC5xVec3f")

// func_80182434
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_Upd_TubeSpiral__FP8NPARMgmtf")

// func_80182728
#if 1
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_TubeSpiralMagic__FP6RwRGBAif")
#else
//WIP
void NPAR_TubeSpiralMagic(RwRGBA* color, int unused, float32 pam)
{
    int32 trun;

    // There may be a better way to define these but this seemed like the cleanest.
    // static RwRGBA colr_pinkRyanz = { 0xcc, 0x60, 0xcc, 0xff };
    // static RwRGBA colr_lavender = { 0xc6, 0x09, 0xe9, 0xff };
    // static RwRGBA colr_blue = { 0x00, 0x00, 0xff, 0xff };
    // static RwRGBA colr_green = { 0x00, 0xff, 0x00, 0xff };
    // static RwRGBA colr_orange = { 0xff, 0xa5, 0x00, 0xff };
    // static RwRGBA colr_red = { 0xff, 0x00, 0x00, 0xff };
    // static RwRGBA colr_indigo = { 0x19, 0x19, 0x70, 0xff };
    // static RwRGBA colr_julyblue = { 0x00, 0x00, 0xdd, 0xff };
    // static RwRGBA colr_julywhite = { 0xcc, 0xcc, 0xcc, 0xff };
    // static RwRGBA colr_julyred = { 0xdd, 0x00, 0x00, 0xff };
    // static RwRGBA colr_maroon = { 0x80, 0x00, 0x00, 0xff };
    // static RwRGBA colr_pimp_gold = { 0xd7, 0xdc, 0x13, 0xff };
    // static RwRGBA colr_kellygreen = { 0x0a, 0x7f, 0x03, 0xff };

    // static RwRGBA zanyArray[10];
    // static int8 init = 0;
    // static RwRGBA colr_cyan = { 0x00, 0xff, 0xff, 0xff };
    // static RwRGBA colr_khaki = { 0xf0, 0xe6, 0x8c, 0xff };
    // static RwRGBA colr_seagreen = { 0x80, 0xcc, 0x99, 0xff };
    // static RwRGBA colr_peach = { 0xf0, 0x80, 0x80, 0xff };
    // static RwRGBA colr_fuschia = { 0xbc, 0x40, 0x99, 0xff };
    // static RwRGBA colr_neon_blue = { 0x20, 0x20, 0xff, 0xff };
    // static RwRGBA colr_neon_green = { 0x20, 0xff, 0x00, 0xff };
    // static RwRGBA colr_yellow = { 0xff, 0xff, 0x00, 0xff };
    // static RwRGBA colr_neon_red = { 0xff, 0x20, 0x00, 0xff };

    extern RwRGBA zanyArray[10];

    extern int8 init_1486;
    extern RwRGBA colr_pinkRyanz;
    extern RwRGBA colr_lavender;
    extern RwRGBA colr_blue;
    extern RwRGBA colr_green;
    extern RwRGBA colr_orange;
    extern RwRGBA colr_red;
    extern RwRGBA colr_indigo;
    extern RwRGBA colr_julyblue;
    extern RwRGBA colr_julywhite;
    extern RwRGBA colr_julyred;
    extern RwRGBA colr_maroon;
    extern RwRGBA colr_pimp_gold;
    extern RwRGBA colr_kellygreen;
    extern RwRGBA colr_cyan;
    extern RwRGBA colr_khaki;
    extern RwRGBA colr_seagreen;
    extern RwRGBA colr_peach;
    extern RwRGBA colr_fuschia;
    extern RwRGBA colr_neon_blue;
    extern RwRGBA colr_neon_green;
    extern RwRGBA colr_yellow;
    extern RwRGBA colr_neon_red;

    if (init_1486 == 0)
    {
        zanyArray[0] = colr_neon_red;
        zanyArray[1] = colr_yellow;
        zanyArray[2] = colr_neon_green;
        zanyArray[3] = colr_neon_blue;
        zanyArray[4] = colr_fuschia;
        zanyArray[5] = colr_peach;
        zanyArray[6] = colr_maroon;
        zanyArray[7] = colr_seagreen;
        zanyArray[8] = colr_khaki;
        zanyArray[9] = colr_cyan;
        init_1486 = 1;
    }

    if (g_isSpecialDay & 0x101)
    {
        trun = _1558_10_0 * (uint32)color;
        if (trun < 0)
        {
            trun = 0;
        }
        if (trun > 9)
        {
            trun = 9;
        }
        color = &zanyArray[trun];
        return;
    }

    // 4th of July
    if (g_isSpecialDay & 2)
    {
        if (_1559_0_2857143 > pam)
        {
            color = &colr_julyred;
            return;
        }
        if (_1560_0_5714286 > pam)
        {
            color = &colr_julywhite;
            return;
        }
        color = &colr_julyblue;
        return;
    }

    // St. Patrick's Day
    if (g_isSpecialDay & 4)
    {
        color = &colr_kellygreen;
        return;
    }

    // ????
    if (g_isSpecialDay & 8)
    {
        color = &colr_pimp_gold;
        return;
    }

    // Also 4th of July?
    if (g_isSpecialDay & 0x10)
    {
        if (pam > _1561_0_125)
        {
            color = &colr_maroon;
            return;
        }
        if (_918_0_25 > pam)
        {
            color = &colr_julyred;
            return;
        }
        if (_1018_0_375 > pam)
        {
            color = &colr_julywhite;
            return;
        }

        if (_909_0_5 > pam)
        {
            color = &colr_julyblue;
            return;
        }
        color = &colr_indigo;
        return;
    }

    if (g_isSpecialDay & 0x20)
    {
        color = &colr_orange;
        return;
    }

    if (g_isSpecialDay & 0x40)
    {
        if (_918_0_25 > pam)
        {
            color = &colr_red;
            return;
        }
        if (_1018_0_375 > pam)
        {
            color = &colr_orange;
            return;
        }
        if (_909_0_5 > pam)
        {
            color = &colr_green;
        }
        if (_1562_0_625 > pam)
        {
            color = &colr_blue;
            return;
        }
        color = &colr_lavender;
        return;
    }

    if (g_isSpecialDay & 0x80)
    {
        color = &colr_pinkRyanz;
    }
}
#endif

// func_80182988
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "ConfigPar__20NPARParmTubeConfettiCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// func_80182C0C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_Upd_TubeConfetti__FP8NPARMgmtf")

// func_801830A0
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "ConfigPar__17NPARParmGloveDustCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// func_8018314C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_Upd_GloveDust__FP8NPARMgmtf")

// func_8018333C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_Upd_MonsoonRain__FP8NPARMgmtf")

// func_8018352C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "ConfigPar__18NPARParmSleepyZeezCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// func_8018371C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_Upd_SleepyZeez__FP8NPARMgmtf")

// func_80183BB0
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "ConfigPar__19NPARParmChuckSplashCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// func_80183D40
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_Upd_ChuckSplash__FP8NPARMgmtf")

// func_80184058
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "ConfigPar__17NPARParmVisSplashCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// func_80184118
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_Upd_VisSplash__FP8NPARMgmtf")

// func_80184430
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "ConfigPar__18NPARParmTarTarGunkCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// func_80184620
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_Upd_TarTarGunk__FP8NPARMgmtf")

// func_80184AB4
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "ConfigPar__17NPARParmDogBreathCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// func_80184B60
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_Upd_DogBreath__FP8NPARMgmtf")

// func_80184EA4
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "ConfigPar__17NPARParmFahrwerkzCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// func_80185094
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_Upd_Fireworks__FP8NPARMgmtf")

// func_80185528
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitOilShieldPop__FPC5xVec3")

// func_80185554
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitOilTrailz__FPC5xVec3")

// func_80185580
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitOilVapors__FPC5xVec3")

// func_801855AC
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitOilSplash__FPC5xVec3PC5xVec3")

// func_801855D8
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "NPAR_EmitOilBubble__F11en_nparmodePC5xVec3PC5xVec3")

// func_80185658
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTubeSpiral__FPC5xVec3PC5xVec3f")

// func_801856E0
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTubeSpiralCin__FPC5xVec3PC5xVec3f")

// func_80185768
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTubeConfetti__FPC5xVec3PC5xVec3")

// func_801857D4
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTubeSparklies__FPC5xVec3PC5xVec3")

// func_80185844
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitGloveDust__FPC5xVec3PC5xVec3")

// func_801858B0
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitSleepyZeez__FPC5xVec3PC5xVec3")

// func_8018591C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitH2ODrips__FPC5xVec3PC5xVec3")

// func_80185948
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitH2ODrops__FPC5xVec3PC5xVec3")

// func_80185974
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitH2OSpray__FPC5xVec3PC5xVec3")

// func_801859A0
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitH2OTrail__FPC5xVec3")

// func_801859D0
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitDroplets__F11en_nparmodePC5xVec3PC5xVec3")

// func_80185A50
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTarTarNozzle__FPC5xVec3PC5xVec3")

// func_80185A7C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTarTarTrail__FPC5xVec3PC5xVec3")

// func_80185AA8
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTarTarSplash__FPC5xVec3PC5xVec3")

// func_80185AD4
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTarTarSpoil__FPC5xVec3PC5xVec3")

// func_80185B00
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTarTarSmoke__FPC5xVec3PC5xVec3")

// func_80185B2C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "NPAR_EmitTarTarGunk__F11en_nparmodePC5xVec3PC5xVec3")

// func_80185BAC
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitDoggyWisps__FPC5xVec3PC5xVec3")

// func_80185BD8
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitDoggyAttack__FPC5xVec3PC5xVec3")

// func_80185C04
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "NPAR_EmitDoggyBreath__F11en_nparmodePC5xVec3PC5xVec3")

// func_80185C84
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitVSSpray__FPC5xVec3PC5xVec3")

// func_80185CB0
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "NPAR_EmitVisSplash__F11en_nparmodePC5xVec3PC5xVec3")

// func_80185D30
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitFWExhaust__FPC5xVec3PC5xVec3")

// func_80185D5C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "NPAR_EmitFireworks__F11en_nparmodePC5xVec3PC5xVec3")

// func_80185DDC
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_ShadowCacheReset__Fv")

// func_80185E28
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_ShadowCacheReserve__Fv")

// func_80185E9C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_ShadowCacheRelease__FP12xShadowCache")

// func_80185F68
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "Defaults__10StreakInfoFv")

// func_80185FB8
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "xFXStreakStart__FP10StreakInfo")

// func_80185FF8
float32 ARCH3(float32 param_1)
{
    return _907_1_0 - BOWL3(param_1);
}

// func_80186020
float32 BOWL3(float32 param_1)
{
    return QUB((float32)_1022_2_0 * (float32)iabs(param_1 - _909_0_5));
}

// func_80186058
float32 QUB(float32 param_1)
{
    return param_1 * param_1 * param_1;
}

// func_80186064
float32 ARCH(float32 param_1)
{
    return _907_1_0 - BOWL(param_1);
}

// func_8018608C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "BOWL__Ff")

// func_801860BC
//#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "Done__8NPARMgmtFv")
void NPARMgmt::Done()
{
    Clear();
}

// func_801860DC
void NPARMgmt::Reset()
{
    cnt_active = 0;
}

// func_801860E8
int32 NPARMgmt::IsReady()
{
    return num_max != 0 && par_buf != 0;
}

// func_80186110
void NPARMgmt::XtraDataSet(NPARXtraData* param_1)
{
    xtra_data = param_1;
}

// func_80186118
void NPARMgmt::UserDataSet(void** param_1)
{
    user_data = param_1;
}

// func_80186120
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "PromoteTail__8NPARMgmtFi")

// func_80186164
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "__as__8NPARDataFRC8NPARData")

// func_80186208
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NextAvail__8NPARMgmtFv")
