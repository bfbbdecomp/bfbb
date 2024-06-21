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


#if 0
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


#if 0
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


#if 0
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
