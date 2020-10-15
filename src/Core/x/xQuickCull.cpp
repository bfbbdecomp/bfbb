#include "xQuickCull.h"

#include <types.h>

// xQuickCullInit(xQCControl*,float,float,float,float,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xQuickCull.s", "xQuickCullInit__FP10xQCControlffffff")

// xQuickCullInit(xQCControl*,const xBox*)
#pragma GLOBAL_ASM("asm/Core/x/xQuickCull.s", "xQuickCullInit__FP10xQCControlPC4xBox")

// xQuickCullIsects(const xQCData*,const xQCData*)
#pragma GLOBAL_ASM("asm/Core/x/xQuickCull.s", "xQuickCullIsects__FPC7xQCDataPC7xQCData")

// xQuickCullForBound(xQCControl*,xQCData*,const xBound*)
#pragma GLOBAL_ASM("asm/Core/x/xQuickCull.s", "xQuickCullForBound__FP10xQCControlP7xQCDataPC6xBound")

// xQuickCullCellForVec(xQCControl*,xQCData*,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xQuickCull.s", "xQuickCullCellForVec__FP10xQCControlP7xQCDataPC5xVec3")

// xQuickCullCellMerge(xQCData*,const xQCData*,const xQCData*)
#pragma GLOBAL_ASM("asm/Core/x/xQuickCull.s", "xQuickCullCellMerge__FP7xQCDataPC7xQCDataPC7xQCData")

// xQuickCullForLine(xQCControl*,xQCData*,const xLine3*)
#pragma GLOBAL_ASM("asm/Core/x/xQuickCull.s", "xQuickCullForLine__FP10xQCControlP7xQCDataPC6xLine3")

// xQuickCullForRay(xQCControl*,xQCData*,const xRay3*)
#pragma GLOBAL_ASM("asm/Core/x/xQuickCull.s", "xQuickCullForRay__FP10xQCControlP7xQCDataPC5xRay3")

// xQuickCullForSphere(xQCControl*,xQCData*,const xSphere*)
#pragma GLOBAL_ASM("asm/Core/x/xQuickCull.s", "xQuickCullForSphere__FP10xQCControlP7xQCDataPC7xSphere")

// xQuickCullForBox(xQCControl*,xQCData*,const xBox*)
#pragma GLOBAL_ASM("asm/Core/x/xQuickCull.s", "xQuickCullForBox__FP10xQCControlP7xQCDataPC4xBox")

// xQuickCullForOBB(xQCControl*,xQCData*,const xBox*,const xMat4x3*)
#pragma GLOBAL_ASM("asm/Core/x/xQuickCull.s", "xQuickCullForOBB__FP10xQCControlP7xQCDataPC4xBoxPC7xMat4x3")

// xQuickCullForEverything(xQCData*)
#pragma GLOBAL_ASM("asm/Core/x/xQuickCull.s", "xQuickCullForEverything__FP7xQCData")
