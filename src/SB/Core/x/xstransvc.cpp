#include "xstransvc.h"

#include <types.h>
#include <string.h>
#include <stdio.h>
#include "xString.h"
#include "xutil.h"
#include "iTRC.h"
#include "iFile.h"

static st_STRAN_DATA g_xstdata = {};
static int32 g_straninit;
static st_PACKER_READ_FUNCS* g_pkrf;
static st_PACKER_ASSETTYPE* g_typeHandlers;

static st_STRAN_SCENE* XST_lock_next();
static void XST_unlock_all();
static int32 XST_cnt_locked();
static int32 XST_PreLoadScene(st_STRAN_SCENE* sdata, const int8* path);
static int8* XST_translate_sid(uint32 sid, int8* extension);
static int8* XST_translate_sid_path(uint32 sid, int8* extension);
static st_STRAN_SCENE* XST_find_bySID(uint32 sid, int32 findTheHOP);
static void XST_reset_raw();
static void XST_unlock(st_STRAN_SCENE* sdata);
static void XST_unlock_all();
static st_STRAN_SCENE* XST_get_rawinst(int32 index);
static int32 XST_cnt_locked();
static st_STRAN_SCENE* XST_nth_locked(int32 index);

int32 xSTStartup(st_PACKER_ASSETTYPE* handlers)
{
    if (g_straninit++ == 0)
    {
        g_typeHandlers = handlers;
        XST_reset_raw();
        PKRStartup();
        g_pkrf = PKRGetReadFuncs(1);
    }
    return g_straninit;
}

int32 xSTShutdown()
{
    g_straninit--;
    if (g_straninit == 0)
    {
        g_typeHandlers = 0;
        XST_unlock_all();
        PKRShutdown();
    }
    return g_straninit;
}

// This doesn't seem exactly how HI would have written this, but it OKs
// TODO: Try to clean this up?
int32 xSTPreLoadScene(uint32 sid, void* userdata, int32 flg_hiphop)
{
    int32 result;
    int32 i = 0;
    st_STRAN_SCENE* sdata;
    int8* path;
    if ((flg_hiphop & 3) == 2)
    {
        sdata = XST_lock_next();
        sdata->scnid = sid;
        sdata->userdata = userdata;
        sdata->isHOP = 1;

        path = XST_translate_sid_path(sid, ".HOP");
        if (path != NULL)
        {
            strcpy(sdata->fnam, path);
            i = XST_PreLoadScene(sdata, path);
        }
        if (i == 0)
        {
            path = XST_translate_sid(sid, ".HOP");
            if (path != NULL)
            {
                strcpy(sdata->fnam, path);
                i = XST_PreLoadScene(sdata, path);
            }
        }
        if (i == 0)
        {
            XST_unlock(sdata);
            result = 0;
        }
        else
        {
            result = i;
        }
    }
    else
    {
        do
        {
            sdata = XST_lock_next();
            sdata->scnid = sid;
            sdata->userdata = userdata;
            sdata->isHOP = 0;

            if (sid != 0x424f4f54 && sid != 0x464f4e54)
            {
                path = XST_translate_sid_path(sid, ".HIP");
                if (path != NULL)
                {
                    strcpy(sdata->fnam, path);
                    i = XST_PreLoadScene(sdata, path);
                }
            }
            if (i == 0)
            {
                path = XST_translate_sid(sid, ".HIP");
                if (path != NULL)
                {
                    strcpy(sdata->fnam, path);
                    i = XST_PreLoadScene(sdata, path);
                }
            }
            if (i == 0)
            {
                XST_unlock(sdata);
                result = 0;
            }
            else
            {
                result = i;
            }
        } while (i == 0);
    }
    return result;
}

int32 xSTQueueSceneAssets(uint32 sid, int32 flg_hiphop)
{
    int32 result = 1;
    st_STRAN_SCENE* sdata = XST_find_bySID(sid, (flg_hiphop & 3) == 2 ? 1 : 0);
    if (sdata == NULL)
    {
        result = 0;
    }
    else
    {
        if (sdata->spkg != NULL)
        {
            g_pkrf->LoadLayer(sdata->spkg, PKR_LTYPE_ALL);
        }
    }
    return result;
}

void xSTUnLoadScene(uint32 sid, int32 flg_hiphop)
{
    st_STRAN_SCENE* sdata;
    if (sid == 0)
    {
        int32 cnt = XST_cnt_locked();

        for (int i = 0; i < cnt; i++)
        {
            sdata = XST_nth_locked(i);
            if (sdata->spkg != NULL)
            {
                g_pkrf->Done(sdata->spkg);
            }
            sdata->spkg = NULL;
        }
        XST_unlock_all();
    }
    else
    {
        sdata = XST_find_bySID(sid, (flg_hiphop & 3) == 2 ? 1 : 0);
        if (sdata != NULL)
        {
            if (sdata->spkg != NULL)
            {
                g_pkrf->Done(sdata->spkg);
            }
            sdata->spkg = NULL;
        }
        XST_unlock(sdata);
    }
}

float32 xSTLoadStep(uint32)
{
    float32 pct = PKRLoadStep(0) != 0 ? 0.0f : 1.00001f;

    iTRCDisk::CheckDVDAndResetState();
    iFileAsyncService();
    return pct;
}

void xSTDisconnect(uint32 sid, int32 flg_hiphop)
{
    st_STRAN_SCENE* sdata = XST_find_bySID(sid, (flg_hiphop & 3) == 2 ? 1 : 0);
    if (sdata != NULL)
    {
        g_pkrf->PkgDisconnect(sdata->spkg);
    }
}

int32 xSTSwitchScene(uint32 sid, void* userdata, int32 (*progmon)(void*, float32))
{
    st_STRAN_SCENE* sdata;
    int32 rc = 0;

    for (int32 i = 1; i >= 0; i--)
    {
        sdata = XST_find_bySID(sid, i);
        if (sdata != NULL)
        {
            if (progmon != NULL)
            {
                progmon(userdata, 0.0f);
            }
            rc = g_pkrf->SetActive(sdata->spkg, PKR_LTYPE_ALL);
            if (progmon != NULL)
            {
                progmon(userdata, 1.0f);
            }
        }
    }

    return rc;
}

int8* xSTAssetName(uint32 aid)
{
    int8* aname = NULL;

    int32 cnt = XST_cnt_locked();
    for (int i = 0; i < cnt; i++)
    {
        st_STRAN_SCENE* sdata = XST_nth_locked(i);
        if (sdata->spkg != NULL)
        {
            aname = g_pkrf->AssetName(sdata->spkg, aid);
            if (aname != NULL)
            {
                break;
            }
        }
    }

    return aname;
}

int8* xSTAssetName(void* raw_HIP_asset)
{
    int8* aname = NULL;

    int32 cnt = XST_cnt_locked();
    for (int i = 0; i < cnt; i++)
    {
        st_STRAN_SCENE* sdata = XST_nth_locked(i);
        aname = g_pkrf->AssetName(sdata->spkg, PKRAssetIDFromInst(raw_HIP_asset));
        if (aname != NULL)
        {
            break;
        }
    }

    return aname;
}

void* xSTFindAsset(uint32 aid, uint32* size)
{
    void* memloc = NULL;
    if (aid == 0)
    {
        return memloc;
    }

    int32 ready;
    int32 scncount = XST_cnt_locked();
    for (int32 i = 0; i < scncount; i++)
    {
        st_STRAN_SCENE* sdata = XST_nth_locked(i);
        if (g_pkrf->PkgHasAsset(sdata->spkg, aid))
        {
            memloc = g_pkrf->LoadAsset(sdata->spkg, aid, NULL, NULL);
            if (!g_pkrf->IsAssetReady(sdata->spkg, aid))
            {
                memloc = NULL;
                if (size != NULL)
                {
                    *size = 0;
                }
            }
            else
            {
                if (size != NULL)
                {
                    *size = g_pkrf->GetAssetSize(sdata->spkg, aid);
                }
            }
            break;
        }
    }
    return memloc;
}

int32 xSTAssetCountByType(uint32 type)
{
    int32 sum = 0;
    int32 cnt = XST_cnt_locked();
    for (int32 i = 0; i < cnt; i++)
    {
        st_STRAN_SCENE* sdata = XST_nth_locked(i);
        sum += g_pkrf->AssetCount(sdata->spkg, type);
    }
    return sum;
}

void* xSTFindAssetByType(uint32 type, int32 idx, uint32* size)
{
    void* memptr = NULL;
    int32 i;
    int32 sum = 0;
    int32 cnt = XST_cnt_locked();
    for (i = 0; i < cnt; i++)
    {
        st_STRAN_SCENE* sdata = XST_nth_locked(i);
        int32 scncnt = g_pkrf->AssetCount(sdata->spkg, type);
        if (idx >= sum && idx < sum + scncnt)
        {
            memptr = g_pkrf->AssetByType(sdata->spkg, type, idx - sum, size);
            break;
        }

        sum += scncnt;
    }
    return memptr;
}

int32 xSTGetAssetInfo(uint32 aid, st_PKR_ASSET_TOCINFO* tocainfo)
{
    int32 rc = 0;
    int32 scncnt = XST_cnt_locked();
    for (int32 i = 0; i < scncnt; i++)
    {
        st_STRAN_SCENE* sdata = XST_nth_locked(i);
        if (g_pkrf->PkgHasAsset(sdata->spkg, aid) != NULL)
        {
            g_pkrf->GetBaseSector(sdata->spkg);
            if (g_pkrf->GetAssetInfo(sdata->spkg, aid, tocainfo))
            {
                rc = 1;
                break;
            }
        }
    }
    return rc;
}

// Equivalent: scheduling is off with the copy of tocinfo to ainfo
int32 xSTGetAssetInfoByType(uint32 type, int32 idx, st_PKR_ASSET_TOCINFO* ainfo)
{
    int32 rc = 0;
    int32 sum = 0;
    const st_PKR_ASSET_TOCINFO tocinfo = { 0, NULL, 0, 0, 0, NULL };
    memset(ainfo, 0, sizeof(st_PKR_ASSET_TOCINFO));

    int32 found = XST_cnt_locked();
    for (int32 i = 0; i < found; i++)
    {
        st_STRAN_SCENE* sdata = XST_nth_locked(i);
        int32 cnt = g_pkrf->AssetCount(sdata->spkg, type);
        if (idx >= sum && idx < sum + cnt)
        {
            g_pkrf->GetBaseSector(sdata->spkg);
            if (g_pkrf->GetAssetInfoByType(sdata->spkg, type, idx - sum, &tocinfo) != 0)
            {
                ainfo->aid = tocinfo.aid;
                ainfo->sector = tocinfo.sector;
                ainfo->plus_offset = tocinfo.plus_offset;
                ainfo->size = tocinfo.size;
                ainfo->mempos = tocinfo.mempos;
                rc = 1;
                break;
            }
        }
            sum += cnt;
    }

    return rc;
}

int32 xSTGetAssetInfoInHxP(uint32 aid, st_PKR_ASSET_TOCINFO* ainfo, uint32 j)
{
    int32 rc = 0;
    int32 cnt = XST_cnt_locked();
    for (int32 i = 0; i < cnt; i++)
    {
        st_STRAN_SCENE* sdata = XST_nth_locked(i);
        if (j == xStrHash(sdata->fnam) && g_pkrf->PkgHasAsset(sdata->spkg, aid))
        {
            g_pkrf->GetBaseSector(sdata->spkg);
            if (g_pkrf->GetAssetInfo(sdata->spkg, aid, ainfo))
            {
                rc = 1;
                break;
            }
        }
    }
    return rc;
}

int8* xST_xAssetID_HIPFullPath(uint32 aid)
{
    return xST_xAssetID_HIPFullPath(aid, 0);
}

int8* xST_xAssetID_HIPFullPath(uint32 aid, uint32* sceneID)
{
    int8* id = NULL;
    int32 cnt = XST_cnt_locked();
    for (int i = 0; i < cnt; i++)
    {
        st_STRAN_SCENE* sdata = XST_nth_locked(i);
        if (g_pkrf->PkgHasAsset(sdata->spkg, aid))
        {
            id = sdata->fnam;
            if (sceneID != NULL)
            {
                *sceneID = sdata->scnid;
            }
            break;
        }
    }

    return id;
}

// register crap
static int32 XST_PreLoadScene(st_STRAN_SCENE* sdata, const int8* name)
{
    int32 buf = 0;
    st_PACKER_READ_DATA* spkg = g_pkrf->Init(sdata->userdata, name, 0x2e, &buf, g_typeHandlers);
    sdata->spkg = spkg;
    if (sdata->spkg != NULL)
    {
        return buf;
    }
    return NULL;
}

static int8* XST_translate_sid(uint32 sid, int8* extension)
{
    static int8 fname[0x40] = {};
    sprintf(fname, "%s%s", xUtil_idtag2string(sid, 0), extension);
    return fname;
}

static int8* XST_translate_sid_path(uint32 sid, int8* extension)
{
    // NOTE: This buffer extends for 0x44 bytes in the rom
    // However, I think that's most likely padding for the jumptable that occurs afterwards
    static int8 fname[0x40] = {};
    int8 pathSeparator[2] = "/";
    sprintf(fname, "%c%c%s%s%s", *xUtil_idtag2string(sid, 0), *(xUtil_idtag2string(sid, 0) + 1),
            pathSeparator, xUtil_idtag2string(sid, 0), extension);
    return fname;
}

static void XST_reset_raw()
{
    memset(&g_xstdata, 0, sizeof(st_STRAN_DATA));
}

static st_STRAN_SCENE* XST_lock_next()
{
    st_STRAN_SCENE* sdata = NULL;
    int32 uselock = -1;
    for (int32 i = 0; i < 16; i++)
    {
        if (!(g_xstdata.loadlock & 1 << i))
        {
            g_xstdata.loadlock |= 1 << i;
            sdata = &g_xstdata.hipscn[i];
            memset(sdata, 0, sizeof(st_STRAN_SCENE));
            uselock = i;
            break;
        }
    }

    if (sdata != NULL)
    {
        sdata->lockid = uselock;
    }

    return sdata;
}

static void XST_unlock(st_STRAN_SCENE* sdata)
{
    if (sdata != NULL)
    {
        if (g_xstdata.loadlock & 1 << sdata->lockid)
        {
            // Can't figure out how to get the andc instruction instead of two instructions
            // Seems to only generate andc if I remove the memset call.
            // NOTE (Square): pulling 1 << sdata->lockid into a temp variable works but
            // causes regswaps.
            g_xstdata.loadlock &= ~(1 << sdata->lockid);
            memset(sdata, 0, sizeof(st_STRAN_SCENE));
        }
    }
}

static void XST_unlock_all()
{
    if (g_xstdata.loadlock)
    {
        for (int32 i = 0; i < 16; i++)
        {
            if (g_xstdata.loadlock & 1 << i)
            {
                XST_unlock(XST_get_rawinst(i));
            }
        }
    }
}

static st_STRAN_SCENE* XST_get_rawinst(int32 index)
{
    return &g_xstdata.hipscn[index];
}

static int32 XST_cnt_locked()
{
    int32 sum = 0;
    for (int i = 0; i < 16; i++)
    {
        if (g_xstdata.loadlock & 1 << i)
        {
            sum++;
        }
    }
    return sum;
}

static st_STRAN_SCENE* XST_nth_locked(int32 index)
{
    st_STRAN_SCENE* sdata = NULL;
    int32 cnt = 0;
    for (int32 i = 0; i < 16; i++)
    {
        if (g_xstdata.loadlock & 1 << i)
        {
            if (cnt == index)
            {
                sdata = &g_xstdata.hipscn[i];
                break;
            }
            cnt += 1;
        }
    }

    return sdata;
}

static st_STRAN_SCENE* XST_find_bySID(uint32 sid, int32 findTheHOP)
{
    st_STRAN_SCENE* da_sdata = NULL;

    for (int32 i = 0; i < 16; i++)
    {
        st_STRAN_SCENE* sc = &g_xstdata.hipscn[i];
        if (g_xstdata.loadlock & 1 << i && sc->scnid == sid && (findTheHOP || !sc->isHOP))
        {
            if (!findTheHOP || sc->isHOP)
            {
                da_sdata = sc;
                break;
            }
        }
    }
    return da_sdata;
}

WEAK void iFileAsyncService()
{
}
