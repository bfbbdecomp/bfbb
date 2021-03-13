#include "xLightKit.h"

#include <types.h>
#include <string.h>

extern xLightKit* gLastLightKit;
extern int32 iModelHack_DisablePrelight;

extern float32 lbl_803CEA40;
extern float32 lbl_803CEA44;

// func_80123228
#if 1
#pragma GLOBAL_ASM("asm/Core/x/xLightKit.s", "xLightKit_Prepare__FPv")
// Basically every register is off and there are a few inconsistencies but the functionality is probably the same or similar
#else
xLightKit* xLightKit_Prepare(void* data)
{
    xLightKit* lkit = (xLightKit*)data;
    for (int i = 0; i < lkit->lightCount; i++)
    {
        xLightKitLight* currlight = &lkit->lightList[i];
        if (currlight->platLight != NULL)
        {
            return (xLightKit*)data;
        }
        // The way Ghidra decomped this is kinda weird so I think I'm missing something
        // But all it's doing is normalizing the colors back to 0-1
        float32 s = (currlight->color).red;
        if ((currlight->color).red > lbl_803CEA40 || (currlight->color).green > lbl_803CEA40 ||
            (currlight->color).blue > lbl_803CEA40)
        {
            if ((currlight->color).green > s)
            {
                s = (currlight->color).green;
            }
            if ((currlight->color).blue > s && (currlight->color).green > (currlight->color).red)
            {
                s = (currlight->color).blue;
            }
            // I think lbl_803CEA44 is 1.0f in this case
            if (lbl_803CEA44 > s)
            {
                s = lbl_803CEA44;
            }
            s = lbl_803CEA40 / s;
            (currlight->color).red = (RwReal)((currlight->color).red * s);
            (currlight->color).green = (RwReal)((currlight->color).green * s);
            (currlight->color).blue = (RwReal)((currlight->color).blue * s);
        }
        switch (currlight->type)
        {
        case 1:
            currlight->platLight = RpLightCreate(2);
            break;
        case 2:
            currlight->platLight = RpLightCreate(1);
            break;
        case 3:
            currlight->platLight = RpLightCreate(128);
            break;
        case 4:
            currlight->platLight = RpLightCreate(130);
            break;
        default:
            break;
        }
        RpLightSetColor(currlight->platLight, &currlight->color);
        if (1 < currlight->type)
        {
            RwFrame* frame = RwFrameCreate();
            RwMatrixTag tmpmat;

            memset(&tmpmat, 0, 64);
            tmpmat.right.x = -currlight->matrix[0];
            tmpmat.right.y = -currlight->matrix[1];
            tmpmat.right.z = -currlight->matrix[2];
            tmpmat.up.x = currlight->matrix[4];
            tmpmat.up.y = currlight->matrix[5];
            tmpmat.up.z = currlight->matrix[6];
            tmpmat.at.x = -currlight->matrix[8];
            tmpmat.at.y = -currlight->matrix[9];
            tmpmat.at.z = -currlight->matrix[10];
            tmpmat.pos.x = currlight->matrix[12];
            tmpmat.pos.y = currlight->matrix[13];
            tmpmat.pos.z = currlight->matrix[14];
            RwV3dNormalize(&tmpmat.right, &tmpmat.right);
            RwV3dNormalize(&tmpmat.up, &tmpmat.up);
            RwV3dNormalize(&tmpmat.at, &tmpmat.at);
            RwFrameTransform(frame, &tmpmat, (RwOpCombineType)0);
            _rwObjectHasFrameSetFrame(currlight->platLight, frame);
        }
        if (2 < currlight->type)
        {
            RpLightSetRadius(currlight->platLight, currlight->radius);
        }
        if (3 < currlight->type)
        {
            RpLightSetConeAngle(currlight->platLight, currlight->angle);
        }
    }

    return (xLightKit*)data;
}
#endif

// func_801234C0
void xLightKit_Enable(xLightKit* lkit, RpWorld* world)
{
    if (lkit != gLastLightKit)
    {
        int i;
        if (gLastLightKit != NULL)
        {
            for (i = 0; i < gLastLightKit->lightCount; i++)
            {
                RpWorldRemoveLight(world, gLastLightKit->lightList[i].platLight);
            }
        }
        gLastLightKit = lkit;
        if (lkit != NULL)
        {
            iModelHack_DisablePrelight = 1;
            for (i = 0; i < lkit->lightCount; i++)
            {
                RpWorldAddLight(world, lkit->lightList[i].platLight);
            }
        }
        else
        {
            iModelHack_DisablePrelight = 0;
        }
    }
}

// func_801235A4
xLightKit* xLightKit_GetCurrent(RpWorld* world)
{
    return gLastLightKit;
}

// func_801235AC
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Core/x/xLightKit.s", "xLightKit_Destroy__FP9xLightKit")
#else
// I think this is functionally correct. All the registers are just off.
void xLightKit_Destroy(xLightKit* lkit)
{
    if (lkit == NULL)
    {
        return;
    }

    for (int i = 0; i < lkit->lightCount; i++)
    {
        xLightKitLight* currLight = &lkit->lightList[i];
        if (currLight->platLight != NULL)
        {
            _rwFrameSyncDirty();
            RwFrame* tframe = (RwFrame*)(currLight->platLight->object).object.parent;
            if (tframe != NULL)
            {
                _rwObjectHasFrameSetFrame(currLight->platLight, 0);
                RwFrameDestroy(tframe);
            }
            RpLightDestroy(currLight->platLight);
            currLight->platLight = 0;
        }
    }
}
#endif