#include "xParSys.h"

#include "zScene.h"
#include "xRenderState.h"
#include "zRenderState.h"
#include "zGlobals.h"
#include "xPtankPool.h"

#include <types.h>

static xVec3 par_offset_right;
static xVec3 par_offset_up;

static void render_par_sprite(void* data, xParGroup* ps);

static xParSysInfo sParSysInfo[7] = {
    { XPARSYSINFO_TYPE_SPRITE, render_par_sprite },
    { XPARSYSINFO_TYPE_STREAK, iParMgrRenderParSys_Streak },
    { XPARSYSINFO_TYPE_FLAT, iParMgrRenderParSys_Flat },
    { XPARSYSINFO_TYPE_STATIC, iParMgrRenderParSys_Static },
    { XPARSYSINFO_TYPE_GROUND, iParMgrRenderParSys_Ground },
    { XPARSYSINFO_TYPE_QUADSTREAK, iParMgrRenderParSys_QuadStreak },
    { XPARSYSINFO_TYPE_INVSTREAK, iParMgrRenderParSys_InvStreak }
};

static const S32 sBlendTable[11] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };

static void par_sprite_begin()
{
    par_offset_right = globals.camera.mat.right * 0.5f;
    par_offset_up = globals.camera.mat.up * 0.5f;
}

static void par_sprite_update(xParSys& sys, xParGroup& group)
{
    if (!using_ptank_render(*sys.tasset))
    {
        return;
    }

    U32 pivot = sys.tasset->parFlags;
    xVec3 offset_right;
    if (pivot & 0x8)
    {
        offset_right = par_offset_right;
    }
    else if (pivot & 0x20)
    {   
        offset_right = -par_offset_right;
    }
    else
    {
        offset_right = 0.0f;
    }
    
    xVec3 offset_up;
    if (pivot & 0x10)
    {
        offset_up = -par_offset_up;
    }
    else if (pivot & 0x40)
    {   
        offset_up = par_offset_up;
    }
    else
    {
        offset_up = 0.0f;
    }
    
    ptank_pool__pos_color_size_uv2 pool;
    pool.rs.texture = sys.txtr_particle;
    pool.rs.src_blend = sBlendTable[sys.tasset->renderSrcBlendMode];
    pool.rs.dst_blend = sBlendTable[sys.tasset->renderDstBlendMode];
    pool.rs.flags = 0x0;
    pool.reset();
    
    xParCmdTex* tex = group.m_cmdTex;
    xPar* p = group.m_root;
    while (p != NULL)
    {
        RwSphere testSphere;
        testSphere.center = *(RwV3d*)&p->m_pos;
        testSphere.radius = p->m_size;
        
        if (RwCameraFrustumTestSphere(globals.camera.lo_cam, &testSphere))
        {
            pool.next();
            
            if (!pool.valid())
            {
                break;
            }
            
            xVec3& loc = *pool.pos;
            loc = p->m_pos;
            loc += offset_right * p->m_size;
            loc += offset_up * p->m_size;
    
            pool.color->r = p->m_c[0];
            pool.color->g = p->m_c[1];
            pool.color->b = p->m_c[2];
            pool.color->a = p->m_c[3];
    
            pool.size->assign(p->m_size, p->m_size);
    
            if (tex)
            {
                pool.uv[0].x = p->m_texIdx[0] * tex->unit_width + tex->x1;
                pool.uv[0].y = p->m_texIdx[1] * tex->unit_height + tex->y1;
                
                pool.uv[1].x = (p->m_texIdx[0] + 1) * tex->unit_width + tex->x1;
                pool.uv[1].y = (p->m_texIdx[1] + 1) * tex->unit_height + tex->y1;
            }
            else
            {
                pool.uv[0].assign(0.0f, 0.0f);
                pool.uv[1].assign(1.0f, 1.0f);
            }
        }
        
        p = p->m_next;
    }

    pool.flush();
}

static void render_par_sprite(void* data, xParGroup* ps)
{
    if (!using_ptank_render(*((xParSys*)data)->tasset))
    {
        iParMgrRenderParSys_Sprite(data, ps);
    }
}

void xParCmdTexInit(xParCmdTex* tex)
{
    tex->unit_count = tex->rows * tex->cols;
    tex->unit_width = (tex->x2 - tex->x1) / tex->cols;
    tex->unit_height = (tex->y2 - tex->y1) / tex->rows;
}

void xParSysInit(void* b, void* tasset)
{
    xParSysInit((xBase*)b, (xParSysAsset*)tasset);
}

void xParSysInit(xBase* b, xParSysAsset* tasset)
{
    xParSys* t = (xParSys*)b;

    xBaseInit(b, tasset);
    t->eventFunc = &xParSysEventCB;
    t->tasset = tasset;

    if (t->linkCount > 0)
    {
        t->link = (xLinkAsset*)((char*)&t->tasset[1] + tasset->cmdSize);
    }
    else
    {
        t->link = NULL;
    }

    t->visible = tasset->parFlags & 0x1;
    t->cmdCount = tasset->cmdCount;
    if (t->cmdCount)
    {
        t->cmd = (xParCmd*)xMemAlloc(gActiveHeap, t->cmdCount * sizeof(xParCmd), FALSE);
    }
    else
    {
        t->cmd = NULL;
    }

    // Some arcane magic required due to how the asset command data is packed
    U32 i;
    U8* cmdPtr = (U8*)&tasset[1];
    for (i = 0; i < t->cmdCount; i++)
    {
        *(U32*)(&t->cmd[i]) = TRUE;
        *(U32*)(&t->cmd[i].tasset) = (U32)cmdPtr;
        cmdPtr += xParCmdGetSize(*(U32*)cmdPtr);
    }

    t->group = (xParGroup*)xMemAlloc(gActiveHeap, sizeof(xParGroup), FALSE);
    xParGroupInit(t->group);
    xParGroupSetPriority(t->group, tasset->priority);
    xParGroupRegister(t->group);
    xParGroupSetAging(t->group, (((tasset->parFlags >> 1) & 0x1) ^ 0x1) & 0xFF);
    xParGroupSetVisibility(t->group, t->visible);
    xParGroupSetBack2Life(t->group,(((tasset->parFlags >> 2) & 0x1) ^ 0x1) & 0xFF);
    t->parent = NULL;

    for (i = 0; i < t->cmdCount; i++)
    {
        if (t->cmd[i].tasset->type == XPARCMD_TYPE_TEX)
        {
            t->group->m_cmdTex = (xParCmdTex*)t->cmd[i].tasset;
            xParCmdTexInit(t->group->m_cmdTex);
            break;
        }
    }

    t->group->draw = sParSysInfo[t->tasset->renderFunc].func;
}

void xParSysSetup(xParSys* t)
{
    if (t != NULL && t->tasset != NULL && t->tasset->parentParSysID != 0x0)
    {
        t->parent = (xParSys*)zSceneFindObject(t->tasset->parentParSysID);
    }
    t->txtr_particle = (RwTexture*)xSTFindAsset(t->tasset->textureID, 0);
}

void xParSysReset(xParSys* t)
{
    xBaseReset(t, t->tasset);

    if (t->group != NULL)
    {
        xParGroupKillAllParticles(t->group);

        t->visible = t->tasset->parFlags & 0x1;

        xParGroupSetAging(t->group, (((t->tasset->parFlags >> 1) & 0x1) ^ 0x1) & 0xFF);
        xParGroupSetVisibility(t->group, t->visible);
        xParGroupSetBack2Life(t->group,(((t->tasset->parFlags >> 2) & 0x1) ^ 0x1) & 0xFF);
    }
}

void xParSysExit(xParSys* t)
{
    if (t->group != NULL)
    {
        xParGroupKillAllParticles(t->group);
        xParGroupUnregister(t->group);
    }
}

S32 xParSysEventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam, xBase* toParamWidget)
{
    xParSys* t = (xParSys*)to;

    switch (toEvent)
    {
    case eEventReset:
        xParSysReset(t);
        break;
    case eEventVisible:
        t->visible = TRUE;
        if (t->group != NULL)
        {
            xParGroupSetVisibility(t->group, t->visible);
        }
        break;
    case eEventInvisible:
        t->visible = FALSE;
        if (t->group != NULL)
        {
            xParGroupSetVisibility(t->group, t->visible);
        }
        break;
    case eEventOn:
        if (t->group != NULL)
        {
            xParGroupSetActive(t->group, TRUE);
        }
        break;
    case eEventOff:
        if (t->group != NULL)
        {
            xParGroupSetActive(t->group, FALSE);
        }
        break;
    }

    return TRUE;
}

static void xParGroupUpdateR(xParSys* s, xParGroup* g, F32 dt);
static void xParGroupUpdate(xParSys* s, xParGroup* g, F32 dt);
void xParSysUpdate(xBase* to, xScene* scn, F32 dt)
{
    xParSys* s = (xParSys*)to;
    xParSys* parent = s->parent;
    if (s->tasset->renderFunc == NULL)
    {
        par_sprite_begin();
    }

    xParGroup* g = s->group;
    while (g != NULL)
    {
        if (g->m_active)
        {
            if (parent)
            {
                xParGroupUpdateR(parent, g, dt);
            }

            if (g->m_alive)
            {
                xParGroupUpdate(s, g, dt);
            }
        }

        xParGroupAnimate(g, dt);
        if (g->m_num_of_particles > 0 && !s->tasset->renderFunc)
        {
            par_sprite_update(*s, *g);
        }

        g = g->m_next;
    }
}

static void xParGroupUpdateR(xParSys* s, xParGroup* g, F32 dt)
{
    if (s->parent != NULL)
    {
        xParGroupUpdateR(s->parent, g, dt);
    }

    if (!s->group->m_active)
    {
        return;
    }

    for (U32 i = 0; i < s->cmdCount; i++)
    {
        xParCmd* cmd = &s->cmd[i];
        if (cmd != NULL && cmd->tasset != NULL)
        {
            void (*func)(xParCmd*, xParGroup*, F32) = xParCmdGetUpdateFunc(cmd->tasset->type);
            if (func != NULL)
            {
                func(cmd, g, dt);
            }
        }
    }
}

static void xParGroupUpdate(xParSys* s, xParGroup* g, F32 dt)
{
    for (U32 i = 0; i < s->cmdCount; i++)
    {
        xParCmd* cmd = &s->cmd[i];
        if (cmd != NULL && cmd->tasset != NULL)
        {
            void (*func)(xParCmd*, xParGroup*, F32) = xParCmdGetUpdateFunc(cmd->tasset->type);
            if (func != NULL)
            {
                func(cmd, g, dt);
            }
        }
    }
}

void xParSysRender(xBase* b)
{
    xParSys* s = (xParSys*)b;
    zRenderState(SDRS_Particles);
    
    xParGroup* g = s->group;
    while (g != NULL)
    {
        if (g->m_active && g->m_visible && g->m_alive && !g->m_culled && g->draw != NULL)
        {
            xRenderStateSetTexture(s->txtr_particle);
            xRenderStateSetSrcBlendMode(s->tasset->renderSrcBlendMode);
            xRenderStateSetDstBlendMode(s->tasset->renderDstBlendMode);
            g->draw(b, g);
        }

        g = g->m_next;
    }
}
