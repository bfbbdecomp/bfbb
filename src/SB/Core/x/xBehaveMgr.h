#ifndef XBEHAVEMGR_H
#define XBEHAVEMGR_H

#include "xBase.h"
#include "xBehaviour.h"
#include "xordarray.h"
#include "xFactory.h"

struct xBehaveMgr : RyzMemData
{
    xFactory* goalFactory;
    xPsyche* psypool;
    st_XORDEREDARRAY psylist;

    xBehaveMgr();
    void Startup(int32, int32);
    void RegBuiltIn();
    xPsyche* Subscribe(xBase* owner, int32 i);
    void UnSubscribe(xPsyche* psy);
    void ScenePrepare();
    void SceneFinish();
    void SceneReset();
    xFactory* GetFactory();

    void* operator new(size_t amt, uint32, RyzMemGrow*);
    void operator delete(void*, uint16);
};

void xBehaveMgr_Startup();
void xBehaveMgr_Shutdown();
xBehaveMgr* xBehaveMgr_GetSelf();

#endif