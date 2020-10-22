#include "xCutscene.h"

#include <types.h>

// xCutscene_Init(void*)
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "xCutscene_Init__FPv")

// xCutscene_Create(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "xCutscene_Create__FUi")

// xCutscene_Destroy(xCutscene*)
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "xCutscene_Destroy__FP9xCutscene")

// xCutscene_LoadStart(xCutscene*)
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "xCutscene_LoadStart__FP9xCutscene")

// xCutsceneConvertBreak(float,xCutsceneBreak*,unsigned int,int)
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "xCutsceneConvertBreak__FfP14xCutsceneBreakUii")

// xCutscene_Update(xCutscene*,float)
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "xCutscene_Update__FP9xCutscenef")

// xCutscene_SetSpeed(xCutscene*,float)
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "xCutscene_SetSpeed__FP9xCutscenef")

// xlog(float)
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "xlog__Ff")

// std::logf(float)
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "logf__3stdFf")

// xCutscene_SetCamera(xCutscene*,xCamera*)
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "xCutscene_SetCamera__FP9xCutsceneP7xCamera")

// xcsCalcAnimMatrices(RwMatrixTag*,RpAtomic*,xCutsceneAnimHdr*,float,unsigne d int)
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "xcsCalcAnimMatrices__FP11RwMatrixTagP8RpAtomicP16xCutsceneAnimHdrfUi")

// JDeltaEval(RpAtomic*,void*,void*,float)
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "JDeltaEval__FP8RpAtomicPvPvf")

// xCutscene_Render(xCutscene*,xEnt**,int*,float*)
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "xCutscene_Render__FP9xCutscenePP4xEntPiPf")

// xCutscene_CurrentCutscene()
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "xCutscene_CurrentCutscene__Fv")

// std::atan(float)
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "atan__3stdFf")

// std::atanf(float)
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "atanf__3stdFf")

// xVec3Lerp(xVec3*,const xVec3*,const xVec3*,float)
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "xVec3Lerp__FP5xVec3PC5xVec3PC5xVec3f")
