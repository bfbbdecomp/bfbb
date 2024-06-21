#ifndef IPARMGR_H
#define IPARMGR_H

#include "xMath3.h"

#include <rwcore.h>

struct tagiRenderInput
{
    uint16* m_index;
    RwIm3DVertex* m_vertex;
    float32* m_vertexTZ;
    uint32 m_mode;
    int32 m_vertexType;
    int32 m_vertexTypeSize;
    int32 m_indexCount;
    int32 m_vertexCount;
    xMat4x3 m_camViewMatrix;
    xVec4 m_camViewR;
    xVec4 m_camViewU;
};

void iParMgrInit();
void iParMgrUpdate(float32 elapsedTime);
void iParMgrRender();

#endif
