#ifndef IMORPH_H
#define IMORPH_H

#include "types.h"

#include <rwcore.h>
#include <rpworld.h>

struct DirtyMorph // total size: 0x20
{
    U32 count;
    F32 scale;
    S16 weight[4]; // offset 0x8, size 0x8
    S16* v_array[4]; // offset 0x10, size 0x10
};

void iMorphOptimize(RpAtomic* model, S32 normals);
void iMorphRender(RpAtomic* model, RwMatrix* mat, S16** v_array, S16* weight, U32 normals,
                  F32 scale);
void FastS16unpack(F32* dest, S16* v, S32 count, F32 scale);
void FastS16weight2(F32* dest, S16** v_array, S16* weight, S32 count, F32 scale);
void FastS16weight4(F32* dest, S16** v_array, S16* weight, S32 count, F32 scale);

#endif
