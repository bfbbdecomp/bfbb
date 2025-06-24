#ifndef RWCORE_H
#define RWCORE_H

#include <rwsdk/rwplcore.h>

typedef struct _RxObjSpace3DVertex RxObjSpace3DVertex;

union RxColorUnion
{
    RwRGBA preLitColor;
    RwRGBA color;
};

// TODO: Determine whether c should go before or after objNormal
// Context: These headers came from an official header source (unsure of release platform)
//          However, currently decomped functions seem to pack the struct
//          in this particular way so it's like this for now.
//          See: zActionLIne.cpp

typedef union RxColorUnion RxColorUnion;

struct _RxObjSpace3DVertex
{
    RwV3d objVertex;
    RwV3d objNormal;
    RxColorUnion c;
    RwReal u;
    RwReal v;
};

typedef RxObjSpace3DVertex RxObjSpace3DLitVertex;
typedef RxObjSpace3DLitVertex RwIm3DVertex;

typedef struct rxHeapFreeBlock;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RxHeap;
typedef struct rxHeapBlockHeader;

typedef struct rxHeapBlockHeader rxHeapBlockHeader;

struct rxHeapFreeBlock
{
    RwUInt32 size;
    rxHeapBlockHeader* ptr;
};

typedef struct rxHeapSuperBlockDescriptor rxHeapSuperBlockDescriptor;

struct rxHeapSuperBlockDescriptor
{
    void* start;
    RwUInt32 size;
    rxHeapSuperBlockDescriptor* next;
};

typedef struct rxHeapFreeBlock rxHeapFreeBlock;

struct RxHeap
{
    RwUInt32 superBlockSize;
    rxHeapSuperBlockDescriptor* head;
    rxHeapBlockHeader* headBlock;
    rxHeapFreeBlock* freeBlocks;
    RwUInt32 entriesAlloced;
    RwUInt32 entriesUsed;
    RwBool dirty;
};

typedef struct rxHeapFreeBlock rxHeapFreeBlock;

struct rxHeapBlockHeader
{
    rxHeapBlockHeader *prev, *next;
    RwUInt32 size;
    rxHeapFreeBlock* freeEntry;
    RwUInt32 pad[4];
};

enum RxClusterValidityReq
{
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

enum RxClusterValid
{
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

typedef struct RxPipelineNode;
typedef struct RxNodeDefinition;
typedef struct RxPipeline;
typedef struct RxPipelineNodeParam;
typedef struct RxPipelineNodeTopSortData;

struct RxClusterDefinition
{
    RwChar* name;
    RwUInt32 defaultStride;
    RwUInt32 defaultAttributes;
    const RwChar* attributeSet;
};

typedef enum RxClusterValid RxClusterValid;

struct RxOutputSpec
{
    RwChar* name;
    RxClusterValid* outputClusters;
    RxClusterValid allOtherClusters;
};

enum RxClusterForcePresent
{
    rxCLALLOWABSENT = FALSE,
    rxCLFORCEPRESENT = TRUE,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

typedef struct RxClusterDefinition RxClusterDefinition;
typedef enum RxClusterForcePresent RxClusterForcePresent;

struct RxClusterRef
{
    RxClusterDefinition* clusterDef;
    RxClusterForcePresent forcePresent;
    RwUInt32 reserved;
};

typedef struct RxClusterRef RxClusterRef;
typedef enum RxClusterValidityReq RxClusterValidityReq;
typedef struct RxOutputSpec RxOutputSpec;

struct RxIoSpec
{
    RwUInt32 numClustersOfInterest;
    RxClusterRef* clustersOfInterest;
    RxClusterValidityReq* inputRequirements;
    RwUInt32 numOutputs;
    RxOutputSpec* outputs;
};

typedef struct RxPipelineNode RxPipelineNode;
typedef struct RxPipelineNodeParam RxPipelineNodeParam;
typedef struct RxNodeDefinition RxNodeDefinition;
typedef struct RxPipeline RxPipeline;

typedef RwBool (*RxNodeBodyFn)(RxPipelineNode* self, const RxPipelineNodeParam* params);
typedef RwBool (*RxNodeInitFn)(RxNodeDefinition* self);
typedef void (*RxNodeTermFn)(RxNodeDefinition* self);
typedef RwBool (*RxPipelineNodeInitFn)(RxPipelineNode* self);
typedef void (*RxPipelineNodeTermFn)(RxPipelineNode* self);
typedef RwBool (*RxPipelineNodeConfigFn)(RxPipelineNode* self, RxPipeline* pipeline);
typedef RwUInt32 (*RxConfigMsgHandlerFn)(RxPipelineNode* self, RwUInt32 msg, RwUInt32 intparam,
                                         void* ptrparam);

struct RxNodeMethods
{
    RxNodeBodyFn nodeBody;
    RxNodeInitFn nodeInit;
    RxNodeTermFn nodeTerm;
    RxPipelineNodeInitFn pipelineNodeInit;
    RxPipelineNodeTermFn pipelineNodeTerm;
    RxPipelineNodeConfigFn pipelineNodeConfig;
    RxConfigMsgHandlerFn configMsgHandler;
};

enum RxNodeDefEditable
{
    rxNODEDEFCONST = FALSE,
    rxNODEDEFEDITABLE = TRUE,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

typedef struct RxNodeMethods RxNodeMethods;
typedef struct RxIoSpec RxIoSpec;
typedef enum RxNodeDefEditable RxNodeDefEditable;

struct RxNodeDefinition
{
    RwChar* name;
    RxNodeMethods nodeMethods;
    RxIoSpec io;
    RwUInt32 pipelineNodePrivateDataSize;
    RxNodeDefEditable editable;
    RwInt32 InputPipesCnt;
};

struct RxPipelineCluster
{
    RxClusterDefinition* clusterRef;
    RwUInt32 creationAttributes;
};

typedef struct RxPipelineCluster RxPipelineCluster;

struct RxCluster
{
    RwUInt16 flags;
    RwUInt16 stride;
    void* data;
    void* currentData;
    RwUInt32 numAlloced;
    RwUInt32 numUsed;
    RxPipelineCluster* clusterRef;
    RwUInt32 attributes;
};

typedef struct RxPipelineCluster RxPipelineCluster;
typedef struct RxCluster RxCluster;

struct RxPacket
{
    RwUInt16 flags;
    RwUInt16 numClusters;
    RxPipeline* pipeline;
    RwUInt32* inputToClusterSlot;
    RwUInt32* slotsContinue;
    RxPipelineCluster** slotClusterRefs;
    RxCluster clusters[1];
};

typedef struct RxPipelineNodeTopSortData RxPipelineNodeTopSortData;

struct RxPipelineNode
{
    RxNodeDefinition* nodeDef;
    RwUInt32 numOutputs;
    RwUInt32* outputs;
    RxPipelineCluster** slotClusterRefs;
    RwUInt32* slotsContinue;
    void* privateData;
    RwUInt32* inputToClusterSlot;
    RxPipelineNodeTopSortData* topSortData;
    void* initializationData;
    RwUInt32 initializationDataSize;
};

typedef struct rxReq rxReq;

struct RxPipelineNodeTopSortData
{
    RwUInt32 numIns;
    RwUInt32 numInsVisited;
    rxReq* req;
};

typedef struct RxHeap RxHeap;

struct RxPipelineNodeParam
{
    void* dataParam;
    RxHeap* heap;
};

enum rxEmbeddedPacketState
{
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

struct RxPipelineRequiresCluster
{
    RxClusterDefinition* clusterDef;
    RxClusterValidityReq rqdOrOpt;
    RwUInt32 slotIndex;
};

typedef enum rxEmbeddedPacketState rxEmbeddedPacketState;
typedef struct RxPacket RxPacket;
typedef struct RxPipelineRequiresCluster RxPipelineRequiresCluster;

struct RxPipeline
{
    RwBool locked;
    RwUInt32 numNodes;
    RxPipelineNode* nodes;
    RwUInt32 packetNumClusterSlots;
    rxEmbeddedPacketState embeddedPacketState;
    RxPacket* embeddedPacket;
    RwUInt32 numInputRequirements;
    RxPipelineRequiresCluster* inputRequirements;
    void* superBlock;
    RwUInt32 superBlockSize;
    RwUInt32 entryPoint;
    RwUInt32 pluginId;
    RwUInt32 pluginData;
};

typedef RwUInt32* RxNodeOutput;
typedef RxPipelineNode* RxNodeInput;
typedef RxPipeline RxLockedPipe;

enum RwRasterLockMode
{
    rwRASTERLOCKWRITE = 0x01,
    rwRASTERLOCKREAD = 0x02,
    rwRASTERLOCKNOFETCH = 0x04,
    rwRASTERLOCKRAW = 0x08,
    rwRASTERLOCKMODEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

#define rwRASTERLOCKREADWRITE (rwRASTERLOCKREAD | rwRASTERLOCKWRITE)

enum RwRasterFlipMode
{
    rwRASTERFLIPDONTWAIT = 0,
    rwRASTERFLIPWAITVSYNC = 1,
    rwRASTERFLIPMODEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

enum RwRasterType
{
    rwRASTERTYPENORMAL = 0x00,
    rwRASTERTYPEZBUFFER = 0x01,
    rwRASTERTYPECAMERA = 0x02,
    rwRASTERTYPETEXTURE = 0x04,
    rwRASTERTYPECAMERATEXTURE = 0x05,
    rwRASTERTYPEMASK = 0x07,
    rwRASTERDONTALLOCATE = 0x80,
    rwRASTERTYPEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

enum RwRasterFormat
{
    rwRASTERFORMATDEFAULT = 0x0000,
    rwRASTERFORMAT1555 = 0x0100,
    rwRASTERFORMAT565 = 0x0200,
    rwRASTERFORMAT4444 = 0x0300,
    rwRASTERFORMATLUM8 = 0x0400,
    rwRASTERFORMAT8888 = 0x0500,
    rwRASTERFORMAT888 = 0x0600,
    rwRASTERFORMAT16 = 0x0700,
    rwRASTERFORMAT24 = 0x0800,
    rwRASTERFORMAT32 = 0x0900,
    rwRASTERFORMAT555 = 0x0a00,
    rwRASTERFORMATAUTOMIPMAP = 0x1000,
    rwRASTERFORMATPAL8 = 0x2000,
    rwRASTERFORMATPAL4 = 0x4000,
    rwRASTERFORMATMIPMAP = 0x8000,
    rwRASTERFORMATPIXELFORMATMASK = 0x0f00,
    rwRASTERFORMATMASK = 0xff00,
    rwRASTERFORMATFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

enum RwRasterPrivateFlag
{
    rwRASTERGAMMACORRECTED = 0x01,
    rwRASTERPIXELLOCKEDREAD = 0x02,
    rwRASTERPIXELLOCKEDWRITE = 0x04,
    rwRASTERPALETTELOCKEDREAD = 0x08,
    rwRASTERPALETTELOCKEDWRITE = 0x10,
    rwRASTERPIXELLOCKEDRAW = 0x20,
    rwRASTERPRIVATEFLAGFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

#define rwRASTERPIXELLOCKED (rwRASTERPIXELLOCKEDREAD | rwRASTERPIXELLOCKEDWRITE)
#define rwRASTERPALETTELOCKED (rwRASTERPALETTELOCKEDREAD | rwRASTERPALETTELOCKEDWRITE)
#define rwRASTERLOCKED (rwRASTERPIXELLOCKED | rwRASTERPALETTELOCKED)

typedef struct RwRaster RwRaster;

struct RwRaster
{
    RwRaster* parent;
    RwUInt8* cpPixels;
    RwUInt8* palette;
    RwInt32 width, height, depth;
    RwInt32 stride;
    RwInt16 nOffsetX, nOffsetY;
    RwUInt8 cType;
    RwUInt8 cFlags;
    RwUInt8 privateFlags;
    RwUInt8 cFormat;
    RwUInt8* originalPixels;
    RwInt32 originalWidth;
    RwInt32 originalHeight;
    RwInt32 originalStride;
};

#define RwRasterGetWidth(_raster) ((_raster)->width)

#define RwRasterGetHeight(_raster) ((_raster)->height)

#define RwRasterGetStride(_raster) ((_raster)->stride)

#define RwRasterGetDepth(_raster) ((_raster)->depth)

#define RwRasterGetFormat(_raster) ((((_raster)->cFormat) & (rwRASTERFORMATMASK >> 8)) << 8)

#define RwRasterGetType(_raster) (((_raster)->cType) & rwRASTERTYPEMASK)

#define RwRasterGetParent(_raster) ((_raster)->parent)

typedef enum RwShadeMode RwShadeMode;
typedef enum RwBlendFunction RwBlendFunction;
typedef enum RwTextureAddressMode RwTextureAddressMode;
typedef enum RwTextureFilterMode RwTextureFilterMode;
typedef enum RwFogType RwFogType;

struct RxRenderStateVector
{
    RwUInt32 Flags;
    RwShadeMode ShadeMode;
    RwBlendFunction SrcBlend;
    RwBlendFunction DestBlend;
    RwRaster* TextureRaster;
    RwTextureAddressMode AddressModeU;
    RwTextureAddressMode AddressModeV;
    RwTextureFilterMode FilterMode;
    RwRGBA BorderColor;
    RwFogType FogType;
    RwRGBA FogColor;
};

struct RwImage
{
    RwInt32 flags;
    RwInt32 width;
    RwInt32 height;
    RwInt32 depth;
    RwInt32 stride;
    RwUInt8* cpPixels;
    RwRGBA* palette;
};

#define RwImageSetStrideMacro(_image, _stride) (((_image)->stride = (_stride)), (_image))

#define RwImageSetPixelsMacro(_image, _pixels) (((_image)->cpPixels = (_pixels)), (_image))

#define RwImageSetPaletteMacro(_image, _palette) (((_image)->palette = (_palette)), (_image))

#define RwImageGetWidthMacro(_image) ((_image)->width)

#define RwImageGetHeightMacro(_image) ((_image)->height)

#define RwImageGetDepthMacro(_image) ((_image)->depth)

#define RwImageGetStrideMacro(_image) ((_image)->stride)

#define RwImageGetPixelsMacro(_image) ((_image)->cpPixels)

#define RwImageGetPaletteMacro(_image) ((_image)->palette)

#define RwImageSetStride(_image, _stride) RwImageSetStrideMacro(_image, _stride)

#define RwImageSetPixels(_image, _pixels) RwImageSetPixelsMacro(_image, _pixels)

#define RwImageSetPalette(_image, _palette) RwImageSetPaletteMacro(_image, _palette)

#define RwImageGetWidth(_image) RwImageGetWidthMacro(_image)

#define RwImageGetHeight(_image) RwImageGetHeightMacro(_image)

#define RwImageGetDepth(_image) RwImageGetDepthMacro(_image)

#define RwImageGetStride(_image) RwImageGetStrideMacro(_image)

#define RwImageGetPixels(_image) RwImageGetPixelsMacro(_image)

#define RwImageGetPalette(_image) RwImageGetPaletteMacro(_image)

struct RwTexDictionary
{
    RwObject object;
    RwLinkList texturesInDict;
    RwLLLink lInInstance;
};

typedef struct RwTexDictionary RwTexDictionary;

struct RwTexture
{
    RwRaster* raster;
    RwTexDictionary* dict;
    RwLLLink lInDictionary;
    RwChar name[32];
    RwChar mask[32];
    RwUInt32 filterAddressing;
    RwInt32 refCount;
};

typedef struct RwTexture RwTexture;

typedef RwTexture* (*RwTextureCallBackRead)(const RwChar* name, const RwChar* maskName);
typedef RwTexture* (*RwTextureCallBack)(RwTexture* texture, void* pData);

#define RwTextureGetRasterMacro(_tex) ((_tex)->raster)

#define RwTextureAddRefMacro(_tex) (((_tex)->refCount++), (_tex))

#define RwTextureAddRefVoidMacro(_tex)                                                             \
    MACRO_START                                                                                    \
    {                                                                                              \
        (_tex)->refCount++;                                                                        \
    }                                                                                              \
    MACRO_STOP

#define RwTextureGetNameMacro(_tex) ((_tex)->name)

#define RwTextureGetMaskNameMacro(_tex) ((_tex)->mask)

#define RwTextureGetDictionaryMacro(_tex) ((_tex)->dict)

#define RwTextureSetFilterModeMacro(_tex, _filtering)                                              \
    (((_tex)->filterAddressing = ((_tex)->filterAddressing & ~rwTEXTUREFILTERMODEMASK) |           \
                                 (((RwUInt32)(_filtering)) & rwTEXTUREFILTERMODEMASK)),            \
     (_tex))

#define RwTextureGetFilterModeMacro(_tex)                                                          \
    ((RwTextureFilterMode)((_tex)->filterAddressing & rwTEXTUREFILTERMODEMASK))

#define RwTextureSetAddressingMacro(_tex, _addressing)                                             \
    (((_tex)->filterAddressing =                                                                   \
          ((_tex)->filterAddressing & ~rwTEXTUREADDRESSINGMASK) |                                  \
          (((((RwUInt32)(_addressing)) << 8) & rwTEXTUREADDRESSINGUMASK) |                         \
           ((((RwUInt32)(_addressing)) << 12) & rwTEXTUREADDRESSINGVMASK))),                       \
     (_tex))

#define RwTextureSetAddressingUMacro(_tex, _addressing)                                            \
    (((_tex)->filterAddressing = ((_tex)->filterAddressing & ~rwTEXTUREADDRESSINGUMASK) |          \
                                 (((RwUInt32)(_addressing) << 8) & rwTEXTUREADDRESSINGUMASK)),     \
     (_tex))

#define RwTextureSetAddressingVMacro(_tex, _addressing)                                            \
    (((_tex)->filterAddressing = ((_tex)->filterAddressing & ~rwTEXTUREADDRESSINGVMASK) |          \
                                 (((RwUInt32)(_addressing) << 12) & rwTEXTUREADDRESSINGVMASK)),    \
     (_tex))

#define RwTextureGetAddressingMacro(_tex)                                                          \
    (((((_tex)->filterAddressing & rwTEXTUREADDRESSINGUMASK) >> 8) ==                              \
      (((_tex)->filterAddressing & rwTEXTUREADDRESSINGVMASK) >> 12)) ?                             \
         ((RwTextureAddressMode)(((_tex)->filterAddressing & rwTEXTUREADDRESSINGVMASK) >> 12)) :   \
         rwTEXTUREADDRESSNATEXTUREADDRESS)

#define RwTextureGetAddressingUMacro(_tex)                                                         \
    ((RwTextureAddressMode)(((_tex)->filterAddressing & rwTEXTUREADDRESSINGUMASK) >> 8))

#define RwTextureGetAddressingVMacro(_tex)                                                         \
    ((RwTextureAddressMode)(((_tex)->filterAddressing & rwTEXTUREADDRESSINGVMASK) >> 12))

#define RwTextureGetRaster(_tex) RwTextureGetRasterMacro(_tex)

#define RwTextureAddRef(_tex) RwTextureAddRefMacro(_tex)

#define RwTextureGetName(_tex) RwTextureGetNameMacro(_tex)

#define RwTextureGetMaskName(_tex) RwTextureGetMaskNameMacro(_tex)

#define RwTextureGetDictionary(_tex) RwTextureGetDictionaryMacro(_tex)

#define RwTextureSetFilterMode(_tex, _filtering) RwTextureSetFilterModeMacro(_tex, _filtering)

#define RwTextureGetFilterMode(_tex) RwTextureGetFilterModeMacro(_tex)

#define RwTextureSetAddressing(_tex, _addressing) RwTextureSetAddressingMacro(_tex, _addressing)

#define RwTextureSetAddressingU(_tex, _addressing) RwTextureSetAddressingUMacro(_tex, _addressing)

#define RwTextureSetAddressingV(_tex, _addressing) RwTextureSetAddressingVMacro(_tex, _addressing)

#define RwTextureGetAddressing(_tex) RwTextureGetAddressingMacro(_tex)

#define RwTextureGetAddressingU(_tex) RwTextureGetAddressingUMacro(_tex)

#define RwTextureGetAddressingV(_tex) RwTextureGetAddressingVMacro(_tex)

struct RwFrame
{
    RwObject object;
    RwLLLink inDirtyListLink;
    RwMatrix modelling;
    RwMatrix ltm;
    RwLinkList objectList;
    struct RwFrame* child;
    struct RwFrame* next;
    struct RwFrame* root;
};

typedef struct RwFrame RwFrame;

typedef RwFrame* (*RwFrameCallBack)(RwFrame* frame, void* data);

#define RwFrameGetParent(_f) ((RwFrame*)rwObjectGetParent(_f))

#define RwFrameGetMatrix(_f) (&(_f)->modelling)

typedef struct RwObjectHasFrame RwObjectHasFrame;

typedef struct RwObjectHasFrame;
typedef RwObjectHasFrame* (*RwObjectHasFrameSyncFunction)(RwObjectHasFrame* object);

struct RwObjectHasFrame
{
    RwObject object;
    RwLLLink lFrame;
    RwObjectHasFrameSyncFunction sync;
};

#define rwObjectHasFrameSetFrame(object, frame) _rwObjectHasFrameSetFrame(object, frame)
#define rwObjectHasFrameReleaseFrame(object) _rwObjectHasFrameReleaseFrame(object)

struct rwFrameList
{
    RwFrame** frames;
    RwInt32 numFrames;
};

struct RwBBox
{
    RwV3d sup;
    RwV3d inf;
};

enum RwCameraClearMode
{
    rwCAMERACLEARIMAGE = 0x1,
    rwCAMERACLEARZ = 0x2,
    rwCAMERACLEARSTENCIL = 0x4,
    rwCAMERACLEARMODEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

enum RwCameraProjection
{
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

enum RwFrustumTestResult
{
    rwSPHEREOUTSIDE = 0,
    rwSPHEREBOUNDARY = 1,
    rwSPHEREINSIDE = 2,
    rwFRUSTUMTESTRESULTFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

typedef struct RwPlane RwPlane;

struct RwFrustumPlane
{
    RwPlane plane;
    RwUInt8 closestX;
    RwUInt8 closestY;
    RwUInt8 closestZ;
    RwUInt8 pad;
};

typedef struct RwCamera;

typedef struct RwCamera RwCamera;

typedef RwCamera* (*RwCameraBeginUpdateFunc)(RwCamera* camera);
typedef RwCamera* (*RwCameraEndUpdateFunc)(RwCamera* camera);

typedef enum RwCameraProjection RwCameraProjection;
typedef struct RwV2d RwV2d;
typedef struct RwFrustumPlane RwFrustumPlane;
typedef struct RwBBox RwBBox;

struct RwCamera
{
    RwObjectHasFrame object;
    RwCameraProjection projectionType;
    RwCameraBeginUpdateFunc beginUpdate;
    RwCameraEndUpdateFunc endUpdate;
    RwMatrix viewMatrix;
    RwRaster* frameBuffer;
    RwRaster* zBuffer;
    RwV2d viewWindow;
    RwV2d recipViewWindow;
    RwV2d viewOffset;
    RwReal nearPlane;
    RwReal farPlane;
    RwReal fogPlane;
    RwReal zScale, zShift;
    RwFrustumPlane frustumPlanes[6];
    RwBBox frustumBoundBox;
    RwV3d frustumCorners[8];
};

typedef RwCamera* (*RwCameraCallBack)(RwCamera* camera, void* data);

#define RwCameraGetViewOffset(_camera) (&((_camera)->viewOffset))

#define RwCameraSetRaster(_camera, _raster) (((_camera)->frameBuffer = (_raster)), (_camera))

#define RwCameraGetRaster(_camera) ((_camera)->frameBuffer)

#define RwCameraSetZRaster(_camera, _raster) (((_camera)->zBuffer = (_raster)), (_camera))

#define RwCameraGetZRaster(_camera) ((_camera)->zBuffer)

#define RwCameraGetNearClipPlane(_camera) ((_camera)->nearPlane)

#define RwCameraGetFarClipPlane(_camera) ((_camera)->farPlane)

#define RwCameraSetFogDistance(_camera, _distance) (((_camera)->fogPlane = (_distance)), (_camera))

#define RwCameraGetFogDistance(_camera) ((_camera)->fogPlane)

#define RwCameraGetCurrentCamera() ((RwCamera*)RWSRCGLOBAL(curCamera))

#define RwCameraGetProjection(_camera) ((_camera)->projectionType)

#define RwCameraGetViewWindow(_camera) (&((_camera)->viewWindow))

#define RwCameraGetViewMatrix(_camera) (&((_camera)->viewMatrix))

#define RwCameraSetFrame(_camera, _frame)                                                          \
    (_rwObjectHasFrameSetFrame((_camera), (_frame)), (_camera))

#define RwCameraGetFrame(_camera) ((RwFrame*)rwObjectGetParent((_camera)))

#ifdef __cplusplus
extern "C" {
#endif

extern RwBBox* RwBBoxCalculate(RwBBox* boundBox, const RwV3d* verts, RwInt32 numVerts);
extern RwBBox* RwBBoxInitialize(RwBBox* boundBox, const RwV3d* vertex);
extern RwBBox* RwBBoxAddPoint(RwBBox* boundBox, const RwV3d* vertex);
extern RwInt32 RwCameraRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB,
                                            RwPluginDataChunkWriteCallBack writeCB,
                                            RwPluginDataChunkGetSizeCallBack getSizeCB);
extern RwCamera* RwCameraStreamRead(RwStream* stream);
extern RwInt32 RwFrameRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB,
                                           RwPluginDataChunkWriteCallBack writeCB,
                                           RwPluginDataChunkGetSizeCallBack getSizeCB);
typedef struct rwFrameList rwFrameList;

extern RwBool _rwFrameListFindFrame(const rwFrameList* frameList, const RwFrame* frame,
                                    RwInt32* npIndex);
extern rwFrameList* _rwFrameListDeinitialize(rwFrameList* frameList);
extern rwFrameList* _rwFrameListStreamRead(RwStream* stream, rwFrameList* fl);
extern RwInt32 RwTextureRegisterPluginStream(RwUInt32 pluginID,
                                             RwPluginDataChunkReadCallBack readCB,
                                             RwPluginDataChunkWriteCallBack writeCB,
                                             RwPluginDataChunkGetSizeCallBack getSizeCB);
extern RwUInt32 RwTextureStreamGetSize(const RwTexture* texture);
extern const RwTexture* RwTextureStreamWrite(const RwTexture* texture, RwStream* stream);
extern RwTexture* RwTextureStreamRead(RwStream* stream);
extern RwTexDictionary* RwTexDictionaryStreamRead(RwStream* stream);
extern RwCamera* RwCameraEndUpdate(RwCamera* camera);
extern RwCamera* RwCameraBeginUpdate(RwCamera* camera);
extern RwCamera* RwCameraSetViewOffset(RwCamera* camera, const RwV2d* offset);
extern RwCamera* RwCameraSetNearClipPlane(RwCamera* camera, RwReal nearClip);
extern RwCamera* RwCameraSetFarClipPlane(RwCamera* camera, RwReal farClip);
typedef enum RwFrustumTestResult RwFrustumTestResult;
typedef struct RwSphere RwSphere;

extern RwFrustumTestResult RwCameraFrustumTestSphere(const RwCamera* camera,
                                                     const RwSphere* sphere);
extern RwCamera* RwCameraClear(RwCamera* camera, RwRGBA* colour, RwInt32 clearMode);
extern RwCamera* RwCameraShowRaster(RwCamera* camera, void* pDev, RwUInt32 flags);
extern RwCamera* RwCameraSetProjection(RwCamera* camera, RwCameraProjection projection);
extern RwCamera* RwCameraSetViewWindow(RwCamera* camera, const RwV2d* viewWindow);
extern RwInt32 RwCameraRegisterPlugin(RwInt32 size, RwUInt32 pluginID,
                                      RwPluginObjectConstructor constructCB,
                                      RwPluginObjectDestructor destructCB,
                                      RwPluginObjectCopy copyCB);
extern RwBool RwCameraDestroy(RwCamera* camera);
extern RwCamera* RwCameraCreate(void);
extern RwBool RwFrameDirty(const RwFrame* frame);
extern RwFrame* RwFrameCreate(void);
extern RwBool RwFrameDestroy(RwFrame* frame);
extern RwBool RwFrameDestroyHierarchy(RwFrame* frame);
extern RwFrame* RwFrameUpdateObjects(RwFrame* frame);
extern RwMatrix* RwFrameGetLTM(RwFrame* frame);
extern RwFrame* RwFrameGetRoot(const RwFrame* frame);
extern RwFrame* RwFrameAddChild(RwFrame* parent, RwFrame* child);
extern RwFrame* RwFrameRemoveChild(RwFrame* child);
extern RwFrame* RwFrameForAllChildren(RwFrame* frame, RwFrameCallBack callBack, void* data);
extern RwFrame* RwFrameTranslate(RwFrame* frame, const RwV3d* v, RwOpCombineType combine);
extern RwFrame* RwFrameTransform(RwFrame* frame, const RwMatrix* m, RwOpCombineType combine);
extern RwFrame* RwFrameRotate(RwFrame* frame, const RwV3d* axis, RwReal angle,
                              RwOpCombineType combine);
extern RwFrame* RwFrameOrthoNormalize(RwFrame* frame);
extern RwInt32 RwFrameRegisterPlugin(RwInt32 size, RwUInt32 pluginID,
                                     RwPluginObjectConstructor constructCB,
                                     RwPluginObjectDestructor destructCB,
                                     RwPluginObjectCopy copyCB);
typedef struct RwImage RwImage;

extern RwImage* RwImageCreate(RwInt32 width, RwInt32 height, RwInt32 depth);
extern RwBool RwImageDestroy(RwImage* image);
extern RwImage* RwImageAllocatePixels(RwImage* image);
extern RwImage* RwImageFreePixels(RwImage* image);
extern RwImage* RwImageMakeMask(RwImage* image);
extern RwImage* RwImageApplyMask(RwImage* image, const RwImage* mask);
extern const RwChar* RwImageFindFileType(const RwChar* imageName);
extern RwImage* RwImageReadMaskedImage(const RwChar* imageName, const RwChar* maskname);
extern RwRGBA* RwRGBASetFromPixel(RwRGBA* rgbOut, RwUInt32 pixelValue, RwInt32 rasterFormat);
extern RwImage* RwImageCopy(RwImage* destImage, const RwImage* sourceImage);
extern RwImage* RwImageGammaCorrect(RwImage* image);
extern RwBool RwImageSetGamma(RwReal gammaValue);
extern RwImage* RwImageSetFromRaster(RwImage* image, RwRaster* raster);
extern RwRaster* RwRasterSetFromImage(RwRaster* raster, RwImage* image);
extern RwImage* RwImageFindRasterFormat(RwImage* ipImage, RwInt32 nRasterType, RwInt32* npWidth,
                                        RwInt32* npHeight, RwInt32* npDepth, RwInt32* npFormat);
extern RwRaster* RwRasterUnlock(RwRaster* raster);
extern RwRaster* RwRasterUnlockPalette(RwRaster* raster);
extern RwBool RwRasterDestroy(RwRaster* raster);
extern RwInt32 RwRasterRegisterPlugin(RwInt32 size, RwUInt32 pluginID,
                                      RwPluginObjectConstructor constructCB,
                                      RwPluginObjectDestructor destructCB,
                                      RwPluginObjectCopy copyCB);
extern RwUInt8* RwRasterLockPalette(RwRaster* raster, RwInt32 lockMode);
extern RwInt32 RwRasterGetNumLevels(RwRaster* raster);
extern RwRaster* RwRasterShowRaster(RwRaster* raster, void* dev, RwUInt32 flags);
extern RwRaster* RwRasterCreate(RwInt32 width, RwInt32 height, RwInt32 depth, RwInt32 flags);
extern RwUInt8* RwRasterLock(RwRaster* raster, RwUInt8 level, RwInt32 lockMode);
extern RwImage* RwImageResample(RwImage* dstImage, const RwImage* srcImage);
extern RwImage* RwImageCreateResample(const RwImage* srcImage, RwInt32 width, RwInt32 height);
extern void _rwFrameSyncDirty(void);
extern RwBool RwTextureSetReadCallBack(RwTextureCallBackRead callBack);
extern RwBool RwTextureSetMipmapping(RwBool enable);
extern RwBool RwTextureGetMipmapping(void);
extern RwBool RwTextureSetAutoMipmapping(RwBool enable);
extern RwBool RwTextureGetAutoMipmapping(void);
extern RwTexture* RwTextureSetRaster(RwTexture* texture, RwRaster* raster);
extern RwTexDictionary* RwTexDictionaryCreate(void);
extern RwBool RwTexDictionaryDestroy(RwTexDictionary* dict);
extern const RwTexDictionary* RwTexDictionaryForAllTextures(const RwTexDictionary* dict,
                                                            RwTextureCallBack fpCallBack,
                                                            void* pData);
extern RwTexture* RwTextureCreate(RwRaster* raster);
extern RwBool RwTextureDestroy(RwTexture* texture);
extern RwTexture* RwTextureSetName(RwTexture* texture, const RwChar* name);
extern RwTexture* RwTextureSetMaskName(RwTexture* texture, const RwChar* maskName);
extern RwTexture* RwTexDictionaryAddTexture(RwTexDictionary* dict, RwTexture* texture);
extern RwTexture* RwTexDictionaryRemoveTexture(RwTexture* texture);
extern RwTexture* RwTexDictionaryFindNamedTexture(RwTexDictionary* dict, const RwChar* name);
extern RwTexDictionary* RwTexDictionaryGetCurrent(void);
extern RwBool RwTextureGenerateMipmapName(RwChar* name, RwChar* maskName, RwUInt8 mipLevel,
                                          RwInt32 format);
extern RwTexture* RwTextureRead(const RwChar* name, const RwChar* maskName);
extern RwInt32 RwTextureRegisterPlugin(RwInt32 size, RwUInt32 pluginID,
                                       RwPluginObjectConstructor constructCB,
                                       RwPluginObjectDestructor destructCB,
                                       RwPluginObjectCopy copyCB);
extern RwBool RwTextureRasterGenerateMipmaps(RwRaster* raster, RwImage* image);
extern void _rwObjectHasFrameSetFrame(void* object, RwFrame* frame);
extern void _rwObjectHasFrameReleaseFrame(void* object);
extern void* RwIm3DTransform(RwIm3DVertex* pVerts, RwUInt32 numVerts, RwMatrix* ltm,
                             RwUInt32 flags);
extern RwBool RwIm3DEnd(void);
extern RwBool RwIm3DRenderIndexedPrimitive(RwPrimitiveType primType, RwImVertexIndex* indices,
                                           RwInt32 numIndices);
extern RwBool RwIm3DRenderPrimitive(RwPrimitiveType primType);
extern RxPipeline* RwIm3DSetTransformPipeline(RxPipeline* pipeline);
extern RxPipeline* RwIm3DSetRenderPipeline(RxPipeline* pipeline, RwPrimitiveType primType);
extern void _rxPacketDestroy(RxPacket* Packet);
extern RwBool _rxPipelineClose(void);
extern RwBool _rxPipelineOpen(void);
extern RxHeap* RxHeapGetGlobalHeap(void);
extern RxPipeline* RxPipelineExecute(RxPipeline* pipeline, void* data, RwBool heapReset);
extern RxPipeline* RxPipelineCreate(void);
extern void _rxPipelineDestroy(RxPipeline* Pipeline);
extern RxPipeline* RxLockedPipeUnlock(RxLockedPipe* pipeline);
extern RxLockedPipe* RxPipelineLock(RxPipeline* pipeline);
extern RxPipelineNode* RxPipelineFindNodeByName(RxPipeline* pipeline, const RwChar* name,
                                                RxPipelineNode* start, RwInt32* nodeIndex);
extern RxLockedPipe* RxLockedPipeAddFragment(RxLockedPipe* pipeline, RwUInt32* firstIndex,
                                             RxNodeDefinition* nodeDef0, ...);
extern RxPipeline* RxLockedPipeAddPath(RxLockedPipe* pipeline, RxNodeOutput out, RxNodeInput in);
extern void RxHeapFree(RxHeap* heap, void* block);
extern RwBool _rxHeapReset(RxHeap* heap);
extern void RxHeapDestroy(RxHeap* heap);
extern RxHeap* RxHeapCreate(RwUInt32 size);
typedef struct RxRenderStateVector RxRenderStateVector;

extern RxRenderStateVector*
RxRenderStateVectorSetDefaultRenderStateVector(RxRenderStateVector* rsvp);
extern RxRenderStateVector* RxRenderStateVectorLoadDriverState(RxRenderStateVector* rsvp);
extern void RwGameCubeCameraTextureFlush(RwRaster* ras, RwUInt32 param);

#ifdef __cplusplus
}
#endif

#endif
