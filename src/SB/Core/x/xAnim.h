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
    U32 ID;
    U32 FileFlags;
    F32 Duration;
    F32 TimeOffset;
    U16 BoneCount;
    U8 NumAnims[2];
    void** RawData;
};

struct xAnimMultiFileEntry
{
    U32 ID;
    xAnimFile* File;
};

struct xAnimMultiFileBase
{
    U32 Count;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
    xAnimMultiFileEntry Files[1];
};

typedef void (*xAnimStateBeforeEnterCallback)(xAnimPlay*, xAnimState*);
typedef void (*xAnimStateCallback)(xAnimState*, xAnimSingle*, void*);
typedef void (*xAnimStateBeforeAnimMatricesCallback)(xAnimPlay*, xQuat*, xVec3*, S32);

struct xAnimState
{
    xAnimState* Next;
    const char* Name;
    U32 ID;
    U32 Flags;
    U32 UserFlags;
    F32 Speed;
    xAnimFile* Data;
    xAnimEffect* Effects;
    xAnimTransitionList* Default;
    xAnimTransitionList* List;
    F32* BoneBlend;
    F32* TimeSnap;
    F32 FadeRecip;
    U16* FadeOffset;
    void* CallbackData;
    xAnimMultiFile* MultiFile;
    xAnimStateBeforeEnterCallback BeforeEnter;
    xAnimStateCallback StateCallback;
    xAnimStateBeforeAnimMatricesCallback BeforeAnimMatrices;
};

typedef U32 (*xAnimTransitionConditionalCallback)(xAnimTransition*, xAnimSingle*, void*);
typedef U32 (*xAnimTransitionCallback)(xAnimTransition*, xAnimSingle*, void*);

struct xAnimTransition
{
    xAnimTransition* Next;
    xAnimState* Dest;
    xAnimTransitionConditionalCallback Conditional;
    xAnimTransitionCallback Callback;
    U32 Flags;
    U32 UserFlags;
    F32 SrcTime;
    F32 DestTime;
    U16 Priority;
    U16 QueuePriority;
    F32 BlendRecip;
    U16* BlendOffset;
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
    U32 AnimIndex;
    U32 MorphIndex;
    U32 UserFlags;
};

typedef U32 (*xAnimEffectCallback)(U32, xAnimActiveEffect*, xAnimSingle*, void*);

struct xAnimEffect
{
    xAnimEffect* Next;
    U32 Flags;
    F32 StartTime;
    F32 EndTime;
    xAnimEffectCallback Callback;
};

struct xAnimActiveEffect
{
    xAnimEffect* Effect;
    U32 Handle;
};

struct xAnimSingle
{
    U32 SingleFlags;
    xAnimState* State;
    F32 Time;
    F32 CurrentSpeed;

    // Offset: 0x10
    F32 BilinearLerp[2];
    xAnimEffect* Effect;
    U32 ActiveCount;

    // Offset: 0x20
    F32 LastTime;
    xAnimActiveEffect* ActiveList;
    xAnimPlay* Play;
    xAnimTransition* Sync;
    xAnimTransition* Tran;
    xAnimSingle* Blend;
    F32 BlendFactor;
    U32 pad;
};

typedef struct xModelInstance;

struct xAnimPlay
{
    xAnimPlay* Next;
    U16 NumSingle;
    U16 BoneCount;
    xAnimSingle* Single;
    void* Object;
    xAnimTable* Table;
    xMemPool* Pool;
    xModelInstance* ModelInst;
    void (*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, S32);
};

extern U32 gxAnimUseGrowAlloc;

void xAnimInit();
void xAnimTempTransitionInit(U32 count);
xAnimFile* xAnimFileNew(void* rawData, const char* name, U32 flags, xAnimFile** linkedList);
xAnimTable* xAnimTableNew(const char* name, xAnimTable** linkedList, U32 userFlags);
xAnimState* xAnimTableNewState(xAnimTable* table, const char* name, U32 flags, U32 userFlags,
                               F32 speed, F32* boneBlend, F32* timeSnap,
                               F32 fadeRecip, U16* fadeOffset, void* callbackData,
                               xAnimStateBeforeEnterCallback beforeEnter,
                               xAnimStateCallback stateCallback,
                               xAnimStateBeforeAnimMatricesCallback beforeAnimMatrices);
xAnimTransition* xAnimTableNewTransition(xAnimTable* table, const char* source, const char* dest,
                                         xAnimTransitionConditionalCallback conditional,
                                         xAnimTransitionCallback callback, U32 flags,
                                         U32 userFlags, F32 srcTime, F32 destTime,
                                         U16 priority, U16 queuePriority, F32 blendRecip,
                                         U16* blendOffset);
void xAnimDefaultBeforeEnter(xAnimPlay* play, xAnimState* state);
void xAnimPoolInit(xMemPool* pool, U32 count, U32 singles, U32 blendFlags,
                   U32 effectMax);
xAnimPlay* xAnimPoolAlloc(xMemPool* pool, void* object, xAnimTable* table,
                          xModelInstance* modelInst);
xAnimState* xAnimTableGetState(xAnimTable* table, const char* name);
void xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, const char* source);
void xAnimTableAddFile(xAnimTable* table, xAnimFile* file, const char* states);
xAnimState* xAnimTableGetStateID(xAnimTable* table, U32 ID);
void xAnimPlaySetState(xAnimSingle* single, xAnimState* state, F32 startTime);
void xAnimPlayStartTransition(xAnimPlay* play, xAnimTransition* transition);
void xAnimPlayUpdate(xAnimPlay* play, F32 timeDelta);
void xAnimPlayEval(xAnimPlay* play);

#endif
