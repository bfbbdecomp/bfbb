#include "xParEmitter.h"

#include <types.h>

// add_tweaks(xParEmitter&)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitter.s", "add_tweaks__FR11xParEmitter")

// xParInterpConvertInterpMode(xParInterp*)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitter.s", "xParInterpConvertInterpMode__FP10xParInterp")

// xParEmitterInit(xBase*,xParEmitterAsset*)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitter.s", "xParEmitterInit__FP5xBaseP16xParEmitterAsset")

// xParEmitterSetup(xParEmitter*)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitter.s", "xParEmitterSetup__FP11xParEmitter")

// xParEmitterReset(xParEmitter*)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitter.s", "xParEmitterReset__FP11xParEmitter")

// xParEmitterEmitCustom(xParEmitter*,float,xParEmitterCustomSettings*)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitter.s", "xParEmitterEmitCustom__FP11xParEmitterfP25xParEmitterCustomSettings")

// xParEmitterCull(xParEmitter*,xPar*)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitter.s", "xParEmitterCull__FP11xParEmitterP4xPar")

// xParInterpCompute(int,xParInterp*,float,int,float)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitter.s", "xParInterpCompute__FiP10xParInterpfif")

// xParEmitterEmitSetTexIdxs(xPar*,const xParSys*)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitter.s", "xParEmitterEmitSetTexIdxs__FP4xParPC7xParSys")

// xParEmitterEmit(xParEmitter*,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitter.s", "xParEmitterEmit__FP11xParEmitterff")

// xParEmitterUpdate(xBase*,xScene*,float)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitter.s", "xParEmitterUpdate__FP5xBaseP6xScenef")

// xParEmitterDestroy()
#pragma GLOBAL_ASM("asm/Core/x/xParEmitter.s", "xParEmitterDestroy__Fv")

// xParInterp::order()
#pragma GLOBAL_ASM("asm/Core/x/xParEmitter.s", "order__10xParInterpFv")

// xParEmitterEmit(xParEmitter*,float)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitter.s", "xParEmitterEmit__FP11xParEmitterf")

// xParInterp::operator =(const xParInterp&)
#pragma GLOBAL_ASM("asm/Core/x/xParEmitter.s", "__as__10xParInterpFRC10xParInterp")
