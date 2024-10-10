#include "iLight.h"

RpWorld* gLightWorld;

void iLightInit(RpWorld* world)
{
    gLightWorld = world;
}

iLight* iLightCreate(iLight* light, U32 type)
{
    RwFrame* frame;

    switch (type)
    {
    case ILIGHT_TYPE_POINT:
        light->hw = RpLightCreate(rpLIGHTPOINT);
        break;
    case ILIGHT_TYPE_SPOT:
        light->hw = RpLightCreate(rpLIGHTSPOT);
        break;
    case ILIGHT_TYPE_SPOTSOFT:
        light->hw = RpLightCreate(rpLIGHTSPOTSOFT);
        break;
    default:
        return NULL;
    }

    if (!light->hw)
    {
        return NULL;
    }

    frame = RwFrameCreate();

    if (!frame)
    {
        RpLightDestroy(light->hw);
        return NULL;
    }

    RpLightSetFlags(light->hw, rpLIGHTLIGHTATOMICS);
    RpLightSetFrame(light->hw, frame);

    RwFrameUpdateObjects(frame);

    light->type = type;
    light->sph.center.x = 0.0f;
    light->sph.center.y = 0.0f;
    light->sph.center.z = 0.0f;
    light->sph.r = 0.0f;
    light->color.r = 1.0f;
    light->color.g = 1.0f;
    light->color.b = 1.0f;
    light->color.a = 1.0f;
    light->dir.x = 0.0f;
    light->dir.y = 0.0f;
    light->dir.z = 1.0f;
    light->coneangle = 0.0f;

    return light;
}

void iLightModify(iLight* light, U32 flags)
{
    if (flags & 0x5)
    {
        RwFrame* frame = RpLightGetFrame(light->hw);
        RwMatrix temp;

        *(xVec3*)RwMatrixGetRight(&temp) = g_O3;
        *(xVec3*)RwMatrixGetUp(&temp) = g_O3;
        *(xVec3*)RwMatrixGetAt(&temp) = light->dir;
        *(xVec3*)RwMatrixGetPos(&temp) = light->sph.center;

        RwFrameTransform(frame, &temp, rwCOMBINEREPLACE);
    }

    if (flags & 0x2)
    {
        RpLightSetRadius(light->hw, light->sph.r);
    }

    if (flags & 0x8)
    {
        RpLightSetColor(light->hw, (RwRGBAReal*)&light->color);
    }

    if (flags & 0x10)
    {
        if (light->type == ILIGHT_TYPE_SPOT || light->type == ILIGHT_TYPE_SPOTSOFT)
        {
            RpLightSetConeAngle(light->hw, light->coneangle);
        }
    }
}

void iLightSetColor(iLight* light, _xFColor* col)
{
    RpLightSetColor(light->hw, (RwRGBAReal*)col);
}

void iLightSetPos(iLight* light, xVec3* pos)
{
    RwFrame* f = RpLightGetFrame(light->hw);
    RwMatrix* m = RwFrameGetMatrix(f);

    RwMatrixGetPos(m)->x = pos->x;
    RwMatrixGetPos(m)->y = pos->y;
    RwMatrixGetPos(m)->z = pos->z;

    RwMatrixUpdate(m);

    RwFrameUpdateObjects(f);
}

void iLightDestroy(iLight* light)
{
    RwFrame* frame;

    light->type = ILIGHT_TYPE_NONE;

    _rwFrameSyncDirty();

    frame = RpLightGetFrame(light->hw);

    if (frame)
    {
        RwFrameDestroy(frame);
    }

    RpLightDestroy(light->hw);
}

void iLightEnv(iLight* light, S32 env)
{
    RwUInt32 flags = 0;

    switch (env)
    {
    case ILIGHT_ENV_NONE:
        flags = 0;
        break;
    case ILIGHT_ENV_ATOMIC:
        flags = rpLIGHTLIGHTWORLD;
        break;
    case ILIGHT_ENV_WORLD:
        flags = rpLIGHTLIGHTATOMICS;
        break;
    case ILIGHT_ENV_ATOMICWORLD:
        flags = rpLIGHTLIGHTATOMICS | rpLIGHTLIGHTWORLD;
        break;
    }

    RpLightSetFlags(light->hw, flags);
}
