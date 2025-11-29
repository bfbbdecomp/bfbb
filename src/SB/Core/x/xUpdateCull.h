#ifndef XUPDATECULL_H
#define XUPDATECULL_H

#include <types.h>

struct xGroup;

typedef U32 (*xUpdateCullEntCallback)(void* ent, void* cbdata);

struct xUpdateCullEnt
{
    U16 index;
    S16 groupIndex;
    xUpdateCullEntCallback cb;
    void* cbdata;
    xUpdateCullEnt* nextInGroup;
};

struct xUpdateCullGroup
{
    U32 active;
    U16 startIndex;
    U16 endIndex;
    xGroup* groupObject;
};

typedef void (*xUpdateCullActivateCallback)(void*);
typedef void (*xUpdateCullDeactivateCallback)(void*);

struct xUpdateCullMgr
{
    U32 entCount;
    U32 entActive;
    void** ent;
    xUpdateCullEnt** mgr;
    U32 mgrCount;
    U32 mgrCurr;
    xUpdateCullEnt* mgrList;
    U32 grpCount;
    xUpdateCullGroup* grpList;
    xUpdateCullActivateCallback activateCB;
    xUpdateCullDeactivateCallback deactivateCB;
};

union FloatAndVoid
{
    F32 f;
    void* v;
};

U32 xUpdateCull_AlwaysTrueCB(void* ent, void* cbdata);
U32 xUpdateCull_DistanceSquaredCB(void* ent, void* cbdata);
xUpdateCullMgr* xUpdateCull_Init(void** ent, U32 entCount, xGroup** group, U32 groupCount);
void xUpdateCull_Update(xUpdateCullMgr* m, U32 percent_update);
void xUpdateCull_SetCB(xUpdateCullMgr* m, void* entity, xUpdateCullEntCallback cb, void* cbdata);
void xUpdateCull_Reset(xUpdateCullMgr* m);

#endif
