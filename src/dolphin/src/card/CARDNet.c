#include <dolphin/card.h>
#include <dolphin/dsp.h>
#include <dolphin/dvd.h>
#include <dolphin/os.h>

#include <dolphin/CARDPriv.h>

u16 __CARDVendorID = 0xFFFF;
u8 __CARDPermMask = 28;

s32 CARDSetAttributesAsync(s32 channel, s32 cardFile, u8 permissions, CARDCallback callback)
{
    CARDDir dir;
    s32 res;
    if (permissions & ~__CARDPermMask)
    {
        return CARD_RESULT_NOPERM;
    }

    res = __CARDGetStatusEx(channel, cardFile, &dir);
    if (res < 0)
    {
        return res;
    }

    if (((dir.permission & 0x20u) && !(permissions & 0x20u)) ||
        ((dir.permission & 0x40u) && !(permissions & 0x40u)))
    {
        return CARD_RESULT_NOPERM;
    }

    if (((permissions & 0x20u) && (permissions & 0x40u)) ||
        ((permissions & 0x20u) && (dir.permission & 0x40u)) ||
        ((permissions & 0x40u) && (dir.permission & 0x20u)))
    {
        return CARD_RESULT_NOPERM;
    }

    dir.permission = permissions;
    return __CARDSetStatusExAsync(channel, cardFile, &dir, callback);
}

s32 CARDSetAttributes(s32 chan, s32 fileNo, u8 attr)
{
    s32 result;

    result = CARDSetAttributesAsync(chan, fileNo, attr, __CARDSyncCallback);
    if (result < 0)
    {
        return result;
    }

    return __CARDSync(chan);
}
