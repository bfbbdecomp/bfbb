#include "xEntDrive.h"

#include "xMath.h"

#include <types.h>

void xEntDriveInit(xEntDrive* drv, xEnt* driven)
{
    if (drv == NULL)
    {
        return;
    }

    drv->flags = 0;
    drv->driven = driven;
    drv->driver = NULL;
    drv->s = 0.0f;
    drv->tm = 0.0f;
    drv->tmr = 0.0f;
    drv->odriver = NULL;
    drv->os = 0.0f;
    drv->otm = 0.0f;
    drv->otmr = 0.0f;
}

void xEntDriveMount(xEntDrive* drv, xEnt* driver, F32 mt, const xCollis* coll)
{
    if (drv->driven == NULL || drv->driven->frame == NULL || driver == NULL ||
        driver->frame == NULL)
    {
        xEntDriveInit(drv, drv->driven);
        return;
    }
    drv->dloc = 0.0f;
    if (driver == drv->odriver && drv->os)
    {
        drv->driver = driver;
        driver->driving_count++;
        if (mt < 0.0f)
        {
            drv->s = 1.0f;
            drv->tmr = 0.0f;
        }
        else
        {
            drv->s = drv->os;
            drv->tmr = mt * (1.0f - drv->s);
        }

        drv->tm = mt;
        drv->odriver = NULL;
        drv->os = 0.0f;
        drv->otm = 0.0f;
        drv->otmr = 0.0f;
    }
    else
    {
        drv->driver = driver;
        driver->driving_count++;
        if (mt < 0.0f)
        {
            drv->s = 1.0f;
            drv->tmr = 0.0f;
        }
        else
        {
            drv->s = 0.0f;
            drv->tmr = mt;
        }
        drv->tm = mt;
    }

    xVec3 euler;
    xMat3x3 a_descaled;
    if (drv->flags & 1)
    {
        {
            F32 len2 = SQR(drv->driver->frame->mat.right.x) + SQR(drv->driver->frame->mat.right.y) +
                       SQR(drv->driver->frame->mat.right.z);
            if (xabs(len2 - 1) <= 0.00001f)
            {
                a_descaled.right.x = drv->driver->frame->mat.right.x;
                a_descaled.right.y = drv->driver->frame->mat.right.y;
                a_descaled.right.z = drv->driver->frame->mat.right.z;
            }
            else if (xabs(len2) <= 0.00001f)
            {
                a_descaled.right.x = 0.0f;
                a_descaled.right.y = 1.0f;
                a_descaled.right.z = 0.0f;
            }
            else
            {
                F32 len_inv = 1.0f / xsqrt(len2);
                a_descaled.right.x = drv->driver->frame->mat.right.x * len_inv;
                a_descaled.right.y = drv->driver->frame->mat.right.y * len_inv;
                a_descaled.right.z = drv->driver->frame->mat.right.z * len_inv;
            }
        }

        {
            F32 len2 = SQR(drv->driver->frame->mat.up.x) + SQR(drv->driver->frame->mat.up.y) +
                       SQR(drv->driver->frame->mat.up.z);
            if (xabs(len2 - 1.0f) <= 0.00001f)
            {
                a_descaled.up.x = drv->driver->frame->mat.up.x;
                a_descaled.up.y = drv->driver->frame->mat.up.y;
                a_descaled.up.z = drv->driver->frame->mat.up.z;
            }
            else if (xabs(len2) <= 0.00001f)
            {
                a_descaled.up.x = 0.0f;
                a_descaled.up.y = 1.0f;
                a_descaled.up.z = 0.0f;
            }
            else
            {
                F32 len_inv = 1.0f / xsqrt(len2);
                a_descaled.up.x = drv->driver->frame->mat.up.x * len_inv;
                a_descaled.up.y = drv->driver->frame->mat.up.y * len_inv;
                a_descaled.up.z = drv->driver->frame->mat.up.z * len_inv;
            }
        }

        {
            F32 len2 = SQR(drv->driver->frame->mat.at.x) + SQR(drv->driver->frame->mat.at.y) +
                       SQR(drv->driver->frame->mat.at.z);
            if (xabs(len2 - 1.0f) <= 0.00001f)
            {
                a_descaled.at.x = drv->driver->frame->mat.at.x;
                a_descaled.at.y = drv->driver->frame->mat.at.y;
                a_descaled.at.z = drv->driver->frame->mat.at.z;
            }
            else if (xabs(len2) <= 0.00001f)
            {
                a_descaled.at.x = 0.0f;
                a_descaled.at.y = 1.0f;
                a_descaled.at.z = 0.0f;
            }
            else
            {
                F32 len_inv = 1.0f / xsqrt(len2);
                a_descaled.at.x = drv->driver->frame->mat.at.x * len_inv;
                a_descaled.at.y = drv->driver->frame->mat.at.y * len_inv;
                a_descaled.at.z = drv->driver->frame->mat.at.z * len_inv;
            }
        }
        xMat3x3GetEuler(&a_descaled, &euler);
        drv->yaw = euler.x;
    }

    if (coll != NULL && coll->flags & 0x2000)
    {
        drv->flags |= 0x2;

        *(xCollis::tri_data*)&drv->tri = coll->tri;
        drv->tri.loc = xCollisTriHit(drv->tri, *driver->model);
        xMat4x3Tolocal(&drv->tri.loc, &drv->driver->frame->mat, &drv->tri.loc);
        drv->tri.coll = coll;
    }

    xVec3Copy(&drv->q, &drv->driven->frame->mat.pos);
    xMat4x3Tolocal(&drv->p, &drv->driver->frame->mat, &drv->q);
}

void xEntDriveDismount(xEntDrive* drv, F32 dmt)
{
    if (drv == NULL)
    {
        return;
    }

    if (drv->driver == NULL)
    {
        return;
    }

    if (drv->driven == NULL || drv->driven->frame == NULL || drv->driver->frame == NULL)
    {
        xEntDriveInit(drv, drv->driven);
        return;
    }
    drv->odriver = drv->driver;
    drv->os = drv->s;
    drv->otm = dmt;
    drv->otmr = dmt * drv->os;
    if (drv->driver != NULL)
    {
        drv->driver->driving_count--;
    }

    drv->driver = NULL;
    drv->s = 0.0f;
    drv->tm = 0.0f;
    drv->tmr = 0.0f;
    drv->flags &= ~2;
    xVec3Copy(&drv->q, &drv->driven->frame->mat.pos);
    xMat4x3Tolocal(&drv->op, &drv->odriver->frame->mat, &drv->q);
}

void xEntDriveUpdate(xEntDrive* drv, xScene* s, F32 dt, const xCollis* coll)
{
    if ((drv != NULL && (drv->odriver != NULL || drv->driver != NULL)))
    {
        if (drv->driven == NULL || drv->driven->frame == NULL ||
            (drv->odriver != NULL && drv->odriver->frame == NULL))
        {
            xEntDriveInit(drv, drv->driven);
            return;
        }

        if (drv->otmr > 0.0f)
        {
            drv->otmr -= dt;
            if (drv->otmr <= 0.0f)
            {
                drv->os = 0.0f;
                drv->otmr = 0.0f;
            }
            else
            {
                drv->os = drv->otmr / drv->otm;
            }
        }

        if (drv->tmr > 0.0f)
        {
            drv->tmr -= dt;
            if (drv->tmr <= 0.0f)
            {
                drv->s = 1.0f;
                drv->tmr = 0.0f;
            }
            else
            {
                drv->s = 1.0f - drv->tmr / drv->tm;
            }
        }

        if (!drv->os && !drv->s)
        {
            return;
        }

        xVec3 euler;
        xMat3x3 rot;
        xMat3x3 a_descaled;
        if (drv->s && drv->flags & 1)
        {
            if (drv->driver == NULL || drv->driver->frame == NULL)
            {
                xEntDriveInit(drv, drv->driven);
                return;
            }

            {
                F32 len2 = SQR(drv->driver->frame->mat.right.x) +
                           SQR(drv->driver->frame->mat.right.y) +
                           SQR(drv->driver->frame->mat.right.z);
                if (xabs(len2 - 1) <= 0.00001f)
                {
                    a_descaled.right.x = drv->driver->frame->mat.right.x;
                    a_descaled.right.y = drv->driver->frame->mat.right.y;
                    a_descaled.right.z = drv->driver->frame->mat.right.z;
                }
                else if (xabs(len2) <= 0.00001f)
                {
                    a_descaled.right.x = 0.0f;
                    a_descaled.right.y = 1.0f;
                    a_descaled.right.z = 0.0f;
                }
                else
                {
                    F32 len_inv = 1.0f / xsqrt(len2);
                    a_descaled.right.x = drv->driver->frame->mat.right.x * len_inv;
                    a_descaled.right.y = drv->driver->frame->mat.right.y * len_inv;
                    a_descaled.right.z = drv->driver->frame->mat.right.z * len_inv;
                }
            }

            {
                F32 len2 = SQR(drv->driver->frame->mat.up.x) + SQR(drv->driver->frame->mat.up.y) +
                           SQR(drv->driver->frame->mat.up.z);
                if (xabs(len2 - 1.0f) <= 0.00001f)
                {
                    a_descaled.up.x = drv->driver->frame->mat.up.x;
                    a_descaled.up.y = drv->driver->frame->mat.up.y;
                    a_descaled.up.z = drv->driver->frame->mat.up.z;
                }
                else if (xabs(len2) <= 0.00001f)
                {
                    a_descaled.up.x = 0.0f;
                    a_descaled.up.y = 1.0f;
                    a_descaled.up.z = 0.0f;
                }
                else
                {
                    F32 len_inv = 1.0f / xsqrt(len2);
                    a_descaled.up.x = drv->driver->frame->mat.up.x * len_inv;
                    a_descaled.up.y = drv->driver->frame->mat.up.y * len_inv;
                    a_descaled.up.z = drv->driver->frame->mat.up.z * len_inv;
                }
            }

            {
                F32 len2 = SQR(drv->driver->frame->mat.at.x) + SQR(drv->driver->frame->mat.at.y) +
                           SQR(drv->driver->frame->mat.at.z);
                if (xabs(len2 - 1.0f) <= 0.00001f)
                {
                    a_descaled.at.x = drv->driver->frame->mat.at.x;
                    a_descaled.at.y = drv->driver->frame->mat.at.y;
                    a_descaled.at.z = drv->driver->frame->mat.at.z;
                }
                else if (xabs(len2) <= 0.00001f)
                {
                    a_descaled.at.x = 0.0f;
                    a_descaled.at.y = 1.0f;
                    a_descaled.at.z = 0.0f;
                }
                else
                {
                    F32 len_inv = 1.0f / xsqrt(len2);
                    a_descaled.at.x = drv->driver->frame->mat.at.x * len_inv;
                    a_descaled.at.y = drv->driver->frame->mat.at.y * len_inv;
                    a_descaled.at.z = drv->driver->frame->mat.at.z * len_inv;
                }
            }
            xMat3x3GetEuler(&a_descaled, &euler);
            xMat3x3RotY(&rot, drv->s * (euler.x - drv->yaw));
            xMat3x3Mul(&drv->driven->frame->mat, &drv->driven->frame->mat, &rot);
            drv->yaw = euler.x;
        }

        drv->dloc = 0.0f;
        xVec3 newq;
        if (drv->os)
        {
            if (drv->odriver == NULL || drv->odriver->frame == NULL)
            {
                xEntDriveInit(drv, drv->driven);
                return;
            }

            xMat4x3Toworld(&newq, &drv->odriver->frame->mat, &drv->op);
            xVec3Sub(&drv->driven->frame->dpos, &newq, &drv->q);
            xVec3SMulBy(&drv->driven->frame->dpos, drv->os);
            xVec3AddTo(&drv->driven->frame->mat.pos, &drv->driven->frame->dpos);
            drv->dloc += drv->driven->frame->dpos;
        }

        if (drv->s)
        {
            if (drv->driver == NULL || drv->driver->frame == NULL)
            {
                xEntDriveInit(drv, drv->driven);
                return;
            }

            if (drv->flags & 0x2)
            {
                xModelInstance& m = *drv->driver->model;
                if (xModelAnimCollDirty(m))
                {
                    xModelAnimCollRefresh(m);
                }
                xVec3 world_loc;
                xMat4x3Toworld(&world_loc, &drv->driver->frame->mat, &drv->tri.loc);

                xVec3 new_loc;
                new_loc = xCollisTriHit(drv->tri, m);
                drv->driven->frame->dpos = new_loc - world_loc;

                if (drv->tri.index != drv->tri.coll->tri.index ||
                    !(xabs(drv->tri.r - drv->tri.coll->tri.r) <= 0.1f) ||
                    !(xabs(drv->tri.d - drv->tri.coll->tri.d) <= 0.1f))
                {
                    *(xCollis::tri_data*)&drv->tri = drv->tri.coll->tri;
                }

                xMat4x3 oldmat = *(xMat4x3*)m.Mat;
                *(xMat4x3*)m.Mat = drv->driver->frame->mat;

                drv->tri.loc = xCollisTriHit(drv->tri, m);
                xMat4x3Tolocal(&drv->tri.loc, &drv->driver->frame->mat, &drv->tri.loc);
                *(xMat4x3*)m.Mat = oldmat;
            }
            else
            {
                xMat4x3Toworld(&newq, &drv->driver->frame->mat, &drv->p);
                xVec3Sub(&drv->driven->frame->dpos, &newq, &drv->q);
            }

            drv->driven->frame->dpos *= drv->s;
            drv->dloc += drv->driven->frame->dpos;
            drv->driven->frame->mat.pos += drv->driven->frame->dpos;
            if (drv->driven->model != NULL)
            {
                *(xVec3*)&drv->driven->model->Mat->pos = drv->driven->frame->mat.pos;
            }
        }

        xVec3Copy(&drv->q, &drv->driven->frame->mat.pos);
        if (drv->os)
        {
            if (drv->odriver == NULL || drv->odriver->frame == NULL)
            {
                xEntDriveInit(drv, drv->driven);
                return;
            }
            xMat4x3Tolocal(&drv->op, &drv->odriver->frame->mat, &drv->q);
        }
        if (drv->s)
        {
            if (drv->driver == NULL || drv->driver->frame == NULL)
            {
                xEntDriveInit(drv, drv->driven);
                return;
            }
            xMat4x3Tolocal(&drv->p, &drv->driver->frame->mat, &drv->q);
        }
    }
}
