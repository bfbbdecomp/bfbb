#ifndef XANIM_H
#define XANIM_H

#include <types.h>

struct xAnimPlay;

#include "xModel.h"
#include "xMemMgr.h"
#include "xMath3.h"
#include "xVec3.h"

struct xAnimState;
struct xAnimFile;
struct xAnimMultiFile;
struct xAnimTransitionList;

struct xAnimTable
{
};

struct xAnimEffect
{
};

struct xAnimActiveEffect
{
};

struct xAnimTransition
{
};

struct xAnimSingle
{
    uint32 SingleFlags;
    xAnimState* State;
    float32 Time;
    float32 CurrentSpeed;
    float32 BilinearLerp[2];
    xAnimEffect* Effect;
    uint32 ActiveCount;
    float32 LastTime;
    xAnimActiveEffect* ActiveList;
    xAnimPlay* Play;
    xAnimTransition* Sync;
    xAnimTransition* Tran;
    xAnimSingle* Blend;
    float32 BlendFactor;
    uint32 pad;
};

typedef void (*type_7)(xAnimPlay*, xQuat*, xVec3*, int32);

// have to do this because for some reason
// including xModel.h doesn't put this before
// xAnimPlay is defined, which references it
struct xModelInstance;

struct xAnimPlay
{
    xAnimPlay* Next;
    uint16 NumSingle;
    uint16 BoneCount;
    xAnimSingle* Single;
    void* Object;
    xAnimTable* Table;
    xMemPool* Pool;
    xModelInstance* ModelInst;
    type_7 BeforeAnimMatrices;
};

struct xAnimState
{
    xAnimState* Next;
    int8* Name;
    uint32 ID;
    uint32 Flags;
    uint32 UserFlags;
    float32 Speed;
    xAnimFile* Data;
    xAnimEffect* Effects;
    xAnimTransitionList* Default;
    xAnimTransitionList* List;
    float32* BoneBlend;
    float32* TimeSnap;
    float32 FadeRecip;
    uint16* FadeOffset;
    void* CallbackData;
    xAnimMultiFile* MultiFile;
    void (*BeforeEnter)(xAnimPlay*, xAnimState*);
    void (*StateCallback)(xAnimState*, xAnimSingle*, void*);
    void (*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
};

#endif