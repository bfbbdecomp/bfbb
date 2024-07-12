#include "xstransvc.h"
#include "xMath.h"
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
     //unsigned int minidx; // r17
     float minlerp; // r1
     //class zGustData * data; // r16
     //class xCollis coll; // r29+0x60
     float lerpinc; // r3
     class xVec3 * gvel; // r4
     class xVec3 dpos; // r29+0xB0

     zGustData* data = (zGustData*)gdata;
     
     if (!gusts) return;
     
     xCollis coll;
     coll.flags = 0;
     for (U32 i = 0; i < ngusts; i++)
     {
          if (gusts[i].flags & 1)
          {
               xBoundHitsBound(&ent->bound, &gusts[i].volume->asset->bound, &coll);
               if (coll.flags & 1)
               {
                    U32 minidx = 0;
                    U32 j;
                    for (j = 0; j < 4; j++)
                    {
                         if (&gusts[i] == data->g[j] && data->lerp[j] < 2.0f)
                         {
                              minidx = j;
                              break;
                         }
                    }

                    if (j == 4)
                    {
                         data->g[minidx] = (zGust *)gusts[i].id;
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
          zGust *g = data->g[i];
          if (g)
          {
               if (g->flags & 1)
               {
                    float lerpinc = g->asset->fade;
                    if (dt < lerpinc)
                    {
                         lerpinc = dt / lerpinc;
                         if (data->lerp[i] < 0.0f)
                         {
                              data->lerp[i] += lerpinc;
                         }
                         else if (data->lerp[i] > 1.0f)
                         {
                              data->lerp[i] += lerpinc;
                              if (data->lerp[i] > 1.0f)
                              {
                                   data->lerp[i] = .0f;
                              }
                              
                         }
                    }
                    if (data->lerp[i] < 0.0f)
                    {
                         data->g[i] = 0;
                         data->lerp[i] = 0.0f;
                    }
               }
               else
               {
                    data->g[i] = 0;
                    data->lerp[i] = 0.0f;
               }
          }
     }

     data->gust_on = 0;
     for (U32 i = 0; i < 4; i++)
     {
          if (data->g[i])
          {
               data->gust_on = 1;
               xVec3Mul(&dpos, data->g[i]->asset->vel, dt * xAbs(data->lerp[i]));
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
