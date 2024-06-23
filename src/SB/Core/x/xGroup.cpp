#include "xGroup.h"

#include "xMath.h"
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
        b->link = (xLinkAsset*)((uint8*)(t->asset) + sizeof(xGroupAsset) +
                                asset->itemCount * sizeof(uint32));
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

int32 xGroupEventCB(xBase* to, xBase* from, uint32 toEvent, const float32* toParam,
                    xBase* toParamWidget)
{
    xGroup* g = (xGroup*)from;
    switch (toEvent)
    {
    case eEventReset:
        xGroupReset(g);
        break;
    case eEventDisableGroupContents:
        toEvent = eEventDisable;
        break;
    }
    int32 index = -1;
    if (g->asset->groupFlags & 1)
    {
        uint32 rand = xrand();
        index = rand % g->asset->itemCount;
    }
    else if (g->asset->groupFlags & 2)
    {
        index = g->last_index;
        g->last_index = (g->last_index + 1) % g->asset->itemCount;
    }

    switch (toEvent)
    {
    case eEventFastVisible:
        for (int32 i = 0; i < g->asset->itemCount; i++)
        {
            if (!(index == -1 || index == i))
            {
                continue;
            }

            xBase* b = g->item[i];
            if (!b)
            {
                continue;
            }

            if (b->baseFlags & 0x20)
            {
                xEntShow((xEnt*)b);
            }
            else
            {
                zEntEvent(b, toEvent, toParam, toParamWidget);
            }
        }
        return 1;
    case eEventFastInvisible:
        for (int32 i = 0; i < g->asset->itemCount; i++)
        {
            if (!(index == -1 || index == i))
            {
                continue;
            }

            xBase* b = g->item[i];
            if (!b)
            {
                continue;
            }

            if (b->baseFlags & 0x20)
            {
                xEntHide((xEnt*)b);
            }
            else
            {
                zEntEvent(b, toEvent, toParam, toParamWidget);
            }
        }
        return 1;
    default:
        for (int32 i = 0; i < g->asset->itemCount; i++)
        {
            if (!(index == -1 || index == i))
            {
                continue;
            }

            xBase* b = g->item[i];
            if (!b)
            {
                continue;
            }

            zEntEvent(b, toEvent, toParam, toParamWidget);
        }
        return 1;
    }

    // Note (Square): This is unreachable. No idea what the default return was meant to bel
    // but presumably it's different from the good path.
    return 0;
}

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

uint32 xGroup::get_any()
{
    uint16 numItems = this->asset->itemCount;
    if (numItems == 0)
    {
        return NULL;
    }

    uint32 last = ((uint32*)((uint8*)this->asset + sizeof(xGroupAsset)))[this->last_index];
    uint32 cnt = this->last_index + 1;
    this->last_index = cnt % numItems;
    return last;
}
