#ifndef XPARSYS_H
#define XPARSYS_H

#include "xBase.h"
#include "xParCmd.h"
#include "xParGroup.h"

#include <rwcore.h>

struct xScene;

struct xParSysAsset : xBaseAsset
{
    uint32 type;
    uint32 parentParSysID;
    uint32 textureID;
    uint8 parFlags;
    uint8 priority;
    uint16 maxPar;
    uint8 renderFunc;
    uint8 renderSrcBlendMode;
    uint8 renderDstBlendMode;
    uint8 cmdCount;
    uint32 cmdSize;
};

struct xParSys : xBase
{
    xParSysAsset* tasset;
    uint32 cmdCount;
    xParCmd* cmd;
    xParSys* parent;
    xParGroup* group;
    uint8 visible;
    RwTexture* txtr_particle;
};

void xParSysInit(void* b, void* tasset);
void xParSysSetup(xParSys* t);
void xParSysExit(xParSys* t);
void xParSysRender(xBase* b);
void xParSysUpdate(xBase* to, xScene*, float32 dt);

#endif
