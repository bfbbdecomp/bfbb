#include "zLOD.h"

#include <types.h>
#include <../src/Core/x/xEnt.h>
#include <../src/Core/x/xBound.h>
#include "zBase.h"
#include "zEntDestructObj.h"

extern uint32 sTableCount;
extern zLODTable* sTableList;
extern uint32 sManagerCount;
extern zLODManager sManagerList[2048];

extern float32 lbl_803CDC44; // 1.0e-4, 0.0001
extern float32 lbl_803CDC40; // 1.0
extern float32 lbl_803CDC48; // 4.0
extern float32 lbl_803CDC4C; // 10.0


#ifdef NON_MATCHING
// Float memes
void AddToLODList(xModelInstance* model)
{
    for (int i = 0; i < sManagerCount; i++)
    {
        if (sManagerList[i].model == model)
        {
            return;
        }
    }

    for (int i = 0; i < sTableCount; i++)
    {
        if (sTableList[i].baseBucket != NULL &&
            (*sTableList[i].baseBucket)->OriginalData == model->Data)
        {
            xModelInstance* minst = model->Next;
            uint32 numextra = 0;
            while (minst != NULL)
            {
                minst = minst->Next;
                numextra++;
            }
            if (sManagerCount < 2048)
            {
                float32 distscale = ((model->Mat->right).x * (model->Mat->right).x +
                                     (model->Mat->right).y * (model->Mat->right).y +
                                     (model->Mat->right).z * (model->Mat->right).z);
                minst = model;
                if (distscale < lbl_803CDC44)
                {
                    distscale = lbl_803CDC40;
                }
                while (minst != NULL)
                {
                    minst->FadeEnd = xsqrt(distscale * sTableList[i].noRenderDist);
                    minst->FadeStart = minst->FadeEnd - lbl_803CDC48;
                    minst = minst->Next;
                }

                sManagerList[sManagerCount].numextra = numextra;
                sManagerList[sManagerCount].lod = &sTableList[i];
                sManagerList[sManagerCount].model = model;
                sManagerList[sManagerCount].adjustNoRenderDist =
                    (lbl_803CDC4C + xsqrt(sTableList[i].noRenderDist)) *
                    (lbl_803CDC4C + xsqrt(sTableList[i].noRenderDist));
                sManagerCount++;
                return;
            }
        }
    };
}
#endif


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








zLODTable* zLOD_Get(xEnt* ent)
{
    if (!ent->model)
    {
        return 0;
    }

    for (int i = 0; i < sTableCount; i++)
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
