#ifndef IANIM_H
#define IANIM_H

#include "../x/xMath3.h"

extern uint8* giAnimScratch;

void iAnimInit();
void iAnimBlend(float32 BlendFactor, float32 BlendRecip, uint16* BlendTimeOffset,
                float32* BoneTable, uint32 BoneCount, xVec3* Tran1, xQuat* Quat1, xVec3* Tran2,
                xQuat* Quat2, xVec3* TranDest, xQuat* QuatDest);

#endif