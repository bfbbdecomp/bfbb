#include <dolphin/card.h>
#include <dolphin/dsp.h>
#include <dolphin/dvd.h>
#include <dolphin/os.h>

#include <dolphin/CARDPriv.h>

u16 __CARDVendorID = 0xFFFF;
u8 __CARDPermMask = 28;

s32 CARDSetAttributesAsync(s32 chan, s32 fileNo, u8 attr, CARDCallback callback)
{
    CARDDir dirent;
    s32 result;

    if (attr & ~__CARDPermMask)
    {
        return CARD_RESULT_NOPERM;
    }

    result = __CARDGetStatusEx(chan, fileNo, &dirent);
    if (result < 0)
    {
        return result;
    }

    if ((CARDCheckAttr(dirent.permission, 0x20) && !CARDCheckAttr(attr, 0x20)) ||
        (CARDCheckAttr(dirent.permission, 0x40) && !CARDCheckAttr(attr, 0x40)))
    {
        return CARD_RESULT_NOPERM;
    }

    if ((CARDCheckAttr(attr, 0x20) && CARDCheckAttr(attr, 0x40)) ||
        (CARDCheckAttr(attr, 0x20) && CARDCheckAttr(dirent.permission, 0x40)) ||
        (CARDCheckAttr(attr, 0x40) && CARDCheckAttr(dirent.permission, 0x20)))
    {
        return CARD_RESULT_NOPERM;
    }

    dirent.permission = attr;
    return __CARDSetStatusExAsync(chan, fileNo, &dirent, callback);
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
