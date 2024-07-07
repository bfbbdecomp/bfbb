#include "xClumpColl.h"

#include <types.h>

xClumpCollBSPTree* xClumpColl_StaticBufferInit(void* data, U32 param_2)
{
    U32* header; // unused

    U32 numBranchNodes = *(U32*)((int)data + 4);
    U32 numTriangles = *(U32*)((int)data + 8);

    xClumpCollBSPTree* tree = (xClumpCollBSPTree*)RwMalloc(16);
    if (numBranchNodes != 0)
    {
        tree->branchNodes = (xClumpCollBSPBranchNode*)((int)data + 12);
        tree->triangles = (xClumpCollBSPTriangle*)(tree->branchNodes + numBranchNodes);
    }
    else
    {
        tree->branchNodes = NULL;
        tree->triangles = (xClumpCollBSPTriangle*)((int)data + 12);
    }
    tree->numBranchNodes = numBranchNodes;
    tree->numTriangles = numTriangles;
    return tree;
}

void xClumpColl_InstancePointers(xClumpCollBSPTree* tree, RpClump* clump)
{
    S32 i;
    S32 numAtom;
    TempAtomicList* atomicList;
    TempAtomicList* iterList;
    TempAtomicList* alist;
    S32 vertIndex;
    S32 numMeshes;
    S32 meshIndex;
    RpMesh* mesh;
}

#if 0
//WIP
xClumpCollBSPTree*
xClumpColl_ForAllBoxLeafNodeIntersections(xClumpCollBSPTree* tree, RwBBox* box,
                                          S32 (*callBack)(xClumpCollBSPTriangle*, void*),
                                          void* data)
{
    S32 nStack;
    nodeInfo nodeStack[33];
    xClumpCollBSPBranchNode* branch;

    U32 uVar1;
    int iVar2;
    int iVar3 = 0;
    U32 local_124 = 0;
    U32 local_128 = 1 - ((-(int)tree->branchNodes | (int)tree->branchNodes) >> 31);
    while (true)
    {
        while (true)
        {
            if (iVar3 < 0)
            {
                return tree;
            }
            if (local_128 == 1)
                break;
            branch = tree->branchNodes + local_124;
            uVar1 = branch->leftInfo;
            if ((float)branch->leftValue <= *(float*)((int)&(box->inf).x + (uVar1 & 0xc)))
            {
                local_128 = branch->rightInfo & 3;
                local_124 = branch->rightInfo >> 0xc;
            }
            else
            {
                local_128 = uVar1 & 3;
                local_124 = uVar1 >> 0xc;
                if ((float)branch->rightValue <= *(float*)((int)&(box->sup).x + (uVar1 & 0xc)))
                {
                    iVar3 = iVar3 + 1;
                    *(int*)&nodeStack[iVar3 * 2] = branch->rightInfo & 3;
                    *(int*)&nodeStack[iVar3 * 2 + 1] = branch->rightInfo >> 0xc;
                }
            }
        }
        iVar2 = ((*callBack)(tree->triangles + local_124, data));
        if (iVar2 == 0)
            break;
        *(U32*)&nodeStack[iVar3 * 2] = local_128;
        iVar3--;
    }
    return 0;
}
#endif
