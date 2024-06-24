#include <types.h>

#include "xAnim.h"
#include "xstransvc.h"
#include "xMemMgr.h"

#include "zAnimList.h"

int32 nals;
// NOTE (Square): I think these are Asset IDs, not Anim IDs
uint32* aids; // anim IDs (not AIDS, you fool)
xAnimTable** atbls; // anim tables
int32* anused;

const char* astnames[2][10] = {
    "stop0", "stop1", "stop2", "stop3", "stop4", "stop5", "stop6", "stop7", "stop8", "stop9",
    "loop0", "loop1", "loop2", "loop3", "loop4", "loop5", "loop6", "loop7", "loop8", "loop9",
};

uint32 AlwaysConditional(xAnimTransition*, xAnimSingle*, void*)
{
    return 1;
}

// Equivalent
// Mostly an issue of scheduling.
void zAnimListInit()
{
    // ALST = Animation list https://battlepedia.org/ALST
    nals = xSTAssetCountByType('ALST'); // 0x414C5354
    if (nals == 0)
    {
        return;
    }

    // << 2 is the same as multiplying by 4
    // so it's just allocating size in bytes
    aids = (uint32*)xMemAllocSize(nals * sizeof(int32));
    atbls = (xAnimTable**)xMemAllocSize(nals * sizeof(int32));
    anused = (int32*)xMemAllocSize(nals * sizeof(int32));

    for (int32 i = 0; i < nals; i++)
    {
        uint32 size;
        zAnimListAsset* zala = (zAnimListAsset*)xSTFindAssetByType('ALST', i, &size);
        st_PKR_ASSET_TOCINFO ainfo;
        xSTGetAssetInfoByType('ALST', i, &ainfo);
        xAnimTable* atbl = xAnimTableNew("", NULL, 0);

        aids[i] = ainfo.aid;
        atbls[i] = atbl;
        anused[i] = 0;

        void* buf0 = xSTFindAsset(zala->ids[0], &size);
        if (buf0)
        {
            xAnimFile* afile = xAnimFileNew(buf0, "", 0, NULL);
            xAnimTableNewState(atbl, "idle", 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                               xAnimDefaultBeforeEnter, NULL, NULL);
            xAnimTableAddFile(atbl, afile, "idle");
            anused[i]++;
        }

        for (int32 j = 1; j < 10; j++)
        {
            if (zala->ids[j] == 0)
            {
                continue;
            }

            void* buf = xSTFindAsset(zala->ids[j], &size);
            if (!buf)
            {
                continue;
            }

            xAnimFile* afile = xAnimFileNew(buf, "", 0, NULL);
            if (buf0)
            {
                xAnimTableNewState(atbl, astnames[0][j], 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                                   NULL, xAnimDefaultBeforeEnter, NULL, NULL);
                xAnimTableNewTransition(atbl, astnames[0][j], "idle", AlwaysConditional, NULL, 0x10,
                                        0, 0.0f, 0.0f, 0, 0, 0.0f, 0);
            }
            else
            {
                xAnimTableNewState(atbl, astnames[1][j], 0, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                                   xAnimDefaultBeforeEnter, NULL, NULL);
            }

            xAnimTableAddFile(atbl, afile, astnames[0][j]);
            xAnimTableNewState(atbl, astnames[1][j], 0, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                               xAnimDefaultBeforeEnter, NULL, NULL);
            xAnimTableAddFile(atbl, afile, astnames[1][j]);
            anused[i]++;
        }
    }
}

void zAnimListExit()
{
    nals = 0;
    aids = NULL;
    atbls = NULL;
    anused = NULL;
}

xAnimTable* zAnimListGetTable(uint32 id)
{
    uint32* current_id = aids;

    for (int32 i = 0; i < nals; i++)
    {
        if (id == *current_id)
        {
            return atbls[i];
        }
        current_id++;
    }

    return NULL;
}

int32 zAnimListGetNumUsed(uint32 id)
{
    uint32* current_id = aids;

    for (int32 i = 0; i < nals; i++)
    {
        if (id == *current_id)
        {
            return anused[i];
        }
        current_id++;
    }

    return 0;
}
