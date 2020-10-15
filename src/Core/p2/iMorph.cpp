#include "iMorph.h"

#include <types.h>

// MorphCommon(RpAtomic*,RwMatrixTag*,short**,short*,unsigned int,float,int)
#pragma GLOBAL_ASM("asm/Core/p2/iMorph.s", "MorphCommon__FP8RpAtomicP11RwMatrixTagPPsPsUifi")

// iMorphOptimize(RpAtomic*,int)
#pragma GLOBAL_ASM("asm/Core/p2/iMorph.s", "iMorphOptimize__FP8RpAtomici")

// iMorphRender(RpAtomic*,RwMatrixTag*,short**,short*,unsigned int,float)
#pragma GLOBAL_ASM("asm/Core/p2/iMorph.s", "iMorphRender__FP8RpAtomicP11RwMatrixTagPPsPsUif")

// FastS16unpack(float*,short*,int,float)
#pragma GLOBAL_ASM("asm/Core/p2/iMorph.s", "FastS16unpack__FPfPsif")

// FastS16weight2(float*,short**,short*,int,float)
#pragma GLOBAL_ASM("asm/Core/p2/iMorph.s", "FastS16weight2__FPfPPsPsif")

// FastS16weight4(float*,short**,short*,int,float)
#pragma GLOBAL_ASM("asm/Core/p2/iMorph.s", "FastS16weight4__FPfPPsPsif")
