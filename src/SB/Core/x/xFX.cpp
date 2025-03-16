#include "xFX.h"

#include "xstransvc.h"

#include "iMath.h"
#include "zParEmitter.h"
#include "zSurface.h"
#include "zFX.h"
#include "zGlobals.h"

#include <string.h>
#include <rpmatfx.h>

/* boot.HIP texture IDs */
#define ID_gloss_edge 0xB8C2351E
#define ID_rainbowfilm_smooth32 0x741B0566

extern const char _stringBase0_7[];

extern F32 _957_0;
extern F32 _958;
extern F32 _995;
extern F32 _1132;
extern F32 _1171;

RpAtomicCallBackRender gAtomicRenderCallBack = NULL;
F32 EnvMapShininess = 1.0f;
RpLight* MainLight = NULL;

static U32 num_fx_atomics = 0;

static U32 xfx_initted = 0;

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
        if (ring->time <= _957_0)
        {
            // non-matching: _958 is only loaded once

            memcpy(ring, params, sizeof(xFXRing));

            ring->time = _995;
            ring->pos = *pos;
            ring->ring_radius_delta *= _958 / ring->lifetime;
            ring->ring_height_delta *= _958 / ring->lifetime;
            ring->ring_tilt_delta *= _958 / ring->lifetime;

            return ring;
        }
    }

    return NULL;
}

static void xFXRingUpdate(F32 dt)
{
    xFXRing* ring = &ringlist[0];

    if ((F32)iabs(dt) < _995)
    {
        return;
    }

    for (S32 i = 0; i < RING_COUNT; i++, ring++)
    {
        if (ring->time <= _957_0)
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

        if (t > _958)
        {
            ring->time = _957_0;

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
        if (ring->time > _957_0)
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
                        RpMatFXMaterialSetEnvMapCoefficient(mp, _1132 * fxp->shininess);
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
            // non-matching: strings are getting cached for some reason

            U32 bubble;

            bubble = (ent->id == xStrHash(_stringBase0_7));
            bubble |= (ent->id == xStrHash(_stringBase0_7 + 13));
            bubble |= (ent->id == xStrHash(_stringBase0_7 + 28));
            bubble |= (ent->id == xStrHash(_stringBase0_7 + 42));
            bubble |= (ent->id == xStrHash(_stringBase0_7 + 62));
            bubble |= (ent->id == xStrHash(_stringBase0_7 + 75));

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

    RwFrameRotate(frame, &v1, _1171, rwCOMBINEREPLACE);
    RwFrameRotate(frame, &v2, _1171, rwCOMBINEPOSTCONCAT);
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

struct xFXBubbleParams
{
    U32 pass1 : 1;
    U32 pass2 : 1;
    U32 pass3 : 1;
    U32 padding : 5;
    U8 pass1_alpha;
    U8 pass2_alpha;
    U8 pass3_alpha;
    U32 pass1_fbmsk;
    U32 fresnel_map;
    F32 fresnel_map_coeff;
    U32 env_map;
    F32 env_map_coeff;
};

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

void xFXSceneReset()
{
}

void xFXScenePrepare()
{
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
