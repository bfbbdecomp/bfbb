#include "xParEmitter.h"

#include <types.h>
#include <zScene.h>
#include <iModel.h>
#include <xMathInlines.h>
#include <xMath.h>
#include <xGroup.h>
#include <zGlobals.h>
#include <xDebug.h>
#include <xEvent.h>
#include <xMovePoint.h>

#include <PowerPC_EABI_Support\MSL_C\MSL_Common\cmath>

static xParEmitterAsset sSaveEmmiterSettings;
static xParEmitterPropsAsset sSaveEmmiterPropSettings;
static xParEmitterPropsAsset sDummyProp;

static U32 xParEmitterCull(xParEmitter* t, xPar* p);

void add_tweaks(xParEmitter& pe)
{
}

S32 xParInterpConvertInterpMode(xParInterp* p)
{
    if (p->interp < 8)
    {
        return p->interp;
    }
    if (p->interp == xStrHash("ConstA"))
    {
        return 0;
    }
    if (p->interp == xStrHash("ConstB"))
    {
        return 1;
    }
    if (p->interp == xStrHash("Sine"))
    {
        return 4;
    }
    if (p->interp == xStrHash("Cosine"))
    {
        return 5;
    }
    if (p->interp == xStrHash("Linear"))
    {
        return 3;
    }
    if (p->interp == xStrHash("Step"))
    {
        return 7;
    }
    if (p->interp == xStrHash("Random"))
    {
        return 2;
    }
    return 0;
}

void xParEmitterInit(void* b, void* tasset)
{
    xParEmitterInit((xBase*)b, (xParEmitterAsset*)tasset);
}

void xParEmitterInit(xBase* b, xParEmitterAsset* pea)
{
    xParEmitterPropsAsset* prop;
    xParEmitter* t;
    S32 i;

    t = (xParEmitter*)b;

    xBaseInit(t, pea);
    t->eventFunc = xParEmitterEventCB;
    t->tasset = pea;
    t->prop = (xParEmitterPropsAsset*)xSTFindAsset(pea->propID, NULL);
    if (t->prop == NULL)
    {
        t->prop = &sDummyProp;
    }
    if (t->linkCount != 0)
    {
        t->link = (xLinkAsset*)(t->tasset + 1);
    }
    else
    {
        t->link = NULL;
    }
    prop = t->prop;
    t->emit_flags = pea->emit_flags;
    t->parSys = (t->prop->parSysID != 0) ? (xParSys*)zSceneFindObject(t->prop->parSysID) : NULL;
    t->attachTo = NULL;
    t->emit_volume = NULL;
    for (i = 0; i < 14; i++)
    {
        if (prop->value[i].val[0] == prop->value[i].val[1])
        {
            prop->value[i].interp = 0;
        }
        else
        {
            prop->value[i].interp = xParInterpConvertInterpMode(&prop->value[i]);
        }
    }
    t->rate_mode = prop->rate.interp;
    if ((t->rate_mode == 2) && (prop->rate.val[0] == prop->rate.val[1]))
    {
        t->rate_mode = 0;
    }
    if (t->rate_mode == 2)
    {
        prop->rate.order();
    }
    t->rate = (t->rate_mode == 2)
                  ? ((prop->rate.val[1] - prop->rate.val[0]) * xurand()) + prop->rate.val[0]
                  : prop->rate.val[0];
    t->rate_time = 0.0f;
    t->rate_fraction = 0.0f;
    t->rate_fraction_cull = 0.0f;
    t->oocull_distance_sqr = (pea->emit_flags & 2) ? (1.0f / pea->cull_dist_sqr) : 0.0f;
    t->emit_volume = NULL;
    if ((pea->emit_type == eParEmitterOCircle) || (pea->emit_type == eParEmitterOCircleEdge))
    {
        F32 len2 = (pea->e_circle.dir).length2();

        if (len2 < 0.001f)
        {
            (pea->e_circle.dir).assign(0.0f, 1.0f, 0.0f);
        }
        else
        {
            pea->e_circle.dir *= 1.0f / xsqrt(len2);
        }
    }
    t->last_attach_loc = 1e38f;
}

void xParEmitterSetup(xParEmitter* t)
{
    xEnt* ent;

    if (t->parSys != NULL)
    {
        t->group = t->parSys->group;
    }
    if ((t->tasset->attachToID != 0) && (t->tasset->emit_type == eParEmitterOffsetPoint))
    {
        ent = (xEnt*)zSceneFindObject(t->tasset->attachToID);
        iModelTagSetup(&t->tag, ent->model->Data, (t->tasset->e_offsetp).offset.x,
                       (t->tasset->e_offsetp).offset.y, (t->tasset->e_offsetp).offset.z);
    }
    if (t->tasset->attachToID != 0)
    {
        ent = (xEnt*)zSceneFindObject(t->tasset->attachToID);
    }
    else
    {
        ent = NULL;
    }
    t->attachTo = ent;
    if ((S32)t->tasset->emit_type < eParEmitterEntityBone)
    {
        switch (t->tasset->emit_type)
        {
        case eParEmitterVolume:
            t->emit_volume = zSceneFindObject((t->tasset->e_volume).emit_volumeID);
            break;
        }
    }
    add_tweaks(*t);
}

void xParEmitterReset(xParEmitter* t)
{
    xBaseReset((xBase*)t, t->tasset);
    t->emit_flags = t->tasset->emit_flags;
}

S32 xParEmitterEventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam,
                       xBase* toParamWidget)
{
    xParEmitter* t = (xParEmitter*)to;
    xParEmitterCustomSettings fake_settings;

    switch ((S32)toEvent)
    {
    case eEventReset:
        xParEmitterReset(t);
        break;
    case eEventOn:
        t->emit_flags |= 1;
        break;
    case eEventOff:
        if (t->emit_flags & 1)
        {
            t->emit_flags ^= 1;
        }
        break;
    case eEventEmit:
        memset(&fake_settings, 0, sizeof(xParEmitterCustomSettings));
        xParEmitterEmitCustom(t, 0.033333335f, &fake_settings);
        break;
    }
    return 1;
}

xPar* xParEmitterEmitCustom(xParEmitter* p, F32 dt, xParEmitterCustomSettings* info)
{
    xPar* par;
    U32 flags = info->custom_flags;
    xParEmitterAsset* pe = p->tasset;

    if (flags & 0x1)
    {
        memcpy(&sSaveEmmiterSettings, pe, sizeof(xParEmitterAsset));
        memcpy(&sSaveEmmiterPropSettings, p->prop, sizeof(xParEmitterPropsAsset));
    }
    if (flags & 0x100)
    {
        pe->pos = info->pos;
    }
    if (flags & 0x10)
    {
        p->prop->rate = info->value[0];
    }
    if (flags & 0x2)
    {
        p->prop->life = info->life;
    }
    if (flags & 0x2000)
    {
        p->emit_volume = info->emit_volume;
    }
    if (flags & 0x4)
    {
        p->prop->size_birth = info->size_birth;
    }
    if (flags & 0x8)
    {
        p->prop->size_death = info->size_death;
    }
    if (flags & 0x200)
    {
        pe->vel = info->vel;
        p->prop->vel = info->vel;
    }
    if (flags & 0x40)
    {
        pe->vel_angle_variation = info->vel_angle_variation;
    }
    if (flags & 0x400)
    {
        p->prop->color_birth[0] = info->color_birth[0];
        p->prop->color_birth[1] = info->color_birth[1];
        p->prop->color_birth[2] = info->color_birth[2];
        p->prop->color_birth[3] = info->color_birth[3];
    }
    if (flags & 0x800)
    {
        p->prop->color_death[0] = info->color_death[0];
        p->prop->color_death[1] = info->color_death[1];
        p->prop->color_death[2] = info->color_death[2];
        p->prop->color_death[3] = info->color_death[3];
    }
    if (flags & 0x1000)
    {
        switch (p->tasset->emit_type)
        {
        case eParEmitterCircleEdge:
        case eParEmitterCircle:
        case eParEmitterOCircleEdge:
        case eParEmitterOCircle:
            p->tasset->e_circle.radius = info->radius;
            break;
        case eParEmitterSphereEdge1:
        case eParEmitterSphere:
        case eParEmitterSphereEdge2:
        case eParEmitterSphereEdge3:
            p->tasset->e_sphere.radius = info->radius;
            break;
        }
    }

    par = xParEmitterEmit(p, dt);

    if (flags & 0x1)
    {
        memcpy(pe, &sSaveEmmiterSettings, sizeof(xParEmitterAsset));
        memcpy(p->prop, &sSaveEmmiterPropSettings, sizeof(xParEmitterPropsAsset));
    }
    return par;
}

static U32 xParEmitterCull(xParEmitter* t, xPar* p)
{
    xVec3 campos;
    xVec3 dist;
    F32 dist2;
    xParEmitterAsset* tas = t->tasset;

    if (tas->emit_flags & 2)
    {
        campos = xglobals->camera.mat.pos;
        xVec3Sub(&dist, &campos, &p->m_pos);
        dist2 = xVec3Length2(&dist);
        t->distance_to_cull_sqr = dist2;
        if (tas->cull_mode == 3)
        {
            return dist2 > tas->cull_dist_sqr;
        }
        return dist2 < tas->cull_dist_sqr;
    }
    return 0;
}

F32 xParInterpCompute(S32 interp_mode, xParInterp* r, F32 time, S32 time_has_elapsed, F32 lastVal)
{
    F32 val = time;

    switch (interp_mode)
    {
    case 0:
        val = r->val[0];
        break;
    case 1:
        val = r->val[1];
        break;
    case 2:
        if (time_has_elapsed)
        {
            val = ((r->val[1] - r->val[0]) * xurand()) + r->val[0];
        }
        else
        {
            val = lastVal;
        }
        break;
    case 3:
        if (r->freq < 0.00001f)
        {
            val = r->val[0];
        }
        else
        {
            val = ((r->val[1] - r->val[0]) * (val / r->freq)) + r->val[0];
        }
        break;
    case 4:
        val = ((r->val[1] - r->val[0]) *
               ((0.5f * isin(6.2831855f * (val * r->oofreq))) + 0.5f)) +
              r->val[0];
        break;
    case 5:
        val = ((r->val[1] - r->val[0]) *
               ((0.5f * icos(6.2831855f * (val * r->oofreq))) + 0.5f)) +
              r->val[0];
        break;
    case 7:
        if ((val * r->freq) >= 0.5f)
        {
            val = r->val[1];
        }
        else
        {
            val = r->val[0];
        }
        break;
    }
    return val;
}

xPar* xParEmitterEmitSetTexIdxs(xPar* p, const xParSys* ps)
{
    xParCmdTex* tex = ps->group->m_cmdTex;

    if (tex == NULL)
    {
        return NULL;
    }

    switch (tex->birthMode)
    {
    case 1:
        p->m_texIdx[0] = (xrand() >> 0x11) % tex->cols;
        p->m_texIdx[1] = (xrand() >> 0x11) % tex->rows;
        break;
    case 0:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        p->m_texIdx[0] = 0;
        p->m_texIdx[1] = 0;
        break;
    }

    return p;
}

xPar* xParEmitterEmit(xParEmitter* pe, F32 emit_dt, F32 par_dt)
{
    xPar* p;
    xPar* last_p;
    xParEmitterAsset* pea;
    xParEmitterPropsAsset* prop;
    S32 rate_has_elapsed;
    F32 rate;
    xParSys* ps;
    F32 life;
    F32 size_birth;
    F32 size_death;
    xVec3 emitPosition;
    xBase* attachObject;
    S32 count;
    S32 attachGroupIndex;
    S32 attachGroupTotal;
    S32 emitAgain;
    xBase* emitObj;
    S32 marker;
    xGroup* g;
    xEnt* attach_ent;
    xMat4x3* bone_mat;
    xVec3 bone_vel;
    xVec3 attach_vel;
    S32 i;
    S32 c;
    F32 fc1;
    F32 fc2;

    if (pe->parSys == NULL)
    {
        return NULL;
    }

    last_p = NULL;
    pea = pe->tasset;
    prop = pe->prop;

    pe->rate_time += emit_dt;
    rate_has_elapsed = pe->rate_time > prop->rate.freq;
    if (prop->rate.freq == 0.0f)
    {
        pe->rate_time = 0.0f;
    }
    while (pe->rate_time > prop->rate.freq)
    {
        pe->rate_time -= prop->rate.freq;
    }

    rate =
        xParInterpCompute(pe->rate_mode, &prop->rate, pe->rate_time, rate_has_elapsed, pe->rate);
    pe->rate = rate;
    rate *= emit_dt;
    pe->rate_fraction += rate;
    pe->rate_fraction_cull += rate;

    rate_has_elapsed = std::floorf(pe->rate_fraction);
    if (rate_has_elapsed > 0)
    {
        pe->rate_fraction -= rate_has_elapsed;
    }
    if (rate_has_elapsed == 0)
    {
        return NULL;
    }

    ps = pe->parSys;
    if (ps == NULL)
    {
        return NULL;
    }
    if (ps->group == NULL)
    {
        return NULL;
    }
    if ((ps->tasset->maxPar != 0) && (ps->group->m_num_of_particles >= ps->tasset->maxPar))
    {
        return NULL;
    }
    if ((ps->tasset->maxPar != 0) && (ps->group->m_num_of_particles >= ps->tasset->maxPar))
    {
        return NULL;
    }
    if ((ps->tasset->maxPar != 0) &&
        ((ps->group->m_num_of_particles + rate_has_elapsed) >= ps->tasset->maxPar))
    {
        rate_has_elapsed = ps->tasset->maxPar - ps->group->m_num_of_particles;
    }

    attachObject = (xBase*)pe->attachTo;
    count = -1;
    attachGroupTotal = -1;

    do
    {
        emitAgain = 0;
        emitObj = NULL;
        marker = 0;

        if (attachObject != NULL)
        {
            if (attachObject->baseType == eBaseTypeGroup)
            {
                g = (xGroup*)attachObject;
                if (count == -1)
                {
                    attachGroupTotal = xGroupGetCount(g);
                    count = 0;
                }
                if (g->asset->groupFlags & 1)
                {
                    attachGroupIndex = xrand() % attachGroupTotal;
                    emitObj = xGroupGetItemPtr(g, attachGroupIndex);
                    emitAgain = 0;
                    if (emitObj == NULL)
                    {
                        emitObj =
                            (xBase*)xSTFindAsset(xGroupGetItem(g, attachGroupIndex), NULL);
                        if (emitObj != NULL)
                        {
                            marker = 1;
                        }
                    }
                }
                else
                {
                    emitObj = xGroupGetItemPtr(g, count);
                    if (emitObj == NULL)
                    {
                        emitObj = (xBase*)xSTFindAsset(xGroupGetItem(g, count), NULL);
                        if (emitObj != NULL)
                        {
                            marker = 1;
                        }
                    }
                    count++;
                    emitAgain = count < attachGroupTotal;
                }
            }
            else
            {
                emitObj = attachObject;
            }
        }

        attach_ent = (xEnt*)emitObj;
        if (emitObj != NULL)
        {
            if (marker)
            {
                emitPosition = *(xVec3*)emitObj;
                attach_ent = NULL;
            }
            else
            {
                switch (emitObj->baseType)
                {
                case eBaseTypeMovePoint:
                    emitPosition = *((xMovePoint*)emitObj)->pos;
                    attach_ent = NULL;
                    break;
                default:
                    if (!xEntValidType(emitObj->baseType) || (attach_ent->model == NULL))
                    {
                        emitPosition = 0.0f;
                        attach_ent = NULL;
                    }
                    else
                    {
                        emitPosition = *xEntGetPos(attach_ent);
                    }
                    break;
                }
            }
        }
        else
        {
            emitPosition = pea->pos;
        }

        if (((pe->emit_flags & 0x10) == 0) || (attach_ent == NULL) ||
            (xEntIsVisible(attach_ent) != 0))
        {
            bone_mat = NULL;
            if ((pea->emit_type == eParEmitterEntityBone) && (attach_ent != NULL))
            {
                bone_mat = xParEmitterTransformEntBone(emitPosition, bone_vel, *pea, *attach_ent);
                bone_vel *= par_dt;
            }

            if (pe->emit_flags & 8)
            {
                attach_vel = emitPosition - pe->last_attach_loc;
                pe->last_attach_loc = emitPosition;
                if (attach_vel.length2() > 25.0f)
                {
                    attach_vel = 0.0f;
                }
            }
            else
            {
                attach_vel = 0.0f;
            }

            for (i = 0; i < rate_has_elapsed; i++)
            {
                p = xParGroupAddPar(ps->group);
                if (p != NULL)
                {
                    last_p = p;

                    life = xParInterpCompute((prop->life).interp, &prop->life, pe->rate_time, 1,
                                             0.0f);
                    size_birth = xParInterpCompute((prop->size_birth).interp, &prop->size_birth,
                                                   pe->rate_time, 1, 0.0f);
                    size_death = xParInterpCompute((prop->size_death).interp, &prop->size_death,
                                                   pe->rate_time, 1, 0.0f);

                    p->m_lifetime = life;
                    p->totalLifespan = life;
                    p->m_size = size_birth;
                    if (size_death == size_birth)
                    {
                        p->m_sizeVel = 0.0f;
                    }
                    else
                    {
                        p->m_sizeVel = (size_death - size_birth) / life;
                    }
                    p->m_flag = 0;
                    p->m_rotdeg[0] = pe->rot[0];
                    p->m_rotdeg[1] = pe->rot[1];
                    p->m_rotdeg[2] = pe->rot[2];

                    for (c = 0; c < 4; c++)
                    {
                        fc1 = xParInterpCompute(prop->color_birth[c].interp,
                                                &prop->color_birth[c], pe->rate_time, 1, 0.0f);
                        fc2 = xParInterpCompute(prop->color_death[c].interp,
                                                &prop->color_death[c], pe->rate_time, 1, 0.0f);
                        p->m_cfl[c] = fc1;
                        p->m_c[c] = (U8)fc1;
                        p->m_cvel[c] = (fc2 - fc1) / life;
                    }

                    p->m_pos = emitPosition;
                    xParEmitterEmitSetTexIdxs(p, ps);

                    switch (pea->emit_type)
                    {
                    case eParEmitterPoint:
                        xParEmitterEmitPoint(p, pea, par_dt);
                        break;
                    case eParEmitterCircleEdge:
                        xParEmitterEmitCircleEdge(p, pea, par_dt);
                        break;
                    case eParEmitterCircle:
                        xParEmitterEmitCircle(p, pea, par_dt);
                        break;
                    case eParEmitterRectEdge:
                        xParEmitterEmitRectEdge(p, pea, par_dt);
                        break;
                    case eParEmitterRect:
                        xParEmitterEmitRect(p, pea, par_dt);
                        break;
                    case eParEmitterLine:
                        xParEmitterEmitLine(p, pea, par_dt);
                        break;
                    case eParEmitterSphereEdge1:
                        xParEmitterEmitSphereEdge(p, pea, par_dt, eParEmitterSphereEdge1);
                        break;
                    case eParEmitterSphereEdge2:
                        xParEmitterEmitSphereEdge(p, pea, par_dt, eParEmitterSphereEdge2);
                        break;
                    case eParEmitterSphereEdge3:
                        xParEmitterEmitSphereEdge(p, pea, par_dt, eParEmitterSphereEdge3);
                        break;
                    case eParEmitterSphere:
                        xParEmitterEmitSphere(p, pea, par_dt);
                        break;
                    case eParEmitterVolume:
                    {
                        xBase* obj = (xBase*)pe->emit_volume;

                        if (obj != NULL)
                        {
                            if (obj->baseType == eBaseTypeVolume)
                            {
                                xParEmitterEmitVolume(p, pea, par_dt, (xVolume*)obj);
                            }
                            else
                            {
                                xParEmitterEmitEntity(p, pea, par_dt, (xEnt*)obj);
                            }
                        }
                        break;
                    }
                    case eParEmitterOffsetPoint:
                        xParEmitterEmitOffsetPoint(pe, p, pea, par_dt, (xEnt*)emitObj);
                        break;
                    case eParEmitterVCylEdge:
                        xParEmitterEmitVCylEdge(p, pea, par_dt);
                        break;
                    case eParEmitterOCircleEdge:
                        xParEmitterEmitOCircleEdge(p, pea, par_dt);
                        break;
                    case eParEmitterOCircle:
                        xParEmitterEmitOCircle(p, pea, par_dt);
                        break;
                    case eParEmitterEntityBone:
                        if (bone_mat != NULL)
                        {
                            p->m_vel = bone_vel;
                            xParEmitterEmitEntBone(p, pea, par_dt, *bone_mat);
                        }
                        break;
                    case eParEmitterEntityBound:
                        if (attach_ent != NULL)
                        {
                            xParEmitterEmitEntBound(p, pea, par_dt, attach_ent);
                        }
                        break;
                    }

                    p->m_vel += attach_vel;
                    c = xParEmitterCull(pe, p);
                    if (c != 0)
                    {
                        xParGroupKillPar(ps->group, p);
                    }
                }
                else
                {
                    emitAgain = 0;
                }
            }
        }
    } while (emitAgain);

    return last_p;
}

void xParEmitterUpdate(xBase* to, xScene*, F32 dt)
{
    xParEmitter* parTo = (xParEmitter*)to;
    if ((parTo->parSys != NULL) && (parTo->emit_flags & 1))
    {
        xParEmitterEmit(parTo, dt);
    }
}

void xParEmitterDestroy()
{
    xDebugRemoveTweak("Particle Emitters");
}

void xParInterp::order()
{
    F32 f1;
    F32 f2;
    f1 = this->val[1];
    f2 = this->val[0];
    if (f1 < f2)
    {
        this->val[1] = f2;
        this->val[0] = f1;
    }
}

xPar* xParEmitterEmit(xParEmitter* pe, F32 dt)
{
    return xParEmitterEmit(pe, dt, dt);
}

void xParInterp::operator=(const xParInterp& p)
{
    *(S32*)&this->val[0] = *(S32*)&p.val[0];
    *(S32*)&this->val[1] = *(S32*)&p.val[1];
    this->interp = p.interp;
    this->freq = p.freq;
    this->oofreq = p.oofreq;
}
