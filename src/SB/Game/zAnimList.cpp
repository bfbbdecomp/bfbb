#include <types.h>

#include "xAnim.h"
#include "xstransvc.h"
#include "xMemMgr.h"

#include "zAnimList.h"

extern int32 nals;
extern uint32* aids; // anim IDs (not AIDS, you fool)
extern xAnimTable** atbls; // anim tables
extern int32* anused;

uint32 AlwaysConditional(xAnimTransition*, xAnimSingle*, void*)
{
    return 1;
}


#if 0
void zAnimListInit()
{
    int32 i;
    uint32 size;
    zAnimListAsset* zala;
    st_PKR_ASSET_TOCINFO ainfo;
    xAnimTable* atbl;
    void* buf;
    xAnimFile* afile;
    int32 idle_exists;
    int32 j;
    xAnimFile* afile2;

    // ALST = Animation list https://battlepedia.org/ALST
    nals = xSTAssetCountByType('ALST'); // 0x414C5354

    if (!nals)
    {
        return;
    }

    // << 2 is the same as multiplying by 4
    // so it's just allocating size in bytes
    aids = (uint32*)xMemAllocSize(nals * 4);
    atbls = (xAnimTable**)xMemAllocSize(nals * 4);
    anused = (int32*)xMemAllocSize(nals * 4);

    for (i = 0; i < nals; i++)
    {
        for (j = 0; j < 10; j++)
        {
        }
    }
}
#endif

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
