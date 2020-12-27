#ifndef RPWORLD_H
#define RPWORLD_H

#include "rwcore.h"

typedef struct RpLight;

struct RpMaterial
{
    RwTexture* texture;
    RwRGBA color;
    RxPipeline* pipeline;
    RwSurfaceProperties surfaceProps;
    RwInt16 refCount;
    RwInt16 pad;
};

struct RpMaterialList
{
    RpMaterial** materials;
    RwInt32 numMaterials;
    RwInt32 space;
};

struct RpTriangle
{
    RwUInt16 vertIndex[3];
    RwInt16 matIndex;
};

struct RpBuildMeshTriangle
{
    RwUInt16 vertIndex[3];
    RpMaterial* material;
    RwUInt16 matIndex;
    RwUInt16 textureIndex;
    RwUInt16 rasterIndex;
    RwUInt16 pipelineIndex;
};

struct RpBuildMesh
{
    RwUInt32 triangleBufferSize;
    RwUInt32 numTriangles;
    RpBuildMeshTriangle* meshTriangles;
};

struct RpMesh
{
    RxVertexIndex* indices;
    RwUInt32 numIndices;
    RpMaterial* material;
};

struct RpMeshHeader
{
    RwUInt32 flags;
    RwUInt16 numMeshes;
    RwUInt16 serialNum;
    RwUInt32 totalIndicesInMesh;
    RwUInt32 firstMeshOffset;
};

typedef RpMesh* (*RpMeshCallBack)(RpMesh* mesh, RpMeshHeader* meshHeader, void* pData);

typedef struct RpGeometry;

struct RpMorphTarget
{
    RpGeometry* parentGeom;
    RwSphere boundingSphere;
    RwV3d* verts;
    RwV3d* normals;
};

struct RpGeometry
{
    RwObject object;
    RwUInt32 flags;
    RwUInt16 lockedSinceLastInst;
    RwInt16 refCount;
    RwInt32 numTriangles;
    RwInt32 numVertices;
    RwInt32 numMorphTargets;
    RwInt32 numTexCoordSets;
    RpMaterialList matList;
    RpTriangle* triangles;
    RwRGBA* preLitLum;
    RwTexCoords* texCoords[8];
    RpMeshHeader* mesh;
    RwResEntry* repEntry;
    RpMorphTarget* morphTarget;
};

enum RpAtomicFlag
{
    rpATOMICCOLLISIONTEST = 0x01,
    rpATOMICRENDER = 0x04,
    rpATOMICFLAGFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

typedef struct RpClump;

typedef RpClump* (*RpClumpCallBack)(RpClump* clump, void* data);

struct RpClump
{
    RwObject object;
    RwLinkList atomicList;
    RwLinkList lightList;
    RwLinkList cameraList;
    RwLLLink inWorldLink;
    RpClumpCallBack callback;
};

struct RpInterpolator
{
    RwInt32 flags;
    RwInt16 startMorphTarget;
    RwInt16 endMorphTarget;
    RwReal time;
    RwReal recipTime;
    RwReal position;
};

typedef struct RpAtomic;

typedef RpAtomic* (*RpAtomicCallBackRender)(RpAtomic* atomic);

#define RpAtomicRenderMacro(_atomic) ((_atomic)->renderCallBack(_atomic))

#define RpAtomicGetGeometryMacro(_atomic) ((_atomic)->geometry)

#define RpAtomicSetRenderCallBackMacro(_atomic, _callback)                                         \
    MACRO_START                                                                                    \
    {                                                                                              \
        (_atomic)->renderCallBack = (_callback);                                                   \
        if (!(_atomic)->renderCallBack)                                                            \
        {                                                                                          \
            (_atomic)->renderCallBack = AtomicDefaultRenderCallBack;                               \
        }                                                                                          \
    }                                                                                              \
    MACRO_STOP

#define RpAtomicGetRenderCallBackMacro(_atomic) ((_atomic)->renderCallBack)

#define RpAtomicGetInterpolatorMacro(_atomic) (&((_atomic)->interpolator))

#define RpInterpolatorGetStartMorphTargetMacro(_intrp) ((_intrp)->startMorphTarget)

#define RpInterpolatorGetEndMorphTargetMacro(_intrp) ((_intrp)->endMorphTarget)

#define RpInterpolatorGetValueMacro(_intrp) ((_intrp)->position)

#define RpInterpolatorGetScaleMacro(_intrp) ((_intrp)->time)

#define RpInterpolatorSetStartMorphTargetMacro(_intrp, _target, _atomic)                           \
    ((_intrp)->startMorphTarget = (RwInt16)(_target),                                              \
     (_intrp)->flags |= (RwInt32)(rpINTERPOLATORDIRTYINSTANCE | rpINTERPOLATORDIRTYSPHERE),        \
     ((!((_intrp)->flags & rpINTERPOLATORNOFRAMEDIRTY)) ?                                          \
          ((RpAtomicGetFrame(_atomic)) ? (RwFrameUpdateObjects(RpAtomicGetFrame(_atomic))) :       \
                                         (0)) :                                                    \
          (0)),                                                                                    \
     (_intrp))

#define RpInterpolatorSetEndMorphTargetMacro(_intrp, _target, _atomic)                             \
    ((_intrp)->endMorphTarget = (RwInt16)(_target),                                                \
     (_intrp)->flags |= (RwInt32)(rpINTERPOLATORDIRTYINSTANCE | rpINTERPOLATORDIRTYSPHERE),        \
     ((!((_intrp)->flags & rpINTERPOLATORNOFRAMEDIRTY)) ?                                          \
          ((RpAtomicGetFrame(_atomic)) ? (RwFrameUpdateObjects(RpAtomicGetFrame(_atomic))) :       \
                                         (0)) :                                                    \
          (0)),                                                                                    \
     (_intrp))

#define RpInterpolatorSetValueMacro(_intrp, _value, _atomic)                                       \
    ((_intrp)->position = (_value),                                                                \
     (_intrp)->flags |= (RwInt32)(rpINTERPOLATORDIRTYINSTANCE | rpINTERPOLATORDIRTYSPHERE),        \
     ((!((_intrp)->flags & rpINTERPOLATORNOFRAMEDIRTY)) ?                                          \
          ((RpAtomicGetFrame(_atomic)) ? (RwFrameUpdateObjects(RpAtomicGetFrame(_atomic))) :       \
                                         (0)) :                                                    \
          (0)),                                                                                    \
     (_intrp))

#define RpInterpolatorSetScaleMacro(_intrp, _scale, _atomic)                                       \
    ((_intrp)->time = (_scale), (_intrp)->recipTime = (RwReal)(1.0) / (_scale),                    \
     (_intrp)->flags |= (RwInt32)(rpINTERPOLATORDIRTYINSTANCE | rpINTERPOLATORDIRTYSPHERE),        \
     ((!((_intrp)->flags & rpINTERPOLATORNOFRAMEDIRTY)) ?                                          \
          ((RpAtomicGetFrame(_atomic)) ? (RwFrameUpdateObjects(RpAtomicGetFrame(_atomic))) :       \
                                         (0)) :                                                    \
          (0)),                                                                                    \
     (_intrp))

#define RpAtomicGetClumpMacro(_atomic) ((_atomic)->clump)

#define RpAtomicGetBoundingSphereMacro(_atomic)                                                    \
    ((((_atomic)->interpolator.flags & rpINTERPOLATORDIRTYSPHERE) ?                                \
      _rpAtomicResyncInterpolatedSphere(_atomic),                                                  \
      0 : 0),                                                                                      \
     &((_atomic)->boundingSphere))

#define RpAtomicGetFrameMacro(_atomic) ((RwFrame*)rwObjectGetParent(_atomic))

#define RpClumpSetFrameMacro(_clump, _frame) (rwObjectSetParent(_clump, _frame), (_clump))

#define RpClumpSetFrameVoidMacro(_clump, _frame)                                                   \
    MACRO_START                                                                                    \
    {                                                                                              \
        rwObjectSetParent(_clump, _frame);                                                         \
    }                                                                                              \
    MACRO_STOP

#define RpClumpGetFrameMacro(_clump) ((RwFrame*)rwObjectGetParent(_clump))

#define RpAtomicSetFlagsMacro(_atomic, _flags) (rwObjectSetFlags(_atomic, _flags), (_atomic))

#define RpAtomicGetFlagsMacro(_atomic) (rwObjectGetFlags(_atomic))

#define RpAtomicRender(_atomic) RpAtomicRenderMacro(_atomic)

#define RpAtomicGetGeometry(_atomic) RpAtomicGetGeometryMacro(_atomic)

#define RpAtomicSetRenderCallBack(_atomic, _callback)                                              \
    RpAtomicSetRenderCallBackMacro(_atomic, _callback)

#define RpAtomicGetRenderCallBack(_atomic) RpAtomicGetRenderCallBackMacro(_atomic)

#define RpAtomicGetInterpolator(_atomic) RpAtomicGetInterpolatorMacro(_atomic)

#define RpInterpolatorGetStartMorphTarget(_intrp) RpInterpolatorGetStartMorphTargetMacro(_intrp)

#define RpInterpolatorGetEndMorphTarget(_intrp) RpInterpolatorGetEndMorphTargetMacro(_intrp)

#define RpInterpolatorGetValue(_intrp) RpInterpolatorGetValueMacro(_intrp)

#define RpInterpolatorGetScale(_intrp) RpInterpolatorGetScaleMacro(_intrp)

#define RpInterpolatorSetStartMorphTarget(_intrp, _target, _atomic)                                \
    RpInterpolatorSetStartMorphTargetMacro(_intrp, _target, _atomic)

#define RpInterpolatorSetEndMorphTarget(_intrp, _target, _atomic)                                  \
    RpInterpolatorSetEndMorphTargetMacro(_intrp, _target, _atomic)

#define RpInterpolatorSetValue(_intrp, _value, _atomic)                                            \
    RpInterpolatorSetValueMacro(_intrp, _value, _atomic)

#define RpInterpolatorSetScale(_intrp, _scale, _atomic)                                            \
    RpInterpolatorSetScaleMacro(_intrp, _scale, _atomic)

#define RpAtomicGetClump(_atomic) RpAtomicGetClumpMacro(_atomic)

#define RpAtomicGetBoundingSphere(_atomic) RpAtomicGetBoundingSphereMacro(_atomic)

#define RpAtomicGetFrame(_atomic) RpAtomicGetFrameMacro(_atomic)

#define RpClumpSetFrame(_clump, _frame) RpClumpSetFrameMacro(_clump, _frame)

#define RpClumpGetFrame(_clump) RpClumpGetFrameMacro(_clump)

#define RpAtomicSetFlags(_atomic, _flags) RpAtomicSetFlagsMacro(_atomic, _flags)

#define RpAtomicGetFlags(_atomic) RpAtomicGetFlagsMacro(_atomic)

struct RpAtomic
{
    RwObjectHasFrame object;
    RwResEntry* repEntry;
    RpGeometry* geometry;
    RwSphere boundingSphere;
    RwSphere worldBoundingSphere;
    RpClump* clump;
    RwLLLink inClumpLink;
    RpAtomicCallBackRender renderCallBack;
    RpInterpolator interpolator;
    RwUInt16 renderFrame;
    RwUInt16 pad;
    RwLinkList llWorldSectorsInAtomic;
    RxPipeline* pipeline;
};

typedef RpAtomic* (*RpAtomicCallBack)(RpAtomic* atomic, void* data);

enum RpWorldRenderOrder
{
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK,
    rpWORLDRENDERBACK2FRONT,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

typedef struct RpWorldSector;
typedef RpWorldSector* (*RpWorldSectorCallBack)(RpWorldSector* worldSector, void* data);

struct RpSector
{
    RwInt32 type;
};

struct RpPolygon
{
    RwUInt16 matIndex;
    RwUInt16 vertIndex[3];
};

struct RpVertexNormal
{
    RwInt8 x;
    RwInt8 y;
    RwInt8 z;
    RwUInt8 pad;
};

struct RpWorldSector
{
    RwInt32 type;
    RpPolygon* polygons;
    RwV3d* vertices;
    RpVertexNormal* normals;
    RwTexCoords* texCoords[8];
    RwRGBA* preLitLum;
    RwResEntry* repEntry;
    RwLinkList collAtomicsInWorldSector;
    RwLinkList noCollAtomicsInWorldSector;
    RwLinkList lightsInWorldSector;
    RwBBox boundingBox;
    RwBBox tightBoundingBox;
    RpMeshHeader* mesh;
    RxPipeline* pipeline;
    RwUInt16 matListWindowBase;
    RwUInt16 numVertices;
    RwUInt16 numPolygons;
    RwUInt16 pad;
};

typedef RpWorldSector* (*RpWorldSectorCallBackRender)(RpWorldSector* worldSector);

struct RpWorld
{
    RwObject object;
    RwUInt32 flags;
    RpWorldRenderOrder renderOrder;
    RpMaterialList matList;
    RpSector* rootSector;
    RwInt32 numTexCoordSets;
    RwInt32 numClumpsInWorld;
    RwLLLink* currentClumpLink;
    RwLinkList clumpList;
    RwLinkList lightList;
    RwLinkList directionalLightList;
    RwV3d worldOrigin;
    RwBBox boundingBox;
    RpWorldSectorCallBackRender renderCallBack;
    RxPipeline* pipeline;
};

#define rpLIGHTPOSITIONINGSTART 0x80

enum RpLightType
{
    rpNALIGHTTYPE = 0,
    rpLIGHTDIRECTIONAL,
    rpLIGHTAMBIENT,
    rpLIGHTPOINT = rpLIGHTPOSITIONINGSTART,
    rpLIGHTSPOT,
    rpLIGHTSPOTSOFT,
    rpLIGHTTYPEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

#define rpLIGHTMINCONEANGLE ((RwReal)0.0f)
#define rpLIGHTMAXCONEANGLE (rwPIOVER2)

enum RpLightFlag
{
    rpLIGHTLIGHTATOMICS = 0x01,
    rpLIGHTLIGHTWORLD = 0x02,
    rpLIGHTFLAGFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

struct RpLight
{
    RwObjectHasFrame object;
    RwReal radius;
    RwRGBAReal color;
    RwReal minusCosAngle;
    RwLinkList WorldSectorsInLight;
    RwLLLink inWorld;
    RwUInt16 lightFrame;
    RwUInt16 pad;
};

typedef RpLight* (*RpLightCallBack)(RpLight* light, void* data);

#define RpLightGetRadiusMacro(_light) ((_light)->radius)

#define RpLightGetColorMacro(_light) (&((_light)->color))

#define RpLightSetFrameMacro(_light, _frame)                                                       \
    (rwObjectHasFrameSetFrame((_light), (_frame)), (_light))

#define RpLightGetFrameMacro(_light) ((RwFrame*)rwObjectGetParent((_light)))

#define RpLightGetTypeMacro(_light) ((RpLightType)rwObjectGetSubType((_light)))

#define RpLightSetFlagsMacro(_light, _flags) ((rwObjectSetFlags((_light), (_flags))), (_light))

#define RpLightGetFlagsMacro(_light) (rwObjectGetFlags((_light)))

#define RpLightGetRadius(_light) RpLightGetRadiusMacro(_light)

#define RpLightGetColor(_light) RpLightGetColorMacro(_light)

#define RpLightSetFrame(_light, _frame) RpLightSetFrameMacro(_light, _frame)

#define RpLightGetFrame(_light) RpLightGetFrameMacro(_light)

#define RpLightGetType(_light) RpLightGetTypeMacro(_light)

#define RpLightSetFlags(_light, _flags) RpLightSetFlagsMacro(_light, _flags)

#define RpLightGetFlags(_light) RpLightGetFlagsMacro(_light)

typedef RpMaterial* (*RpMaterialCallBack)(RpMaterial* material, void* data);

#define RpAtomicSetPipelineMacro(_atomic, _pipeline) (((_atomic)->pipeline = _pipeline), _atomic)

#define RpAtomicGetPipelineMacro(_atomic, _pipeline) ((*(_pipeline) = (_atomic)->pipeline), _atomic)

#define RpAtomicSetPipeline RpAtomicSetPipelineMacro
#define RpAtomicGetPipeline RpAtomicGetPipelineMacro

#ifdef __cplusplus
extern "C" {
#endif

extern RpWorld* RpWorldStreamRead(RwStream* stream);
extern RpAtomic* AtomicDefaultRenderCallBack(RpAtomic* atomic);
extern void _rpAtomicResyncInterpolatedSphere(RpAtomic* atomic);
extern const RwSphere* RpAtomicGetWorldBoundingSphere(RpAtomic* atomic);
extern RwInt32 RpClumpGetNumAtomics(RpClump* clump);
extern RpClump* RpClumpForAllAtomics(RpClump* clump, RpAtomicCallBack callback, void* pData);
extern RpClump* RpClumpForAllCameras(RpClump* clump, RwCameraCallBack callback, void* pData);
extern RpClump* RpClumpForAllLights(RpClump* clump, RpLightCallBack callback, void* pData);
extern RpAtomic* RpAtomicCreate(void);
extern RpAtomic* RpAtomicSetGeometry(RpAtomic* atomic, RpGeometry* geometry, RwUInt32 flags);
extern RwBool RpAtomicDestroy(RpAtomic* atomic);
extern RwBool RpClumpDestroy(RpClump* clump);
extern RpClump* RpClumpAddAtomic(RpClump* clump, RpAtomic* atomic);
extern RpClump* RpClumpRemoveAtomic(RpClump* clump, RpAtomic* atomic);
extern RpClump* RpClumpRemoveLight(RpClump* clump, RpLight* light);
extern RpClump* RpClumpRemoveCamera(RpClump* clump, RwCamera* camera);
extern RwUInt32 RpAtomicStreamGetSize(RpAtomic* atomic);
extern RpAtomic* RpAtomicStreamWrite(RpAtomic* atomic, RwStream* stream);
extern RpAtomic* RpAtomicStreamRead(RwStream* stream);
extern RpClump* RpClumpStreamRead(RwStream* stream);
extern RwInt32 RpAtomicRegisterPlugin(RwInt32 size, RwUInt32 pluginID,
                                      RwPluginObjectConstructor constructCB,
                                      RwPluginObjectDestructor destructCB,
                                      RwPluginObjectCopy copyCB);
extern RwInt32 RpClumpRegisterPlugin(RwInt32 size, RwUInt32 pluginID,
                                     RwPluginObjectConstructor constructCB,
                                     RwPluginObjectDestructor destructCB,
                                     RwPluginObjectCopy copyCB);
extern RwInt32 RpAtomicRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB,
                                            RwPluginDataChunkWriteCallBack writeCB,
                                            RwPluginDataChunkGetSizeCallBack getSizeCB);
extern RwInt32 RpAtomicSetStreamAlwaysCallBack(RwUInt32 pluginID,
                                               RwPluginDataChunkAlwaysCallBack alwaysCB);
extern RwInt32 RpAtomicSetStreamRightsCallBack(RwUInt32 pluginID,
                                               RwPluginDataChunkRightsCallBack rightsCB);
extern RwInt32 RpAtomicGetPluginOffset(RwUInt32 pluginID);
extern RpAtomic* RpAtomicSetFrame(RpAtomic* atomic, RwFrame* frame);
extern RwBool RpAtomicInstance(RpAtomic* atomic);
extern RpGeometry* RpGeometryCreateSpace(RwReal radius);
extern const RpMorphTarget* RpMorphTargetCalcBoundingSphere(const RpMorphTarget* morphTarget,
                                                            RwSphere* boundingSphere);
extern RwInt32 RpGeometryAddMorphTargets(RpGeometry* geometry, RwInt32 mtcount);
extern const RpGeometry* RpGeometryTriangleSetVertexIndices(const RpGeometry* geometry,
                                                            RpTriangle* triangle, RwUInt16 vert1,
                                                            RwUInt16 vert2, RwUInt16 vert3);
extern RpGeometry* RpGeometryTriangleSetMaterial(RpGeometry* geometry, RpTriangle* triangle,
                                                 RpMaterial* material);
extern const RpGeometry* RpGeometryTriangleGetVertexIndices(const RpGeometry* geometry,
                                                            const RpTriangle* triangle,
                                                            RwUInt16* vert1, RwUInt16* vert2,
                                                            RwUInt16* vert3);
extern RpMaterial* RpGeometryTriangleGetMaterial(const RpGeometry* geometry,
                                                 const RpTriangle* triangle);
extern RpGeometry* RpGeometryForAllMaterials(RpGeometry* geometry, RpMaterialCallBack fpCallBack,
                                             void* pData);
extern RpGeometry* RpGeometryLock(RpGeometry* geometry, RwInt32 lockMode);
extern RpGeometry* RpGeometryUnlock(RpGeometry* geometry);
extern RpGeometry* RpGeometryCreate(RwInt32 numVert, RwInt32 numTriangles, RwUInt32 format);
extern RpGeometry* _rpGeometryAddRef(RpGeometry* geometry);
extern RwBool RpGeometryDestroy(RpGeometry* geometry);
extern RwInt32 RpGeometryRegisterPlugin(RwInt32 size, RwUInt32 pluginID,
                                        RwPluginObjectConstructor constructCB,
                                        RwPluginObjectDestructor destructCB,
                                        RwPluginObjectCopy copyCB);
extern RwInt32 RpGeometryRegisterPluginStream(RwUInt32 pluginID,
                                              RwPluginDataChunkReadCallBack readCB,
                                              RwPluginDataChunkWriteCallBack writeCB,
                                              RwPluginDataChunkGetSizeCallBack getSizeCB);
extern RwUInt32 RpGeometryStreamGetSize(const RpGeometry* geometry);
extern const RpGeometry* RpGeometryStreamWrite(const RpGeometry* geometry, RwStream* stream);
extern RpGeometry* RpGeometryStreamRead(RwStream* stream);
extern RpLight* RpLightSetRadius(RpLight* light, RwReal radius);
extern RpLight* RpLightSetColor(RpLight* light, const RwRGBAReal* color);
extern RwReal RpLightGetConeAngle(const RpLight* light);
extern RpLight* RpLightSetConeAngle(RpLight* ight, RwReal angle);
extern RwInt32 RpLightRegisterPlugin(RwInt32 size, RwUInt32 pluginID,
                                     RwPluginObjectConstructor constructCB,
                                     RwPluginObjectDestructor destructCB,
                                     RwPluginObjectCopy copyCB);
extern RwInt32 RpLightRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB,
                                           RwPluginDataChunkWriteCallBack writeCB,
                                           RwPluginDataChunkGetSizeCallBack getSizeCB);
extern RpLight* RpLightStreamRead(RwStream* stream);
extern RwBool RpLightDestroy(RpLight* light);
extern RpLight* RpLightCreate(RwInt32 type);
extern RpMaterial* RpMaterialCreate(void);
extern RwBool RpMaterialDestroy(RpMaterial* material);
extern RpMaterial* RpMaterialSetTexture(RpMaterial* material, RwTexture* texture);
extern RwInt32 RpMaterialRegisterPlugin(RwInt32 size, RwUInt32 pluginID,
                                        RwPluginObjectConstructor constructCB,
                                        RwPluginObjectDestructor destructCB,
                                        RwPluginObjectCopy copyCB);
extern RwInt32 RpMaterialRegisterPluginStream(RwUInt32 pluginID,
                                              RwPluginDataChunkReadCallBack readCB,
                                              RwPluginDataChunkWriteCallBack writeCB,
                                              RwPluginDataChunkGetSizeCallBack getSizeCB);
extern RpMaterial* RpMaterialStreamRead(RwStream* stream);
extern RwUInt32 RpMaterialStreamGetSize(const RpMaterial* material);
extern const RpMaterial* RpMaterialStreamWrite(const RpMaterial* material, RwStream* stream);
extern RpMaterialList* _rpMaterialListDeinitialize(RpMaterialList* matList);
extern RpMaterialList* _rpMaterialListInitialize(RpMaterialList* matList);
extern RpMaterial* _rpMaterialListGetMaterial(const RpMaterialList* matList, RwInt32 matIndex);
extern RwInt32 _rpMaterialListAppendMaterial(RpMaterialList* matList, RpMaterial* material);
extern RwInt32 _rpMaterialListFindMaterialIndex(const RpMaterialList* matList,
                                                const RpMaterial* material);
extern RwUInt32 _rpMaterialListStreamGetSize(const RpMaterialList* matList);
extern const RpMaterialList* _rpMaterialListStreamWrite(const RpMaterialList* matList,
                                                        RwStream* stream);
extern RpMaterialList* _rpMaterialListStreamRead(RwStream* stream, RpMaterialList* matList);
extern RpMeshHeader* _rpMeshHeaderCreate(RwUInt32 size);
extern void* _rpMeshClose(void* instance, RwInt32 offset, RwInt32 size);
extern void* _rpMeshOpen(void* instance, RwInt32 offset, RwInt32 size);
extern RpBuildMesh* _rpBuildMeshCreate(RwUInt32 bufferSize);
extern RwBool _rpBuildMeshDestroy(RpBuildMesh* mesh);
extern RwBool _rpMeshDestroy(RpMeshHeader* mesh);
extern RpBuildMesh* _rpBuildMeshAddTriangle(RpBuildMesh* mesh, RpMaterial* material, RwInt32 vert1,
                                            RwInt32 vert2, RwInt32 vert3, RwUInt16 matIndex,
                                            RwUInt16 textureIndex, RwUInt16 rasterIndex,
                                            RwUInt16 pipelineIndex);
extern RpMeshHeader* _rpMeshHeaderForAllMeshes(RpMeshHeader* meshHeader, RpMeshCallBack fpCallBack,
                                               void* pData);
extern RwStream* _rpMeshWrite(const RpMeshHeader* meshHeader, const void* object, RwStream* stream,
                              const RpMaterialList* matList);
extern RpMeshHeader* _rpMeshRead(RwStream* stream, const void* object,
                                 const RpMaterialList* matList);
extern RwInt32 _rpMeshSize(const RpMeshHeader* meshHeader, const void* object);
extern RwInt16 _rpMeshGetNextSerialNumber(void);
extern RpMeshHeader* RpBuildMeshGenerateDefaultTriStrip(RpBuildMesh* buildmesh, void* data);
extern RpMeshHeader* _rpTriListMeshGenerate(RpBuildMesh* buildMesh, void* data);
extern RpMeshHeader* _rpMeshOptimise(RpBuildMesh* buildmesh, RwUInt32 flags);
extern RwInt32 RpWorldSectorGetNumVertices(const RpWorldSector* Sector);
extern RpWorldSector* RpWorldSectorRender(RpWorldSector* worldSector);
extern RwInt32 RpWorldSectorRegisterPlugin(RwInt32 size, RwUInt32 pluginID,
                                           RwPluginObjectConstructor constructCB,
                                           RwPluginObjectDestructor destructCB,
                                           RwPluginObjectCopy copyCB);
extern RwInt32 RpWorldSectorRegisterPluginStream(RwUInt32 pluginID,
                                                 RwPluginDataChunkReadCallBack readCB,
                                                 RwPluginDataChunkWriteCallBack writeCB,
                                                 RwPluginDataChunkGetSizeCallBack getSizeCB);
extern RpWorldSector* _rpSectorDefaultRenderCallBack(RpWorldSector* sector);
extern RwBool _rpWorldFindBBox(RpWorld* world, RwBBox* boundingBox);
extern RpWorld* _rpWorldSetupSectorBoundingBoxes(RpWorld* world);
extern void _rpWorldRegisterWorld(RpWorld* world, RwUInt32 memorySize);
extern void _rpWorldUnregisterWorld(RpWorld* world);
extern RpWorld* RpWorldUnlock(RpWorld* world);
extern RpWorld* RpWorldSectorGetWorld(const RpWorldSector* sector);
extern RpWorld* RpWorldRender(RpWorld* world);
extern RwBool RpWorldDestroy(RpWorld* world);
extern RpWorld* RpWorldSetSectorRenderCallBack(RpWorld* world,
                                               RpWorldSectorCallBackRender fpCallBack);
extern RpWorld* RpWorldCreate(RwBBox* boundingBox);
extern RpWorld* RpWorldForAllWorldSectors(RpWorld* world, RpWorldSectorCallBack fpCallBack,
                                          void* pData);
extern RwInt32 RpWorldRegisterPlugin(RwInt32 size, RwUInt32 pluginID,
                                     RwPluginObjectConstructor constructCB,
                                     RwPluginObjectDestructor destructCB,
                                     RwPluginObjectCopy copyCB);
extern RwInt32 RpWorldRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB,
                                           RwPluginDataChunkWriteCallBack writeCB,
                                           RwPluginDataChunkGetSizeCallBack getSizeCB);
extern RwBool RpWorldPluginAttach(void);
extern RpWorld* RpWorldAddCamera(RpWorld* world, RwCamera* camera);
extern RpWorld* RpWorldRemoveCamera(RpWorld* world, RwCamera* camera);
extern RpWorld* RwCameraGetWorld(const RwCamera* camera);
extern RpWorld* RpWorldAddAtomic(RpWorld* world, RpAtomic* atomic);
extern RpWorld* RpAtomicGetWorld(const RpAtomic* atomic);
extern RpAtomic* RpAtomicForAllWorldSectors(RpAtomic* atomic, RpWorldSectorCallBack callback,
                                            void* data);
extern RpWorld* RpWorldAddClump(RpWorld* world, RpClump* clump);
extern RwCamera* RwCameraForAllSectorsInFrustum(RwCamera* camera, RpWorldSectorCallBack callBack,
                                                void* pData);
extern RpWorld* RpWorldAddLight(RpWorld* world, RpLight* light);
extern RpWorld* RpWorldRemoveLight(RpWorld* world, RpLight* light);
extern RxPipeline* RpWorldSetDefaultSectorPipeline(RxPipeline* pipeline);
extern RxPipeline* RpAtomicSetDefaultPipeline(RxPipeline* pipeline);
extern RxNodeDefinition* RxNodeDefinitionGetGameCubeAtomicAllInOne(void);
extern RxNodeDefinition* RxNodeDefinitionGetGameCubeWorldSectorAllInOne(void);

#ifdef __cplusplus
}
#endif

#endif