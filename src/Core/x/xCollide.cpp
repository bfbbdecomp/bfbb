#include "xCollide.h"

#include <types.h>

// func_8000F058
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xCollideGetCollsIdx__FPC7xCollisPC5xVec3PC7xMat3x3")

// func_8000F1C8
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xCollideInit__FP6xScene")

// func_8000F1E8
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsSphere__FPC7xSpherePC7xSphereP7xCollis")

// func_8000F350
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsBox__FPC7xSpherePC4xBoxP7xCollis")

// func_8000F474
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsOBB_nu__FPC7xSpherePC4xBoxPC7xMat4x3P7xCollis")

// func_8000F830
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "sphereHitsModelCB__FP14RpIntersectionP19RpCollisionTrianglefPv")

// func_8000F864
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsModel__FPC7xSpherePC14xModelInstanceP7xCollis")

// func_8000FA50
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xParabolaRecenter__FP9xParabolaf")

// func_8000FAD4
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xParabolaEnvCB__FP21xClumpCollBSPTrianglePv")

// func_8000FFE8
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xParabolaHitsEnv__FP9xParabolaPC4xEnvP7xCollis")

// func_80010228
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "__as__5RwV3dFRC5RwV3d")

// func_80010244
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "__as__6RwBBoxFRC6RwBBox")

// func_80010278
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "__as__7xCollisFRC7xCollis")

// func_8001031C
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xBoxHitsSphere__FPC4xBoxPC7xSphereP7xCollis")

// func_80010434
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "Mgc_BoxBoxTest__FPC4xBoxPC7xMat4x3PC4xBoxPC7xMat4x3")

// func_80010ED8
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xBoxHitsObb__FPC4xBoxPC4xBoxPC7xMat4x3P7xCollis")

// func_80010F48
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xCollideCalcTri__FRQ27xCollis8tri_dataRC14xModelInstanceRC5xVec3RC5xVec3")

// func_800114F4
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "render_tri__22_esc__2_unnamed_esc__2_xCollide_cpp_esc__2_FRQ27xCollis8tri_dataRC14xModelInstance")

// func_800114F8
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xCollisTriHit__FRCQ27xCollis8tri_dataRC14xModelInstance")

// func_80011774
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "_rpCollBSPTreeForAllCapsuleLeafNodeIntersections__FP13RpCollBSPTreeP6RwLinefP13RpV3dGradientPFiiPv_iPv")

// func_80011F1C
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "__as__8nodeInfoFRC8nodeInfo")

// func_80011F30
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "__as__6RwLineFRC6RwLine")

// func_80011F64
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSweptSpherePrepare__FP12xSweptSphereP5xVec3P5xVec3f")

// func_800121A0
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSweptSphereGetResults__FP12xSweptSphere")

// func_8001232C
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSweptSphereToTriangle__FP12xSweptSphereP5xVec3P5xVec3P5xVec3")

// func_80012B58
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xsqrtfast__FRff")

// func_80012B88
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "sqrtf__3stdFf")

// func_80012BEC
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSweptSphereToSphere__FP12xSweptSphereP7xSphere")

// func_80012D28
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSweptSphereToBox__FP12xSweptSphereP4xBoxP7xMat4x3")

// func_800136B8
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "SweptSphereHitsEnvCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv")

// func_80013740
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "SweptSphereLeafNodeCB__FP21xClumpCollBSPTrianglePv")

// func_800137E8
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSweptSphereToEnv__FP12xSweptSphereP4xEnv")

// func_80013960
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "SweptSphereModelCB__FiiPv")

// func_80013A20
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSweptSphereToModel__FP12xSweptSphereP8RpAtomicP11RwMatrixTag")

// func_80013CB4
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "SweptSphereHitsEntCB__FP6xSceneP5xRay3P7xQCDataP4xEntPv")

// func_80014088
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSweptSphereToScene__FP12xSweptSphereP6xSceneP4xEntUc")

// func_80014204
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSweptSphereToStatDyn__FP12xSweptSphereP6xSceneP4xEntUc")

// func_8001432C
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSweptSphereToNPC__FP12xSweptSphereP6xSceneP4xEntUc")

// func_80014430
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSweptSphereToNonMoving__FP12xSweptSphereP6xSceneP4xEntUc")

// func_80014594
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsCapsule__FRC5xVec3fRC5xVec3RC5xVec3f")

// func_80014710
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsBound__FRC7xSphereRC6xBound")

// func_80014784
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xOBBHitsOBB__FRC4xBoxRC7xMat4x3RC4xBoxRC7xMat4x3")

// func_80014E14
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsVCylinder__FRC5xVec3fRC5xVec3ff")

// func_80014F50
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsVCircle__FRC5xVec3fRC5xVec3f")

// func_80015058
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xVec3AddScaled__FP5xVec3PC5xVec3f")

// func_8001508C
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xVec3Cross__FP5xVec3PC5xVec3PC5xVec3")

// func_800150CC
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xVec3Length2__FPC5xVec3")

// func_800150F0
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xVec3Dist__FPC5xVec3PC5xVec3")

// func_80015140
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")

// func_800151A4
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xMat4x3OrthoInv__FP7xMat4x3PC7xMat4x3")

// func_800151F8
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xMat3x3LookVec3__FR7xMat3x3RC5xVec3")

// func_80015348
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xModelAnimCollRestore__FRC14xModelInstance")

// func_80015368
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xModelAnimCollApply__FRC14xModelInstance")

// func_800153C8
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xModelAnimCollDirty__FRC14xModelInstance")

// func_800153E0
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "__pl__5xVec3CFRC5xVec3")

// func_80015444
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "__apl__5xVec3FRC5xVec3")

// func_80015478
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "get_abs__5xVec3CFv")

// func_800154D8
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "set_abs__5xVec3Fv")

// func_8001550C
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "dot__5xVec3CFRC5xVec3")

// func_80015534
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "cross__5xVec3CFRC5xVec3")

// func_800155B0
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "normalize__5xVec3Fv")

// func_800155E8
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "__dv__5xVec3CFf")

// func_80015648
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xParabolaEvalVel__FPC9xParabolaP5xVec3f")

// func_800156AC
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xParabolaEvalPos__FPC9xParabolaP5xVec3f")

// func_8001572C
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsOBB__FRC7xSphereRC4xBoxRC7xMat4x3")

// func_80015750
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsOBB__FRC5xVec3fRC4xBoxRC7xMat4x3")

// func_800157A4
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsBox__FRC5xVec3fRC4xBox")

// func_80015838
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsBox__FRC7xSphereRC4xBox")

// func_8001585C
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsSphere__FRC7xSphereRC7xSphere")

// func_80015884
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsSphere__FRC5xVec3fRC5xVec3f")

// func_800158F4
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xQuickCullForRay__FP7xQCDataPC5xRay3")

// func_80015928
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xQuickCullForBox__FP7xQCDataPC4xBox")

// func_8001595C
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "length2__5xVec2CFv")

// func_80015974
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "__mi__5xVec2CFRC5xVec2")

// func_800159B0
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "__ami__5xVec2FRC5xVec2")
