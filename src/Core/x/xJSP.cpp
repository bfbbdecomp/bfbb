#include "xJSP.h"

#include <types.h>

extern int32 sAtomicStartCount; // not exactly sure of the type
extern RwV3d sCurrVert[]; // not sure if correct type. not sure what this is.

// No dwarf info
// ghidra said return type and type of param_2 was void
// but changing it to return atomic matches.
RpAtomic* CountAtomicCB(RpAtomic* atomic, uint32* param_2)
{
    sAtomicStartCount++;
    *param_2 += atomic->geometry->mesh->totalIndicesInMesh;
    return atomic;
}

// func_80122C2C
#if 1
#pragma GLOBAL_ASM("asm/Core/x/xJSP.s", "AddMeshCB__FP6RpMeshP12RpMeshHeaderPv")
#else
RpMesh* AddMeshCB(RpMesh* mesh, RpMeshHeader* header, RwV3d** param_3)
{
    uint32 i = 0;
    int32 counter = 0;

    // the loop looks accurate, but it seems like
    // the original function uses much more of the stack?
    while (i < mesh->numIndices)
    {
        **param_3 = sCurrVert[*mesh->indices + counter];

        counter = counter + 2;
        i = i + 1;
        *param_3 = *param_3 + 1;
    }

    return mesh;
}
#endif

// func_80122CBC
#pragma GLOBAL_ASM("asm/Core/x/xJSP.s", "AddAtomicCB__FP8RpAtomicPv")

// func_80122D2C
#if 1
#pragma GLOBAL_ASM("asm/Core/x/xJSP.s", "AddAtomicPrecalcedVertCB__FP8RpAtomicPv")
#else
// not in dwarf data
RpAtomic* AddAtomicPrecalcedVertCB(RpAtomic* atomic, void* data)
{
    sAtomicStartCount = sAtomicStartCount - 1;

    // Size=60
    /*
    r5 = sAtomicStartCount;
    r7 = 0(r4);
    r5 = r5 + -1;
    r6 = lbl_803CBE40;
    slwi r0, r5, 2 sAtomicStartCount = r5;
    stwx r7, r6, r0 r5 = 0x18(r3);
    r6 = 0(r4);
    r5 = 0x54(r5);
    r0 = 8(r5);
    mulli r0, r0, 0xc add r0, r6, r0 0(r4) = r0;
    */

    return atomic;
}
#endif

RpAtomic* ListAtomicCB(RpAtomic* atomic, void* data)
{
    // RpAtomic*** aList; <- declared in dwarf data
    // ¯\_(ツ)_/¯ idk what's going on
    **(RpAtomic***)data = atomic;
    *(int32*)data += 4;
    return atomic;
}

// func_80122D80
#pragma GLOBAL_ASM("asm/Core/x/xJSP.s", "xJSP_MultiStreamRead__FPvUiPP10xJSPHeader")

// func_80123148
#pragma GLOBAL_ASM("asm/Core/x/xJSP.s", "xJSP_Destroy__FP10xJSPHeader")
