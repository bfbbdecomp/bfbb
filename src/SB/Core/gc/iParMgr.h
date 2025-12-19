#ifndef IPARMGR_H
#define IPARMGR_H

#include "xMath3.h"
#include "xParGroup.h"

#include <rwcore.h>

struct tagiRenderArrays
{
    // total size: 0x5280
    U16 m_index[960]; // offset 0x0, size 0x780
    RxObjSpace3DVertex m_vertex[480]; // offset 0x780, size 0x4380
    F32 m_vertexTZ[480]; // offset 0x4B00, size 0x780
};

struct tagiRenderInput
{
    // total size: 0x80
    public:
    U16* m_index; // offset 0x0, size 0x4
    RxObjSpace3DVertex* m_vertex; // offset 0x4, size 0x4
    F32* m_vertexTZ; // offset 0x8, size 0x4
    U32 m_mode; // offset 0xC, size 0x4
    S32 m_vertexType; // offset 0x10, size 0x4
    S32 m_vertexTypeSize; // offset 0x14, size 0x4
    S32 m_indexCount; // offset 0x18, size 0x4
    S32 m_vertexCount; // offset 0x1C, size 0x4
    xMat4x3 m_camViewMatrix; // offset 0x20, size 0x40
    xVec4 m_camViewR; // offset 0x60, size 0x10
    xVec4 m_camViewU; // offset 0x70, size 0x10
};

extern tagiRenderArrays gRenderArr;
extern tagiRenderInput gRenderBuffer;

void iParMgrInit();
void iParMgrUpdate(F32 elapsedTime);
void iParMgrRender();
void iRenderInit();
void iRenderSetCameraViewMatrix(xMat4x3* m);
void iRenderFlush();
void iRenderTrianglesImmediate(S32 vertType, S32 vertTypeSize, void* data, S32 dataSize, U16* index,
                               S32 indexSize);
void iParMgrRenderParSys_Streak(void* data, xParGroup* ps);
void iParMgrRenderParSys_QuadStreak(void* data, xParGroup* ps);
void iParMgrRenderParSys_InvStreak(void* data, xParGroup* ps);
void iParMgrRenderParSys_Flat(void* data, xParGroup* ps);
void iParMgrRenderParSys_Static(void* data, xParGroup* ps);
void iParMgrRenderParSys_Ground(void* data, xParGroup* ps);
void iParMgrRenderParSys_Sprite(void* data, xParGroup* ps);

#endif
