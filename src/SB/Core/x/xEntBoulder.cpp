#include "xMath3.h"
#include "xVec3.h"
#include "xEntBoulder.h"

#include <types.h>

void xEntBoulder_FitToModel(xEntBoulder* ent)
{
    xVec3Copy
    (
    &ent->bound.cyl.center,
    (xVec3 *)(&ent->model->Data->boundingSphere.center)
    );
    ent->bound.cyl.r = ent->model->Data->boundingSphere.radius;
    xVec3Copy(&ent->localCenter, &ent->bound.cyl.center);
    xVec3AddTo(&ent->bound.cyl.center,(xVec3*)&ent->model->Mat->pos);
}

void xEntBoulder_Init(void* ent, void* asset)
{
    xEntBoulder_Init((xEntBoulder*)ent, (xEntAsset*)asset);
}

void xEntBoulder_AddInstantForce(xEntBoulder* ent, xVec3* force)
{
    if (ent->update != 0)
    {
        xVec3* frcptr = &ent->instForce;
        xVec3AddTo(frcptr, force);
    }
}

void xEntBoulder_AddForce(xEntBoulder* ent, xVec3* force)
{
    if (ent->update != 0)
    {
        xVec3* frcptr = &ent->force;
        xVec3AddTo(frcptr, force);
    }
}

void xEntBoulder_BUpdate()
{
    //For some reason this seems to be a completely empty function
}

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    F32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    F32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    F32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}

void xEntBoulder_BUpdate(xEnt*, xVec3*)
{
}

void xEntBoulder_Setup(xEntBoulder* ent)
{
    ent->asset->redMult = 0.0f;
    ent->asset->greenMult = 0.0f;
    ent->asset->blueMult = 0.0f;

    if (ent->model != NULL)
    {
        ent->asset->seeThru = ent->model->Alpha;
    }
    else
    {
        ent->asset->seeThru = 1.0f;
    }

    xEntSetup(ent);
}