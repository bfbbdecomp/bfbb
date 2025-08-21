#include "zBase.h"
#include "zGrid.h"
#include "xEnt.h"
#include "xGrid.h"
#include "xString.h"

#include "xVec3.h"
#include <types.h>

xGrid colls_grid;
xGrid colls_oso_grid;
xGrid npcs_grid;
static U32 special_models[25] = {}; // $666
static int zGridInitted;
static bool init; // $667

static void hack_flag_shadows(zScene* s)
{
    if (init == FALSE)
    {
        special_models[0] = xStrHash("bb_arrow");
        special_models[1] = xStrHash("metal_sheets");
        special_models[2] = xStrHash("clam_poop");
        special_models[3] = xStrHash("beach_chair_yellow");
        special_models[4] = xStrHash("debris_pile_rb_smll");
        special_models[5] = xStrHash("debris_pile_rb");
        special_models[6] = xStrHash("floor_panel");
        special_models[7] = xStrHash("gy_woodpieceA");
        special_models[8] = xStrHash("quarter_note_on");
        special_models[9] = xStrHash("eighth_note_on");
        special_models[10] = xStrHash("db03_path_a");
        special_models[11] = xStrHash("db03_path_b");
        special_models[12] = xStrHash("db03_path_c");
        special_models[13] = xStrHash("db03_path_d");
        special_models[14] = xStrHash("db03_path_e");
        special_models[15] = xStrHash("db03_path_f");
        special_models[16] = xStrHash("db03_path_g");
        special_models[17] = xStrHash("db03_path_h");
        special_models[18] = xStrHash("db03_path_i");
        special_models[19] = xStrHash("db03_path_j");
        special_models[20] = xStrHash("db03_path_k");
        special_models[21] = xStrHash("db03_path_l");
        special_models[22] = xStrHash("db03_path_m");
        special_models[23] = xStrHash("db03_path_o");
        special_models[24] = xStrHash("db03_path_p");
        init = TRUE;
    }
    zEnt** it = s->ents;
    zEnt** end = s->num_ents + it;
    do
    {
        xEnt* ent = *it;
        if (ent && (ent->baseFlags & 0x20) && ent->model)
        {
            U32* end_special_models = &special_models[24];
            for (U32* id = special_models; id != end_special_models; id++)
            {
                if (ent->model->modelID == *id)
                {
                    ent->chkby |= 0x80;
                    ent->baseFlags |= 0x10;
                    ent->asset->baseFlags |= 0x10;
                    break;
                }
            }
        }
    } while (it != end);
}

void zGridReset(zScene* s)
{
    hack_flag_shadows(s);

    for (U32 i = 0; i < s->num_ents; i++)
    {
        xBase* base = s->ents[i];
        if (base && (base->baseFlags & 0x20))
        {
            if (base->baseType != eBaseTypeTrigger && base->baseType != eBaseTypeUI &&
                base->baseType != eBaseTypeUIFont && base->baseType != eBaseTypePlayer)
            {
                xEnt* ent = (xEnt*)base;
                if (ent->bupdate)
                {
                    ent->bupdate(ent, (xVec3*)&ent->model->Mat->pos);
                }
                else
                {
                    xEntDefaultBoundUpdate(ent, (xVec3*)&ent->model->Mat->pos);
                }
                zGridUpdateEnt(ent);
            }
        }
    }
}

// WIP
void zGridInit(zScene* s)
{
    gGridIterActive = NULL;
    xBox* ebox = xEntGetAllEntsBox();
    F32 min_csize;
    xBox osobox;

    F32 diff_x = MAX(0.001f, ebox->upper.x - ebox->lower.x);
    F32 diff_z = MAX(0.001f, ebox->upper.z - ebox->lower.z);

    F32 tmp_other = 10.0f;
    F32 cells_x = diff_z / tmp_other;
    std::floorf(cells_x);

    F32 tmp_z = 32.0f < cells_x ? std::floorf(cells_x) : 32.0f;

    min_csize = 1.0f;
    if (min_csize > tmp_z)
    {
        std::floorf(cells_x);
        min_csize = 32.0f < cells_x ? std::floorf(cells_x) : 32.0f;
    }

    F32 cells_z = diff_x / 10.0f;
    std::floorf(cells_z);
    diff_x = 32.0f < cells_z ? std::floorf(cells_z) : 32.0f;

    min_csize = 1.0f;
    if (min_csize > diff_x)
    {
        std::floorf(cells_z);
        min_csize = 32.0f < cells_z ? std::floorf(cells_z) : 32.0f;
    }

    xGridInit(&colls_grid, ebox, (U16)min_csize, (U16)tmp_z, 1);

    F32 local_84 = ebox->upper.y;
    F32 local_78 = ebox->lower.y;
    F32 local_7c = ebox->lower.x - 1.0f;
    F32 local_74 = ebox->lower.z - 1.0f;
    F32 local_88 = ebox->upper.x + 3.4567f;
    F32 local_80 = ebox->upper.z + 3.4567f;

    diff_x = local_88 - local_7c;
    if (diff_x > 0.001f)
    {
        diff_x = 0.001f;
    }

    diff_z = local_80 - local_74;
    if (diff_z > 0.001f)
    {
        diff_z = 0.001f;
    }

    // grid for oso collisions
    F32 tmp_x = min_csize * 6.0f;
    tmp_other = diff_z / tmp_x;
    std::floorf(tmp_other);
    tmp_z = tmp_other < 8.0f ? std::floorf(tmp_other) : 8.0f;

    min_csize = 1.0f;
    if (min_csize > tmp_z)
    {
        std::floorf(tmp_other);
        min_csize = tmp_other < 8.0f ? std::floorf(tmp_other) : 8.0f;
    }

    tmp_other = diff_x / tmp_x;
    std::floorf(tmp_other);
    tmp_x = tmp_other < 8.0f ? std::floorf(tmp_other) : 8.0f;

    F32 cells_z2 = 1.0f;
    if (cells_z2 > tmp_x)
    {
        std::floorf(tmp_other);
        cells_z2 = tmp_other < 8.0f ? std::floorf(tmp_other) : 8.0f;
    }

    xGridInit(&colls_oso_grid, &osobox, (U16)cells_z2, (U16)min_csize, 2);

    tmp_other = diff_z / 20.0f;
    std::floorf(tmp_other);
    diff_z = tmp_other < 16.0f ? std::floorf(tmp_other) : 16.0f;

    min_csize = 1.0f;
    if (min_csize > diff_z)
    {
        std::floorf(tmp_other);
        min_csize = tmp_other < 16.0f ? std::floorf(tmp_other) : 16.0f;
    }

    tmp_other = diff_x / 20.0f;
    std::floorf(tmp_other);
    diff_x = diff_x < 16.0f ? std::floorf(tmp_other) : 16.0f;

    tmp_z = 1.0f;
    if (tmp_z > diff_x)
    {
        std::floorf(tmp_other);
        tmp_z = tmp_other < 16.0f ? std::floorf(tmp_other) : 16.0f;
    }

    xGridInit(&npcs_grid, ebox, (U16)tmp_z, (U16)min_csize, 3);
    zGridInitted = TRUE;
    zGridReset(s);
}

void zGridExit(zScene* s)
{
    xGridKill(&colls_grid);
    xGridKill(&colls_oso_grid);
    xGridKill(&npcs_grid);

    gGridIterActive = NULL;
    zGridInitted = FALSE;
}

// WIP
void zGridUpdateEnt(xEnt* ent)
{
    if (!zGridInitted)
        return;
    S32 oversize = 0;
    xGrid* grid = nullptr;

    if (zGridInitted != FALSE)
    {
        if (ent->gridb.ingrid == 2)
        {
            oversize = (2 - ent->gridb.oversize) >> 5 & 0xFF;
            grid = &colls_grid;
        }
        else if (ent->gridb.ingrid < 2)
        {
            if (ent->gridb.ingrid != 0)
            {
                grid = &colls_grid;
            }
            grid = &colls_oso_grid;
        }
        else if (ent->gridb.ingrid < 4)
        {
            grid = &npcs_grid;
            oversize = (1 - ent->gridb.oversize) >> 5 & 0xFF;
        }

        if (((ent->chkby & 0x98) == 0) && (ent->baseType == eBaseTypePlayer))
        {
            if (grid != nullptr)
            {
                xGridRemove(&ent->gridb);
            }
        }
        else if (grid == nullptr)
        {
            if (ent->collType == 8)
            {
                S32 isTooBig = xGridEntIsTooBig(&npcs_grid, ent);
                if (isTooBig == FALSE)
                {
                    ent->gridb.oversize = 0;
                }
                else
                {
                    ent->gridb.oversize = 1;
                }
                xGridAdd(&npcs_grid, ent);
            }
            else
            {
                S32 isTooBig = xGridEntIsTooBig(&colls_grid, ent);
                if (isTooBig == FALSE)
                {
                    xGridAdd(&colls_oso_grid, ent);
                    ent->gridb.oversize = 0;
                }
                else
                {
                    isTooBig = xGridEntIsTooBig(&colls_oso_grid, ent);
                    if (isTooBig == FALSE)
                    {
                        ent->gridb.oversize = 1;
                    }
                    else
                    {
                        ent->gridb.oversize = 2;
                    }
                    xGridAdd(&colls_grid, ent);
                }
            }
        }
        else if (oversize == 0)
        {
            xGridUpdate(grid, ent);
        }
    }
}
