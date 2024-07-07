#include "zNPCSupplement.h"
#include "zNPCSupport.h"
#include "zGame.h"
#include "zGameExtras.h"
#include "zGlobals.h"

#include "xFX.h"
#include "xMath.h"
#include "iMath.h"

#include <types.h>
#include <rwplcore.h>

extern NPARMgmt g_npar_mgmt[12];
extern NPARInfo g_npar_info[12];
extern S32 g_gameExtrasFlags;
extern S32 g_mon; // month
extern S32 g_day; // day
extern S32 g_isSpecialDay;

extern StreakInfo info_950;

extern F32 _907_1_0;
extern F32 _1022_2_0;

extern F32 _1558_10_0; // 10.0
extern F32 _1559_0_2857143; // 0.2857143
extern F32 _1560_0_5714286; // 0.5714286
extern F32 _1561_0_125; // 0.125
extern F32 _918_0_25; // 0.25
extern F32 _1018_0_375; // 0.375
extern F32 _909_0_5; // 0.5
extern F32 _1562_0_625; // 0.625

void NPCSupplement_Startup()
{
    return;
}

void NPCSupplement_Shutdown()
{
    NPCWidget_Shutdown();
}

void NPCSupplement_ScenePrepare()
{
    NPAR_ScenePrepare();
}

void NPCSupplement_SceneFinish()
{
    NPAR_SceneFinish();
}

void NPCSupplement_ScenePostInit()
{
    NPAR_PartySetup(NPAR_TYP_VISSPLASH, 0, 0);
}

void NPCSupplement_SceneReset(void)
{
    NPAR_SceneReset();
    NPCC_ShadowCacheReset();
}

void NPCSupplement_Timestep(float dt)
{
    NPAR_Timestep(dt);
}

#if 0
U32 NPCC_StreakCreate(en_npcstreak styp)
{
    StreakInfo info = info_950;
    NPCC_MakeStreakInfo(styp, &info);
    xFXStreakStart(&styp);
}
#endif

void NPAR_ScenePrepare()
{
    for (int i = 0; i < 12; i++)
    {
        g_npar_mgmt[i].Clear();
    }
}

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

void NPAR_SceneReset()
{
    for (int i = 0; i < 12; i++)
    {
        g_npar_mgmt[i].Reset();
    }
}

void NPAR_CheckSpecials()
{
    g_gameExtrasFlags = zGameExtras_ExtrasFlags();
    zGameExtras_MoDay(&g_mon, &g_day);
    g_isSpecialDay = g_gameExtrasFlags & 0b111110111;
}

#if 0
// WIP
void NPAR_Timestep(F32 dt)
{
    S32 isPawzd = zGameIsPaused();
    S32 isCine = !(globals.cmgr && globals.cmgr);

    NPAR_CheckSpecials();
    for (int i = 0; i < 12; i++)
    {
        if (!isPawzd)
        {
            if (isCine || g_npar_mgmt[i].flg_npar & 2)
            {
                UpdateAndRender(g_npar_mgmt[i], dt);
            }
        }
    }
}
#endif

NPARMgmt* NPAR_PartySetup(en_nparptyp parType, void** userData, NPARXtraData* xtraData)
{
    NPARMgmt* mgmt = &g_npar_mgmt[parType];
    S32 isReady = mgmt->IsReady();
    if (isReady)
    {
        return mgmt;
    }
    mgmt->Init(parType, userData, xtraData);
    return mgmt;
}

NPARMgmt* NPAR_FindParty(en_nparptyp parType)
{
    NPARMgmt* mgmt = &g_npar_mgmt[parType];
    S32 isReady = mgmt->IsReady();
    if (isReady)
    {
        return mgmt;
    }
    mgmt = NULL;
    return mgmt;
}

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

void NPARMgmt::UpdateAndRender(F32 param_1)
{
    g_npar_info[typ_npar].fun_update(this, param_1);
}

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

#ifdef NON_MATCHING
// Matches, it just defines new data that won't match until that stuff can be redefined.
// It also loads a bunch of byte stuff at the end for some reason
// For the record it also matches when using the static colors. Externing zanyArray does not work.
void NPAR_TubeSpiralMagic(RwRGBA* color, int unused, F32 pam)
{
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

    // static RwRGBA colr_cyan = { 0x00, 0xff, 0xff, 0xff };
    // static RwRGBA colr_khaki = { 0xf0, 0xe6, 0x8c, 0xff };
    // static RwRGBA colr_seagreen = { 0x80, 0xcc, 0x99, 0xff };
    // static RwRGBA colr_peach = { 0xf0, 0x80, 0x80, 0xff };
    // static RwRGBA colr_fuschia = { 0xbc, 0x40, 0x99, 0xff };
    // static RwRGBA colr_neon_blue = { 0x20, 0x20, 0xff, 0xff };
    // static RwRGBA colr_neon_green = { 0x20, 0xff, 0x00, 0xff };
    // static RwRGBA colr_yellow = { 0xff, 0xff, 0x00, 0xff };
    // static RwRGBA colr_neon_red = { 0xff, 0x20, 0x00, 0xff };

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

    static RwRGBA zanyArray[10] = { colr_cyan,   colr_khaki,   colr_seagreen,  colr_maroon,
                                    colr_peach,  colr_fuschia, colr_neon_blue, colr_neon_green,
                                    colr_yellow, colr_neon_red };

    // Lots of different dates
    if (g_isSpecialDay & 0b100000001)
    {
        S32 trun = _1558_10_0 * pam;
        if (trun < 0)
        {
            trun = 0;
        }
        if (trun > 9)
        {
            trun = 9;
        }
        *color = zanyArray[trun];
        return;
    }

    // July 4th (Independence Day)
    if (g_isSpecialDay & 0b000000010)
    {
        if (pam < _1559_0_2857143)
        {
            *color = colr_julyred;
            return;
        }
        if (pam < _1560_0_5714286)
        {
            *color = colr_julywhite;
            return;
        }
        *color = colr_julyblue;
        return;
    }

    // March 17th (St. Patrick's Day)
    if (g_isSpecialDay & 0b000000100)
    {
        *color = colr_kellygreen;
        return;
    }

    // March 15th? I believe this is disabled by the operation in NPAR_CheckSpecials
    if (g_isSpecialDay & 0b000001000)
    {
        *color = colr_pimp_gold;
        return;
    }

    // Also 4th of July? Unused
    if (g_isSpecialDay & 0b000010000)
    {
        if (pam < _1561_0_125)
        {
            *color = colr_maroon;
            return;
        }
        if (pam < _918_0_25)
        {
            *color = colr_julyred;
            return;
        }
        if (pam < _1018_0_375)
        {
            *color = colr_julywhite;
            return;
        }

        if (pam < _909_0_5)
        {
            *color = colr_julyblue;
            return;
        }
        *color = colr_indigo;
        return;
    }

    // October 31st (Halloween)
    if (g_isSpecialDay & 0b000100000)
    {
        *color = colr_orange;
        return;
    }

    // June 6th
    if (g_isSpecialDay & 0b001000000)
    {
        if (pam < _918_0_25)
        {
            *color = colr_red;
            return;
        }
        if (pam < _1018_0_375)
        {
            *color = colr_orange;
            return;
        }
        if (pam < _909_0_5)
        {
            *color = colr_green;
            return;
        }
        if (pam < _1562_0_625)
        {
            *color = colr_blue;
            return;
        }
        *color = colr_lavender;
        return;
    }

    // April 1st (April Fools)
    if (g_isSpecialDay & 0b010000000)
    {
        *color = colr_pinkRyanz;
        return;
    }
}
#endif

F32 ARCH3(F32 param_1)
{
    return _907_1_0 - BOWL3(param_1);
}

F32 BOWL3(F32 param_1)
{
    return QUB((F32)_1022_2_0 * (F32)iabs(param_1 - _909_0_5));
}

F32 QUB(F32 param_1)
{
    return param_1 * param_1 * param_1;
}

F32 ARCH(F32 param_1)
{
    return _907_1_0 - BOWL(param_1);
}

void NPARMgmt::Done()
{
    Clear();
}

void NPARMgmt::Reset()
{
    cnt_active = 0;
}

S32 NPARMgmt::IsReady()
{
    return num_max != 0 && par_buf != 0;
}

void NPARMgmt::XtraDataSet(NPARXtraData* param_1)
{
    xtra_data = param_1;
}

void NPARMgmt::UserDataSet(void** param_1)
{
    user_data = param_1;
}
