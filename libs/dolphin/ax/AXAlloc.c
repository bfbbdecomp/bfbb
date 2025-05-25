#include <dolphin.h>
#include <dolphin/ax.h>

#include "dolphin/ax/__ax.h"

static AXVPB* __AXStackHead[AX_PRIORITY_STACKS];
static AXVPB* __AXStackTail[AX_PRIORITY_STACKS];

static AXVPB* __AXCallbackStack;

AXVPB* __AXGetStackHead(u32 priority)
{
    return __AXStackHead[priority];
}

void __AXServiceCallbackStack(void)
{
    AXVPB* p;

    for (p = __AXPopCallbackStack(); p; p = __AXPopCallbackStack())
    {
        if (p->priority != 0)
        {
            if (p->callback)
            {
                p->callback(p);
            }

            __AXRemoveFromStack(p);
            __AXPushFreeStack(p);
        }
    }
}

void __AXAllocInit(void)
{
#ifdef DEBUG
    OSReport("Initializing AXAlloc code module\n");
#endif
    u32 i;

    __AXCallbackStack = NULL;
    for (i = 0; i < AX_PRIORITY_STACKS; i++)
    {
        __AXStackHead[i] = __AXStackTail[i] = 0;
    }
}

void __AXAllocQuit(void)
{
#ifdef DEBUG
    OSReport("Shutting down AXAlloc code module\n");
#endif
    u32 i;

    __AXCallbackStack = NULL;
    for (i = 0; i < AX_PRIORITY_STACKS; i++)
    {
        __AXStackHead[i] = __AXStackTail[i] = 0;
    }
}

void __AXPushFreeStack(AXVPB* p)
{
    p->next = __AXStackHead[0];
    __AXStackHead[0] = p;
    p->priority = 0;
}

// AXVPB* __AXPopFreeStack(void)
// {
//     AXVPB* p;

//     p = (void*)(u32)&__AXStackHead[0]->next;
//     if (p)
//     {
//         __AXStackHead[0] = p->next;
//     }
//     return p;
// }

void __AXPushCallbackStack(AXVPB* p)
{
    p->next1 = __AXCallbackStack;
    __AXCallbackStack = p;
}

AXVPB* __AXPopCallbackStack(void)
{
    AXVPB* p;

    p = (void*)(u32)&__AXCallbackStack[0];
    if (p)
    {
        __AXCallbackStack = p->next1;
    }
    return p;
}

void __AXRemoveFromStack(AXVPB* p)
{
    u32 i;
    AXVPB* head;
    AXVPB* tail;

    i = p->priority;
    head = __AXStackHead[i];
    tail = __AXStackTail[i];
    if (head == tail)
    {
        __AXStackHead[i] = __AXStackTail[i] = 0;
        return;
    }
    if (p == head)
    {
        __AXStackHead[i] = p->next;
        __AXStackHead[i]->prev = 0;
        return;
    }
    if (p == tail)
    {
        __AXStackTail[i] = p->prev;
        __AXStackTail[i]->next = 0;
        return;
    }
    head = p->prev;
    tail = p->next;
    head->next = tail;
    tail->prev = head;
}

// void __AXPushStackHead(AXVPB* p, u32 priority)
// {
//     p->next = __AXStackHead[priority];
//     p->prev = 0;
//     if (p->next)
//     {
//         __AXStackHead[priority]->prev = p;
//         __AXStackHead[priority] = p;
//     }
//     else
//     {
//         __AXStackTail[priority] = p;
//         __AXStackHead[priority] = p;
//     }
//     p->priority = priority;
// }

// AXVPB* __AXPopStackFromBottom(u32 priority)
// {
//     AXVPB* p;

//     p = NULL;
//     if (__AXStackHead[priority])
//     {
//         if (__AXStackHead[priority] == __AXStackTail[priority])
//         {
//             p = __AXStackHead[priority];
//             __AXStackHead[priority] = __AXStackTail[priority] = 0;
//         }
//         else if (__AXStackTail[priority])
//         {
//             p = __AXStackTail[priority];
//             __AXStackTail[priority] = p->prev;
//             __AXStackTail[priority]->next = 0;
//         }
//     }
//     return p;
// }

void AXFreeVoice(AXVPB* p)
{
    int old;

    old = OSDisableInterrupts();
    __AXRemoveFromStack(p);
    if (p->pb.state == 1)
    {
        p->depop = 1;
    }
    __AXSetPBDefault(p);
    __AXPushFreeStack(p);
    OSRestoreInterrupts(old);
}

AXVPB* AXAcquireVoice(u32 priority, void (*callback)(void*), u32 userContext)
{
    // priority r25
    // userContext r 28
    // AXStackHead r26
    int old; // r31
    AXVPB* p; // r30
    u32 i; // r29

    old = OSDisableInterrupts();
    p = (void*)(u32)&__AXStackHead[0]->next;
    if (p != 0)
    {
        __AXStackHead[0] = __AXStackHead[0]->next;
    }

    if (p == 0)
    {
        for (i = 1; i < priority; i++)
        {
            p = NULL;
            if (__AXStackHead[i])
            {
                if (__AXStackHead[i] == __AXStackTail[i])
                {
                    p = __AXStackHead[i];
                    __AXStackHead[i] = __AXStackTail[i] = 0;
                }
                else if (__AXStackTail[i])
                {
                    p = __AXStackTail[i];
                    __AXStackTail[i] = p->prev;
                    __AXStackTail[i]->next = 0;
                }
            }
            if (p)
            {
                if (p->pb.state == 1)
                {
                    p->depop = 1;
                }
                if (p->callback != 0)
                {
                    p->callback(p);
                }
                break;
            }
        }
    }
    if (p)
    {
        p->next = __AXStackHead[i];
        p->prev = 0;
        if (p->next)
        {
            __AXStackHead[i]->prev = p;
            __AXStackHead[i] = p;
        }
        else
        {
            __AXStackTail[i] = p;
            __AXStackHead[i] = p;
        }
        p->priority = i;
        p->callback = callback;
        p->userContext = userContext;
        __AXSetPBDefault(p);
    }
    OSRestoreInterrupts(old);
    return p;
}
