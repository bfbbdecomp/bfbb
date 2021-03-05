#ifndef XCM_H
#define XCM_H

#include <types.h>
#include "../src/Core/x/xBase.h"

struct xCreditsData
{
    uint32 dummy;
};

void xCMupdate(float32 dt);
void xCMrender();
void xCMstart(xCreditsData* data, float32, xBase* parent);
void xCMstop();

#endif
