#ifndef XFX_H
#define XFX_H

#include "../p2/iColor.h"
#include "xMath3.h"
#include "xVec3.h"

#include <rwcore.h>
#include <rpworld.h>

struct tagiRenderInput
{
    uint16* m_index;
    RxObjSpace3DVertex* m_vertex;
    float32* m_vertexTZ;
    uint32 m_mode;
    int32 m_vertexType;
    int32 m_vertexTypeSize;
    int32 m_indexCount;
    int32 m_vertexCount;
    xMat4x3 m_camViewMatrix;
    xVec4 m_camViewR;
    xVec4 m_camViewU;
};

struct curve_node
{
    float32 time;
    iColor_tag color;
    float32 scale;
};

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

xFXRing* xFXRingCreate(const xVec3* pos, const xFXRing* params);

void xFXUpdate(float32 dt);

void xFX_SceneExit(RpWorld* world);
void xFXanimUV2PSetTexture(RwTexture* texture);
void xFXanimUVSetTranslation(const xVec3* trans);
void xFXanimUV2PSetTranslation(const xVec3* trans);
void xFXanimUVSetScale(const xVec3* scale);
void xFXanimUV2PSetScale(const xVec3* scale);
void xFXanimUVSetAngle(float32 angle);
void xFXanimUV2PSetAngle(float32 angle);
RpAtomic* xFXanimUVAtomicSetup(RpAtomic* atomic);

#endif