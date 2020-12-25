#ifndef XJSP_H
#define XJSP_H

#include "xClumpColl.h"

#include <rwcore.h>
#include <rpworld.h>

struct xJSPNodeInfo
{
    int32 originalMatIndex;
    int32 nodeFlags;
};

struct xJSPHeader
{
    int8 idtag[4];
    uint32 version;
    uint32 jspNodeCount;
    RpClump* clump;
    xClumpCollBSPTree* colltree;
    xJSPNodeInfo* jspNodeList;
};

#endif