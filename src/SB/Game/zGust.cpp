#include "xstransvc.h"
#include "xEvent.h"

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
     ngusts = (U16)xSTAssetCountByType('GUST');
     
     if (ngusts)
     {
          gusts = (zGust*)xMemAllocSize(sizeof(zGust));
          for (S32 i = 0; i < ngusts; i++)
          {
               U32 size;
               zGustAsset* asset = (zGustAsset*)xSTFindAssetByType('GUST', i, &size);
               zGust *g = &gusts[i];
               zGustInit(g, asset);
          }
     }
     else
     {
          gusts = NULL;
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

#if 0
// WIP.
void zGustUpdateFX(F32 seconds)
{
    for (S32 i = 0; i < ngusts; i++)
    {
        zGust* curr = gusts[i];
        if (curr->flags & 1)
        {
            UpdateGustFX(curr, seconds);
        }
    }
}

#endif
