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
};

xBehaveMgr* xBehaveMgr_GetSelf();

#endif