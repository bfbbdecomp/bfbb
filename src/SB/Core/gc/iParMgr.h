#ifndef IPARMGR_H
#define IPARMGR_H

#include "xMath3.h"

#include <rwcore.h>

struct tagiRenderInput
{
    U16* m_index;
    RwIm3DVertex* m_vertex;
    F32* m_vertexTZ;
    U32 m_mode;
    S32 m_vertexType;
    S32 m_vertexTypeSize;
    S32 m_indexCount;
    S32 m_vertexCount;
    xMat4x3 m_camViewMatrix;
    xVec4 m_camViewR;
    xVec4 m_camViewU;
};

void iParMgrInit();
void iParMgrUpdate(F32 elapsedTime);
void iParMgrRender();

#endif
