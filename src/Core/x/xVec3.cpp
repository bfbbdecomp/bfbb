#include "xVec3.h"

#include <types.h>

// func_8004E2F0
#pragma GLOBAL_ASM("asm/Core/x/xVec3.s", "xVec3Normalize__FP5xVec3PC5xVec3")

// func_8004E3DC
#pragma GLOBAL_ASM("asm/Core/x/xVec3.s", "xVec3NormalizeFast__FP5xVec3PC5xVec3")

// func_8004E4DC
//#pragma GLOBAL_ASM("asm/Core/x/xVec3.s", "xVec3Copy__FP5xVec3PC5xVec3")
void xVec3Copy(xVec3 * o, const xVec3 * a){
    float tmp1[] = {((float*)(void*)a)[0],((float*)(void*)a)[1]};
    float tmp2[] = {((float*)(void*)a)[2],((float*)(void*)a)[3]};
    *o = *(xVec3*)tmp1;
    *(float*)(o+0x8)= tmp2[0];
}
// func_8004E4F0
#pragma GLOBAL_ASM("asm/Core/x/xVec3.s", "xVec3Dot__FPC5xVec3PC5xVec3")
