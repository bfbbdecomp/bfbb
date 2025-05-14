#include "iParMgr.h"
#include "zGlobals.h"

#include <types.h>
#include <xstransvc.h>
#include <rwplcore.h>

tagiRenderArrays gRenderArr;
tagiRenderInput gRenderBuffer;

static S32 gColorTableInit;
static F32 gColorTable[256];

void iParMgrUpdate(F32)
{
}

void iParMgrRender()
{
}

void iRenderInit()
{
    gRenderBuffer.m_mode = 0;
    gRenderBuffer.m_indexCount  = 0;
    gRenderBuffer.m_vertexCount = 0;
    gRenderBuffer.m_vertexTypeSize = 0x24;
    gRenderBuffer.m_index = &gRenderArr.m_index[0];
    gRenderBuffer.m_vertex = &gRenderArr.m_vertex[0];
    gRenderBuffer.m_vertexTZ = gRenderArr.m_vertexTZ;
}

void iRenderSetCameraViewMatrix(xMat4x3* m)
{
    if ((m == NULL) && (globals.camera.lo_cam != NULL))
    {
        gRenderBuffer.m_camViewMatrix = *(xMat4x3 *)(*(int *)(*(int*)RwEngineInstance + 4) + 0x10);
    }
    else
    {
        gRenderBuffer.m_camViewMatrix = *m;
    }
    xVec3Inv((xVec3*)(&gRenderBuffer.m_camViewR), (xVec3*)(&gRenderBuffer.m_camViewMatrix.right));
    xVec3Inv((xVec3*)(&gRenderBuffer.m_camViewU), (xVec3*)(&gRenderBuffer.m_camViewMatrix.up));
}

void iRenderFlush()
{
    if (gRenderBuffer.m_vertexCount > 0)
    {
        iRenderTrianglesImmediate(gRenderBuffer.m_vertexType, gRenderBuffer.m_vertexTypeSize, gRenderBuffer.m_vertex, gRenderBuffer.m_vertexCount, gRenderBuffer.m_index, gRenderBuffer.m_indexCount);
    }

    gRenderBuffer.m_indexCount  = 0;
    gRenderBuffer.m_vertexCount = 0;
}

void iRenderTrianglesImmediate(S32 vertType, S32 vertTypeSize, void* data, S32 dataSize, U16* index, S32 indexSize)
{
    if (RwIm3DTransform((_RxObjSpace3DVertex *)data, dataSize, NULL, 1) != NULL)
    {
        if (indexSize != 0)
        {
            RwIm3DRenderIndexedPrimitive(rwPRIMTYPETRILIST, index, indexSize);
        }
        else
        {
            RwIm3DRenderPrimitive(rwPRIMTYPETRILIST);
        }
        RwIm3DEnd();
    }

}

static void iRenderPushFlat(xPar* p, xParCmdTex* tex);

void iParMgrRenderParSys_QuadStreak(void* data, xParGroup* ps)
{
    xPar* idx = ps->m_root;
    iRenderSetCameraViewMatrix(NULL);
    RwTexture* texture = (RwTexture *)xSTFindAsset(*(U32 *)(*(S32 *)((S32)data + 0x10) + 0x10), NULL);
    if (texture != NULL)
    {
        RwRaster* raster = texture->raster;
        if (texture->raster != NULL)
        {
            RwRenderStateSet(rwRENDERSTATETEXTURERASTER, raster);
        }
    }
    else
    {
        RwRenderStateSet(rwRENDERSTATETEXTURERASTER, NULL);
    }

    for (; idx != NULL; idx = idx->m_next)
    {
        iRenderPushFlat(idx, *(xParCmdTex **)((S32)ps + 0x20));
    }
    iRenderFlush();
}

void iParMgrRenderParSys_Static(void*, xParGroup*) { }

void iParMgrRenderParSys_Flat(void* data, xParGroup* ps)
{
    xPar* idx = ps->m_root;
    iRenderSetCameraViewMatrix(NULL);
    RwTexture* texture = (RwTexture *)xSTFindAsset(*(U32 *)(*(S32 *)((S32)data + 0x10) + 0x10), NULL);
    if (texture != NULL)
    {
        RwRaster* raster = texture->raster;
        if (texture->raster != NULL)
        {
            RwRenderStateSet(rwRENDERSTATETEXTURERASTER, raster);
        }
    }
    for (; idx != NULL; idx = idx->m_next)
    {
        iRenderPushFlat(idx, *(xParCmdTex **)((S32)ps + 0x20));
    }
    iRenderFlush();
}