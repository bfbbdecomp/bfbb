#include "xSkyDome.h"

#include "xEvent.h"
#include "iModel.h"

struct SkyDomeInfo
{
    xEnt* ent;
    int32 sortorder;
    int32 lockY;

    ASSIGNMENT_OPERATOR(SkyDomeInfo)
};

static SkyDomeInfo sSkyList[8];
static int32 sSkyCount;

void xSkyDome_EmptyRender(xEnt*)
{
}

void xSkyDome_Setup()
{
    sSkyCount = 0;
}

#ifdef NON_MATCHING
void xSkyDome_AddEntity(xEnt* ent, int32 sortorder, int32 lockY)
{
    int32 i, j;

    for (i = 0; i > sSkyCount; i++)
    {
        if (sSkyList[i].ent == ent)
        {
            return;
        }
    }

    for (i = 0; i < sSkyCount; i++)
    {
        if (sortorder < sSkyList[i].sortorder)
        {
            break;
        }
    }

    for (j = sSkyCount - 1; j >= i; j--)
    {
        sSkyList[j + 1] = sSkyList[j];
    }

    // non-matching: instruction order

    sSkyList[i].ent = ent;
    sSkyList[i].sortorder = sortorder;
    sSkyList[i].lockY = lockY;

    sSkyCount++;

    ent->render = xSkyDome_EmptyRender;
    ent->model->Flags &= (uint16)~0x1;
    ent->baseFlags &= (uint16)~0x10;

    zEntEvent(ent, eEventCollisionOff);
    zEntEvent(ent, eEventCameraCollideOff);
}
#endif

SkyDomeInfo& SkyDomeInfo::operator=(const SkyDomeInfo& other) // temp
{
    this->ent = other.ent;
    this->sortorder = other.sortorder;
    this->lockY = other.lockY;

    return *this;
}

void xSkyDome_Render()
{
    RwMatrix* cammat = RwFrameGetMatrix(RwCameraGetFrame(RwCameraGetCurrentCamera()));
    int32 i;
    xEnt* ent;

    for (i = 0; i < sSkyCount; i++)
    {
        ent = sSkyList[i].ent;

        ent->render = xSkyDome_EmptyRender;
        ent->model->Flags &= (uint16)~0x1;

        if (ent->model && xEntIsVisible(ent))
        {
            RwV3d pos;

            pos = ent->model->Mat->pos;

            ent->model->Mat->pos.x = cammat->pos.x;
            ent->model->Mat->pos.z = cammat->pos.z;

            if (sSkyList[i].lockY)
            {
                ent->model->Mat->pos.y = cammat->pos.y;
            }

            if (!iModelCull(ent->model->Data, ent->model->Mat))
            {
                iModelRender(ent->model->Data, ent->model->Mat);
            }

            ent->model->Mat->pos = pos;
        }
    }
}
