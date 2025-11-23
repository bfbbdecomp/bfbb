#include "iMorph.h"
#include "iModel.h"

#include "rpusrdat.h"
#include <string.h>
#include <types.h>

static RpGeometry* s_geom;
static RpMorphTarget* s_tgt;
static F32* s_alloc;
static F32* s_vTemp;
static F32* s_nTemp;
static S32 s_numV;

static void MorphCommon(RpAtomic* model, RwMatrixTag* mat, S16** v_array, S16* weight, U32 normals,
                        F32 scale, S32 dorender)
{
    S16* va[4];
    S16 wa[4];

    U32 i;
    U32 a = 0;
    S32 wsum = 0;

    RwV3d* oldVerts = NULL;

    RpUserDataArray* usr;
    DirtyMorph* dm;

    S32 useNormals = 0;
    s_geom = model->geometry;
    RwV3d* oldNorms = NULL;
    s_tgt = s_geom->morphTarget;
    s_numV = s_geom->numVertices;
    s_alloc = NULL;
    s_nTemp = NULL;

    if (normals && s_geom->object.flags & 0x10)
    {
        useNormals = 1;
    }

    oldVerts = s_tgt->verts;
    S32 lockMode = (4 & ((-useNormals | useNormals) >> 0x1F)) | 2;

    if (useNormals)
    {
        oldNorms = s_tgt->normals;
    }

    for (i = 0; i < 4; i++)
    {
        if (v_array[i] != NULL && weight[i] != 0)
        {
            va[a] = v_array[i];
            wa[a] = weight[i];
            wsum += weight[i];
            a++;
        }
    }

    usr = RpGeometryGetUserDataArray(s_geom, 0);

    if (usr != NULL)
    {
        dm = (DirtyMorph*)usr->data;

        s_vTemp = (F32*)((U32)((char*)dm + 32) & ~0xF);

        if (s_vTemp < (F32*)((char*)dm + 32))
            s_vTemp = (F32*)((char*)s_vTemp + 16);

        if (s_tgt)
            s_tgt->verts = (RwV3d*)s_vTemp;

        if (useNormals)
        {
            U32 vSize = s_numV * 3 * sizeof(F32);
            s_nTemp = (F32*)((U32)((char*)s_vTemp + vSize + 15) & ~0xF);

            if (s_tgt)
                s_tgt->normals = (RwV3d*)s_nTemp;
        }

        U32 isHit = 0;

        if (dm->count == a && dm->weight[0] == wa[0])
        {
            isHit = 1;
            for (i = 0; i < a; ++i)
            {
                if (dm->weight[i] != wa[i] || dm->v_array[i] != va[i])
                {
                    isHit = 0;
                    break;
                }
            }
        }

        if (isHit)
        {
            if (dorender)
                iModelRender(model, mat);

            s_tgt->verts = oldVerts;
            if (oldNorms)
                s_tgt->normals = oldNorms;

            return;
        }

        dm->count = a;
        dm->scale = scale;

        for (i = 0; i < a; ++i)
        {
            dm->weight[i] = wa[i];
            dm->v_array[i] = va[i];
        }

        RpGeometryLock(s_geom, lockMode);
    }

    if (a == 3)
    {
        // not sure what's actually going on here
        // m2c says:
        // spE = 0;
        // sp1C = sp18;
        dm->v_array[a] = 0;
    }
    if (usr == NULL)
    {
        if (s_numV == 0)
        {
            s_vTemp = NULL;
        }
        else
        {
            s_vTemp = (F32*)xMemPushTemp(s_numV * sizeof(RwV3d) + 16);

            s_alloc = s_vTemp;

            while ((U32)s_vTemp & 0xF)
            {
                s_vTemp++;
            }
        }

        if (useNormals && s_geom->object.flags & 0x10)
        {
            if (s_numV == 0)
            {
                s_nTemp = NULL;
            }
            else
            {
                s_nTemp = (F32*)xMemPushTemp(s_numV * sizeof(RwV3d) + 16);

                if (s_alloc == 0)
                {
                    s_alloc = s_nTemp;
                }

                while ((U32)s_nTemp & 0xF)
                {
                    s_nTemp++;
                }
            }
        }
    }

    if (a == 1)
    {
        FastS16unpack(s_vTemp, va[0], s_numV * 3, scale * wsum);
    }
    else if (a == 2)
    {
        FastS16weight2(s_vTemp, va, wa, s_numV * 3, scale);
    }
    else
    {
        FastS16weight4(s_vTemp, va, wa, s_numV * 3, scale);
    }

    if (s_nTemp != NULL)
    {
        F32 normScale = 1.0f / (wsum * 16384.0f);

        U32 stride = ((s_numV * 3 + 7) * 2) & 0xFFFFFFF0;

        for (i = 0; i < a; ++i)
        {
            va[i] = (S16*)((char*)va[i] + (((s_numV * 3 + 7) * 2) & 0xFFFFFFF0));
        }

        if (a == 1)
        {
            FastS16unpack(s_nTemp, va[0], s_numV * 3, normScale * wsum);
        }
        else if (a == 2)
        {
            FastS16weight2(s_nTemp, va, wa, s_numV * 3, normScale);
        }
        else
        {
            FastS16weight4(s_nTemp, va, wa, s_numV * 3, normScale);
        }
    }

    if (usr != NULL)
    {
        RpGeometryUnlock(s_geom);
        if (dorender)
        {
            iModelRender(model, mat);
        }
        s_tgt->verts = oldVerts;
        if (useNormals)
        {
            s_tgt->normals = oldNorms;
        }
    }
    else if (dorender)
    {
        RpGeometryLock(s_geom, lockMode);
        oldVerts = s_tgt->verts;
        s_tgt->verts = (RwV3d*)s_vTemp;
        if (useNormals)
        {
            oldNorms = s_tgt->normals;
            s_tgt->normals = (RwV3d*)s_nTemp;
        }
        RpGeometryUnlock(s_geom);
        iModelRender(model, mat);
        s_tgt->verts = oldVerts;
        if (useNormals)
        {
            s_tgt->normals = oldNorms;
        }
    }
}

void iMorphOptimize(RpAtomic* model, S32 normals)
{
    S32 hasNormals = (normals != 0);
    RpGeometry* geom = model->geometry;

    if (RpGeometryGetUserDataArrayCount(geom) == 0)
    {
        S32 numElements = ((hasNormals + 1) * geom->numVertices) * sizeof(RwV3d) + 56;

        S32 usridx = RpGeometryAddUserDataArray(geom, "MORPHSTATE", rpINTUSERDATA, numElements);
        RpUserDataArray* usr = RpGeometryGetUserDataArray(geom, usridx);

        memset(usr->data, 0, 0x20);
    }
}

void iMorphRender(RpAtomic* model, RwMatrix* mat, S16** v_array, S16* weight, U32 normals,
                  F32 scale)

{
    MorphCommon(model, mat, v_array, weight, normals, scale, 1);
    if (s_alloc != NULL)
    {
        xMemPopTemp(s_alloc);
        s_alloc = NULL;
    }
    return;
}

void FastS16unpack(F32* dest, S16* v, S32 count, F32 scale)
{
    for (S32 i = 0; i < count; i++)
    {
        dest[i] = v[i] * scale;
    }
}

void FastS16weight2(F32* dest, S16** v_array, S16* weight, S32 count, F32 scale)
{
    S32 i;
    S16* a = v_array[0];
    S16* b = v_array[1];
    F32 s0 = scale * weight[0];
    F32 s1 = scale * weight[1];

    for (i = 0; i < count; i++)
    {
        dest[i] = a[i] * s0 + b[i] * s1;
    }
}

void FastS16weight4(F32* dest, S16** v_array, S16* weight, S32 count, F32 scale)
{
    S32 i;
    S16* a0 = v_array[0];
    S16* a1 = v_array[1];
    S16* a2 = v_array[2];
    S16* a3 = v_array[3];
    F32 s0 = scale * weight[0];
    F32 s1 = scale * weight[1];
    F32 s2 = scale * weight[2];
    F32 s3 = scale * weight[3];

    for (i = 0; i < count; ++i)
    {
        dest[i] = a0[i] * s0 + a1[i] * s1 + a2[i] * s2 + a3[i] * s3;
    }
}
