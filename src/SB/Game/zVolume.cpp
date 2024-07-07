#include "zVolume.h"

#include "xstransvc.h"
#include "xMemMgr.h"
#include "iMath.h"
#include "xEvent.h"

struct PreCalcOcclude
{
    xVec4 DepthVec;
    xVec4 FrustVec[4];
};

extern zVolume* vols;
extern U16 nvols;

extern S32 gOccludeCount;
extern zVolume* gOccludeList[10];
extern S32 gOccludeCalcCount;
extern PreCalcOcclude gOccludeCalc[10];

extern float lbl_803CDFB8;

static void zVolumeInit(zVolume* vol, xVolumeAsset* asset)
{
    vol->Init(asset);
    vol->eventFunc = zVolumeEventCB;
}

#ifdef NON_MATCHING
void zVolumeInit()
{
    U16 i;
    U32 size;
    xVolumeAsset* asset;

    nvols = xSTAssetCountByType('VOLU');

    if (nvols)
    {
        vols = (zVolume*)xMemAllocSize(nvols * sizeof(zVolume));

        for (i = 0; i < nvols; i++)
        {
            asset = (xVolumeAsset*)xSTFindAssetByType('VOLU', i, &size);

            zVolumeInit(&vols[i], asset);
        }
    }
    else
    {
        vols = NULL;
    }
}
#endif

void zVolumeSetup()
{
    U32 i;

    for (i = 0; i < nvols; i++)
    {
        xQuickCullForEverything(&vols[i].asset->bound.qcd);
    }
}

zVolume* zVolumeGetVolume(U16 n)
{
    return &vols[n];
}

#ifdef NON_MATCHING
void zVolume_OccludePrecalc(xVec3* camPos)
{
    S32 i;
    S32 j;
    xVec3 corner[5];
    zVolume* vol;
    xVolumeAsset* a;
    F32 c;
    F32 s;
    PreCalcOcclude* calc;
    xVec3 d1;
    xVec3 d2;
    xVec4 locFrustVec[4];
    F32 depthdot;
    F32 camdot;
    F32 testdot1;
    F32 testdot2;

    gOccludeCalcCount = 0;

    for (i = 0; i < gOccludeCount; i++)
    {
        vol = gOccludeList[i];
        a = vol->asset;

        c = icos(a->rot);
        s = isin(a->rot);

        calc = &gOccludeCalc[gOccludeCalcCount];

        corner[0].x = c * (a->bound.box.box.lower.x - a->xpivot) + a->xpivot;
        corner[0].y = a->bound.box.box.lower.y;
        corner[0].z = s * (a->bound.box.box.lower.x - a->xpivot) + a->bound.box.box.lower.z;

        corner[1].y = a->bound.box.box.lower.y;
        corner[1].x = c * (a->bound.box.box.upper.x - a->xpivot) + a->xpivot;
        corner[1].z = s * (a->bound.box.box.upper.x - a->xpivot) + a->bound.box.box.lower.z;

        corner[2].x = c * (a->bound.box.box.upper.x - a->xpivot) + a->xpivot;
        corner[2].y = a->bound.box.box.upper.y;
        corner[2].z = s * (a->bound.box.box.upper.x - a->xpivot) + a->bound.box.box.lower.z;

        corner[3].x = c * (a->bound.box.box.lower.x - a->xpivot) + a->xpivot;
        corner[3].y = a->bound.box.box.upper.y;
        corner[3].z = s * (a->bound.box.box.lower.x - a->xpivot) + a->bound.box.box.lower.z;

        corner[4] = corner[0];

        xVec3Sub(&d1, &corner[1], &corner[0]);
        xVec3Sub(&d2, &corner[2], &corner[0]);

        xVec3Cross((xVec3*)calc, &d1, &d2);
        xVec3Normalize((xVec3*)calc, (xVec3*)calc);

        depthdot = xVec3Dot((xVec3*)calc, &corner[0]);
        camdot = xVec3Dot((xVec3*)calc, camPos);

        if (camdot > depthdot)
        {
            xVec3Inv((xVec3*)calc, (xVec3*)calc);

            camdot = -camdot;
            depthdot = -depthdot;
        }

        if (iabs(camdot - depthdot) >= lbl_803CDFB8)
        {
            calc->DepthVec.w = depthdot;

            for (j = 0; j < 4; j++)
            {
                xVec3Sub(&d1, &corner[j], camPos);
                xVec3Sub(&d2, &corner[j + 1], camPos);
                xVec3Cross((xVec3*)&locFrustVec[j], &d1, &d2);
                xVec3Normalize((xVec3*)&locFrustVec[j], (xVec3*)&locFrustVec[j]);
            }

            testdot1 = xVec3Dot((xVec3*)&locFrustVec[0], &corner[0]);
            testdot2 = xVec3Dot((xVec3*)&locFrustVec[0], &corner[2]);

            if (testdot1 > testdot2)
            {
                for (j = 0; j < 4; j++)
                {
                    xVec3Inv((xVec3*)&locFrustVec[j], (xVec3*)&locFrustVec[j]);
                }
            }

            for (j = 0; j < 4; j++)
            {
                locFrustVec[j].w = xVec3Dot((xVec3*)&locFrustVec[j], &corner[j]);
            }

            calc->FrustVec[0].x = locFrustVec[0].w;
            calc->FrustVec[0].y = locFrustVec[1].w;
            calc->FrustVec[0].z = locFrustVec[2].w;
            calc->FrustVec[0].w = locFrustVec[3].w;

            calc->FrustVec[1].x = locFrustVec[0].x;
            calc->FrustVec[1].y = locFrustVec[1].x;
            calc->FrustVec[1].z = locFrustVec[2].x;
            calc->FrustVec[1].w = locFrustVec[3].x;

            calc->FrustVec[2].x = locFrustVec[0].y;
            calc->FrustVec[2].y = locFrustVec[1].y;
            calc->FrustVec[2].z = locFrustVec[2].y;
            calc->FrustVec[2].w = locFrustVec[3].y;

            calc->FrustVec[3].x = locFrustVec[0].z;
            calc->FrustVec[3].y = locFrustVec[1].z;
            calc->FrustVec[3].z = locFrustVec[2].z;
            calc->FrustVec[3].w = locFrustVec[3].z;

            gOccludeCalcCount++;
        }
    }
}
#endif

#ifdef NON_MATCHING
S32 zVolumeEventCB(xBase*, xBase* to, U32 toEvent, const F32*, xBase*)
{
    zVolume* vol = (zVolume*)to;
    S32 i;

    switch (toEvent)
    {
    case eEventReset:
    {
        vol->Reset();
        break;
    }
    case eEventOccludeOn:
    {
        if (gOccludeCount == 10)
        {
            return 1;
        }

        for (i = 0; i < gOccludeCount; i++)
        {
            if (gOccludeList[i] == vol)
            {
                return 1;
            }
        }

        gOccludeList[gOccludeCount] = vol;
        gOccludeCount++;

        break;
    }
    case eEventOccludeOff:
    {
        for (i = 0; i < gOccludeCount; i++)
        {
            if (gOccludeList[i] == vol)
            {
                gOccludeList[gOccludeCount] = gOccludeList[gOccludeCount - 1];
                gOccludeCount--;

                return 1;
            }
        }

        break;
    }
    }

    return 1;
}
#endif
