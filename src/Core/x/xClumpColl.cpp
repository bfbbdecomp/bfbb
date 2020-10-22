#include "xClumpColl.h"

#include <types.h>

// xClumpColl_StaticBufferInit(void*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xClumpColl.s", "xClumpColl_StaticBufferInit__FPvUi")

// xClumpColl_InstancePointers(xClumpCollBSPTree*,RpClump*)
#pragma GLOBAL_ASM("asm/Core/x/xClumpColl.s", "xClumpColl_InstancePointers__FP17xClumpCollBSPTreeP7RpClump")

// xClumpColl_ForAllBoxLeafNodeIntersections(xClumpCollBSPTree*,RwBBox*,int (*)(xClumpCollBSPTriangle*, void*),void*)
#pragma GLOBAL_ASM("asm/Core/x/xClumpColl.s", "xClumpColl_ForAllBoxLeafNodeIntersections__FP17xClumpCollBSPTreeP6RwBBoxPFP21xClumpCollBSPTrianglePv_iPv")

// xClumpColl_ForAllLineLeafNodeIntersections(xClumpCollBSPTree*,RwLine*,xClu mpCollV3dGradient*,int (*)(xClumpCollBSPTriangle*, void*),void*)
#pragma GLOBAL_ASM("asm/Core/x/xClumpColl.s", "xClumpColl_ForAllLineLeafNodeIntersections__FP17xClumpCollBSPTreeP6RwLineP21xClumpCollV3dGradientPFP21xClumpCollBSPTrianglePv_iPv")

// xClumpColl_ForAllCapsuleLeafNodeIntersections(xClumpCollBSPTree*,RwLine*,f loat,xClumpCollV3dGradient*,int (*)(xClumpCollBSPTriangle*, void*),void*)
#pragma GLOBAL_ASM("asm/Core/x/xClumpColl.s", "xClumpColl_ForAllCapsuleLeafNodeIntersections__FP17xClumpCollBSPTreeP6RwLinefP21xClumpCollV3dGradientPFP21xClumpCollBSPTrianglePv_iPv")

// xClumpColl_ForAllIntersections(xClumpCollBSPTree*,RpIntersection*,RpCollis ionTriangle* (*)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float, void*),void*)
#pragma GLOBAL_ASM("asm/Core/x/xClumpColl.s", "xClumpColl_ForAllIntersections__FP17xClumpCollBSPTreeP14RpIntersectionPFP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv_P19RpCollisionTrianglePv")
