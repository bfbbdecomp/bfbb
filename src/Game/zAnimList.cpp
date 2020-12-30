#include <types.h>

#include "../Core/x/xAnim.h"

#include "zAnimList.h"
#include "zAssetTypes.h"

extern int32 nals;
extern uint32* aids; // anim IDs (not AIDS, you fool)
extern xAnimTable** atbls; // anim tables
extern int32* anused;

uint32 AlwaysConditional(xAnimTransition*, xAnimSingle*, void*)
{
    return 1;
}

// func_8004E7E8
#if 1
#pragma GLOBAL_ASM("asm/Game/zAnimList.s", "zAnimListInit__Fv")
#else
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
    xAnimFile* afile;
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
