#include "iLight.h"

RpWorld* gLightWorld;

// iLightCreate will not match without these floats being externed :thinking:
extern float32 _535_0; // 0.0f
extern float32 _536; // 1.0f

void iLightInit(RpWorld* world)
{
    gLightWorld = world;
}

iLight* iLightCreate(iLight* light, uint32 type)
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
    light->sph.center.x = _535_0;
    light->sph.center.y = _535_0;
    light->sph.center.z = _535_0;
    light->sph.r = _535_0;
    light->color.r = _536;
    light->color.g = _536;
    light->color.b = _536;
    light->color.a = _536;
    light->dir.x = _535_0;
    light->dir.y = _535_0;
    light->dir.z = _536;
    light->coneangle = _535_0;

    return light;
}

void iLightModify(iLight* light, uint32 flags)
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

void iLightEnv(iLight* light, int32 env)
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