#ifndef RPUSERDATAPLUGIN_H
#define RPUSERDATAPLUGIN_H

#include <rwcore.h>
#include <rpworld.h>

enum RpUserDataFormat
{
    rpNAUSERDATAFORMAT = 0,
    rpINTUSERDATA,
    rpREALUSERDATA,
    rpSTRINGUSERDATA,
    rpUSERDATAFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};
typedef enum RpUserDataFormat RpUserDataFormat;

typedef struct RpUserDataArray RpUserDataArray;

struct RpUserDataArray
{
    RwChar* name;
    RpUserDataFormat format;
    RwInt32 numElements;
    void* data;
};

#ifdef __cplusplus
extern "C" {
#endif

extern RwBool RpUserDataPluginAttach(void);

extern RwInt32 RpGeometryAddUserDataArray(RpGeometry* geometry, RwChar* name,
                                          RpUserDataFormat format, RwInt32 numElements);
extern RpGeometry* RpGeometryRemoveUserDataArray(RpGeometry* geometry, RwInt32 index);
extern RpUserDataArray* RpGeometryGetUserDataArray(const RpGeometry* geometry, RwInt32 data);
extern RwInt32 RpGeometryGetUserDataArrayCount(const RpGeometry* geometry);

extern RwInt32 RpWorldSectorAddUserDataArray(RpWorldSector* sector, RwChar* name,
                                             RpUserDataFormat format, RwInt32 numElements);
extern RpWorldSector* RpWorldSectorRemoveUserDataArray(RpWorldSector* sector, RwInt32 index);
extern RpUserDataArray* RpWorldSectorGetUserDataArray(const RpWorldSector* sector, RwInt32 data);
extern RwInt32 RpWorldSectorGetUserDataArrayCount(const RpWorldSector* sector);

extern RwInt32 RwFrameAddUserDataArray(RwFrame* frame, RwChar* name, RpUserDataFormat format,
                                       RwInt32 numElements);
extern RwFrame* RwFrameRemoveUserDataArray(RwFrame* frame, RwInt32 index);
extern RpUserDataArray* RwFrameGetUserDataArray(const RwFrame* frame, RwInt32 data);
extern RwInt32 RwFrameGetUserDataArrayCount(const RwFrame* frame);

extern RwInt32 RwCameraAddUserDataArray(RwCamera* camera, RwChar* name, RpUserDataFormat format,
                                        RwInt32 numElements);
extern RwCamera* RwCameraRemoveUserDataArray(RwCamera* camera, RwInt32 index);
extern RpUserDataArray* RwCameraGetUserDataArray(const RwCamera* camera, RwInt32 data);
extern RwInt32 RwCameraGetUserDataArrayCount(const RwCamera* camera);

extern RwInt32 RpLightAddUserDataArray(RpLight* light, RwChar* name, RpUserDataFormat format,
                                       RwInt32 numElements);
extern RpLight* RpLightRemoveUserDataArray(RpLight* light, RwInt32 index);
extern RpUserDataArray* RpLightGetUserDataArray(const RpLight* light, RwInt32 data);
extern RwInt32 RpLightGetUserDataArrayCount(const RpLight* light);

extern RwInt32 RpMaterialAddUserDataArray(RpMaterial* material, RwChar* name,
                                          RpUserDataFormat format, RwInt32 numElements);
extern RpMaterial* RpMaterialRemoveUserDataArray(RpMaterial* material, RwInt32 index);
extern RpUserDataArray* RpMaterialGetUserDataArray(const RpMaterial* material, RwInt32 data);
extern RwInt32 RpMaterialGetUserDataArrayCount(const RpMaterial* material);

extern RwInt32 RwTextureAddUserDataArray(RwTexture* texture, RwChar* name, RpUserDataFormat format,
                                         RwInt32 numElements);
extern RwTexture* RwTextureRemoveUserDataArray(RwTexture* texture, RwInt32 index);
extern RpUserDataArray* RwTextureGetUserDataArray(const RwTexture* texture, RwInt32 data);
extern RwInt32 RwTextureGetUserDataArrayCount(const RwTexture* texture);

extern RwChar* RpUserDataArrayGetName(RpUserDataArray* userData);
extern RpUserDataFormat RpUserDataArrayGetFormat(RpUserDataArray* userData);
extern RwInt32 RpUserDataArrayGetNumElements(RpUserDataArray* userData);

extern RwInt32 RpUserDataArrayGetInt(RpUserDataArray* userData, RwInt32 index);
extern RwReal RpUserDataArrayGetReal(RpUserDataArray* userData, RwInt32 index);
extern RwChar* RpUserDataArrayGetString(RpUserDataArray* userData, RwInt32 index);

extern void RpUserDataArraySetInt(RpUserDataArray* userData, RwInt32 index, RwInt32 value);
extern void RpUserDataArraySetReal(RpUserDataArray* userData, RwInt32 index, RwReal value);
extern void RpUserDataArraySetString(RpUserDataArray* userData, RwInt32 index, RwChar* value);

extern RwInt32 RpUserDataGetFormatSize(RpUserDataFormat format);

#ifdef __cplusplus
}
#endif

#endif
