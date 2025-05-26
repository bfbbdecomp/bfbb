#include "xJSP.h"

#include <types.h>
#include <string.h>

#include "xClumpColl.h"

extern S32 sAtomicStartCount; // not exactly sure of the type
extern RwV3d* sCurrVert; // not sure if correct type. not sure what this is.
extern RwV3d* sAtomicStartVert; // I'm just going based on matt's assumption

extern RwGlobals* RwEngineInstance;

// No dwarf info
// ghidra said return type and type of param_2 was void
// but changing it to return atomic matches.
RpAtomic* CountAtomicCB(RpAtomic* atomic, U32* param_2)
{
    sAtomicStartCount++;
    *param_2 += atomic->geometry->mesh->totalIndicesInMesh;
    return atomic;
}

static RpMesh* AddMeshCB(RpMesh* mesh, RpMeshHeader* header, void* param_3)
{
    for (int i = 0; i < mesh->numIndices; i++)
    {
        **(RwV3d**)(param_3) = sCurrVert[mesh->indices[i]];
        *((S32*)(param_3)) += sizeof(RwV3d);
    }

    return mesh;
}

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

RpAtomic* AddAtomicPrecalcedVertCB(RpAtomic* atomic, void* data)
{
    sAtomicStartCount--;
    sAtomicStartVert[sAtomicStartCount] = *(RwV3d*)data;
    data = &data + atomic->geometry->mesh->totalIndicesInMesh * 0xc;

    return atomic;
}

RpAtomic* ListAtomicCB(RpAtomic* atomic, void* data)
{
    // RpAtomic*** aList; <- declared in dwarf data
    // ¯\_(ツ)_/¯ idk what's going on
    **(RpAtomic***)data = atomic;
    *(S32*)data += 4;
    return atomic;
}
