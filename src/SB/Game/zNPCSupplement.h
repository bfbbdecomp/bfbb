#ifndef ZNPCSUPPLEMENT_H
#define ZNPCSUPPLEMENT_H

#include "iColor.h"

#include "xMAth2.h"
#include "xPtankPool.h"
#include "xVec3.h"

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

    void Init(en_nparptyp parType, void** userData, NPARXtraData* xtraData);
    void Clear();
    void Done();
    void Reset();
    S32 IsReady();
    void UpdateAndRender(F32 param_1);
    void XtraDataSet(NPARXtraData* param_1);
    void UserDataSet(void** user_data);
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
void NPCSupplement_Shutdown();
void NPAR_ScenePrepare();
void NPAR_SceneFinish();
NPARMgmt* NPAR_PartySetup(en_nparptyp parType, void** userData, NPARXtraData* xtraData);
void NPAR_SceneReset();
void NPCC_ShadowCacheReset();
void NPAR_Timestep(F32 dt);
void NPCC_MakeStreakInfo(en_npcstreak styp, StreakInfo* info);
void xFXStreakStart(en_npcstreak* styp);
void UpdateAndRender(NPARMgmt param_1, F32 dt);
F32 BOWL3(F32 param_1);
F32 QUB(F32 param_1);
F32 BOWL(F32 param_1);

#endif
