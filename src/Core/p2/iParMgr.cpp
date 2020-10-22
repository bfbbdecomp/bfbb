#include "iParMgr.h"

#include <types.h>

// iParMgrInit()
#pragma GLOBAL_ASM("asm/Core/p2/iParMgr.s", "iParMgrInit__Fv")

// iParMgrUpdate(float)
#pragma GLOBAL_ASM("asm/Core/p2/iParMgr.s", "iParMgrUpdate__Ff")

// iParMgrRender()
#pragma GLOBAL_ASM("asm/Core/p2/iParMgr.s", "iParMgrRender__Fv")

// iParMgrRenderParSys_Sprite(void*,xParGroup*)
#pragma GLOBAL_ASM("asm/Core/p2/iParMgr.s", "iParMgrRenderParSys_Sprite__FPvP9xParGroup")

// iRenderInit()
#pragma GLOBAL_ASM("asm/Core/p2/iParMgr.s", "iRenderInit__Fv")

// iRenderSetCameraViewMatrix(xMat4x3*)
#pragma GLOBAL_ASM("asm/Core/p2/iParMgr.s", "iRenderSetCameraViewMatrix__FP7xMat4x3")

// iRenderPushQuadStreak(xPar*,xParCmdTex*)
#pragma GLOBAL_ASM("asm/Core/p2/iParMgr.s", "iRenderPushQuadStreak__FP4xParP10xParCmdTex")

// iRenderPushFlat(xPar*,xParCmdTex*)
#pragma GLOBAL_ASM("asm/Core/p2/iParMgr.s", "iRenderPushFlat__FP4xParP10xParCmdTex")

// iRenderFlush()
#pragma GLOBAL_ASM("asm/Core/p2/iParMgr.s", "iRenderFlush__Fv")

// iRenderTrianglesImmediate(int,int,void*,int,unsigned short*,int)
#pragma GLOBAL_ASM("asm/Core/p2/iParMgr.s", "iRenderTrianglesImmediate__FiiPviPUsi")
