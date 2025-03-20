#include "xAnim.h"

#include "iAnim.h"
#include "iModel.h"

#include "xMemMgr.h"
#include "xMath.h"
#include "xModel.h"
#include "xMorph.h"
#include "xString.h"

#include <types.h>
#include <string.h>
#include <stdlib.h>
#include <cmath>

#include <dolphin.h>

static xMemPool sxAnimTempTranPool;

U32 gxAnimUseGrowAlloc = 0;

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

static U8 _xCheckAnimNameInner(const char* name, const char* pattern, S32 patternSize, char* extra,
                               S32* nameOut, S32* extraOut)
{
    const char* startExtra = NULL;
    char* initialExtra = extra;
    S32 patternCurrent = 0;
    S32 nameCurrent = 0;
    while (patternCurrent < patternSize)
    {
        U32 check = pattern[patternCurrent];
        switch (check)
        {
        case '+':
        case '?':
            patternCurrent++;
            if (nameCurrent == 0)
            {
                return 0;
            }
            nameCurrent++;
            if (check != '?')
            {
                // Holy shit I hate this please tell me there's a better way
            case '*':
                check = patternCurrent + 1;
                char nextPattern[128] = { 0 };
                nextPattern[0] = pattern[check];
                while (nextPattern[0] == '{' || nextPattern[0] == '}' || nextPattern[0] == '<' ||
                       nextPattern[0] == '>')
                {
                    check++;
                    nextPattern[0] = pattern[check];
                }

                if (nextPattern[0] == '(')
                {
                    S32 nextPatternCount = 0;
                    U8 first = 1;
                    S32 parenCount = 0;

                    while (pattern[check] != NULL && parenCount > -1)
                    {
                        if (pattern[check] == '(')
                        {
                            parenCount++;
                        }
                        else if (pattern[check] == ')')
                        {
                            parenCount--;
                        }
                        else if (parenCount == 0)
                        {
                            const char* IGNORE_PATTERNS = "{}()<>";
                            if (pattern[check] == '|')
                            {
                                first = 1;
                            }
                            else if (first && _xCharIn(pattern[check], IGNORE_PATTERNS) == 0)
                            {
                                first = 0;
                                nextPattern[nextPatternCount++] = pattern[check];
                            }
                        }
                        check++;
                    }
                    nextPattern[nextPatternCount] = NULL;
                }

                while (name[nameCurrent] != NULL &&
                       _xSingleCompare(name[nameCurrent], nextPattern) == 0)
                {
                    nameCurrent++;
                }
                patternCurrent++;
            }
            break;
        case '#':
            if (name[nameCurrent] < '0' || name[nameCurrent] > '9')
            {
                return 0;
            }
            nameCurrent++;

            for (const char* x = &name[nameCurrent]; *x >= '0' && *x <= '9'; x++)
            {
                nameCurrent++;
            }
            patternCurrent++;
            break;
        case '{':
            startExtra = &name[nameCurrent];
            patternCurrent++;
            break;
        case '}':
            S32 length = &name[nameCurrent] - startExtra;
            if (extra != NULL)
            {
                memcpy(extra, startExtra, length);
                extra[length] = NULL;
                extra = extra + length;
                *++extra = '\x01';
            }
            startExtra = NULL;
            patternCurrent++;
            break;
        case '(':
            patternCurrent++;
            U8 done = 0;
            const char* current = &pattern[patternCurrent];
            while (*current != ')' && *current != NULL)
            {
                const char* startPattern = current;
                while (*startPattern != NULL && *startPattern != ')' && *startPattern != '|')
                {
                    if (*startPattern == '(')
                    {
                        S32 pc = 1;
                        while (*startPattern != NULL && pc > 0)
                        {
                            if (*startPattern == ')')
                            {
                                pc--;
                            }
                            else if (*startPattern == '(')
                            {
                                pc++;
                            }
                            startPattern++;
                        }
                        if (*startPattern != NULL)
                        {
                            startPattern++;
                        }
                    }
                    else
                    {
                        startPattern++;
                    }
                }

                if (startPattern != current)
                {
                    S32 nameOut;
                    S32 extraOut;

                    // NOTE (Square): There is no DWARF for an extra variable here and this programming pattern seems
                    // extremely wack. I think this "variable" is completely compiler generated for some reason
                    U8 wtfman = 0;
                    if (!done &&
                        _xCheckAnimNameInner(&name[nameCurrent], current, startPattern - current,
                                             extra, &nameOut, &extraOut))
                    {
                        wtfman = 1;
                    }

                    if (wtfman != 0)
                    {
                        done = 1;
                        nameCurrent += nameOut;
                        extra = extra + extraOut;
                    }
                    else if (extra != NULL)
                    {
                        *extra = '\x01';
                    }
                }

                current = startPattern;
                if (*startPattern == '|')
                {
                    current++;
                }
            }
            if (*current != NULL)
            {
                current++;
            }
            patternCurrent += current - pattern;
            if (!done)
            {
                return 0;
            }
            break;
        case '<':
        {
            patternCurrent++;
            const char* current = &pattern[patternCurrent];
            const char* positiveEnd = current;
            while (*positiveEnd != NULL && *positiveEnd != ';' && *positiveEnd != '>')
            {
                positiveEnd++;
            }

            const char* negative = NULL;
            const char* negativeEnd = NULL;

            if (*positiveEnd == ';')
            {
                negativeEnd = positiveEnd + 1;
                negative = negativeEnd;
                while (*negativeEnd != NULL && *negativeEnd != '>')
                {
                    negativeEnd++;
                };
                positiveEnd = negativeEnd;
            }
            S32 nameOut;
            S32 extraOut;
            U8 matched = _xCheckAnimNameInner(&name[nameCurrent], current, positiveEnd - current,
                                              extra, &nameOut, &extraOut);
            if (matched != 0)
            {
                if (negative != NULL &&
                    _xCheckAnimNameInner(&name[nameCurrent], negative, negativeEnd - negative, NULL,
                                         NULL, NULL) != 0)
                {
                    if (extra != NULL)
                    {
                        *extra = '\x01';
                    }
                    matched = 0;
                }
                else
                {
                    nameCurrent = nameCurrent + nameOut;
                    extra += extraOut;
                }
            }

            if (*positiveEnd != NULL)
            {
                positiveEnd++;
            }
            patternCurrent += &positiveEnd[patternCurrent] - &pattern[patternCurrent];
            if (matched == 0)
            {
                return 0;
            }
            break;
        }
        case NULL:
            return 0;
        case ')':
        default:
            if (name[nameCurrent] != pattern[patternCurrent])
            {
                return 0;
            }
            nameCurrent++;
            patternCurrent++;
            break;
        }
    }

    if (nameOut != NULL)
    {
        *nameOut = nameCurrent;
    }
    if (extraOut != NULL)
    {
        *extraOut = extra - initialExtra;
    }
    return 1;
}

static bool _xCheckAnimName(const char* name, const char* pattern, char* extra)
{
    S32 patternSize, nameOut;
    U8 rc;

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
static F32 xatan2(F32 y, F32 x)
{
    return xAngleClampFast(std::atan2f(y, x));
}

#ifndef INLINE
float std::atan2f(float y, float x)
{
    return (float)atan2((double)y, (double)x);
}
#endif

float CalcRecipBlendMax(U16* arg0)
{
    float ret = 0.0f;
    while (arg0[0] != 0xFFFF)
    {
        float f3;
        if (arg0[1] == 0)
        {
            f3 = 0.0f;
        }
        else
        {
            f3 = 1.0f / (0.001f * arg0[1]);
        }

        f3 = 0.001f * arg0[0] + f3;
        if (f3 > ret)
        {
            ret = f3;
        }
        arg0 += 2;
    }

    if (ret == 0.0f)
    {
        return 0.0f;
    }
    return 1.0f / ret;
}

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

static void TransitionTimeInit(xAnimSingle* single, xAnimTransition* tran)
{
    if (tran->Flags & 0x20)
    {
        if ((tran->Dest->Data->FileFlags ^ single->State->Data->FileFlags) & 0x1000)
        {
            single->Time = tran->Dest->Data->Duration - single->Time;
        }
    }
    else
    {
        single->Time = ((tran->Dest->Flags & 0x100) && tran->DestTime == 0.0f) ?
                           single->State->Data->Duration * xurand() :
                           tran->DestTime;
    }
    single->LastTime = single->Time;
}

xAnimFile* xAnimFileNewBilinear(void** rawData, const char* name, U32 flags, xAnimFile** linkedList,
                                U32 numX, U32 numY)
{
    xAnimFile* afile;
    if (gxAnimUseGrowAlloc)
    {
        afile = (xAnimFile*)xMemGrowAlloc(gActiveHeap, numX * numY * 4 + sizeof(xAnimFile));
    }
    else
    {
        afile = (xAnimFile*)xMemAlloc(gActiveHeap, numX * numY * 4 + sizeof(xAnimFile), 0);
    }

    if (numX > 1 || numY > 1)
    {
        flags |= 0x4000;
    }

    if (**(U32**)rawData == 'QSPM')
    {
        flags |= 0x8000;
    }

    if (linkedList != NULL)
    {
        afile->Next = *linkedList;
        *linkedList = afile;
    }
    else
    {
        afile->Next = NULL;
    }

    afile->RawData = (void**)&afile[1];
    for (S32 i = 0; i < numX * numY; ++i)
    {
        afile->RawData[i] = rawData[i];
    }

    afile->Name = name;
    afile->ID = xStrHash(name);
    afile->FileFlags = flags;

    F32 dur;
    if (afile->FileFlags & 0x2000)
    {
        if (afile->FileFlags & 0x8000)
        {
            dur = xMorphSeqDuration(*(xMorphSeqFile**)afile->RawData);
        }
        else
        {
            dur = iAnimDuration(*afile->RawData);
        }
        dur = dur * 2.0f;
    }
    else if (afile->FileFlags & 0x8000)
    {
        dur = xMorphSeqDuration(*(xMorphSeqFile**)afile->RawData);
    }
    else
    {
        dur = iAnimDuration(*afile->RawData);
    }
    afile->Duration = dur;
    afile->TimeOffset = 0.0f;

    afile->BoneCount = flags & 0x8000 ? 0 : iAnimBoneCount(*rawData);

    afile->NumAnims[0] = numX;
    afile->NumAnims[1] = numY;

    return afile;
}

xAnimFile* xAnimFileNew(void* rawData, const char* name, U32 flags, xAnimFile** linkedList)
{
    return xAnimFileNewBilinear(&rawData, name, flags, linkedList, 1, 1);
}

void xAnimFileSetTime(xAnimFile* data, float duration, float timeOffset)
{
    F32 rawDuration;
    if (data->FileFlags & 0x8000)
    {
        rawDuration = xMorphSeqDuration(*(xMorphSeqFile**)data->RawData);
    }
    else
    {
        rawDuration = iAnimDuration(*data->RawData);
    }

    if (timeOffset > rawDuration - 0.1f)
    {
        timeOffset = rawDuration - 0.1f;
    }

    data->TimeOffset = timeOffset;
    if (duration > rawDuration - timeOffset)
    {
        duration = rawDuration - timeOffset;
    }

    data->Duration = (data->FileFlags & 0x2000) ? 2.0f * duration : duration;
}

void xAnimFileEval(xAnimFile* data, F32 time, F32* bilinear, U32 flags, xVec3* tran, xQuat* quat,
                   F32* arg6)
{
    S32 i;
    U32 numBones;
    F32 bilerp[2];
    U32 biindex[2];
    U32 biplus[2];
    xQuat* q0;
    xVec3* t0;
    xQuat* q1;
    xVec3* t1;

    time = xAnimFileRawTime(data, CLAMP(time, 0.0f, data->Duration));
    if (data->FileFlags & 0x8000)
    {
        return;
    }

    if (flags & 0x1)
    {
        numBones = 1;
    }
    else
    {
        numBones = data->BoneCount;
    }

    if (flags & 0x2)
    {
        numBones--;
    }

    if (numBones == 0)
    {
        return;
    }

    if (bilinear != NULL && data->FileFlags & 0x4000)
    {
        for (i = 0; i < 2; ++i)
        {
            F32 f30 = CLAMP(bilinear[i], 0.0f, data->NumAnims[i] - 1);
            f32 t = std::floorf(f30);
            bilerp[i] = f30 - t;
            biindex[i] = t;
            biplus[i] = MIN(biindex[i] + 1, data->NumAnims[i]);
        }

        q0 = (xQuat*)(giAnimScratch + 0x1560);
        t0 = (xVec3*)((U8*)q0 + 0x410);
        if (bilerp[0] && bilerp[1])
        {
            q1 = (xQuat*)(giAnimScratch + 0x1c80);
            t1 = (xVec3*)((U8*)q1 + 0x410);

            iAnimEval(data->RawData[biindex[0] + biindex[1] * data->NumAnims[0]], time, flags, tran,
                      quat);
            iAnimEval(data->RawData[biplus[0] + biindex[1] * data->NumAnims[0]], time, flags, t0,
                      q0);
            iAnimBlend(bilerp[0], 1.0f, NULL, NULL, numBones, tran, quat, t0, q0, tran, quat);

            iAnimEval(data->RawData[biindex[0] + biplus[1] * data->NumAnims[0]], time, flags, t0,
                      q0);
            iAnimEval(data->RawData[biplus[0] + biplus[1] * data->NumAnims[0]], time, flags, t1,
                      q1);
            iAnimBlend(bilerp[0], 1.0f, NULL, NULL, numBones, t0, q0, t1, q1, t0, q0);
            iAnimBlend(bilerp[1], 1.0f, NULL, NULL, numBones, tran, quat, t0, q0, tran, quat);
        }
        else if (bilerp[0])
        {
            iAnimEval(data->RawData[biindex[0] + biindex[1] * data->NumAnims[0]], time, flags, tran,
                      quat);
            iAnimEval(data->RawData[biplus[0] + biindex[1] * data->NumAnims[0]], time, flags, t0,
                      q0);
            iAnimBlend(bilerp[0], 1.0f, NULL, NULL, numBones, tran, quat, t0, q0, tran, quat);
        }
        else if (bilerp[1])
        {
            iAnimEval(data->RawData[biindex[0] + biindex[1] * data->NumAnims[0]], time, flags, tran,
                      quat);
            iAnimEval(data->RawData[biindex[0] + biplus[1] * data->NumAnims[0]], time, flags, t0,
                      q0);
            iAnimBlend(bilerp[0], 1.0f, NULL, NULL, numBones, tran, quat, t0, q0, tran, quat);
        }
        else
        {
            iAnimEval(data->RawData[biindex[0] + biindex[1] * data->NumAnims[0]], time, flags, tran,
                      quat);
        }
    }
    else
    {
        iAnimEval(data->RawData[0], time, flags, tran, quat);
    }
}

#ifndef INLINE
float std::floorf(float x)
{
    return (float)floor((double)x);
}
#endif

xAnimEffect* xAnimStateNewEffect(xAnimState* state, U32 flags, F32 startTime, F32 endTime,
                                 xAnimEffectCallback callback, U32 userDataSize)
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

xAnimState* xAnimTableNewState(xAnimTable* table, const char* name, U32 flags, U32 userFlags,
                               F32 speed, F32* boneBlend, F32* timeSnap, F32 fadeRecip,
                               U16* fadeOffset, void* callbackData,
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

static void _xAnimTableAddTransitionHelper(xAnimState* state, xAnimTransition* tran,
                                           U32& stateCount, U32& allocCount, xAnimState** stateList)
{
    if (tran->Flags & 0x10)
    {
        if (!DefaultHasTransition(state, tran, &stateCount))
        {
            stateList[allocCount] = state;
            allocCount++;
        }
    }
    else
    {
        if (!StateHasTransition(state, tran))
        {
            stateList[allocCount] = state;
            allocCount++;
            stateCount++;
        }
    }
}

// WIP
void _xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, const char* source,
                              const char* dest)
{
    //   unsigned char * buffer; // r29+0x110
    //     class xAnimState * * stateList; // r29+0x100
    //     unsigned int i; // r4
    //     unsigned int stateCount; // r30
    //     unsigned int allocCount; // r21
    //     char * stateName; // r29+0xFC
    //     class xAnimTransitionList * tlist; // r29+0xE0
    //     class xAnimTransition * substTransitionList[32]; // r29+0x230
    //     unsigned int substTransitionCount; // r29+0xD0
    //     unsigned char hasSubst; // r29+0xC0
    //     signed int i; // r5
    //     unsigned char isComplex; // r8
    //     char * COMPLEX_PATTERNS; // r7
    //     char * search; // r6
    //     class xAnimState * state; // r23
    //     char extra[128]; // r29+0x1B0
    //     char tempName[128]; // r29+0x130
    //     char * tempIterator; // r19
    //     char * extraIterator; // r18
    //     unsigned char allowMissingState; // r29+0xB0
    //     signed int i; // r17
    //     unsigned int extraIteratorLength; // r16
    //     class xAnimTransition * duplicatedTransition; // r17
    //     class xAnimTransitionList * curr; // r7

    U8* buffer = (U8*)giAnimScratch;
    xAnimState** stateList = (xAnimState**)(giAnimScratch + 0x400);
    S32 i;
    U32 stateCount = 0;
    U32 allocCount = 0;

    xAnimTransitionList* tlist;
    xAnimTransition* substTransitionList[32];

    char extra[128];
    char tempName[128];

    U8 bVar2 = false;
    U8 bVar1 = false;
    S32 iVar12 = 0;

    if (dest != NULL)
    {
        for (S32 i = 0; dest[i] != NULL; ++i)
        {
            if (dest[i] == '@' || dest[i] == '~')
            {
                bVar2 = true;
                break;
            }
        }
    }

    for (char* x = xStrTokBuffer(source, " ,\t\n\r", table); x != NULL;
         x = xStrTokBuffer(source, " ,\t\n\r", table))
    {
        bVar1 = dest != NULL;
        if (!bVar1)
        {
            for (char* it = x; *it != NULL; ++it)
            {
                if (_xCharIn(*it, "#+*?{}()<>|;") != 0)
                {
                    bVar1 = true;
                    break;
                }
            }
        }

        if (bVar1)
        {
            for (xAnimState* state = table->StateList; state != NULL; state = state->Next)
            {
                if (_xCheckAnimName(state->Name, x, tempName))
                {
                    if (bVar2)
                    {
                        for (const char* tempIterator = dest; *tempIterator != NULL; ++tempIterator)
                        {
                            if (*dest == '@' || *dest == '~')
                            {
                                bVar1 = *dest == '~';
                                U32 l = strlen(tempName);
                                strcpy(extra, tempName);
                            }
                            else
                            {
                                *extra = *dest;
                            }
                        }
                        *extra = NULL;
                        xAnimState* sp = xAnimTableGetState(table, extra);
                        if (bVar1 && sp == NULL)
                        {
                            continue;
                        }

                        xAnimTransition* duplicatedTransition = tran;
                        if (iVar12 != 0)
                        {
                            if (gxAnimUseGrowAlloc)
                            {
                                duplicatedTransition = (xAnimTransition*)xMemGrowAlloc(
                                    gActiveHeap, sizeof(xAnimTransition));
                            }
                            else
                            {
                                duplicatedTransition = (xAnimTransition*)xMemAlloc(
                                    gActiveHeap, sizeof(xAnimTransition), 0);
                            }
                            memcpy(duplicatedTransition, tran, sizeof(xAnimTransition));
                        }
                        duplicatedTransition->Dest = sp;
                        iVar12++;
                        substTransitionList[iVar12] = duplicatedTransition;
                    }
                    if (tran->Dest != state)
                    {
                        _xAnimTableAddTransitionHelper(state, tran, stateCount, allocCount,
                                                       stateList);
                    }
                }
            }
        }
        else
        {
            xAnimState* ssp = xAnimTableGetState(table, x);
            if (ssp != NULL && tran->Dest != ssp)
            {
                _xAnimTableAddTransitionHelper(ssp, tran, stateCount, allocCount, stateList);
            }
        }
    }

    xAnimTransitionList* curr;
    if (stateCount != 0)
    {
        if (gxAnimUseGrowAlloc)
        {
            curr = (xAnimTransitionList*)xMemGrowAlloc(gActiveHeap,
                                                       stateCount * sizeof(xAnimTransitionList));
        }
        else
        {
            curr = (xAnimTransitionList*)xMemAlloc(gActiveHeap,
                                                   stateCount * sizeof(xAnimTransitionList), 0);
        }
    }
    if (tran->Flags & 0x10)
    {
        for (S32 i = 0; i < allocCount; ++i)
        {
            if (DefaultOverride(stateList[i], tran) == 0)
            {
                if (tran->Conditional == NULL && stateList[i]->Default != NULL)
                {
                    curr->Next = NULL;
                    curr->T = bVar2 ? substTransitionList[i] : tran;
                }
            }
            else
            {
                curr->T = bVar2 ? substTransitionList[i] : tran;
                stateList[i]->Default = curr;
            }
        }
    }
    else
    {
        if (bVar2)
        {
            for (S32 i = 0; i < allocCount; ++i)
            {
                curr->T = substTransitionList[i];
                curr->Next = stateList[i]->List->Next;
            }
        }
        else
        {
            for (S32 i = 0; i < allocCount; ++i)
            {
                curr->T = tran;
                curr->Next = stateList[i]->List->Next;
            }
        }
    }
}

void xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, const char* source)
{
    _xAnimTableAddTransition(table, tran, source, NULL);
}

xAnimTransition* xAnimTableNewTransition(xAnimTable* table, const char* source, const char* dest,
                                         xAnimTransitionConditionalCallback conditional,
                                         xAnimTransitionCallback callback, U32 flags, U32 userFlags,
                                         F32 srcTime, F32 destTime, U16 priority, U16 queuePriority,
                                         F32 blendRecip, U16* blendOffset)
{
    xAnimTransition* tran;
    if (gxAnimUseGrowAlloc)
    {
        tran = (xAnimTransition*)xMemGrowAllocSize(sizeof(xAnimTransition));
    }
    else
    {
        tran = (xAnimTransition*)xMemAllocSize(sizeof(xAnimTransition));
    }

    if (blendRecip != 0.0f)
    {
        blendRecip = 1.0f / blendRecip;
    }

    tran->Next = table->TransitionList;
    table->TransitionList = tran;

    U8 isComplex = FALSE;
    if (dest == NULL || *dest == NULL)
    {
        tran->Dest = NULL;
    }
    else
    {
        for (S32 i = 0; dest[i] != NULL; ++i)
        {
            if (dest[i] == '@' || dest[i] == '~')
            {
                isComplex = true;
                break;
            }
        }
        tran->Dest = isComplex ? NULL : xAnimTableGetState(table, dest);
    }

    tran->Conditional = conditional;
    tran->Callback = callback;
    tran->Flags = flags;
    tran->UserFlags = userFlags;
    tran->SrcTime = srcTime;
    tran->DestTime = destTime;
    tran->Priority = priority;
    tran->QueuePriority = queuePriority;

    tran->BlendRecip = blendOffset != NULL ? CalcRecipBlendMax(blendOffset) : blendRecip;
    tran->BlendOffset = blendOffset;

    _xAnimTableAddTransition(table, tran, source, isComplex ? dest : NULL);

    return tran;
}

void xAnimTableAddFile(xAnimTable* table, xAnimFile* file, const char* states)
{
    U8* buffer = (U8*)giAnimScratch;
    char* stateName = xStrTokBuffer(states, " ,\t\n\r", buffer);
    while (stateName != NULL)
    {
        xAnimTableAddFileID(table, file, xStrHash(stateName), 0, 0);
        stateName = xStrTokBuffer(NULL, " ,\t\n\r", buffer);
    }
}

xAnimState* xAnimTableGetStateID(xAnimTable* table, U32 ID);

xAnimState* xAnimTableAddFileID(xAnimTable* table, xAnimFile* file, U32 stateID, U32 subStateID,
                                U32 subStateCount)
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

static void EffectSingleLoop(xAnimSingle* single)
{
    EffectSingleRun(single);
    xAnimActiveEffect* alist = single->ActiveList;
    U32 index = 0;
    U32 count = single->ActiveCount;
    while (index < count && alist[index].Effect != NULL)
    {
        if (!(alist[index].Effect->Flags & 0x20))
        {
            alist[index].Effect->Callback(3, &alist[index], single, single->Play->Object);

            EffectActiveRemove(&alist[index], index, count);
        }
        else
        {
            index++;
        }
    }

    xAnimEffect* effect = single->State->Effects;
    while (effect != NULL && effect->StartTime < 0.0f)
    {
        effect = effect->Next;
    }
    single->Effect = effect;
}

static void EffectSingleStop(xAnimSingle* single)
{
    if (single->State == NULL || single->LastTime == -1.0f)
    {
        return;
    }

    for (U32 i = 0; single->ActiveCount > i && single->ActiveList[i].Effect != NULL; ++i)
    {
        if (single->ActiveList[i].Effect->Flags & 0x2)
        {
            single->ActiveList[i].Effect->Callback(3, &single->ActiveList[i], single,
                                                   single->Play->Object);
        }
    }

    single->ActiveList->Effect = NULL;
    for (xAnimEffect* effect = single->Effect; effect != NULL; effect = effect->Next)
    {
        xAnimActiveEffect tempActive;
        if ((effect->Flags & 0x9) == 0x9)
        {
            tempActive.Effect = effect;
            tempActive.Handle = effect->Callback(1, &tempActive, single, single->Play->Object);

            if (effect->Flags & 0x2)
            {
                effect->Callback(3, &tempActive, single, single->Play->Object);
            }
        }
    }

    single->Effect = NULL;
}

static void StopUpdate(xAnimSingle* single)
{
    if (single->Time > single->State->Data->Duration)
    {
        single->Time = single->State->Data->Duration;
        single->CurrentSpeed = 0.0f;
    }
}

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

void xAnimPlaySetState(xAnimSingle* single, xAnimState* state, F32 startTime)
{
    EffectSingleStop(single);
    if (single->Blend)
    {
        EffectSingleStop(single->Blend);
        single->Blend->State = NULL;
    }

    single->State = state;
    if (state == NULL)
    {
        return;
    }

    single->Time =
        (state->Flags & 0x100 && startTime == 0.0f) ? state->Data->Duration * xurand() : startTime;
    single->CurrentSpeed = state->Speed;
    single->BilinearLerp[0] = 0.0f;
    single->BilinearLerp[1] = 0.0f;
    single->Effect = NULL;
    memset(single->ActiveList, 0, single->ActiveCount * sizeof(xAnimActiveEffect));
    single->LastTime = -1.0f;
    single->Sync = NULL;

    if (single->Tran != NULL && single->Tran->Flags & 0x2)
    {
        xMemPoolFree(&sxAnimTempTranPool, single->Tran);
    }

    single->Tran = NULL;
    single->BlendFactor = 0.0f;
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

void xAnimPlaySetup(xAnimPlay* play, void* object, xAnimTable* table, xModelInstance* modelInst)
{
    play->BoneCount = modelInst->BoneCount;
    play->Object = object;
    play->Table = table;
    play->ModelInst = modelInst;

    modelInst->Anim = play;
    modelInst->Flags |= 0x104;

    if (table->MorphIndex != 0)
    {
        modelInst->Flags |= 0x80;
    }

    for (S32 i = 0; i < play->NumSingle; ++i)
    {
        play->Single[i].SingleFlags = (1 << i & table->MorphIndex) ? 0x8000 : 0x1;
        play->Single[i].State = NULL;
        play->Single[i].Tran = NULL;
        if (play->Single[i].Blend != NULL)
        {
            play->Single[i].Blend->State = NULL;
        }
    }
    xAnimPlaySetState(play->Single, table->StateList, 0.0f);
}

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

void xAnimPlayStartTransition(xAnimPlay* play, xAnimTransition* transition)
{
    xAnimSingle* single = &play->Single[transition->Dest->Flags & 0xf];
    xAnimSingle* bl = single->Blend;

    if (transition->SrcTime != 0.0f || (transition->Flags & 0x4 && bl != NULL && bl->State))
    {
        single->Sync = transition;
        return;
    }

    if (bl != NULL && bl->State != NULL)
    {
        EffectSingleStop(bl);
        bl->State = NULL;
        single->BlendFactor = 0.0f;
    }

    if (transition->BlendRecip == 0.0f || single->Blend == NULL)
    {
        EffectSingleStop(single);
        if (single->Tran != NULL && single->Tran->Flags & 0x2)
        {
            xMemPoolFree(&sxAnimTempTranPool, single->Tran);
        }
        single->Tran = NULL;
    }
    else
    {
        if (single->State != NULL)
        {
            bl->State = single->State;
            bl->Time = single->Time;
            bl->CurrentSpeed = single->CurrentSpeed;
            bl->BilinearLerp[0] = single->BilinearLerp[0];
            bl->BilinearLerp[1] = single->BilinearLerp[1];
            bl->Effect = single->Effect;

            bl->LastTime = single->LastTime;

            memcpy(bl->ActiveList, single->ActiveList,
                   single->ActiveCount * sizeof(xAnimActiveEffect));
            single->ActiveList[0].Effect = NULL;
        }

        if (single->Tran != NULL && single->Tran->Flags & 0x2)
        {
            xMemPoolFree(&sxAnimTempTranPool, single->Tran);
        }
        single->Tran = transition;
        single->BlendFactor = 0.0000001f;
    }

    TransitionTimeInit(single, transition);
    single->State = transition->Dest;
    single->CurrentSpeed = single->State->Speed;
    single->BilinearLerp[0] = 0.0f;
    single->BilinearLerp[1] = 0.0f;
    single->Sync = NULL;
    EffectSingleStart(single);

    if (transition->Dest->BeforeEnter != NULL)
    {
        transition->Dest->BeforeEnter(play, transition->Dest);
    }

    if (transition->Callback != NULL)
    {
        transition->Callback(transition, single, single->Play->Object);
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

void xAnimPlayEval(xAnimPlay* play)
{
    U32 i;
    U32 bone;
    xQuat* quatresult = (xQuat*)giAnimScratch;
    xVec3* tranresult = (xVec3*)((U8*)quatresult + 0x410);

    if (play->BoneCount > 1)
    {
        xQuat* quatblend = (xQuat*)((U8*)quatresult + 0x720);
        xVec3* tranblend = (xVec3*)((U8*)quatblend + 0x410);
        SingleEval(play->Single, tranresult, (xQuat*)giAnimScratch);
        for (i = 1; i < play->NumSingle; ++i)
        {
            xAnimSingle* si = &play->Single[i];
            if (si->State == NULL || si->SingleFlags & 0x8000)
            {
                continue;
            }
            F32 blendF = 1.0f;
            F32 blendR = 1.0f;
            U16* blendO = NULL;
            SingleEval(si, tranblend, quatblend);

            if ((si->Blend == NULL || si->Blend->State == NULL) && si->BlendFactor)
            {
                if (si->Tran != NULL)
                {
                    blendF = si->BlendFactor;
                    blendR = si->Tran->BlendRecip;
                    blendO = si->Tran->BlendOffset;
                }
                else
                {
                    blendF = -si->BlendFactor;
                    blendR = si->State->FadeRecip;
                    blendO = si->State->FadeOffset;
                }
            }

            if ((si->SingleFlags & 0x3) == 2)
            {
                iAnimBlend(blendF, blendR, blendO, si->State->BoneBlend, play->BoneCount - 1,
                           tranblend + 1, quatblend + 1, NULL, NULL, tranblend + 1, quatblend + 1);

                for (bone = 1; bone < play->BoneCount; ++bone)
                {
                    tranresult[bone].x += tranblend[bone].x;
                    tranresult[bone].y += tranblend[bone].y;
                    tranresult[bone].z += tranblend[bone].z;
                    xQuatMul(&quatresult[bone], &quatresult[bone], &quatblend[bone]);
                }
            }
            else
            {
                iAnimBlend(blendF, blendR, blendO, si->State->BoneBlend, play->BoneCount - 1,
                           tranresult + 1, quatresult + 1, tranblend + 1, quatblend + 1,
                           tranresult + 1, quatresult + 1);
            }
        }
    }
    memset(tranresult, 0, sizeof(xVec3));
    memset(quatresult, 0, sizeof(xQuat));
    if (play->Single->State->BeforeAnimMatrices != NULL)
    {
        play->Single->State->BeforeAnimMatrices(play, quatresult, tranresult, play->BoneCount);
    }

    if (play->BeforeAnimMatrices != NULL)
    {
        play->BeforeAnimMatrices(play, quatresult, tranresult, play->BoneCount);
    }
    iModelAnimMatrices(play->ModelInst->Data, quatresult, tranresult, &play->ModelInst->Mat[1]);
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

// WIP
void xAnimPoolInit(xMemPool* pool, U32 count, U32 singles, U32 blendFlags, U32 effectMax)
{
    // unsigned int size; // r22
    // unsigned int i; // r7
    // void* buffer; // r2
    effectMax += effectMax & 1;
    U32 size = (1 << singles) - 1;
    void* buffer = xMemAllocSize(count * size);

    xAnimPlay* play;
    xAnimSingle* currsingle = (xAnimSingle*)((U32)buffer + 0x20 + singles * sizeof(xAnimSingle));
    xAnimActiveEffect* curract; // r2

    for (U32 i = 0; i < singles; ++i)
    {
        if (blendFlags & (1 << (i % 0x40)))
        {
            ((xAnimSingle*)((U32)buffer + 8))[i].Blend = currsingle;
            currsingle->Blend = NULL;
            currsingle++;
        }
        else
        {
            ((xAnimSingle*)((U32)buffer + 8))[i].Blend = NULL;
        }
    }

    for (U32 i = 0; i < *(U16*)((U32)buffer + 4); ++i)
    {
        xAnimSingle* s2 = &((xAnimSingle*)((U32)buffer + 8))[i];
        if (effectMax != 0)
        {
            for (; s2 != NULL; s2 = s2->Blend)
            {
                s2->ActiveCount = effectMax;
                s2->ActiveList = (xAnimActiveEffect*)currsingle;
                ((xAnimActiveEffect*)currsingle) += effectMax;
            }
        }
        else
        {
            for (; s2 != NULL; s2 = s2->Blend)
            {
                s2->ActiveCount = 0;
                s2->ActiveList = NULL;
            }
        }
    }

    *(xMemPool**)((U32)buffer + 0x14) = pool;
    xMemPoolSetup(pool, buffer, 0, 1, xAnimPoolCB, size, count, count / 2);
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
