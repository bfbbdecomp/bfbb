#include "xGroup.h"

#include "../Core/x/xMemMgr.h"
#include "zScene.h"

#include <types.h>

void xGroupInit(void* b, void* asset)
{
    xGroupInit((xBase*)b, (xGroupAsset*)asset);
}

#if 1

// func_8002CAC0
#pragma GLOBAL_ASM("asm/Core/x/xGroup.s", "xGroupInit__FP5xBaseP11xGroupAsset")

#else

// There is an instruction swap that seems to be throwing everything off.
void xGroupInit(xBase* b, xGroupAsset* asset)
{
    xBaseInit(b, (xBaseAsset*)asset);
    b->eventFunc = xGroupEventCB;
    ((xGroup*)b)->asset = asset;
    if (b->linkCount)
    {
        b->link =
            (xLinkAsset*)(&asset->link + ((xGroup*)b)->asset->itemCount); // lwz and lhz swap here.
    }
    else
    {
        b->link = NULL;
    }
    uint32 numItems = xGroupGetCount((xGroup*)b);
    xBase** item;
    if (numItems != 0)
    {
        item = (xBase**)xMemAlloc(numItems << 2);
    }
    else
    {
        item = NULL;
    }
    ((xGroup*)b)->item = item;
    ((xGroup*)b)->last_index = 0;
    ((xGroup*)b)->flg_group = 0;
}

#endif

void xGroupSetup(xGroup* g)
{
    if ((g->flg_group & 1) == 0)
    {
        uint32 numItems = xGroupGetCount(g);
        uint32 i = 0;
        uint32 ind = 0;
        while (i < numItems)
        {
            xBase* item = xGroupFindItemPtr(g, i);
            i++;
            *(g->item + ind) = item;
            ind++;
        }
        g->flg_group |= 1;
    }
}

void xGroupSave(xGroup* ent, xSerial* s)
{
    xBaseSave((xBase*)ent, s);
}

void xGroupLoad(xGroup* ent, xSerial* s)
{
    xBaseLoad((xBase*)ent, s);
}

void xGroupReset(xGroup* ent)
{
    xBaseReset((xBase*)ent, (xBaseAsset*)ent->asset);
    ent->last_index = 0;
}

#if 1

// func_8002CC78
#pragma GLOBAL_ASM("asm/Core/x/xGroup.s", "xGroupEventCB__FP5xBaseP5xBaseUiPCfP5xBase")

#else

// WIP.
int32 xGroupEventCB(xBase* to, xBase* from, uint32 toEvent, const float32* toParam,
                    xBase* toParamWidget)
{
    switch (toEvent)
    {
    case eEventReset:
        xGroupReset((xGroup*)from);
        break;
    case eEventDisableGroupContents:
        toEvent = eEventDistable;
        break;
    }
    uint32 ind = 0xffffffff;
    uint16 groupFlags = ((xGroup*)from)->asset->groupFlags;
    uint32 cnt;
    if (groupFlags & 1)
    {
        ind = xrand();
        cnt = (uint32)((xGroup*)from)->asset->itemCount;
        ind -= (ind / cnt) * cnt;
    }
    else
    {
        if (groupFlags & 2)
        {
            ind = ((xGroup*)from)->last_index;
            cnt = (uint32)((xGroup*)from)->asset->itemCount;
            ((xGroup*)from)->last_index = (ind + 1) - ((ind + 1) / cnt) * cnt;
        }
    }
    // Something here.
    switch (toEvent)
    {
    }
}

#endif

uint32 xGroupGetCount(xGroup* g)
{
    return g->asset->itemCount;
}

xBase* xGroupGetItemPtr(xGroup* g, uint32 index)
{
    if ((g->flg_group & 1) == 0)
    {
        xGroupSetup(g);
    }
    return g->item != NULL ? g->item[index] : NULL;
}

xBase* xGroupFindItemPtr(xGroup* g, uint32 index)
{
    return (xBase*)zSceneFindObject((uint32)(&g->asset->link)[index]);
}

uint32 xGroupGetItem(xGroup* g, uint32 index)
{
    return (uint32)(&g->asset->link)[index];
}

#if 1

// func_8002CF2C
#pragma GLOBAL_ASM("asm/Core/x/xGroup.s", "get_any__6xGroupFv")

#else

// Some weird register swapping going on here.
uint32 xGroup::get_any()
{
    uint16 numItems = this->asset->itemCount;
    if (numItems == 0)
    {
        return NULL;
    }
    uint32 cnt = this->last_index + 1;
    uint32 last = (uint32)(&this->asset->link)[this->last_index];
    this->last_index = cnt - (cnt / numItems) * numItems;
    return last;
}

#endif