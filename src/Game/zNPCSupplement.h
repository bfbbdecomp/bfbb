#ifndef ZNPCSUPPLEMENT_H
#define ZNPCSUPPLEMENT_H

#include "../Core/x/xVec3.h"
#include "../Core/x/xMAth2.h"
#include "../Core/x/xPtankPool.h"
#include "../Core/gc/iColor.h"

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
    float32 xy_size[2];
    float32 uv_tl[2];
    float32 uv_br[2];
    RwRGBA color;
    float32 tmr_remain;
    float32 tym_exist;
    float32 fac_abuse;
    xVec3 vel;
    struct
    {
        int32 flg_popts : 24;
        int32 nparmode : 8;
    };
    float32 unused[3];
};

struct NPARXtraData
{
};

struct NPARMgmt
{
    en_nparptyp typ_npar;
    int32 flg_npar;
    NPARData* par_buf;
    int32 cnt_active;
    int32 num_max;
    RwTexture* txtr;
    NPARXtraData* xtra_data;
    void** user_data;

    void Init(en_nparptyp parType, void** userData, NPARXtraData* xtraData);
    void Clear();
    void Done();
    void Reset();
    int32 IsReady();
    void UpdateAndRender(float32 param_1);
    void XtraDataSet(NPARXtraData* param_1);
    void UserDataSet(void** user_data);
};

struct NPARInfo
{
    void (*fun_update)(NPARMgmt*, float32);
    int32 num_maxParticles;
    int8* nam_texture;
    int32 flg_npar;
};

struct ptank_pool__pos_color_size_uv2 : ptank_pool
{
    xVec3* pos;
    iColor_tag* color;
    xVec2* size;
    xVec2* uv;
    int32 stride;
};

struct StreakInfo
{
    float32 freq;
    float32 alf_fade;
    float32 alf_start;
    uint32 idx_useTxtr;
    iColor_tag rgba_left;
    iColor_tag rgba_right;
    int32 taper;
};

void NPCC_MakeASplash(const xVec3* pos, float32 radius);
void NPCSupplement_Shutdown();
void NPAR_ScenePrepare();
void NPAR_SceneFinish();
NPARMgmt* NPAR_PartySetup(en_nparptyp parType, void** userData, NPARXtraData* xtraData);
void NPAR_SceneReset();
void NPCC_ShadowCacheReset();
void NPAR_Timestep(float32 dt);
void NPCC_MakeStreakInfo(en_npcstreak styp, StreakInfo* info);
void xFXStreakStart(en_npcstreak* styp);
void UpdateAndRender(NPARMgmt param_1, float32 dt);
float32 BOWL3(float32 param_1);
float32 QUB(float32 param_1);
float32 BOWL(float32 param_1);

#endif
