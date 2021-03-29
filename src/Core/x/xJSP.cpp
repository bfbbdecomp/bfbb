#include "xJSP.h"

#include <types.h>
#include <string.h>

#include "xClumpColl.h"

extern int32 sAtomicStartCount; // not exactly sure of the type
extern RwV3d* sCurrVert; // not sure if correct type. not sure what this is.
extern RwV3d* sAtomicStartVert; // I'm just going based on matt's assumption

extern void* RwEngineInstance;

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
#if 1
#pragma GLOBAL_ASM("asm/Core/x/xJSP.s", "AddAtomicCB__FP8RpAtomicPv")
#else
// ¯\_(ツ)_/¯
RpAtomic* AddAtomicCB(RpAtomic* atomic, void* data)
{
    // The dwarf defines this variable but it looks like it isnt used
    // TempAtomicList** tmpList;
    sAtomicStartCount--;
    sAtomicStartVert[sAtomicStartCount] = *(RwV3d*)data;
    sCurrVert = atomic->geometry->morphTarget->verts;
    _rpMeshHeaderForAllMeshes(atomic->geometry->mesh, (RpMeshCallBack)&AddMeshCB, data);
    return atomic;
}
#endif

// func_80122D2C
#if 1
#pragma GLOBAL_ASM("asm/Core/x/xJSP.s", "AddAtomicPrecalcedVertCB__FP8RpAtomicPv")
#else
// not in dwarf data
// ¯\_(ツ)_/¯
RpAtomic* AddAtomicPrecalcedVertCB(RpAtomic* atomic, void* data)
{
    sAtomicStartCount--;
    sAtomicStartVert[sAtomicStartCount] = *(RwV3d*)data;
    data = &data + atomic->geometry->mesh->totalIndicesInMesh * 0xc;

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
