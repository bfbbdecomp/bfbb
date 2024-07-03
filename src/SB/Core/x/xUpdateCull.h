#ifndef XUPDATECULL_H
#define XUPDATECULL_H

#include <types.h>

struct xGroup;

typedef uint32 (*xUpdateCullEntCallback)(void* ent, void* cbdata);

struct xUpdateCullEnt
{
    uint16 index;
    int16 groupIndex;
    xUpdateCullEntCallback cb;
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

typedef void (*xUpdateCullActivateCallback)(void*);
typedef void (*xUpdateCullDeactivateCallback)(void*);

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
    xUpdateCullActivateCallback activateCB;
    xUpdateCullDeactivateCallback deactivateCB;
};

union FloatAndVoid
{
    float32 f;
    void* v;
};

uint32 xUpdateCull_AlwaysTrueCB(void* ent, void* cbdata);
uint32 xUpdateCull_DistanceSquaredCB(void* ent, void* cbdata);
xUpdateCullMgr* xUpdateCull_Init(void** ent, uint32 entCount, xGroup** group, uint32 groupCount);
void xUpdateCull_Update(xUpdateCullMgr* m, uint32 percent_update);
void xUpdateCull_SetCB(xUpdateCullMgr* m, void* entity, xUpdateCullEntCallback cb, void* cbdata);
void xUpdateCull_Reset(xUpdateCullMgr* m);

#endif
