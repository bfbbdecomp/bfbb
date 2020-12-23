#ifndef XUPDATECULL_H
#define XUPDATECULL_H

#include <types.h>

struct xGroup;

struct xUpdateCullEnt
{
    uint16 index;
    int16 groupIndex;
    uint32 (*cb)(void*, void*);
    void* cbdata;
    xUpdateCullEnt* nextInGroup;
};

struct xUpdateCullGroup
{
    uint32 active;
    uint16 startIndex;
    uint16 endIndex;
    xGroup* groupObject;
};

struct xUpdateCullMgr
{
    uint32 entCount;
    uint32 entActive;
    void** ent;
    xUpdateCullEnt** mgr;
    uint32 mgrCount;
    uint32 mgrCurr;
    xUpdateCullEnt* mgrList;
    uint32 grpCount;
    xUpdateCullGroup* grpList;
    void (*activateCB)(void*);
    void (*deactivateCB)(void*);
};

void xUpdateCull_Update(xUpdateCullMgr* m, uint32 percent_update);

#endif