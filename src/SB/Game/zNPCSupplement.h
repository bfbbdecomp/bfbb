#ifndef ZNPCSUPPLEMENT_H
#define ZNPCSUPPLEMENT_H

#include "iColor.h"

#include "xMath2.h"
#include "xPtankPool.h"
#include "xShadow.h"
#include "xVec3.h"
#include "zNPCTypeCommon.h"

#include "zLightning.h"
#include <types.h>
#include <rwplcore.h>
#include <rwcore.h>

enum en_nparptyp
{
    NPAR_TYP_UNKNOWN,
    NPAR_TYP_OILBUB,
    NPAR_TYP_TUBESPIRAL,
    NPAR_TYP_TUBECONFETTI,
    NPAR_TYP_GLOVEDUST,
    NPAR_TYP_MONSOONRAIN,
    NPAR_TYP_SLEEPYZEEZ,
    NPAR_TYP_CHUCKSPLASH,
    NPAR_TYP_TARTARGUNK,
    NPAR_TYP_DOGBREATH,
    NPAR_TYP_VISSPLASH,
    NPAR_TYP_FIREWORKS,
    NPAR_TYP_NOMORE,
    NPAR_TYP_FORCE = 0x7fffffff
};

enum en_npcstreak
{
    NPC_STRK_TARTARBLOB,
    NPC_STRK_OILBUBBLE,
    NPC_STRK_HAMMERSMASH_VERT,
    NPC_STRK_HAMMERSMASH_HORZ,
    NPC_STRK_ARFMELEE,
    NPC_STRK_TOSSEDROBOT,
    NPC_STRK_TOSSEDJELLY,
    NPC_STRK_TOSSEDJELLYBLUE,
    NPC_STRK_NOMORE,
    NPC_STRK_FORCE = 0x7fffffff
};

enum en_nparmode
{
    NPAR_MODE_STD = 0,
    NPAR_MODE_ALT_A = 1,
    NPAR_MODE_ALT_B = 2,
    NPAR_MODE_ALT_C = 3,
    NPAR_MODE_ALT_D = 4,
    NPAR_MODE_ALT_E = 5,
    NPAR_MODE_SPIRALNORM = 1,
    NPAR_MODE_SPIRALCALT = 2,
    NPAR_MODE_SPIRALCINE = 3,
    NPAR_MODE_OIL_TRAIL = 1,
    NPAR_MODE_OIL_VAPOR = 2,
    NPAR_MODE_OIL_SPLASH = 3,
    NPAR_MODE_FETTI_SPARKLIES = 1,
    NPAR_MODE_DRIP = 1,
    NPAR_MODE_DROP = 2,
    NPAR_MODE_SPLASH = 3,
    NPAR_MODE_TRAIL = 4,
    NPAR_MODE_TTNOZZLE = 1,
    NPAR_MODE_TTTRAIL = 2,
    NPAR_MODE_TTSPLASH = 3,
    NPAR_MODE_TTSPOIL = 4,
    NPAR_MODE_TTSMOKE = 5,
    NPAR_MODE_DOGGYWISP = 1,
    NPAR_MODE_DOGGYATTACK = 2,
    NPAR_MODE_FWEXHAUST = 1,
    NPAR_MODE_FWSTARBURST = 2,
    NPAR_MODE_FWGLITTER = 3,
    NPAR_MODE_NOMORE = 4,
};

enum en_npclyt
{
    NPC_LYT_PLACEHOLDER = 0,
    NPC_LYT_JELLYFISH = 1,
    NPC_LYT_JELLYFISHBLUE = 2,
    NPC_LYT_CATTLEPROD = 3,
    NPC_LYT_TIKITHUNDER = 4,
    NPC_LYT_CLOUDWARN = 5,
    NPC_LYT_CLOUDZAP = 6,
    NPC_LYT_SLEEPYARC = 7,
    NPC_LYT_NOMORE = 8,
    NPC_LYT_FORCE = 2147483647,
};

struct NPARData
{
    xVec3 pos;
    F32 xy_size[2];
    F32 uv_tl[2];
    F32 uv_br[2];
    RwRGBA color;
    F32 tmr_remain;
    F32 tym_exist;
    F32 fac_abuse;
    xVec3 vel;
    struct
    {
        S32 flg_popts : 24;
        S32 nparmode : 8;
    };
    F32 unused[3];
};

struct NPARXtraData
{
};

class NPARParmVisSplash
{
    // total size: 0x20
public:
    F32 tym_lifespan; // offset 0x0, size 0x4
    RwRGBA colr_base; // offset 0x4, size 0x4
    F32 siz_base[2]; // offset 0x8, size 0x8
    xVec3 acc_base; // offset 0x10, size 0xC
    S32 pct_keep; // offset 0x1C, size 0x4

    void ConfigPar(NPARData* par, en_nparmode pmod, const xVec3* pos, const xVec3* vel) const;
};

class NPARParmTarTarGunk
{
    // total size: 0x28
public:
    F32 tym_lifespan; // offset 0x0, size 0x4
    RwRGBA colr_base; // offset 0x4, size 0x4
    F32 siz_base[2]; // offset 0x8, size 0x8
    xVec3 acc_base; // offset 0x10, size 0xC
    F32 uv_scroll[2]; // offset 0x1C, size 0x8
    U8 row_uvstart; // offset 0x24, size 0x1
    U8 num_uvcell[2]; // offset 0x25, size 0x2
    U8 pct_keep; // offset 0x27, size 0x1

    void ConfigPar(NPARData*, en_nparmode, const xVec3*, const xVec3*) const;
};

class NPARParmFahrwerkz
{
    // total size: 0x28
public:
    F32 tym_lifespan; // offset 0x0, size 0x4
    RwRGBA colr_base; // offset 0x4, size 0x4
    F32 siz_base[2]; // offset 0x8, size 0x8
    xVec3 acc_base; // offset 0x10, size 0xC
    F32 uv_scroll[2]; // offset 0x1C, size 0x8
    U8 row_uvstart; // offset 0x24, size 0x1
    U8 num_uvcell[2]; // offset 0x25, size 0x2
    U8 pct_keep; // offset 0x27, size 0x1

    void ConfigPar(NPARData*, en_nparmode, const xVec3*, const xVec3*) const;
};

class NPARParmSleepyZeez
{
    // total size: 0x28
public:
    F32 tym_lifespan; // offset 0x0, size 0x4
    RwRGBA colr_base; // offset 0x4, size 0x4
    F32 siz_base[2]; // offset 0x8, size 0x8
    xVec3 acc_base; // offset 0x10, size 0xC
    F32 uv_scroll[2]; // offset 0x1C, size 0x8
    U8 row_uvstart; // offset 0x24, size 0x1
    U8 num_uvcell[2]; // offset 0x25, size 0x2
    U8 pct_keep; // offset 0x27, size 0x1

    void ConfigPar(NPARData*, en_nparmode, const xVec3*, const xVec3*) const;
};

class NPARParmDogBreath
{
    // total size: 0x20
public:
    F32 tym_lifespan; // offset 0x0, size 0x4
    RwRGBA colr_base; // offset 0x4, size 0x4
    F32 siz_base[2]; // offset 0x8, size 0x8
    xVec3 acc_base; // offset 0x10, size 0xC
    U8 pct_keep; // offset 0x1C, size 0x1
    U8 unused[3]; // offset 0x1D, size 0x3

    void ConfigPar(NPARData* par, en_nparmode pmod, const xVec3* pos, const xVec3* vel) const;
};

class NPARParmGloveDust
{
    // total size: 0x1C
public:
    F32 tym_lifespan; // offset 0x0, size 0x4
    RwRGBA colr_base; // offset 0x4, size 0x4
    F32 siz_base[2]; // offset 0x8, size 0x8
    xVec3 acc_base; // offset 0x10, size 0xC

    void ConfigPar(NPARData* par, en_nparmode pmod, const xVec3* pos, const xVec3* vel) const;
};

class NPARParmOilBub
{
    // total size: 0x1C
public:
    F32 tym_lifespan; // offset 0x0, size 0x4
    RwRGBA colr_base; // offset 0x4, size 0x4
    xVec3 acc_oilBubble; // offset 0x8, size 0xC
    F32 siz_base[2]; // offset 0x14, size 0x8

    void ConfigPar(NPARData*, en_nparmode, const xVec3*, const xVec3*) const;
};

class NPARParmTubeConfetti
{
    // total size: 0x28
public:
    F32 tym_lifespan; // offset 0x0, size 0x4
    RwRGBA colr_base; // offset 0x4, size 0x4
    F32 siz_base[2]; // offset 0x8, size 0x8
    xVec3 acc_base; // offset 0x10, size 0xC
    F32 uv_scroll[2]; // offset 0x1C, size 0x8
    U8 row_uvstart; // offset 0x24, size 0x1
    U8 num_uvcell[2]; // offset 0x25, size 0x2
    U8 pct_keep; // offset 0x27, size 0x1

    void ConfigPar(NPARData*, en_nparmode, const xVec3*, const xVec3*) const;
};

class NPARParmTubeSpiral
{
    // total size: 0xC
public:
    RwRGBA colr_base; // offset 0x0, size 0x4
    F32 siz_base[2]; // offset 0x4, size 0x8

    void ConfigPar(NPARData*, en_nparmode, const xVec3*, const xVec3*, F32 dt) const;
};

class NPARParmChuckSplash
{
    // total size: 0x20
public:
    F32 tym_lifespan; // offset 0x0, size 0x4
    RwRGBA colr_base; // offset 0x4, size 0x4
    F32 siz_base[2]; // offset 0x8, size 0x8
    xVec3 acc_base; // offset 0x10, size 0xC
    S32 pct_keep; // offset 0x1C, size 0x4

    void ConfigPar(NPARData*, en_nparmode, const xVec3*, const xVec3*) const;
};

struct NPARMgmt
{
    en_nparptyp typ_npar;
    S32 flg_npar;
    NPARData* par_buf;
    S32 cnt_active;
    S32 num_max;
    RwTexture* txtr;
    NPARXtraData* xtra_data;
    void** user_data;
    void KillAll();

    void Init(en_nparptyp parType, void** userData, NPARXtraData* xtraData);
    void Clear();
    void Done();
    void Reset();
    S32 IsReady();
    void UpdateAndRender(F32 param_1);
    void XtraDataSet(NPARXtraData* param_1);
    void UserDataSet(void** user_data);
    NPARData* NextAvail();
};

struct NPARInfo
{
    void (*fun_update)(NPARMgmt*, F32);
    S32 num_maxParticles;
    char* nam_texture;
    S32 flg_npar;
};

struct StreakInfo
{
    F32 freq;
    F32 alf_fade;
    F32 alf_start;
    U32 idx_useTxtr;
    iColor_tag rgba_left;
    iColor_tag rgba_right;
    S32 taper;
};

void NPCC_MakeASplash(const xVec3* pos, F32 radius);
void NPCSupplement_Startup();
void NPCSupplement_Shutdown();
void NPCSupplement_ScenePrepare();
void NPCSupplement_SceneFinish();
void NPCSupplement_SceneReset();
void NPCSupplement_ScenePostInit();
void NPCSupplement_Timestep(F32 dt);
void NPCC_MakeLightningInfo(en_npclyt style, _tagLightningAdd* info);
void NPAR_ScenePrepare();
void NPAR_SceneFinish();
void NPAR_EmitTarTarNozzle(const xVec3* pos, const xVec3* vel);
void NPAR_EmitTarTarTrail(const xVec3*, const xVec3*);
void NPAR_EmitTarTarSplash(const xVec3* pos, const xVec3* vel);
void NPAR_EmitTarTarSpoil(const xVec3* pos, const xVec3* vel);
void NPAR_EmitTarTarSmoke(const xVec3* pos, const xVec3* vel);
void NPAR_EmitH2ODrips(const xVec3* pos, const xVec3* vel);
void NPAR_EmitH2ODrops(const xVec3* pos, const xVec3* vel);
void NPAR_EmitH2OSpray(const xVec3* pos, const xVec3* vel);
void NPAR_EmitH2OTrail(const xVec3* pos);
void NPAR_EmitOilSplash(const xVec3* pos, const xVec3* vel);
void NPAR_EmitOilTrailz(const xVec3* pos);
void NPAR_EmitOilVapors(const xVec3* pos);
void NPAR_EmitTubeSparklies(const xVec3* pos, const xVec3* vel);
void NPAR_EmitVSSpray(const xVec3* pos, const xVec3* vel);
NPARMgmt* NPAR_PartySetup(en_nparptyp parType, void** userData, NPARXtraData* xtraData);
void NPAR_SceneReset();
static void NPCC_ShadowCacheReset();
void NPAR_Timestep(F32 dt);
void NPAR_EmitDroplets(en_nparmode, const xVec3*, const xVec3*);
void NPCC_MakeStreakInfo(en_npcstreak styp, StreakInfo* info);
U32 xFXStreakStart(StreakInfo* styp);
U32 NPCC_StreakCreate(en_npcstreak styp);
void NPCC_Slick_MakePlayerSlip(zNPCCommon* npc);
void NPCC_RenderProjTextureFaceCamera(RwRaster* rast, F32 factor, xVec3* pos, F32 radius,
                                      F32 height, xShadowCache* cache, S32 fillCache, xEnt* ent);
void UpdateAndRender(NPARMgmt param_1, F32 dt);
F32 BOWL3(F32 param_1);
F32 QUB(F32 param_1);
F32 BOWL(F32 param_1);

#endif
