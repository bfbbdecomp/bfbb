#include "xAnim.h"

#include "iAnim.h"
#include "xMemMgr.h"
#include "xMath.h"
#include "xMorph.h"
#include "xString.h"

#include <types.h>
#include <string.h>
#include <stdlib.h>
#include <cmath>

#include <dolphin.h>

extern xMemPool sxAnimTempTranPool;

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

F32 xAnimFileRawTime(xAnimFile* data, float);

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
    char* x = (char*)(giAnimScratch + 0x400);
    U8 bVar2 = false;
    U8 bVar1 = false;

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

    char* str = xStrTokBuffer(source, " ,\t\n\r", table);
    // Note: might be compiler generated to lift this from the loop
    U8 bVar3 = dest != NULL; // isComplex??
    char* COMPLEX_PATTERNS = "{}()<>";
    for (S32 i = 0; i < 2; ++i)
    {
        U8 bVar4 = bVar3;
        if (bVar4)
        {
            for (char* it = str; *it != NULL; ++it)
            {
                if (_xCharIn(*it, "#+*?{}()<>|;") != 0)
                {
                    bVar4 = true;
                    break;
                }
            }
        }

        if (bVar4)
        {
            xAnimState* state = table->StateList;
            while (1)
            {
                // _xCheckAnimName(state->Name, str, )
            }
        }
    }
    tran->Flags = bVar1;
}

void xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, const char* source)
{
    _xAnimTableAddTransition(table, tran, source, NULL);
}

void xAnimTableAddFile(xAnimTable* table, xAnimFile* file, char* states)
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

void EffectSingleLoop(xAnimSingle* single)
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

void EffectSingleStop(xAnimSingle* single);
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
