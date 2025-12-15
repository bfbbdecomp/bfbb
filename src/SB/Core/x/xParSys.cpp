#include "xParSys.h"

#include <types.h>
#include "zScene.h"

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
