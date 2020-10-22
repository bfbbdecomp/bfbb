#include "xGrid.h"

#include <types.h>

// xGridBoundInit(xGridBound*,void*)
#pragma GLOBAL_ASM("asm/Core/x/xGrid.s", "xGridBoundInit__FP10xGridBoundPv")

// xGridInit(xGrid*,const xBox*,unsigned short,unsigned short,unsigned char)
#pragma GLOBAL_ASM("asm/Core/x/xGrid.s", "xGridInit__FP5xGridPC4xBoxUsUsUc")

// xGridKill(xGrid*)
#pragma GLOBAL_ASM("asm/Core/x/xGrid.s", "xGridKill__FP5xGrid")

// xGridEmpty(xGrid*)
#pragma GLOBAL_ASM("asm/Core/x/xGrid.s", "xGridEmpty__FP5xGrid")

// xGridAddToCell(xGridBound**,xGridBound*)
#pragma GLOBAL_ASM("asm/Core/x/xGrid.s", "xGridAddToCell__FPP10xGridBoundP10xGridBound")

// xGridAdd(xGrid*,xGridBound*,int,int)
#pragma GLOBAL_ASM("asm/Core/x/xGrid.s", "xGridAdd__FP5xGridP10xGridBoundii")

// xGridAdd(xGrid*,xEnt*)
#pragma GLOBAL_ASM("asm/Core/x/xGrid.s", "xGridAdd__FP5xGridP4xEnt")

// xGridRemove(xGridBound*)
#pragma GLOBAL_ASM("asm/Core/x/xGrid.s", "xGridRemove__FP10xGridBound")

// xGridUpdate(xGrid*,xEnt*)
#pragma GLOBAL_ASM("asm/Core/x/xGrid.s", "xGridUpdate__FP5xGridP4xEnt")

// xGridGetCell(xGrid*,const xEnt*,int&,int&)
#pragma GLOBAL_ASM("asm/Core/x/xGrid.s", "xGridGetCell__FP5xGridPC4xEntRiRi")

// xGridGetCell(xGrid*,float,float,float,int&,int&)
#pragma GLOBAL_ASM("asm/Core/x/xGrid.s", "xGridGetCell__FP5xGridfffRiRi")

// xGridIterFirstCell(xGrid*,float,float,float,int&,int&,xGridIterator&)
#pragma GLOBAL_ASM("asm/Core/x/xGrid.s", "xGridIterFirstCell__FP5xGridfffRiRiR13xGridIterator")

// xGridEntIsTooBig(xGrid*,const xEnt*)
#pragma GLOBAL_ASM("asm/Core/x/xGrid.s", "xGridEntIsTooBig__FP5xGridPC4xEnt")

// xGridCheckPosition(xGrid*,xVec3*,xQCData*,int (*)(xEnt*, void*),void*)
#pragma GLOBAL_ASM("asm/Core/x/xGrid.s", "xGridCheckPosition__FP5xGridP5xVec3P7xQCDataPFP4xEntPv_iPv")
