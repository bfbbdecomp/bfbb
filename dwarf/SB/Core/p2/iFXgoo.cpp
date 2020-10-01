typedef struct RxPS2AllPipeData;
typedef struct RwMeshCache;
typedef struct RxHeap;
typedef struct RpClump;
typedef struct RpMorphTarget;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RxPipelineNode;
typedef struct RwResEntry;
typedef struct rwPS2AllResEntryHeader;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RpGeometry;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct RxPipelineRequiresCluster;
typedef struct rwPS2AllClusterInstanceInfo;
typedef struct RpMeshHeader;
typedef struct RxPipeline;
typedef enum RpMeshHeaderFlags;
typedef struct RpMesh;
typedef struct xVec3;
typedef struct RpTriangle;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpAtomic;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct RwRaster;
typedef struct rwPS2AllFieldRec;
typedef enum RxClusterValidityReq;
typedef struct RwTexture;
typedef struct rxNodePS2AllMatPvtData;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct rxHeapFreeBlock;
typedef enum rxEmbeddedPacketState;
typedef enum RxInstanceFlags;
typedef enum RwCameraProjection;
typedef struct RpMaterial;
typedef enum RxClusterForcePresent;
typedef struct RxClusterDefinition;
typedef struct rwPS2AllResEntryFormat;
typedef struct rwPS2AllClusterQuickInfo;
typedef struct iFXgooParams;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct RxClusterRef;
typedef struct RwCamera;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RxNodeDefinition;
typedef struct RwFrustumPlane;
typedef struct RwPlane;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RpInterpolator;
typedef struct RxPacket;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct RpMaterialList;
typedef enum RwCullMode;
typedef struct rxNodePS2AllPvtData;
typedef struct RwV2d;

typedef RpClump*(*type_3)(RpClump*, void*);
typedef void(*type_6)(RwResEntry*);
typedef RwResEntry*(*type_7)(RxPS2AllPipeData*, RwResEntry**, uint32, type_6);
typedef uint32(*type_9)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_10)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_13)(RxNodeDefinition*);
typedef int32(*type_14)(RxPS2AllPipeData*, void**, uint32);
typedef void(*type_15)(RxNodeDefinition*);
typedef int32(*type_16)(RxPipelineNode*);
typedef void(*type_17)(RxPipelineNode*);
typedef int32(*type_18)(RxPS2AllPipeData*);
typedef int32(*type_19)(RxPipelineNode*, RxPipeline*);
typedef int32(*type_21)(RxPS2AllPipeData*);
typedef RpAtomic*(*type_22)(RpAtomic*);
typedef int32(*type_23)(RxPS2AllPipeData*, RwMatrixTag**);
typedef int32(*type_25)(RxPS2AllPipeData*);
typedef int32(*type_26)(RxPS2AllPipeData*);
typedef RwResEntry*(*type_31)(RxPS2AllPipeData*, RwResEntry**, uint32, type_6);
typedef int32(*type_35)(RxPS2AllPipeData*, void**, uint32);
typedef RwCamera*(*type_41)(RwCamera*);
typedef RwCamera*(*type_42)(RwCamera*);
typedef RwObjectHasFrame*(*type_48)(RwObjectHasFrame*);
typedef int32(*type_49)(RxPS2AllPipeData*);

typedef rwPS2AllClusterQuickInfo type_0[12];
typedef rwPS2AllFieldRec type_1[12];
typedef int8 type_2[16];
typedef float32 type_4[2];
typedef float32 type_5[8];
typedef RwFrustumPlane type_8[6];
typedef int8 type_11[16];
typedef RwV3d type_12[8];
typedef uint16 type_20[3];
typedef float32 type_24[2];
typedef float32 type_27[2];
typedef float32 type_28[2];
typedef uint8 type_29[1];
typedef float32 type_30[2];
typedef RwTexCoords* type_32[8];
typedef rwPS2AllClusterInstanceInfo type_33[12];
typedef uint32 type_34[12];
typedef uint32 type_36[4];
typedef uint8 type_37[2];
typedef float32 type_38[8];
typedef uint32 type_39[4096];
typedef rwPS2AllFieldRec type_40[12];
typedef int8 type_43[32];
typedef int8 type_44[32];
typedef void* type_45[32];
typedef RwResEntry* type_46[1];
typedef RxCluster type_47[1];
typedef float32 type_50[2];
typedef float32 type_51[2];
typedef float32 type_52[2];

struct RxPS2AllPipeData
{
	rxNodePS2AllPvtData* objPvtData;
	rxNodePS2AllMatPvtData* matPvtData;
	void* sourceObject;
	RpMeshHeader* meshHeader;
	RwMeshCache* meshCache;
	RxInstanceFlags objInstance;
	uint32 objIdentifier;
	float32 spExtra;
	int32 numMorphTargets;
	uint32 fastMorphing;
	uint8 transType;
	uint8 primType;
	uint8 matModulate;
	uint8 vu1CodeIndex;
	RpMesh* mesh;
	RwResEntry** cacheEntryRef;
	RxInstanceFlags meshInstance;
	uint32 meshIdentifier;
	RwSurfaceProperties* surfProps;
	RwTexture* texture;
	RwRGBA matCol;
};

struct RwMeshCache
{
	uint32 lengthOfMeshesArray;
	type_46 meshes;
};

struct RxHeap
{
	uint32 superBlockSize;
	rxHeapSuperBlockDescriptor* head;
	rxHeapBlockHeader* headBlock;
	rxHeapFreeBlock* freeBlocks;
	uint32 entriesAlloced;
	uint32 entriesUsed;
	int32 dirty;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_3 callback;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RxPipelineNode
{
	RxNodeDefinition* nodeDef;
	uint32 numOutputs;
	uint32* outputs;
	RxPipelineCluster** slotClusterRefs;
	uint32* slotsContinue;
	void* privateData;
	uint32* inputToClusterSlot;
	RxPipelineNodeTopSortData* topSortData;
	void* initializationData;
	uint32 initializationDataSize;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_6 destroyNotify;
};

struct rwPS2AllResEntryHeader
{
	int32 refCnt;
	int32 clrCnt;
	<unknown type (0xa510)>* data;
	uint32 numVerts;
	uint32 objIdentifier;
	uint32 meshIdentifier;
	int32 batchSize;
	int32 numBatches;
	int32 batchesPerTag;
	int32 morphStart;
	int32 morphFinish;
	int32 morphNum;
	type_0 clquickinfo;
	type_1 fieldRec;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RpGeometry
{
	RwObject object;
	uint32 flags;
	uint16 lockedSinceLastInst;
	int16 refCount;
	int32 numTriangles;
	int32 numVertices;
	int32 numMorphTargets;
	int32 numTexCoordSets;
	RpMaterialList matList;
	RpTriangle* triangles;
	RwRGBA* preLitLum;
	type_32 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_36 pad;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct rwPS2AllClusterInstanceInfo
{
	uint32 attrib;
	uint32 stride;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct RxPipeline
{
	int32 locked;
	uint32 numNodes;
	RxPipelineNode* nodes;
	uint32 packetNumClusterSlots;
	rxEmbeddedPacketState embeddedPacketState;
	RxPacket* embeddedPacket;
	uint32 numInputRequirements;
	RxPipelineRequiresCluster* inputRequirements;
	void* superBlock;
	uint32 superBlockSize;
	uint32 entryPoint;
	uint32 pluginId;
	uint32 pluginData;
};

enum RpMeshHeaderFlags
{
	rpMESHHEADERTRISTRIP = 0x1,
	rpMESHHEADERTRIFAN,
	rpMESHHEADERLINELIST = 0x4,
	rpMESHHEADERPOLYLINE = 0x8,
	rpMESHHEADERPOINTLIST = 0x10,
	rpMESHHEADERPRIMMASK = 0xff,
	rpMESHHEADERUNINDEXED,
	rpMESHHEADERFLAGSFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMesh
{
	uint16* indices;
	uint32 numIndices;
	RpMaterial* material;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RpTriangle
{
	type_20 vertIndex;
	int16 matIndex;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct RwMatrixTag
{
	RwV3d right;
	uint32 flags;
	RwV3d up;
	uint32 pad1;
	RwV3d at;
	uint32 pad2;
	RwV3d pos;
	uint32 pad3;
};

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_22 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct rxReq
{
};

struct RwRaster
{
	RwRaster* parent;
	uint8* cpPixels;
	uint8* palette;
	int32 width;
	int32 height;
	int32 depth;
	int32 stride;
	int16 nOffsetX;
	int16 nOffsetY;
	uint8 cType;
	uint8 cFlags;
	uint8 privateFlags;
	uint8 cFormat;
	uint8* originalPixels;
	int32 originalWidth;
	int32 originalHeight;
	int32 originalStride;
};

struct rwPS2AllFieldRec
{
	int32 numVerts;
	int32 morphNumVerts;
	int32 dataoffset;
	int32 morphDataoffset;
	int16 skip;
	int16 morphSkip;
	int16 reverse;
	uint8 vuoffset;
	type_29 pad;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_43 name;
	type_44 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct rxNodePS2AllMatPvtData
{
	type_25 meshInstanceTestCB;
	type_7 resEntryAllocCB;
	type_14 instanceCB;
	type_18 bridgeCB;
	type_21 postMeshCB;
	int32 vifOffset;
	void** vu1CodeArray;
	uint32 codeArrayLength;
	type_33 clinfo;
	type_34 cliIndex;
	RpMeshHeaderFlags pipeType;
	uint8 totallyOpaque;
	uint8 numStripes;
	uint8 sizeOnVU;
	uint8 pad0;
	rwPS2AllResEntryFormat strip;
	rwPS2AllResEntryFormat list;
	uint32 magicValue;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

enum RxInstanceFlags
{
	rxINSTANCENAINSTANCEFLAG,
	rxINSTANCEDONTINSTANCE,
	rxINSTANCEINPLACEINSTANCE,
	rxINSTANCECONGRUENTINSTANCE = 0x4,
	rxINSTANCEFULLINSTANCE = 0x8,
	rxINSTANCETYPEMASK = 0xe,
	rxINSTANCEXYZ = 0x10,
	rxINSTANCENORMAL = 0x20,
	rxINSTANCERGBA = 0x40,
	rxINSTANCEUV = 0x80,
	rxINSTANCEUV1 = 0x80,
	rxINSTANCEUV2 = 0x100,
	rxINSTANCEUV3 = 0x200,
	rxINSTANCEUV4 = 0x400,
	rxINSTANCEUV5 = 0x800,
	rxINSTANCEUV6 = 0x1000,
	rxINSTANCEUV7 = 0x2000,
	rxINSTANCEUV8 = 0x4000,
	rxINSTANCEUSER1 = 0x8000,
	rxINSTANCEUSER2 = 0x10000,
	rxINSTANCEUSER3 = 0x20000,
	rxINSTANCEUSER4 = 0x40000,
	rxINSTANCEALL = 0x7fff0,
	rxINSTANCEMASK = 0x7ffff,
	rxINSTANCEFORCEENUMSIZEINT = 0x7fffffff
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct rwPS2AllResEntryFormat
{
	uint8 batchRound;
	uint8 stripReverse;
	type_37 pad;
	uint32 maxInputSize;
	int32 batchSize;
	int32 batchesPerTag;
	int32 morphBatchSize;
	int32 morphBatchesPerTag;
	type_40 fieldRec;
};

struct rwPS2AllClusterQuickInfo
{
	<unknown type (0xa510)>* data;
	uint32 stride;
};

struct iFXgooParams
{
	xVec3 center;
	uint32 state;
	float32 warb_time;
	float32 alpha;
	float32 min;
	float32 max;
	float32* warbc;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_41 beginUpdate;
	type_42 endUpdate;
	RwMatrixTag viewMatrix;
	RwRaster* frameBuffer;
	RwRaster* zBuffer;
	RwV2d viewWindow;
	RwV2d recipViewWindow;
	RwV2d viewOffset;
	float32 nearPlane;
	float32 farPlane;
	float32 fogPlane;
	float32 zScale;
	float32 zShift;
	type_8 frustumPlanes;
	RwBBox frustumBoundBox;
	type_12 frustumCorners;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct RxNodeMethods
{
	type_10 nodeBody;
	type_13 nodeInit;
	type_15 nodeTerm;
	type_16 pipelineNodeInit;
	type_17 pipelineNodeTerm;
	type_19 pipelineNodeConfig;
	type_9 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct RxCluster
{
	uint16 flags;
	uint16 stride;
	void* data;
	void* currentData;
	uint32 numAlloced;
	uint32 numUsed;
	RxPipelineCluster* clusterRef;
	uint32 attributes;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_47 clusters;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_48 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

enum RwCullMode
{
	rwCULLMODENACULLMODE,
	rwCULLMODECULLNONE,
	rwCULLMODECULLBACK,
	rwCULLMODECULLFRONT,
	rwCULLMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct rxNodePS2AllPvtData
{
};

struct RwV2d
{
	float32 x;
	float32 y;
};

type_2 buffer;
type_11 buffer;
type_5 sinRangePoint5;
type_38 xFXWarbleParam;
iFXgooParams gooParams;
ulong32 gs_alpha_2;
RwTexture* g_txtrGoo;
type_23 RpAtomicPS2AllObjectSetupCallBack;
type_49 iFXgooBridgeCallBack;
type_35 RpMeshPS2AllInstanceCallBack;
type_31 RpMeshPS2AllResEntryAllocCallBack;
type_26 RpMeshPS2AllMeshInstanceTestCallBack;
long32 FXgooPRS;
RxClusterDefinition RxClPS2normal;
RxClusterDefinition RxClPS2rgba;
RxClusterDefinition RxClPS2uv;
RxClusterDefinition RxClPS2xyz;
<unknown type (0xa510)>* _rwDMAPktPtr;
void* skyUploadedCode;
long32 skyTest_1;
long32 skyClamp_1;
long32 skyTex1_1;
uint32 skyUserSwitch1;
uint32 skyUserSwitch2;
RwCullMode gSkyCullState;
<unknown type (0xa510)> skyClipVect2;
<unknown type (0xa510)> skyClipVect1;
<unknown type (0xa510)> skyCClipVect2;
<unknown type (0xa510)> skyCClipVect1;
int32 skyTLClipperMode;
int32 skyTSClipperMode;
long32 skyPrim_State;
<unknown type (0xa510)> gifTag128;
int32 skyAlphaTex;
int32 skyVertexAlpha;
type_30 xFXanimUV2PScale;
type_28 xFXanimUV2PTrans;
type_27 xFXanimUV2PRotMat1;
type_24 xFXanimUV2PRotMat0;
type_4 xFXanimUVScale;
type_52 xFXanimUVTrans;
type_51 xFXanimUVRotMat1;
type_50 xFXanimUVRotMat0;
RwTexture* xFXanimUV2PTexture;
RwRaster* skyTextureRaster;
type_39 ourGlobals;

RxPipeline* iFXgooCreatePipe();
RxPipeline* iFXgooCreateMaterialPipe();
int32 iFXgooBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData);
void iFXGooSceneExit();
void iFXGooSceneSetup();
void iFXgooSetParams(xVec3* center, uint32 state, float32 warb_time, float32 alpha, float32 min, float32 max, float32* warbc);

// iFXgooCreatePipe__Fv
// Start address: 0x3299e0
RxPipeline* iFXgooCreatePipe()
{
	RxPipeline* newPipe;
	RxPipeline* matPipe;
	RxPipelineNode* plNode;
	RxPipeline* lPipe;
	RxNodeDefinition* ps2All;
}

// iFXgooCreateMaterialPipe__Fv
// Start address: 0x329ab0
RxPipeline* iFXgooCreateMaterialPipe()
{
	RxPipeline* newPipe;
	RxPipeline* lockedPipe;
	RxNodeDefinition* ps2AllMat;
	RxPipelineNode* plNode;
	type_45 VUCodeArray;
}

// iFXgooBridgeCallBack__FP16RxPS2AllPipeData
// Start address: 0x329c90
int32 iFXgooBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData)
{
	uint32 numInitialQW;
	uint32 numUserInitialQW;
	uint32 numExtraQW;
	uint32 prim;
	uint32 primSwitch;
	uint32 fogSwitch;
	RwRaster* customRaster;
	ulong32 tmp;
	ulong32 tmp1;
	<unknown type (0xa510)> ltmp;
	RwTexture* tex;
	int32 rc;
	RxPS2AllPipeData* _p2apd;
	RxPS2AllPipeData* _p2apd;
	RwTexture* _nwtx;
	RwRaster* _nwrs;
	uint32 cFormat;
	int32 textureUploadSuccess;
	uint32 _itQW;
	uint32 _xaQW;
	ulong32 tmp;
	<unknown type (0xa510)> ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)>* _rwDMA_local_rwDMAPktPtr;
	<unknown type (0xa510)> ___ltmp;
	iFXgooParams* goo;
	float32 A;
	float32 B;
	float32 saved_min;
	float32 saved_max;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	ulong32 __tmp1;
	uint32 __prmTmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	ulong32 __tmp1;
	float32 __colScale;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	ulong32 __tmp1;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	ulong32 __tmp1;
	uint32 __skySwitchFlag;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	ulong32 __tmp;
	ulong32 __tmp1;
	<unknown type (0xa510)> __ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	RxPS2AllPipeData* _p2apd;
	void* _kohd;
	ulong32 tmp;
	<unknown type (0xa510)> ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	rwPS2AllResEntryHeader* _p2rh;
	ulong32 __tmp;
	ulong32 __tmp1;
	<unknown type (0xa510)> __ltmp;
	<unknown type (0xa510)> ___ltmp;
	uint32 stat;
}

// iFXGooSceneExit__Fv
// Start address: 0x32a650
void iFXGooSceneExit()
{
}

// iFXGooSceneSetup__Fv
// Start address: 0x32a660
void iFXGooSceneSetup()
{
}

// iFXgooSetParams__FP5xVec3UiffffPf
// Start address: 0x32a690
void iFXgooSetParams(xVec3* center, uint32 state, float32 warb_time, float32 alpha, float32 min, float32 max, float32* warbc)
{
}

