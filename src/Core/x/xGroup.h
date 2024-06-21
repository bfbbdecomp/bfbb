#ifndef XGROUP_H
#define XGROUP_H

#include "xBase.h"

struct xGroupAsset : xBaseAsset
{
    uint16 itemCount;
    uint16 groupFlags;
};

struct xGroup : xBase
{
    xGroupAsset* asset;
    xBase** item;
    uint32 last_index;
    int32 flg_group;

    uint32 get_any();
};

void xGroupInit(void* b, void* asset);
void xGroupInit(xBase* b, xGroupAsset* asset);
void xGroupSetup(xGroup* g);
void xGroupSave(xGroup* ent, xSerial* s);
void xGroupLoad(xGroup* ent, xSerial* s);
void xGroupReset(xGroup* ent);
int32 xGroupEventCB(xBase* to, xBase* from, uint32 toEvent, const float32* toParam,
                    xBase* toParamWidget);
uint32 xGroupGetCount(xGroup* g);
xBase* xGroupGetItemPtr(xGroup* g, uint32 index);
xBase* xGroupFindItemPtr(xGroup* g, uint32 index);
uint32 xGroupGetItem(xGroup* g, uint32 index);

#endif