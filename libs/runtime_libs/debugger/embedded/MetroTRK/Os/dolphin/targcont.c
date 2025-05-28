#include "PowerPC_EABI_Support/MetroTRK/trk.h"

/*
 * --INFO--
 * Address:	802207B8
 * Size:	000034
 */

DSError TRKTargetContinue(void)
{
    TRKTargetSetStopped(0);
    UnreserveEXI2Port();
    TRKSwapAndGo();
    ReserveEXI2Port();
    return 0;
}
