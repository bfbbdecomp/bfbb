#include "zEntTrigger.h"

#include "../Core/x/xEvent.h"

extern float32 _670;
extern float32 _671_0;
extern float32 _746_1;

void zEntTriggerInit(void* ent, void* asset)
{
    zEntTriggerInit((zEntTrigger*)ent, (xEntAsset*)asset);
}

void zEntTriggerInit(zEntTrigger* ent, xEntAsset* asset)
{
    zEntInit(ent, asset, 'TRIG');

    if (ent->subType == ZENTTRIGGER_TYPE_BOX)
    {
        xTriggerAsset* tasset;
        xVec3 var_20, var_2C, var_38;

        xMat3x3Euler(&ent->triggerMatrix, &asset->ang);

        tasset = (xTriggerAsset*)(asset + 1);

        var_20 = tasset->p[1];
        var_2C = tasset->p[0];

        xVec3Sub(&var_20, &var_20, &asset->pos);
        xVec3Sub(&var_2C, &var_2C, &asset->pos);
        xVec3Lerp(&var_38, &var_2C, &var_20, _670);

        xMat3x3RMulVec(&var_38, &ent->triggerMatrix, &var_38);

        xVec3Add(&ent->triggerMatrix.pos, &var_38, &asset->pos);

        ent->triggerBox.lower.x = _671_0 * (var_20.x - var_2C.x);
        ent->triggerBox.lower.y = _671_0 * (var_20.y - var_2C.y);
        ent->triggerBox.lower.z = _671_0 * (var_20.z - var_2C.z);
        ent->triggerBox.upper.x = -ent->triggerBox.lower.x;
        ent->triggerBox.upper.y = -ent->triggerBox.lower.y;
        ent->triggerBox.upper.z = -ent->triggerBox.lower.z;
    }

    ent->move = NULL;
    ent->update = (xEntUpdateCallback)zEntTriggerUpdate;
    ent->eventFunc = zEntTriggerEventCB;

    if (ent->linkCount)
    {
        ent->link = (xLinkAsset*)((uint8*)ent->asset + sizeof(xEntAsset) + sizeof(xTriggerAsset));
    }
    else
    {
        ent->link = NULL;
    }

    ent->entered = 0;
}

void zEntTriggerUpdate(zEntTrigger* trig, xScene*, float32)
{
    if (xBaseIsEnabled(trig))
    {
        uint32 i;
        xLinkAsset* link = trig->link;
        xTriggerAsset* tasset = (xTriggerAsset*)(trig->asset + 1);

        for (i = 0; i < trig->linkCount; i++)
        {
            if (link->chkAssetID && link->srcEvent >= eEventEnterEntity &&
                link->srcEvent <= eEventExitEntityFLAG)
            {
                xIsect isect;
                int32 collide = 0;

                if (link->chkAssetID)
                {
                    xEnt* chkEnt = (xEnt*)zSceneFindObject(link->chkAssetID);

                    if (chkEnt)
                    {
                        xVec3* chkPos;

                        if (chkEnt->bound.type == XBOUND_TYPE_SPHERE)
                        {
                            chkPos = &chkEnt->bound.sph.center;
                        }
                        else
                        {
                            chkPos = (xVec3*)&chkEnt->model->Mat->pos;
                        }

                        switch (trig->subType)
                        {
                        case ZENTTRIGGER_TYPE_BOX:
                        {
                            xVec3 xformVec;

                            xMat4x3Tolocal(&xformVec, &trig->triggerMatrix, chkPos);
                            iBoxIsectVec(&trig->triggerBox, &xformVec, &isect);

                            collide = (isect.penned <= _746_1);

                            break;
                        }
                        case ZENTTRIGGER_TYPE_SPHERE:
                        {
                            xSphere sphere;
                            xIsect isect;

                            sphere.center = tasset->p[0];
                            sphere.r = tasset->p[1].x;

                            iSphereIsectVec(&sphere, chkPos, &isect);

                            collide = (isect.penned <= _746_1);

                            break;
                        }
                        case ZENTTRIGGER_TYPE_VCYLINDER:
                        {
                            xCylinder cylinder;
                            xIsect isect;

                            cylinder.center = tasset->p[0];
                            cylinder.r = tasset->p[1].x;
                            cylinder.h = tasset->p[1].y;

                            iCylinderIsectVec(&cylinder, chkPos, &isect);

                            collide = (isect.penned <= _746_1);

                            break;
                        }
                        case ZENTTRIGGER_TYPE_VSPHERE:
                        {
                            xSphere sphere;
                            xIsect isect;

                            sphere.center = tasset->p[0];
                            sphere.r = tasset->p[1].x;

                            iSphereIsectVec(&sphere, chkPos, &isect);

                            collide = (isect.penned <= _746_1);

                            break;
                        }
                        case ZENTTRIGGER_TYPE_4:
                        case ZENTTRIGGER_TYPE_5:
                        {
                            break;
                        }
                        }
                    }
                }

                if (collide)
                {
                    if (link->srcEvent == eEventEnterEntity)
                    {
                        link->srcEvent = eEventEnterEntityFLAG;

                        zEntEvent(trig, eEventEnterEntity, zSceneFindObject(link->dstAssetID),
                                  link->dstEvent, link->param,
                                  zSceneFindObject(link->paramWidgetAssetID), 0);
                    }

                    if (link->srcEvent == eEventExitEntity)
                    {
                        link->srcEvent = eEventExitEntityFLAG;
                    }
                }
                else
                {
                    if (link->srcEvent == eEventExitEntityFLAG)
                    {
                        link->srcEvent = eEventExitEntity;

                        zEntEvent(trig, eEventExitEntity, zSceneFindObject(link->dstAssetID),
                                  link->dstEvent, link->param,
                                  zSceneFindObject(link->paramWidgetAssetID), 0);
                    }

                    if (link->srcEvent == eEventEnterEntityFLAG)
                    {
                        link->srcEvent = eEventEnterEntity;
                    }
                }
            }

            link++;
        }
    }
}

int32 zEntTriggerEventCB(xBase*, xBase* to, uint32 toEvent, const float32*, xBase*)
{
    zEntTrigger* trig = (zEntTrigger*)to;

    switch (toEvent)
    {
    case eEventReset:
    {
        zEntTriggerReset(trig);
        break;
    }
    }

    return 1;
}

void zEntTriggerSave(zEntTrigger* ent, xSerial* s)
{
    zEntSave(ent, s);
}

void zEntTriggerLoad(zEntTrigger* ent, xSerial* s)
{
    zEntLoad(ent, s);
}

void zEntTriggerReset(zEntTrigger* ent)
{
    ent->entered = 0;

    zEntReset(ent);
}

bool zEntTriggerHitsSphere(const zEntTrigger& trig, const xSphere& o, const xVec3& dir)
{
    xTriggerAsset* tasset;

    if (!xBaseIsEnabled(&trig))
    {
        return false;
    }

    tasset = zEntTriggerAsset(trig);

    if (tasset->flags & 0x1 && dir.dot(tasset->direction) <= _746_1)
    {
        return false;
    }

    switch (trig.subType)
    {
    case ZENTTRIGGER_TYPE_BOX:
    {
        return xSphereHitsOBB(o, trig.triggerBox, trig.triggerMatrix);
    }
    case ZENTTRIGGER_TYPE_SPHERE:
    {
        return xSphereHitsSphere(o.center, o.r, tasset->p[0], tasset->p[1].x);
    }
    case ZENTTRIGGER_TYPE_VCYLINDER:
    {
        return xSphereHitsVCylinder(o.center, o.r, tasset->p[0], tasset->p[1].x, tasset->p[1].y);
    }
    case ZENTTRIGGER_TYPE_VSPHERE:
    {
        return xSphereHitsVCircle(o, tasset->p[0], tasset->p[1].x);
    }
    }

    return false;
}

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    float32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    float32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    float32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}

bool xSphereHitsVCircle(const xSphere& s, const xVec3& c, float32 r)
{
    return xSphereHitsVCircle(s.center, s.r, c, r);
}