#include "xFX.h"

#include "xstransvc.h"

#include "../gc/iMath.h"
#include "../../Game/zParEmitter.h"
#include "../../Game/zSurface.h"
#include "../../Game/zFX.h"
#include "../../Game/zGlobals.h"

#include <string.h>
#include <rpmatfx.h>

/* boot.HIP texture IDs */
#define ID_gloss_edge 0xB8C2351E
#define ID_rainbowfilm_smooth32 0x741B0566

extern const char _stringBase0_7[];

extern float32 _957_0;
extern float32 _958;
extern float32 _995;
extern float32 _1132;
extern float32 _1171;

RpAtomicCallBackRender gAtomicRenderCallBack = NULL;
float32 EnvMapShininess = 1.0f;
RpLight* MainLight = NULL;

static uint32 num_fx_atomics = 0;

static uint32 xfx_initted = 0;

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

static uint32 Im3DBufferPos = 0;
static RwTexture* g_txtr_drawRing = NULL;

static void DrawRingSetup()
{
    g_txtr_drawRing = (RwTexture*)xSTFindAsset(ID_rainbowfilm_smooth32, NULL);
}

static void DrawRingSceneExit()
{
    g_txtr_drawRing = NULL;
}

#if 1
static void DrawRing(xFXRing* m);
// func_80026780
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "DrawRing__FP7xFXRing")
#else
static void DrawRing(xFXRing* m)
{
    // todo: uses int-to-float conversion
}
#endif

#ifndef NON_MATCHING
// func_80026D4C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXRingCreate__FPC5xVec3PC7xFXRing")
#else
xFXRing* xFXRingCreate(const xVec3* pos, const xFXRing* params)
{
    xFXRing* ring = &ringlist[0];

    if (!pos || !params)
    {
        return NULL;
    }

    for (int32 i = 0; i < RING_COUNT; i++, ring++)
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
#endif

#ifndef NON_MATCHING
static void xFXRingUpdate(float32 dt);
// func_80026E34
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXRingUpdate__Ff")
#else
static void xFXRingUpdate(float32 dt)
{
    xFXRing* ring = &ringlist[0];

    if ((float32)iabs(dt) < _995)
    {
        return;
    }

    for (int32 i = 0; i < RING_COUNT; i++, ring++)
    {
        if (ring->time <= _957_0)
        {
            continue;
        }

        float32 lifetime = ring->lifetime;

        if (lifetime < dt)
        {
            lifetime = dt;
        }

        ring->time += dt;

        float32 t = ring->time / lifetime;

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
#endif

void xFXRingRender()
{
    int32 i;
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
static RpMaterial* MaterialSetBumpEnvMap(RpMaterial* material, RwTexture* env, float32 shininess,
                                         RwTexture* bump, float32 bumpiness);

#ifndef NON_MATCHING
// func_80026FA8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFX_SceneEnter__FP7RpWorld")
#else
void xFX_SceneEnter(RpWorld* world)
{
    int32 i;
    int32 num = RpWorldGetNumMaterials(world);

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

            uint32 bubble;

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
#endif

void xFX_SceneExit(RpWorld*)
{
}

void xFXUpdate(float32 dt)
{
    xFXRingUpdate(dt);
    xFXRibbonUpdate(dt);
    xFXAuraUpdate(dt);
}

static const RwV3d _1168 = { 1, 0, 0 };
static const RwV3d _1169 = { 0, 1, 0 };

#ifndef NON_MATCHING
// func_80027328
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "LightResetFrame__FP7RpLight")
#else
static void LightResetFrame(RpLight* light)
{
    // non-matching: lwzu instruction

    RwV3d v1 = { 1, 0, 0 };
    RwV3d v2 = { 0, 1, 0 };

    RwFrame* frame = RpLightGetFrame(light);

    RwFrameRotate(frame, &v1, _1171, rwCOMBINEREPLACE);
    RwFrameRotate(frame, &v2, _1171, rwCOMBINEPOSTCONCAT);
}
#endif

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

// func_8002752C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "MaterialSetEnvMap__FP10RpMaterialPv")

// func_800275F8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "MaterialSetEnvMap2__FP10RpMaterialPv")

struct xFXBubbleParams
{
    uint32 pass1 : 1;
    uint32 pass2 : 1;
    uint32 pass3 : 1;
    uint32 padding : 5;
    uint8 pass1_alpha;
    uint8 pass2_alpha;
    uint8 pass3_alpha;
    uint32 pass1_fbmsk;
    uint32 fresnel_map;
    float32 fresnel_map_coeff;
    uint32 env_map;
    float32 env_map_coeff;
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

static uint32 bfx_curr = 0;
static xFXBubbleParams* BFX = &defaultBFX;

// func_800276AC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXBubbleRender__FP8RpAtomic")

static uint32 sFresnelMap = 0;
static uint32 sEnvMap = 0;
static int32 sTweaked = 0;

// func_800277EC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXShinyRender__FP8RpAtomic")

// func_8002792C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "AtomicSetEnvMap__FP8RpAtomicPv")

// func_80027984
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXAtomicEnvMapSetup__FP8RpAtomicUif")

// func_80027A30
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "MaterialSetBumpMap__FP10RpMaterialPv")

// func_80027AC0
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "MaterialSetBumpEnvMap__FP10RpMaterialP9RwTexturefP9RwTexturef")

static RxPipeline* xFXanimUVPipeline = NULL;
float32 xFXanimUVRotMat0[2] = { 1.0f, 0.0f };
float32 xFXanimUVRotMat1[2] = { 0.0f, 1.0f };
float32 xFXanimUVTrans[2] = { 0.0f, 0.0f };
float32 xFXanimUVScale[2] = { 1.0f, 1.0f };
float32 xFXanimUV2PRotMat0[2] = { 1.0f, 0.0f };
float32 xFXanimUV2PRotMat1[2] = { 0.0f, 1.0f };
float32 xFXanimUV2PTrans[2] = { 0.0f, 0.0f };
float32 xFXanimUV2PScale[2] = { 1.0f, 1.0f };
RwTexture* xFXanimUV2PTexture = NULL;

// func_80027B8C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXanimUVSetTranslation__FPC5xVec3")

// func_80027BA4
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXanimUVSetScale__FPC5xVec3")

// func_80027BBC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXanimUVSetAngle__Ff")

// func_80027C18
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXanimUV2PSetTranslation__FPC5xVec3")

// func_80027C30
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXanimUV2PSetScale__FPC5xVec3")

// func_80027C48
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXanimUV2PSetAngle__Ff")

// func_80027CA4
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXanimUV2PSetTexture__FP9RwTexture")

// func_80027CAC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXanimUVAtomicSetup__FP8RpAtomic")

// func_80027CC8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXanimUVCreate__Fv")

// func_80027D08
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xFX.s",                                                                            \
    "depth_sort__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FPUsPCQ217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_8tri_dataUl")

namespace
{
#define ALPHA_COUNT 300

    uint8 alpha_count0[ALPHA_COUNT];
    uint8 alpha_count1[ALPHA_COUNT];
} // namespace

// func_80027D84
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXRenderProximityFade__FRC14xModelInstanceff")

// func_800283D0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xFX.s",                                                                            \
    "__as__Q217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_8tri_dataFRCQ217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_8tri_data")

// func_800283F8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xFX.s",                                                                            \
    "push_triangle__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FRP18RxObjSpace3DVertexRCQ217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_8tri_data")

// func_80028460
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xFX.s",                                                                            \
    "set_vert__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FR18RxObjSpace3DVertexRCQ217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_9vert_data")

// clip_triangle jumptable
static uint32 _1933[] = { 0x80028610, 0x80028640, 0x80028640, 0x80028640, 0x80028640, 0x80028640,
                          0x80028640, 0x80028620, 0x80028640, 0x80028640, 0x80028640, 0x80028640,
                          0x80028640, 0x80028640, 0x80028630, 0x80028640, 0x80028640, 0x80028640,
                          0x80028640, 0x80028640, 0x80028640, 0x80028630, 0x80028640, 0x80028640,
                          0x80028640, 0x80028640, 0x80028640, 0x80028640, 0x80028620, 0x80028640,
                          0x80028640, 0x80028640, 0x80028640, 0x80028640, 0x80028640, 0x80028610 };

// func_80028508
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xFX.s",                                                                            \
    "clip_triangle__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FPQ217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_8tri_dataRCQ217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_8tri_dataf")

// func_8002875C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xFX.s",                                                                            \
    "lerp__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FRQ217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_9vert_datafRCQ217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_9vert_dataRCQ217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_9vert_data")

// func_800287F8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xFX.s",                                                                            \
    "lerp__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FR11RwTexCoordsfRC11RwTexCoordsRC11RwTexCoords")

// func_8002886C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "lerp__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FRffff")

// func_8002887C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "lerp__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FR6RwRGBAf6RwRGBA6RwRGBA")

// func_80028910
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "lerp__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FRUcfUcUc")

// func_8002897C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "lerp__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FR5xVec3fRC5xVec3RC5xVec3")

// func_80028A04
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xFX.s",                                                                            \
    "__as__Q217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_9vert_dataFRCQ217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_9vert_data")

// func_80028A58
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xFX.s",                                                                            \
    "init__Q217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_8tri_dataFPC5xVec3PC5xVec3PC11RwTexCoordsPCfPCUs")

// func_80028AFC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "__as__11RwTexCoordsFRC11RwTexCoords")

// func_80028B10
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xFX.s",                                                                            \
    "set_vert__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FR18RxObjSpace3DVertexRC5xVec3RC5xVec3RC11RwTexCoordsUc")

// func_80028B68
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xFX.s",                                                                            \
    "refresh_vert_buffer__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FRP18RxObjSpace3DVertexb")

static const uint8 segments_1637[43] = { 0, 1, 3, 0, 1, 2, 4, 0, 3, 4, 3, 0, 0, 0, 0,
                                         0, 1, 2, 4, 0, 2, 1, 2, 0, 4, 2, 1, 0, 0, 0,
                                         0, 0, 3, 4, 3, 0, 4, 2, 1, 0, 3, 1, 0 };

// func_80028BF0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xFX.s",                                                                            \
    "count_alpha_triangles__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FPC10RpTrianglePCfUl")

struct _tagFirework
{
    int32 state;
    float32 timer;
    xVec3 vel;
    xVec3 pos;
    float32 fuel;
};

#define FIREWORK_COUNT 10

static _tagFirework sFirework[FIREWORK_COUNT];
static zParEmitter* sFireworkTrailEmit = NULL;
static zParEmitter* sFirework1Emit = NULL;
static zParEmitter* sFirework2Emit = NULL;
static uint32 sFireworkSoundID = 0;
static uint32 sFireworkLaunchSoundID = 0;

// func_80028CC8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXFireworksInit__FPCcPCcPCcPCcPCc")

// func_80028D90
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXFireworksLaunch__FfPC5xVec3f")

// func_80028E04
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXFireworksUpdate__Ff")

static RwIm3DVertex sStripVert_2188[4];

// func_80029238
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXStreakInit__Fv")

// func_800292A4
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXStreakUpdate__Ff")

// func_800294F4
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXStreakRender__Fv")

// func_80029710
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXStreakStart__FfffUiPC10iColor_tagPC10iColor_tagi")

// func_80029950
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXStreakStop__FUi")

// func_80029994
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXStreakUpdate__FUiPC5xVec3PC5xVec3")

// func_80029A68
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXShineInit__Fv")

// func_80029AD0
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXShineUpdate__Ff")

static RwIm3DVertex blah_2485[4];

// func_80029E30
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXShineRender__Fv")

// func_8002A20C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "xFXShineStart__FPC5xVec3ffffUiPC10iColor_tagPC10iColor_tagfi")

namespace
{
#define RIBBON_COUNT 64

    xFXRibbon* active_ribbons[RIBBON_COUNT];
    uint32 active_ribbons_size = 0;
    bool ribbons_dirty = false;
} // namespace

// func_8002A214
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "compare_ribbons__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FPCvPCv")

// func_8002A26C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "sort_ribbons__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_Fv")

// func_8002A2C4
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "activate_ribbon__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FP9xFXRibbon")

// func_8002A2F8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "deactivate_ribbon__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FP9xFXRibbon")

// func_8002A378
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "init__9xFXRibbonFPCcPCc")

// func_8002A404
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "set_default_config__9xFXRibbonFv")

// func_8002A444
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "refresh_config__9xFXRibbonFv")

// func_8002A4A4
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "set_curve__9xFXRibbonFPCQ29xFXRibbon10curve_nodeUl")

// func_8002A4E0
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "insert__9xFXRibbonFRC5xVec3RC5xVec3ffUi")

// func_8002A5B4
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "insert__9xFXRibbonFRC5xVec3fffUi")

// func_8002A69C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "activate__9xFXRibbonFv")

// func_8002A6DC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "deactivate__9xFXRibbonFv")

// func_8002A71C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "update__9xFXRibbonFf")

// func_8002A830
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "start_render__9xFXRibbonFv")

// func_8002A830
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "render__9xFXRibbonFv")

// func_8002A96C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "set_raster__9xFXRibbonFP8RwRaster")

// func_8002A988
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "set_texture__9xFXRibbonFP9RwTexture")

// func_8002A9BC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "set_texture__9xFXRibbonFUi")

// func_8002AA0C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "set_texture__9xFXRibbonFPCc")

// func_8002AA48
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "get_normal__9xFXRibbonFR5xVec3RC5xVec3f")

// func_8002ABF8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xFX.s",                                                                            \
    "refresh_joint__9xFXRibbonFRQ29xFXRibbon10joint_dataRCQ236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iterator")

// func_8002ADB4
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "eval_joint__9xFXRibbonFRCQ29xFXRibbon10joint_dataR10iColor_tagRf")

// func_8002AF54
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xFX.s",                                                                            \
    "render_strip__9xFXRibbonFP18RxObjSpace3DVertexQ236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iteratorUl")

// func_8002B15C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xFX.s",                                                                            \
    "set_vert__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FR18RxObjSpace3DVertexRC5xVec3ff10iColor_tag")

// func_8002B1A0
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "render_compare__9xFXRibbonCFRC9xFXRibbon")

// func_8002B214
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXRibbonSceneEnter__Fv")

// func_8002B260
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXRibbonUpdate__Ff")

// func_8002B2C8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXRibbonRender__Fv")

struct _xFXAuraAngle
{
    float32 angle;
    float32 cc;
    float32 ss;
};

struct _xFXAura
{
    xVec3 pos;
    iColor_tag color;
    float32 size;
    void* parent;
    uint32 frame;
    float32 dangle[2];
};

#define AURA_COUNT 32

static float32 sAuraPulse[2];
static float32 sAuraPulseAng[2];
static _xFXAuraAngle sAuraAngle[2];
static RwTexture* gAuraTex = NULL;
static _xFXAura sAura[AURA_COUNT];

// func_8002B3A4
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXAuraInit__Fv")

// func_8002B3F4
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXAuraSetup__Fv")

// func_8002B424
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXAuraAdd__FPvP5xVec3P10iColor_tagf")

// func_8002B510
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXAuraUpdate__Ff")

// func_8002B730
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "RenderRotatedBillboard__FP5xVec3P13_xFXAuraAngleUiff10iColor_tagUi")

// func_8002BCD0
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXAuraRender__Fv")

// func_8002BE78
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXStartup__Fv")

// func_8002BE7C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXShutdown__Fv")

// func_8002BE80
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXSceneInit__Fv")

// func_8002BE84
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXSceneSetup__Fv")

// func_8002BEA8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXSceneReset__Fv")

// func_8002BEAC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXScenePrepare__Fv")

// func_8002BEB0
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXSceneFinish__Fv")

// func_8002BED8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "set__10xParInterpFfffUi")

// func_8002BF0C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "debug_init__9xFXRibbonFPCcPCc")

// func_8002BF10
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "update_curve_tweaks__9xFXRibbonFv")

// func_8002BF14
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "debug_update_curve__9xFXRibbonFv")

// func_8002BF18
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "need_update__9xFXRibbonCFv")

// func_8002BF70
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "debug_need_update__9xFXRibbonCFv")

// func_8002BF78
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "visible__9xFXRibbonCFv")

// func_8002BFA8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "debug_update__9xFXRibbonFf")

// func_8002BFAC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "get_age__9xFXRibbonCFRCQ29xFXRibbon10joint_data")

// func_8002BFE4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xFX.s",                                                                            \
    "init__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_FR20tier_queue_allocator")

// func_8002C03C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "block_size__20tier_queue_allocatorCFv")

// func_8002C044
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "front__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_Fv")

// func_8002C074
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "__ml__Q236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iteratorCFv")

// func_8002C0A0
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "get_at__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_CFUl")

// func_8002C108
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "mod_block_size__20tier_queue_allocatorCFUl")

// func_8002C118
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "get_block__20tier_queue_allocatorCFUl")

// func_8002C12C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "get_block__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_CFUl")

// func_8002C160
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "block_size_shift__20tier_queue_allocatorCFv")

// func_8002C168
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "begin__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_CFv")

// func_8002C18C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "create_iterator__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_CFUl")

// func_8002C1AC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "push_front__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_Fv")

// func_8002C230
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "alloc_block__20tier_queue_allocatorFv")

// func_8002C2B8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "alloc_block_data__20tier_queue_allocatorCFv")

// func_8002C2F0
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "wrap_index__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_CFUl")

// func_8002C2FC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "empty__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_CFv")

// func_8002C30C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "front_full__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_CFv")

// func_8002C360
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "full__20tier_queue_allocatorCFv")

// func_8002C384
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "pop_back__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_Fv")

// func_8002C41C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "free_block__20tier_queue_allocatorFUc")

// func_8002C470
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "clear__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_Fv")

// func_8002C520
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "wrap_block__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_CFUl")

// func_8002C528
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "__mi__Q236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iteratorCFi")

// func_8002C564
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "__ami__Q236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iteratorFi")

// func_8002C594
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "__apl__Q236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iteratorFi")

// func_8002C5D4
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "end__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_CFv")

// func_8002C618
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "size__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_CFv")

// func_8002C384
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "back__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_Fv")

// func_8002C664
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "__pl__Q236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iteratorCFi")

// func_8002C6A0
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "__vc__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_Fi")

// func_8002C6E0
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "__rf__Q236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iteratorCFv")

// func_8002C700
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xFX.s",                                                                            \
    "__eq__Q236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iteratorCFRCQ236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iterator")

// func_8002C718
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xFX.s",                                                                            \
    "__ne__Q236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iteratorCFRCQ236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iterator")

// func_8002C734
#pragma GLOBAL_ASM("asm/Core/x/xFX.s",                                                             \
                   "__mm__Q236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iteratorFv")

// func_8002C768
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xFX.s",                                                                            \
    "global_index__Q236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iteratorCFv")

// func_8002C770
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "init__20tier_queue_allocatorFUlUlUl")

// func_8002C8DC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "clear__20tier_queue_allocatorFv")

// func_8002CA84
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "log2_ceil__20tier_queue_allocatorCFUl")

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
