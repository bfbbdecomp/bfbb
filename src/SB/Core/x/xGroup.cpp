#include "xGroup.h"

#include "xMemMgr.h"
#include "zScene.h"

#include <types.h>

void xGroupInit(void* b, void* asset)
{
    xGroupInit((xBase*)b, (xGroupAsset*)asset);
}

void xGroupInit(xBase* b, xGroupAsset* asset)
{
    xGroup* t = (xGroup*)b;

    xBaseInit(b, (xBaseAsset*)asset);
    b->eventFunc = xGroupEventCB;
    t->asset = asset;
    if (b->linkCount)
    {
        // Seek to then end of the xGroupAsset header and then seek to the end of the subsequent array of IDs
        b->link = (xLinkAsset*)((uint8*)(t->asset) + sizeof(xGroupAsset)
                                + asset->itemCount * sizeof(uint32));
    }
    else
    {
        b->link = NULL;
    }
    uint32 numItems = xGroupGetCount(t);
    xBase** item;
    if (numItems != 0)
    {
        item = (xBase**)xMemAllocSize(numItems << 2);
    }
    else
    {
        item = NULL;
    }
    t->item = item;
    t->last_index = 0;
    t->flg_group = 0;
}

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

#if 0
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
    return (xBase*)zSceneFindObject((uint32)((uint32*)(g->asset + 1))[index]);
}

uint32 xGroupGetItem(xGroup* g, uint32 index)
{
    return (uint32)((uint32*)(g->asset + 1))[index];
}

#if 0
// Some weird register swapping going on here.
uint32 xGroup::get_any()
{
    uint16 numItems = this->asset->itemCount;
    if (numItems == 0)
    {
        return NULL;
    }
    uint32 cnt = this->last_index + 1;
    uint32 last =
        (uint32)((uint32*)((uint32*)this->asset + sizeof(xGroupAsset) / 4))[this->last_index];
    this->last_index = cnt - (cnt / numItems) * numItems;
    return last;
}

#endif
