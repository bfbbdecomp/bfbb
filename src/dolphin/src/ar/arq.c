
#include <dolphin.h>
#include <dolphin/ar.h>

#include "ax/__ax.h"

#ifdef DEBUG
const char* __ARQVersion = "<< Dolphin SDK - ARQ\tdebug build: Apr  5 2004 03:56:20 (0x2301) >>";
#else
const char* __ARQVersion = "<< Dolphin SDK - ARQ\trelease build: Apr 17 2003 12:33:56 (0x2301) >>";
#endif

static ARQRequest* __ARQRequestQueueHi;
static ARQRequest* __ARQRequestTailHi;
static ARQRequest* __ARQRequestQueueLo;
static ARQRequest* __ARQRequestTailLo;
static ARQRequest* __ARQRequestQueueTemp;
static ARQRequest* __ARQRequestTailTemp;
static ARQRequest* __ARQRequestPendingHi;
static ARQRequest* __ARQRequestPendingLo;
static ARQCallback __ARQCallbackHi;
static ARQCallback __ARQCallbackLo;
static u32 __ARQChunkSize;
static BOOL __ARQ_init_flag;

void __ARQServiceQueueLo(void)
{
    if (__ARQRequestPendingLo == 0 && __ARQRequestQueueLo)
    {
        __ARQRequestPendingLo = __ARQRequestQueueLo;
        __ARQRequestQueueLo = __ARQRequestQueueLo->next;
    }

    if (__ARQRequestPendingLo)
    {
        if (__ARQRequestPendingLo->length <= __ARQChunkSize)
        {
            if (__ARQRequestPendingLo->type == 0)
            {
                ARStartDMA(__ARQRequestPendingLo->type, __ARQRequestPendingLo->source,
                           __ARQRequestPendingLo->dest, __ARQRequestPendingLo->length);
            }
            else
            {
                ARStartDMA(__ARQRequestPendingLo->type, __ARQRequestPendingLo->dest,
                           __ARQRequestPendingLo->source, __ARQRequestPendingLo->length);
            }
            __ARQCallbackLo = __ARQRequestPendingLo->callback;
        }
        else if (__ARQRequestPendingLo->type == 0)
        {
            ARStartDMA(__ARQRequestPendingLo->type, __ARQRequestPendingLo->source,
                       __ARQRequestPendingLo->dest, __ARQChunkSize);
        }
        else
        {
            ARStartDMA(__ARQRequestPendingLo->type, __ARQRequestPendingLo->dest,
                       __ARQRequestPendingLo->source, __ARQChunkSize);
        }

        __ARQRequestPendingLo->length -= __ARQChunkSize;
        __ARQRequestPendingLo->source += __ARQChunkSize;
        __ARQRequestPendingLo->dest += __ARQChunkSize;
    }
}

void __ARQCallbackHack(u32 unused)
{
}

void __ARQInterruptServiceRoutine()
{
    if (__ARQCallbackHi)
    {
        __ARQCallbackHi((u32)__ARQRequestPendingHi);
        __ARQRequestPendingHi = NULL;
        __ARQCallbackHi = NULL;
    }
    else if (__ARQCallbackLo)
    {
        __ARQCallbackLo((u32)__ARQRequestPendingLo);
        __ARQRequestPendingLo = NULL;
        __ARQCallbackLo = NULL;
    }

    if (__ARQRequestQueueHi)
    {
        if (__ARQRequestQueueHi->type == 0)
        {
            ARStartDMA(__ARQRequestQueueHi->type, __ARQRequestQueueHi->source,
                       __ARQRequestQueueHi->dest, __ARQRequestQueueHi->length);
        }
        else
        {
            ARStartDMA(__ARQRequestQueueHi->type, __ARQRequestQueueHi->dest,
                       __ARQRequestQueueHi->source, __ARQRequestQueueHi->length);
        }
        __ARQCallbackHi = __ARQRequestQueueHi->callback;
        __ARQRequestPendingHi = __ARQRequestQueueHi;
        __ARQRequestQueueHi = __ARQRequestQueueHi->next;
    }

    if (__ARQRequestPendingHi == 0)
    {
        __ARQServiceQueueLo();
    }
}

void ARQInit(void)
{
    if (__ARQ_init_flag != TRUE)
    {
        OSRegisterVersion(__ARQVersion);

        __ARQRequestQueueHi = __ARQRequestQueueLo = NULL;
        __ARQChunkSize = 0x1000;
        ARRegisterDMACallback(__ARQInterruptServiceRoutine);
        __ARQRequestPendingHi = NULL;
        __ARQRequestPendingLo = NULL;
        __ARQCallbackHi = NULL;
        __ARQCallbackLo = NULL;
        __ARQ_init_flag = TRUE;
    }
}

void ARQPostRequest(ARQRequest* request, u32 owner, u32 type, u32 priority, u32 source, u32 dest,
                    u32 length, ARQCallback callback)
{
    BOOL enabled;

    request->next = NULL;
    request->owner = owner;
    request->type = type;
    request->source = source;
    request->dest = dest;
    request->length = length;

    if (callback)
    {
        request->callback = callback;
    }
    else
    {
        request->callback = (ARQCallback)&__ARQCallbackHack;
    }

    enabled = OSDisableInterrupts();

    switch (priority)
    {
    case ARQ_PRIORITY_LOW:

        if (__ARQRequestQueueLo)
        {
            __ARQRequestTailLo->next = request;
        }
        else
        {
            __ARQRequestQueueLo = request;
        }
        __ARQRequestTailLo = request;

        break;

    case ARQ_PRIORITY_HIGH:

        if (__ARQRequestQueueHi)
        {
            __ARQRequestTailHi->next = request;
        }
        else
        {
            __ARQRequestQueueHi = request;
        }

        __ARQRequestTailHi = request;

        break;
    }

    if ((__ARQRequestPendingHi == NULL) && (__ARQRequestPendingLo == NULL))
    {
        if (__ARQRequestQueueHi)
        {
            if (__ARQRequestQueueHi->type == 0)
            {
                ARStartDMA(__ARQRequestQueueHi->type, __ARQRequestQueueHi->source,
                           __ARQRequestQueueHi->dest, __ARQRequestQueueHi->length);
            }
            else
            {
                ARStartDMA(__ARQRequestQueueHi->type, __ARQRequestQueueHi->dest,
                           __ARQRequestQueueHi->source, __ARQRequestQueueHi->length);
            }
            __ARQCallbackHi = __ARQRequestQueueHi->callback;
            __ARQRequestPendingHi = __ARQRequestQueueHi;
            __ARQRequestQueueHi = __ARQRequestQueueHi->next;
        }

        if (__ARQRequestPendingHi == NULL)
        {
            __ARQServiceQueueLo();
        }
    }

    OSRestoreInterrupts(enabled);
}

void ARQRemoveRequest(ARQRequest* request)
{
    ARQRequest* thisRequest;
    BOOL level;

    level = OSDisableInterrupts();
    __ARQRequestQueueTemp = NULL;
    __ARQRequestTailTemp = NULL;
    for (thisRequest = __ARQRequestQueueHi; thisRequest; thisRequest = thisRequest->next)
    {
        if (thisRequest != request)
        {
            if (!__ARQRequestQueueTemp)
            {
                __ARQRequestQueueTemp = thisRequest;
                __ARQRequestTailTemp = thisRequest;
            }
            else
            {
                __ARQRequestTailTemp->next = thisRequest;
                __ARQRequestTailTemp = thisRequest;
            }
        }
    }

    __ARQRequestQueueHi = __ARQRequestQueueTemp;
    __ARQRequestTailHi = __ARQRequestTailTemp;
    __ARQRequestQueueTemp = NULL;
    __ARQRequestTailTemp = NULL;
    for (thisRequest = __ARQRequestQueueLo; thisRequest; thisRequest = thisRequest->next)
    {
        if (thisRequest != request)
        {
            if (!__ARQRequestQueueTemp)
            {
                __ARQRequestQueueTemp = thisRequest;
                __ARQRequestTailTemp = thisRequest;
            }
            else
            {
                __ARQRequestTailTemp->next = thisRequest;
                __ARQRequestTailTemp = thisRequest;
            }
        }
    }

    __ARQRequestQueueLo = __ARQRequestQueueTemp;
    __ARQRequestTailLo = __ARQRequestTailTemp;
    OSRestoreInterrupts(level);
}

void ARQFlushQueue(void)
{
    BOOL level;

    level = OSDisableInterrupts();
    __ARQRequestQueueHi = NULL;
    __ARQRequestTailHi = NULL;
    __ARQRequestQueueLo = NULL;
    __ARQRequestTailLo = NULL;

    OSRestoreInterrupts(level);
}
