#include "xClumpColl.h"

#include <types.h>

U8 xClumpColl_FilterFlags = 0x04;

union IntersectionCallBack
{
    RpIntersectionCallBackWorldSector sectorCB;
    RpIntersectionCallBackWorldTriangle worldCB;
    RpIntersectionCallBackAtomic atomicCB;
};

struct CallBackParam
{
    RpIntersection* intersection;
    IntersectionCallBack u;
    void* data;
};

struct PolyLineTestParam
{
    RwV3d start;
    RpWorldSector* worldSector;
    RwV3d delta;
    xClumpCollV3dGradient grad;
    RwLine line;
    CallBackParam* cbParam;
};

struct PolyTestParam
{
    RwBBox bbox;
    RpWorldSector* worldSector;
    void* leafTestData;
    CallBackParam* cbParam;
};

struct TestSphere
{
    RwSphere* sphere;
    F32 recipRadius;
};

xClumpCollBSPTree* xClumpColl_StaticBufferInit(void* data, U32)
{
    U32* header = (U32*)data;
    U32 numBranchNodes = header[1];
    U32 numTriangles = header[2];
    xClumpCollBSPTree* tree = (xClumpCollBSPTree*)RwMalloc(sizeof(xClumpCollBSPTree));

    if (numBranchNodes)
    {
        tree->branchNodes = (xClumpCollBSPBranchNode*)(header + 3);
        tree->triangles = (xClumpCollBSPTriangle*)(tree->branchNodes + numBranchNodes);
    }
    else
    {
        tree->branchNodes = NULL;
        tree->triangles = (xClumpCollBSPTriangle*)(header + 3);
    }

    tree->numBranchNodes = numBranchNodes;
    tree->numTriangles = numTriangles;

    return tree;
}

void xClumpColl_InstancePointers(xClumpCollBSPTree* tree, RpClump* clump)
{
    return;
}

xClumpCollBSPTree*
xClumpColl_ForAllBoxLeafNodeIntersections(xClumpCollBSPTree* tree, RwBBox* box,
                                          xClumpCollIntersectionCallback callBack, void* data)
{
    S32 nStack;
    nodeInfo nodeStack[33];
    nodeInfo node;

    node.type = tree->branchNodes ? 2 : 1;
    node.index = 0;
    nStack = 0;

    while (nStack >= 0)
    {
        if (node.type == 1)
        {
            xClumpCollBSPTriangle* tris = tree->triangles + node.index;
            if (!callBack(tris, data))
                return NULL;

            node = nodeStack[nStack];
            nStack--;
        }
        else
        {
            xClumpCollBSPBranchNode* branch = tree->branchNodes + node.index;

            if (*((RwReal*)((U8*)&box->inf + (branch->leftInfo & 0xC))) < branch->leftValue)
            {
                node.type = branch->leftInfo & 0x3;
                node.index = branch->leftInfo >> 12;

                if (*(RwReal*)((U8*)&box->sup + (branch->leftInfo & 0xC)) >= branch->rightValue)
                {
                    nStack++;
                    nodeStack[nStack].type = branch->rightInfo & 0x3;
                    nodeStack[nStack].index = branch->rightInfo >> 12;
                }
            }
            else
            {
                node.type = branch->rightInfo & 0x3;
                node.index = branch->rightInfo >> 12;
            }
        }
    }

    return tree;
}

xClumpCollBSPTree*
xClumpColl_ForAllLineLeafNodeIntersections(xClumpCollBSPTree* tree, RwLine* line,
                                           xClumpCollV3dGradient* grad,
                                           xClumpCollIntersectionCallback callBack, void* data)
{
    S32 nStack;
    nodeInfo nodeStack[33];
    nodeInfo node;
    RwLine lineStack[33];
    RwLine currLine;

    node.type = tree->branchNodes ? 2 : 1;
    node.index = 0;
    currLine = *line;
    nStack = 0;

    while (nStack >= 0)
    {
        if (node.type == 1)
        {
            xClumpCollBSPTriangle* tris = tree->triangles + node.index;
            if (!callBack(tris, data))
                return NULL;

            node = nodeStack[nStack];
            currLine = lineStack[nStack];
            nStack--;
        }
        else
        {
            RwSplitBits lStart, lEnd, rStart, rEnd;
            xClumpCollBSPBranchNode* branch = tree->branchNodes + node.index;

            lStart.nReal =
                *(RwReal*)((U8*)&currLine.start + (branch->leftInfo & 0xC)) - branch->leftValue;
            lEnd.nReal =
                *(RwReal*)((U8*)&currLine.end + (branch->leftInfo & 0xC)) - branch->leftValue;
            rStart.nReal =
                *(RwReal*)((U8*)&currLine.start + (branch->leftInfo & 0xC)) - branch->rightValue;
            rEnd.nReal =
                *(RwReal*)((U8*)&currLine.end + (branch->leftInfo & 0xC)) - branch->rightValue;

            if (rStart.nInt < 0 && rEnd.nInt < 0)
            {
                node.type = branch->leftInfo & 0x3;
                node.index = branch->leftInfo >> 12;
            }
            else if (lStart.nInt >= 0 && lEnd.nInt >= 0)
            {
                node.type = branch->rightInfo & 0x3;
                node.index = branch->rightInfo >> 12;
            }
            else if (!((lStart.nInt ^ lEnd.nInt) & 0x80000000) &&
                     !((rStart.nInt ^ rEnd.nInt) & 0x80000000))
            {
                if (rStart.nInt < rEnd.nInt)
                {
                    nStack++;
                    nodeStack[nStack].type = branch->rightInfo & 0x3;
                    nodeStack[nStack].index = branch->rightInfo >> 12;
                    lineStack[nStack].start = currLine.start;
                    lineStack[nStack].end = currLine.end;
                    node.type = branch->leftInfo & 0x3;
                    node.index = branch->leftInfo >> 12;
                }
                else
                {
                    nStack++;
                    nodeStack[nStack].type = branch->leftInfo & 0x3;
                    nodeStack[nStack].index = branch->leftInfo >> 12;
                    lineStack[nStack].start = currLine.start;
                    lineStack[nStack].end = currLine.end;
                    node.type = branch->rightInfo & 0x3;
                    node.index = branch->rightInfo >> 12;
                }
            }
            else if (((lStart.nInt ^ lEnd.nInt) & 0x80000000) && rStart.nInt >= 0 && rEnd.nInt >= 0)
            {
                RwV3d vTmp;
                F32 delta;
                switch (branch->leftInfo & 0xC)
                {
                case 0:
                    delta = branch->leftValue - currLine.start.x;
                    vTmp.x = branch->leftValue;
                    vTmp.y = currLine.start.y + grad->dydx * delta;
                    vTmp.z = currLine.start.z + grad->dzdx * delta;
                    break;
                case 4:
                    delta = branch->leftValue - currLine.start.y;
                    vTmp.x = currLine.start.x + grad->dxdy * delta;
                    vTmp.y = branch->leftValue;
                    vTmp.z = currLine.start.z + grad->dzdy * delta;
                    break;
                case 8:
                    delta = branch->leftValue - currLine.start.z;
                    vTmp.x = currLine.start.x + grad->dxdz * delta;
                    vTmp.y = currLine.start.y + grad->dydz * delta;
                    vTmp.z = branch->leftValue;
                    break;
                }
                if (lStart.nInt < 0)
                {
                    nStack++;
                    nodeStack[nStack].type = branch->rightInfo & 0x3;
                    nodeStack[nStack].index = branch->rightInfo >> 12;
                    lineStack[nStack].start = currLine.start;
                    lineStack[nStack].end = currLine.end;
                    node.type = branch->leftInfo & 0x3;
                    node.index = branch->leftInfo >> 12;
                    currLine.end = vTmp;
                }
                else
                {
                    nStack++;
                    nodeStack[nStack].type = branch->leftInfo & 0x3;
                    nodeStack[nStack].index = branch->leftInfo >> 12;
                    lineStack[nStack].start = vTmp;
                    lineStack[nStack].end = currLine.end;
                    node.type = branch->rightInfo & 0x3;
                    node.index = branch->rightInfo >> 12;
                }
            }
            else if (((rStart.nInt ^ rEnd.nInt) & 0x80000000) && lStart.nInt < 0 && lEnd.nInt < 0)
            {
                RwV3d vTmp;
                F32 delta;
                switch (branch->leftInfo & 0xC)
                {
                case 0:
                    delta = branch->rightValue - currLine.start.x;
                    vTmp.x = branch->rightValue;
                    vTmp.y = currLine.start.y + grad->dydx * delta;
                    vTmp.z = currLine.start.z + grad->dzdx * delta;
                    break;
                case 4:
                    delta = branch->rightValue - currLine.start.y;
                    vTmp.x = currLine.start.x + grad->dxdy * delta;
                    vTmp.y = branch->rightValue;
                    vTmp.z = currLine.start.z + grad->dzdy * delta;
                    break;
                case 8:
                    delta = branch->rightValue - currLine.start.z;
                    vTmp.x = currLine.start.x + grad->dxdz * delta;
                    vTmp.y = currLine.start.y + grad->dydz * delta;
                    vTmp.z = branch->rightValue;
                    break;
                }
                if (rStart.nInt < 0)
                {
                    nStack++;
                    nodeStack[nStack].type = branch->rightInfo & 0x3;
                    nodeStack[nStack].index = branch->rightInfo >> 12;
                    lineStack[nStack].start = vTmp;
                    lineStack[nStack].end = currLine.end;
                    node.type = branch->leftInfo & 0x3;
                    node.index = branch->leftInfo >> 12;
                }
                else
                {
                    nStack++;
                    nodeStack[nStack].type = branch->leftInfo & 0x3;
                    nodeStack[nStack].index = branch->leftInfo >> 12;
                    lineStack[nStack].start = currLine.start;
                    lineStack[nStack].end = currLine.end;
                    node.type = branch->rightInfo & 0x3;
                    node.index = branch->rightInfo >> 12;
                    currLine.end = vTmp;
                }
            }
            else
            {
                RwV3d vLeft;
                RwV3d vRight;
                {
                    F32 delta;
                    switch (branch->leftInfo & 0xC)
                    {
                    case 0:
                        delta = branch->leftValue - currLine.start.x;
                        vLeft.x = branch->leftValue;
                        vLeft.y = currLine.start.y + grad->dydx * delta;
                        vLeft.z = currLine.start.z + grad->dzdx * delta;
                        break;
                    case 4:
                        delta = branch->leftValue - currLine.start.y;
                        vLeft.x = currLine.start.x + grad->dxdy * delta;
                        vLeft.y = branch->leftValue;
                        vLeft.z = currLine.start.z + grad->dzdy * delta;
                        break;
                    case 8:
                        delta = branch->leftValue - currLine.start.z;
                        vLeft.x = currLine.start.x + grad->dxdz * delta;
                        vLeft.y = currLine.start.y + grad->dydz * delta;
                        vLeft.z = branch->leftValue;
                        break;
                    }
                }
                {
                    F32 delta;
                    switch (branch->leftInfo & 0xC)
                    {
                    case 0:
                        delta = branch->rightValue - currLine.start.x;
                        vRight.x = branch->rightValue;
                        vRight.y = currLine.start.y + grad->dydx * delta;
                        vRight.z = currLine.start.z + grad->dzdx * delta;
                        break;
                    case 4:
                        delta = branch->rightValue - currLine.start.y;
                        vRight.x = currLine.start.x + grad->dxdy * delta;
                        vRight.y = branch->rightValue;
                        vRight.z = currLine.start.z + grad->dzdy * delta;
                        break;
                    case 8:
                        delta = branch->rightValue - currLine.start.z;
                        vRight.x = currLine.start.x + grad->dxdz * delta;
                        vRight.y = currLine.start.y + grad->dydz * delta;
                        vRight.z = branch->rightValue;
                        break;
                    }
                }
                if (lStart.nInt < 0)
                {
                    nStack++;
                    nodeStack[nStack].type = branch->rightInfo & 0x3;
                    nodeStack[nStack].index = branch->rightInfo >> 12;
                    lineStack[nStack].start = vRight;
                    lineStack[nStack].end = currLine.end;
                    node.type = branch->leftInfo & 0x3;
                    node.index = branch->leftInfo >> 12;
                    currLine.end = vLeft;
                }
                else
                {
                    nStack++;
                    nodeStack[nStack].type = branch->leftInfo & 0x3;
                    nodeStack[nStack].index = branch->leftInfo >> 12;
                    lineStack[nStack].start = vLeft;
                    lineStack[nStack].end = currLine.end;
                    node.type = branch->rightInfo & 0x3;
                    node.index = branch->rightInfo >> 12;
                    currLine.end = vRight;
                }
            }
        }
    }

    return tree;
}

xClumpCollBSPTree*
xClumpColl_ForAllCapsuleLeafNodeIntersections(xClumpCollBSPTree* tree, RwLine* line, F32 radius,
                                              xClumpCollV3dGradient* grad,
                                              xClumpCollIntersectionCallback callBack, void* data)
{
    S32 nStack;
    nodeInfo nodeStack[33];
    nodeInfo node;
    RwLine lineStack[33];
    RwLine currLine;

    node.type = tree->branchNodes ? 2 : 1;
    node.index = 0;
    currLine = *line;
    nStack = 0;

    while (nStack >= 0)
    {
        if (node.type == 1)
        {
            xClumpCollBSPTriangle* tris = tree->triangles + node.index;
            if (!callBack(tris, data))
                return NULL;

            node = nodeStack[nStack];
            currLine = lineStack[nStack];
            nStack--;
        }
        else
        {
            RwSplitBits lStart, lEnd, rStart, rEnd;
            xClumpCollBSPBranchNode* branch = tree->branchNodes + node.index;

            lStart.nReal = *(RwReal*)((U8*)&currLine.start + (branch->leftInfo & 0xC)) -
                           (branch->leftValue + radius);
            lEnd.nReal = *(RwReal*)((U8*)&currLine.end + (branch->leftInfo & 0xC)) -
                         (branch->leftValue + radius);
            rStart.nReal = *(RwReal*)((U8*)&currLine.start + (branch->leftInfo & 0xC)) -
                           (branch->rightValue - radius);
            rEnd.nReal = *(RwReal*)((U8*)&currLine.end + (branch->leftInfo & 0xC)) -
                         (branch->rightValue - radius);

            if (rStart.nInt < 0 && rEnd.nInt < 0)
            {
                node.type = branch->leftInfo & 0x3;
                node.index = branch->leftInfo >> 12;
            }
            else if (lStart.nInt >= 0 && lEnd.nInt >= 0)
            {
                node.type = branch->rightInfo & 0x3;
                node.index = branch->rightInfo >> 12;
            }
            else if (!((lStart.nInt ^ lEnd.nInt) & 0x80000000) &&
                     !((rStart.nInt ^ rEnd.nInt) & 0x80000000))
            {
                if (rStart.nInt < rEnd.nInt)
                {
                    nStack++;
                    nodeStack[nStack].type = branch->rightInfo & 0x3;
                    nodeStack[nStack].index = branch->rightInfo >> 12;
                    lineStack[nStack].start = currLine.start;
                    lineStack[nStack].end = currLine.end;
                    node.type = branch->leftInfo & 0x3;
                    node.index = branch->leftInfo >> 12;
                }
                else
                {
                    nStack++;
                    nodeStack[nStack].type = branch->leftInfo & 0x3;
                    nodeStack[nStack].index = branch->leftInfo >> 12;
                    lineStack[nStack].start = currLine.start;
                    lineStack[nStack].end = currLine.end;
                    node.type = branch->rightInfo & 0x3;
                    node.index = branch->rightInfo >> 12;
                }
            }
            else if (((lStart.nInt ^ lEnd.nInt) & 0x80000000) && rStart.nInt >= 0 && rEnd.nInt >= 0)
            {
                RwV3d vTmp;
                F32 delta;
                switch (branch->leftInfo & 0xC)
                {
                case 0:
                    delta = branch->leftValue - currLine.start.x;
                    vTmp.x = branch->leftValue;
                    vTmp.y = currLine.start.y + grad->dydx * delta;
                    vTmp.z = currLine.start.z + grad->dzdx * delta;
                    break;
                case 4:
                    delta = branch->leftValue - currLine.start.y;
                    vTmp.x = currLine.start.x + grad->dxdy * delta;
                    vTmp.y = branch->leftValue;
                    vTmp.z = currLine.start.z + grad->dzdy * delta;
                    break;
                case 8:
                    delta = branch->leftValue - currLine.start.z;
                    vTmp.x = currLine.start.x + grad->dxdz * delta;
                    vTmp.y = currLine.start.y + grad->dydz * delta;
                    vTmp.z = branch->leftValue;
                    break;
                }
                if (lStart.nInt < 0)
                {
                    nStack++;
                    nodeStack[nStack].type = branch->rightInfo & 0x3;
                    nodeStack[nStack].index = branch->rightInfo >> 12;
                    lineStack[nStack].start = currLine.start;
                    lineStack[nStack].end = currLine.end;
                    node.type = branch->leftInfo & 0x3;
                    node.index = branch->leftInfo >> 12;
                    currLine.end = vTmp;
                }
                else
                {
                    nStack++;
                    nodeStack[nStack].type = branch->leftInfo & 0x3;
                    nodeStack[nStack].index = branch->leftInfo >> 12;
                    lineStack[nStack].start = vTmp;
                    lineStack[nStack].end = currLine.end;
                    node.type = branch->rightInfo & 0x3;
                    node.index = branch->rightInfo >> 12;
                }
            }
            else if (((rStart.nInt ^ rEnd.nInt) & 0x80000000) && lStart.nInt < 0 && lEnd.nInt < 0)
            {
                RwV3d vTmp;
                F32 delta;
                switch (branch->leftInfo & 0xC)
                {
                case 0:
                    delta = branch->rightValue - currLine.start.x;
                    vTmp.x = branch->rightValue;
                    vTmp.y = currLine.start.y + grad->dydx * delta;
                    vTmp.z = currLine.start.z + grad->dzdx * delta;
                    break;
                case 4:
                    delta = branch->rightValue - currLine.start.y;
                    vTmp.x = currLine.start.x + grad->dxdy * delta;
                    vTmp.y = branch->rightValue;
                    vTmp.z = currLine.start.z + grad->dzdy * delta;
                    break;
                case 8:
                    delta = branch->rightValue - currLine.start.z;
                    vTmp.x = currLine.start.x + grad->dxdz * delta;
                    vTmp.y = currLine.start.y + grad->dydz * delta;
                    vTmp.z = branch->rightValue;
                    break;
                }
                if (rStart.nInt < 0)
                {
                    nStack++;
                    nodeStack[nStack].type = branch->rightInfo & 0x3;
                    nodeStack[nStack].index = branch->rightInfo >> 12;
                    lineStack[nStack].start = vTmp;
                    lineStack[nStack].end = currLine.end;
                    node.type = branch->leftInfo & 0x3;
                    node.index = branch->leftInfo >> 12;
                }
                else
                {
                    nStack++;
                    nodeStack[nStack].type = branch->leftInfo & 0x3;
                    nodeStack[nStack].index = branch->leftInfo >> 12;
                    lineStack[nStack].start = currLine.start;
                    lineStack[nStack].end = currLine.end;
                    node.type = branch->rightInfo & 0x3;
                    node.index = branch->rightInfo >> 12;
                    currLine.end = vTmp;
                }
            }
            else
            {
                RwV3d vLeft;
                RwV3d vRight;
                {
                    F32 delta;
                    switch (branch->leftInfo & 0xC)
                    {
                    case 0:
                        delta = branch->leftValue - currLine.start.x;
                        vLeft.x = branch->leftValue;
                        vLeft.y = currLine.start.y + grad->dydx * delta;
                        vLeft.z = currLine.start.z + grad->dzdx * delta;
                        break;
                    case 4:
                        delta = branch->leftValue - currLine.start.y;
                        vLeft.x = currLine.start.x + grad->dxdy * delta;
                        vLeft.y = branch->leftValue;
                        vLeft.z = currLine.start.z + grad->dzdy * delta;
                        break;
                    case 8:
                        delta = branch->leftValue - currLine.start.z;
                        vLeft.x = currLine.start.x + grad->dxdz * delta;
                        vLeft.y = currLine.start.y + grad->dydz * delta;
                        vLeft.z = branch->leftValue;
                        break;
                    }
                }
                {
                    F32 delta;
                    switch (branch->leftInfo & 0xC)
                    {
                    case 0:
                        delta = branch->rightValue - currLine.start.x;
                        vRight.x = branch->rightValue;
                        vRight.y = currLine.start.y + grad->dydx * delta;
                        vRight.z = currLine.start.z + grad->dzdx * delta;
                        break;
                    case 4:
                        delta = branch->rightValue - currLine.start.y;
                        vRight.x = currLine.start.x + grad->dxdy * delta;
                        vRight.y = branch->rightValue;
                        vRight.z = currLine.start.z + grad->dzdy * delta;
                        break;
                    case 8:
                        delta = branch->rightValue - currLine.start.z;
                        vRight.x = currLine.start.x + grad->dxdz * delta;
                        vRight.y = currLine.start.y + grad->dydz * delta;
                        vRight.z = branch->rightValue;
                        break;
                    }
                }
                if (lStart.nInt < 0)
                {
                    nStack++;
                    nodeStack[nStack].type = branch->rightInfo & 0x3;
                    nodeStack[nStack].index = branch->rightInfo >> 12;
                    lineStack[nStack].start = vRight;
                    lineStack[nStack].end = currLine.end;
                    node.type = branch->leftInfo & 0x3;
                    node.index = branch->leftInfo >> 12;
                    currLine.end = vLeft;
                }
                else
                {
                    nStack++;
                    nodeStack[nStack].type = branch->leftInfo & 0x3;
                    nodeStack[nStack].index = branch->leftInfo >> 12;
                    lineStack[nStack].start = vLeft;
                    lineStack[nStack].end = currLine.end;
                    node.type = branch->rightInfo & 0x3;
                    node.index = branch->rightInfo >> 12;
                    currLine.end = vRight;
                }
            }
        }
    }

    return tree;
}

static S32 LeafNodeLinePolyIntersect(xClumpCollBSPTriangle* triangles, void* data)
{
    PolyLineTestParam* isData = (PolyLineTestParam*)data;
    CallBackParam* cbParam = isData->cbParam;
    do
    {
        if (triangles->flags & xClumpColl_FilterFlags)
        {
            RwV3d *v0, *v1, *v2;
            F32 distance;
            S32 result;
            RwV3d edge1, edge2, tVec, pVec, qVec;
            F32 det;
            v0 = &triangles->v.p[0];
            if (triangles->flags & 0x2)
            {
                v1 = &triangles->v.p[2];
                v2 = &triangles->v.p[1];
            }
            else
            {
                v1 = &triangles->v.p[1];
                v2 = &triangles->v.p[2];
            }
            RwV3dSubMacro(&edge1, v1, v0);
            RwV3dSubMacro(&edge2, v2, v0);
            RwV3dCrossProductMacro(&pVec, &isData->delta, &edge2);
            det = RwV3dDotProductMacro(&edge1, &pVec);
            if (det < -1e-8f)
            {
                RwV3d edgetmp = edge1;
                edge1 = edge2;
                edge2 = edgetmp;
                RwV3dCrossProductMacro(&pVec, &isData->delta, &edge2);
                det = RwV3dDotProductMacro(&edge1, &pVec);
            }
            result = (det > 1e-8f);
            if (result)
            {
                F32 lo, hi, u, v;
                lo = 0.00001f * -det;
                hi = det - lo;
                RwV3dSubMacro(&tVec, &isData->start, v0);
                u = RwV3dDotProductMacro(&tVec, &pVec);
                result = (u >= lo && u <= hi);
                if (result)
                {
                    RwV3dCrossProductMacro(&qVec, &tVec, &edge1);
                    v = RwV3dDotProductMacro(&isData->delta, &qVec);
                    result = (v >= lo && u + v <= hi);
                    if (result)
                    {
                        distance = RwV3dDotProductMacro(&edge2, &qVec);
                        result = (distance >= lo && distance <= hi);
                        if (result)
                        {
                            distance /= det;
                        }
                    }
                }
            }
            if (result)
            {
                RpCollisionTriangle collisionTri;
                RwV3d vTmp, vTmp2;
                F32 recipLength, lengthSq;
                collisionTri.point = *v0;
                collisionTri.index = (RwInt32)triangles;
                collisionTri.vertices[0] = v0;
                collisionTri.vertices[1] = v1;
                collisionTri.vertices[2] = v2;
                RwV3dSubMacro(&vTmp, collisionTri.vertices[1], collisionTri.vertices[0]);
                RwV3dSubMacro(&vTmp2, collisionTri.vertices[2], collisionTri.vertices[0]);
                RwV3dCrossProductMacro(&collisionTri.normal, &vTmp, &vTmp2);
                lengthSq = RwV3dDotProductMacro(&collisionTri.normal, &collisionTri.normal);
                recipLength = _rwInvSqrt(lengthSq);
                RwV3dScaleMacro(&collisionTri.normal, &collisionTri.normal, recipLength);
                if (!cbParam->u.worldCB(cbParam->intersection, NULL, &collisionTri, distance,
                                        cbParam->data))
                {
                    return 0;
                }
            }
        }
    } while ((triangles++)->flags & 0x1);
    return 1;
}

static S32 LeafNodeSpherePolyIntersect(xClumpCollBSPTriangle* triangles, void* data)
{
    PolyTestParam* isData = (PolyTestParam*)data;
    CallBackParam* cbParam = isData->cbParam;
    TestSphere* testSphere = (TestSphere*)isData->leafTestData;
    do
    {
        if (triangles->flags & xClumpColl_FilterFlags)
        {
            RwV3d *v0, *v1, *v2;
            F32 distance;
            RpCollisionTriangle collisionTri;
            v0 = &triangles->v.p[0];
            if (triangles->flags & 0x2)
            {
                v1 = &triangles->v.p[2];
                v2 = &triangles->v.p[1];
            }
            else
            {
                v1 = &triangles->v.p[1];
                v2 = &triangles->v.p[2];
            }
            if (RtIntersectionSphereTriangle(testSphere->sphere, v0, v1, v2, &collisionTri.normal,
                                             &distance))
            {
                collisionTri.point = *v0;
                collisionTri.index = (RwInt32)triangles;
                collisionTri.vertices[0] = v0;
                collisionTri.vertices[1] = v1;
                collisionTri.vertices[2] = v2;
                distance *= testSphere->recipRadius;
                if (!cbParam->u.worldCB(cbParam->intersection, NULL, &collisionTri, distance,
                                        cbParam->data))
                {
                    return 0;
                }
            }
        }
    } while ((triangles++)->flags & 0x1);
    return 1;
}

static S32 LeafNodeBoxPolyIntersect(xClumpCollBSPTriangle* triangles, void* data)
{
    PolyTestParam* isData = (PolyTestParam*)data;
    CallBackParam* cbParam = isData->cbParam;
    do
    {
        if (triangles->flags & xClumpColl_FilterFlags)
        {
            RwV3d *v0, *v1, *v2;
            v0 = &triangles->v.p[0];
            if (triangles->flags & 0x2)
            {
                v1 = &triangles->v.p[2];
                v2 = &triangles->v.p[1];
            }
            else
            {
                v1 = &triangles->v.p[1];
                v2 = &triangles->v.p[2];
            }
            if (RtIntersectionBBoxTriangle(&isData->bbox, v0, v1, v2))
            {
                RpCollisionTriangle collisionTri;
                RwV3d vTmp, vTmp2;

                collisionTri.point = *v0;
                collisionTri.index = (RwInt32)triangles;
                RwV3dSubMacro(&vTmp, v1, v0);
                RwV3dSubMacro(&vTmp2, v2, v0);
                RwV3dCrossProductMacro(&collisionTri.normal, &vTmp, &vTmp2);

                F32 lengthSq = RwV3dDotProductMacro(&collisionTri.normal, &collisionTri.normal);
                F32 recipLength = _rwInvSqrt(lengthSq);

                RwV3dScaleMacro(&collisionTri.normal, &collisionTri.normal, recipLength);

                collisionTri.vertices[0] = v0;
                collisionTri.vertices[1] = v1;
                collisionTri.vertices[2] = v2;

                if (!cbParam->u.worldCB(cbParam->intersection, NULL, &collisionTri, 0.0f,
                                        cbParam->data))
                {
                    return 0;
                }
            }
        }
    } while ((triangles++)->flags & 0x1);
    return 1;
}

xClumpCollBSPTree* xClumpColl_ForAllIntersections(xClumpCollBSPTree* tree,
                                                  RpIntersection* intersection,
                                                  RpIntersectionCallBackWorldTriangle callBack,
                                                  void* data)
{
    CallBackParam cbParam;
    cbParam.intersection = intersection;
    cbParam.u.worldCB = callBack;
    cbParam.data = data;

    switch (intersection->type)
    {
        case rpINTERSECTPOINT:
            return NULL;
        case rpINTERSECTLINE:
        {
            PolyLineTestParam isData;
            RwLine* line = &intersection->t.line;
            F32 recip;

            isData.start = line->start;
            RwV3dSubMacro(&isData.delta, &line->end, &line->start);
            isData.cbParam = &cbParam;
            isData.line = *line;

            recip = (isData.delta.x != 0.0f) ? (1.0f / isData.delta.x) : 0.0f;
            isData.grad.dydx = isData.delta.y * recip;
            isData.grad.dzdx = isData.delta.z * recip;

            recip = (isData.delta.y != 0.0f) ? (1.0f / isData.delta.y) : 0.0f;
            isData.grad.dxdy = isData.delta.x * recip;
            isData.grad.dzdy = isData.delta.z * recip;

            recip = (isData.delta.z != 0.0f) ? (1.0f / isData.delta.z) : 0.0f;
            isData.grad.dxdz = isData.delta.x * recip;
            isData.grad.dydz = isData.delta.y * recip;

            xClumpColl_ForAllLineLeafNodeIntersections(tree, line, &isData.grad,
                                                    LeafNodeLinePolyIntersect, &isData);

            return tree;
        }
        case rpINTERSECTSPHERE:
        {
            PolyTestParam isData;
            TestSphere testSphere;

            isData.bbox.inf = isData.bbox.sup = intersection->t.sphere.center;
            isData.bbox.inf.x -= intersection->t.sphere.radius;
            isData.bbox.inf.y -= intersection->t.sphere.radius;
            isData.bbox.inf.z -= intersection->t.sphere.radius;
            isData.bbox.sup.x += intersection->t.sphere.radius;
            isData.bbox.sup.y += intersection->t.sphere.radius;
            isData.bbox.sup.z += intersection->t.sphere.radius;

            testSphere.sphere = &intersection->t.sphere;

            isData.leafTestData = &testSphere;
            isData.cbParam = &cbParam;

            testSphere.recipRadius = 1.0f / testSphere.sphere->radius;

            xClumpColl_ForAllBoxLeafNodeIntersections(tree, &isData.bbox, LeafNodeSpherePolyIntersect,
                                                    &isData);

            return tree;
        }
        case rpINTERSECTBOX:
        {
            PolyTestParam isData;

            isData.bbox = intersection->t.box;
            isData.cbParam = &cbParam;

            xClumpColl_ForAllBoxLeafNodeIntersections(tree, &isData.bbox, LeafNodeBoxPolyIntersect,
                                                    &isData);

            return tree;
        }
    }

    return NULL;
}
