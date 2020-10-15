#include "zEntHangable.h"

#include <types.h>

// zEntHangable_SetupFX()
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "zEntHangable_SetupFX__Fv")

// HangableSetup(zEntHangable*,xEntAsset*)
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "HangableSetup__FP12zEntHangableP9xEntAsset")

// zEntHangable_Init(zEntHangable*,xEntAsset*)
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "zEntHangable_Init__FP12zEntHangableP9xEntAsset")

// zEntHangable_UpdateFX(zEntHangable*)
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "zEntHangable_UpdateFX__FP12zEntHangable")

// zEntHangableMountFX(zEntHangable*)
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "zEntHangableMountFX__FP12zEntHangable")

// HangableIsMovingTooMuch(xVec3*,xVec3*,xVec3*,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "HangableIsMovingTooMuch__FP5xVec3P5xVec3P5xVec3P5xVec3")

// zEntHangable_SetMatrix(zEntHangable*,float)
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "zEntHangable_SetMatrix__FP12zEntHangablef")

// zEntHangable_Save(zEntHangable*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "zEntHangable_Save__FP12zEntHangableP7xSerial")

// zEntHangable_Load(zEntHangable*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "zEntHangable_Load__FP12zEntHangableP7xSerial")

// zEntHangable_Reset(zEntHangable*)
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "zEntHangable_Reset__FP12zEntHangable")

// zEntHangable_SetShaggy(zEntHangable*,zEnt*)
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "zEntHangable_SetShaggy__FP12zEntHangableP4zEnt")

// zEntHangable_FollowUpdate(zEntHangable*)
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "zEntHangable_FollowUpdate__FP12zEntHangable")

// zEntHangable_SetFollow(zEntHangable*,zEnt*)
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "zEntHangable_SetFollow__FP12zEntHangableP4zEnt")

// xMat3x3RMulVec(xVec3*,const xMat3x3*,const xVec3*)
namespace {
#pragma GLOBAL_ASM("asm/Game/zEntHangable.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
}
