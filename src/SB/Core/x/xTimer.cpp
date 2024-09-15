#include "xTimer.h"
#include "xMath.h"

#include <types.h>

static U32 sPauseTimerHash[] = 
{
    0xBC345600, 0xBC345609,
    0xBC345683, 0xBC34568C,
    0xBC345706, 0xBC34570F,
    0xBC345789, 0xBC345792,
    0xBC34580C, 0xBC345815,
    0xBC34588F, 0xBC345898,
    0xBC345912, 0xBC34591B,
    0xBC345995, 0xBC34599E,
    0xBC345A18, 0xBC345A21,
    0xBC345A9B, 0xBC345AA4,
};

F32 GetRandomizedTime(xTimerAsset* tasset)
{
    U32 halfRangeMilli = 1000.0f * tasset->randomRange;
    if (halfRangeMilli == 0) {
        return tasset->seconds;
    }

    S32 offset = xrand() % (halfRangeMilli * 2) - halfRangeMilli;
    F32 time = tasset->seconds + offset / 1000.0f;
    return time;
}

void xTimerInit(void* b, void* tasset)
{
    xTimerInit((xBase*)b, (xTimerAsset*)tasset);
}

void xTimerSave(xTimer* ent, xSerial* s)
{
    xBaseSave(ent, s);

    s->Write(ent->state);
    s->Write(ent->secondsLeft);
}

void xTimerLoad(xTimer* ent, xSerial* s)
{
    xBaseLoad(ent, s);

    s->Read(&ent->state);
    s->Read(&ent->secondsLeft);
}

S32 xTimer_ObjIDIsPauseTimer(U32 id)
{
    if (id == 0xCB3F6340) return TRUE;
    if (id >= 0x016FC9F0 && id <= 0x016FC9F9) return TRUE;

    S32 foo = (id >= 0xBC345600);
    S32 bar = (id <= 0xBC345AA4);
    if (foo && bar) {
        for (S32 i = 0; i < 10; i++) {
            if (id >= sPauseTimerHash[i*2] && id <= sPauseTimerHash[i*2+1]) {
                return TRUE;
            }
        }
    }

    return FALSE;
}

void xTimerInit(xBase* b, xTimerAsset* tasset)
{
    xBaseInit(b, tasset);

    xTimer* t = (xTimer*)b;

    t->eventFunc = xTimerEventCB;
    t->tasset = tasset;

    if (t->linkCount) {
        t->link = (xLinkAsset*)((U8*)t->tasset + sizeof(xTimerAsset));
    } else {
        t->link = NULL;
    }

    t->state = 0;
    t->secondsLeft = GetRandomizedTime(tasset);
    t->runsInPause = xTimer_ObjIDIsPauseTimer(b->id);
    t->flags = 0;
}

void xTimerReset(xTimer* ent)
{
    xBaseReset(ent, ent->tasset);
    ent->state = 0;
    ent->secondsLeft = GetRandomizedTime(ent->tasset);
    ent->flags = 0;
}