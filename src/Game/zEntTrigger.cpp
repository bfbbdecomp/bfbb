#include "zEntTrigger.h"

#include <types.h>

// zEntTriggerInit(void*,void*)
#pragma GLOBAL_ASM("asm/Game/zEntTrigger.s", "zEntTriggerInit__FPvPv")

// zEntTriggerInit(zEntTrigger*,xEntAsset*)
#pragma GLOBAL_ASM("asm/Game/zEntTrigger.s", "zEntTriggerInit__FP11zEntTriggerP9xEntAsset")

// zEntTriggerSave(zEntTrigger*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zEntTrigger.s", "zEntTriggerSave__FP11zEntTriggerP7xSerial")

// zEntTriggerLoad(zEntTrigger*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zEntTrigger.s", "zEntTriggerLoad__FP11zEntTriggerP7xSerial")

// zEntTriggerReset(zEntTrigger*)
#pragma GLOBAL_ASM("asm/Game/zEntTrigger.s", "zEntTriggerReset__FP11zEntTrigger")

// zEntTriggerHitsSphere(const zEntTrigger&,const xSphere&,const xVec3&)
#pragma GLOBAL_ASM("asm/Game/zEntTrigger.s", "zEntTriggerHitsSphere__FRC11zEntTriggerRC7xSphereRC5xVec3")

// xMat3x3RMulVec(xVec3*,const xMat3x3*,const xVec3*)
namespace {
#pragma GLOBAL_ASM("asm/Game/zEntTrigger.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
}

// xSphereHitsVCircle(const xSphere&,const xVec3&,float)
#pragma GLOBAL_ASM("asm/Game/zEntTrigger.s", "xSphereHitsVCircle__FRC7xSphereRC5xVec3f")
