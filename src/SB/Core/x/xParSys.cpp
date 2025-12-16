#include "xParSys.h"

#include "zScene.h"
#include "xRenderState.h"
#include "zRenderState.h"

#include <types.h>

static xVec3 par_offset_right;
static xVec3 par_offset_up;

static xParSysInfo sParSysInfo[7];

static S32 sBlendTable[11] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };

static void par_sprite_begin()
{
}

static void render_par_sprite(void* data, xParGroup* ps)
{
    if (using_ptank_render((*(xParSysAsset*)&ps->m_culled)) == 0)
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
        // TODO: is this a compiler scheduling issue or a true mismatch?
        t->link = (xLinkAsset*)((char*)t->tasset + tasset->cmdSize + sizeof(xParSysAsset));
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
    if (t != 0 && t->link != 0 && t->link->param[1])
    {
        t->parent = (xParSys*)zSceneFindObject(t->cmd->flag);
    }
    t->parent = (xParSys*)xSTFindAsset(t->cmd->flag, 0);
    t->parent = t->parent;
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
