#ifndef XCLUMPCOLL_H
#define XCLUMPCOLL_H

#include <types.h>

#include <rwcore.h>
#include <rpworld.h>

struct xClumpCollBSPBranchNode
{
    uint32 leftInfo;
    uint32 rightInfo;
    float32 leftValue;
    float32 rightValue;
};

struct xClumpCollBSPVertInfo
{
    uint16 atomIndex;
    uint16 meshVertIndex;
};

struct xClumpCollBSPTriangle
{
    union
    {
        xClumpCollBSPVertInfo i;
        RwV3d* p;
    } v;
    uint8 flags;
    uint8 platData;
    uint16 matIndex;
};

struct xClumpCollBSPTree
{
    uint32 numBranchNodes;
    xClumpCollBSPBranchNode* branchNodes;
    uint32 numTriangles;
    xClumpCollBSPTriangle* triangles;
};

void xClumpColl_InstancePointers(xClumpCollBSPTree* tree, RpClump* clump);

#endif