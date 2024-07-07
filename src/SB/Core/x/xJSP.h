#ifndef XJSP_H
#define XJSP_H

#include <types.h>
#include <rwcore.h>
#include <rpworld.h>
#include "xClumpColl.h"

struct xJSPNodeInfo
{
    S32 originalMatIndex;
    S32 nodeFlags;
};

struct xJSPHeader
{
    S8 idtag[4];
    U32 version;
    U32 jspNodeCount;
    RpClump* clump;
    xClumpCollBSPTree* colltree;
    xJSPNodeInfo* jspNodeList;
};

RpMesh* AddMeshCB(RpMesh* mesh, RpMeshHeader* header, RwV3d** param_3);
void xJSP_MultiStreamRead(void* data, U32 size, xJSPHeader** jsp);

#endif
