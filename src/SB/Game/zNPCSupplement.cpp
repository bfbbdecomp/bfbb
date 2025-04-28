#include "zNPCSupplement.h"
#include "zNPCSupport.h"
#include "zNPCTypeRobot.h"
#include "zGame.h"
#include "zGameExtras.h"
#include "zGlobals.h"
#include "xCutsceneMgr.h"

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
static S8 g_shadCachesInUseFlags[16];

extern StreakInfo info_950;

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

U32 NPCC_StreakCreate(en_npcstreak styp)
{
    static StreakInfo info;
    NPCC_MakeStreakInfo(styp, &info);
    return xFXStreakStart(&info);
}

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

void NPAR_Timestep(F32 dt)
{
    S32 isPawzd = zGameIsPaused();
    S32 isCine = (globals.cmgr != NULL) && (((xCutsceneMgr*)(globals.cmgr))->csn != NULL);
    NPAR_CheckSpecials();
    NPARMgmt* mgr;
    for (S32 i = 0; i < 12; i++, mgr++)
    {
        mgr = &g_npar_mgmt[i];
        if (1 <= mgr->cnt_active)
        {
            if (!isPawzd || ((mgr->flg_npar & 1)))
            {
                if (!isCine || ((mgr->flg_npar & 2)))
                {
                    mgr->UpdateAndRender(dt);
                }
            }
        }
    }
}

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

#if 0
// Matches, but appears to be using some kinda weird secret overload for xMemAlloc?? Find out wtf this is.
void* xMemAlloc(U32 heapID, U32 size, S32 align, void* data, S32 dataSize);

void NPARMgmt::Init(en_nparptyp parType, void** userData, NPARXtraData* xtraData)
{
    S32 amt = g_npar_info[parType].num_maxParticles;
    NPARInfo* info = &g_npar_info[parType];

    void* mem = xMemAlloc(gActiveHeap, amt * 0x50, 0x10, xtraData, parType << 4);
    memset(mem, 0, amt * 0x50);
    typ_npar = parType;
    flg_npar = info->flg_npar;
    par_buf = (NPARData*)mem;
    cnt_active = 0;
    num_max = info->num_maxParticles;
    UserDataSet(userData);
    XtraDataSet(xtraData);
    if (info->nam_texture == NULL)
    {
        txtr = NULL;
    }
    else
    {
        txtr = NPCC_FindRWTexture( info->nam_texture );
    }
}
#endif

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
        S32 trun = 10.0f * pam;
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
        if (pam < (2.0f / 7.0f))
        {
            *color = colr_julyred;
            return;
        }
        if (pam < (4.0f / 7.0f))
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
        if (pam < 0.125f)
        {
            *color = colr_maroon;
            return;
        }
        if (pam < 0.25f)
        {
            *color = colr_julyred;
            return;
        }
        if (pam < 0.375f)
        {
            *color = colr_julywhite;
            return;
        }

        if (pam < 0.5f)
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
        if (pam < 0.25f)
        {
            *color = colr_red;
            return;
        }
        if (pam < 0.375f)
        {
            *color = colr_orange;
            return;
        }
        if (pam < 0.5f)
        {
            *color = colr_green;
            return;
        }
        if (pam < 0.625f)
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

F32 ARCH3(F32 param_1)
{
    return 1.0f - BOWL3(param_1);
}

F32 BOWL3(F32 param_1)
{
    return QUB((F32)2.0f * (F32)iabs(param_1 - 0.5f));
}

F32 QUB(F32 param_1)
{
    return param_1 * param_1 * param_1;
}

F32 ARCH(F32 param_1)
{
    return 1.0f - BOWL(param_1);
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

void NPARParmVisSplash::ConfigPar(NPARData* par, en_nparmode pmod, const xVec3* pos, const xVec3* vel) const
{
    F32 fac_rand = xurand() * 0.5f + 0.5f;
    F32 samecalc = tym_lifespan * fac_rand;

    par->fac_abuse = fac_rand;
    par->tmr_remain = samecalc;
    par->tym_exist = samecalc;

    par->pos = *pos;
    par->vel = *vel;

    par->xy_size[0] = siz_base[0];
    par->xy_size[1] = siz_base[0];

    par->color = colr_base;

    par->uv_tl[0] = 0.0f;
    par->uv_tl[1] = 0.0f;
    par->uv_br[0] = 1.0f;
    par->uv_br[1] = 1.0f;

    par->flg_popts |= 2;
    par->nparmode = pmod;
}

void NPARParmDogBreath::ConfigPar(NPARData* par, en_nparmode pmod, const xVec3* pos, const xVec3* vel) const
{
    F32 fac_rand = xurand() * 0.5f + 0.5f;
    F32 samecalc = tym_lifespan * fac_rand;

    par->fac_abuse = fac_rand;
    par->tmr_remain = samecalc;
    par->tym_exist = samecalc;

    par->pos = *pos;
    par->vel = *vel;

    par->xy_size[0] = siz_base[0];
    par->xy_size[1] = siz_base[0];

    par->color = colr_base;

    par->uv_tl[0] = 0.0f;
    par->uv_tl[1] = 0.0f;
    par->uv_br[0] = 1.0f;
    par->uv_br[1] = 1.0f;

    par->nparmode = pmod;
}

NPARParmFahrwerkz g_parm_fahrwerkz[4];

void NPAR_EmitFireworks(en_nparmode pmod, const xVec3* pos, const xVec3* vel)
{
    NPARData *pNVar1;
    NPARMgmt *mgmt = NPAR_FindParty(NPAR_TYP_FIREWORKS);
    if ((mgmt != NULL) && (pNVar1 = mgmt->NextAvail(), pNVar1 != NULL))
    {
        g_parm_fahrwerkz[pmod].ConfigPar(pNVar1, pmod, pos, vel);
    }
}

void NPAR_EmitFWExhaust(const xVec3* pos, const xVec3* vel)
{
    NPAR_EmitFireworks(NPAR_MODE_FWEXHAUST, pos, vel);
}

NPARParmVisSplash g_parm_vissplash[4];

void NPAR_EmitVisSplash(en_nparmode pmod, const xVec3* vel, const xVec3* pos)
{
    NPARData* par;
    NPARMgmt* mgmt = NPAR_FindParty(NPAR_TYP_VISSPLASH);
    if ((mgmt != NULL) && (par = mgmt->NextAvail(), par != NULL))
    {
        g_parm_vissplash[pmod].ConfigPar(par, pmod, vel, pos);
    }
}

NPARParmOilBub g_parm_oilbub[4];

void NPAR_EmitOilBubble(en_nparmode pmod, const xVec3* pos, const xVec3* vel)
{
    NPARData* par;
    NPARMgmt* mgmt = NPAR_FindParty(NPAR_TYP_OILBUB);
    if ((mgmt != NULL) && (par = mgmt->NextAvail(), par != NULL))
    {
        g_parm_oilbub[pmod].ConfigPar(par, pmod, pos, vel);
    }
}

NPARParmTubeSpiral g_parm_tubespiral[4];

// Equivalent: weird unnecessary use of mulli to index into g_parm_tubespiral.
void NPAR_EmitTubeSpiral(const xVec3* pos, const xVec3* vel, F32 dt)
{
    NPARData* par;
    NPARMgmt* mgmt = NPAR_FindParty(NPAR_TYP_TUBESPIRAL);
    if ((mgmt != NULL) && (par = mgmt->NextAvail(), par != NULL))
    {
        g_parm_tubespiral[1].ConfigPar(par, NPAR_MODE_SPIRALNORM, pos, vel, dt);
    }
}

NPARParmTubeConfetti g_parm_tubeconfetti[2];

void NPAR_EmitTubeConfetti(const xVec3* pos, const xVec3* vel)
{
    NPARData* par;
    NPARMgmt* mgmt = NPAR_FindParty(NPAR_TYP_TUBECONFETTI);
    if ((mgmt != NULL) && (par = mgmt->NextAvail(), par != NULL))
    {
        g_parm_tubeconfetti[0].ConfigPar(par, NPAR_MODE_STD, pos, vel);
    }
}

void NPAR_EmitTubeSparklies(const xVec3* pos, const xVec3* vel)
{
    NPARData* par;
    NPARMgmt* mgmt = NPAR_FindParty(NPAR_TYP_TUBECONFETTI);
    if ((mgmt != NULL) && (par = mgmt->NextAvail(), par != NULL))
    {
        g_parm_tubeconfetti[1].ConfigPar(par, NPAR_MODE_FETTI_SPARKLIES, pos, vel);
    }
}

// Equivalent: operands of single fmuls instruction swapped.
void NPARParmTubeConfetti::ConfigPar(NPARData* par, en_nparmode pmod, const xVec3* pos, const xVec3* vel) const
{
    F32 fac_rand = 0.5f * xurand() + 0.5f;

    par->fac_abuse = fac_rand;
    par->tmr_remain = tym_lifespan * fac_rand;
    par->tym_exist  = tym_lifespan * fac_rand;
    par->pos = *pos;
    par->vel = *vel;
    par->xy_size[0] = siz_base[0];
    par->xy_size[1] = siz_base[0];
    par->color = colr_base;

    if (pmod == 0)
    {
        par->color.red   = xurand() * 95.0f + 160.0f;
        par->color.green = xurand() * 95.0f + 160.0f;
        par->color.blue  = xurand() * 95.0f + 160.0f;
        par->color.alpha = colr_base.alpha;

        par->flg_popts |= 4;
    }
    else
    {
        par->color = colr_base;
    }

    F32 justTheRand = fac_rand;

    F32 du = 1.0f / num_uvcell[0];
    F32 dv = 1.0f / num_uvcell[1];

    if (pmod == 0)
    {
        F32 samecalc = 2.0f * (justTheRand - 0.5f );
        par->uv_tl[0] = ((int)(samecalc * num_uvcell[1])) * du; // Multiplication operands swapped
        par->uv_tl[1] = (row_uvstart + (int)(samecalc * num_uvcell[0])) * dv;
        par->uv_br[0] = par->uv_tl[0] + du;
        par->uv_br[1] = par->uv_tl[1] + dv;

        par->flg_popts |= 2;
    }
    else
    {
        par->uv_tl[0] = 0.0f;
        par->uv_tl[1] = row_uvstart * dv;
        par->uv_br[0] = du;
        par->uv_br[1] = dv;

        par->flg_popts &= ~2;
    }

    par->nparmode = pmod;
}

// Equivalent: operands of single fmuls instruction swapped.
void NPARParmFahrwerkz::ConfigPar(NPARData* par, en_nparmode pmod, const xVec3* pos, const xVec3* vel) const
{
    F32 fac_rand = 0.5f * xurand() + 0.5f;

    par->fac_abuse = fac_rand;
    par->tmr_remain = tym_lifespan * fac_rand;
    par->tym_exist  = tym_lifespan * fac_rand;
    par->pos = *pos;
    par->vel = *vel;
    par->xy_size[0] = siz_base[0];
    par->xy_size[1] = siz_base[0];
    par->color = colr_base;

    F32 justTheRand = fac_rand;

    F32 du = 1.0f / num_uvcell[0];
    F32 dv = 1.0f / num_uvcell[1];

    if (pmod == 0)
    {
        F32 samecalc = 2.0f * (justTheRand - 0.5f );
        par->uv_tl[0] = ((int)(samecalc * num_uvcell[1])) * du; // Multiplication operands swapped
        par->uv_tl[1] = (row_uvstart + (int)(samecalc * num_uvcell[0])) * dv;
        par->uv_br[0] = par->uv_tl[0] + du;
        par->uv_br[1] = par->uv_tl[1] + dv;

        par->flg_popts |= 2;
    }
    else
    {
        par->uv_tl[0] = 0.0f;
        par->uv_tl[1] = row_uvstart * dv;
        par->uv_br[0] = du;
        par->uv_br[1] = dv;

        par->flg_popts &= ~2;
    }

    par->nparmode = pmod;
}

// Equivalent: operands of single fmuls instruction swapped.
void NPARParmTarTarGunk::ConfigPar(NPARData* par, en_nparmode pmod, const xVec3* pos, const xVec3* vel) const
{
    F32 fac_rand = 0.5f * xurand() + 0.5f;

    par->fac_abuse = fac_rand;
    par->tmr_remain = tym_lifespan * fac_rand;
    par->tym_exist  = tym_lifespan * fac_rand;
    par->pos = *pos;
    par->vel = *vel;
    par->xy_size[0] = siz_base[0];
    par->xy_size[1] = siz_base[0];
    par->color = colr_base;

    F32 justTheRand = fac_rand;

    F32 du = 1.0f / num_uvcell[0];
    F32 dv = 1.0f / num_uvcell[1];

    if (pmod == 0)
    {
        F32 samecalc = 2.0f * (justTheRand - 0.5f );
        par->uv_tl[0] = ((int)(samecalc * num_uvcell[1])) * du; // Multiplication operands swapped
        par->uv_tl[1] = (row_uvstart + (int)(samecalc * num_uvcell[0])) * dv;
        par->uv_br[0] = par->uv_tl[0] + du;
        par->uv_br[1] = par->uv_tl[1] + dv;

        par->flg_popts |= 2;
    }
    else
    {
        par->uv_tl[0] = 0.0f;
        par->uv_tl[1] = row_uvstart * dv;
        par->uv_br[0] = du;
        par->uv_br[1] = dv;

        par->flg_popts &= ~2;
    }

    par->nparmode = pmod;
}

// Equivalent: operands of single fmuls instruction swapped.
void NPARParmSleepyZeez::ConfigPar(NPARData* par, en_nparmode pmod, const xVec3* pos, const xVec3* vel) const
{
    F32 fac_rand = 0.5f * xurand() + 0.5f;

    par->fac_abuse = fac_rand;
    par->tmr_remain = tym_lifespan * fac_rand;
    par->tym_exist  = tym_lifespan * fac_rand;
    par->pos = *pos;
    par->vel = *vel;
    par->xy_size[0] = siz_base[0];
    par->xy_size[1] = siz_base[0];
    par->color = colr_base;

    F32 justTheRand = fac_rand;

    F32 du = 1.0f / num_uvcell[0];
    F32 dv = 1.0f / num_uvcell[1];

    if (pmod == 0)
    {
        F32 samecalc = 2.0f * (justTheRand - 0.5f );
        par->uv_tl[0] = ((int)(samecalc * num_uvcell[1])) * du; // Multiplication operands swapped
        par->uv_tl[1] = (row_uvstart + (int)(samecalc * num_uvcell[0])) * dv;
        par->uv_br[0] = par->uv_tl[0] + du;
        par->uv_br[1] = par->uv_tl[1] + dv;

        par->flg_popts |= 2;
    }
    else
    {
        par->uv_tl[0] = 0.0f;
        par->uv_tl[1] = row_uvstart * dv;
        par->uv_br[0] = du;
        par->uv_br[1] = dv;

        par->flg_popts &= ~2;
    }

    par->nparmode = pmod;
}

void NPARParmChuckSplash::ConfigPar(NPARData* par, en_nparmode pmod, const xVec3* pos, const xVec3* vel) const
{
    F32 fac_rand = xurand() * 0.5f + 0.5f;
    F32 samecalc = tym_lifespan * fac_rand;

    par->fac_abuse = fac_rand;
    par->tmr_remain = samecalc;
    par->tym_exist = samecalc;

    par->pos = *pos;
    par->vel = *vel;

    par->xy_size[0] = siz_base[0];
    par->xy_size[1] = siz_base[0];

    par->color = colr_base;

    if (pmod == NPAR_MODE_STD)
    {
        par->uv_tl[0] = 0.0f;
        par->uv_tl[1] = 0.0f;
        par->uv_br[0] = 1.0f;
        par->uv_br[1] = 1.0f;
        par->flg_popts |= 2;
    }
    else if ((pmod == NPAR_MODE_ALT_C) ||(pmod == NPAR_MODE_ALT_A) ||(pmod == NPAR_MODE_ALT_B))
    {
        par->uv_tl[0] = 0.0f;
        par->uv_tl[1] = 0.0f;
        par->uv_br[0] = 1.0f;
        par->uv_br[1] = 1.0f;
        par->flg_popts |= 2;
    }
    else if (pmod == NPAR_MODE_ALT_D)
    {
        par->uv_tl[0] = 0.0f;
        par->uv_tl[1] = 0.0f;
        par->uv_br[0] = 1.0f;
        par->uv_br[1] = 1.0f;
        par->flg_popts |= 2;
    }
    else
    {
        par->uv_tl[0] = 0.0f;
        par->uv_tl[1] = 0.0f;
        par->uv_br[0] = 1.0f;
        par->uv_br[1] = 1.0f;
        par->flg_popts |= 2;
    }

    par->nparmode = pmod;
}

NPARParmChuckSplash g_parm_chucksplash[5];

//todo
void NPAR_EmitDroplets(en_nparmode pmod, const xVec3* pos, const xVec3* vel)
{
    NPARData *pNVar1;
    NPARMgmt *mgmt = (NPARMgmt *)NPAR_FindParty(NPAR_TYP_CHUCKSPLASH);
    if ((mgmt != NULL) && (pNVar1 = mgmt->NextAvail(), pNVar1 != NULL))
    {
        g_parm_chucksplash[pmod].ConfigPar(pNVar1, pmod, pos, vel);
    }
}

void NPAR_EmitOilShieldPop(const xVec3* pos)
{
    NPAR_EmitOilBubble(NPAR_MODE_STD, pos, NULL);
}

void NPAR_EmitOilTrailz(const xVec3* pos)
{
    NPAR_EmitOilBubble(NPAR_MODE_ALT_A, pos, NULL);
}

void NPAR_EmitOilVapors(const xVec3* pos)
{
    NPAR_EmitOilBubble(NPAR_MODE_ALT_B, pos, NULL);
}

void NPAR_EmitOilSplash(const xVec3* pos, const xVec3* vel)
{
    NPAR_EmitOilBubble(NPAR_MODE_ALT_C, pos, vel);
}

NPARParmTarTarGunk g_parm_tartargunk[6];

void NPAR_EmitTarTarGunk(en_nparmode pmod, const xVec3* pos, const xVec3* vel)
{
    NPARData *pNVar1;
    NPARMgmt *mgmt = (NPARMgmt *)NPAR_FindParty(NPAR_TYP_TARTARGUNK);
    if ((mgmt != NULL) && (pNVar1 = mgmt->NextAvail(), pNVar1 != NULL))
    {
        g_parm_tartargunk[pmod].ConfigPar(pNVar1, pmod, pos, vel);
    }
}

void NPAR_EmitGloveDust(const xVec3* pos, const xVec3* vel)
{
    NPARData *pNVar1;
    NPARMgmt *mgmt = (NPARMgmt *)NPAR_FindParty(NPAR_TYP_GLOVEDUST);
    if ((mgmt != NULL) && (pNVar1 = mgmt->NextAvail(), pNVar1 != NULL))
    {
        g_parm_tartargunk[0].ConfigPar(pNVar1, NPAR_MODE_STD, pos, vel);
    }
}

void NPAR_EmitSleepyZeez(const xVec3* pos, const xVec3* vel)
{
    NPARData *pNVar1;
    NPARMgmt *mgmt = (NPARMgmt *)NPAR_FindParty(NPAR_TYP_SLEEPYZEEZ);
    if ((mgmt != NULL) && (pNVar1 = mgmt->NextAvail(), pNVar1 != NULL))
    {
        g_parm_tartargunk[0].ConfigPar(pNVar1, NPAR_MODE_STD, pos, vel);
    }
}

void NPAR_EmitTarTarNozzle(const xVec3* pos, const xVec3* vel)
{
    NPAR_EmitTarTarGunk(NPAR_MODE_ALT_A, pos, vel);
}

void NPAR_EmitTarTarTrail(const xVec3* pos, const xVec3* vel)
{
    NPAR_EmitTarTarGunk(NPAR_MODE_ALT_B, pos, vel);
}

void NPAR_EmitTarTarSplash(const xVec3* pos, const xVec3* vel)
{
    NPAR_EmitTarTarGunk(NPAR_MODE_ALT_C, pos, vel);
}

void NPAR_EmitTarTarSpoil(const xVec3* pos, const xVec3* vel)
{
    NPAR_EmitTarTarGunk(NPAR_MODE_ALT_D, pos, vel);
}

void NPAR_EmitTarTarSmoke(const xVec3* pos, const xVec3* vel)
{
    NPAR_EmitTarTarGunk(NPAR_MODE_ALT_E, pos, vel);
}

void NPAR_EmitVSSpray(const xVec3* pos, const xVec3* vel)
{
    NPAR_EmitVisSplash(NPAR_MODE_STD, pos, vel);
}

NPARParmDogBreath g_parm_dogbreath[3];

void NPAR_EmitDoggyBreath(en_nparmode pmod, const xVec3* pos, const xVec3* vel)
{
    NPARData *pNVar1;
    NPARMgmt *mgmt = (NPARMgmt *)NPAR_FindParty(NPAR_TYP_DOGBREATH);
    if ((mgmt != NULL) && (pNVar1 = mgmt->NextAvail(), pNVar1 != NULL))
    {
        g_parm_dogbreath[pmod].ConfigPar(pNVar1,pmod,pos,vel);
    }
}

void NPAR_EmitDoggyWisps(const xVec3* pos, const xVec3* vel)
{
    NPAR_EmitDoggyBreath(NPAR_MODE_ALT_A, pos, vel);
}

void NPAR_EmitDoggyAttack(const xVec3* pos, const xVec3* vel)
{
    NPAR_EmitDoggyBreath(NPAR_MODE_ALT_B, pos, vel);
}

void NPARParmGloveDust::ConfigPar(NPARData* par, en_nparmode pmod, const xVec3* pos, const xVec3* vel) const
{
    F32 fac_rand = xurand() * 0.5f + 0.5f;
    F32 samecalc = tym_lifespan * fac_rand;

    par->fac_abuse = fac_rand;
    par->tmr_remain = samecalc;
    par->tym_exist = samecalc;

    par->pos = *pos;
    par->vel = *vel;

    par->xy_size[0] = siz_base[0];
    par->xy_size[1] = siz_base[0];

    par->color = colr_base;

    par->uv_tl[0] = 0.0f;
    par->uv_tl[1] = 0.0f;
    par->uv_br[0] = 1.0f;
    par->uv_br[1] = 1.0f;

    par->nparmode = pmod;
}

void NPARParmTubeSpiral::ConfigPar(NPARData* par, en_nparmode pmod, const xVec3* pos, const xVec3* vel, F32 dt) const
{
    par->fac_abuse = (xurand() * 0.5f + 0.5f);
    par->tmr_remain = dt;
    par->tym_exist = dt;
    par->pos = *pos;
    par->vel = *vel;
    par->xy_size[0] = siz_base[0];
    par->xy_size[1] = siz_base[0];
    par->color = colr_base;
    par->uv_tl[0] = 0.0;
    par->uv_tl[1] = 0.0;
    par->uv_br[0] = 1.0;
    par->uv_br[1] = 1.0;
    par->nparmode = pmod;
}

// Equivalent: weird unnecessary use of mulli to index into g_parm_tubespiral.
void NPAR_EmitTubeSpiralCin(const xVec3* pos, const xVec3* vel, float dt)
{
    NPARData* par;
    NPARMgmt* mgmt = NPAR_FindParty(NPAR_TYP_TUBESPIRAL);
    if ((mgmt != NULL) && (par = mgmt->NextAvail(), par != NULL))
    {
        g_parm_tubespiral[3].ConfigPar(par, NPAR_MODE_SPIRALCINE, pos, vel, dt);
    }
}

void NPARParmOilBub::ConfigPar(NPARData* par, en_nparmode pmod, const xVec3* pos, const xVec3* vel) const
{
    F32 fac_rand = (xurand() * 0.5f + 0.5f);
    F32 samecalc = tym_lifespan * fac_rand;
    par->fac_abuse  = fac_rand;
    par->tmr_remain = samecalc;
    par->tym_exist  = samecalc;
    par->pos = *pos;
    par->vel = (vel != NULL) ? *vel : g_O3;
    F32 uVar2 = siz_base[0];
    par->xy_size[0] = uVar2;
    par->xy_size[1] = uVar2;
    par->color = colr_base;
    par->uv_tl[0] = 0.0;
    par->uv_tl[1] = 0.0;
    par->uv_br[0] = 1.0;
    par->uv_br[1] = 1.0;
    par->nparmode = pmod;
}

void NPAR_EmitH2ODrips(const xVec3* pos, const xVec3* vel)
{
    NPAR_EmitDroplets(NPAR_MODE_DRIP, pos, vel);
}

void NPAR_EmitH2ODrops(const xVec3* pos, const xVec3* vel)
{
    NPAR_EmitDroplets(NPAR_MODE_DROP, pos, vel);
}

void NPAR_EmitH2OSpray(const xVec3* pos, const xVec3* vel)
{
    NPAR_EmitDroplets(NPAR_MODE_SPLASH, pos, vel);
}

void NPAR_EmitH2OTrail(const xVec3* pos)
{
    NPAR_EmitDroplets(NPAR_MODE_TRAIL, pos, (xVec3 *)&g_O3);
}

static void NPCC_ShadowCacheReset()
{
    for (int i = 0; i < sizeof(g_shadCachesInUseFlags) / sizeof(S8); i++)
    {
        g_shadCachesInUseFlags[i] = 0;
    }
}