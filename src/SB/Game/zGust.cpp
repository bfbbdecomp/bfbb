#include "xstransvc.h"
#include "xMath.h"
#include "xMath3.h"
#include "xEvent.h"
#include "xString.h"
#include "xVec3.h"
#include "xVec3Inlines.h"

#include "zGust.h"
#include "zParEmitter.h"
#include "zScene.h"

#include <types.h>

static zGust* gusts;
static U16 ngusts;
static zParEmitter* sGustDustEmitter;
static zParEmitter* sGustDebrisEmitter;

S32 zGustEventCB(xBase* from, xBase* to, U32 toEvent, const float* toParam, xBase* b);

static void zGustInit(zGust* g, zGustAsset* a)
{
    xBaseInit(g, a);
    g->eventFunc = zGustEventCB;
    g->asset = a;
    g->flags = a->flags;

    if (g->linkCount)
    {
        g->link = (xLinkAsset*)&g->asset[1];
    }
    else
    {
        g->link = NULL;
    }

    g->debris_timer = 0.15f;
}

static void zGustSetup(zGust* g)
{
    g->volume = (zVolume*)zSceneFindObject(g->asset->volumeID);
    g->fx_volume = (zVolume*)zSceneFindObject(g->asset->effectID);
}

// NOTE(jelly): equivalent, reloading global variable meme
void zGustInit()
{
    ngusts = xSTAssetCountByType('GUST');

    if (ngusts)
    {
        gusts = (zGust*)xMemAllocSize(sizeof(zGust) * ngusts);
        for (U16 i = 0; i < ngusts; i++)
        {
            U32 size;
            zGustAsset* asset = (zGustAsset*)xSTFindAssetByType('GUST', i, &size);
            zGustInit(&gusts[i], asset);
        }
    }
    else
    {
        gusts = NULL;
    }
}

void zGustSetup()
{
    if (gusts)
    {
        for (U16 i = 0; i < ngusts; i++)
        {
            zGustSetup(&gusts[i]);
        }
        sGustDustEmitter = zParEmitterFind(xStrHash("PAREMIT_GUST_DUST"));
        sGustDebrisEmitter = zParEmitterFind(xStrHash("PAREMIT_GUST_DEBRIS"));
    }
}

void zGustTurnOn(zGust* g)

{
    g->flags |= 1;
    g->debris_timer = 0.15f;
}

void zGustTurnOff(zGust* g)
{
    g->flags &= ~1;
}

void zGustToggleOn(zGust* g)
{
    g->flags ^= 1;
    g->debris_timer = 0.15f;
}

zGust* zGustGetGust(U16 n)
{
    if (gusts)
    {
        return &gusts[n];
    }

    return NULL;
}

// NOTE(jelly): non-matching
void zGustUpdateEnt(xEnt* ent, xScene* sc, float dt, void* gdata)
{
    zGustData* data = (zGustData*)gdata;

    if (!gusts)
        return;

    xCollis coll;
    coll.flags = 0;
    for (U32 i = 0; i < ngusts; i++)
    {
        if (gusts[i].flags & 1)
        {
            xBoundHitsBound(&ent->bound, &gusts[i].volume->asset->bound, &coll);
            if (coll.flags & 1)
            {
                U32 j;
                U32 minidx;
                for (j = 0; j < 4; j++)
                {
                    if (data->lerp[j] < 2.0f)
                    {
                        minidx = j;
                        if (data->g[j] == &gusts[i])
                        {
                            break;
                        }
                    }
                }

                if (j == 4)
                {
                    data->g[minidx] = &gusts[i];
                    data->lerp[minidx] = 1.0E-7;
                }
            }
            else
            {
                for (U32 j = 0; j < 4; j++)
                {
                    if (data->g[0] == &gusts[i] && data->lerp[0] == 1.0f)
                    {
                        data->lerp[j] = -1.0f;
                        break;
                    }
                }
            }
        }
    }

    for (U32 i = 0; i < 4; i++)
    {
        zGust* g = data->g[i];
        if (g)
        {
            if (g->flags & 1)
            {
                float lerpinc = g->asset->fade;
                if (dt >= lerpinc)
                {
                    if (!(data->lerp[i] < 1.0f))
                    {
                        data->lerp[i] = 1.0f;
                        continue;
                    }
                }
                else
                {
                    lerpinc = dt / lerpinc;
                    if (data->lerp[i] >= 0.0f)
                    {
                        data->lerp[i] += lerpinc;
                        if (data->lerp[i] >= 1.0f)
                        {
                            data->lerp[i] = 1.0f;
                        }
                    }
                    else
                    {
                        data->lerp[i] += lerpinc;
                        if (!(data->lerp[i] >= 0.0f))
                        {
                            continue;
                        }
                    }
                }
            }

            data->g[i] = NULL;
            data->lerp[i] = 0.0f;
        }
    }

    data->gust_on = 0;

    for (U32 i = 0; i < 4; i++)
    {
        if (data->g[i])
        {
            data->gust_on = 1;

            xVec3 dpos;
            xVec3SMul(&dpos, &data->g[i]->asset->vel, dt * xabs(data->lerp[i]));
            xVec3AddTo(&ent->frame->mat.pos, &dpos);
        }
    }
}

void zGustSave(zGust* g, xSerial* s)
{
    xBaseSave(g, s);
}

void zGustLoad(zGust* g, xSerial* s)
{
    xBaseLoad(g, s);
}

void zGustReset(zGust* g)
{
    xBaseReset(g, g->asset);
    g->flags = g->asset->flags;
}

S32 zGustEventCB(xBase* from, xBase* to, U32 toEvent, const float* toParam, xBase* b)
{
    switch (toEvent)
    {
    case eEventOn:
        zGustTurnOn((zGust*)to);
        break;

    case eEventOff:
        zGustTurnOff((zGust*)to);
        break;

    case eEventToggle:
        zGustToggleOn((zGust*)to);
        break;

    case eEventReset:
        zGustReset((zGust*)to);
        break;
    }

    return 1;
}

// NOTE(jelly): equivalent? i think it's just registers & float scheduling
static void UpdateGustFX(zGust* g, float seconds)
{
    S32 i;

    if (g->asset->partMod <= 0.0f)
        return;

    g->debris_timer -= seconds;

    if (!(g->debris_timer <= 0.0f))
        return;

    zVolume* volume = !g->asset->effectID ? g->volume : g->fx_volume;
    xVolumeAsset* asset = volume->asset;

    S32 vol_area = ((asset->bound.sph.r - asset->bound.box.box.lower.x) *
                    (asset->bound.box.box.upper.z - asset->bound.box.box.lower.z));

    if (vol_area > 1000)
    {
        g->debris_timer = 1000000.0f;
        return;
    }

    S32 total_debris = vol_area >> 5;
    if (total_debris > 5)
        total_debris = 5;
    else if (total_debris < 1)
        total_debris = 1;

    g->debris_timer = xurand() * 0.15f + 0.15f;

    xParEmitter* e = g->asset->flags & 2 ? sGustDustEmitter : sGustDebrisEmitter;

    if (!e)
        return;

    xParEmitterCustomSettings info;
    info.custom_flags = 0x302; // TODO(jelly): i'm guessing this is constants or'd together

    for (i = 0; i < total_debris; i++)
    {
        if (g->asset->effectID == 0)
        {
            asset = g->volume->asset;
            xBBox* box = &asset->bound.box;

            info.pos = box->box.lower;
            info.pos.x = (asset->bound.sph.r - box->box.lower.x) * xurand() + info.pos.x;
            info.pos.z = (box->box.upper.z - box->box.lower.z) * xurand() + info.pos.z;
            info.vel.x = 0.0f;
            info.vel.y = 5.0f;
            info.vel.z = 0.0f;
            info.life.val[0] = (box->box.upper.y - box->box.lower.y) / 5.0f * 2.0f;
        }
        else
        {
            asset = g->fx_volume->asset;
            xBBox* box = &asset->bound.box;

            info.pos.x = (asset->bound.sph.r - box->box.lower.x) * xurand() + box->box.lower.x;
            info.pos.y = (box->box.upper.y - box->box.lower.y) * xurand() + box->box.lower.y;
            info.pos.z = (box->box.upper.z - box->box.lower.z) * xurand() + box->box.lower.z;
            info.vel.x = 1.5f * g->asset->vel.x;
            info.vel.y = 1.5f * g->asset->vel.y;
            info.vel.z = 1.5f * g->asset->vel.z;
            info.life.val[0] = 7.5f * g->asset->fade;
        }

        info.life.val[0] *= g->asset->partMod;
        xParEmitterEmitCustom(e, 1.0f / 30.0f, &info);
    }
}

void zGustUpdateFX(F32 seconds)
{
    for (S32 i = 0; i < ngusts; i++)
    {
        zGust* curr = &gusts[i];
        if (curr->flags & 1)
        {
            UpdateGustFX(curr, seconds);
        }
    }
}
