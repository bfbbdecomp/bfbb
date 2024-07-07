#ifndef XCM_H
#define XCM_H

#include <types.h>
#include "xBase.h"

struct xCreditsData
{
    U32 dummy;
};

void xCMupdate(F32 dt);
void xCMrender();
void xCMstart(xCreditsData* data, F32, xBase* parent);
void xCMstop();

#endif
