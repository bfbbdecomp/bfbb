#include "xAnim.h"

#include "iAnim.h"
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

bool _xCheckAnimNameInner(const char* name, const char* pattern, S32 patternSize, char* extra,
                          S32* nameOut, S32* extraOut);

static bool _xCheckAnimName(const char* name, const char* pattern, char* extra)
{
    S32 patternSize, nameOut;
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

void xAnimTempTransitionInit(U32 count)
{
    xMemPoolSetup(&sxAnimTempTranPool, xMemAllocSize(count * sizeof(xAnimTransition)), 0, 0, NULL,
                  sizeof(xAnimTransition), count, count / 2);
}

// TODO: move to xMathInlines.h
F32 xatan2(F32 y, F32 x)
{
    return xAngleClampFast(std::atan2f(y, x));
}

#ifndef INLINE
float std::atan2f(float y, float x)
{
    return (float)atan2((double)y, (double)x);
}
#endif

float CalcRecipBlendMax(U16*);

static U32 StateHasTransition(xAnimState* state, xAnimTransition* tran)
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

static U32 DefaultHasTransition(xAnimState* state, xAnimTransition* tran, U32* r5)
{
    U32 r7 = 1;
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

static U32 DefaultOverride(xAnimState* state, xAnimTransition* tran)
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

#if 0
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

xAnimFile* xAnimFileNewBilinear(void** rawData, const char* name, U32 flags,
                                xAnimFile** linkedList, U32 numX, U32 numY);

xAnimFile* xAnimFileNew(void* rawData, const char* name, U32 flags, xAnimFile** linkedList)
{
    return xAnimFileNewBilinear(&rawData, name, flags, linkedList, 1, 1);
}

void xAnimFileEval(xAnimFile* data, F32 time, F32* bilinear, U32 flags, xVec3* tran,
                   xQuat* quat, F32*);

#ifndef INLINE
float std::floorf(float x)
{
    return (float)floor((double)x);
}
#endif

xAnimEffect* xAnimStateNewEffect(xAnimState* state, U32 flags, F32 startTime,
                                 F32 endTime, xAnimEffectCallback callback, U32 userDataSize)
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

xAnimTable* xAnimTableNew(const char* name, xAnimTable** linkedList, U32 userFlags)
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
    U32 entry;

    if (state->MultiFile)
    {
        entry = rand() % state->MultiFile->Count;

        state->Data = state->MultiFile->Files[entry].File;
    }
}

#ifdef NON_MATCHING
xAnimState* xAnimTableNewState(xAnimTable* table, const char* name, U32 flags, U32 userFlags,
                               F32 speed, F32* boneBlend, F32* timeSnap,
                               F32 fadeRecip, U16* fadeOffset, void* callbackData,
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

static void _xAnimTableAddTransitionHelper(xAnimState* state, xAnimTransition* tran, U32& r5,
                                           U32& r6, xAnimState** r7)
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

void _xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, const char* source,
                              const char* dest);

void xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, const char* source)
{
    _xAnimTableAddTransition(table, tran, source, NULL);
}

xAnimState* xAnimTableGetStateID(xAnimTable* table, U32 ID);

xAnimState* xAnimTableAddFileID(xAnimTable* table, xAnimFile* file, U32 stateID,
                                U32 subStateID, U32 subStateCount)
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

            U32 count = state->MultiFile->Count;

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

xAnimState* xAnimTableGetStateID(xAnimTable* table, U32 ID)
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
    U32 index = 0;
    U32 count = single->ActiveCount;
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

static void EffectActiveRemove(xAnimActiveEffect* active, U32 index, U32 count)
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

static U32 EffectPlaying(xAnimSingle* single, xAnimEffect* effect)
{
    U32 index = 0;

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
    F32 time = single->Time;
    U32 flags;

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
    F32 time = single->Time;
    xAnimActiveEffect* alist = single->ActiveList;
    U32 index = 0;
    U32 count = single->ActiveCount;

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
    F32 time = single->Time;
    U32 flags;

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

void EffectSingleLoop(xAnimSingle* single);

// EffectSingleStop(xAnimSingle*)

void EffectSingleStop(xAnimSingle* single);

// StopUpdate(xAnimSingle*)

static void LoopUpdate(xAnimSingle* single)
{
    F32 time = single->Time;
    F32 duration = single->State->Data->Duration;

    if (time > duration)
    {
        single->Time = duration;

        EffectSingleLoop(single);

        single->Time = time - duration;
    }
}

void SingleUpdate(xAnimSingle* single, F32 timeDelta);

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

void xAnimPlaySetup(xAnimPlay* play, void* object, xAnimTable* table, xModelInstance* modelInst);

void xAnimPlayChooseTransition(xAnimPlay* play)
{
    U32 i;
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

void xAnimPlayUpdate(xAnimPlay* play, F32 timeDelta)
{
    U32 i;
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

void xAnimPoolCB(xMemPool* pool, void* data)
{
    S32 i;
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
    U32 i;

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
