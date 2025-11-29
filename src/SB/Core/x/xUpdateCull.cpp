#include "zGlobals.h"
#include "xUpdateCull.h"
#include "xGroup.h"

static void xUpdateCull_Swap(xUpdateCullMgr* mgr, U32 a, U32 b)
{
    xUpdateCullEnt* pMgrAIndex;

    xUpdateCullEnt* pMgrBIndex = mgr->mgr[b];
    xUpdateCullEnt* pMgrIndex = pMgrAIndex = mgr->mgr[a];

    do
    {
        pMgrIndex->index = (U16)b;
        pMgrIndex = pMgrIndex->nextInGroup;
        if (pMgrIndex == NULL)
            break;
    } while (pMgrIndex != pMgrAIndex);

    pMgrIndex = pMgrBIndex;
    do
    {
        pMgrIndex->index = (U16)a;
        pMgrIndex = pMgrIndex->nextInGroup;
        if (pMgrIndex == NULL)
            break;
    } while (pMgrIndex != pMgrBIndex);

    // Set index and groupIndex together.
    S32 uVar6 = *(S32*)(&mgr->ent[a]);
    *(S32*)(&mgr->ent[a]) = *(S32*)(&mgr->ent[b]);
    *(S32*)(&mgr->ent[b]) = uVar6;

    uVar6 = *(S32*)(&mgr->mgr[a]);
    *(S32*)(&mgr->mgr[a]) = *(S32*)(&mgr->mgr[b]);
    *(S32*)(&mgr->mgr[b]) = uVar6;
}

static void xUpdateCull_MakeActive(xUpdateCullMgr* m, xUpdateCullEnt* e)
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

static void xUpdateCull_MakeInactive(xUpdateCullMgr* m, xUpdateCullEnt* e)
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

U32 xUpdateCull_AlwaysTrueCB(void* ent, void* cbdata)
{
    return 1;
}

U32 xUpdateCull_DistanceSquaredCB(void* ent, void* cbdata)
{
    FloatAndVoid fandv;

    if (((xEnt*)ent)->baseFlags & 0x80)
    {
        return 1;
    }

    xVec3* campos = &xglobals->camera.mat.pos;

    fandv.v = cbdata;

    F32 dist2 = SQR(((xEnt*)ent)->model->Mat->pos.x - campos->x) +
                SQR(((xEnt*)ent)->model->Mat->pos.y - campos->y) +
                SQR(((xEnt*)ent)->model->Mat->pos.z - campos->z);
    return (dist2 < fandv.f);
}

xUpdateCullMgr* xUpdateCull_Init(void** ent, U32 entCount, xGroup** group, U32 groupCount)
{
    void** tempEnt = NULL;
    U32 tempCount = 0;

    if (entCount > 0)
    {
        tempEnt = (void**)(((((RwGlobals*)RwEngineInstance)->memoryFuncs).rwmalloc)(
            (sizeof(void*) * entCount)));

        for (U32 idx = 0; idx < entCount; idx++)
        {
            if (!(((xEnt*)ent[idx])->baseFlags & 0x80))
            {
                tempEnt[tempCount++] = ent[idx];
            }
        }
    }
    ent = tempEnt;
    entCount = tempCount;

    U32 i, j, k, gcnt, entsInThisGroup, entsInGroups, nonEmptyGroups;
    S32 x;

    entsInGroups = 0;
    nonEmptyGroups = 0;

    bool* inGroupArray = (bool*)(((((RwGlobals*)RwEngineInstance)->memoryFuncs).rwmalloc)(
        (sizeof(bool) * entCount)));
    memset(inGroupArray, 0, sizeof(bool) * entCount);

    for (i = 0; i < groupCount; i++)
    {
        entsInThisGroup = 0;
        gcnt = xGroupGetCount(group[i]);
        for (j = 0; j < gcnt; j++)
        {
            xBase* base = xGroupGetItemPtr(group[i], j);
            for (k = 0; k < entCount; k++)
            {
                if (base == ent[k])
                {
                    inGroupArray[k] = true;
                    entsInGroups++;
                    entsInThisGroup++;
                }
            }
        }
        if (entsInThisGroup > 0)
        {
            nonEmptyGroups++;
        }
    }

    U32 mgrCount = entsInGroups;
    for (i = 0; i < entCount; i++)
    {
        if (!inGroupArray[i])
        {
            mgrCount++;
        }
    }

    U32 memsize = sizeof(xUpdateCullMgr) + sizeof(void*) * entCount +
                  sizeof(xUpdateCullEnt*) * entCount + sizeof(xUpdateCullEnt) * mgrCount +
                  sizeof(xUpdateCullGroup) * nonEmptyGroups;

    xUpdateCullMgr* m = (xUpdateCullMgr*)xMemAlloc(gActiveHeap, memsize, 0);

    m->ent = (void**)(m + 1);
    m->mgr = (xUpdateCullEnt**)(m->ent + entCount);
    m->mgrList = (xUpdateCullEnt*)(m->mgr + entCount);
    m->grpList = (nonEmptyGroups > 0) ? (xUpdateCullGroup*)(m->mgrList + mgrCount) : NULL;
    memset(m->mgr, 0, sizeof(xUpdateCullEnt*) * entCount);
    m->entCount = entCount;
    m->entActive = entCount;
    m->mgrCount = mgrCount;
    m->mgrCurr = 0;
    m->grpCount = nonEmptyGroups;
    m->activateCB = NULL;
    m->deactivateCB = NULL;
    memcpy(m->ent, ent, sizeof(void*) * entCount);

    S32 grpIndex = 0;
    S32 mgrIndex = 0;
    for (i = 0; i < groupCount; i++)
    {
        S32 startIndex = mgrIndex;
        entsInThisGroup = 0;
        gcnt = xGroupGetCount(group[i]);
        for (j = 0; j < gcnt; j++)
        {
            xBase* base = xGroupGetItemPtr(group[i], j);
            for (k = 0; k < entCount; k++)
            {
                if (base == ent[k])
                {
                    m->mgrList[mgrIndex].index = k;
                    m->mgrList[mgrIndex].groupIndex = grpIndex;
                    m->mgrList[mgrIndex].cb = xUpdateCull_AlwaysTrueCB;
                    m->mgrList[mgrIndex].cbdata = NULL;
                    m->mgrList[mgrIndex].nextInGroup = NULL;
                    m->mgr[k] = &m->mgrList[mgrIndex];

                    xUpdateCullEnt** prevPtr = NULL;
                    for (x = 0; x < mgrIndex; x++)
                    {
                        if (k == m->mgrList[x].index)
                        {
                            if (!m->mgrList[mgrIndex].nextInGroup)
                            {
                                m->mgrList[mgrIndex].nextInGroup = &m->mgrList[x];
                            }
                            prevPtr = &m->mgrList[x].nextInGroup;
                        }
                    }
                    if (prevPtr)
                    {
                        *prevPtr = &m->mgrList[mgrIndex];
                    }
                    mgrIndex++;
                    entsInThisGroup++;
                }
            }
        }
        if (entsInThisGroup)
        {
            m->grpList[grpIndex].active = 1;
            m->grpList[grpIndex].startIndex = startIndex;
            m->grpList[grpIndex].endIndex = mgrIndex - 1;
            m->grpList[grpIndex].groupObject = group[i];
            grpIndex++;
        }
    }

    for (i = 0; i < entCount; i++)
    {
        if (!inGroupArray[i])
        {
            m->mgrList[mgrIndex].index = i;
            m->mgrList[mgrIndex].groupIndex = -1;
            m->mgrList[mgrIndex].cb = xUpdateCull_AlwaysTrueCB;
            m->mgrList[mgrIndex].cbdata = NULL;
            m->mgrList[mgrIndex].nextInGroup = NULL;
            m->mgr[i] = &m->mgrList[mgrIndex];
            mgrIndex++;
        }
    }

    for (i = 0; i < entCount; i++)
    {
    }

    RwFree(inGroupArray);
    if (tempEnt)
    {
        RwFree(tempEnt);
    }

    return m;
}

void xUpdateCull_Update(xUpdateCullMgr* m, U32 percent_update)
{
    S32 numiters = m->mgrCount * percent_update / 100;
    if (numiters <= 0)
    {
        numiters = 1;
    }

    while (numiters > 0)
    {
        U32 i;
        xUpdateCullEnt* cent = &m->mgrList[m->mgrCurr];
        U32 result = cent->cb(m->ent[cent->index], cent->cbdata);
        if (cent->groupIndex == -1)
        {
            if (result == 1)
            {
                xUpdateCull_MakeActive(m, cent);
            }
            else
            {
                xUpdateCull_MakeInactive(m, cent);
            }
            m->mgrCurr++;
            numiters--;
        }
        else
        {
            xUpdateCullGroup* grp = &m->grpList[cent->groupIndex];
            if (result == 1)
            {
                if (!grp->active)
                {
                    grp->active = 1;
                    for (i = grp->startIndex; i <= grp->endIndex; i++)
                    {
                        xUpdateCull_MakeActive(m, &m->mgrList[i]);
                    }
                }
                numiters -= grp->endIndex + 1 - m->mgrCurr;
                m->mgrCurr = grp->endIndex + 1;
            }
            else
            {
                if (m->mgrCurr == grp->endIndex && grp->active)
                {
                    grp->active = 0;
                    for (i = grp->startIndex; i <= grp->endIndex; i++)
                    {
                        cent = &m->mgrList[i];
                        for (xUpdateCullEnt* curr = cent->nextInGroup; curr && curr != cent;
                             curr = curr->nextInGroup)
                        {
                            if (m->grpList[curr->groupIndex].active)
                            {
                                goto loc_80101E10;
                            }
                        }
                        xUpdateCull_MakeInactive(m, &m->mgrList[i]);
                    loc_80101E10:;
                    }
                }
                m->mgrCurr++;
                numiters--;
            }
        }
        if (m->mgrCurr >= m->mgrCount)
        {
            m->mgrCurr = 0;
        }
    }
}

void xUpdateCull_SetCB(xUpdateCullMgr* m, void* entity, xUpdateCullEntCallback cb, void* cbdata)
{
    for (U32 i = 0; i < m->mgrCount; i++)
    {
        if (*(void**)(&m->ent[m->mgrList[i].index]) == entity)
        {
            m->mgrList[i].cb = cb;
            m->mgrList[i].cbdata = cbdata;
        }
    }
}

void xUpdateCull_Reset(xUpdateCullMgr* m)
{
    for (U32 i = m->entActive; i < m->entCount; i++)
    {
        xUpdateCull_MakeActive(m, m->mgr[i]);
    }
}
