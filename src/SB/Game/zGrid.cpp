#include "zBase.h"
#include "zGrid.h"
#include "xEnt.h"
#include "xGrid.h"
#include "xString.h"

#include "xVec3.h"
#include <types.h>

static void hack_flag_shadows(zScene* s)
{
    static U32 special_models[25] = {
        xStrHash("bb_arrow"),
        xStrHash("metal_sheets"),
        xStrHash("clam_poop"),
        xStrHash("beach_chair_yellow"),
        xStrHash("debris_pile_rb_smll"),
        xStrHash("debris_pile_rb"),
        xStrHash("floor_panel"),
        xStrHash("gy_woodpieceA"),
        xStrHash("quarter_note_on"),
        xStrHash("eighth_note_on"),
        xStrHash("db03_path_a"),
        xStrHash("db03_path_b"),
        xStrHash("db03_path_c"),
        xStrHash("db03_path_d"),
        xStrHash("db03_path_e"),
        xStrHash("db03_path_f"),
        xStrHash("db03_path_g"),
        xStrHash("db03_path_h"),
        xStrHash("db03_path_i"),
        xStrHash("db03_path_j"),
        xStrHash("db03_path_k"),
        xStrHash("db03_path_l"),
        xStrHash("db03_path_m"),
        xStrHash("db03_path_o"),
        xStrHash("db03_path_p"),
    }; // non-matching: stb happens too early?

    zEnt** it = s->ents;
    zEnt** end = s->ents + s->num_ents;

    while (it != end)
    {
        // non-matching: extra `mr` instruction?
        xEnt* ent = *it;
        if (ent && (ent->baseFlags & 0x20) && ent->asset)
        {
            U32* id = special_models;
            U32* end_special_models = id + 25;

            while (id != end_special_models)
            {
                if (ent->asset->modelInfoID == *id)
                {
                    ent->chkby |= 0x80;
                    ent->baseFlags |= 0x10;
                    ent->asset->baseFlags |= 0x10;
                    break;
                }
                id++;
            }
        }
        it++;
    }
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

// WIP, the MIN/MAX stuff seem like they should be CLAMP
// but the codegen is different. Also, there are a bunch
// of local vars here currently that weren't in the dwarf.
// All the dwarf had was ebox, min_csize and osobox.
void zGridInit(zScene* s)
{
    gGridIterActive = NULL;
    xBox* ebox = xEntGetAllEntsBox();
    F32 min_csize;
    xBox osobox;

    F32 diff_x = MAX(0.001f, ebox->upper.x - ebox->lower.x);
    F32 diff_z = MAX(0.001f, ebox->upper.z - ebox->lower.z);

    F32 cells_x = diff_z / 10.0f;
    F32 tmp_z = MIN(32.0f, std::floorf(cells_x));

    min_csize = 1.0f;
    if (min_csize > tmp_z)
    {
        min_csize = MIN(32.0f, std::floorf(cells_x));
    }

    F32 cells_z = diff_x / 10.0f;
    diff_x = MIN(32.0f, std::floorf(cells_z));

    min_csize = 1.0f;
    if (min_csize > diff_x)
    {
        min_csize = MIN(32.0f, std::floorf(cells_z));
    }

    xGridInit(&colls_grid, ebox, (U16)min_csize, (U16)tmp_z, 1);

    // non-matching: missing a bunch of lwz, lfs and stw instructions,
    // and ghidra has a few local variables that *appear* unused

    F32 local_7c = ebox->lower.x - 1.0f;
    F32 local_74 = ebox->lower.z - 1.0f;

    diff_x = (ebox->upper.x + 3.4567f) - local_7c;
    if (diff_x > 0.001f)
        diff_x = 0.001f;

    diff_z = (ebox->upper.z + 3.4567f) - local_74;
    if (diff_z > 0.001f)
        diff_z = 0.001f;

    F32 tmp_x = min_csize * 6.0f;
    F32 tmp_other = diff_z / tmp_x;
    tmp_z = MIN(8.0f, std::floorf(tmp_other));

    min_csize = 1.0f;
    if (min_csize > tmp_z)
    {
        min_csize = MIN(8.0f, std::floorf(tmp_other));
    }

    tmp_other = diff_x / tmp_x;
    tmp_x = MIN(8.0f, std::floorf(tmp_other));

    F32 cells_z2 = 1.0f;
    if (cells_z2 > tmp_x)
    {
        cells_z2 = MIN(8.0f, std::floorf(tmp_other));
    }

    xGridInit(&colls_oso_grid, &osobox, (U16)cells_z2, (U16)min_csize, 2);

    tmp_other = diff_z / 20.0f;
    diff_z = MIN(16.0f, std::floorf(tmp_other));

    min_csize = 1.0f;
    if (min_csize > diff_z)
    {
        min_csize = MIN(16.0f, std::floorf(tmp_other));
    }

    tmp_other = diff_x / 20.0f;
    diff_x = MIN(16.0f, std::floorf(tmp_other));

    tmp_z = 1.0f;
    if (tmp_z > diff_x)
    {
        tmp_z = MIN(16.0f, std::floorf(tmp_other));
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
    xGrid* grid = NULL;

    // case 2 and 3 need to use `cntlzw` but are `mr` currently
    switch (ent->gridb.ingrid)
    {
    case 1:
        grid = &colls_grid;
        break;
    case 2:
        oversize = (2 - ent->gridb.oversize) >> 5 & 0xFF;
        grid = &colls_oso_grid;
        break;
    case 3:
        oversize = (1 - ent->gridb.oversize) >> 5 & 0xFF;
        grid = &npcs_grid;
        break;
    default:
        break;
    }

    if ((ent->chkby & 0x98) == 0)
    {
        if ((ent->baseType == eBaseTypePickup) && (grid != NULL))
        {
            if (oversize == 0)
            {
                xGridUpdate(grid, ent);
            }
            else if (ent->collType == XENT_COLLTYPE_NPC)
            {
                oversize = xGridEntIsTooBig(&npcs_grid, ent);
                if (oversize)
                {
                    ent->gridb.oversize = 1;
                }
                else
                {
                    ent->gridb.oversize = 0;
                }
                xGridAdd(&npcs_grid, ent);
            }
            else
            {
                oversize = xGridEntIsTooBig(&colls_grid, ent);
                if (oversize)
                {
                    oversize = xGridEntIsTooBig(&colls_oso_grid, ent);
                    if (oversize)
                    {
                        ent->gridb.oversize = 2;
                    }
                    else
                    {
                        ent->gridb.oversize = 1;
                    }
                    xGridAdd(&colls_oso_grid, ent);
                }
                else
                {
                    xGridAdd(&colls_grid, ent);
                    ent->gridb.oversize = 0;
                }
            }
        }
    }

    else if (grid != NULL)
    {
        xGridRemove(&ent->gridb);
    }
}
