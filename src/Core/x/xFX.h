#ifndef XFX_H
#define XFX_H

#include "xMath3.h"
#include "containers.h"
#include "../p2/iColor.h"

#include <rwcore.h>
#include <rpworld.h>

struct xFXRing
{
    uint32 texture;
    float32 lifetime;
    xVec3 pos;
    float32 time;
    float32 ring_radius;
    float32 ring_radius_delta;
    float32 ring_tilt;
    float32 ring_tilt_delta;
    float32 ring_height;
    float32 ring_height_delta;
    iColor_tag ring_color;
    uint16 ring_segs;
    uint8 u_repeat;
    uint8 v_repeat;
    xFXRing** parent;
};

struct xFXRibbon
{
    struct config
    {
        float32 life_time;
        uint32 blend_src;
        uint32 blend_dst;
        float32 pivot;
    };

    struct joint_data
    {
        uint32 flags;
        uint32 born;
        xVec3 loc;
        xVec3 norm;
        float32 orient;
        float32 scale;
        float32 alpha;
    };

    struct curve_node
    {
        float32 time;
        iColor_tag color;
        float32 scale;
    };

    config cfg;
    bool activated;
    RwRaster* raster;
    tier_queue<joint_data> joints;
    curve_node* curve;
    uint32 curve_size;
    uint32 curve_index;
    float32 ilife;
    uint32 mtime;
    uint32 mlife;
};

void xFXInit();
xFXRing* xFXRingCreate(const xVec3* pos, const xFXRing* params);
void xFXRingRender();
void xFX_SceneEnter(RpWorld* world);
void xFX_SceneExit(RpWorld* world);
void xFXUpdate(float32 dt);
RpAtomic* AtomicDisableMatFX(RpAtomic* atomic);
void xFXPreAllocMatFX(RpClump* clump);

RpAtomic* xFXBubbleRender(RpAtomic* atomic);

void xFXanimUV2PSetTexture(RwTexture* texture);
void xFXanimUVSetTranslation(const xVec3* trans);
void xFXanimUV2PSetTranslation(const xVec3* trans);
void xFXanimUVSetScale(const xVec3* scale);
void xFXanimUV2PSetScale(const xVec3* scale);
void xFXanimUVSetAngle(float32 angle);
void xFXanimUV2PSetAngle(float32 angle);
RpAtomic* xFXanimUVAtomicSetup(RpAtomic* atomic);
uint32 xFXanimUVCreate();
void xFXFireworksInit(const char* fireworksTrailEmitter, const char* fireworksEmitter1,
                      const char* fireworksEmitter2, const char* fireworksSound,
                      const char* fireworksLaunchSound);
void xFXFireworksUpdate(float32 dt);
void xFXStreakInit();
void xFXStreakUpdate(float32 dt);
void xFXStreakRender();
void xFXShineInit();
void xFXShineUpdate(float32 dt);
void xFXShineRender();
void xFXRibbonSceneEnter();
void xFXRibbonUpdate(float32 dt);
void xFXRibbonRender();
void xFXAuraInit();
void xFXAuraUpdate(float32 dt);
void xFXAuraRender();
void xFXSceneInit();
void xFXSceneSetup();
void xFXSceneReset();
void xFXScenePrepare();
void xFXSceneFinish();

#endif