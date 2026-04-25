#include "PowerPC_EABI_Support/MetroTRK/trk.h"

static u8 bUseSerialIO ATTRIBUTE_ALIGN(8);

u8 GetUseSerialIO(void)
{
    return bUseSerialIO;
}

void SetUseSerialIO(u8 sio)
{
    bUseSerialIO = sio;
}
