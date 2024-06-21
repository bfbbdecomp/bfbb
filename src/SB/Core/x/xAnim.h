#ifndef XANIM_H
#define XANIM_H

#include <types.h>

#include "xMath3.h"
#include "xMemMgr.h"

typedef struct xAnimState;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct xAnimEffect;
typedef struct xAnimActiveEffect;
typedef struct xAnimSingle;
typedef struct xAnimPlay;

struct xAnimFile
{
    xAnimFile* Next;
    const char* Name;
    uint32 ID;
    uint32 FileFlags;
    float32 Duration;
    float32 TimeOffset;
    uint16 BoneCount;
    uint8 NumAnims[2];
    void** RawData;
};

struct xAnimMultiFileEntry
{
    uint32 ID;
    xAnimFile* File;
};

struct xAnimMultiFileBase
{
    uint32 Count;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
    xAnimMultiFileEntry Files[1];
};

typedef void (*xAnimStateBeforeEnterCallback)(xAnimPlay*, xAnimState*);
typedef void (*xAnimStateCallback)(xAnimState*, xAnimSingle*, void*);
typedef void (*xAnimStateBeforeAnimMatricesCallback)(xAnimPlay*, xQuat*, xVec3*, int32);

struct xAnimState
{
    xAnimState* Next;
    const char* Name;
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
    xAnimStateBeforeEnterCallback BeforeEnter;
    xAnimStateCallback StateCallback;
    xAnimStateBeforeAnimMatricesCallback BeforeAnimMatrices;
};

typedef uint32 (*xAnimTransitionConditionalCallback)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32 (*xAnimTransitionCallback)(xAnimTransition*, xAnimSingle*, void*);

struct xAnimTransition
{
    xAnimTransition* Next;
    xAnimState* Dest;
    xAnimTransitionConditionalCallback Conditional;
    xAnimTransitionCallback Callback;
    uint32 Flags;
    uint32 UserFlags;
    float32 SrcTime;
    float32 DestTime;
    uint16 Priority;
    uint16 QueuePriority;
    float32 BlendRecip;
    uint16* BlendOffset;
};

struct xAnimTransitionList
{
    xAnimTransitionList* Next;
    xAnimTransition* T;
};

struct xAnimTable
{
    xAnimTable* Next;
    const char* Name;
    xAnimTransition* TransitionList;
    xAnimState* StateList;
    uint32 AnimIndex;
    uint32 MorphIndex;
    uint32 UserFlags;
};

typedef uint32 (*xAnimEffectCallback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);

struct xAnimEffect
{
    xAnimEffect* Next;
    uint32 Flags;
    float32 StartTime;
    float32 EndTime;
    xAnimEffectCallback Callback;
};

struct xAnimActiveEffect
{
    xAnimEffect* Effect;
    uint32 Handle;
};

struct xAnimSingle
{
    uint32 SingleFlags;
    xAnimState* State;
    float32 Time;
    float32 CurrentSpeed;

    // Offset: 0x10
    float32 BilinearLerp[2];
    xAnimEffect* Effect;
    uint32 ActiveCount;

    // Offset: 0x20
    float32 LastTime;
    xAnimActiveEffect* ActiveList;
    xAnimPlay* Play;
    xAnimTransition* Sync;
    xAnimTransition* Tran;
    xAnimSingle* Blend;
    float32 BlendFactor;
    uint32 pad;
};

typedef struct xModelInstance;

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
    void (*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
};

extern uint32 gxAnimUseGrowAlloc;

void xAnimInit();
void xAnimTempTransitionInit(uint32 count);
xAnimFile* xAnimFileNew(void* rawData, const char* name, uint32 flags, xAnimFile** linkedList);
xAnimTable* xAnimTableNew(const char* name, xAnimTable** linkedList, uint32 userFlags);
xAnimState* xAnimTableNewState(xAnimTable* table, const char* name, uint32 flags, uint32 userFlags,
                               float32 speed, float32* boneBlend, float32* timeSnap,
                               float32 fadeRecip, uint16* fadeOffset, void* callbackData,
                               xAnimStateBeforeEnterCallback beforeEnter,
                               xAnimStateCallback stateCallback,
                               xAnimStateBeforeAnimMatricesCallback beforeAnimMatrices);
xAnimTransition* xAnimTableNewTransition(xAnimTable* table, const char* source, const char* dest,
                                         xAnimTransitionConditionalCallback conditional,
                                         xAnimTransitionCallback callback, uint32 flags,
                                         uint32 userFlags, float32 srcTime, float32 destTime,
                                         uint16 priority, uint16 queuePriority, float32 blendRecip,
                                         uint16* blendOffset);
void xAnimDefaultBeforeEnter(xAnimPlay* play, xAnimState* state);
void xAnimPoolInit(xMemPool* pool, uint32 count, uint32 singles, uint32 blendFlags,
                   uint32 effectMax);
xAnimPlay* xAnimPoolAlloc(xMemPool* pool, void* object, xAnimTable* table,
                          xModelInstance* modelInst);
xAnimState* xAnimTableGetState(xAnimTable* table, const char* name);
void xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, const int8* source);
xAnimState* xAnimTableGetStateID(xAnimTable* table, uint32 ID);
void xAnimPlaySetState(xAnimSingle* single, xAnimState* state, float32 startTime);
void xAnimPlayStartTransition(xAnimPlay* play, xAnimTransition* transition);
void xAnimPlayUpdate(xAnimPlay* play, float32 timeDelta);
void xAnimPlayEval(xAnimPlay* play);

#endif