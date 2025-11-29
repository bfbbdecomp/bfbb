// RpCollBSPTree is part of the RpCollis plugin in RW 3.4 and 3.5, but it's not exposed in the public API.
// BFBB had full source code access to the RenderWare SDK and used RpCollBSPTree for some collision checks.
// These definitions are based on the ones found in the BFBB PS2 DWARF data.
// 
// Note: RpCollBSPTree was refactored as RpCollTree and added to the public API in RW 3.6.
// TSSM (SpongeBob Movie) and later games used RpCollTree instead of RpCollBSPTree.

#pragma once

#include <rpcollis.h>

typedef struct RpV3dGradient RpV3dGradient;
struct RpV3dGradient
{
    RwReal dydx;
    RwReal dzdx;
    RwReal dxdy;
    RwReal dzdy;
    RwReal dxdz;
    RwReal dydz;
};

typedef struct RpCollBSPBranchNode RpCollBSPBranchNode;
struct RpCollBSPBranchNode
{
    RwUInt16 type;
    RwUInt8 leftType;
    RwUInt8 rightType;
    RwUInt16 leftNode;
    RwUInt16 rightNode;
    RwReal leftValue;
    RwReal rightValue;
};

typedef struct RpCollBSPLeafNode RpCollBSPLeafNode;
struct RpCollBSPLeafNode
{
    RwUInt16 numPolygons;
    RwUInt16 firstPolygon;
};

typedef struct RpCollBSPTriangle RpCollBSPTriangle;
struct RpCollBSPTriangle
{
    RwUInt16 vertIndex[3];
    RwInt16 index;
};

typedef struct RpCollBSPTree RpCollBSPTree;
struct RpCollBSPTree
{
    RwUInt32 numLeafNodes;
    RpCollBSPBranchNode* branchNodes;
    RpCollBSPLeafNode* leafNodes;
    RwUInt8 pad[4];
};

typedef struct RpCollisionData RpCollisionData;
struct RpCollisionData
{
    RwInt32 flags;
    RpCollBSPTree* tree;
    RwInt32 numTriangles;
    RwUInt16* triangleMap;
};

#define RpCollisionGeometryGetData(_geometry) \
    (RWPLUGINOFFSET(RpCollisionData*, _geometry, _rpCollisionGeometryDataOffset) ? \
        *RWPLUGINOFFSET(RpCollisionData*, _geometry, _rpCollisionGeometryDataOffset) : \
        NULL)

#ifdef __cplusplus
extern "C"
{
#endif

extern RwInt32 _rpCollisionGeometryDataOffset;
extern RwInt32 _rpCollisionWorldSectorDataOffset;

#ifdef __cplusplus
}
#endif