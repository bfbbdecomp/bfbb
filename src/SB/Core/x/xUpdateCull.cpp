#include "zGlobals.h"
#include "xUpdateCull.h"

U32 xUpdateCull_AlwaysTrueCB(void* ent, void* cbdata)
{
    return 1;
}

void xUpdateCull_Swap(xUpdateCullMgr* mgr, U32 a, U32 b)
{
    xUpdateCullEnt* pMgrAIndex;

    xUpdateCullEnt* pMgrBIndex = mgr->mgr[b];
    xUpdateCullEnt* pMgrIndex = pMgrAIndex = mgr->mgr[a];

    do
    {
        pMgrIndex->index = (U16)b;
        pMgrIndex = pMgrIndex->nextInGroup;
        if (pMgrIndex == NULL) break;
    } while (pMgrIndex != pMgrAIndex);

    pMgrIndex = pMgrBIndex;
    do
    {
        pMgrIndex->index = (U16)a;
        pMgrIndex = pMgrIndex->nextInGroup;
        if (pMgrIndex == NULL) break;
    } while (pMgrIndex != pMgrBIndex);

    // Set index and groupIndex together.
    S32 uVar6 = *(S32 *)(&mgr->ent[a]);
    *(S32 *)(&mgr->ent[a]) = *(S32 *)(&mgr->ent[b]);
    *(S32 *)(&mgr->ent[b]) = uVar6;

    uVar6 = *(S32 *)(&mgr->mgr[a]);
    *(S32 *)(&mgr->mgr[a]) = *(S32 *)(&mgr->mgr[b]);
    *(S32 *)(&mgr->mgr[b]) = uVar6;
}

void xUpdateCull_MakeActive(xUpdateCullMgr* m, xUpdateCullEnt* e)
{
    U32 eIndex = e->index;
    U32 mEntActive = m->entActive;

    if (eIndex >= mEntActive)
    {
        if (eIndex != mEntActive)
        {
            xUpdateCull_Swap(m, eIndex, mEntActive);
        }
        if (m->activateCB != NULL)
        {
            m->activateCB(m->ent[e->index]);
        }
        m->entActive++;
    }
}

void xUpdateCull_MakeInactive(xUpdateCullMgr* m, xUpdateCullEnt* e)
{
    U32 eIndex = e->index;
    U32 mEntActive = m->entActive;

    if (eIndex < mEntActive)
    {
        mEntActive--;
        if (eIndex != mEntActive)
        {
            xUpdateCull_Swap(m, eIndex, mEntActive);
        }
        if (m->deactivateCB != NULL)
        {
            m->deactivateCB(m->ent[e->index]);
        }
        m->entActive--;
    }
}

void xUpdateCull_Reset(xUpdateCullMgr* m)
{
    for (U32 i = m->entActive; i < m->entCount; i++)
    {
        xUpdateCull_MakeActive(m, m->mgr[i]);
    }
}

void xUpdateCull_SetCB(xUpdateCullMgr* m, void* entity, xUpdateCullEntCallback cb, void* cbdata)
{
    for (U32 i = 0; i < m->mgrCount; i++)
    {
        if (*(void **)(&m->ent[m->mgrList[i].index]) == entity)
        {
            m->mgrList[i].cb = cb;
            m->mgrList[i].cbdata = cbdata;
        }
    }
}