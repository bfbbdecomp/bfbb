#ifndef IANIMSKB_H
#define IANIMSKB_H

#include "xMath3.h"

struct iAnimSKBHeader
{
    uint32 Magic;
    uint32 Flags;
    uint16 BoneCount;
    uint16 TimeCount;
    uint32 KeyCount;
    float32 Scale[3];
};

struct iAnimSKBKey
{
    uint16 TimeIndex;
    int16 Quat[4];
    int16 Tran[3];
};

void iAnimEvalSKB(iAnimSKBHeader* data, float32 time, uint32 flags, xVec3* tran, xQuat* quat);
float32 iAnimDurationSKB(iAnimSKBHeader* data);

#endif
