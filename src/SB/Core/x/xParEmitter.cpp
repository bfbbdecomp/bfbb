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

void add_tweaks(xParEmitter& pe)
{
}

S32 xParInterpConvertInterpMode(xParInterp* p)
{
    U32 interp_val = p->interp;

    if (interp_val < 8)
    {
        return interp_val;
    }
    if (interp_val == xStrHash("ConstA"))
    {
        return 0;
    }
    if (interp_val == xStrHash("ConstB"))
    {
        return 1;
    }
    if (interp_val == xStrHash("Sine"))
    {
        return 4;
    }
    if (interp_val == xStrHash("Cosine"))
    {
        return 5;
    }
    if (interp_val == xStrHash("Linear"))
    {
        return 3;
    }
    if (interp_val == xStrHash("Step"))
    {
        return 7;
    }
    if (interp_val == xStrHash("Random"))
    {
        return 2;
    }
    return interp_val;
}

void xParEmitterInit(void* b, void* tasset)
{
    xParEmitterInit((xBase*)b, (xParEmitterAsset*)tasset);
}

void xParEmitterInit(xBase* b, xParEmitterAsset* pea)
{
    xLinkAsset* prop;
    xLinkAsset* t;
    S32 i;
    F32 vec_length;
    F32 temp_rate;
    F32 temp_oocull;
    U32 temp_psi;

    xParEmitter* bEmitter = (xParEmitter*)b;

    xBaseInit(bEmitter, (xBaseAsset*)pea);
    bEmitter->eventFunc = (xBaseEventCB)xParEmitterEventCB;
    bEmitter->tasset = pea;
    bEmitter->prop = (xParEmitterPropsAsset*)xSTFindAsset(pea->propID, NULL);
    if (bEmitter->prop == NULL)
    {
        bEmitter->prop = 0;
    }
    if (bEmitter->linkCount != 0)
    {
        bEmitter->link = bEmitter->link;
    }
    else
    {
        bEmitter->link = NULL;
    }
    prop = (xLinkAsset*)bEmitter->prop;
    bEmitter->emit_flags = pea->emit_flags;
    temp_psi = bEmitter->prop->parSysID;
    if (temp_psi != 0)
    {
        bEmitter->parSys = (xParSys*)zSceneFindObject(temp_psi);
    }
    else
    {
        bEmitter->parSys = NULL;
    }
    t = prop;
    bEmitter->attachTo = 0;
    bEmitter->emit_volume = 0;
    for (i = 0; i < 14; i++)
    {
        if (t->param[1] == t->param[2])
        {
            t->param[3] = 0U;
        }
        else
        {
            t->param[3] = (F32)xParInterpConvertInterpMode((xParInterp*)(t->param + 1));
        }
        t += 0x14;
    }
    bEmitter->rate_mode = (U8)prop->param[3];
    if (((U8)bEmitter->eventFunc == 2) && (prop->param[1] == prop->param[2]))
    {
        bEmitter->rate_mode = 0;
    }
    if (bEmitter->rate_mode == 2)
    {
        (bEmitter->prop->life).order();
    }
    if (bEmitter->rate_mode == 2)
    {
        temp_rate = ((prop->param[1] - prop->param[2]) * xurand()) + prop->param[2];
    }
    else
    {
        temp_rate = prop->param[1];
    }
    bEmitter->rate = temp_rate;
    bEmitter->rate_time = 0.0f;
    bEmitter->rate_fraction = 0.0f;
    bEmitter->rate_fraction_cull = 0.0f;
    if (pea->emit_flags & 2)
    {
        temp_oocull = 1.0f / pea->cull_dist_sqr;
    }
    else
    {
        temp_oocull = 0.0f;
    }
    bEmitter->oocull_distance_sqr = temp_oocull;
    bEmitter->emit_volume = 0;
    if ((pea->emit_type == eParEmitterOCircle) || (pea->emit_type == eParEmitterOCircleEdge))
    {
        vec_length = (pea->e_circle.dir).length2();
        if (vec_length < 0.001f)
        {
            pea->e_circle.dir = 0;
        }
        else
        {
            pea->e_circle.dir = 1.0f / xsqrt(vec_length);
        }
    }
    bEmitter->last_attach_loc += pea->e_circle.dir;
}

void xParEmitterSetup(xParEmitter* t)
{
    xParEmitterAsset* pea;
    xEnt* ent;

    if (t->parSys != NULL)
    {
        t->group = t->parSys->group;
    }
    if ((t->tasset->attachToID != 0) && (t->tasset->emit_type == eParEmitterOffsetPoint))
    {
        ent = (xEnt*)zSceneFindObject(t->tasset->attachToID);
        iModelTagSetup(&t->tag, ent->model->Data, *(F32*)&t->tasset->e_entbound,
                       (t->tasset->e_entbound).expand, (t->tasset->e_entbound).deflection);
    }
    ent = NULL;
    if (t->tasset->attachToID != 0)
    {
        ent = (xEnt*)zSceneFindObject(t->tasset->attachToID);
    }
    t->attachTo = ent;
    if (((t->tasset->emit_type != eParEmitterEntityBound) &&
         (t->tasset->emit_type != eParEmitterEntityBone)) &&
        (t->tasset->emit_type == eParEmitterVolume))
    {
        ent = (xEnt*)zSceneFindObject(t->tasset->attachToID);
        t->emit_volume = ent;
    }
    add_tweaks(*t);
    return;
}

void xParEmitterReset(xParEmitter* t)
{
    xBaseReset((xBase*)t, t->tasset);
    t->emit_flags = t->tasset->emit_flags;
}

S32 xParEmitterEventCB(xBase* to, xBase* from, U32 toEvent, F32* toParam, xBase* toParamWidget)
{
    xParEmitterCustomSettings sp8;

    switch ((S32)toEvent)
    {
    case eEventReset:
        xParEmitterReset((xParEmitter*)from);
        break;
    case eEventOn:
        *(U8*)(toEvent + 0x30) |= 1;
        break;
    case eEventOff:
        if (*(U8*)(toEvent + 0x30) & 1)
        {
            *(U8*)(toEvent + 0x30) = *(U8*)(toEvent + 0x30) ^ 1;
        }
        break;
    case eEventEmit:
        memset(&sp8, 0, 0x16C);
        xParEmitterEmitCustom((xParEmitter*)from, 0.033333335f, &sp8);
        break;
    }
    return 1;
}

xPar* xParEmitterEmitCustom(xParEmitter* p, F32 dt, xParEmitterCustomSettings* info)

{
    U8 emit_type;
    U32 custom_flags;
    xParEmitterAsset* p_tasset;

    custom_flags = info->custom_flags;
    p_tasset = p->tasset;
    if ((custom_flags & 0x1) != 0)
    {
        sSaveEmmiterSettings(p_tasset, p_tasset, 0.0);
        sSaveEmmiterPropSettings(p->prop, p->prop, 0.0);
    }
    if ((custom_flags & 0x100) != 0)
    {
        p_tasset->pos = info->pos;
    }
    if ((custom_flags & 0x10) != 0)
    {
        p->prop->value[0] = info->value[0];
    }
    if ((custom_flags & 0x2) != 0)
    {
        p->prop->life = info->life;
    }
    if ((custom_flags & 0x2000) != 0)
    {
        p->emit_volume = info->emit_volume;
    }
    if ((custom_flags & 0x4) != 0)
    {
        p->prop->size_birth = info->size_birth;
    }
    if ((custom_flags & 0x8) != 0)
    {
        p->prop->size_death = info->size_death;
    }
    if ((custom_flags & 0x200) != 0)
    {
        p_tasset->vel = info->vel;
        p->prop->vel = info->vel;
    }
    if ((custom_flags & 0x40) != 0)
    {
        p_tasset->vel_angle_variation = info->vel_angle_variation;
    }
    if ((custom_flags & 0x400) != 0)
    {
        p->prop->color_birth[0] = info->color_birth[0];
        p->prop->color_birth[1] = info->color_birth[1];
        p->prop->color_birth[2] = info->color_birth[2];
        p->prop->color_birth[3] = info->color_birth[3];
    }
    if ((custom_flags & 0x800) != 0)
    {
        p->prop->color_death[0] = info->color_death[0];
        p->prop->color_death[1] = info->color_death[1];
        p->prop->color_death[2] = info->color_death[2];
        p->prop->color_death[3] = info->color_death[3];
    }
    if ((custom_flags & 0x1000) != 0)
    {
        p_tasset = p->tasset;
        emit_type = p_tasset->emit_type;
        if ((emit_type == eParEmitterSphere) || (emit_type == eParEmitterSphereEdge3) ||
            (emit_type == eParEmitterSphereEdge2) || (emit_type == eParEmitterSphereEdge1) ||
            (emit_type == eParEmitterCircle) || (emit_type == eParEmitterCircleEdge) ||
            (emit_type == eParEmitterOCircle || (emit_type == eParEmitterOCircleEdge)))
        {
            *(F32*)&p_tasset->e_entbound = info->radius;
        }
    }
    if ((custom_flags & 0x1) != 0)
    {
        sSaveEmmiterSettings(p_tasset, p_tasset, 0.0);
        sSaveEmmiterPropSettings(p->prop, p->prop, 0.0);
    }
    return xParEmitterEmit(p, dt, dt);
}

U32 xParEmitterCull(xParEmitter* t, xPar* p)

{
    U32 c;
    xParEmitterAsset* tas;
    F32 vec_length;
    xVec3* temp_vec;
    xVec3* global_vec;

    temp_vec = 0;
    global_vec = 0;

    tas = t->tasset;
    if ((tas->emit_flags & 2) == 0)
    {
        c = 0;
    }
    else
    {
        global_vec = &(xglobals->camera.mat.pos);
        xVec3Sub(temp_vec, global_vec, &p->m_pos);
        vec_length = xVec3Length2(temp_vec);
        t->distance_to_cull_sqr = vec_length;
        if (tas->cull_mode == 3)
        {
            c = ((((tas->cull_dist_sqr) < vec_length) << 2) << 0x1c) >> 0x1e;
        }
        else
        {
            c = (((vec_length < (tas->cull_dist_sqr)) << 3) << 0x1c) >> 0x1f;
        }
    }
    return c;
}

F32 xParInterpCompute(S32 interp_mode, xParInterp* r, F32 time, S32 time_has_elapsed, F32 lastVal)

{
    F32 val;
    F32 val_0 = r->val[0];

    val = time;
    switch (interp_mode)
    {
    case 0:
        val = r->val[0];
        break;
    case 1:
        val = r->val[1];
        break;
    case 2:
        if (time_has_elapsed != 0)
        {
            val = xurand();
            val = ((r->val[1] - val_0) * xurand() + val_0);
        }
        break;
    case 3:
        if (0.0 < r->freq)
        {
            val = ((r->val[1] - r->val[0]) * (val / r->freq) + r->val[0]);
        }
        else
        {
            val = r->val[0];
        }
        break;
    case 4:
        val = isin((1.0 * (val * r->oofreq)));
        val = ((r->val[1] - val_0) * (1.0 * val + 1.0) + val_0);
        break;
    case 5:
        val = icos((1.0 * (val * r->oofreq)));
        val = ((r->val[1] - val_0) * (1.0 * val + 1.0) + val_0);
        break;
    case 7:
        if ((val * r->freq) < 0.0)
        {
            val = r->val[0];
        }
        else
        {
            val = r->val[1];
        }
    }
    return val;
}

xPar* xParEmitterEmitSetTexIdxs(xPar* p, xParSys* ps)
{
    U8 ps_birthMode;
    xParCmdTex* ps_cmdTex;

    ps_cmdTex = ps->group->m_cmdTex;
    if (ps_cmdTex == NULL)
    {
        return NULL;
    }
    ps_birthMode = ps_cmdTex->birthMode;
    if ((S32)ps_birthMode != 1)
    {
        if ((S32)ps_birthMode < 1)
        {
            if ((S32)ps_birthMode < 0)
            {
            }
            else
            {
                p->m_texIdx[0] = 0;
                p->m_texIdx[1] = 0;
            }
        }
        else if ((S32)ps_birthMode < 7)
        {
        }
    }
    else
    {
        p->m_texIdx[0] = (xrand() >> 0x11U) % ps_cmdTex->cols;
        p->m_texIdx[1] = (xrand() >> 0x11U) % ps_cmdTex->rows;
    }
    return p;
}

xPar* xParEmitterEmit(xParEmitter* pe, F32 emit_dt, F32 par_dt)
{
    xPar* p;
    xPar* last_p;
    xMat4x3* bone_mat;
    xParSys* ps;
    xParEmitterPropsAsset* prop;
    xParEmitterAsset* pea;
    xVec3 emitPosition;
    xVec3 bone_vel;
    xGroup* g;
    xEnt* attach_ent;

    F32 life;
    F32 size_birth;
    F32 size_death;

    S32 i;
    S32 c;
    S32 attachGroupTotal;
    S32 rate_has_elapsed;
    U32 attachGroupIndex;
    S32 count;
    S32 emitAgain;
    bool marker;
    S32 group_ptr_chk;
    U32 temp_maxPar;

    if (pe->parSys == NULL)
    {
        p = NULL;
    }
    else
    { // TODO: could probably be less nested
        p = NULL;
        pea = pe->tasset;
        prop = pe->prop;
        pe->rate_time = pe->rate_time + emit_dt;
        size_birth = pe->rate_time;
        if (pe->rate_time == 0.0)
        {
            pe->rate_time = 0.0;
        }
        while (pe->rate_time > prop->value[0].freq)
        {
            pe->rate_time = pe->rate_time - prop->value[0].freq;
        }
        size_birth = xParInterpCompute(pe->rate_mode, prop->value, pe->rate_time, 0, 0.0);
        pe->rate = size_birth;
        pe->rate_fraction = pe->rate_fraction + ((double)size_birth * emit_dt);
        pe->rate_fraction_cull = pe->rate_fraction_cull + (F32)((double)size_birth * emit_dt);
        size_birth = floorf(pe->rate_fraction);
        rate_has_elapsed = size_birth;
        if (rate_has_elapsed > 0)
        {
            pe->rate_fraction = pe->rate_fraction - rate_has_elapsed;
        }
        if (rate_has_elapsed == 0)
        {
            p = NULL;
        }
        else
        {
            ps = pe->parSys;
            if (ps == NULL)
            {
                p = NULL;
            }
            else
            {
                group_ptr_chk = *(S32*)(ps->group);
                if (group_ptr_chk == 0)
                {
                    p = NULL;
                }
                else
                {
                    temp_maxPar = ps->tasset->maxPar;
                    if ((temp_maxPar == 0) || (ps->group->m_num_of_particles < (S32)temp_maxPar))
                    {
                        if ((temp_maxPar == 0) ||
                            (ps->group->m_num_of_particles < (S32)temp_maxPar))
                        {
                            if ((temp_maxPar != 0) &&
                                ((S32)temp_maxPar <=
                                 ps->group->m_num_of_particles + rate_has_elapsed))
                            {
                                rate_has_elapsed = temp_maxPar - ps->group->m_num_of_particles;
                            }
                            g = (xGroup*)pe->attachTo;
                            count = 0xFFFFFFFF;
                            attachGroupTotal = 0xFFFFFFFF;
                            while (emitAgain)
                            {
                                emitAgain = false;
                                marker = false;
                                attach_ent = NULL;
                                if ((g != (xGroup*)0x0) && (g->baseType == '\x11'))
                                {
                                    if (count == 0xFFFFFFFF)
                                    {
                                        attachGroupTotal = xGroupGetCount((xGroup*)g);
                                        count = 0;
                                    }
                                    if (g->asset->groupFlags & 1)
                                    {
                                        attachGroupIndex = xrand();
                                        attach_ent = (xEnt*)xGroupGetItemPtr(
                                            g, (S32)attachGroupIndex % (S32)attachGroupTotal);
                                        if (attach_ent == NULL)
                                        {
                                            attachGroupIndex = xGroupGetItem(
                                                g, (S32)attachGroupIndex % attachGroupTotal);
                                            attach_ent = (xEnt*)xSTFindAsset(attachGroupIndex, 0);
                                            if (attach_ent != NULL)
                                            {
                                                marker = true;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        attach_ent = (xEnt*)xGroupGetItemPtr(g, count);
                                        if (attach_ent == NULL)
                                        {
                                            attachGroupIndex = xGroupGetItem(g, count);
                                            attach_ent = (xEnt*)xSTFindAsset(attachGroupIndex, 0);
                                            if (attach_ent != NULL)
                                            {
                                                marker = true;
                                            }
                                        }
                                        count = count + 1;
                                        emitAgain = count % attachGroupTotal;
                                    }
                                }
                                if (attach_ent == NULL)
                                {
                                    emitPosition = pea->pos;
                                }
                                else if ((attach_ent->baseType) == '\r')
                                {
                                    attach_ent = NULL;
                                }
                                else if (marker)
                                {
                                    emitPosition = pea->pos;
                                    attach_ent = NULL;
                                }
                                else
                                {
                                    if ((xEntValidType((attach_ent->baseType))) &&
                                        (attach_ent->model != (xModelInstance*)0x0))
                                    {
                                        emitPosition += *xEntGetPos(attach_ent);
                                    }
                                    else
                                    {
                                        emitPosition = 0;
                                        attach_ent = NULL;
                                    }
                                }
                                if ((((pe->emit_flags & 0x10) == 0) || (attach_ent == NULL)) ||
                                    (xEntIsVisible(attach_ent) != 0))
                                {
                                    bone_mat = (xMat4x3*)0x0;
                                    if ((pea->emit_type == eParEmitterEntityBone) &&
                                        (attach_ent != NULL))
                                    {
                                        bone_mat = xParEmitterTransformEntBone(
                                            emitPosition, bone_vel, *pea, *attach_ent);
                                    }
                                    if ((pe->emit_flags & 8) == 0)
                                    {
                                        bone_vel -= (bone_vel * par_dt);
                                    }
                                    else
                                    {
                                        bone_vel *= 2.0;
                                        size_birth = emitPosition.length2();
                                        bone_vel += 1.0;
                                        emitPosition += 1.0;

                                        if (0 < emit_dt)
                                        {
                                            // May need a vector operation here
                                        }
                                    }
                                    for (i = 0; i < rate_has_elapsed; i++)
                                    {
                                        p = xParGroupAddPar(ps->group);
                                        if (p == (xPar*)0x0)
                                        {
                                            emitAgain = false;
                                        }
                                        else
                                        {
                                            life =
                                                xParInterpCompute((prop->life).interp, &prop->life,
                                                                  pe->rate_time, 1, 0.0);
                                            size_birth =
                                                xParInterpCompute((prop->size_birth).interp,
                                                                  &prop->size_birth, pe->rate_time,
                                                                  1, 0.0);
                                            size_death =
                                                xParInterpCompute((prop->size_death).interp,
                                                                  &prop->size_death, pe->rate_time,
                                                                  1, 0.0);
                                            p->m_lifetime = life;
                                            p->totalLifespan = life;
                                            p->m_size = size_birth;
                                            if (size_death == size_birth)
                                            {
                                                p->m_sizeVel = 0.0;
                                            }
                                            else
                                            {
                                                p->m_sizeVel = (size_birth - p->m_size) / life;
                                            }
                                            p->m_flag = '\0';
                                            p->m_rotdeg[0] = pe->rot[0];
                                            p->m_rotdeg[1] = pe->rot[1];
                                            p->m_rotdeg[2] = pe->rot[2];
                                            last_p = p;
                                            for (c = 0; c < 4; c += 1)
                                            {
                                                size_birth =
                                                    xParInterpCompute(prop->color_birth[0].interp,
                                                                      prop->color_birth,
                                                                      pe->rate_time, 1, 0.0);
                                                size_death =
                                                    xParInterpCompute(prop->color_death[0].interp,
                                                                      prop->color_death,
                                                                      pe->rate_time, 1, 0.0);

                                                last_p->m_cfl[0] = size_birth;

                                                last_p->m_c[c] = (U8)(int)size_birth;

                                                last_p->m_cvel[0] =
                                                    (size_death - size_birth) / life;
                                                last_p = (xPar*)&last_p->m_prev;
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
                                            case eParEmitterSphereEdge2:
                                                xParEmitterEmitSphereEdge(p, pea, par_dt,
                                                                          eParEmitterSphereEdge2);
                                                break;
                                            case eParEmitterSphereEdge3:
                                                xParEmitterEmitSphereEdge(p, pea, par_dt,
                                                                          eParEmitterSphereEdge3);
                                                break;
                                            case eParEmitterSphereEdge1:
                                                xParEmitterEmitSphereEdge(p, pea, par_dt,
                                                                          eParEmitterSphereEdge1);
                                                break;
                                            case eParEmitterSphere:
                                                xParEmitterEmitSphere(p, pea, par_dt);
                                                break;

                                            case eParEmitterVolume:
                                                attach_ent = (xEnt*)pe->emit_volume;
                                                if (attach_ent != NULL)
                                                {
                                                    if ((attach_ent->baseType) == '\x1d')
                                                    {
                                                        xParEmitterEmitVolume(p, pea, par_dt,
                                                                              (xVolume*)attach_ent);
                                                    }
                                                    else
                                                    {
                                                        xParEmitterEmitEntity(p, pea, par_dt,
                                                                              attach_ent);
                                                    }
                                                }
                                                break;

                                            case eParEmitterOffsetPoint:
                                                xParEmitterEmitOffsetPoint(pe, p, pea, attach_ent);
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
                                                if (bone_mat != 0)
                                                {
                                                    p->m_vel += bone_vel;
                                                    xParEmitterEmitEntBone(p, pea, par_dt,
                                                                           *bone_mat);
                                                }
                                                break;
                                            case eParEmitterEntityBound:
                                                if (attach_ent != NULL)
                                                {
                                                    xParEmitterEmitEntBound(p, pea, par_dt,
                                                                            attach_ent);
                                                }
                                            }
                                            p->m_vel += bone_vel;
                                            c = xParEmitterCull(pe, p);
                                            if (c != 0)
                                            {
                                                xParGroupKillPar(ps->group, p);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            p = (xPar*)0x0;
                        }
                    }
                    else
                    {
                        p = (xPar*)0x0;
                    }
                }
            }
        }
    }
    return p;
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

void xParEmitterEmit(xParEmitter* pe, F32 dt)
{
    xParEmitterEmit(pe, dt, dt);
}

void xParInterp::operator=(const xParInterp& p)
{
    this->interp = p.interp;
    this->val[0] = p.val[0];
    this->val[1] = p.val[1];
    this->freq = p.freq;
    this->oofreq = p.oofreq;
}

void sSaveEmmiterSettings(xParEmitterAsset* a, xParEmitterAsset* b, F32 c)
{
}

void sSaveEmmiterPropSettings(xParEmitterPropsAsset* a, xParEmitterPropsAsset* b, F32 c)
{
}
