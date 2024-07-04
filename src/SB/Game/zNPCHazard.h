#ifndef ZNPCHAZARD_H
#define ZNPCHAZARD_H

#include "zLightning.h"

#include "xMath3.h"
#include "xCollide.h"
#include "xShadow.h"

#include <rwcore.h>
#include <rpworld.h>

struct UVAModelInfo
{
    xVec2 offset_vel;
    uint32 flg_uvam;
    RpAtomic* model;
    RwTexCoords* uv;
    int32 uvsize;
    xVec2 offset;

    void Hemorrage();
    void Clear();
    void UVVelSet(float, float);
    int32 GetUV(RwTexCoords*& coords, int32& numVertices, RpAtomic* model);
};

struct NPCHazard;

enum en_npchaz
{
    NPC_HAZ_UNKNOWN,
    NPC_HAZ_EXPLODE,
    NPC_HAZ_EXPLODE_INNER,
    NPC_HAZ_FODBOMB,
    NPC_HAZ_CATTLEPROD,
    NPC_HAZ_TUBELETBLAST,
    NPC_HAZ_PUPPYNUKE,
    NPC_HAZ_DUPLOBOOM,
    NPC_HAZ_DUPLO_SHROOM,
    NPC_HAZ_PATRIOT,
    NPC_HAZ_TARTARPROJ,
    NPC_HAZ_TARTARSPILL,
    NPC_HAZ_TARTARSTINK,
    NPC_HAZ_CHUCKBOMB,
    NPC_HAZ_CHUCKBLAST,
    NPC_HAZ_CHUCKBLOOSH,
    NPC_HAZ_ARFBONE,
    NPC_HAZ_ARFBONEBLAST,
    NPC_HAZ_OILBUBBLE,
    NPC_HAZ_OILSLICK,
    NPC_HAZ_OILBURST,
    NPC_HAZ_OILGLOB,
    NPC_HAZ_MONCLOUD,
    NPC_HAZ_FUNFRAG,
    NPC_HAZ_THUNDER,
    NPC_HAZ_ROBOBITS,
    NPC_HAZ_VISSPLASH,
    NPC_HAZ_NOMORE,
    NPC_HAZ_FORCE = 0x7fffffff
};

struct HAZTypical
{
    xMat3x3 mat_rotDelta;
    float32 rad_min;
    float32 rad_max;
    float32 rad_cur;
};

enum en_hazcol
{
    HAZ_COLTYP_STAT,
    HAZ_COLTYP_DYN,
    HAZ_COLTYP_NPC,
    HAZ_COLTYP_NOMORE,
    HAZ_COLTYP_FORCE = 0x7fffffff
};

struct HAZCollide : HAZTypical
{
    xVec3 pos_collide;
    xVec3 dir_normal;
    xParabola parabinfo;
    struct
    {
        int32 flg_collide : 8;
        int32 flg_result : 8;
        int32 flg_unused : 16;
    };
    int32 cnt_skipcol;
    en_hazcol idx_rotateCol;
};

struct HAZBall : HAZTypical
{
};

struct HAZRing : HAZTypical
{
    float32 hyt_ring;
};

struct HAZShroom : HAZTypical
{
    xVec3 vel_rise;
    xVec3 acc_rise;
};

struct HAZCloud : HAZTypical
{
    float32 spd_cloud;
    xVec3 pos_home;
    float32 rad_maxRange;
    float32 tmr_dozap;
    zLightning* zap_lytnin;
    zLightning* zap_warnin;
    xVec3 pos_warnin;
};

struct HAZMissile
{
    float32 vel;
};

struct HAZPatriot : HAZMissile
{
    xVec3 pos_began;
    float32 spd_peak;
    float32 spd_curr;
    float32 acc_rate;
};

struct HAZTarTar : HAZCollide
{
    xVec3 vel;
    float32 spd_lob;
    xVec3 pos_tgt;
    uint32 streakID;
    uint32 pad; // This is needed to ensure the correct size!
};

struct HAZCatProd : HAZBall
{
    zLightning* zap_lyta;
    zLightning* zap_lytb;
};

enum en_haznote
{
    HAZ_NOTE_DISCARD,
    HAZ_NOTE_ABORT,
    HAZ_NOTE_HITPLAYER,
    HAZ_NOTE_RECONFIG,
    HAZ_NOTE_NOMORE,
    HAZ_NOTE_FORCE = 0x7fffffff
};

struct HAZNotify
{
    virtual int32 Notify(en_haznote note, NPCHazard* haz);
};

struct zNPCCommon;

struct NPCHazard
{
    en_npchaz typ_hazard;
    int32 flg_hazard;
    xVec3 pos_hazard;
    // Offset: 0x14
    xModelInstance* mdl_hazard;
    UVAModelInfo* uva_uvanim;
    float32 tym_lifespan;
    // Offset: 0x20
    float32 tmr_remain;
    float32 pam_interp;
    union
    {
        float32 tmr_generic;
        float32 tmr_nextglob;
    };
    union
    {
        int32 cnt_generic;
        int32 cnt_nextemit;
        int32 flg_casthurt;
    };
    // Offset: 0x30
    union
    {
        HAZTypical typical;
        HAZCollide collide;
        HAZBall ball;
        HAZRing ring;
        HAZShroom shroom;
        HAZCloud cloud;
        HAZPatriot patriot;
        HAZTarTar tartar;
        HAZCatProd catprod;
    } custdata;
    HAZNotify* cb_notify;
    zNPCCommon* npc_owner;
    NPCHazard* haz_parent;
    xShadowCache* shadowCache;

    NPCHazard();
    NPCHazard(en_npchaz haztype);
    int32 ConfigHelper(en_npchaz haztype);
    void Reconfigure(en_npchaz haztype);
    void SetNPCOwner(zNPCCommon* owner);
    void Start(const xVec3* pos, float32 tym);
    void MarkForRecycle();
    void Kill();
    void Cleanup();
    void WipeIt();
    void PosSet(const xVec3* pos);
    void NotifyCBSet(HAZNotify* noter);
    void SetAlpha(float32 alpha);
    int32 ColTestSphere(const xBound* bnd_tgt, float32 rad);
    int32 ColTestCyl(const xBound* bnd_tgt, float32 rad, float32 hyt);
    int32 ColPlyrSphere(float32 rad);
    int32 ColPlyrCyl(float32 rad, float32 hyt);
    void HurtThePlayer();
    void TypData_RotMatSet(xMat3x3* mat);
    void TypData_RotMatApply(xMat3x3* mat);
    void StagColGeneral(int32 who);
    void StagColStat();
    void StagColNPC();
    void StagColDyn();
    void ColResp_Default(xSweptSphere* swdata, float32 tym_inFuture);
    void CollideResponse(xSweptSphere* swdata, float32 tym_inFuture);
    RwV3d* At();
    RwV3d* Right();
    RwV3d* Up();
    void Discard();
};

void zNPCHazard_Startup();
void zNPCHazard_Shutdown();
void zNPCHazard_ScenePrepare();
void zNPCHazard_SceneFinish();
void zNPCHazard_SceneReset();
void zNPCHazard_ScenePostInit();
void zNPCHazard_InitEffects();
void zNPCHazard_KillEffects();
int32 HAZ_ord_sorttest(void* vkey, void* vitem);
void zNPCHazard_Timestep(float32 dt);
void zNPCCommon_Hazards_RenderAll(int32 doOpaqueStuff);
NPCHazard* HAZ_Acquire();
int32 HAZ_AvailablePool();
void HAZ_Iterate(bool (*fp)(NPCHazard&, void*), void* context, int32 flag_filter);

float32 xVec2Length2(const xVec2* v);

#endif
