#ifndef ZNPCFXCINEMATIC_H
#define ZNPCFXCINEMATIC_H

#include <types.h>
#include "zCutsceneMgr.h"
#include "xVec3.h"
#include "zLightning.h"
#include "zNPCHazard.h"
#include "zParEmitter.h"
#include "zShrapnel.h"

void zNPCFXStartup();
void zNPCFXShutdown();
S32 zNPCFXCutscenePrep(const xScene*, F32, const zCutsceneMgr* csnmgr);
void zNPCFXCutscene(const xScene*, F32, const zCutsceneMgr* csnmgr);
void zNPCFXCutsceneDone(const xScene*, F32, const zCutsceneMgr* csnmgr);

struct NCINLyt
{
    zLightning* lyt_zap;
};

struct NCINHaz
{
    NPCHazard* npchaz;
};

struct NCINLamp
{
    xVec3 pos_robo;
    RwRaster* rast;
};

struct NCINDRay
{
    RwRaster* rast;
};

struct NCINStrk
{
    U32 sid_vert;
    U32 sid_horz;
};

struct NCINArc
{
    zLightning* lightning;
    xVec3 endPos;
};

struct NCINPar
{
    zParEmitter* emitter;
};

struct NCINEnts
{
    xEnt* ent[4];
};

struct NCINShrap
{
    zShrapnelAsset* shrap;
};

struct NCINCustom
{
    F32 f[1];
    xVec3 v[2];
};

struct NCINRast
{
    RwRaster* raster;
};

struct NCINMat
{
    RwMatrixTag* mat;
};

struct NCINData
{
    union
    {
        NCINLyt lytdata;
        NCINHaz hazdata;
        NCINLamp lampdata;
        NCINDRay draydata;
        NCINStrk strkdata;
        NCINArc arcdata;
        NCINPar pardata;
        NCINEnts entdata;
        NCINShrap shrapdata;
        NCINCustom customdata;
        NCINRast rastinfo;
        NCINMat matdata;
    };
};

enum en_ncinfx
{
    NCIN_FXTYP_UNKNOWN,
    NCIN_FXTYP_EXAMPLE,
    NCIN_FXTYP_BUBSLAM_LG,
    NCIN_FXTYP_BUBSLAM_SM,
    NCIN_FXTYP_SMOKETRAIL,
    NCIN_FXTYP_BUBTRAIL,
    NCIN_FXTYP_BUBTRAILBONE,
    NCIN_FXTYP_BUBWIPE,
    NCIN_FXTYP_JELLYLIGHT_01,
    NCIN_FXTYP_WATERSPLASH,
    NCIN_FXTYP_TARTARSHOOT,
    NCIN_FXTYP_OILSHOOT,
    NCIN_FXTYP_BONESHOOT,
    NCIN_FXTYP_BONETRAIL,
    NCIN_FXTYP_BOMBTRAIL,
    NCIN_FXTYP_OILHAZARD,
    NCIN_FXTYP_TARTARSTEAM,
    NCIN_FXTYP_ARFDOGBOOM,
    NCIN_FXTYP_SHIELDPOP,
    NCIN_FXTYP_TTGUNSMOKE,
    NCIN_FXTYP_SPATULAGLOW,
    NCIN_FXTYP_HOOKRECOIL,
    NCIN_FXTYP_FODDERPROD,
    NCIN_FXTYP_BZZTDANCE,
    NCIN_FXTYP_BZZTBEAM,
    NCIN_FXTYP_BADBREATH,
    NCIN_FXTYP_BOMBBLINK,
    NCIN_FXTYP_HAMSHOCK,
    NCIN_FXTYP_HAMSTREAK,
    NCIN_FXTYP_MONCLOUD,
    NCIN_FXTYP_MIDFISH,
    NCIN_FXTYP_GLOVEFRAG,
    NCIN_FXTYP_MARYBOOM,
    NCIN_FXTYP_PETEBONK,
    NCIN_FXTYP_FIRESPIRAL,
    NCIN_FXTYP_SLEEPYLAMP,
    NCIN_FXTYP_SLEEPYDRAY,
    NCIN_FXTYP_B101OPEN_SBENTER,
    NCIN_FXTYP_B101OPEN_PATENTER,
    NCIN_FXTYP_B101OPEN_SHOCKWAVE,
    NCIN_FXTYP_B101ROUND1_SHOCK1,
    NCIN_FXTYP_B101ROUND1_SHOCK2,
    NCIN_FXTYP_B101ROUND1_SHOCK3,
    NCIN_FXTYP_B101ENDING_SHOCK1,
    NCIN_FXTYP_B101ENDING_SHOCK2,
    NCIN_FXTYP_B101ENDING_SHOCK3,
    NCIN_FXTYP_B101ENDING_SHOCK4,
    NCIN_FXTYP_B101ENDING_SHOCKWAVE,
    NCIN_FXTYP_B201OPEN_FREEZE,
    NCIN_FXTYP_B201ROUND1_FREEZE,
    NCIN_FXTYP_B201HIDECONVEYOR,
    NCIN_FXTYP_B201GOOLEVER,
    NCIN_FXTYP_B201FRAG,
    NCIN_FXTYP_B303STUFF,
    NCIN_FXTYP_PAR_ENTITY_BONE,
    NCIN_FXTYP_PROBE,
    NCIN_FXTYP_DUPLOPUFFS,
    NCIN_FXTYP_SPAWNRING,
    NCIN_FXTYP_BUBPLYRSKEL,
    NCIN_FXTYP_GLINT,
    NCIN_FXTYP_NOMORE,
    NCIN_FXTYP_FORCE = 0x7fffffff
};

struct NCINEntry
{
    en_ncinfx typ_ncinfx;
    void (*cb_fxupd)(zCutsceneMgr*, NCINEntry*, U32);
    void (*cb_fxanim)(zCutsceneMgr*, NCINEntry*, RpAtomic*, RwMatrixTag*, U32, U32);
    void (*cb_fxrend)(zCutsceneMgr*, NCINEntry*);
    F32 tym_beg;
    F32 tym_end;
    xVec3 pos_A[2];
    xVec3 pos_B[2];
    S8* twk_name;
    S32 idx_anim;
    S32 idx_bone;
    S32 flg_stat;
    NCINData fxdata;
};

struct NPCCone
{
    F32 rad_cone;
    RwRGBA rgba_top;
    RwRGBA rgba_bot;
    RwRaster* rast_cone;
    F32 uv_tip[2];
    F32 uv_slice[2];
    void TextureSet(RwRaster* raster);
};

#endif
