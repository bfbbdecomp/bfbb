#include "xbinio.h"

#include "xMath.h"

#include <string.h>

#define LITTLE_ENDIAN 0
#define BIG_ENDIAN 1

#ifdef GAMECUBE
#define ENDIAN BIG_ENDIAN
#else
#define ENDIAN LITTLE_ENDIAN
#endif

struct st_BINIO_XTRADATA
{
    char* dbl_buf;
    S32 dblbuf_size;
    S32 dbl_beg;
    S32 dbl_end;
    S32 dbl_amt;
    U32 fpos;
    char* asyn_data;
    S32 asyn_amt;
    S32 asyn_elesize;
    S32 asyn_ismot;
    en_BIO_ASYNC_ERRCODES asyn_status;
    U32 pad[3];
    S32 gcaskey;
};

static U32 g_loadlock = 0xFFFFFF00;
static st_FILELOADINFO g_loadinst[8] = {};
static tag_xFile g_xfload[8] = {};
static st_BINIO_XTRADATA g_xtraload[8] = {};
static st_BINIO_XTRADATA* g_async_context = NULL;

static void LoadDestroy(st_FILELOADINFO* fli);
static S32 SkipBytes(st_FILELOADINFO* fli, S32 fwd);
static S32 ReadSeek(st_FILELOADINFO* fli, S32 pos);
static void SetBuffer(st_FILELOADINFO* fli, char* dblbuffer, S32 bufsize);
static void DiscardBuffer(st_FILELOADINFO* fli);
static S32 ReadRaw(st_FILELOADINFO* fli, void* data, S32 size, S32 count);
static S32 ReadBytes(st_FILELOADINFO* fli, char* data, S32 count);
static S32 ReadMShorts(st_FILELOADINFO* fli, S16* data, S32 count);
static S32 ReadMLongs(st_FILELOADINFO* fli, S32* data, S32 count);
static S32 ReadMFloats(st_FILELOADINFO* fli, F32* data, S32 count);
static S32 ReadMDoubles(st_FILELOADINFO* fli, F64* data, S32 count);
static S32 ReadIShorts(st_FILELOADINFO* fli, S16* data, S32 count);
static S32 ReadILongs(st_FILELOADINFO* fli, S32* data, S32 count);
static S32 ReadIFloats(st_FILELOADINFO* fli, F32* data, S32 count);
static S32 ReadIDoubles(st_FILELOADINFO* fli, F64* data, S32 count);
static S32 AsyncMRead(st_FILELOADINFO* fli, S32 offset, char* data, S32 size, S32 n);
static S32 AsyncIRead(st_FILELOADINFO* fli, S32 offset, char* data, S32 size, S32 n);
static en_BIO_ASYNC_ERRCODES AsyncReadStatus(st_FILELOADINFO* fli);
static void Swap2(char* d, S32 n);
static void Swap4(char* d, S32 n);
static void Swap8(char* d, S32 n);
static tag_xFile* BFD_open(const char* filename, const char* mode, U32 lockid, S32,
                           void* xtradata);
static void BFD_close(tag_xFile* bffp, void* xtradata);
static S32 BFD_read(void* data, S32 elesize, S32 elecnt, tag_xFile* bffp, void* xtradata);
static S32 BFD_seek(tag_xFile* bffp, S32 offset, S32 whence, void* xtradata);
static S32 BFD_getLength(tag_xFile* bffp, void* xtradata);
static S32 BFD_startSector(const char* filename);
static void BFD_cb_GCP2_readasync(tag_xFile* bffp);
static S32 BFD_AsyncRead(st_FILELOADINFO* fli, S32 pos, void* data, S32 size, S32 n,
                           S32 endian);
static en_BIO_ASYNC_ERRCODES BFD_AsyncReadStatus(st_FILELOADINFO* fli);

st_FILELOADINFO* xBinioLoadCreate(const char* filename)
{
    st_FILELOADINFO* fli = NULL;
    tag_xFile* tmp_fp;
    S32 i;
    S32 uselock = -1;

    for (i = 0; i < 8; i++)
    {
        if (!(g_loadlock & (1 << i)))
        {
            g_loadlock |= 1 << i;

            uselock = i;
            fli = &g_loadinst[i];

            break;
        }
    }

    if (fli)
    {
        memset(fli, 0, sizeof(st_FILELOADINFO));

        fli->lockid = uselock & ~(uselock >> 31);
        fli->xtradata = &g_xtraload[uselock];
        fli->destroy = LoadDestroy;
        fli->readBytes = ReadBytes;
        fli->readMShorts = ReadMShorts;
        fli->readMLongs = ReadMLongs;
        fli->readMFloats = ReadMFloats;
        fli->readMDoubles = ReadMDoubles;
        fli->readIShorts = ReadIShorts;
        fli->readILongs = ReadILongs;
        fli->readIFloats = ReadIFloats;
        fli->readIDoubles = ReadIDoubles;
        fli->asyncIRead = AsyncIRead;
        fli->asyncMRead = AsyncMRead;
        fli->asyncReadStatus = AsyncReadStatus;
        fli->skipBytes = SkipBytes;
        fli->seekSpot = ReadSeek;
        fli->setDoubleBuf = SetBuffer;
        fli->discardDblBuf = DiscardBuffer;
        fli->error = FIOERR_NONE;
        fli->remain = 0;
        fli->basesector = 0;
        fli->filesize = 0;
        fli->position = 0;
        fli->basesector = 0;

        tmp_fp = BFD_open(filename, "rb", uselock, 0, fli->xtradata);

        if (tmp_fp)
        {
            fli->basesector = BFD_startSector(filename);
            fli->privdata = tmp_fp;
            fli->filesize = BFD_getLength(tmp_fp, fli->xtradata);
            fli->remain = fli->filesize;
        }
        else
        {
            LoadDestroy(fli);
            fli = NULL;
        }
    }

    return fli;
}

static void LoadDestroy(st_FILELOADINFO* fli)
{
    tag_xFile* fp = (tag_xFile*)fli->privdata;

    if (fp)
    {
        BFD_close(fp, fli->xtradata);
    }

    U32 lockid = fli->lockid;

    memset(fli, 0, sizeof(st_FILELOADINFO));

    g_loadlock &= ~(1 << lockid);
}

static S32 SkipBytes(st_FILELOADINFO* fli, S32 fwd)
{
    tag_xFile* file = (tag_xFile*)fli->privdata;

    if (fli->error != FIOERR_NONE)
    {
        return 0;
    }

    if (fwd == 0)
    {
        return 1;
    }

    if (fwd < 0)
    {
        fwd = 0;
    }

    if (BFD_seek(file, fli->position + fwd, IFILE_SEEK_SET, fli->xtradata) != 0)
    {
        fli->error = FIOERR_SEEKFAIL;
    }
    else
    {
        fli->remain -= fwd;
        fli->position += fwd;
    }

    if (fli->error != FIOERR_NONE)
    {
        return 0;
    }

    return 1;
}

static S32 ReadSeek(st_FILELOADINFO* fli, S32 pos)
{
    tag_xFile* file = (tag_xFile*)fli->privdata;

    if (fli->error != FIOERR_NONE)
    {
        return 0;
    }

    pos = MIN(pos, fli->filesize);

    if (BFD_seek(file, pos, IFILE_SEEK_SET, fli->xtradata) != 0)
    {
        fli->error = FIOERR_SEEKFAIL;
    }
    else
    {
        fli->position = pos;
        fli->remain = fli->filesize - pos;
    }

    if (fli->error != FIOERR_NONE)
    {
        return 0;
    }

    return 1;
}

static void SetBuffer(st_FILELOADINFO* fli, char* dblbuffer, S32 bufsize)
{
    st_BINIO_XTRADATA* xtra = (st_BINIO_XTRADATA*)fli->xtradata;

    if (xtra)
    {
        xtra->dbl_buf = dblbuffer;
        xtra->dblbuf_size = bufsize;
        xtra->dbl_beg = 0;
        xtra->dbl_end = 0;
        xtra->dbl_amt = 0;
    }
}

static void DiscardBuffer(st_FILELOADINFO* fli)
{
    SetBuffer(fli, NULL, 0);
}

static S32 ReadRaw(st_FILELOADINFO* fli, void* data, S32 size, S32 count)
{
    tag_xFile* file = (tag_xFile*)fli->privdata;

    if (fli->error != FIOERR_NONE)
    {
        return 0;
    }

    S32 amt = (size * count > fli->remain) ? fli->remain / size : count;

    if (amt)
    {
        S32 n = BFD_read(data, size, amt, file, fli->xtradata);

        if (n != amt)
        {
            fli->error = FIOERR_READFAIL;
        }

        fli->remain -= size * amt;
        fli->position += size * amt;
    }

    return amt;
}

static S32 ReadBytes(st_FILELOADINFO* fli, char* data, S32 count)
{
    S32 act = ReadRaw(fli, data, sizeof(char), count);
    return act;
}

static S32 ReadMShorts(st_FILELOADINFO* fli, S16* data, S32 count)
{
    S32 act = ReadRaw(fli, data, sizeof(S16), count);

#if ENDIAN == LITTLE_ENDIAN
    Swap2((char*)data, act);
#endif

    return act;
}

static S32 ReadMLongs(st_FILELOADINFO* fli, S32* data, S32 count)
{
    S32 act = ReadRaw(fli, data, sizeof(S32), count);

#if ENDIAN == LITTLE_ENDIAN
    Swap4((char*)data, act);
#endif

    return act;
}

static S32 ReadMFloats(st_FILELOADINFO* fli, F32* data, S32 count)
{
    S32 act = ReadRaw(fli, data, sizeof(F32), count);

#if ENDIAN == LITTLE_ENDIAN
    Swap4((char*)data, act);
#endif

    return act;
}

static S32 ReadMDoubles(st_FILELOADINFO* fli, F64* data, S32 count)
{
    S32 act = ReadRaw(fli, data, sizeof(F64), count);

#if ENDIAN == LITTLE_ENDIAN
    Swap8((char*)data, act);
#endif

    return act;
}

static S32 ReadIShorts(st_FILELOADINFO* fli, S16* data, S32 count)
{
    S32 act = ReadRaw(fli, data, sizeof(S16), count);

#if ENDIAN == BIG_ENDIAN
    Swap2((char*)data, act);
#endif

    return act;
}

static S32 ReadILongs(st_FILELOADINFO* fli, S32* data, S32 count)
{
    S32 act = ReadRaw(fli, data, sizeof(S32), count);

#if ENDIAN == BIG_ENDIAN
    Swap4((char*)data, act);
#endif

    return act;
}

static S32 ReadIFloats(st_FILELOADINFO* fli, F32* data, S32 count)
{
    S32 act = ReadRaw(fli, data, sizeof(F32), count);

#if ENDIAN == BIG_ENDIAN
    Swap4((char*)data, act);
#endif

    return act;
}

static S32 ReadIDoubles(st_FILELOADINFO* fli, F64* data, S32 count)
{
    S32 act = ReadRaw(fli, data, sizeof(F64), count);

#if ENDIAN == BIG_ENDIAN
    Swap8((char*)data, act);
#endif

    return act;
}

static S32 AsyncMRead(st_FILELOADINFO* fli, S32 offset, char* data, S32 size, S32 n)
{
    return BFD_AsyncRead(fli, offset, data, size, n, BIG_ENDIAN);
}

static S32 AsyncIRead(st_FILELOADINFO* fli, S32 offset, char* data, S32 size, S32 n)
{
    return BFD_AsyncRead(fli, offset, data, size, n, LITTLE_ENDIAN);
}

static en_BIO_ASYNC_ERRCODES AsyncReadStatus(st_FILELOADINFO* fli)
{
    return BFD_AsyncReadStatus(fli);
}

static void Swap2(char* d, S32 n)
{
    char t;

    while (n--)
    {
        t = d[0];
        d[0] = d[1];
        d[1] = t;

        d += 2;
    }
}

static void Swap4(char* d, S32 n)
{
    char t;

    while (n--)
    {
        t = d[0];
        d[0] = d[3];
        d[3] = t;

        t = d[1];
        d[1] = d[2];
        d[2] = t;

        d += 4;
    }
}

static void Swap8(char* d, S32 n)
{
    char t;

    while (n--)
    {
        t = d[0];
        d[0] = d[7];
        d[7] = t;

        t = d[1];
        d[1] = d[6];
        d[6] = t;

        t = d[2];
        d[2] = d[5];
        d[5] = t;

        t = d[3];
        d[3] = d[4];
        d[4] = t;

        d += 8;
    }
}

static tag_xFile* BFD_open(const char* filename, const char* mode, U32 lockid, S32,
                           void* xtradata)
{
    tag_xFile* bffp;
    U32 orc; // open return code
    st_BINIO_XTRADATA* xtra = (st_BINIO_XTRADATA*)xtradata;
    S32 xfflg = IFILE_OPEN_READ;

    if (strcmp(mode, "rb") == 0)
    {
        bffp = &g_xfload[lockid];
        xfflg = IFILE_OPEN_READ;
    }
    else if (strcmp(mode, "wb") == 0)
    {
        bffp = NULL;
        xfflg = IFILE_OPEN_WRITE;
    }
    else
    {
        bffp = NULL;
    }

    if (bffp)
    {
        strncpy(bffp->relname, filename, sizeof(bffp->relname) - 1);
        bffp->relname[sizeof(bffp->relname) - 1] = '\0';

        orc = iFileOpen(filename, xfflg, bffp);

        if (orc != 0)
        {
            bffp = NULL;
        }
        else
        {
            xtra->fpos = 0;
            xtra->dbl_buf = NULL;
            xtra->dblbuf_size = 0;
            xtra->dbl_beg = 0;
            xtra->dbl_end = 0;
            xtra->dbl_amt = 0;
        }
    }

    return bffp;
}

static void BFD_close(tag_xFile* bffp, void* xtradata)
{
    st_BINIO_XTRADATA* xtra = (st_BINIO_XTRADATA*)xtradata;

    iFileClose(bffp);

    xtra->fpos = 0;
    xtra->dbl_buf = NULL;
    xtra->dblbuf_size = 0;
    xtra->dbl_beg = 0;
    xtra->dbl_end = 0;
    xtra->dbl_amt = 0;
}

static S32 BFD_read(void* data, S32 elesize, S32 elecnt, tag_xFile* bffp, void* xtradata)
{
    st_BINIO_XTRADATA* xtra = (st_BINIO_XTRADATA*)xtradata;
    char* dest = (char*)data;
    S32 readbeg;
    S32 refill = 0;
    S32 remain;
    S32 actual;
    U32 holdpos;
    U32 numBytes = 0;
    U32 safety = 0;
    S32 r26 = elesize * elecnt;

    if (r26 == 0)
    {
        return 0;
    }

    if (!xtra->dbl_buf || xtra->dblbuf_size < 1 || r26 > xtra->dblbuf_size)
    {
        iFileSeek(bffp, xtra->fpos, IFILE_SEEK_SET);
        numBytes = iFileRead(bffp, dest, r26);

        xtra->fpos += numBytes;
    }
    else
    {
        remain = r26;

        while (true)
        {
            if (xtra->fpos < xtra->dbl_beg)
            {
                refill = 1;

                xtra->dbl_beg = xtra->fpos - (xtra->fpos % xtra->dblbuf_size);
                xtra->dbl_end = xtra->dbl_beg + xtra->dblbuf_size;
                xtra->dbl_amt = 0;
            }
            else if (xtra->fpos >= xtra->dbl_end)
            {
                refill = 1;

                xtra->dbl_beg = xtra->fpos - (xtra->fpos % xtra->dblbuf_size);
                xtra->dbl_end = xtra->dbl_beg + xtra->dblbuf_size;
                xtra->dbl_amt = 0;
            }

            if (refill)
            {
                holdpos = xtra->fpos;

                iFileSeek(bffp, xtra->dbl_beg, IFILE_SEEK_SET);

                xtra->fpos = holdpos;
                xtra->dbl_amt = iFileRead(bffp, xtra->dbl_buf, xtra->dblbuf_size);
            }

            readbeg = xtra->fpos - xtra->dbl_beg;

            if (xtra->dbl_amt > readbeg)
            {
                actual = MIN(remain, xtra->dbl_amt - readbeg);

                memcpy(dest + numBytes, xtra->dbl_buf + readbeg, actual);

                numBytes += actual;
                remain -= actual;

                xtra->fpos += actual;
            }

            if (numBytes == r26 || xtra->dbl_amt < 1 || safety++ > 60000)
            {
                break;
            }
        }
    }

    return (S32)numBytes / elesize;
}

static S32 BFD_seek(tag_xFile* bffp, S32 offset, S32 whence, void* xtradata)
{
    st_BINIO_XTRADATA* xtra = (st_BINIO_XTRADATA*)xtradata;
    S32 pos = iFileSeek(bffp, offset, whence);

    xtra->fpos = offset;

    if (pos == -1)
    {
        return 1;
    }

    return 0;
}

static S32 BFD_getLength(tag_xFile* bffp, void* xtradata)
{
    return iFileGetSize(bffp);
}

static S32 BFD_startSector(const char* filename)
{
    tag_xFile file = {};
    U32 addr = 0;
    U32 length = 0;

    if (!iFileFind(filename, &file))
    {
        iFileGetInfo(&file, &addr, &length);
    }

    iFileClose(&file);

    return addr;
}

static void BFD_cb_GCP2_readasync(tag_xFile* bffp)
{
}

static S32 BFD_AsyncRead(st_FILELOADINFO* fli, S32 pos, void* data, S32 size, S32 n,
                           S32 endian)
{
    tag_xFile* file = (tag_xFile*)fli->privdata;
    st_BINIO_XTRADATA* xtra = (st_BINIO_XTRADATA*)fli->xtradata;

    if (fli->error != FIOERR_NONE)
    {
        return 0;
    }

    if (g_async_context)
    {
        return 0;
    }

    g_async_context = xtra;

    xtra->asyn_status = BINIO_ASYNC_INPROG;
    xtra->asyn_data = (char*)data;
    xtra->asyn_elesize = size;
    xtra->asyn_amt = n;
    xtra->asyn_ismot = 1;

    iFileSeek(file, pos, IFILE_SEEK_SET);
    xFileSetUserData(file, fli);

    S32 result = iFileReadAsync(file, data, size * n, BFD_cb_GCP2_readasync, 0);
    S32 rc;

    if (result < 0)
    {
        rc = 0;
    }
    else
    {
        xtra->gcaskey = result;
        rc = 1;
    }

    if (rc == 0)
    {
        g_async_context = NULL;
        xtra->asyn_status = BINIO_ASYNC_NOOP;
    }

    return 1;
}

static en_BIO_ASYNC_ERRCODES BFD_AsyncReadStatus(st_FILELOADINFO* fli)
{
    en_BIO_ASYNC_ERRCODES status;
    st_BINIO_XTRADATA* xtra = (st_BINIO_XTRADATA*)fli->xtradata;

    if (!g_async_context)
    {
        status = BINIO_ASYNC_NOOP;
    }
    else if (xtra != g_async_context)
    {
        status = BINIO_ASYNC_INPROG;
    }
    else
    {
        if (xtra->asyn_status == BINIO_ASYNC_INPROG)
        {
            XFILE_READSECTOR_STATUS xrdstat;
            S32 amtsofar = 0;

            xrdstat = xFileReadAsyncStatus(xtra->gcaskey, &amtsofar);

            switch (xrdstat)
            {
            case XFILE_RDSTAT_INPROG:
            case XFILE_RDSTAT_QUEUED:
            {
                xtra->asyn_status = BINIO_ASYNC_INPROG;
                break;
            }
            case XFILE_RDSTAT_DONE:
            {
                xtra->asyn_status = BINIO_ASYNC_DONE;
                break;
            }
            case XFILE_RDSTAT_FAIL:
            case XFILE_RDSTAT_EXPIRED:
            default:
            {
                xtra->asyn_status = BINIO_ASYNC_FAIL;
                break;
            }
            }
        }

        status = xtra->asyn_status;

        if (status == BINIO_ASYNC_FAIL || status == BINIO_ASYNC_DONE)
        {
            xtra->asyn_status = BINIO_ASYNC_NOOP;
            g_async_context = NULL;
        }
    }

    return status;
}

WEAK void xFileSetUserData(tag_xFile* file, void* userdata)
{
    file->user_data = userdata;
}

WEAK XFILE_READSECTOR_STATUS xFileReadAsyncStatus(S32 key, S32* amtToFar)
{
    return (XFILE_READSECTOR_STATUS)iFileReadAsyncStatus(key, amtToFar);
}
