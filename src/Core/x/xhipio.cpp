#include "xhipio.h"

#include <string.h>

static st_HIPLOADDATA* HIPLCreate(const char* filename, char* dblbuf, int32 bufsize);
static void HIPLDestroy(st_HIPLOADDATA* lddata);
static uint32 HIPLBaseSector(st_HIPLOADDATA* lddata);
static int32 HIPLSetBypass(st_HIPLOADDATA* lddata, int32 enable, int32 use_async);
static void HIPLSetSpot(st_HIPLOADDATA* lddata, int32 spot);
static uint32 HIPLBlockEnter(st_HIPLOADDATA* lddata);
static void HIPLBlockExit(st_HIPLOADDATA* lddata);
static int32 HIPLBlockRead(st_HIPLOADDATA* lddata, void* data, int32 cnt, int32 size);
static int32 HIPLBypassRead(st_HIPLOADDATA* lddata, void* data, int32 cnt, int32 size);
static int32 HIPLReadAsync(st_HIPLOADDATA* lddata, int32 pos, char* data, int32 cnt, int32 size);
static en_READ_ASYNC_STATUS HIPLPollRead(st_HIPLOADDATA* lddata);
static int32 HIPLReadBytes(st_HIPLOADDATA* lddata, char* data, int32 cnt);
static int32 HIPLReadShorts(st_HIPLOADDATA* lddata, int16* data, int32 cnt);
static int32 HIPLReadLongs(st_HIPLOADDATA* lddata, int32* data, int32 cnt);
static int32 HIPLReadFloats(st_HIPLOADDATA* lddata, float32* data, int32 cnt);
static int32 HIPLReadString(st_HIPLOADDATA* lddata, char* buf);

static uint32 g_loadlock = 0;

static st_HIPLOADDATA g_hiploadinst[8] = {};

// clang-format off
static st_HIPLOADFUNCS g_map_HIPL_funcmap =
{
    HIPLCreate,
    HIPLDestroy,
    HIPLBaseSector,
    HIPLBlockEnter,
    HIPLBlockExit,
    HIPLReadBytes,
    HIPLReadShorts,
    HIPLReadLongs,
    HIPLReadFloats,
    HIPLReadString,
    HIPLSetBypass,
    HIPLSetSpot,
    HIPLPollRead
};
// clang-format on

st_HIPLOADFUNCS* get_HIPLFuncs()
{
    return &g_map_HIPL_funcmap;
}

static st_HIPLOADDATA* HIPLCreate(const char* filename, char* dblbuf, int32 bufsize)
{
    st_HIPLOADDATA* lddata = NULL;
    st_FILELOADINFO* fli;
    st_HIPLOADBLOCK* tmp_blk;
    int32 i;
    int32 uselock = -1;

    for (i = 0; i < 8; i++)
    {
        if (!(g_loadlock & (1 << i)))
        {
            g_loadlock |= 1 << i;

            uselock = i;
            lddata = &g_hiploadinst[i];

            break;
        }
    }

    if (lddata)
    {
        memset(lddata, 0, sizeof(st_HIPLOADDATA));

        lddata->lockid = uselock;
        lddata->top = -1;
        lddata->base_sector = 0;
        lddata->use_async = 0;
        lddata->asyn_stat = HIP_RDSTAT_NONE;
        lddata->bypass = 0;
        lddata->bypass_recover = -1;
        lddata->pos = 0;
        lddata->readTop = 0;

        for (i = 0; i < 8; i++)
        {
            tmp_blk = &lddata->stk[i];

            tmp_blk->endpos = 0;
            tmp_blk->blk_id = 0;
            tmp_blk->blk_remain = 0;
            tmp_blk->flags = 0;
        }

        fli = xBinioLoadCreate(filename);

        if (fli)
        {
            lddata->fli = fli;
            lddata->base_sector = fli->basesector;

            if (dblbuf && bufsize > 0)
            {
                fli->setDoubleBuf(fli, dblbuf, bufsize);
            }
        }
        else
        {
            HIPLDestroy(lddata);
            lddata = NULL;
        }
    }

    return lddata;
}

static void HIPLDestroy(st_HIPLOADDATA* lddata)
{
    int32 lockid;

    if (lddata)
    {
        if (lddata->fli)
        {
            lddata->fli->destroy(lddata->fli);
        }

        lockid = lddata->lockid;

        memset(lddata, 0, sizeof(st_HIPLOADDATA));

        g_loadlock &= ~(1 << lockid);
    }
}

static uint32 HIPLBaseSector(st_HIPLOADDATA* lddata)
{
    return lddata->base_sector;
}

static int32 HIPLSetBypass(st_HIPLOADDATA* lddata, int32 enable, int32 use_async)
{
    lddata->fli->discardDblBuf(lddata->fli);

    if (enable && lddata->bypass)
    {
        return 0;
    }

    if (!enable && !lddata->bypass)
    {
        return 0;
    }

    if (enable)
    {
        lddata->bypass = 1;
        lddata->use_async = use_async;
        lddata->bypass_recover = lddata->fli->position;
    }
    else
    {
        lddata->fli->seekSpot(lddata->fli, lddata->bypass_recover);
        lddata->bypass = 0;
        lddata->use_async = 0;
        lddata->bypass_recover = -1;
    }

    return 1;
}

static void HIPLSetSpot(st_HIPLOADDATA* lddata, int32 spot)
{
    if (lddata->bypass)
    {
        lddata->pos = spot;
        lddata->fli->seekSpot(lddata->fli, spot);
    }
}

static uint32 HIPLBlockEnter(st_HIPLOADDATA* lddata)
{
    st_HIPLOADBLOCK* top;
    uint32 cid = 0;
    int32 size = 0;

    if (lddata->bypass)
    {
        return 0;
    }

    if (lddata->top >= 0 && lddata->stk[lddata->top].blk_remain <= 0)
    {
        return 0;
    }

    if (HIPLReadLongs(lddata, (int32*)&cid, -1) == 0)
    {
        cid = 0;
    }
    else
    {
        HIPLReadLongs(lddata, &size, -1);

        if (lddata->top >= 0)
        {
            lddata->stk[lddata->top].blk_remain -= size;
        }

        top = &lddata->stk[++lddata->top];

        top->blk_id = cid;
        top->blk_remain = size;
        top->endpos = lddata->pos + top->blk_remain + (top->blk_remain & 1);
        top->flags = 0;
    }

    return cid;
}

static void HIPLBlockExit(st_HIPLOADDATA* lddata)
{
    st_HIPLOADBLOCK* top;

    if (!lddata->bypass)
    {
        top = &lddata->stk[lddata->top--];

        lddata->fli->skipBytes(lddata->fli, top->endpos - lddata->pos);
        lddata->pos = top->endpos;
    }
}

static int32 HIPLBlockRead(st_HIPLOADDATA* lddata, void* data, int32 cnt, int32 size)
{
    st_HIPLOADBLOCK* top;
    int32 got = 0;
    int32 left = 0;
    int32 head = 0;

    if (lddata->bypass)
    {
        return 0;
    }

    if (cnt == 0)
    {
        return 0;
    }

    if (lddata->top < 0)
    {
        top = NULL;
    }
    else
    {
        top = &lddata->stk[lddata->top];
        left = top->blk_remain / size;
    }

    if (cnt < 0)
    {
        cnt = -cnt;
        head = 1;

        if (top && cnt > left)
        {
            cnt = left;
        }
    }

    if (!head && left < cnt)
    {
        cnt = left;
    }

    if (cnt == 0)
    {
        got = 0;
    }
    else if (size == 1)
    {
        got = lddata->fli->readBytes(lddata->fli, (char*)data, cnt);
    }
    else if (size == 2)
    {
        got = lddata->fli->readMShorts(lddata->fli, (int16*)data, cnt);
    }
    else if (size == 4)
    {
        got = lddata->fli->readMLongs(lddata->fli, (int32*)data, cnt);
    }

    got *= size;

    lddata->pos += got;

    if (top)
    {
        top->blk_remain -= got;
    }

    return got;
}

static int32 HIPLBypassRead(st_HIPLOADDATA* lddata, void* data, int32 cnt, int32 size)
{
    int32 got = 0;

    if (!lddata->bypass)
    {
        return 0;
    }

    if (lddata->use_async)
    {
        return HIPLReadAsync(lddata, lddata->pos, (char*)data, cnt, size);
    }

    if (cnt == 0)
    {
        return 0;
    }

    if (cnt == 0)
    {
        got = 0;
    }
    else if (size == 1)
    {
        got = lddata->fli->readBytes(lddata->fli, (char*)data, cnt);
    }
    else if (size == 2)
    {
        got = lddata->fli->readMShorts(lddata->fli, (int16*)data, cnt);
    }
    else if (size == 4)
    {
        got = lddata->fli->readMLongs(lddata->fli, (int32*)data, cnt);
    }

    return got * size;
}

static int32 HIPLReadAsync(st_HIPLOADDATA* lddata, int32 pos, char* data, int32 cnt, int32 size)
{
    int32 rc;

    lddata->asyn_stat = HIP_RDSTAT_NONE;

    rc = lddata->fli->asyncMRead(lddata->fli, pos, data, cnt, size);

    lddata->asyn_stat = HIP_RDSTAT_INPROG;

    return rc;
}

static en_READ_ASYNC_STATUS HIPLPollRead(st_HIPLOADDATA* lddata)
{
    en_READ_ASYNC_STATUS rdstat = HIP_RDSTAT_INPROG;
    en_BIO_ASYNC_ERRCODES pollstat;

    if (!lddata->bypass)
    {
        return HIP_RDSTAT_NOBYPASS;
    }

    if (!lddata->use_async)
    {
        return HIP_RDSTAT_NOASYNC;
    }

    pollstat = lddata->fli->asyncReadStatus(lddata->fli);

    switch (pollstat)
    {
    case BINIO_ASYNC_INPROG:
    {
        rdstat = HIP_RDSTAT_INPROG;
        break;
    }
    case BINIO_ASYNC_DONE:
    {
        rdstat = HIP_RDSTAT_SUCCESS;
        lddata->asyn_stat = HIP_RDSTAT_NONE;
        break;
    }
    case BINIO_ASYNC_FAIL:
    {
        rdstat = HIP_RDSTAT_FAILED;
        lddata->asyn_stat = HIP_RDSTAT_NONE;
        break;
    }
    default:
    {
        lddata->asyn_stat = HIP_RDSTAT_NONE;
        break;
    }
    }

    return rdstat;
}

static int32 HIPLReadBytes(st_HIPLOADDATA* lddata, char* data, int32 cnt)
{
    if (lddata->bypass)
    {
        return HIPLBypassRead(lddata, data, cnt, sizeof(char));
    }
    else
    {
        return HIPLBlockRead(lddata, data, cnt, sizeof(char));
    }
}

static int32 HIPLReadShorts(st_HIPLOADDATA* lddata, int16* data, int32 cnt)
{
    int32 got;

    if (lddata->bypass)
    {
        got = HIPLBypassRead(lddata, data, cnt, sizeof(int16));
    }
    else
    {
        got = HIPLBlockRead(lddata, data, cnt, sizeof(int16));
    }

    got /= sizeof(int16);

    return got;
}

static int32 HIPLReadLongs(st_HIPLOADDATA* lddata, int32* data, int32 cnt)
{
    int32 got;

    if (lddata->bypass)
    {
        got = HIPLBypassRead(lddata, data, cnt, sizeof(int32));
    }
    else
    {
        got = HIPLBlockRead(lddata, data, cnt, sizeof(int32));
    }

    got /= sizeof(int32);

    return got;
}

static int32 HIPLReadFloats(st_HIPLOADDATA* lddata, float32* data, int32 cnt)
{
    int32 got;

    if (lddata->bypass)
    {
        got = HIPLBypassRead(lddata, data, cnt, sizeof(float32));
    }
    else
    {
        got = HIPLBlockRead(lddata, data, cnt, sizeof(float32));
    }

    got /= sizeof(float32);

    return got;
}

static int32 HIPLReadString(st_HIPLOADDATA* lddata, char* buf)
{
    int32 n = 0;
    char pad = 0;

    if (lddata->bypass)
    {
        while (HIPLBypassRead(lddata, &buf[n], 1, sizeof(char)))
        {
            if (buf[n] == '\0')
            {
                if (!(n & 1))
                {
                    HIPLBypassRead(lddata, &pad, 1, sizeof(char));
                }

                break;
            }

            n++;
        }
    }
    else
    {
        while (HIPLBlockRead(lddata, &buf[n], 1, sizeof(char)))
        {
            if (buf[n] == '\0')
            {
                if (!(n & 1))
                {
                    HIPLBlockRead(lddata, &pad, 1, sizeof(char));
                }

                break;
            }

            n++;
        }
    }

    return n;
}
