#include "zLOD.h"

#include <types.h>
#include <../src/Core/x/xEnt.h>
#include <../src/Core/x/xBound.h>
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
void AddToLODList(xModelInstance* model)
{
    for (int i = 0; i < sManagerCount; i++)
    {
        if (sManagerList[i].model == model)
        {
            // THIS MATCHES???? WTF
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
                // Missing: Loads sTableList into r0, loads sManagerCount into r3,
                // adds r3 into r0
                // stores r0 into sManagerCount

                // Adds: Storing sTableList into r4

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
#if 0
#pragma GLOBAL_ASM("asm/Game/zLOD.s", "AddToLODList__FP4xEntP6xScenePv")
#else
xEnt* AddToLODList(xEnt* ent, xScene* scene, void* v)
{
    if (!ent->model)
    {
        return ent;
    }

    AddToLODList(ent->model);
    if (ent->baseType == '\033')
    {
        if (ent[1].camcollModel != NULL)
        {
            AddToLODList(ent[1].camcollModel);
        }
        if (ent[1].lightKit != NULL)
        {
            AddToLODList((xModelInstance*)ent[1].lightKit);
        }
    }

    return ent;
}
#endif

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
#endif

// func_800A2418
#pragma GLOBAL_ASM("asm/Game/zLOD.s", "zLOD_UseCustomTable__FP4xEntP9zLODTable")
