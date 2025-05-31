#include <string.h>

#include <dolphin/gx.h>
#include <dolphin/os.h>

#include <gx/__gx.h>

void GXCallDisplayList(const void* list, u32 nbytes)
{
    CHECK_GXBEGIN(254, "GXCallDisplayList");

    if (__GXData->dirtyState != 0)
    {
        __GXSetDirtyState();
    }

#if DEBUG
    __GXShadowDispList(list, nbytes);
#endif

    if (*(u32*)&__GXData->vNumNot == 0)
    { // checks both vNum and bpSent
        __GXSendFlushPrim();
    }

    GX_WRITE_U8(GX_CMD_CALL_DL);
    GX_WRITE_U32(list);
    GX_WRITE_U32(nbytes);
}
