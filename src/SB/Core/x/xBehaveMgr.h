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
    ~xBehaveMgr();
    void Startup(S32, S32);
    void RegBuiltIn();
    xPsyche* Subscribe(xBase* owner, S32 i);
    void UnSubscribe(xPsyche* psy);
    void ScenePrepare();
    void SceneFinish();
    void SceneReset();
    xFactory* GetFactory();

    void* operator new(size_t amt, U32, RyzMemGrow*);
    void operator delete(void*, U16);
};

void xBehaveMgr_ScenePrepare();
void xBehaveMgr_SceneReset();
void xBehaveMgr_Startup();
void xBehaveMgr_Shutdown();
void xBehaveMgr_SceneFinish();
xBehaveMgr* xBehaveMgr_GetSelf();

#endif
