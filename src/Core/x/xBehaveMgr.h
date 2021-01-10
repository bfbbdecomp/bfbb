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

    void UnSubscribe(xPsyche* psy);
    xPsyche* Subscribe(xBase* owner, int32 i);
    xFactory* GetFactory();
};

void xBehaveMgr_Startup();
void xBehaveMgr_Shutdown();
xBehaveMgr* xBehaveMgr_GetSelf();

#endif