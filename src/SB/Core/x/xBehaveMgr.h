#ifndef XBEHAVEMGR_H
#define XBEHAVEMGR_H

#include "xBehaviour.h"

struct xBehaveMgr : RyzMemData
{
    xFactory* goalFactory;
    xPsyche* psypool;
    st_XORDEREDARRAY psylist;

    xBehaveMgr()
    {
    }

    ~xBehaveMgr()
    {
    }

    void Startup(S32, S32);
    void RegBuiltIn();
    xPsyche* Subscribe(xBase* owner, S32 i);
    void UnSubscribe(xPsyche* psy);
    void ScenePrepare();
    void SceneFinish();
    void SceneReset();

    xFactory* GetFactory()
    {
        return this->goalFactory;
    }
};

void xBehaveMgr_ScenePrepare();
void xBehaveMgr_SceneReset();
void xBehaveMgr_Startup();
void xBehaveMgr_Shutdown();
void xBehaveMgr_SceneFinish();
xBehaveMgr* xBehaveMgr_GetSelf();

#endif
