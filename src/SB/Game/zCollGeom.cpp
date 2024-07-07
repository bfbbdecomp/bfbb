#include "zCollGeom.h"

#include "zBase.h"

#include "iModel.h"
#include "xstransvc.h"

static volatile U32 sNumTables;
static U32 sTableCount[3];
static zCollGeomTable* sTableList[3];

U32 zCollGeom_EntSetup(xEnt* ent)
{
    U32 i, j;
    S32 auto_cam_coll;

    auto_cam_coll = (ent->baseType == eBaseTypeStatic);

    ent->collModel = NULL;
    ent->camcollModel = NULL;

    if (ent->model)
    {
        for (j = 0; j < sNumTables; j++)
        {
            for (i = 0; i < sTableCount[j]; i++)
            {
                if (sTableList[j][i].baseModel == ent->model->Data)
                {
                    RpAtomic* imodel;

                    if (imodel = sTableList[j][i].colModel[0])
                    {
                        xModelInstance* model = xModelInstanceAlloc(imodel, ent, 0x2000, 0, NULL);

                        ent->collModel = model;
                        ent->collModel->Mat = ent->model->Mat;

                        while (imodel = iModelFile_RWMultiAtomic(imodel))
                        {
                            xModelInstanceAttach(xModelInstanceAlloc(imodel, ent, 0x2000, 0, NULL),
                                                 model);
                        }
                    }
                    else if (imodel = sTableList[j][i].camcolModel)
                    {
                        xModelInstance* model = xModelInstanceAlloc(imodel, ent, 0x2000, 0, NULL);

                        ent->camcollModel = model;
                        ent->camcollModel->Mat = ent->model->Mat;

                        while (imodel = iModelFile_RWMultiAtomic(imodel))
                        {
                            xModelInstanceAttach(xModelInstanceAlloc(imodel, ent, 0x2000, 0, NULL),
                                                 model);
                        }
                    }
                    else
                    {
                        auto_cam_coll = 0;
                    }
                }
            }
        }
    }

    if (auto_cam_coll && !ent->camcollModel)
    {
        ent->camcollModel = ent->model;
    }

    if (ent->collModel)
    {
        return 1;
    }

    ent->collModel = ent->model;
    return 0;
}

#ifdef NON_MATCHING
void zCollGeom_Init()
{
    sNumTables = xSTAssetCountByType('COLL');

    if (sNumTables)
    {
        U32 tmpsize, i, k;
        void* data;

        for (k = 0; k < sNumTables; k++)
        {
            data = xSTFindAssetByType('COLL', k, &tmpsize);

            if (!data)
            {
                break;
            }

            sTableCount[k] = *(U32*)data;

            if (!sTableCount[k])
            {
                sTableList[k] = NULL;
                break;
            }

            sTableList[k] = (zCollGeomTable*)((U32*)data + 1);

            for (i = 0; i < sTableCount[k]; i++)
            {
                if ((U32)sTableList[k][i].baseModel)
                {
                    sTableList[k][i].baseModel =
                        (RpAtomic*)xSTFindAsset((U32)sTableList[k][i].baseModel, NULL);
                }

                if ((U32)sTableList[k][i].colModel[0])
                {
                    sTableList[k][i].colModel[0] =
                        (RpAtomic*)xSTFindAsset((U32)sTableList[k][i].colModel[0], NULL);
                }

                if (!sTableList[k][i].colModel[0])
                {
                    if (sTableList[k][i].camcolModel)
                    {
                        sTableList[k][i].camcolModel =
                            (RpAtomic*)xSTFindAsset((U32)sTableList[k][i].camcolModel, NULL);
                    }
                }
            }
        }
    }
}
#endif

void zCollGeom_CamEnable(xEnt* ent)
{
    if (!ent->camcollModel)
    {
        ent->camcollModel = ent->model;
    }
}

void zCollGeom_CamDisable(xEnt* ent)
{
    ent->camcollModel = NULL;
}
