#include "../Core/x/xMath3.h"
#include "../Core/x/xVec3.h"
#include "zEntHangable.h"

#include <types.h>

// func_8006180C
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "zEntHangable_SetupFX__Fv")

// func_80061874
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "HangableSetup__FP12zEntHangableP9xEntAsset")

// func_80061990
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "zEntHangable_Init__FPvPv")

// func_800619B0
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "zEntHangable_Init__FP12zEntHangableP9xEntAsset")

// func_80061A20
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "zEntHangable_UpdateFX__FP12zEntHangable")

// func_80061B24
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "zEntHangable_Update__FP12zEntHangableP6xScenef")

// func_80061DC0
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "zEntHangableMountFX__FP12zEntHangable")

// func_80061E60
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "zEntHangableEventCB__FP5xBaseP5xBaseUiPCfP5xBase")

// func_8006209C
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s",                                                      \
                   "HangableIsMovingTooMuch__FP5xVec3P5xVec3P5xVec3P5xVec3")

// func_80062108
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "zEntHangable_SetMatrix__FP12zEntHangablef")

// func_80062418
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "zEntHangable_Save__FP12zEntHangableP7xSerial")

// func_80062438
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "zEntHangable_Load__FP12zEntHangableP7xSerial")

// func_80062458
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "zEntHangable_Reset__FP12zEntHangable")

// func_800624A8
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "zEntHangable_SetShaggy__FP12zEntHangableP4zEnt")

// func_8006255C
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "zEntHangable_FollowUpdate__FP12zEntHangable")

// func_80062724
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "zEntHangable_SetFollow__FP12zEntHangableP4zEnt")

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    float32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    float32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    float32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}
