#include "zLOD.h"

#include <types.h>
#include <../src/Core/x/xEnt.h>
#include <../src/Core/x/xBound.h>
#include "zBase.h"
#include "zEntDestructObj.h"

extern uint32 sTableCount;
extern zLODTable sTableList[];
extern uint32 sManagerCount;
extern zLODManager sManagerList[2048];

extern float32 lbl_803CDC44;
extern float32 lbl_803CDC40;
extern float32 lbl_803CDC48;
extern float32 lbl_803CDC4C;

// func_800A1D18
#if 1
#pragma GLOBAL_ASM("asm/Game/zLOD.s", "AddToLODList__FP14xModelInstance")
#else
// This was almost completely matching until I switched sTableList to sTableList[i]
void AddToLODList(xModelInstance* model)
{
    // This was necessary for it to match back before I made the switch mentioned above
    for (int i = 0; i < sManagerCount; i++)
    {
        if (sManagerList[i].model == model)
        {
            break;
        }
    }

    for (int i = 0; i < sTableCount; i++)
    {
        if ((sTableList[i].baseBucket != NULL) &&
            ((*sTableList[i].baseBucket)->OriginalData == model->Data))
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
                float32 distscale = ((model->Mat->right).z * (model->Mat->right).z +
                                     (model->Mat->right).x * (model->Mat->right).x +
                                     (model->Mat->right).y * (model->Mat->right).y);
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

                break;
            }
        }
    };
}
#endif

// func_800A1EEC
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

// func_800A1F5C
#pragma GLOBAL_ASM("asm/Game/zLOD.s", "zLOD_Setup__Fv")

// func_800A2164
#pragma GLOBAL_ASM("asm/Game/zLOD.s", "zLOD_Update__FUi")

// func_800A23A8
#if 1
#pragma GLOBAL_ASM("asm/Game/zLOD.s", "zLOD_Get__FP4xEnt")
#else
zLODTable* zLOD_Get(xEnt* ent)
{
    if (!ent->model)
    {
        return 0;
    }

    if (sTableCount != 0)
    {
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
    }
    return 0;
}
#endif

// func_800A2418
#pragma GLOBAL_ASM("asm/Game/zLOD.s", "zLOD_UseCustomTable__FP4xEntP9zLODTable")
