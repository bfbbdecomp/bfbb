#include "zLOD.h"

#include "xModel.h"
#include <types.h>

#include "xEnt.h"
#include "xMathInlines.h"

#include "zBase.h"
#include "zEntDestructObj.h"

static U32 sTableCount;
static zLODTable* sTableList;
static U32 sManagerIndex;
static U32 sManagerCount;
static zLODManager sManagerList[2048];

// Float memes
void AddToLODList(xModelInstance* model)
{
    for (S32 i = 0; i < sManagerCount; i++)
    {
        if (sManagerList[i].model == model)
        {
            return;
        }
    }

    for (S32 i = 0; i < sTableCount; i++)
    {
        if (sTableList[i].baseBucket != NULL &&
            (*sTableList[i].baseBucket)->OriginalData == model->Data)
        {
            xModelInstance* minst = model->Next;
            U32 numextra = 0;
            while (minst != NULL)
            {
                minst = minst->Next;
                numextra++;
            }
            if (sManagerCount < 2048)
            {
                F32 distscale = ((model->Mat->right).x * (model->Mat->right).x +
                                 (model->Mat->right).y * (model->Mat->right).y +
                                 (model->Mat->right).z * (model->Mat->right).z);
                minst = model;
                if (distscale < 0.0001f)
                {
                    distscale = 1.0f;
                }
                while (minst != NULL)
                {
                    minst->FadeEnd = xsqrt(distscale * sTableList[i].noRenderDist);
                    minst->FadeStart = minst->FadeEnd - 4.0f;
                    minst = minst->Next;
                }

                sManagerList[sManagerCount].numextra = numextra;
                sManagerList[sManagerCount].lod = &sTableList[i];
                sManagerList[sManagerCount].model = model;
                sManagerList[sManagerCount].adjustNoRenderDist =
                    (10.0f + xsqrt(sTableList[i].noRenderDist)) *
                    (10.0f + xsqrt(sTableList[i].noRenderDist));
                sManagerCount++;
                return;
            }
        }
    };
}

xEnt* AddToLODList(xEnt* ent, xScene* scene, void* v)
{
    if (!ent->model)
    {
        return ent;
    }

    AddToLODList(ent->model);

    if (ent->baseType == eBaseTypeDestructObj)
    {
        zEntDestructObj* destruct = (zEntDestructObj*)ent;
        if (destruct->hit_model != NULL)
        {
            AddToLODList(destruct->hit_model);
        }
        if (destruct->destroy_model != NULL)
        {
            AddToLODList(destruct->destroy_model);
        }
    }

    return ent;
}

// WIP
void zLOD_Setup(void)
{
    sTableCount = 0;
    sTableList = NULL;
    sManagerCount = 0;

    U32 assetCount = xSTAssetCountByType('LODT');
    if (assetCount == 0)
    {
        return;
    }

    for (U32 i = 0; i < assetCount; i++)
    {
        U32 tmpSize;
        S32* asset = (S32*)xSTFindAssetByType('LODT', i, &tmpSize);
        sTableCount += *asset;
    }

    if (sTableCount == 0)
    {
        return;
    }

    zLODTable* tableCurr = (zLODTable*)xMemAlloc(gActiveHeap, sTableCount * sizeof(zLODTable), 0);
    sTableList = tableCurr;

    for (U32 i = 0; i < assetCount; i++)
    {
        U32 tmpSize;
        S32* asset = (S32*)xSTFindAssetByType('LODT', i, &tmpSize);
        memcpy(tableCurr, asset + 1, (*asset) * sizeof(zLODTable));
        tableCurr += *asset;
    }

    tableCurr = sTableList;
    for (U32 i = 0; i < sTableCount; i++, tableCurr++)
    {
        tableCurr->noRenderDist *= tableCurr->noRenderDist;

        if (tableCurr->baseBucket)
        {
            RpAtomic* model = (RpAtomic*)xSTFindAsset((U32)tableCurr->baseBucket, NULL);
            tableCurr->baseBucket = model ? xModelBucket_GetBuckets(model) : NULL;
        }

        for (U32 j = 0; j < 3; j++)
        {
            if (tableCurr->lodBucket[j])
            {
                RpAtomic* model = (RpAtomic*)xSTFindAsset((U32)tableCurr->lodBucket[j], NULL);
                tableCurr->lodBucket[j] = model ? xModelBucket_GetBuckets(model) : NULL;
            }
            tableCurr->lodDist[j] *= tableCurr->lodDist[j];
        }
    }

    sManagerCount = 0;
    xSceneForAllEnts(globals.sceneCur, AddToLODList, 0);
}

// WIP
void zLOD_Update(U32 percent_update)
{
    if (sManagerCount == 0)
    {
        return;
    }

    U32 numUpdates = (sManagerCount * percent_update) / 100;
    if (numUpdates == 0)
    {
        numUpdates = 1;
    }

    for (U32 i = 0; i < numUpdates; i++)
    {
        sManagerIndex++;
        if (sManagerIndex >= sManagerCount)
            sManagerIndex = 0;

        zLODManager* mgr = &sManagerList[sManagerIndex];
        xModelInstance* model = mgr->model;
        zLODTable* lod = mgr->lod;

        if (!mgr || !model || !lod)
        {
            continue;
        }

        RwMatrix* mat = model->Mat;
        F32 distscale = mat->right.x * mat->right.x + mat->up.x * mat->up.x + mat->at.x * mat->at.x;
        if (distscale < 0.0001f)
            distscale = 1.0f;

        xVec3* camPos = &globals.camera.mat.pos;
        F32 camdist2 = 0.0f;
        if (mat)
        {
            F32 dx = camPos->x - mat->pos.x;
            F32 dy = camPos->y - mat->pos.y;
            F32 dz = camPos->z - mat->pos.z;
            camdist2 = (dx * dx + dy * dy + dz * dz) / distscale;
        }

        if (camdist2 >= mgr->adjustNoRenderDist)
        {
            model->PipeFlags |= 0x400;

            if (mgr->numextra)
            {
                for (xModelInstance* extra = model->Next; extra; extra = extra->Next)
                    extra->PipeFlags |= 0x400;
            }
        }
        else
        {
            model->PipeFlags &= ~0x400;

            if (lod->baseBucket)
            {
                model->Bucket = lod->baseBucket;
                model->Data = (*lod->baseBucket)->Data;
            }

            S32 lodIndex;
            for (lodIndex = 0; lodIndex < 3 && lod->lodBucket[lodIndex]; lodIndex++)
            {
                if (lod->lodDist[lodIndex] < camdist2)
                {
                    model->Bucket = lod->lodBucket[lodIndex];
                    model->Data = (*lod->lodBucket[lodIndex])->Data;
                }
            }

            if (mgr->numextra)
            {
                for (xModelInstance* extra = model->Next; extra; extra = extra->Next)
                {
                    if (lodIndex == 0)
                        extra->PipeFlags &= ~0x400;
                    else
                        extra->PipeFlags |= 0x400;
                }
            }
        }
    }
}

zLODTable* zLOD_Get(xEnt* ent)
{
    if (!ent->model)
    {
        return 0;
    }

    for (S32 i = 0; i < sTableCount; i++)
    {
        if (sTableList[i].baseBucket != NULL)
        {
            if ((*sTableList[i].baseBucket)->OriginalData == ent->model->Data)
            {
                return &sTableList[i];
            }
        }
    }
    return 0;
}

// WIP
void zLOD_UseCustomTable(xEnt* ent, zLODTable* lod)
{
    xModelInstance* model = ent->model;
    if (model == NULL || sManagerCount == 0)
    {
        return;
    }

    for (U32 i = 0; i < sManagerCount; i++)
    {
        zLODManager* mgr = &sManagerList[i];

        if (mgr->model == model)
        {
            mgr->lod = lod;

            F32 dist = xsqrt(lod->noRenderDist) + 10.0f;
            mgr->adjustNoRenderDist = dist * dist;

            RwMatrix* mat = model->Mat;
            F32 distscale =
                mat->right.x * mat->right.x + mat->up.x * mat->up.x + mat->at.x * mat->at.x;
            if (distscale < 0.0001f)
            {
                distscale = 1.0f;
            }

            xVec3* camPos = &globals.camera.mat.pos;
            F32 camdist2 = 0.0f;
            if (mat)
            {
                camdist2 = ((camPos->x - mat->pos.x) * (camPos->x - mat->pos.x) +
                            (camPos->y - mat->pos.y) * (camPos->y - mat->pos.y) +
                            (camPos->z - mat->pos.z) * (camPos->z - mat->pos.z)) /
                           distscale;
            }

            if (camdist2 < mgr->adjustNoRenderDist)
            {
                model->PipeFlags &= ~0x400;

                if (lod->baseBucket)
                {
                    model->Bucket = lod->baseBucket;
                    model->Data = (*lod->baseBucket)->Data;
                }

                S32 lodIndex;
                for (lodIndex = 0;
                     lodIndex < 3 && lod->lodBucket[lodIndex] && lod->lodDist[lodIndex] < camdist2;
                     lodIndex++)
                {
                    model->Bucket = lod->lodBucket[lodIndex];
                    model->Data = (*lod->lodBucket[lodIndex])->Data;
                }

                if (mgr->numextra)
                {
                    for (xModelInstance* m = model->Next; m; m = m->Next)
                    {
                        if (lodIndex == 0)
                            m->PipeFlags &= ~0x400;
                        else
                            m->PipeFlags |= 0x400;
                    }
                }
            }
            else
            {
                model->PipeFlags |= 0x400;

                if (mgr->numextra)
                {
                    for (xModelInstance* m = model->Next; m; m = m->Next)
                        m->PipeFlags |= 0x400;
                }
            }

            return;
        }
    }
}
