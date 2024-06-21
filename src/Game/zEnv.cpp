#include "zEnv.h"

#include "zGlobals.h"
#include "zSurface.h"
#include "zLight.h"

#include "../Core/x/xstransvc.h"
#include "../Core/x/xGroup.h"
#include "../Core/x/xEvent.h"
#include "../Core/x/xClimate.h"
#include "../Core/gc/iLight.h"

void zEnvInit(void* env, void* easset)
{
    zEnvInit((_zEnv*)env, (xEnvAsset*)easset);
}

void zEnvInit(_zEnv* env, xEnvAsset* easset)
{
    uint32 bufsize;
    void* buf;

    xBaseInit(env, easset);

    env->easset = easset;
    env->eventFunc = zEnvEventCB;

    if (env->linkCount)
    {
        env->link = (xLinkAsset*)(env->easset + 1);
    }

    globals.sceneCur->zen = env;
    globals.sceneCur->zen = env;

    xSTAssetCountByType('BSP ');

    buf = xSTFindAsset(easset->bspAssetID, &bufsize);

    if (buf)
    {
        xEnvLoadBsp(globals.sceneCur->env, buf, bufsize, 0);
    }

    zSurfaceRegisterMapper(easset->bspMapperID);

    if (easset->bspCollisionAssetID)
    {
        buf = xSTFindAsset(easset->bspCollisionAssetID, &bufsize);

        if (buf)
        {
            xEnvLoadBsp(globals.sceneCur->env, buf, bufsize, 1);
        }
    }

    if (easset->bspFXAssetID)
    {
        buf = xSTFindAsset(easset->bspFXAssetID, &bufsize);

        if (buf)
        {
            xEnvLoadBsp(globals.sceneCur->env, buf, bufsize, 2);
        }
    }

    if (easset->bspCameraAssetID)
    {
        buf = xSTFindAsset(easset->bspCameraAssetID, &bufsize);

        if (buf)
        {
            xEnvLoadBsp(globals.sceneCur->env, buf, bufsize, 3);
        }
    }

    if (globals.sceneCur->env && globals.sceneCur->env->geom)
    {
        zLightResetAll(globals.sceneCur->env);
        iLightInit(globals.sceneCur->env->geom->world);
    }
}

void zEnvSetup(_zEnv* env)
{
    xBaseSetup(env);
    iEnvLightingBasics(globals.sceneCur->env->geom, env->easset);
}

void zEnvStartingCamera(_zEnv* env)
{
    xCamera* cam;

    cam = (xCamera*)zSceneFindObject(env->easset->startCameraAssetID);

    if (cam)
    {
        zEntPlayer_StoreCheckPoint(&globals.player.ent.frame->mat.pos,
                                   globals.player.ent.frame->rot.angle, globals.camera.id);
    }
}

void zEnvRender(xEnv* env)
{
    RpWorld* world = env->geom->world;
    int32 num = RpWorldGetNumMaterials(world);

    for (int32 i = 0; i < num; i++)
    {
        xSurface* sp = zSurfaceGetSurface(i);
        zSurfaceProps* pp = (zSurfaceProps*)sp->moprops;

        if (pp && pp->asset && pp->texanim_flags & 0x1)
        {
            RpMaterial* mp = RpWorldGetMaterial(world, i);

            if (mp)
            {
                xGroup* g = (xGroup*)pp->texanim[0].group_ptr;

                if (g)
                {
                    uint32 texid = xGroupGetItem(g, pp->texanim[0].group_idx);
                    RwTexture* texptr = (RwTexture*)xSTFindAsset(texid, NULL);

                    if (texptr)
                    {
                        RpMaterialSetTexture(mp, texptr);
                    }
                }
            }
        }
    }

    xEnvRender(env);
}

void zEnvSave(_zEnv* ent, xSerial* s)
{
    xBaseSave(ent, s);
}

void zEnvLoad(_zEnv* ent, xSerial* s)
{
    xBaseLoad(ent, s);
}

void zEnvReset(_zEnv* env)
{
    xBaseReset(env, env->easset);
}

int32 zEnvEventCB(xBase*, xBase* to, uint32 toEvent, const float32* toParam, xBase*)
{
    switch (toEvent)
    {
    case eEventReset:
    {
        zEnvReset((_zEnv*)to);
        break;
    }
    case eEventSetSnow:
    {
        xClimateSetSnow(toParam[0]);
        break;
    }
    case eEventSetRain:
    {
        xClimateSetRain(toParam[0]);
        break;
    }
    case eEventWaveSetLinear:
    case eEventWaveSetRipple:
    {
        break;
    }
    }

    return 1;
}
