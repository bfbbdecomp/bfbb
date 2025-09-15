#ifndef XPARSYS_H
#define XPARSYS_H

#include "xBase.h"
#include "xParCmd.h"
#include "xParGroup.h"
#include "iParMgr.h"
#include "xstransvc.h"

#include <rwcore.h>

struct xScene;

struct xParSysAsset : xBaseAsset
{
    U32 type;
    U32 parentParSysID;
    U32 textureID;
    U8 parFlags;
    U8 priority;
    U16 maxPar;
    U8 renderFunc;
    U8 renderSrcBlendMode;
    U8 renderDstBlendMode;
    U8 cmdCount;
    U32 cmdSize;
};

struct xParSys : xBase
{
    xParSysAsset* tasset;
    U32 cmdCount;
    xParCmd* cmd;
    xParSys* parent;
    xParGroup* group;
    U8 visible;
    RwTexture* txtr_particle;
};

struct xParSysInfo
{
    S32 type;
    void (*func)(void*, class xParGroup*);
};

void xParCmdTexInit(xParCmdTex* tex);
void xParSysInit(void* b, void* tasset);
void xParSysInit(xBase* b, xParSysAsset* tasset);
void xParSysSetup(xParSys* t);
void xParSysExit(xParSys* t);
void xParSysRender(xBase* b);
S32 xParSysEventCB(xBase*, xBase*, U32, F32*, xBase*);
void xParSysUpdate(xBase* to, xScene*, F32 dt);

WEAK U8 using_ptank_render(const xParSysAsset&);

#endif
