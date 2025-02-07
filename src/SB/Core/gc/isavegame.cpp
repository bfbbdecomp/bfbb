#include "isavegame.h"

#include "xMemMgr.h"

#include "iFile.h"
#include "iSystem.h"
#include "iTRC.h"

#include <dolphin.h>
#include <stdio.h>
#include <string.h>
#include <types.h>

// Not 100% on what this does or if it's correctly defined for all cases. Seems to be used for allocation alignment
#define ALIGN_THING(x, n) (n + x - 1 & -x)

// WIP
struct st_ISG_TPL_TEXPALETTE
{
};

// .sbss
static volatile S32 g_isginit;
static st_ISG_TPL_TEXPALETTE* g_rawicon;
static st_ISG_TPL_TEXPALETTE* g_rawbanr;
static S32 g_iconsize;
static S32 g_banrsize;
static S8 isMounted;

// .data
static st_ISGSESSION g_isgdata_MAIN = { 0 };
static S32 g_legalSectSize[] = { 0x2000, 0, -1 };

static S32 iSG_start_your_engines();
static S32 iSG_chk_icondata();
static S32 iSG_load_icondata();
static void iSG_discard_icondata();
static S32 iSG_mc_unmount(S32 slot);

S32 iSGStartup()
{
    if (g_isginit++ != 0)
    {
        return g_isginit;
    }

    iSG_start_your_engines();
    iSG_load_icondata();
    return g_isginit;
}

S32 iSGShutdown()
{
    iSG_discard_icondata();
    return 1;
}

char* iSGMakeName(en_NAMEGEN_TYPE type, const char* base, S32 idx)
{
    static volatile S32 rotate = 0; // fakematch??
    static char rotatebuf[8][32] = { 0 };

    const char* fmt_sd = "%s%02d";
    char* use_buf = rotatebuf[rotate++];
    if (rotate == 8)
    {
        rotate = 0;
    }

    *use_buf = NULL;
    switch (type)
    {
    case ISG_NGTYP_GAMEFILE:

        if (base != NULL)
        {
            sprintf(use_buf, fmt_sd, base, idx);
        }
        else
        {
            sprintf(use_buf, fmt_sd, "SpongeBob", idx);
        }
        break;
    case ISG_NGTYP_GAMEDIR:
    case ISG_NGTYP_CONFIG:
    case ISG_NGTYP_ICONTHUM:
        break;
    }

    return use_buf;
}

st_ISGSESSION* iSGSessionBegin(void* cltdata, void (*chgfunc)(void*, en_CHGCODE), S32 monitor)
{
    iTRCDisk::CheckDVDAndResetState();
    memset(&g_isgdata_MAIN, 0, sizeof(st_ISGSESSION));

    g_isgdata_MAIN.slot = -1;
    g_isgdata_MAIN.chgfunc = chgfunc;
    g_isgdata_MAIN.cltdata = cltdata;

    iSG_chk_icondata();
    return &g_isgdata_MAIN;
}

void iSGSessionEnd(st_ISGSESSION* isgdata)
{
    iTRCDisk::CheckDVDAndResetState();
    for (S32 i = 0; i < ISG_NUM_SLOTS; i++)
    {
        if (isgdata->mcdata[i].unk_0)
        {
            iSG_mc_unmount(i);
            isgdata->mcdata[i].unk_0 = 0;
        }
    }

    memset(isgdata, 0, sizeof(st_ISGSESSION));
}

S32 iSGTgtCount(st_ISGSESSION* isgdata, S32* max)
{
    s32 memSize = 0;
    s32 sectorSize = 0;
    S32 ret = 0;

    if (max != NULL)
    {
        *max = 2;
    }

    for (S32 i = 0; i < ISG_NUM_SLOTS; ++i)
    {
        iTRCDisk::CheckDVDAndResetState();
        s32 result;
        do
        {
            result = CARDProbeEx(i, &memSize, &sectorSize);
        } while (result == CARD_RESULT_BUSY);
        if (result == CARD_RESULT_READY)
        {
            ret++;
        }
    }

    return ret;
}

S32 iSGTgtPhysSlotIdx(st_ISGSESSION* isgdata, S32 tidx)
{
    S32 idx = -1;
    if (iSG_mcidx2slot(tidx, &idx, NULL))
    {
        return idx;
    }
    return -1;
}

static S32 iSG_mc_exists(S32 slot);
static S32 iSG_mc_isGCcard(st_ISG_MEMCARD_DATA* mcdata, int* param2, int* param3);
static S32 iSG_mc_format(st_ISG_MEMCARD_DATA*, int, int*);
S32 iSGTgtFormat(st_ISGSESSION* isgdata, S32 tgtidx, S32 async, S32* canRecover)
{
    S32 slot = 0;
    S32 rc = 0;
    iTRCDisk::CheckDVDAndResetState();
    if (iSG_mc_exists(isgdata->slot) == 0)
    {
        return 0;
    }

    iSG_mcidx2slot(tgtidx, &slot, NULL);
    // FIXME: r3 and r0 are swapped here for some reason ...
    if (slot != isgdata->slot)
    {
        return 0;
    }

    st_ISG_MEMCARD_DATA* data = &isgdata->mcdata[isgdata->slot];
    if (data->unk_0 == NULL)
    {
        return 0;
    }

    if (iSG_mc_isGCcard(data, NULL, NULL) == 0)
    {
        return 0;
    }

    rc = iSG_mc_format(data, 0, canRecover);
    if (rc == -1)
    {
        return -1;
    }
    return rc == 0 ? 0 : 1;
}

static S32 iSG_mc_isformatted(st_ISG_MEMCARD_DATA* mcdata);
U32 iSGTgtState(st_ISGSESSION* isgdata, S32 tgtidx, const char* dpath)
{
    S32 isSectSizeValid = 0;
    S32 state = 0;

    S32 rc = 0;

    S32 slot = 0;
    S32 x = 0;
    S32 y = 0;
    iTRCDisk::CheckDVDAndResetState();

    iSG_mcidx2slot(tgtidx, &slot, NULL);
    if (slot != isgdata->slot)
    {
        iSGTgtSetActive(isgdata, tgtidx);
    }

    if (isgdata->slot < 0)
    {
        return 0x1000000;
    }

    st_ISG_MEMCARD_DATA* data = &isgdata->mcdata[isgdata->slot];
    if (data->unk_0 == NULL)
    {
        return 0;
    }

    if (iSG_mc_exists(isgdata->slot))
    {
        state |= 1;
    }
    else
    {
        return 0;
    }

    if (data->unk_12c != 0)
    {
        return state | 0x1000000;
    }

    rc = iSG_mc_isGCcard(data, &x, &y);
    if (x != 0)
    {
        state |= 0x4000000;
    }

    if (y != 0)
    {
        state |= 0x2000000;
    }

    if (rc == 0)
    {
        return state;
    }

    if (g_legalSectSize[0] > 0)
    {
        for (S32 i = 0; g_legalSectSize[i] > 0; i++)
        {
            if (data->sectorSize == g_legalSectSize[i])
            {
                isSectSizeValid = 1;
                break;
            }
        }
        if (isSectSizeValid == 0)
        {
            state |= 0x8000004;
            return state & ~4;
        }
    }

    if (iSG_mc_isformatted(data) == 0)
    {
        return state | 4;
    }
    else
    {
        return state | 0xe;
    }

    return state;
}

static S32 iSG_mc_settgt(st_ISG_MEMCARD_DATA* mcdata, S32 slot);
S32 iSGTgtSetActive(st_ISGSESSION* isgdata, S32 tgtidx)
{
    S32 ret = 0;
    S32 slot = 0;
    iSG_mcidx2slot(tgtidx, &slot, NULL);
    st_ISG_MEMCARD_DATA* data = &isgdata->mcdata[slot];
    iTRCDisk::CheckDVDAndResetState();
    if (data->unk_0)
    {
        ret = 1;
    }
    else
    {
        if (iSG_mc_settgt(data, slot) != 0)
        {
            ret = 1;
            isgdata->slot = slot;
        }
    }
    return ret;
}

static S32 iSG_get_finfo(st_ISG_MEMCARD_DATA* mcdata, const char* dpath);
static S32 iSG_isSpaceForFile(st_ISG_MEMCARD_DATA* mcdata, S32 param2, const char* param3,
                              S32* param4, S32* param5, S32* param6);
// Regswaps
S32 iSGTgtHaveRoom(st_ISGSESSION* isgdata, S32 tidx, S32 fsize, const char* dpath,
                   const char* fname, S32* bytesNeeded, S32* availOnDisk, S32* needFile)
{
    if (isgdata->slot < 0)
    {
        return 0;
    }
    st_ISG_MEMCARD_DATA* data = &isgdata->mcdata[isgdata->slot];
    if (data->unk_0 == NULL)
    {
        return 0;
    }
    S32 count = 0;
    if (fname == NULL)
    {
        for (S32 i = 0; i < ISG_NUM_FILES; ++i)
        {
            iTRCDisk::CheckDVDAndResetState();
            fname = iSGMakeName(ISG_NGTYP_GAMEFILE, NULL, i);
            if (iSG_get_finfo(data, fname) != 0)
            {
                count++;
            }
        }
    }

    S32 is_space = iSG_isSpaceForFile(data, fsize, fname, bytesNeeded, availOnDisk, needFile);
    if (count > 0 && *bytesNeeded > *availOnDisk)
    {
        if (needFile != NULL && *bytesNeeded > *availOnDisk)
        {
            *needFile = 0;
            return 0;
        }
        return 1;
    }

    CARDFileInfo fileInfo;
    S32 opened = 0;
    for (S32 i = 0; i < CARD_MAX_FILE && isgdata->slot >= 0 && isgdata->slot < ISG_NUM_SLOTS; ++i)
    {
        if (CARDFastOpen(isgdata->slot, i, &fileInfo) == 0)
        {
            opened++;
            CARDClose(&fileInfo);
        }
    }

    if (opened >= CARD_MAX_FILE)
    {
        if (count > 0)
        {
            if (needFile != NULL)
            {
                *needFile = 0;
            }
            return 1;
        }
        return 0;
    }

    return (*bytesNeeded > *availOnDisk) ? 0 : is_space;
}

// Regswaps, very similar to above
S32 iSGTgtHaveRoomStartup(st_ISGSESSION* isgdata, S32 tidx, S32 fsize, const char* dpath,
                          const char* fname, S32* bytesNeeded, S32* availOnDisk, S32* needFile)
{
    if (isgdata->slot < 0)
    {
        return 0;
    }
    st_ISG_MEMCARD_DATA* data = &isgdata->mcdata[isgdata->slot];
    if (data->unk_0 == NULL)
    {
        return 0;
    }
    S32 count = 0;
    if (fname == NULL)
    {
        for (S32 i = 0; i < ISG_NUM_FILES; ++i)
        {
            iTRCDisk::CheckDVDAndResetState();
            fname = iSGMakeName(ISG_NGTYP_GAMEFILE, NULL, i);
            if (iSG_get_finfo(data, fname) != 0)
            {
                count++;
            }
        }
    }

    S32 is_space = iSG_isSpaceForFile(data, fsize, fname, bytesNeeded, availOnDisk, needFile);
    if (count > 0 && *bytesNeeded > *availOnDisk)
    {
        if (needFile != NULL && *bytesNeeded > *availOnDisk)
        {
            *needFile = 0;
            return 0;
        }
        return 1;
    }

    CARDFileInfo fileInfo;
    S32 opened = 0;
    for (S32 i = 0; i < CARD_MAX_FILE && isgdata->slot >= 0 && isgdata->slot < ISG_NUM_SLOTS; ++i)
    {
        if (CARDFastOpen(isgdata->slot, i, &fileInfo) == 0)
        {
            opened++;
            CARDClose(&fileInfo);
        }
    }

    if (opened >= CARD_MAX_FILE)
    {
        if (count > 0)
        {
            if (needFile != NULL)
            {
                *needFile = 0;
            }
            return 0;
        }
        *needFile = -1;
        return 0;
    }

    if (*bytesNeeded > *availOnDisk)
    {
        return 0;
    }
    return (count >= 3) ? 0 : is_space;
}

static S32 iSG_get_fsize(st_ISG_MEMCARD_DATA* mcdata, const char* param2);
static S32 iSG_cubeicon_size(S32 slot, S32 param2);
S32 iSGFileSize(st_ISGSESSION* isgdata, const char* fname)
{
    S32 ret = 0;
    if (isgdata->slot < 0)
    {
        return -1;
    }
    st_ISG_MEMCARD_DATA* data = &isgdata->mcdata[isgdata->slot];
    iTRCDisk::CheckDVDAndResetState();
    ret = iSG_get_fsize(data, fname);
    if (ret >= 0)
    {
        ret -= iSG_cubeicon_size(data->unk_4, data->sectorSize);
        if (ret < 0)
        {
            ret = -1;
        }
    }
    return ret;
}

char* iSGFileModDate(st_ISGSESSION* isgdata, const char* fname)
{
    return iSGFileModDate(isgdata, fname, NULL, NULL, NULL, NULL, NULL, NULL);
}

static S32 iSG_get_fmoddate(st_ISG_MEMCARD_DATA* mcdata, const char* fname, int* sec, int* min,
                            int* hr, int* mon, int* day, int* yr);
char* iSGFileModDate(st_ISGSESSION* isgdata, const char* fname, S32* sec, S32* min, S32* hr,
                     S32* mon, S32* day, S32* yr)
{
    static char datestr[0x40] = { 0 };
    int sec_str = 0;
    int min_str = 0;
    int hr_str = 0;
    int mon_str = 0;
    int day_str = 0;
    int yr_str = 0;
    if (iSG_get_fmoddate(&isgdata->mcdata[isgdata->slot], fname, &sec_str, &min_str, &hr_str,
                         &mon_str, &day_str, &yr_str) != 0)
    {
        sprintf(datestr, "%02d/%02d/%04d %02d:%02d:%02d", mon_str, day_str, yr_str, hr_str, min_str,
                sec_str);

        if (sec != NULL)
        {
            *sec = sec_str;
        }
        if (min != NULL)
        {
            *min = min_str;
        }
        if (hr != NULL)
        {
            *hr = hr_str;
        }
        if (mon != NULL)
        {
            *mon = mon_str;
        }
        if (day != NULL)
        {
            *day = day_str;
        }
        if (yr != NULL)
        {
            *yr = yr_str;
        }
    }
    else
    {
        sprintf(datestr, "<Unknown Modification>");
    }
    return datestr;
}

void iSGMakeTimeStamp(char* str)
{
    OSCalendarTime calendar_time = { 0 };
    OSTime time = OSGetTime();
    OSTicksToCalendarTime(time, &calendar_time);
    sprintf(str, "%02d/%02d/%04d %02d:%02d:%02d", calendar_time.mon + 1, calendar_time.mday,
            calendar_time.year, calendar_time.hour, calendar_time.min, calendar_time.sec);
}

S32 iSGSelectGameDir(st_ISGSESSION* isgdata, const char* dname)
{
    if (isgdata->slot < 0)
    {
        return 0;
    }
    st_ISG_MEMCARD_DATA* data = &isgdata->mcdata[isgdata->slot];

    if (data->unk_0 == 0)
    {
        return 0;
    }

    if (iSG_mc_isGCcard(data, NULL, NULL) == 0)
    {
        return 0;
    }

    if (iSG_mc_isformatted(data) == 0)
    {
        return 0;
    }

    S32 count = 0;
    for (S32 idx = 0; idx < ISG_NUM_FILES; ++idx)
    {
        const char* n = iSGMakeName(ISG_NGTYP_GAMEFILE, NULL, idx);
        if (iSG_get_finfo(data, n) != 0)
        {
            count++;
        }
    }

    return count != 0;
}

S32 iSGSetupGameDir(st_ISGSESSION* isgdata, const char* dname, S32 force_iconfix)
{
    return 1;
}

static char* iSG_bfr_icondata(char* param1, CARDStat* stat, char* param3, int param4);
static S32 iSG_mc_fopen(st_ISG_MEMCARD_DATA*, const char*, S32, en_ISG_IOMODE, en_ASYNC_OPERR*);
static void iSG_mc_fclose(st_ISG_MEMCARD_DATA*);
static void iSG_mc_fclose(st_ISG_MEMCARD_DATA*, CARDStat*);
static S32 iSG_mc_fdel(st_ISG_MEMCARD_DATA*, const char*);
static S32 iSG_mc_fwrite(st_ISG_MEMCARD_DATA*, char*, int);
static S32 iSG_upd_icostat(CARDStat*, CARDStat*);
static void iSG_timestamp(CARDStat*);
S32 iSGSaveFile(st_ISGSESSION* isgdata, const char* fname, char* data, S32 n, S32 async, char* arg5)
{
    void* alloc;
    S32 allocsize;
    char* icondata;
    S32 iconsize;

    S32 writeret = 0;
    en_ASYNC_OPERR operr = ISG_OPERR_NONE;
    CARDStat statA = { 0 };
    CARDStat statB = { 0 };

    ResetButton::DisableReset();
    if (isgdata->slot < 0)
    {
        isgdata->unk_26c = ISG_OPSTAT_FAILURE;
        isgdata->unk_268 = ISG_OPERR_NOCARD;
        return 0;
    }

    st_ISG_MEMCARD_DATA* mcdata = &isgdata->mcdata[isgdata->slot];
    if (mcdata->unk_12c != 0)
    {
        isgdata->unk_26c = ISG_OPSTAT_FAILURE;
        isgdata->unk_268 = ISG_OPERR_DAMAGE;
        return 0;
    }

    iTRCDisk::CheckDVDAndResetState();
    iconsize = iSG_cubeicon_size(isgdata->slot, mcdata->sectorSize);
    S32 sectorsize200 = ALIGN_THING(mcdata->sectorSize, 0x200);
    iconsize += ALIGN_THING(sectorsize200, n);

    allocsize = iconsize + 0x1f;
    alloc = xMemPushTemp(allocsize);
    memset(alloc, 0, allocsize);
    icondata = (char*)((U32)alloc + 0x1f & 0xFFFFFFE0);

    memcpy(iSG_bfr_icondata(icondata, &statA, arg5, mcdata->sectorSize), data, n);
    iTRCDisk::CheckDVDAndResetState();

    if (iSG_mc_fopen(mcdata, fname, iconsize, ISG_IOMODE_WRITE, &operr) != 0)
    {
        if (iSG_mc_fwrite(mcdata, icondata, iconsize) != 0)
        {
            writeret = 1;
        }
        else
        {
            writeret = 0;
            operr = ISG_OPERR_SVWRITE;
        }

        if (writeret != 0)
        {
            iSG_upd_icostat(&statA, &mcdata->unk_20);
            iSG_timestamp(&mcdata->unk_20);
            s32 result;
            do
            {
                result = CARDSetStatus(mcdata->unk_4, mcdata->unk_c.fileNo, &mcdata->unk_20);
            } while (result == CARD_RESULT_BUSY);

            if (result != CARD_RESULT_READY)
            {
                writeret = 0;
            }
        }

        if (writeret != 0)
        {
            s32 result;
            do
            {
                result = CARDSetAttributes(mcdata->unk_4, mcdata->unk_c.fileNo, CARD_ATTR_PUBLIC);
            } while (result == CARD_RESULT_BUSY);
        }

        iSG_mc_fclose(mcdata, &statB);
    }
    xMemPopTemp(alloc);

    if (writeret == 0 && mcdata->unk_12c == 0)
    {
        iSG_mc_fdel(mcdata, fname);
    }

    ResetButton::EnableReset();
    iTRCDisk::CheckDVDAndResetState();

    isgdata->unk_268 = ISG_OPERR_NONE;
    if (writeret != 0)
    {
        isgdata->unk_26c = ISG_OPSTAT_SUCCESS;
    }
    else
    {
        isgdata->unk_26c = ISG_OPSTAT_FAILURE;
        if (operr != ISG_OPERR_NONE)
        {
            isgdata->unk_268 = operr;
        }
        else
        {
            isgdata->unk_268 = ISG_OPERR_UNKNOWN;
        }
    }
    return writeret;
}

S32 iSGLoadFile(st_ISGSESSION* isgdata, const char* fname, char* databuf, S32 async)
{
    S32 numBytes = iSGFileSize(isgdata, fname);
    return iSGReadLeader(isgdata, fname, databuf, numBytes, async);
}

static S32 iSG_mc_fread(st_ISG_MEMCARD_DATA* mcdata, char*, S32, S32);
S32 iSGReadLeader(st_ISGSESSION* isgdata, const char* fname, char* databuf, S32 numbytes, S32 async)
{
    en_ASYNC_OPERR operr = ISG_OPERR_NONE;
    S32 readret = 0;
    void* alloc = NULL;
    if (isgdata->slot < 0)
    {
        isgdata->unk_26c = ISG_OPSTAT_FAILURE;
        isgdata->unk_268 = ISG_OPERR_NOCARD;
        return 0;
    }
    st_ISG_MEMCARD_DATA* data = &isgdata->mcdata[isgdata->slot];

    if (data->unk_12c != 0)
    {
        isgdata->unk_26c = ISG_OPSTAT_FAILURE;
        isgdata->unk_268 = ISG_OPERR_DAMAGE;
        return 0;
    }

    iTRCDisk::CheckDVDAndResetState();
    S32 iconsize = iSG_cubeicon_size(data->unk_4, data->sectorSize);
    U32 sign = (S32)databuf >> 0x1f;
    // /x + (n-1) & -x is the same as Round x up to next n
    S32 nearest200 = -data->sectorSize & 0x1ff + data->sectorSize;
    // FIXME: I think the code is supposed to check if there is enough room at the end of the existing databuf allocation to use
    //        and only allocate if not.
    void* readbuf;
    if (((sign * 0x20 | (int)databuf * 0x8000000 + sign >> 0x1b) != sign) ||
        (sign = numbytes, readbuf = databuf, numbytes != (numbytes / nearest200) * nearest200))
    {
        sign = numbytes + 0x1ffU & 0xfffffe00;
        S32 __n = sign + 0x1f;
        alloc = (void*)xMemPushTemp(__n);
        readbuf = alloc;
        memset(alloc, 0, __n);
        readbuf = (char*)((int)alloc + 0x1fU & 0xffffffe0);
    }
    iTRCDisk::CheckDVDAndResetState();

    if (iSG_mc_fopen(data, fname, -1, ISG_IOMODE_READ, &operr) != 0)
    {
        readret = (bool)iSG_mc_fread(data, (char*)readbuf, numbytes, iconsize);
        iSG_mc_fclose(data);
    }

    if (readret == 0 && alloc != NULL)
    {
        memcpy(databuf, readbuf, numbytes);
    }
    if (alloc != NULL)
    {
        xMemPopTemp(alloc);
    }

    isgdata->unk_268 = ISG_OPERR_NONE;
    if (readret != 0)
    {
        isgdata->unk_26c = ISG_OPSTAT_SUCCESS;
    }
    else
    {
        isgdata->unk_26c = ISG_OPSTAT_FAILURE;
        if (data->unk_12c != 0)
        {
            isgdata->unk_268 = ISG_OPERR_DAMAGE;
        }
        else
        {
            isgdata->unk_268 = ISG_OPERR_OTHER;
        }
    }
    return readret;
}

en_ASYNC_OPSTAT iSGPollStatus(st_ISGSESSION* isgdata, en_ASYNC_OPCODE* curop, S32 block)
{
    return isgdata->unk_26c;
}

en_ASYNC_OPERR iSGOpError(st_ISGSESSION* isgdata, char* errmsg)
{
    static char errmsgs[0x15][0x4] = { 0 };

    en_ASYNC_OPERR err;
    if (errmsg == NULL)
    {
        return isgdata->unk_268;
    }

    if (isgdata->unk_268 < ISG_OPERR_NOMORE)
    {
        strncpy(errmsg, errmsgs[isgdata->unk_268], 0x80);
    }
    else
    {
        strncpy(errmsg, errmsgs[ISG_OPERR_UNKNOWN], 0x80);
    }
    errmsg[0x7f] = NULL;
    return isgdata->unk_268;
}

static S32 iSG_start_your_engines()
{
    CARDInit();
    return 1;
}

// Looks equivalent. Can't get variable initializtions to match.
S32 iSG_mcidx2slot(S32 param1, S32* out_slot, S32* param3)
{
    s32 cardReady[ISG_NUM_SLOTS] = {};
    S32 ret = 0;
    S32 idk = 0;
    s32 memSize = 0;
    s32 sectorSize = 0;
    *out_slot = -1;

    for (S32 i = 0; i < ISG_NUM_SLOTS; i++)
    {
        s32 result;
        do
        {
            result = CARDProbeEx(i, &memSize, &sectorSize);
        } while (result == CARD_RESULT_BUSY);

        if (result == CARD_RESULT_READY)
        {
            cardReady[i] = TRUE;
        }
    }

    for (S32 i = 0; i < ISG_NUM_SLOTS; i++)
    {
        if (cardReady[i])
        {
            if (idk == param1)
            {
                *out_slot = i;
                ret = 1;
                break;
            }
            idk++;
        }
    }

    if (param3)
    {
        for (S32 i = 0; i < ISG_NUM_SLOTS; i++)
        {
            param3[i] = cardReady[i];
        }
    }

    return ret;
}

static S32 iSG_mc_exists(S32 slot)
{
    S32 ret = 0;
    s32 memSize = 0;
    s32 sectorSize = 0;

    if (slot < -1)
    {
        return 0;
    }

    S32 result;
    do
    {
        result = CARDProbeEx(slot, &memSize, &sectorSize);
    } while (result == CARD_RESULT_BUSY);

    if (result == CARD_RESULT_READY)
    {
        ret = 1;
    }

    return ret;
}

static S32 iSG_mc_tryRepair(st_ISG_MEMCARD_DATA* mcdata)
{
    S32 result = 0;
    S32 rc = 0;
    s32 xferBytes = 0;

    if (mcdata->unk_0 == 0)
    {
        rc = 0;
    }

    else if (mcdata->unk_12c)
    {
        rc = 0;
    }
    else
    {
        do
        {
            result = CARDCheckEx(mcdata->unk_4, &xferBytes);
        } while (result == CARD_RESULT_BUSY);

        if (result == CARD_RESULT_READY)
        {
            rc = 1;
        }
        else if (result == CARD_RESULT_ENCODING)
        {
            rc = 1;
        }
        else
        {
            if (result != CARD_RESULT_BROKEN)
            {
                mcdata->unk_12c = 1;
            }
            rc = 0;
        }
    }
    return rc;
}

static S32 iSG_mc_isformatted(st_ISG_MEMCARD_DATA* mcdata)
{
    S32 result = 0;
    S32 rc = 0;
    s32 xferBytes = 0;

    if (mcdata->unk_0 == 0)
    {
        rc = 0;
    }
    else if (mcdata->unk_12c)
    {
        rc = 0;
    }
    else
    {
        do
        {
            result = CARDCheckEx(mcdata->unk_4, &xferBytes);
        } while (result == CARD_RESULT_BUSY);

        if (result == CARD_RESULT_READY)
        {
            rc = 1;
        }
        else if (result == CARD_RESULT_BROKEN)
        {
            rc = 0;
        }
        else
        {
            rc = 0;
        }
    }

    return rc;
}

static S32 iSG_mc_isGCcard(st_ISG_MEMCARD_DATA* mcdata, int* param2, int* param3)
{
    S32 result = 0;
    S32 rc = 0;

    s32 xferBytes = 0;
    u16 encoding = 0;
    s32 memSize = 0;
    s32 sectorSize = 0;

    if (param2)
    {
        *param2 = 0;
    }

    if (param3)
    {
        *param3 = 0;
    }

    if (mcdata->unk_0 == 0)
    {
        return 0;
    }
    if (mcdata->unk_12c)
    {
        return 0;
    }

    do
    {
        result = CARDProbeEx(mcdata->unk_4, &memSize, &sectorSize);
    } while (result == CARD_RESULT_BUSY);

    if (result == CARD_RESULT_READY)
    {
        rc = 1;
    }

    if (rc != 0)
    {
        do
        {
            result = CARDCheckEx(mcdata->unk_4, &xferBytes);
        } while (result == CARD_RESULT_BUSY);

        if (result == CARD_RESULT_READY)
        {
            rc = 1;
        }
        else if (result == CARD_RESULT_BROKEN)
        {
            rc = 2;
        }
        else
        {
            if (result == CARD_RESULT_ENCODING)
            {
                rc = 3;
                if (param2)
                {
                    *param2 = 1;
                }
            }
            else
            {
                rc = 0;
                if (result == CARD_RESULT_ENCODING && param2)
                {
                    *param2 = 1;
                }
                if (result == CARD_RESULT_IOERROR && param3)
                {
                    *param3 = 1;
                }
            }
        }
    }

    if (rc == 1)
    {
        do
        {
            result = CARDGetEncoding(mcdata->unk_4, &encoding);
        } while (result == CARD_RESULT_BUSY);

        if (result == CARD_RESULT_READY && encoding && param2)
        {
            *param2 = 1;
        }
    }

    return rc;
}

static S32 iSG_cubeicon_size(S32 param1, S32 param2);
static S32 iSG_get_finfo(st_ISG_MEMCARD_DATA*, const char*);
// PS2 signature:
// static signed int iSG_isSpaceForFile(class st_ISG_MEMCARD_DATA* mcdata, S32 mcidx, S32 fsize,
//                                      char* dpath, char* fname, S32* bytesNeeded, S32* availOnDisk)
static S32 iSG_isSpaceForFile(st_ISG_MEMCARD_DATA* mcdata, S32 param2, const char* param3,
                              S32* param4, S32* param5, S32* param6)
{
    S32 rc = 0;
    S32 result = 0;
    s32 byteNotUsed = 0;
    s32 filesNotUsed = 0;
    S32 len;

    if (mcdata->unk_0 == 0)
    {
        return 0;
    }
    len = iSG_cubeicon_size(mcdata->unk_4, mcdata->sectorSize);
    len = len + param2;
    len = ALIGN_THING(mcdata->sectorSize, len);

    do
    {
        result = CARDFreeBlocks(mcdata->unk_4, &byteNotUsed, &filesNotUsed);
    } while (result == CARD_RESULT_BUSY);

    if (result == CARD_RESULT_READY)
    {
        if (param5)
        {
            *param5 = byteNotUsed / mcdata->sectorSize;
        }
        if (param4)
        {
            *param4 = len / mcdata->sectorSize;
        }
    }
    else
    {
        return 0;
    }

    if (param6)
    {
        *param6 = 1;
    }

    if (iSG_get_finfo(mcdata, param3))
    {
        if (param6)
        {
            *param6 = *param6 - 1 & ~(*param6 - 1 >> 0x1f); // FIXME: Fakematch
        }
        if (len <= mcdata->unk_b0.length + byteNotUsed)
        {
            rc = 1;
        }
    }
    else
    {
        if (len <= byteNotUsed && filesNotUsed > 0)
        {
            rc = 1;
        }
    }

    return rc;
}

static S32 iSG_mc_mount(S32 slot);
static S32 iSG_mc_settgt(st_ISG_MEMCARD_DATA* mcdata, S32 slot)
{
    if (iSG_mc_mount(slot))
    {
        mcdata->unk_0 = 1;
        mcdata->unk_4 = slot;

        iSG_mc_tryRepair(mcdata);
        CARDGetSectorSize(slot, (u32*)&mcdata->sectorSize);
    }
    else
    {
        mcdata->unk_0 = 0;
    }

    return mcdata->unk_0 != 0 ? 1 : 0;
}

static S32 iSG_get_finfo(st_ISG_MEMCARD_DATA* mcdata, const char* dpath)
{
    S32 rc = 0;
    en_ASYNC_OPERR operr = ISG_OPERR_NONE;

    if (iSG_mc_fopen(mcdata, dpath, -1, ISG_IOMODE_READ, &operr))
    {
        rc = 1;
        memcpy(&mcdata->unk_b0, &mcdata->unk_20, sizeof(CARDStat));
        memcpy(&mcdata->unk_9c, &mcdata->unk_c, sizeof(CARDFileInfo));
        iSG_mc_fclose(mcdata);
    }

    return rc;
}

static S32 iSG_curKosher(CARDStat* stat, CARDFileInfo* info)
{
    S32 rc = 1;

    if ((stat->iconAddr < 1 || stat->iconAddr > 0x7fffffff) &&
        (stat->commentAddr < 1 || stat->commentAddr > 0x7fffffff))
    {
        rc = 0;
    }
    else
    {
        char stuff[0x200] = { 0 };
        sprintf(stuff, "SPONGEBOB:WHENROBOTSATTACK::RyanNeilDan");
        void* alloc = xMemPushTemp(0x5e00 + 0x1f);
        // align buf address to 32 bytes
        char* buf = (char*)((U32)alloc + 0x1f & ~0x1f);

        S32 result;
        do
        {
            result = CARDRead(info, buf, 0x5e00, 0);
        } while (result == CARD_RESULT_BUSY);

        if (result == CARD_RESULT_READY)
        {
            if (memcmp(buf + 0x5a40, stuff, strlen(stuff) - 1))
            {
                rc = 0;
            }

            if (memcmp(buf, "Battle for Bikini Bottom", strlen("Battle for Bikini Bottom") - 1))
            {
                rc = 0;
            }
        }

        xMemPopTemp(alloc);
    }

    return rc;
}
static S32 iSG_fileKosher(st_ISG_MEMCARD_DATA* mcdata, const char* param2, int param3, int* param4)
{
    S32 rc = 0;
    en_ASYNC_OPERR operr = ISG_OPERR_NONE;

    if (param4)
    {
        *param4 = 0;
    }

    if (iSG_mc_fopen(mcdata, param2, -1, ISG_IOMODE_READ, &operr) == 0)
    {
        return -1;
    }

    S32 ret = iSG_curKosher(&mcdata->unk_20, &mcdata->unk_c);
    iSG_mc_fclose(mcdata);

    if (ret == 0)
    {
        rc = 0;
        if (param3 && iSG_mc_fdel(mcdata, param2) && param4)
        {
            *param4 = 1;
        }
    }
    else
    {
        rc = 1;
    }
    return rc;
}

static S32 iSG_get_fsize(st_ISG_MEMCARD_DATA* mcdata, const char* param2)
{
    S32 rc = -1;

    if (iSG_get_finfo(mcdata, param2))
    {
        rc = mcdata->unk_b0.length;
    }

    if (rc < 0)
    {
        rc = -1;
    }

    return rc;
}

static S32 iSG_get_fmoddate(st_ISG_MEMCARD_DATA* mcdata, const char* fname, int* sec, int* min,
                            int* hr, int* mon, int* day, int* yr)
{
    S32 rc = 1;
    OSCalendarTime time = { 0 };

    if (iSG_get_finfo(mcdata, fname) == 0)
    {
        rc = 0;
    }
    else
    {
        // FIXME: This first param isn't right, can't decipher the 64 bit math
        OSTicksToCalendarTime((u64)mcdata->unk_b0.time * (u64)(GET_BUS_FREQUENCY() / 4), &time);

        if (sec)
        {
            *sec = time.sec;
        }
        if (min)
        {
            *min = time.min;
        }
        if (hr)
        {
            *hr = time.hour;
        }
        if (mon)
        {
            *mon = time.mon + 1;
        }
        if (day)
        {
            *day = time.mday;
        }
        if (mon)
        {
            *mon = time.mon + 1;
        }
        if (day)
        {
            *day = time.mday;
        }
        if (yr)
        {
            *yr = time.year;
        }
    }

    return rc;
}

static void iSG_timestamp(CARDStat*)
{
}

struct IconData
{
    char game_name[0x20];
    char buf0[0x20];
    char buf1[0x1800];
    char buf2[8][0x800];
    char pad[0x200];
    char footer[0x200];
};
static S32 iSG_cubeicon_size(S32 slot, S32 param2)
{
    if ((U32)slot > 1)
    {
        return -1;
    }

    S32 t = ALIGN_THING(param2, 0x200);

    // FIXME: Macro not quite right
    // return ALIGN_THING(t, sizeof(IconData));
    return -t & sizeof(IconData) + t - 1;
}

static S32 iSG_chk_icondata()
{
    return 1;
}

void iSG_tpl_unpack(st_ISG_TPL_TEXPALETTE*);
static S32 iSG_load_icondata()
{
    g_rawicon = (st_ISG_TPL_TEXPALETTE*)iFileLoad("/SBGCIcon.tpl", NULL, (U32*)g_iconsize);
    g_rawbanr = (st_ISG_TPL_TEXPALETTE*)iFileLoad("/SBGCBanner.tpl", NULL, (U32*)g_banrsize);
    iSG_tpl_unpack(g_rawicon);
    iSG_tpl_unpack(g_rawbanr);

    return g_rawicon && g_iconsize && g_rawbanr && g_banrsize ? 1 : 0;
}

static void iSG_discard_icondata()
{
    OSFreeToHeap(__OSCurrHeap, g_rawicon);
    OSFreeToHeap(__OSCurrHeap, g_rawbanr);
    g_rawicon = NULL;
    g_iconsize = 0;
    g_rawbanr = NULL;
    g_banrsize = 0;
}

struct TEX
{
    struct UnkStruct
    {
        U32 unk_0;
        U32 unk_4;
        void* unk_8;
    };
    UnkStruct* unk_0;
};
static TEX* iSG_tpl_TEXGet(st_ISG_TPL_TEXPALETTE*, unsigned int);
static char* iSG_bfr_icondata(char* param1, CARDStat* stat, char* param3, int param4)
{
    IconData data = { 0 };
    static st_ISG_TPL_TEXPALETTE* ico_pal;
    static TEX* ico_desc;
    static U32 i = 0;

    sprintf(data.footer, "SPONGEBOB:WHENROBOTSATTACK::RyanNeilDan");
    strncpy(data.game_name, "Battle for Bikini Bottom", sizeof(data.game_name));
    data.game_name[0x1f] = NULL;

    if (param3)
    {
        strncpy(data.buf0, param3, sizeof(data.buf0));
    }
    data.buf0[0x1f] = NULL;

    ico_pal = g_rawbanr;
    ico_desc = iSG_tpl_TEXGet(ico_pal, 0);
    memcpy(data.buf1, ico_desc->unk_0->unk_8, sizeof(data.buf1));

    ico_pal = g_rawicon;
    for (i = 0; i < 8; i++)
    {
        ico_desc = iSG_tpl_TEXGet(ico_pal, i);
        memcpy(data.buf2[i], ico_desc->unk_0->unk_8, sizeof(data.buf2[i]));
    }

    memcpy(param1, &data, sizeof(data));

    S32 t = ALIGN_THING(param4, 0x1ff);
    return param1 + (t + (sizeof(IconData) - 1) & -t);
}

static S32 iSG_mc_unmount(S32 slot)
{
    S32 rc = 0;
    S32 result;

    do
    {
        result = CARDUnmount(slot);
    } while (result == CARD_RESULT_BUSY);

    if (result == CARD_RESULT_READY)
    {
        rc = 1;
    }
    else if (result == CARD_RESULT_NOCARD)
    {
        rc = 1;
    }

    return rc;
}

static void iSG_cb_asyndone(long, long)
{
}

void iSGAutoSave_Startup()
{
}
