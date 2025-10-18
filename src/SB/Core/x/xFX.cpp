#include "xFX.h"

#include "iFX.h"
#include "iMath.h"

#include "xDebug.h"
#include "xstransvc.h"
#include "xScrFx.h"

#include "zEntPickup.h"
#include "zParEmitter.h"
#include "zSurface.h"
#include "zFX.h"
#include "zGlobals.h"
#include "zRumble.h"

#include <string.h>
#include <rpmatfx.h>
#include <rwplcore.h>
#include <rpskin.h>

// no clue why this file is so out of order

/* boot.HIP texture IDs */
#define ID_gloss_edge 0xB8C2351E
#define ID_rainbowfilm_smooth32 0x741B0566

extern const char _stringBase0_7[];

RpAtomicCallBackRender gAtomicRenderCallBack = NULL;
F32 EnvMapShininess = 1.0f;
RpLight* MainLight = NULL;

static U32 num_fx_atomics = 0;

static U32 xfx_initted = 0;

xFXStreak sStreakList[10];
xFXShine sShineList[2];

static void LightResetFrame(RpLight* light);

void xFXInit()
{
    if (!xfx_initted)
    {
        xfx_initted = 1;

        RpLight* light = RpLightCreate(rpLIGHTDIRECTIONAL);

        if (light)
        {
            RwFrame* frame = RwFrameCreate();

            if (frame)
            {
                RpLightSetFrame(light, frame);
                LightResetFrame(light);

                MainLight = light;
            }
            else
            {
                RpLightDestroy(light);
            }
        }

        xFXanimUVCreate();
        xFXAuraInit();
    }
}

static U32 Im3DBufferPos = 0;
static RwTexture* g_txtr_drawRing = NULL;

static xFXBubbleParams defaultBFX = {
    // pass1, pass2, pass3, padding
    1, 1, 1, 0,
    // pass1_alpha, pass2_alpha, pass3_alpha, pass1_fbsk
    0, 0, 192, 0xFFFFFFFF,
    // fresnel_map, fresnel_map_coeff
    ID_gloss_edge, 0.75f,
    // env_map, env_map_coeff
    ID_rainbowfilm_smooth32, 0.5f
};

static U32 bfx_curr = 0;
static xFXBubbleParams* BFX = &defaultBFX;

static U32 sFresnelMap = 0;
static U32 sEnvMap = 0;
static S32 sTweaked = 0;

xFXRing ringlist[RING_COUNT];

static RxPipeline* xFXanimUVPipeline = NULL;
F32 xFXanimUVRotMat0[2] = { 1.0f, 0.0f };
F32 xFXanimUVRotMat1[2] = { 0.0f, 1.0f };
F32 xFXanimUVTrans[2] = { 0.0f, 0.0f };
F32 xFXanimUVScale[2] = { 1.0f, 1.0f };
F32 xFXanimUV2PRotMat0[2] = { 1.0f, 0.0f };
F32 xFXanimUV2PRotMat1[2] = { 0.0f, 1.0f };
F32 xFXanimUV2PTrans[2] = { 0.0f, 0.0f };
F32 xFXanimUV2PScale[2] = { 1.0f, 1.0f };
RwTexture* xFXanimUV2PTexture = NULL;

static void DrawRingSetup()
{
    g_txtr_drawRing = (RwTexture*)xSTFindAsset(ID_rainbowfilm_smooth32, NULL);
}

static void DrawRingSceneExit()
{
    g_txtr_drawRing = NULL;
}

static void DrawRing(xFXRing* m)
{
    // todo: uses int-to-float conversion
}

xFXRing* xFXRingCreate(const xVec3* pos, const xFXRing* params)
{
    xFXRing* ring = &ringlist[0];

    if (!pos || !params)
    {
        return NULL;
    }

    for (S32 i = 0; i < RING_COUNT; i++, ring++)
    {
        if (ring->time <= 0.0f)
        {
            // non-matching: 1.0f is only loaded once

            memcpy(ring, params, sizeof(xFXRing));

            ring->time = 0.001f;
            ring->pos = *pos;
            ring->ring_radius_delta *= 1.0f / ring->lifetime;
            ring->ring_height_delta *= 1.0f / ring->lifetime;
            ring->ring_tilt_delta *= 1.0f / ring->lifetime;

            return ring;
        }
    }

    return NULL;
}

static void xFXRingUpdate(F32 dt)
{
    xFXRing* ring = &ringlist[0];

    if ((F32)iabs(dt) < 0.001f)
    {
        return;
    }

    for (S32 i = 0; i < RING_COUNT; i++, ring++)
    {
        if (ring->time <= 0.0f)
        {
            continue;
        }

        F32 lifetime = ring->lifetime;

        if (lifetime < dt)
        {
            lifetime = dt;
        }

        ring->time += dt;

        F32 t = ring->time / lifetime;

        // non-matching: float scheduling

        if (t > 1.0f)
        {
            ring->time = 0.0f;

            if (ring->parent)
            {
                *ring->parent = NULL;
            }

            ring->parent = NULL;
        }
    }
}

void xFXRingRender()
{
    S32 i;
    xFXRing* ring = &ringlist[0];

    for (i = 0; i < RING_COUNT; i++, ring++)
    {
        if (ring->time > 0.0f)
        {
            DrawRing(ring);
        }
    }
}

static RpMaterial* MaterialSetEnvMap(RpMaterial* material, void* data);
static RpMaterial* MaterialSetBumpMap(RpMaterial* material, void* data);
static RpMaterial* MaterialSetBumpEnvMap(RpMaterial* material, RwTexture* env, F32 shininess,
                                         RwTexture* bump, F32 bumpiness);

void xFX_SceneEnter(RpWorld* world)
{
    S32 i;
    S32 num = RpWorldGetNumMaterials(world);

    for (i = 0; i < num; i++)
    {
        xSurface* sp = zSurfaceGetSurface(i);
        zSurfaceProps* pp = (zSurfaceProps*)sp->moprops;

        if (pp && pp->asset)
        {
            zSurfMatFX* fxp = &pp->asset->matfx;

            if (fxp->flags)
            {
                if (fxp->flags == 0x10)
                {
                    fxp->flags |= 0x1;
                }

                RpMaterial* mp = RpWorldGetMaterial(world, i);

                if (RpMaterialGetTexture(mp))
                {
                    gFXSurfaceFlags = fxp->flags;

                    if (fxp->flags & 0x1)
                    {
                        RwTexture* env = (RwTexture*)xSTFindAsset(fxp->envmapID, NULL);

                        if (!env)
                        {
                            continue;
                        }

                        MaterialSetEnvMap(mp, env);
                        RpMatFXMaterialSetEnvMapCoefficient(mp, 0.5f * fxp->shininess);
                    }

                    if (fxp->flags & 0x2)
                    {
                        RwTexture* bump = (RwTexture*)xSTFindAsset(fxp->bumpmapID, NULL);

                        if (!bump)
                        {
                            continue;
                        }

                        MaterialSetBumpMap(mp, bump);
                        RpMatFXMaterialSetBumpMapCoefficient(mp, fxp->bumpiness);
                    }

                    if (fxp->flags & 0x4)
                    {
                        RwTexture* env = (RwTexture*)xSTFindAsset(fxp->envmapID, NULL);
                        RwTexture* bump = (RwTexture*)xSTFindAsset(fxp->bumpmapID, NULL);

                        if (!env || !bump)
                        {
                            continue;
                        }

                        MaterialSetBumpEnvMap(mp, env, fxp->shininess, bump, fxp->bumpiness);
                    }
                }
            }
        }
    }

    zScene* sc = globals.sceneCur;

    for (i = 0; i < sc->num_act_ents; i++)
    {
        xEnt* ent = sc->act_ents[i];

        if (!gAtomicRenderCallBack && ent->model)
        {
            RpAtomicCallBackRender tmp = RpAtomicGetRenderCallBack(ent->model->Data);

            RpAtomicSetRenderCallBack(ent->model->Data, NULL);

            gAtomicRenderCallBack = RpAtomicGetRenderCallBack(ent->model->Data);

            RpAtomicSetRenderCallBack(ent->model->Data, tmp);
        }

        if (ent->model)
        {
            U32 bubble = 0;

            bubble |= (ent->id == xStrHash("bubble buddy"));
            bubble |= (ent->id == xStrHash("bubble missile"));
            bubble |= (ent->id == xStrHash("bubble helmet"));
            bubble |= (ent->id == xStrHash("bubble bowling ball"));
            bubble |= (ent->id == xStrHash("bubble shoeL"));
            bubble |= (ent->id == xStrHash("bubble shoeR"));

            if (bubble)
            {
                xSTAssetName(ent->id);

                RpAtomicSetRenderCallBack(ent->model->Data, xFXBubbleRender);
            }
        }
    }

    num_fx_atomics = 0;
}

void xFX_SceneExit(RpWorld*)
{
}

void xFXUpdate(F32 dt)
{
    xFXRingUpdate(dt);
    xFXRibbonUpdate(dt);
    xFXAuraUpdate(dt);
}

static const RwV3d _1168 = { 1, 0, 0 };
static const RwV3d _1169 = { 0, 1, 0 };

static void LightResetFrame(RpLight* light)
{
    // non-matching: lwzu instruction

    RwV3d v1 = { 1, 0, 0 };
    RwV3d v2 = { 0, 1, 0 };

    RwFrame* frame = RpLightGetFrame(light);

    RwFrameRotate(frame, &v1, 45.0f, rwCOMBINEREPLACE);
    RwFrameRotate(frame, &v2, 45.0f, rwCOMBINEPOSTCONCAT);
}

static RpMaterial* MaterialDisableMatFX(RpMaterial* material, void*)
{
    RpMatFXMaterialSetEffects(material, rpMATFXEFFECTNULL);
    return material;
}

RpAtomic* AtomicDisableMatFX(RpAtomic* atomic)
{
    RpMatFXAtomicEnableEffects(atomic);

    RpGeometry* geometry = RpAtomicGetGeometry(atomic);

    if (geometry)
    {
        RpGeometryForAllMaterials(geometry, MaterialDisableMatFX, NULL);
    }

    return atomic;
}

static RpAtomic* PreAllocMatFX_cb(RpAtomic* atomic, void*)
{
    AtomicDisableMatFX(atomic);
    return atomic;
}

void xFXPreAllocMatFX(RpClump* clump)
{
    RpClumpForAllAtomics(clump, PreAllocMatFX_cb, NULL);
}

RpMaterial* MaterialSetShininess(RpMaterial* material, void*)
{
    RpMatFXMaterialFlags flags = RpMatFXMaterialGetEffects(material);

    if (flags == rpMATFXEFFECTENVMAP || flags == rpMATFXEFFECTBUMPENVMAP)
    {
        RpMatFXMaterialSetEnvMapCoefficient(material, EnvMapShininess);
    }

    return material;
}

static RpAtomic* AtomicSetShininess(RpAtomic* atomic, void* data)
{
    RpGeometry* geometry = RpAtomicGetGeometry(atomic);

    if (geometry)
    {
        RpGeometryForAllMaterials(geometry, MaterialSetShininess, data);
    }

    return atomic;
}

static RpAtomic* AtomicSetEnvMap(RpAtomic* atomic, void* data)
{
    RpMatFXAtomicEnableEffects(atomic);
    if (atomic->geometry != 0)
    {
        RpGeometryForAllMaterials(atomic->geometry, MaterialSetEnvMap2, data);
    }
    return atomic;
}

RpAtomic* xFXAtomicEnvMapSetup(RpAtomic* atomic, U32 aid, F32 shininess)
{
    void* asset = xSTFindAsset(aid, NULL);
    if (asset)
    {
        AtomicSetEnvMap(atomic, asset);
        F32 oldShininess = EnvMapShininess;
        EnvMapShininess = shininess;
        AtomicSetShininess(atomic, NULL);
        EnvMapShininess = oldShininess;
        RpSkin* skin = RpSkinGeometryGetSkin(atomic->geometry);
        if (skin)
        {
            RpSkinAtomicSetType(atomic, rpSKINTYPEMATFX);
        }
        return atomic;
    }
    return NULL;
}

void xFXAuraAdd(void*, xVec3*, iColor_tag*, F32)
{
}

void xFXAuraInit()
{
}

void xFXAuraUpdate(F32)
{
}

U32 xFXanimUVCreate()
{
    if (xFXanimUVPipeline == NULL)
    {
        xFXanimUVPipeline = iFXanimUVCreatePipe();
    }
    return (-(U32)xFXanimUVPipeline | (U32)xFXanimUVPipeline) >> 0x1f;
}

namespace
{
    struct vert_data
    {
        xVec3 loc;
        xVec3 norm;
        RwRGBA color;
        RwTexCoords uv;
        F32 depth;
    };

    struct tri_data
    {
        vert_data vert[3];
    };

    // TODO: Check all lerp return types. Only the first is in dwarf
    void lerp(vert_data& v, F32 frac, const vert_data& v0, const vert_data& v1);
    void lerp(RwTexCoords& unk0, F32 unk1, const RwTexCoords& unk2, const RwTexCoords& unk3);
    F32 lerp(F32& unk0, F32 unk1, F32 unk2, F32 unk3);
    void lerp(RwRGBA& unk0, F32 unk1, RwRGBA unk2, RwRGBA unk3);
    void lerp(U8& unk0, F32 unk1, U8 unk2, U8 unk3);
    void lerp(xVec3& unk0, F32 unk1, const xVec3& unk2, const xVec3& unk3);

    void lerp(vert_data& v, F32 frac, const vert_data& v0, const vert_data& v1)
    // Yes, These are the actual parameter names for this function from the dwarf
    {
        lerp(v.loc, frac, v0.loc, v1.loc);
        lerp(v.norm, frac, v0.norm, v1.norm);
        lerp(v.color, frac, v0.color, v1.color);
        lerp(v.uv, frac, v0.uv, v1.uv);
    }

    void lerp(RwTexCoords& unk0, F32 unk1, const RwTexCoords& unk2, const RwTexCoords& unk3)
    {
        lerp(unk0.u, unk1, unk2.u, unk3.u);
        lerp(unk0.v, unk1, unk2.v, unk3.v);
    }

    F32 lerp(F32& unk0, F32 unk1, F32 unk2, F32 unk3)
    {
        return (unk0 = unk2 + (unk3 - unk2) * unk1);
    }

    void lerp(RwRGBA& unk0, F32 unk1, RwRGBA unk2, RwRGBA unk3)
    {
        lerp(unk0.red, unk1, unk2.red, unk3.red);
        lerp(unk0.green, unk1, unk2.green, unk3.green);
        lerp(unk0.blue, unk1, unk2.blue, unk3.blue);
        lerp(unk0.alpha, unk1, unk2.alpha, unk3.alpha);
    }

    void lerp(U8& unk0, F32 unk1, U8 unk2, U8 unk3)
    {
    }

    void lerp(xVec3& unk0, F32 unk1, const xVec3& unk2, const xVec3& unk3)
    {
        lerp(unk0.x, unk1, unk2.x, unk3.x);
        lerp(unk0.y, unk1, unk2.y, unk3.y);
        lerp(unk0.z, unk1, unk2.z, unk3.z);
    }

} // namespace

namespace
{
#define ALPHA_COUNT 300

    U8 alpha_count0[ALPHA_COUNT];
    U8 alpha_count1[ALPHA_COUNT];
} // namespace

// clip_triangle jumptable
static U32 _1933[] = { 0x80028610, 0x80028640, 0x80028640, 0x80028640, 0x80028640, 0x80028640,
                       0x80028640, 0x80028620, 0x80028640, 0x80028640, 0x80028640, 0x80028640,
                       0x80028640, 0x80028640, 0x80028630, 0x80028640, 0x80028640, 0x80028640,
                       0x80028640, 0x80028640, 0x80028640, 0x80028630, 0x80028640, 0x80028640,
                       0x80028640, 0x80028640, 0x80028640, 0x80028640, 0x80028620, 0x80028640,
                       0x80028640, 0x80028640, 0x80028640, 0x80028640, 0x80028640, 0x80028610 };

static const U8 segments_1637[43] = { 0, 1, 3, 0, 1, 2, 4, 0, 3, 4, 3, 0, 0, 0, 0,
                                      0, 1, 2, 4, 0, 2, 1, 2, 0, 4, 2, 1, 0, 0, 0,
                                      0, 0, 3, 4, 3, 0, 4, 2, 1, 0, 3, 1, 0 };

struct _tagFirework
{
    S32 state;
    F32 timer;
    xVec3 vel;
    xVec3 pos;
    F32 fuel;
};

#define FIREWORK_COUNT 10

static _tagFirework sFirework[FIREWORK_COUNT];
static zParEmitter* sFireworkTrailEmit = NULL;
static zParEmitter* sFirework1Emit = NULL;
static zParEmitter* sFirework2Emit = NULL;
static U32 sFireworkSoundID = 0;
static U32 sFireworkLaunchSoundID = 0;

static RwIm3DVertex sStripVert_2188[4];

static RwIm3DVertex blah_2485[4];

namespace
{
#define RIBBON_COUNT 64

    xFXRibbon* active_ribbons[RIBBON_COUNT];
    U32 active_ribbons_size = 0;
    bool ribbons_dirty = false;
} // namespace

struct _xFXAuraAngle
{
    F32 angle;
    F32 cc;
    F32 ss;
};

struct _xFXAura
{
    xVec3 pos;
    iColor_tag color;
    F32 size;
    void* parent;
    U32 frame;
    F32 dangle[2];
};

#define AURA_COUNT 32

static F32 sAuraPulse[2];
static F32 sAuraPulseAng[2];
static _xFXAuraAngle sAuraAngle[2];
static RwTexture* gAuraTex = NULL;
static _xFXAura sAura[AURA_COUNT];

__declspec(section ".rodata") static const char _stringBase0_7[] = "bubble buddy\0"
                                                                   "bubble missile\0"
                                                                   "bubble helmet\0"
                                                                   "bubble bowling ball\0"
                                                                   "bubble shoeL\0"
                                                                   "bubble shoeR\0"
                                                                   "spec3\0"
                                                                   "default_env_map.RW3\0"
                                                                   "gloss_edge\0"
                                                                   "update frame\n\0"
                                                                   "fx_streak1\0"
                                                                   "BLENDZERO\0"
                                                                   "BLENDONE\0"
                                                                   "BLENDSRCCOLOR\0"
                                                                   "BLENDINVSRCCOLOR\0"
                                                                   "BLENDSRCALPHA\0"
                                                                   "BLENDINVSRCALPHA\0"
                                                                   "BLENDDESTALPHA\0"
                                                                   "BLENDINVDESTALPHA\0"
                                                                   "BLENDDESTCOLOR\0"
                                                                   "BLENDINVDESTCOLOR\0"
                                                                   "BLENDSRCALPHASAT\0"
                                                                   "FX|Ribbon";

void xFXStartup()
{
}

void xFXShutdown()
{
}

void xFXSceneInit()
{
}

void xFXSceneSetup()
{
}

void xFXSceneReset()
{
}

void xFXScenePrepare()
{
}

void xFXSceneFinish()
{
}

void xFXanimUV2PSetTexture(RwTexture* tex)
{
    xFXanimUV2PTexture = tex;
}

void xFXanimUVSetAngle(F32 angle)
{
    F32 sin = isin(angle);
    F32 cos = icos(angle);
    xFXanimUVRotMat0[0] = cos;
    xFXanimUVRotMat0[1] = -sin;
    xFXanimUVRotMat1[0] = sin;
    xFXanimUVRotMat1[1] = cos;
}

void xFXanimUV2PSetScale(const xVec3* scale)
{
    xFXanimUV2PScale[0] = scale->x;
    xFXanimUV2PScale[1] = scale->y;
}

void xFXanimUVSetScale(const xVec3* scale)
{
    xFXanimUVScale[0] = scale->x;
    xFXanimUVScale[1] = scale->y;
}

void xFXanimUVSetTranslation(const xVec3* translation)
{
    xFXanimUVTrans[0] = translation->x;
    xFXanimUVTrans[1] = translation->y;
}

void xFXStreakUpdate(U32 id, const xVec3* a, const xVec3* b)
{
    xFXStreak* s;
}

void xFXStreakStart(F32, F32, F32, U32, const iColor_tag*, const iColor_tag*, S32)
{
}

void xFXStreakStop(U32)
{
}

void xFXStreakUpdate(F32)
{
}

void xParInterp::set(F32 value1, F32 value2, F32 freq, U32 interp)
{
    this->val[0] = value1;
    this->val[1] = value2;
    this->freq = freq;
    if (freq != 0.0f)
    {
        this->oofreq = 1.0f / freq;
    }
    else
    {
        this->oofreq = 0.0f;
    }
    this->interp = interp;
}

void xFXShineInit()
{
    for (S32 i = 0; i < 2; i++)
    {
        memset(&sShineList[0], 0, sizeof(xFXShine));
        sShineList[i] = sShineList[i];
    }
}

U32 xFXShineStart(const xVec3*, F32, F32, F32, F32, U32, const iColor_tag*, const iColor_tag*, F32,
                  S32)
{
    return 2;
}

namespace
{
    S32 compare_ribbons(const void* e1, const void* e2)
    {
        return 0;
    }

    void sort_ribbons()
    {
    }

    void activate_ribbon(xFXRibbon*)
    {
    }

    void deactivate_ribbon(xFXRibbon*)
    {
    }
} // namespace

void xFXShineUpdate(F32)
{
}

void xFXShineRender()
{
}

static void RenderRotatedBillboard(xVec3* pos, _xFXAuraAngle* rot, U32 count, F32 width, F32 height,
                                   iColor_tag tint, U32 flipUV)
{
}

void xFXAuraRender()
{
    // TODO: Fix function
    // Honestly the closest I can get this function.
    // fogstate is in the dwarf but currently isn't used in the function.

    S32 fogstate;
    _xFXAura* ap;
    _xFXAuraAngle* auraAng;

    if (gAuraTex != NULL)
    {
        RwRenderStateSet(rwRENDERSTATETEXTURERASTER, (void*)gAuraTex->raster);
        RwRenderStateSet(rwRENDERSTATEVERTEXALPHAENABLE, (void*)0x1);
        RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)0x5);
        RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)0x2);
        RwRenderStateSet(rwRENDERSTATEZTESTENABLE, (void*)0x1);
        RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void*)0x0);
        RwRenderStateGet(rwRENDERSTATEFOGTYPE, (void*)0x1);
        RwRenderStateSet(rwRENDERSTATEFOGENABLE, (void*)0x0);

        ap = sAura;

        for (S32 i = 0; i < 32; i++)
        {
            if (ap->frame == gFrameCount)
            {
                auraAng = &sAuraAngle[0];
                RenderRotatedBillboard(&ap->pos, auraAng, 1, 0, 0, ap->color, 0);
                auraAng = &sAuraAngle[1];
                RenderRotatedBillboard(&ap->pos, auraAng, 1, 0, 0, ap->color, 1);
            }
            ap = (_xFXAura*)ap->dangle;
        }

        RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)0x5);
        RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)0x6);
        RwRenderStateSet(rwRENDERSTATEZTESTENABLE, (void*)0x1);
        RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void*)0x1);
        RwRenderStateSet(rwRENDERSTATEFOGENABLE, (void*)0x10);

        ap = sAura;

        for (S32 i = 0; i < 32; i++)
        {
            if (ap->frame == gFrameCount && ap->parent != 0)
            {
                zEntPickup_RenderOne((xEnt*)ap->parent);
            }
            ap = (_xFXAura*)ap->dangle;
        }
    }
}

void xFXFireworksInit(const char* trailEmit, const char* emit1, const char* emit2,
                      const char* mainSound, const char* launchSound)
{
    sFireworkTrailEmit = zParEmitterFind(trailEmit);
    sFirework1Emit = zParEmitterFind(emit1);
    sFirework2Emit = zParEmitterFind(emit2);
    sFireworkSoundID = xStrHash(mainSound);
    sFireworkLaunchSoundID = xStrHash(launchSound);
    memset(sFirework, 0, sizeof(sFirework));
    for (U32 i = 0; i < FIREWORK_COUNT; ++i)
    {
        sFirework[i].state = 0;
    }
}

void xFXFireworksLaunch(F32 time, const xVec3* pos, F32 fuel)
{
    U32 counter = FIREWORK_COUNT;
    _tagFirework* candidate = sFirework;
    while (counter)
    {
        if (candidate->state == 0)
        {
            candidate->state = 1;
            candidate->timer = time;
            candidate->pos = *pos;
            candidate->fuel = fuel;
            return;
        }
        --counter;
        ++candidate;
    }
}

void xFXFireworksUpdate(F32 dt)
{
    for (S32 i = 0; i < FIREWORK_COUNT; ++i)
    {
        if (sFirework[i].state == 0)
        {
            continue;
        }
        if (sFirework[i].state == 1)
        {
            sFirework[i].timer -= dt;
            if (sFirework[i].timer <= 0.0f)
            {
                sFirework[i].vel.x = 13.0f * xurand() + 6.5f;
                sFirework[i].vel.y = 0.0f;
                sFirework[i].vel.z = 13.0f * xurand() + 6.5f;
                sFirework[i].state = 2;

                if (sFireworkLaunchSoundID != 0)
                {
                    xSndPlay3D(sFireworkLaunchSoundID,
                               0.308f, // Volume
                               0.0f, // Pitch
                               0x80, // Priority
                               0, // Flags
                               &sFirework[i].pos,
                               20.0f, // Radius
                               5.0f, SND_CAT_GAME,
                               0.0f); // Delay
                }
            }
        }
        else
        {
            sFirework[i].fuel -= dt;
            if (sFirework[i].fuel > 0.0f)
            {
                sFirework[i].vel.y += 15.0f * dt;
            }
            xParEmitterCustomSettings settings;
            settings.custom_flags = 0x100;
            sFirework[i].pos.x += sFirework[i].vel.x * dt;
            sFirework[i].pos.y += sFirework[i].vel.y * dt;
            sFirework[i].pos.z += sFirework[i].vel.z * dt;
            settings.pos = sFirework[i].pos;
            xParEmitterEmitCustom(sFireworkTrailEmit, dt, &settings);

            if (sFirework[i].fuel <= 0.0f)
            {
                sFirework[i].state = 0;
                sFirework[i].timer = 0.0f;

                zParEmitter* emit = sFirework1Emit;
                if (xurand() < 0.75f)
                {
                    emit = sFirework2Emit;
                }

                xParEmitterCustomSettings settings2;
                settings2.custom_flags = 0xD00;
                settings2.pos = sFirework[i].pos;

                if (emit != NULL)
                {
                    settings2.color_birth[0].set(127.0f * xurand() + 128.0f, 75.0f, 0.0f, 0);
                    settings2.color_birth[1].set(127.0f * xurand() + 128.0f, 75.0f, 0.0f, 0);
                    settings2.color_birth[2].set(127.0f * xurand() + 128.0f, 75.0f, 0.0f, 0);
                    settings2.color_birth[3].set(255.0f, 0.0f, 1.0f, 0);
                    memcpy(settings2.color_death, &settings2.color_birth,
                           sizeof(settings2.color_birth));
                    settings2.color_death[3].set(0.0f, 0.0f, 1.0f, 0);
                    xParEmitterEmitCustom(emit, dt, &settings2);
                }

                F32 a = 0.4f * xurand() + 0.1f;
                F32 b = 0.5f * xurand() + 0.5f;
                F32 g = 0.5f * xurand() + 0.5f;
                F32 r = 0.5f * xurand() + 0.5f;
                F32 size = 5.0f * xurand() + 2.0f;
                F32 intensity = 0.3f * xurand() + 0.1f;
                F32 life = 0.5f * xurand() + 0.5f;
                xScrFXGlareAdd(&sFirework[i].pos, life, intensity, size, r, g, b, a, NULL);

                xVec3 diff;
                xVec3Sub(&diff, xEntGetPos(&globals.player.ent), &sFirework[i].pos);
                zRumbleStartDistance(globals.currentActivePad, diff.x * diff.x + diff.z * diff.z,
                                     48.0f, eRumble_Medium, 0.35f);
                sFirework[i].pos.y = xEntGetPos(&globals.player.ent)->y;
                if (sFireworkSoundID != 0)
                {
                    xSndPlay3D(sFireworkSoundID,
                               0.77f, // Volume
                               0.0f, // Pitch
                               0x80, // Priority
                               0, // Flags
                               &sFirework[i].pos,
                               20.0f, // Radius
                               5.0f, SND_CAT_GAME,
                               0.0f); // Delay
                }
            }
        }
    }
}

RpMaterial* MaterialSetBumpMap(RpMaterial* material, void* data)
{
    RwFrame* frame;
    if (data == NULL)
    {
        return NULL;
    }
    else if (material->texture)
    {
        if (data)
        {
            frame = (RwFrame*)MainLight->object.object.parent;
            RpMatFXMaterialSetEffects(material, rpMATFXEFFECTBUMPMAP);
            RpMatFXMaterialSetupBumpMap(material, (RwTexture*)data, frame, 1.0f);
        }
        else
        {
            RpMatFXMaterialSetEffects(material, rpMATFXEFFECTNULL);
        }
    }
    return material;
}

RpMaterial* MaterialSetEnvMap(RpMaterial* material, void* data)
{
    // Matching but with mr. instead of cmplwi
    if (data == NULL)
    {
        return NULL;
    }
    if (material->texture)
    {
        if (data)
        {
            RwFrame* frame = NULL;
            if ((gFXSurfaceFlags & 0x10) != 0)
            {
                if (globals.camera.lo_cam)
                {
                    frame = (RwFrame*)globals.camera.lo_cam->object.object.parent;
                }
                else
                {
                    frame = (RwFrame*)MainLight->object.object.parent;
                }
            }
            else
            {
                frame = (RwFrame*)MainLight->object.object.parent;
            }
            RpMatFXMaterialSetEffects(material, rpMATFXEFFECTENVMAP);
            RpMatFXMaterialSetupEnvMap(material, (RwTexture*)data, frame, FALSE, 1.0f);
        }
        else
        {
            RpMatFXMaterialSetEffects(material, rpMATFXEFFECTNULL);
        }
    }
    return material;
}

RpMaterial* MaterialSetEnvMap2(RpMaterial* material, void* data)
{
    if (material->texture != NULL)
    {
        RwFrame* frame;
        if (RwEngineInstance->stringFuncs.vecStrcmp(((RwTexture*)data)->name, "spec3") == 0)
        {
            frame = (RwFrame*)globals.camera.lo_cam->object.object.parent;
        }
        else
        {
            frame = (RwFrame*)MainLight->object.object.parent;
        }
        RpMatFXMaterialSetEffects(material, rpMATFXEFFECTENVMAP);
        RpMatFXMaterialSetupEnvMap(material, (RwTexture*)data, frame, FALSE, EnvMapShininess);
    }
    return material;
}

RpMaterial* MaterialSetBumpEnvMap(RpMaterial* material, RwTexture* envMap, F32 envCooef,
                                  RwTexture* bumpMap, F32 bumpCooef)
{
    if (envMap == NULL || bumpMap == NULL)
    {
        return NULL;
    }
    else
    {
        RwFrame* frame;
        RpMatFXMaterialSetEffects(material, rpMATFXEFFECTBUMPENVMAP);
        if ((gFXSurfaceFlags & 0x10) != 0)
        {
            frame = (RwFrame*)globals.camera.lo_cam->object.object.parent;
        }
        else
        {
            frame = (RwFrame*)MainLight->object.object.parent;
        }
        RpMatFXMaterialSetupEnvMap(material, envMap, frame, TRUE, envCooef);
        RpMatFXMaterialSetupBumpMap(material, bumpMap, (RwFrame*)MainLight->object.object.parent,
                                    bumpCooef);
    }
    return material;
}

RpAtomic* xFXanimUVAtomicSetup(RpAtomic* atomic)
{
    if (atomic == 0)
    {
        return atomic;
    }
    if (xFXanimUVPipeline == 0)
    {
        return atomic;
    }
    atomic->pipeline = xFXanimUVPipeline;
    return atomic;
}

void xFXRenderProximityFade(const xModelInstance&, F32, F32)
{
}

void xFXanimUV2PSetAngle(F32 angle)
{
    xFXanimUV2PRotMat0[0] = isin(angle);
    angle = xFXanimUV2PRotMat0[0];
    xFXanimUV2PRotMat0[1] = xFXanimUV2PRotMat0[0];
    xFXanimUV2PRotMat1[0] = icos(angle);
    xFXanimUV2PRotMat1[1] = xFXanimUV2PRotMat1[0];
}

void xFXanimUV2PSetTranslation(const xVec3* trans)
{
    xFXanimUV2PTrans[0] = trans->x;
    xFXanimUV2PTrans[1] = trans->y;
}

RpAtomic* xFXShinyRender(RpAtomic* atomic)
{
    RwCullMode cmode;

    if (sTweaked == 0)
    {
        sEnvMap = xStrHash("default_env_map.RW3");
        sFresnelMap = xStrHash("gloss_edge");
        sTweaked = 1;
    }

    RwRenderStateGet(rwRENDERSTATECULLMODE, NULL);
    RwRenderStateSet(rwRENDERSTATECULLMODE, (void*)rwCULLMODECULLBACK);
    iDrawSetFBMSK(-1);
    iModelSetMaterialAlpha(atomic, rwCULLMODEFORCEENUMSIZEINT);
    AtomicDisableMatFX(atomic);
    (*gAtomicRenderCallBack)(atomic);
    iDrawSetFBMSK(0);
    iModelSetMaterialAlpha(atomic, 0);
    gFXSurfaceFlags = 0x10;
    xFXAtomicEnvMapSetup(atomic, sFresnelMap, 1.0f);
    gFXSurfaceFlags = 0;
    (*gAtomicRenderCallBack)(atomic);
    iModelSetMaterialAlpha(atomic, 0xff);
    AtomicDisableMatFX(atomic);
    gFXSurfaceFlags = 0x10;
    xFXAtomicEnvMapSetup(atomic, sEnvMap, 1.0f);
    gFXSurfaceFlags = 0;
    (*gAtomicRenderCallBack)(atomic);
    RwRenderStateSet(rwRENDERSTATECULLMODE, (void*)0x8); // TODO: Fix Magic Number

    return atomic;
}

RpAtomic* xFXBubbleRender(RpAtomic* atomic)
{
    RwCullMode cmode;
    xFXBubbleParams* bp;

    bp = BFX + bfx_curr * 1; // Why multiply by 1? Probably needs rewritten differently

    RwRenderStateGet(rwRENDERSTATECULLMODE, NULL);
    RwRenderStateSet(rwRENDERSTATECULLMODE, (void*)rwCULLMODECULLBACK);
    iDrawSetFBMSK(bp->pass1_fbmsk);
    iModelSetMaterialAlpha(atomic, bp->pass1_alpha);

    if (((char)bp->pass1))
    {
        AtomicDisableMatFX(atomic);
        (*gAtomicRenderCallBack)(atomic);
    }

    iDrawSetFBMSK(0);
    iModelSetMaterialAlpha(atomic, bp->pass2_alpha);

    if (((char)bp->pass2) != 0)
    {
        gFXSurfaceFlags = 0x10;
        xFXAtomicEnvMapSetup(atomic, bp->fresnel_map, bp->fresnel_map_coeff);
        gFXSurfaceFlags = 0;
        (*gAtomicRenderCallBack)(atomic);
    }

    iModelSetMaterialAlpha(atomic, bp->pass3_alpha);

    if (((char)bp->pass3) != 0)
    {
        AtomicDisableMatFX(atomic);
        gFXSurfaceFlags = 0x10;
        xFXAtomicEnvMapSetup(atomic, bp->env_map, bp->env_map_coeff);
        gFXSurfaceFlags = 0;
        (*gAtomicRenderCallBack)(atomic);
    }

    RwRenderStateSet(rwRENDERSTATECULLMODE, (void*)0x8);

    return atomic;
}

void xFXRibbonRender()
{
    xFXRibbon* prev;
    U32 i;
    xFXRibbon* ribbon;

    RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void*)0x0);
    RwRenderStateSet(rwRENDERSTATEZTESTENABLE, (void*)0x1);
    RwRenderStateSet(rwRENDERSTATESHADEMODE, (void*)0x2);
    RwRenderStateSet(rwRENDERSTATECULLMODE, (void*)0x1);

    ribbon = 0x0;
}

void xFXStreakInit()
{
    for (S32 i = 0; i < 10; i++)
    {
        memset(&sStreakList[i], 0, sizeof(xFXStreak));
    }
}

void xFXStreakRender()
{
}

void xFXRibbonSceneEnter()
{
    xDebugRemoveTweak("FX|Ribbon");

    active_ribbons_size = 0;
}

void xFXRibbonUpdate(F32)
{
}

void xFXRibbon::init(const char*, const char*)
{
}

void tier_queue<xFXRibbon::joint_data>::clear()
{
}

void xFXRibbon::set_default_config()
{
    cfg.life_time = 1.0f;
    cfg.blend_src = 5;
    cfg.blend_dst = 6;
    cfg.pivot = 0.5f;
    refresh_config();
}

void xFXRibbon::refresh_config()
{
    ilife = 1.0f / cfg.life_time;
    mlife = 1000.0f * cfg.life_time;
    if (activated)
    {
        ribbons_dirty = true;
    }
}

void xFXRibbon::set_raster(RwRaster* rast)
{
    this->raster = rast;
    if (activated <= 0)
    {
        return;
    }
    ribbons_dirty = true;
}

void xFXRibbon::set_texture(RwTexture*)
{
}

void xFXRibbon::set_texture(U32 id)
{
}

void xFXRibbon::set_texture(const char* name)
{
    xStrHash(name);
    set_texture((U32)name);
}

void xFXRibbon::set_curve(const curve_node* curve, size_t size)
{
    curve_size = size;
    (this->curve) = ((curve_node*)curve);
    xFXRibbon::debug_update_curve();
    xFXRibbon::update_curve_tweaks();
}

void xFXRibbon::insert(const xVec3&, const xVec3&, F32, F32, U32)
{
}

void xFXRibbon::insert(const xVec3&, F32, F32, F32, U32)
{
}

void xFXRibbon::activate()
{
    if (activated == 0)
    {
        activate_ribbon(this);
        activated = 1;
    }
}

void xFXRibbon::deactivate()
{
    if (activated != 0)
    {
        deactivate_ribbon(this);
        activated = 0;
    }
}

void xFXRibbon::start_render()
{
    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)cfg.blend_src);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)cfg.blend_dst);
    RwRenderStateSet(rwRENDERSTATETEXTURERASTER, (void*)raster);
}

void xFXRibbon::update_curve_tweaks()
{
}

void xFXRibbon::debug_init(const char*, const char*)
{
}

void xFXRibbon::debug_update_curve()
{
}

void xFXRibbon::debug_update(F32)
{
}
