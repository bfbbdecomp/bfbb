#include "xMorph.h"

#include <types.h>

// xMorphSeqSetup(void*,void* (*)(unsigned int, char*))
#pragma GLOBAL_ASM("asm/Core/x/xMorph.s", "xMorphSeqSetup__FPvPFUiPc_Pv")

// xMorphRender(xMorphSeqFile*,RwMatrixTag*,float)
#pragma GLOBAL_ASM("asm/Core/x/xMorph.s", "xMorphRender__FP13xMorphSeqFileP11RwMatrixTagf")

// xMorphSeqDuration(xMorphSeqFile*)
#pragma GLOBAL_ASM("asm/Core/x/xMorph.s", "xMorphSeqDuration__FP13xMorphSeqFile")
