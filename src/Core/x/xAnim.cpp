#include "xAnim.h"

#include "../p2/iAnim.h"
#include "xMemMgr.h"
#include "xMath.h"
#include "xString.h"

#include <types.h>
#include <string.h>
#include <stdlib.h>
#include <cmath>

extern xMemPool sxAnimTempTranPool;

static bool _xSingleCompare(char a, char b)
{
    switch (b)
    {
    case '?':
    case '*':
    case '+':
    {
        return true;
    }
    case '#':
    {
        return (a >= '0' && a <= '9');
    }
    }

    return (a == b);
}

static bool _xSingleCompare(char ch, const char* str)
{
    while (*str != '\0')
    {
        if (_xSingleCompare(ch, *str))
        {
            return true;
        }

        str++;
    }

    return false;
}

static bool _xCharIn(char ch, const char* str)
{
    while (*str != '\0')
    {
        if (ch == *str)
        {
            return true;
        }

        str++;
    }

    return false;
}

// _xCheckAnimNameInner(const char*,const char*,int,char*,int*,int*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "_xCheckAnimNameInner__FPCcPCciPcPiPi")

bool _xCheckAnimNameInner(const char* name, const char* pattern, int32 patternSize, int8* extra,
                          int32* nameOut, int32* extraOut);

static bool _xCheckAnimName(const char* name, const char* pattern, int8* extra)
{
    int32 patternSize, nameOut;
    bool rc;

    *extra = 1;
    patternSize = strlen(pattern);

    rc = _xCheckAnimNameInner(name, pattern, patternSize, extra, &nameOut, NULL);

    return (rc && name[nameOut] == '\0');
}

void xAnimInit()
{
    iAnimInit();
    memset(&sxAnimTempTranPool, 0, sizeof(xMemPool));
}

void xAnimTempTransitionInit(uint32 count)
{
    xMemPoolSetup(&sxAnimTempTranPool, xMemAllocSize(count * sizeof(xAnimTransition)), 0, 0, NULL,
                  sizeof(xAnimTransition), count, count / 2);
}

// TODO: move to xMathInlines.h
float32 xatan2(float32 y, float32 x)
{
    return xAngleClampFast(std::atan2f(y, x));
}

#ifndef INLINE
float std::atan2f(float y, float x)
{
    return (float)atan2((double)y, (double)x);
}
#endif

// func_800060B8
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "CalcRecipBlendMax__FPUs")

float CalcRecipBlendMax(uint16*);

static uint32 StateHasTransition(xAnimState* state, xAnimTransition* tran)
{
    xAnimTransitionList* curr = state->List;

    while (curr)
    {
        if (curr->T == tran)
        {
            return TRUE;
        }

        curr = curr->Next;
    }

    return FALSE;
}

static uint32 DefaultHasTransition(xAnimState* state, xAnimTransition* tran, uint32* r5)
{
    uint32 r7 = 1;
    xAnimTransitionList* curr = state->Default;

    while (curr)
    {
        if (curr->T == tran)
        {
            return TRUE;
        }

        if (curr->T->Conditional == tran->Conditional && curr->T->UserFlags == tran->UserFlags)
        {
            r7 = 0;
        }

        curr = curr->Next;
    }

    *r5 += r7;
    return FALSE;
}

static uint32 DefaultOverride(xAnimState* state, xAnimTransition* tran)
{
    xAnimTransitionList* list = state->Default;

    while (list)
    {
        if (list->T->Conditional == tran->Conditional && list->T->UserFlags == tran->UserFlags)
        {
            list->T = tran;
            return TRUE;
        }

        list = list->Next;
    }

    return FALSE;
}

#if 1
// TransitionTimeInit(xAnimSingle*,xAnimTransition*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "TransitionTimeInit__FP11xAnimSingleP15xAnimTransition")
#else
static void TransitionTimeInit(xAnimSingle* single, xAnimTransition* tran)
{
    if (tran->Flags & 0x20)
    {
        if ((single->State->Data->FileFlags ^ tran->Dest->Data->FileFlags) & 0x1000)
        {
            single->Time = tran->Dest->Data->Duration - single->Time;
        }
    }
    else
    {
        if ((tran->Dest->Flags & 0x100) &&)
    }
}
#endif

// func_80006300
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimFileNewBilinear__FPPvPCcUiPP9xAnimFileUiUi")

xAnimFile* xAnimFileNewBilinear(void** rawData, const char* name, uint32 flags,
                                xAnimFile** linkedList, uint32 numX, uint32 numY);

xAnimFile* xAnimFileNew(void* rawData, const char* name, uint32 flags, xAnimFile** linkedList)
{
    return xAnimFileNewBilinear(&rawData, name, flags, linkedList, 1, 1);
}

// func_80006598
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimFileSetTime__FP9xAnimFileff")

// func_80006658
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimFileEval__FP9xAnimFilefPfUiP5xVec3P5xQuatPf")

void xAnimFileEval(xAnimFile* data, float32 time, float32* bilinear, uint32 flags, xVec3* tran,
                   xQuat* quat, float32*);

#ifndef INLINE
float std::floorf(float x)
{
    return (float)floor((double)x);
}
#endif

xAnimEffect* xAnimStateNewEffect(xAnimState* state, uint32 flags, float32 startTime,
                                 float32 endTime, xAnimEffectCallback callback, uint32 userDataSize)
{
    xAnimEffect* curr;
    xAnimEffect** prev;
    xAnimEffect* effect;

    effect =
        (gxAnimUseGrowAlloc ? (xAnimEffect*)xMemGrowAllocSize(userDataSize + sizeof(xAnimEffect)) :
                              (xAnimEffect*)xMemAllocSize(userDataSize + sizeof(xAnimEffect)));

    effect->Flags = flags;
    effect->StartTime = startTime;
    effect->EndTime = endTime;
    effect->Callback = callback;

    prev = &state->Effects;
    curr = state->Effects;

    while (curr && startTime > curr->StartTime)
    {
        prev = &curr->Next;
        curr = curr->Next;
    }

    effect->Next = curr;
    *prev = effect;

    return effect;
}

xAnimTable* xAnimTableNew(const char* name, xAnimTable** linkedList, uint32 userFlags)
{
    xAnimTable* table;

    table = (xAnimTable*)xMemAllocSize(sizeof(xAnimTable));

    if (linkedList)
    {
        table->Next = *linkedList;
        *linkedList = table;
    }
    else
    {
        table->Next = NULL;
    }

    table->Name = name;
    table->TransitionList = NULL;
    table->StateList = NULL;
    table->AnimIndex = NULL;
    table->MorphIndex = NULL;
    table->UserFlags = userFlags;

    return table;
}

void xAnimDefaultBeforeEnter(xAnimPlay* play, xAnimState* state)
{
    uint32 entry;

    if (state->MultiFile)
    {
        entry = rand() % state->MultiFile->Count;

        state->Data = state->MultiFile->Files[entry].File;
    }
}

#ifndef NONMATCHING
// xAnimTableNewState(xAnimTable*,const char*,unsigned int,unsigned int,float,float*,float*,float,unsigned short*,void*,void (*)(xAnimPlay*, xAnimState*),void (*)(xAnimState*, xAnimSingle*, void*),void (*)(xAnimPlay*, xQuat*, xVec3*, int))
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xAnim.s",                                                                          \
    "xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v")
#else
xAnimState* xAnimTableNewState(xAnimTable* table, const char* name, uint32 flags, uint32 userFlags,
                               float32 speed, float32* boneBlend, float32* timeSnap,
                               float32 fadeRecip, uint16* fadeOffset, void* callbackData,
                               xAnimStateBeforeEnterCallback beforeEnter,
                               xAnimStateCallback stateCallback,
                               xAnimStateBeforeAnimMatricesCallback beforeAnimMatrices)
{
    xAnimState* state;

    state = (gxAnimUseGrowAlloc ? (xAnimState*)xMemGrowAllocSize(sizeof(xAnimState)) :
                                  (xAnimState*)xMemAllocSize(sizeof(xAnimState)));

    if (!table->StateList)
    {
        state->Next = NULL;
        table->StateList = state;
    }
    else
    {
        state->Next = table->StateList->Next;
        table->StateList->Next = state;
    }

    state->Name = name;
    state->ID = xStrHash(name);
    state->Flags = flags;
    state->UserFlags = userFlags;
    state->Speed = speed;
    state->Data = NULL;
    state->Effects = NULL;
    state->Default = NULL;
    state->List = NULL;
    state->BoneBlend = boneBlend;
    state->TimeSnap = timeSnap;
    state->FadeRecip = (fadeOffset ? CalcRecipBlendMax(fadeOffset) : fadeRecip);
    state->FadeOffset = fadeOffset;
    state->MultiFile = NULL;
    state->CallbackData = callbackData;
    state->BeforeEnter = beforeEnter;
    state->StateCallback = stateCallback;
    state->BeforeAnimMatrices = beforeAnimMatrices;

    return state;
}
#endif

static void _xAnimTableAddTransitionHelper(xAnimState* state, xAnimTransition* tran, uint32& r5,
                                           uint32& r6, xAnimState** r7)
{
    if (tran->Flags & 0x10)
    {
        if (!DefaultHasTransition(state, tran, &r5))
        {
            r7[r6] = state;
            r6++;
        }
    }
    else
    {
        if (!StateHasTransition(state, tran))
        {
            r7[r6] = state;
            r6++;
            r5++;
        }
    }
}

// _xAnimTableAddTransition(xAnimTable*,xAnimTransition*,const char*,const char*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s",                                                           \
                   "_xAnimTableAddTransition__FP10xAnimTableP15xAnimTransitionPCcPCc")

void _xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, const char* source,
                              const char* dest);

void xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, const char* source)
{
    _xAnimTableAddTransition(table, tran, source, NULL);
}

// xAnimTableNewTransition(xAnimTable*,const char*,const char*,unsigned int (*)(xAnimTransition*, xAnimSingle*, void*),unsigned int (*)(xAnimTransition*, xAnimSingle*, void*),unsigned int,unsigned int,float,float,unsigned short,unsigned short,float,unsigned short*)
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xAnim.s",                                                                          \
    "xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs")

// func_80007574
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimTableAddFile__FP10xAnimTableP9xAnimFilePCc")

xAnimState* xAnimTableGetStateID(xAnimTable* table, uint32 ID);

xAnimState* xAnimTableAddFileID(xAnimTable* table, xAnimFile* file, uint32 stateID,
                                uint32 subStateID, uint32 subStateCount)
{
    xAnimState* state;

    state = xAnimTableGetStateID(table, stateID);

    if (state)
    {
        if (subStateID)
        {
            if (!state->MultiFile)
            {
                state->MultiFile =
                    (gxAnimUseGrowAlloc ? (xAnimMultiFile*)xMemGrowAllocSize(
                                              subStateCount * sizeof(xAnimMultiFileEntry) +
                                              sizeof(xAnimMultiFileBase)) :
                                          (xAnimMultiFile*)xMemAllocSize(
                                              subStateCount * sizeof(xAnimMultiFileEntry) +
                                              sizeof(xAnimMultiFileBase)));

                state->MultiFile->Count = 0;
            }

            uint32 count = state->MultiFile->Count;

            state->MultiFile->Files[count].ID = subStateID;
            state->MultiFile->Files[count].File = file;

            state->MultiFile->Count++;
        }

        state->Data = file;

        if (file->FileFlags & 0x8000)
        {
            table->MorphIndex |= (1 << (state->Flags & 0xF));
        }
        else
        {
            table->AnimIndex |= (1 << (state->Flags & 0xF));
        }
    }

    return state;
}

xAnimState* xAnimTableGetStateID(xAnimTable* table, uint32 ID)
{
    xAnimState* curr;

    curr = table->StateList;

    while (curr)
    {
        if (curr->ID == ID)
        {
            return curr;
        }

        curr = curr->Next;
    }

    return NULL;
}

xAnimState* xAnimTableGetState(xAnimTable* table, const char* name)
{
    return xAnimTableGetStateID(table, xStrHash(name));
}

static void EffectActiveInsert(xAnimSingle* single, xAnimActiveEffect* active)
{
    uint32 index = 0;
    uint32 count = single->ActiveCount;
    xAnimActiveEffect* curr = &single->ActiveList[0];

    while (index < count && curr->Effect)
    {
        curr++;
        index++;
    }

    *curr = *active;

    if (index < count - 1)
    {
        (curr + 1)->Effect = NULL;
    }
}

static void EffectActiveRemove(xAnimActiveEffect* active, uint32 index, uint32 count)
{
    count--;

    if (index == count || !(active + 1)->Effect)
    {
        active->Effect = NULL;
    }
    else
    {
        xAnimActiveEffect* curr = active;

        while (index < count && (curr + 1)->Effect)
        {
            curr++;
            index++;
        }

        *active = *curr;
        curr->Effect = NULL;
    }
}

static uint32 EffectPlaying(xAnimSingle* single, xAnimEffect* effect)
{
    uint32 index = 0;

    while (index < single->ActiveCount && single->ActiveList[index].Effect)
    {
        if (single->ActiveList[index].Effect == effect)
        {
            return TRUE;
        }

        index++;
    }

    return FALSE;
}

static void EffectSingleStart(xAnimSingle* single)
{
    xAnimEffect* effect = single->State->Effects;
    xAnimActiveEffect tempActive;
    float32 time = single->Time;
    uint32 flags;

    while (effect && effect->StartTime < time)
    {
        flags = effect->Flags;

        if (flags & 0x1)
        {
            if (flags & 0x4)
            {
                tempActive.Effect = effect;
                tempActive.Handle = effect->Callback(1, &tempActive, single, single->Play->Object);

                flags = effect->Flags;

                if (flags & 0x2)
                {
                    if (effect->EndTime <= time)
                    {
                        effect->Callback(3, &tempActive, single, single->Play->Object);
                    }
                    else
                    {
                        EffectActiveInsert(single, &tempActive);
                    }
                }
                else if (flags & 0x20)
                {
                    EffectActiveInsert(single, &tempActive);
                }
            }
            else if ((flags & 0x2) && !(flags & 0x10) && effect->EndTime > time)
            {
                tempActive.Effect = effect;
                tempActive.Handle = effect->Callback(1, &tempActive, single, single->Play->Object);

                EffectActiveInsert(single, &tempActive);
            }
        }

        effect = effect->Next;
    }

    single->Effect = effect;
}

static void EffectSingleDuration(xAnimSingle* single)
{
    float32 time = single->Time;
    xAnimActiveEffect* alist = single->ActiveList;
    uint32 index = 0;
    uint32 count = single->ActiveCount;

    while (index < count && alist->Effect)
    {
        if (!(alist->Effect->Flags & 0x20) && alist->Effect->EndTime <= time)
        {
            alist->Effect->Callback(3, alist, single, single->Play->Object);

            EffectActiveRemove(alist, index, count);
        }
        else
        {
            alist->Effect->Callback(2, alist, single, single->Play->Object);

            alist++;
            index++;
        }
    }
}

static void EffectSingleRun(xAnimSingle* single)
{
    xAnimEffect* effect = single->Effect;
    xAnimActiveEffect tempActive;
    float32 time = single->Time;
    uint32 flags;

    while (effect && effect->StartTime <= time)
    {
        flags = effect->Flags;

        if ((flags & 0x1) && (!(flags & 0x20) || !EffectPlaying(single, effect)))
        {
            tempActive.Effect = effect;
            tempActive.Handle = effect->Callback(1, &tempActive, single, single->Play->Object);

            if (flags & 0x2)
            {
                if (effect->EndTime <= time)
                {
                    effect->Callback(3, &tempActive, single, single->Play->Object);
                }
                else
                {
                    EffectActiveInsert(single, &tempActive);
                }
            }
            else if (flags & 0x20)
            {
                EffectActiveInsert(single, &tempActive);
            }
        }

        effect = effect->Next;
    }

    single->Effect = effect;
}

// func_80007C68
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "EffectSingleLoop__FP11xAnimSingle")

void EffectSingleLoop(xAnimSingle* single);

// EffectSingleStop(xAnimSingle*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "EffectSingleStop__FP11xAnimSingle")

void EffectSingleStop(xAnimSingle* single);

// StopUpdate(xAnimSingle*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "StopUpdate__FP11xAnimSingle")

static void LoopUpdate(xAnimSingle* single)
{
    float32 time = single->Time;
    float32 duration = single->State->Data->Duration;

    if (time > duration)
    {
        single->Time = duration;

        EffectSingleLoop(single);

        single->Time = time - duration;
    }
}

// func_80007F1C
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimPlaySetState__FP11xAnimSingleP10xAnimStatef")

// func_8000804C
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "SingleUpdate__FP11xAnimSinglef")

void SingleUpdate(xAnimSingle* single, float32 timeDelta);

static void SingleEval(xAnimSingle* single, xVec3* tran, xQuat* quat)
{
    if (single->Play->BoneCount > 1)
    {
        xAnimFileEval(single->State->Data, single->Time, single->BilinearLerp, 0x2, tran + 1,
                      quat + 1, NULL);

        if (single->Blend && single->Blend->State)
        {
            xQuat* qbuf = (xQuat*)(giAnimScratch + 0xE40);
            xVec3* vbuf = (xVec3*)(qbuf + 0x41);

            xAnimFileEval(single->Blend->State->Data, single->Blend->Time,
                          single->Blend->BilinearLerp, 0x2, vbuf, qbuf, NULL);

            iAnimBlend(single->BlendFactor, single->Tran->BlendRecip, single->Tran->BlendOffset,
                       NULL, single->Play->BoneCount - 1, vbuf, qbuf, tran + 1, quat + 1, tran + 1,
                       quat + 1);
        }
    }
}

// xAnimPlaySetup(xAnimPlay*,void*,xAnimTable*,xModelInstance*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s",                                                           \
                   "xAnimPlaySetup__FP9xAnimPlayPvP10xAnimTableP14xModelInstance")

void xAnimPlaySetup(xAnimPlay* play, void* object, xAnimTable* table, xModelInstance* modelInst);

void xAnimPlayChooseTransition(xAnimPlay* play)
{
    uint32 i;
    void* object = play->Object;
    xAnimTransition** list = (xAnimTransition**)giAnimScratch;
    xAnimTransition** found;
    xAnimTransitionList* curr;

    memset(list, 0, play->NumSingle * sizeof(xAnimTransition*));

    for (i = 0; i < play->NumSingle; i++)
    {
        if (play->Single[i].State)
        {
            curr = play->Single[i].State->List;

            if (curr && curr->T->Conditional)
            {
                while (curr)
                {
                    if (curr->T->Conditional(curr->T, &play->Single[i], object))
                    {
                        found = &list[curr->T->Dest->Flags & 0xF];

                        if (!*found || curr->T->Priority > (*found)->Priority)
                        {
                            *found = curr->T;
                        }
                    }

                    curr = curr->Next;
                }
            }
        }
    }

    for (i = 0; i < play->NumSingle; i++)
    {
        if (list[i] &&
            (!play->Single[i].Sync || list[i]->Priority > play->Single[i].Sync->QueuePriority))
        {
            xAnimPlayStartTransition(play, list[i]);
        }
    }
}

// func_80008A44
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition")

void xAnimPlayUpdate(xAnimPlay* play, float32 timeDelta)
{
    uint32 i;
    xAnimSingle* single;

    for (i = 0; i < play->NumSingle; i++)
    {
        single = &play->Single[i];

        SingleUpdate(single, timeDelta);

        if (single->State->StateCallback)
        {
            single->State->StateCallback(single->State, single, play->Object);
        }
    }
}

// func_80008D08
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimPlayEval__FP9xAnimPlay")

void xAnimPoolCB(xMemPool* pool, void* data)
{
    int32 i;
    xAnimPlay* clone = (xAnimPlay*)data;
    xAnimPlay* play = (xAnimPlay*)pool->Buffer;
    xAnimSingle* clonesingle = (xAnimSingle*)(clone + 1);
    xAnimSingle* currsingle;
    xAnimActiveEffect* curract;

    clone->NumSingle = play->NumSingle;
    clone->Single = clonesingle;

    clonesingle += play->NumSingle;

    for (i = 0; i < play->NumSingle; i++)
    {
        clone->Single[i].Play = clone;

        if (play->Single[i].Blend)
        {
            clone->Single[i].Blend = clonesingle;

            clonesingle->Blend = NULL;
            clonesingle->Play = clone;

            clonesingle++;
        }
        else
        {
            clone->Single[i].Blend = NULL;
        }
    }

    curract = (xAnimActiveEffect*)clonesingle;

    for (i = 0; i < clone->NumSingle; i++)
    {
        clonesingle = &clone->Single[i];
        currsingle = &play->Single[i];

        while (clonesingle)
        {
            clonesingle->ActiveCount = currsingle->ActiveCount;

            if (currsingle->ActiveCount)
            {
                clonesingle->ActiveList = curract;

                curract += currsingle->ActiveCount;
            }
            else
            {
                clonesingle->ActiveList = NULL;
            }

            currsingle = currsingle->Blend;
            clonesingle = clonesingle->Blend;
        }
    }

    clone->Pool = pool;
}

// func_800090BC
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimPoolInit__FP8xMemPoolUiUiUiUi")

xAnimPlay* xAnimPoolAlloc(xMemPool* pool, void* object, xAnimTable* table,
                          xModelInstance* modelInst)
{
    xAnimPlay* play;

    play = (xAnimPlay*)xMemPoolAlloc(pool);

    xAnimPlaySetup(play, object, table, modelInst);

    return play;
}

void xAnimPoolFree(xAnimPlay* play)
{
    uint32 i;

    for (i = 0; i < play->NumSingle; i++)
    {
        EffectSingleStop(&play->Single[i]);

        if (play->Single[i].Blend)
        {
            EffectSingleStop(play->Single[i].Blend);
        }
    }

    xMemPoolFree(play->Pool, play);
}

// xAnimFileRawTime(xAnimFile*,float)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimFileRawTime__FP9xAnimFilef")