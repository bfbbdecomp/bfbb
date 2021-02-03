#include "zGoo.h"

#include "zFX.h"

#include "../Core/x/xEvent.h"

extern float32 _742_2;
extern float32 _780_1;

struct zGooParams
{
    float32 depth;
    float32 orig_depth;
    xEnt* goo_ent;
};

extern zGooParams* zgoo_gps;
extern int32 zgoo_ngps;
extern int32 zgoo_nused;

void zGooInit(int32 nobj)
{
    zgoo_gps = (zGooParams*)xMemAllocSize(nobj * sizeof(zGooParams));
    zgoo_ngps = nobj;
}

void zGooExit()
{
    zgoo_gps = NULL;
    zgoo_ngps = 0;
    zgoo_nused = 0;
}

int32 zGooAdd(xEnt* obj, float32 depth, int32 freezeGroup)
{
    int32 i;
    zGooParams* gp;

    for (i = 0; i < zgoo_nused; i++)
    {
        gp = &zgoo_gps[i];

        if (gp->goo_ent == obj)
        {
            return 1;
        }
    }

    if (zgoo_nused >= zgoo_ngps)
    {
        return 0;
    }

    gp = &zgoo_gps[zgoo_nused];

    gp->orig_depth = depth;
    gp->depth = depth;
    gp->goo_ent = obj;

    zgoo_nused++;

    if (obj->model->Data)
    {
        zFXGooEnable(obj->model->Data, freezeGroup);
    }

    return 1;
}

int32 zGooIs(xEnt* obj, float32& depth, uint32 playerCheck)
{
    int32 ret = 0;
    int32 i;

    for (i = 0; i < zgoo_nused; i++)
    {
        if (obj == zgoo_gps[i].goo_ent)
        {
            ret = 1;
            depth = zgoo_gps[i].depth = zgoo_gps[i].orig_depth;

            break;
        }
    }

    if (ret)
    {
        depth = zgoo_gps[i].orig_depth;
        ret = zFXGooIs(obj, depth, playerCheck);

        zgoo_gps[i].depth = depth;
    }

    return ret;
}

#ifndef NON_MATCHING
// func_801238EC
#pragma GLOBAL_ASM("asm/Game/zGoo.s", "zGooCollsBegin__Fv")
#else
void zGooCollsBegin()
{
    int32 i;
    xEnt* gooey;
    float32 ignoredepth;
    xVec3 change;

    for (i = 0; i < zgoo_nused; i++)
    {
        gooey = zgoo_gps[i].goo_ent;

        zGooIs(gooey, ignoredepth, 0);

        if (gooey->transl)
        {
            // non-matching: instruction order

            change.x = _742_2;
            change.y = -zgoo_gps[i].depth;
            change.z = _742_2;

            gooey->transl(gooey, &change, NULL);
        }
    }
}
#endif

void zGooCollsEnd()
{
    int32 i;
    xEnt* gooey;
    xVec3 change;

    for (i = 0; i < zgoo_nused; i++)
    {
        gooey = zgoo_gps[i].goo_ent;

        if (gooey->transl)
        {
            change.x = _742_2;
            change.y = zgoo_gps[i].depth;
            change.z = _742_2;

            gooey->transl(gooey, &change, NULL);
        }
    }
}

void zGooStopTide()
{
    int32 i;

    for (i = 0; i < zgoo_nused; i++)
    {
        zEntEvent(zgoo_gps[i].goo_ent, eEventPlatPause, _742_2, _742_2, _742_2, _742_2);
    }
}

void zGooMeltFinished(RpAtomic* atomic)
{
    int32 i;
    xEnt* gooey;

    for (i = 0; i < zgoo_nused; i++)
    {
        gooey = zgoo_gps[i].goo_ent;

        if (gooey->model->Data == atomic)
        {
            zEntEvent(gooey, eEventPlatUnpause, _780_1, _742_2, _742_2, _742_2);
        }
    }
}