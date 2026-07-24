#include "zFX.h"

#include "rpworld.h"
#include "rwplcore.h"
#include "xDebug.h"
#include "xEnt.h"
#include "xFX.h"
#include "xMath.h"
#include "xMath3.h"
#include "xMathInlines.h"

#include "xSnd.h"
#include "zEnt.h"
#include "zGlobals.h"
#include "zGoo.h"
#include "zScene.h"
#include "zTextBox.h"

#include <stdio.h>
#include <types.h>
#include <string.h>
#include <stdlib.h>
#include <PowerPC_EABI_Support\MSL_C\MSL_Common\cmath>

const xFXRing sPatrickStunRing[3] = { { 0x741b0566,
                                        1.0f,
                                        { 0.0f, 0.0f, 0.0f },
                                        0.0f,
                                        0.5f,
                                        4.0f,
                                        PI / 2.0f,
                                        PI / -2.0f,
                                        0.5f,
                                        -0.25f,
                                        { 255, 255, 255, 255 },
                                        32,
                                        3,
                                        1,
                                        NULL },
                                      { 0x741b0566,
                                        1.5f,
                                        { 0.0f, 0.0f, 0.0f },
                                        0.0f,
                                        0.75f,
                                        5.0f,
                                        PI / 2.0f,
                                        PI / -2.0f,
                                        0.375f,
                                        -0.1875f,
                                        { 127, 127, 127, 127 },
                                        32,
                                        2,
                                        1,
                                        NULL },
                                      { 0x741b0566,
                                        2.0f,
                                        { 0.0f, 0.0f, 0.0f },
                                        0.0f,
                                        1.0f,
                                        6.0f,
                                        PI / 2.0f,
                                        PI / -2.0f,
                                        0.25f,
                                        -0.125f,
                                        { 63, 63, 63, 63 },
                                        32,
                                        1,
                                        1,
                                        NULL } };
const xFXRing sHammerRing[1] = {
    0x741b0566, 0.75f, { 0.0f, 0.0f, 0.0f },   0.0f, 0.4f, 2.4f, PI / 2.0f, PI / -2.0f,
    0.6f,       -0.6f, { 255, 255, 255, 127 }, 32,   2,    1,    NULL
};
const xFXRing sPorterRing[2] = {
    { 0x741b0566,
      1.2f,
      { 0.0f, 0.0f, 0.0f },
      0.1f,
      0.0f,
      3.0f,
      PI / 2.0f,
      PI / -2.0f,
      0.6f,
      -0.6f,
      { 180, 180, 45, 127 },
      16,
      2,
      1,
      NULL },
    { 0x741b0566,
      0.5f,
      { 0.0f, 0.25f, 0.0f },
      0.0f,
      1.5f,
      -3.0f,
      PI / -2.0f,
      PI / 2.0f,
      1.2f,
      -2.4f,
      { 64, 128, 128, 127 },
      8,
      2,
      1,
      NULL },
};
const xFXRing sMuscleArmRing[1] = {
    0x741b0566, 3.0f,  { 0.0f, 0.0f, 0.0f },   0.0f, 0.0f, 90.0f, PI / 2.0f, 0.0f,
    0.6f,       30.0f, { 255, 255, 255, 160 }, 48,   1,    1,     NULL
};

static const float defaultGooTimes[4] = {};
static const float defaultGooWarbc[4] = {};

zFXGooInstance zFXGooInstances[24];
U32 gFXSurfaceFlags = 0;

void xDrawSphere2(const xVec3*, F32, U32)
{
}

void on_spawn_bubble_wall(const tweak_info& tweak)
{
    zFX_SpawnBubbleWall();
}

static void init_poppers();
static void setup_entrails(zScene&);
void zFX_SceneEnter(RpWorld* world)
{
    xFXanimUV2PSetTexture(NULL);
    xFX_SceneEnter(world);
    zFXGoo_SceneEnter();
    init_poppers();
    setup_entrails(*globals.sceneCur);

    static tweak_callback cb_spawn_bubble_wall =
        tweak_callback::create_change(on_spawn_bubble_wall);
    xDebugAddTweak("FX|Spawn Bubble Wall", "Go!", &cb_spawn_bubble_wall, NULL, 0);
}

xVec3 bubblehit_pos_rnd = { 0.25f, 0.25f, 0.25f };
xVec3 bubblehit_vel_rnd = { 6.0f, 6.0f, 6.0f };
xVec3 bubbletrail_pos_rnd = { 0.25f, 0.25f, 0.25f };
xVec3 bubbletrail_vel_rnd = { 0.25f, 0.25f, 0.25f };

F32 bubblehit_vel_scale = 1.0f;

void zFX_SceneExit(RpWorld* world)
{
    xFX_SceneExit(world);
    zFXGoo_SceneExit();
}

void zFX_SceneReset()
{
    zFXGoo_SceneReset();
    reset_poppers();
    reset_entrails();
}

void zFXPatrickStun(const xVec3* pos)
{
    xFXRingCreate(pos, &sPatrickStunRing[0]);
    xFXRingCreate(pos, &sPatrickStunRing[1]);
    xFXRingCreate(pos, &sPatrickStunRing[2]);
}

void zFXHammer(const xVec3* pos)
{
    xFXRingCreate(pos, &sHammerRing[0]);
    zFX_SpawnBubbleSlam(pos, (xrand() & 31) + 32, 0.15f, 12.0f, 2.0f);
}

void zFXPorterWave(const xVec3* pos)
{
    xFXRingCreate(pos, &sPorterRing[0]);
    xFXRingCreate(pos, &sPorterRing[1]);
}

xFXRing* zFXMuscleArmWave(const xVec3* pos)
{
    return xFXRingCreate(pos, &sMuscleArmRing[0]);
}

static ztextbox* goo_timer_textbox = NULL;
static void* g_txtr_gooFrozen = NULL;
// WIP
void zFXGooEnable(RpAtomic* atomic, S32 freezeGroup)
{
    S32 i;
    zFXGooInstance* goo = zFXGooInstances;
    g_txtr_gooFrozen = NULL;
    for (i = 0; i < 24; i++, goo++)
    {
        if (goo->state == zFXGooStateInactive)
        {
            break;
        }
        if (goo->atomic == atomic)
        {
            return;
        }
    }
    if (i == 24)
    {
        return;
    }

    goo->freezeGroup = freezeGroup;
    RpGeometry* geom = RpAtomicGetGeometry(atomic);
    S32 numVertices = geom->numVertices;
    S32 numTriangles = geom->numTriangles;
    if (geom->preLitLum == NULL)
    {
        RpGeometry* new_geom = RpGeometryCreate(numVertices, numTriangles, 0x7E);
        RwV3d* verts = geom->morphTarget->verts;
        RwV3d* normals = geom->morphTarget->normals;
        RwTexCoords* texCoords = geom->texCoords[0];
        RwV3d* new_verts = new_geom->morphTarget->verts;
        RwV3d* new_normals = new_geom->morphTarget->normals;
        RwRGBA* new_preLitLum = new_geom->preLitLum;
        RwTexCoords* new_texCoords = new_geom->texCoords[0];
        for (i = 0; i < numVertices; i++, verts++, new_verts++, normals++, new_normals++,
            new_preLitLum++, texCoords++, new_texCoords++)
        {
            new_verts[0] = verts[0];
            new_normals[0] = normals[0];

            new_preLitLum[0].red = 0xff;
            new_preLitLum[0].green = 0xff;
            new_preLitLum[0].blue = 0xff;
            new_preLitLum[0].alpha = 0xff;

            new_texCoords[0] = texCoords[0];
        }

        RpTriangle* orig_triangles = geom->triangles;
        RpTriangle* triangles = new_geom->triangles;
        for (i = 0; i < numTriangles; i++, orig_triangles++, triangles++)
        {
            RwUInt16 vert1, vert2, vert3;
            RpGeometryTriangleGetVertexIndices(geom, orig_triangles, &vert1, &vert2, &vert3);
            RpGeometryTriangleSetVertexIndices(new_geom, triangles, vert1, vert2, vert3);

            RpMaterial* orig_material = RpGeometryTriangleGetMaterial(geom, orig_triangles);
            RpGeometryTriangleSetMaterial(new_geom, triangles, orig_material);
        }

        RwSphere boundingSphere;
        RpMorphTargetCalcBoundingSphere(new_geom->morphTarget, &boundingSphere);
        new_geom->morphTarget->boundingSphere = boundingSphere;
        RpGeometryUnlock(new_geom);
        RpAtomicSetGeometry(atomic, new_geom, 0);
        geom = new_geom;
    }

    xVec3* orig_verts = (xVec3*)xMemAllocSize(sizeof(xVec3) * numVertices);
    RwRGBA* orig_colors = (RwRGBA*)xMemAllocSize(sizeof(RwRGBA) * numVertices);
    RwTexCoords* orig_uvs = (RwTexCoords*)xMemAllocSize(sizeof(RwTexCoords) * numVertices);
    memcpy(orig_verts, geom->morphTarget->verts, sizeof(xVec3) * numVertices);
    memcpy(orig_colors, geom->preLitLum, sizeof(RwRGBA) * numVertices);
    memcpy(orig_uvs, geom->texCoords[0], sizeof(RwTexCoords) * numVertices);
    RpAtomicSetRenderCallBack(atomic, &zFXGooRenderAtomic);
    goo->atomic = atomic;
    goo->orig_verts = orig_verts;
    goo->orig_colors = orig_colors;
    goo->orig_uvs = orig_uvs;
    memcpy(goo->warbc, defaultGooWarbc, sizeof(defaultGooWarbc));
    goo->w0 = goo->warbc[0];
    goo->w2 = goo->warbc[2];
    memcpy(goo->state_time, defaultGooTimes, sizeof(defaultGooTimes));

    goo->state = zFXGooStateNormal;
    goo->time = 0.0f;
    goo->min = 3.0f;
    goo->max = 4.0f;
    goo->ref_parentPos = NULL;

    if (gCurEnv != NULL)
    {
        gCurEnv->easset->climateFlags = 2;
        gCurEnv->easset->climateStrengthMin = 0.0f;
        gCurEnv->easset->climateStrengthMax = 0.0f;
        xClimateInitAsset(&gClimate, gCurEnv->easset);
    }
}

void zFXGoo_SceneEnter()
{
    S32 i;
    zFXGooInstance* goo = zFXGooInstances;
    for (i = 0; i < 24; i++)
    {
        memset(goo, 0, 4);
        goo->state = zFXGooStateInactive;
        goo++;
    }
    U32 gameID = xStrHash("FREEZY_TIMER_TEXTBOX");
    goo_timer_textbox = (ztextbox*)zSceneFindObject(gameID);
}

void zFXGoo_SceneReset()
{
    S32 i;
    zFXGooInstance* goo = zFXGooInstances;

    for (i = 0; i < 24;)
    {
        if (goo->state != zFXGooStateInactive)
        {
            goo->state = zFXGooStateNormal;
        }
        i++;
        goo++;
    }
}

void zFXGoo_SceneExit()
{
    S32 i;
    zFXGooInstance* goo = zFXGooInstances;
    for (i = 0; i < 0x18; i++)
    {
        memset(&goo->atomic, 0, sizeof(RpAtomic*));
        goo->state = zFXGooStateInactive;
        goo++;
    }
}

// Regalloc
void zFXGooUpdateInstance(zFXGooInstance* goo, F32 dt)
{
    zFXGooState old_state = goo->state;
    if (goo->state != zFXGooStateNormal)
    {
        goo->time += dt;
        if (goo->time >= goo->timer)
        {
            goo->state = (zFXGooState)(((S32)goo->state + 1) & 0x3);
            goo->timer = (goo->time + goo->state_time[goo->state]) - (goo->time - goo->timer);
        }
    }

    if (xabs(goo->state_time[goo->state] < 1e-5f))
    {
        goo->state_time[goo->state] = 1e-5f;
    }
    goo->alpha = 1.0f - ((goo->timer - goo->time) / goo->state_time[goo->state]);
    goo->alpha = CLAMP(goo->alpha, 0.0f, 1.0f);

    switch (goo->state)
    {
    case zFXGooStateNormal:
    {
        if (old_state == zFXGooStateMelting)
        {
            zGooMeltFinished(goo->atomic);
        }
        goo->alpha = 0.0f;
        break;
    }
    case zFXGooStateFreezing:
    {
        F32 rate = xpow(1.1f, 60.0f * dt);
        goo->min *= rate;
        goo->max *= rate;
        break;
    }
    case zFXGooStateFrozen:
    {
        goo->alpha = 1.0f;
        if (goo->timer - goo->time <= 2.5f)
        {
            xClimateSetSnow(0.0f);
            if (!xSndIsPlaying(0x7bc0c0ce))
            {
                xSndPlay3D(0x7bc0c0ce, 10.0f, 0.0f, 0x80, 0x10000, &goo->center, 0.0f, SND_CAT_GAME,
                           0.0f);
            }
        }
        break;
    }
    case zFXGooStateMelting:
    {
        goo->alpha = 1.0f - goo->alpha;
        F32 rate = xpow(0.9090909f, 60.0f * dt);
        goo->min *= rate;
        goo->max *= rate;
        break;
    }
    }

    goo->warbc[0] = goo->w0 * (1.0f - goo->alpha);
    goo->warbc[2] = goo->w2 * (1.0f - goo->alpha);
    F32 tmp = xpow(1.0f - goo->alpha, 1.5f);
    goo->warb_time += tmp * dt;

    if (goo->alpha < 1.0f && goo->atomic != NULL)
    {
        RpGeometry* geom = RpAtomicGetGeometry(goo->atomic);
        if (geom != NULL && RpGeometryLock(geom, 2))
        {
            F32 warb_time = goo->warb_time;
            xVec3* verts = goo->orig_verts;
            RwV3d* morphVerts = geom->morphTarget->verts;
            for (S32 s = 0; s < geom->numVertices; s++, verts++, morphVerts++)
            {
                F32 a = xfmod(goo->warbc[1] * (verts->x + warb_time), 2 * PI);
                F32 b = xfmod(goo->warbc[3] * (verts->z + warb_time), 2 * PI);
                F32 c = isin(a);

                a = goo->warbc[0] * c + verts->y;

                F32 d = isin(b);

                morphVerts->y = goo->warbc[2] * d + a;
            }

            RpGeometryUnlock(geom);
        }
    }

    if(goo_timer_textbox != NULL)
    {
        F32 freeze_time = zFXGooFreezeTimeLeft();

        if(freeze_time > 0.0f) {
            S32 len = freeze_time;
            if(len > 0x63) {
                len = 0x63;
            }

            static char counter_text[] = "##:##";
            sprintf(counter_text, "%02d", len);
            goo_timer_textbox->set_text(counter_text);
            goo_timer_textbox->activate();
        }
        else {
            goo_timer_textbox->deactivate();
        }
    }
}

void zFXUpdate(F32 dt)
{
    zFXGooUpdate(dt);
    update_poppers(dt);
    update_entrails(dt);
    xFXUpdate(dt);
}

void zFXGooFreeze(RpAtomic* atomic, const xVec3* center, xVec3* ref_parPosVec)
{
    S32 i;
    zFXGooInstance* goo = zFXGooInstances;
    S32 freezeGroup = -1;

    for (i = 0; i < 24; i++)
    {
        if ((goo->state == 0) && (goo->atomic == atomic))
        {
            freezeGroup = goo->freezeGroup;
            break;
        }
        goo++;
    }

    if (freezeGroup != -1)
    {
        xSndPlay3D(0x7bc0c0ce, 10.0f, 0.0f, 0x80, 0, center, 0.0f, 0.0f, SND_CAT_GAME, 0.0f);
        xSndPlay3D(0xb9b1d325, 10.0f, 0.0f, 0x80, 0, center, 0.0f, 0.0f, SND_CAT_GAME, 0.0f);
        xClimateSetSnow(1.0f);

        for (i = 0; i < 24; i++)
        {
            if (goo->freezeGroup == freezeGroup)
            {
                goo->state = zFXGooStateFreezing;
                goo->time = 0.0f;

                // goo->timer = goo->time + (goo->center * 4) + 0x30;

                *goo->orig_verts = *center;

                goo->min = 3.0f;
                goo->max = 4.0f;

                goo->ref_parentPos = ref_parPosVec;

                if (ref_parPosVec != NULL)
                {
                    goo->pos_parentOnFreeze = *ref_parPosVec;
                }
                else
                {
                    goo->pos_parentOnFreeze = g_O3;
                }
            }
            goo++;
        }
    }
}

S32 zFXGooIs(xEnt* obj, F32& depth, U32 playerCheck)
{
    S32 i;
    zFXGooInstance* goo;
    xVec3* pos;

    return 0;
}

void zFXGooEventSetWarb(xEnt* ent, const F32* warb)
{
    S32 i;
    zFXGooInstance* goo;
}

namespace
{
    void add_popper_tweaks()
    {
    }
    void add_entrail_tweaks()
    {
    }

    S32 count_faces(xModelInstance* mdl)
    {
        int i = 0;
        for (; mdl != NULL; mdl = mdl->Next)
        {
            i += mdl->Data->geometry->numTriangles;
        }
        return i;
    }

    struct entrail_data
    {
        U16 flags;
        U16 type;
        xEnt* ent;
        xVec3 loc;
        xVec3 vel;
        F32 emitted;

        void reset();
        void update(F32);
    };

    enum state_enum
    {
        STATE_NONE,
        STATE_OFF,
        STATE_ON
    };

    struct popper_data
    {
        state_enum state;
        xEnt* ent;
        RpAtomic* atomic[4];
        U32 atomic_size;
        F32 time;
        F32 end_time;
        union
        {
            xVec3 model_scale;
            U32 pipe_flags;
        };
        F32 rate;
        F32 vel;
        F32 rloc;
        F32 rvel;
        F32 emitted;
        S32 faces;
        F32 radius;
        F32 area;
        F32 weight[768];
    };

    popper_data poppers[8];
    entrail_data* entrails;
    U32 entrails_size;

    void entrail_data::reset()
    {
        flags = 0;
        emitted = 0.0f;
    }

    void set_popper_alpha(popper_data& data, F32 alpha)
    {
        xEntShow(data.ent);
        xModelInstance* p = data.ent->model;
        p->Alpha = alpha;
        p->Flags |= 0x4000;
        p->PipeFlags = (p->PipeFlags & ~0xc) | 8;
    }
} // namespace

void update_entrails(F32 val)
{
    entrail_data* pData;
    entrail_data* pEnd = &entrails[entrails_size];
    for (pData = entrails; pData != pEnd; pData++)
    {
        pData->update(val);
    }
}

void reset_entrails()
{
    entrail_data* pData;
    entrail_data* pEnd = &entrails[entrails_size];
    for (pData = entrails; pData != pEnd; pData++)
    {
        pData->reset();
    }
}

void zFX_SpawnBubbleHit(const xVec3* pos, unsigned int num, xVec3* pos_rnd, xVec3* vel_rnd,
                        float vel_scale);
void zFX_SpawnBubbleTrail(const xVec3* pos, unsigned int num, const xVec3* pos_rnd,
                          const xVec3* vel_rnd);

void zFX_SpawnBubbleHit(const xVec3* pos, U32 num)
{
    zFX_SpawnBubbleHit(pos, num, &bubblehit_pos_rnd, &bubblehit_vel_rnd, bubblehit_vel_scale);
}

void zFX_SpawnBubbleTrail(const xVec3* pos, U32 num)
{
    zFX_SpawnBubbleTrail(pos, num, &bubblehit_pos_rnd, &bubblehit_vel_rnd);
}

void init_poppers()
{
    reset_poppers();
    add_popper_tweaks();
}

void reset_poppers()
{
    popper_data* pData;
    popper_data* pEnd = &poppers[sizeof(poppers) / sizeof(popper_data)];
    for (pData = &poppers[0]; pData != pEnd; pData++)
    {
        pData->state = STATE_NONE;
        pData->ent = NULL;
    }
}

void zFXGooUpdateInstance(zFXGooInstance*, F32);

void zFXGooUpdate(F32 dt)
{
    int i;
    zFXGooInstance* pGoo = &zFXGooInstances[0];

    for (i = 0; i < 0x18; i++)
    {
        if (pGoo->state != zFXGooStateInactive)
        {
            zFXGooUpdateInstance(pGoo, dt);
        }
        pGoo++;
    }
}

xVec3& xVec3::up_normalize()
{
    return safe_normalize(xVec3::m_UnitAxisY);
}
