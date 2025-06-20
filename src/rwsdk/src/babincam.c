#include "rwplcore.h"
#include "rwcore.h"

typedef struct rwStreamCamera RwCameraChunkInfo;
typedef struct rwStreamCamera rwStreamCamera;

extern RwPluginRegistry cameraTKList;

struct rwStreamCamera
{
    RwV2d viewWindow;
    RwV2d viewOffset;
    RwReal nearPlane, farPlane;
    RwReal fogPlane;
    RwUInt32 projection;
};

RwInt32 RwCameraRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB,
                                     RwPluginDataChunkWriteCallBack writeCB,
                                     RwPluginDataChunkGetSizeCallBack getSizeCB)
{
    _rwPluginRegistryAddPluginStream(&cameraTKList, pluginID, readCB, writeCB, getSizeCB);
}

RwCamera* RwCameraStreamRead(RwStream* stream)
{
    RwCamera* camera;
    rwStreamCamera cam;
    RwUInt32 size, version;

    if (!RwStreamFindChunk(stream, rwID_STRUCT, &size, &version))
    {
        RWRETURN((RwCamera*)NULL);
    }

    if ((version >= rwLIBRARYBASEVERSION) && (version <= rwLIBRARYCURRENTVERSION))
    {
        memset(&cam, 0, sizeof(cam));
        if (RwStreamRead(stream, &cam, size) != size)
        {
            RWRETURN((RwCamera*)NULL);
        }
        camera = RwCameraCreate();
        if (!camera)
        {
            RWRETURN((RwCamera*)NULL);
        }
        if (!_rwPluginRegistryReadDataChunks(&cameraTKList, stream, camera))
        {
            RWRETURN((RwCamera*)NULL);
        }
        RwCameraSetViewWindow(camera, &cam.viewWindow);
        RwCameraSetViewOffset(camera, &cam.viewOffset);
        RwCameraSetNearClipPlane(camera, ((RwReal)cam.nearPlane));
        RwCameraSetFarClipPlane(camera, ((RwReal)cam.farPlane));
        RwCameraSetFogDistance(camera, ((RwReal)cam.fogPlane));
        RwCameraSetProjection(camera, (RwCameraProjection)cam.projection);

        RWRETURN(camera);
    }
    else
    {
        RWRETURN((RwCamera*)NULL);
    }
}
