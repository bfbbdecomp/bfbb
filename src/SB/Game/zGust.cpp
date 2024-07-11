#include "xstransvc.h"
#include "xEvent.h"
#include "xString.h"

#include "zGust.h"
#include "zParEmitter.h"
#include "zScene.h"

#include <types.h>

char buffer[16];
static zGust* gusts;
static U16 ngusts;
static zParEmitter* sGustDustEmitter;
static zParEmitter* sGustDebrisEmitter;

S32 zGustEventCB(xBase* from, xBase* to, U32 toEvent, const float* toParam, xBase *b);

void zGustInit(zGust *g, zGustAsset *a)
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

void zGustSetup(zGust* g)
{
     g->volume = (zVolume*)zSceneFindObject(g->asset->volumeID);
     g->fx_volume = (zVolume*)zSceneFindObject(g->asset->effectID);
}

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

// NOTE(jelly): i think this is equivalent, the string loads are just not hoisted in orig
void zGustSetup()
{
     if (gusts)
     {
          for (U16 i = 0; i < ngusts; i++)
          {
               zGustSetup(&gusts[i]);
               sGustDustEmitter = zParEmitterFind(xStrHash("PAREMIT_GUST_DUST"));
               sGustDebrisEmitter = zParEmitterFind(xStrHash("PAREMIT_GUST_DUST"));
          }
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

zGust *zGustGetGust(U16 n)
{
     if (gusts)
     {
          return &gusts[n];
     }
     
     return NULL;
}     

// TODO(jelly): finish
void zGustUpdateEnt(xEnt* ent, xScene* sc, float dt, void* gdata)
{
     unsigned int i; // r18
     unsigned int j; // r3
     unsigned int minidx; // r17
     float minlerp; // r1
     class zGustData * data; // r16
     class xCollis coll; // r29+0x60
     float lerpinc; // r3
     class xVec3 * gvel; // r4
     class xVec3 dpos; // r29+0xB0

     if (gusts)
     {
          for (U32 i = 0; gusts[i].flags & 0xffff; i++)
          {
               for (U32 j = 0; j < ngusts; j++)
               {
               }
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

void zGustReset(zGust *g)
{
    xBaseReset(g, g->asset);
    g->flags = g->asset->flags;
}

S32 zGustEventCB(xBase* from, xBase* to, U32 toEvent, const float* toParam, xBase *b)
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

void UpdateGustFX(zGust *g, float seconds)
{
     
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
