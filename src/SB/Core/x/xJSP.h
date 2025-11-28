#ifndef XJSP_H
#define XJSP_H

#include <types.h>
#include <rwcore.h>
#include <rpworld.h>
#include "xClumpColl.h"

struct __rwMark
{
    U32 type;
    U32 length;
    U32 libraryID;
};

struct xJSPNodeInfo
{
    S32 originalMatIndex;
    S32 nodeFlags;
};

struct xJSPHeader
{
    char idtag[4];
    U32 version;
    U32 jspNodeCount;
    RpClump* clump;
    xClumpCollBSPTree* colltree;
    xJSPNodeInfo* jspNodeList;
};

struct xJSPHeaderGC : xJSPHeader
{
    U32 stripVecCount;
    RwV3d* stripVecList;
};

void xJSP_MultiStreamRead(void* data, U32 size, xJSPHeader** jsp);
void xJSP_Destroy(xJSPHeader* jsp);

#endif
